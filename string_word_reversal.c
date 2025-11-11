#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// iisue with this is: give length before, else undefined behaviour ex: length =1000; and input: 15 bytes than undefined behaviour. if length matches than correxct.
// solution fgets than atoi ;

// Function Prototype
char* string_reversal(char s[], int len);

void string_reversal_word(char s[], int len);

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

 // -------------- String Reveral Function------------------------
//       string_reversal(str,len);

 // -------------------------------------------------
 
 // -------- String word Reversal----------------------
       
     string_reversal_word(str,len);
 //----------------------------------------------

  printf("Reversed  String is: %s\n", str);

    free(str);
    return 0;
}


char*  string_reversal(char s[], int len)
{  // reverse till half only
        int temp;
 for(int i=0; i<len/2; i++)
 {
  temp= s[i];
  s[i]= s[(len-1)-i];
  s[(len-1)-i]= temp;
 }
 return s;
}

void string_reversal_word(char s[], int len)
{
//Note: Its doing:   Word order Reversal

//Enter length of string: 41
//Enter string: The quick brown fox jumps over the lazy dog
//Given String is: The quick brown fox jumps over the lazy d
//Reversed  String is: d lazy the over jumps fox brown quick The



// Algo:  1: Traverse array with loop
// 2. condition if and find space via  str[i] == ' ';
// 3. use two var to track: init, final value take that length and reverse it  
int initial=0, final=0, w_len=0, temp=0;
// final is space; so last char is final-1

	for(int i=0; i<= len; i++)
	{
		if(s[i]== ' ' || s[i]== '\0')
		{
		final = i-1;
		w_len= final - initial;
                	for(int j=initial; j<=initial + (w_len/2); j++) //  remember from quick sort: add mid point to initial
								//  As wlen is relative index. not absolute one; so treat it like that
			{
			 // j loops from 0 to word len;Note j=Initial; start= (j); end/swap: (final -j) +initial. for swap
			 temp = s[j];
			 s[j] = s[final-(j-initial)];  // *imp Note: final -intial-j  // assume it as sliding window, so while reducing  ex: j= initial; final-initial
					       //  As started from  j= initial. so other way start from j=0; than do: s[j+initial]; s[final-j; checki]
			 s[final-(j-initial)] =temp;

			}
		initial=final+2;	
		}
	
	}	
	
}






