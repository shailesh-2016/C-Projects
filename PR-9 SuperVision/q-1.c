#include <stdio.h>

int main()
{
    FILE *evenFile, *oddFile;
    int i;

    evenFile = fopen("even_file.txt", "w");
    oddFile = fopen("odd_file.txt", "w");

    for (i = 50; i <= 70; i++)
    {
        if (i % 2 == 0)
        {
            fprintf(evenFile, "%d, ", i);
        }
        else
        {
            fprintf(oddFile, "%d, ", i);
        }
    }

    fclose(evenFile);
    fclose(oddFile);

    printf("files created successfully.\n");
    return 0;
}
