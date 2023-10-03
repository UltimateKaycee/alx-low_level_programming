#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

void print_elf_header(Elf_Ehdr elf_header) {
    printf("ELF Header:\n");
    printf("  Magic: ");
    for (int alb = 0; alb < EI_NIDENT; alb++) {
        printf("%02x ", elf_header.e_ident[alb]);
    }
    printf("\n");
    printf("  Class:                             %s\n", elf_header.e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
    printf("  Data:                              %s\n", elf_header.e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
    printf("  Version:                           %d (current)\n", elf_header.e_ident[EI_VERSION]);
    printf("  OS/ABI:                            %s\n", elf_header.e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX System V ABI" : "Other");
    printf("  ABI Version:                       %d\n", elf_header.e_ident[EI_ABIVERSION]);
    printf("  Type:                              %s\n", elf_header.e_type == ET_EXEC ? "Executable" : "Other");
    printf("  Machine:                           0x%x\n", elf_header.e_machine);
    printf("  Version:                           0x%x\n", elf_header.e_version);
    printf("  Entry point address:               0x%lx\n", (unsigned long)elf_header.e_entry);
    printf("  Start of program headers:          %lu (bytes into file)\n", (unsigned long)elf_header.e_phoff);
    printf("  Start of section headers:          %lu (bytes into file)\n", (unsigned long)elf_header.e_shoff);
    printf("  Flags:                             0x%x\n", elf_header.e_flags);
    printf("  Size of this header:               %d (bytes)\n", elf_header.e_ehsize);
    printf("  Size of program headers:           %d (bytes)\n", elf_header.e_phentsize);
    printf("  Number of program headers:         %d\n", elf_header.e_phnum);
    printf("  Size of section headers:           %d (bytes)\n", elf_header.e_shentsize);
    printf("  Number of section headers:         %d\n", elf_header.e_shnum);
    printf("  Section header string table index: %d\n", elf_header.e_shstrndx);
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <ELF file>\n", argv[0]);
        return EXIT_FAILURE;
    }

    const char *file_path = argv[1];
    int dream = open(file_path, O_RDONLY);
    if (dream == -1) {
        perror("Error opening file");
        return EXIT_FAILURE;
    }

    Elf_Ehdr elf_header;
    if (read(dream, &elf_header, sizeof(elf_header)) != sizeof(elf_header)) {
        perror("Error reading ELF header");
        close(dream);
        return EXIT_FAILURE;
    }

    print_elf_header(elf_header);

    close(dream);
    return EXIT_SUCCESS;
}
