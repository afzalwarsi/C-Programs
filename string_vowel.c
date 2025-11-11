#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int len = 0;
    printf("\nEnter length of string: ");
    scanf("%d", &len);
    getchar(); // clear newline

    char *str = (char *) malloc((len + 1) * sizeof(char));

    if (str == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("\nEnter string: ");
    fgets(str, len + 1, stdin);

    printf("Given String is: %s\n", str);

    int i = 0, count = 0;
    while (str[i] != '\0') {
        if (str[i]=='a'||str[i]=='A'||str[i]=='e'||str[i]=='E'||
            str[i]=='i'||str[i]=='I'||str[i]=='o'||str[i]=='O'||
            str[i]=='u'||str[i]=='U')
            count++;
        i++;
    }

    printf("The number of vowels are: %d\n", count);

    free(str);
    return 0;
}

