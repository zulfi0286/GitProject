#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Reverse(char* ,int);

int main()
 {  
	 //this code only use for practice
	  char c;
    int a; 
    int b;
    char arr[]={'z','u','l','f','i','q','a','r','\0'};
    int l=strlen(arr);
    Reverse(arr,l);

    printf("Enter a character: ");
    scanf("%c", &c);  
    
    // %d displays the integer value of a character
    // %c displays the actual character
    printf("ASCII value of %c = %d \n", c, c);
    
    return 0;
}
void Reverse(char a[],int sizea)
{ 
   int i=0;
   char *b;
   
      
    for (i = 0; i < sizea - 1; i++)  
    end++;  
   while(a[i]!='\0')
   {
     b[i]=a[sizea-1];
     printf("%c",b[i]);
     i++;
     sizea--; 
   }

}