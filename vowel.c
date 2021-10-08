#include <stdio.h>

int main()
{
    char alpha;

    printf(" Enter an alphabet: \n");
    scanf(" %c", &alpha);
    
    if(alpha == 'a' || alpha == 'e' || alpha == 'i' || alpha == 'o' || alpha == 'u' ||
		alpha == 'A' || alpha == 'E' || alpha == 'I' || alpha == 'O' || alpha == 'U')  
		printf(" VOWEL");
	
    else 
    	printf(" CONSONANT");
	
    return 0;
}