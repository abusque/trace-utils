#include <stdio.h>

int main() {
        FILE *file;
        char buffer1[] = {'a', 'b', 'c'};
        char buffer2[] = {'x', 'y', 'z'};

        file = fopen("file1.txt", "w");
        fwrite(buffer1, sizeof(char), sizeof(buffer1), file);
        fclose(file);

        file = fopen("file2.txt", "w");
        fwrite(buffer2, sizeof(char), sizeof(buffer2), file);
        fclose(file);

        return 0;
}
