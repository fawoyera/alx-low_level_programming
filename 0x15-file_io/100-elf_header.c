#include "main.h"
int print_elf32(Elf32_Ehdr *first, unsigned char *e_ident);
int print_elf64(Elf64_Ehdr *second, unsigned char *e_ident);
/**
 * main - display the information in the ELF header of an ELF file
 * @ac: argument count
 * @av: array of argument vector
 *
 * Return: 0 if success
 */
int main(int ac, char **av)
{
	int fd;
	unsigned char e_ident[EI_NIDENT];
	ssize_t byte_read;
	size_t siz;
	off_t of;
	Elf32_Ehdr *first;
	Elf64_Ehdr *second;

	if (ac != 2)
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n"), exit(98);

	fd = open(av[1], O_RDONLY);
	if (fd == -1)
		dprintf(STDERR_FILENO, "Error: Can't open file %s in read only mode\n",
				av[1]), exit(98);

	byte_read = read(fd, e_ident, EI_NIDENT);
	if (byte_read == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from fd %i\n", fd), exit(98);
	if (byte_read != (ssize_t)EI_NIDENT)
		dprintf(STDERR_FILENO, "Error: Can't read all %i bytes from fd %i\n",
				EI_NIDENT, fd), exit(98);

	if (!(e_ident[0] == 0x7F && e_ident[1] == 0x45 && e_ident[2] == 0x4c &&
				e_ident[3] == 0x46))
		dprintf(STDERR_FILENO, "Error: %s is not an ELF file", av[1]), exit(98);

	of = lseek(fd, (off_t)0, SEEK_SET);
	if (of != (off_t)0)
		dprintf(STDERR_FILENO, "Error: Can't set offset back to 0 bytes"), exit(98);

	if (e_ident[4] == 0x01)
	{
		siz = sizeof(Elf32_Ehdr);
		first = malloc(siz);
		if (first == NULL)
			dprintf(STDERR_FILENO, "Error: Can't allocate %lu byes in memory for first",
					siz), exit(98);
		byte_read = read(fd, first, siz);
		if (byte_read == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from fd %i\n", fd), exit(98);
		if (byte_read != (ssize_t)siz)
			dprintf(STDERR_FILENO, "Error: Can't read all %lu bytes from fd %i\n",
					siz, fd), exit(98);
		print_elf32(first, e_ident);
		free(first);
	}
	else
	{
		siz = sizeof(Elf64_Ehdr);
		second = malloc(siz);
		if (second == NULL)
			dprintf(STDERR_FILENO, "Error: Can't allocate %lu bytes in memory",
					siz), exit(98);
		byte_read = read(fd, second, siz);
		if (byte_read == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from fd %i\n", fd), exit(98);
		if (byte_read != (ssize_t)siz)
			dprintf(STDERR_FILENO, "Error: Can't read all %lu bytes from fd %i\n",
					siz, fd), exit(98);
		print_elf64(second, e_ident);
		free(second);
	}

	close(fd);

	return (0);
}

/**
 * print_elf32 - print the elf header information 32 bit ELF file
 * @first: pointer to the elf header
 * @e_ident: temp storage for header info
 *
 * Return: 0 if success
 */
int print_elf32(Elf32_Ehdr *first, unsigned char *e_ident)
{
	int i = 0;

	printf("ELF Header:\n  Magic:   %.2x", first->e_ident[i]), i++;
	while (i < 16)
		printf(" %.2x", first->e_ident[i]), i++;
	printf("\n  Class:\t\t\t\tELF32");
	if (e_ident[5] == 0x01)
		printf("\n  Data:\t\t\t\t\t2's complement, little endian");
	else
		printf("\n  Data:\t\t\t\t\t2's complement, big endian");
	if (e_ident[6] == 0x01)
		printf("\n  Version:\t\t\t\t1 (current)");
	else
		printf("\n  Version:\t\t\t\t%.2x (not current)", e_ident[6]);
	switch (e_ident[EI_OSABI])
	{
		case ELFOSABI_NONE | ELFOSABI_SYSV:
			printf("\n  OS/ABI:\t\t\t\tUNIX - System V");
			break;
		case ELFOSABI_HPUX:
			printf("\n  OS/ABI:\t\t\t\tHP - UX");
			break;
		case ELFOSABI_NETBSD:
			printf("\n  OS/ABI:\t\t\t\tNetBSD");
			break;
		case ELFOSABI_LINUX:
			printf("\n  OS/ABI:\t\t\t\tLinux");
			break;
		case ELFOSABI_SOLARIS:
			printf("\n  OS/ABI:\t\t\t\tSolaris");
			break;
		case ELFOSABI_IRIX:
			printf("\n  OS/ABI:\t\t\t\tIRIX");
			break;
		case ELFOSABI_FREEBSD:
			printf("\n  OS/ABI:\t\t\t\tFreeBSD");
			break;
		case ELFOSABI_TRU64:
			printf("\n  OS/ABI:\t\t\t\tTRU64 UNIX");
			break;
		case ELFOSABI_ARM:
			printf("\n  OS/ABI:\t\t\t\tARM architecture");
			break;
		case ELFOSABI_STANDALONE:
			printf("\n  OS/ABI:\t\t\t\tStand-alone (embedded)");
			break;
		default:
			break;
	}
	printf("\n  ABI Version:\t\t\t\t%i", e_ident[8]);
	switch (first->e_type)
	{
		case ET_NONE:
			printf("\n  Type:\t\t\t\t\tNONE (Unknown type)");
			break;
		case ET_REL:
			printf("\n  Type:\t\t\t\t\tREL (Relocatable file)");
			break;
		case ET_EXEC:
			printf("\n  Type:\t\t\t\t\tEXEC (Executable file)");
			break;
		case ET_DYN:
			printf("\n  Type:\t\t\t\t\tDYN (Shared object file)");
			break;
		case ET_CORE:
			printf("\n  Type:\t\t\t\t\tCORE (Core file)");
			break;
		default:
			break;
	}
	printf("\n  Entry point address:\t\t\t0x%x\n", first->e_entry);

	return (0);
}

/**
 * print_elf64 - print the elf header information for 64 bit ELF file
 * @second: pointer to the header information
 * @e_ident: temp storage for header info
 *
 * Return: 0 if success
 */
int print_elf64(Elf64_Ehdr *second, unsigned char *e_ident)
{
	int i = 0;

	printf("ELF Header:\n  Magic:   %.2x", second->e_ident[i]), i++;
	while (i < 16)
		printf(" %.2x", second->e_ident[i]), i++;
	printf("\n  Class:\t\t\t\tELF64");
	if (e_ident[5] == 0x01)
		printf("\n  Data:\t\t\t\t\t2's complement, little endian");
	else
		printf("\n  Data:\t\t\t\t\t2's complement, big endian");
	if (e_ident[6] == 0x01)
		printf("\n  Version:\t\t\t\t1 (current)");
	else
		printf("\n  Version:\t\t\t\t%.2x (not current)", e_ident[6]);
	switch (e_ident[EI_OSABI])
	{
		case ELFOSABI_NONE | ELFOSABI_SYSV:
			printf("\n  OS/ABI:\t\t\t\tUNIX - System V");
			break;
		case ELFOSABI_HPUX:
			printf("\n  OS/ABI:\t\t\t\tHP - UX");
			break;
		case ELFOSABI_NETBSD:
			printf("\n  OS/ABI:\t\t\t\tNetBSD");
			break;
		case ELFOSABI_LINUX:
			printf("\n  OS/ABI:\t\t\t\tLinux");
			break;
		case ELFOSABI_SOLARIS:
			printf("\n  OS/ABI:\t\t\t\tSolaris");
			break;
		case ELFOSABI_IRIX:
			printf("\n  OS/ABI:\t\t\t\tIRIX");
			break;
		case ELFOSABI_FREEBSD:
			printf("\n  OS/ABI:\t\t\t\tFreeBSD");
			break;
		case ELFOSABI_TRU64:
			printf("\n  OS/ABI:\t\t\t\tTRU64 UNIX");
			break;
		case ELFOSABI_ARM:
			printf("\n  OS/ABI:\t\t\t\tARM architecture");
			break;
		case ELFOSABI_STANDALONE:
			printf("\n  OS/ABI:\t\t\t\tStand-alone (embedded)");
			break;
		default:
			break;
	}
	printf("\n  ABI Version:\t\t\t\t%i", e_ident[8]);
	switch (second->e_type)
	{
		case ET_NONE:
			printf("\n  Type:\t\t\t\t\tNONE (Unknown type)");
			break;
		case ET_REL:
			printf("\n  Type:\t\t\t\t\tREL (Relocatable file)");
			break;
		case ET_EXEC:
			printf("\n  Type:\t\t\t\t\tEXEC (Executable file)");
			break;
		case ET_DYN:
			printf("\n  Type:\t\t\t\t\tDYN (Shared object file)");
			break;
		case ET_CORE:
			printf("\n  Type:\t\t\t\t\tCORE (Core file)");
			break;
		default:
			break;
	}
	printf("\n  Entry point address:\t\t\t0x%lx\n", second->e_entry);

	return (0);
}
