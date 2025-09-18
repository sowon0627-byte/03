#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    
    char c;
    int i;
    
    printf("enter a character : ");
    scanf("%c",&c);
    
    i = c + 1;
    printf("the next character of %c (%i) is %c (%i)\n", c,c,i,i);
    
    
    system("PAUSE");	
    return 0;
}
