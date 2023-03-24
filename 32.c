#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

int main() {
    FILE *source_file, *destination_file;
    char buffer[BUFFER_SIZE];
    size_t characters_read;

    // open source file for reading
    source_file = fopen("source.txt", "r");
    if (source_file == NULL) {
        perror("Error opening source file");
        exit(EXIT_FAILURE);
    }

    // open destination file for writing
    destination_file = fopen("destination.txt", "w");
    if (destination_file == NULL) {
        perror("Error opening destination file");
        exit(EXIT_FAILURE);
    }

    // read data from source file and write to destination file
    while ((characters_read = fread(buffer, sizeof(char), BUFFER_SIZE, source_file)) > 0) {
        fwrite(buffer, sizeof(char), characters_read, destination_file);
    }

    // close files
    fclose(source_file);
    fclose(destination_file);

    printf("File copied successfully.\n");

    return 0;
}
output:
File copied successfully.