#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// iisue with this is: give length before, else undefined behaviour ex: length =1000; and input: 15 bytes than undefined behaviour. if length matches than correxct.
// solution fgets than atoi ;

// Function Prototype
char* string_reversal(char s[], int len);

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

// Logic For Reversal
 
   
   // char *s = string_reversal(str, len); No need for this as array are passed by reference only.

    string_reversal(str,len);
  printf("Reversed  String is: %s\n", str);

    free(str);
    return 0;
}

char*  string_reversal(char s[], int len)
{
	int temp;
 for(int i=0; i<len/2; i++)
 {
  temp= s[i];
  s[i]= s[(len-1)-i];
  s[(len-1)-i]= temp;
 }
 return s;
}
