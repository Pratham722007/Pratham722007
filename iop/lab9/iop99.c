#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char ch;
    int vowels = 0;
    char *filename = "yourfile.txt";

    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Could not open file %s\n", filename);
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowels++;
        }
    }

    fclose(file);

    printf("The number of vowels in the file is: %d\n", vowels);

    return 0;
}
