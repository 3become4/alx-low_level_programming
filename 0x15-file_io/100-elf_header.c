#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void check_elf(unsigned char *x);
void print_magic(unsigned char *x);
void print_class(unsigned char *x);
void print_data(unsigned char *x);
void print_version(unsigned char *x);
void print_abi(unsigned char *x);
void print_osabi(unsigned char *x);
void print_type(unsigned int y, unsigned char *x);
void print_entry(unsigned long int e, unsigned char *x);
void close_elf(int elf);

/**
 * check_elf - if ELF file.
 *
 * @x: char pointer
 *
 * Return: void
 */
void check_elf(unsigned char *x)
{
	int i;

	for (i = 0; i < 4; i++)
	{
		if (x[i] != 127 &&
		    x[i] != 'E' &&
		    x[i] != 'L' &&
		    x[i] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * print_magic - magic number
 *
 * @x: char pointer
 *
 * Return: void
 */
void print_magic(unsigned char *x)
{
	int i;

	printf("  Magic:   ");

	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", x[i]);

		if (i == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * print_class -class
 *
 * @x: char pointer
 *
 * Return: void
 */
void print_class(unsigned char *x)
{
	printf("  Class:                             ");

	switch (x[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", x[EI_CLASS]);
	}
}

/**
 * print_data - data
 *
 * @x: char pointer
 *
 * Return: void
 */
void print_data(unsigned char *x)
{
	printf("  Data:                              ");

	switch (x[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", x[EI_CLASS]);
	}
}

/**
 * print_version - version
 * @x: char pointer
 *
 * Return: void
 */
void print_version(unsigned char *x)
{
	printf("  Version:                           %d",
	       x[EI_VERSION]);

	switch (x[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}

/**
 * print_osabi - os abi
 * @x: char pointer
 *
 * Return: void
 */
void print_osabi(unsigned char *x)
{
	printf("  OS/ABI:                            ");

	switch (x[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", x[EI_OSABI]);
	}
}

/**
 * print_abi - ABI version
 *
 * @x: char pointer
 *
 * Return: void
 */
void print_abi(unsigned char *x)
{
	printf("  ABI Version:                       %d\n",
	       x[EI_ABIVERSION]);
}

/**
 * print_type - Prints the type of an ELF header.
 *
 * @t: type
 * @x: char pointer
 *
 * Return: void
 */
void print_type(unsigned int t, unsigned char *x)
{
	if (x[EI_DATA] == ELFDATA2MSB)
		t >>= 8;

	printf("  Type:                              ");

	switch (t)
	{
	case ET_NONE:
		printf("NONE (None)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %x>\n", t);
	}
}

/**
 * print_entry - entry
 *
 * @e: entry
 * @x: char pointer
 *
 * Return: void
 */
void print_entry(unsigned long int e, unsigned char *x)
{
	printf("  Entry point address:               ");

	if (x[EI_DATA] == ELFDATA2MSB)
	{
		e = ((e << 8) & 0xFF00FF00) |
			  ((e >> 8) & 0xFF00FF);
		e = (e << 16) | (e >> 16);
	}

	if (x[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e);

	else
		printf("%#lx\n", e);
}

/**
 * close_elf - close
 *
 * @elf: the file
 *
 * Return: void
 */
void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", elf);
		exit(98);
	}
}

/**
 * main - main header
 *
 * @argc: num if args
 * @argv: pointers to args
 *
 * Return: 0
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int o, r;

	o = open(argv[1], O_RDONLY);
	if (o == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		close_elf(o);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	r = read(o, header, sizeof(Elf64_Ehdr));
	if (r == -1)
	{
		free(header);
		close_elf(o);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	check_elf(header->e_ident);
	printf("ELF Header:\n");
	print_magic(header->e_ident);
	print_class(header->e_ident);
	print_data(header->e_ident);
	print_version(header->e_ident);
	print_osabi(header->e_ident);
	print_abi(header->e_ident);
	print_type(header->e_type, header->e_ident);
	print_entry(header->e_entry, header->e_ident);

	free(header);
	close_elf(o);
	return (0);
}
