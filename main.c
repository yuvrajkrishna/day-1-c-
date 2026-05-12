#include<stdio.h>
int main(){
    int i;
    char ch;

    scanf("%d", &i);
    getchar(); // To consume the newline character left in the buffer after reading the integer

    scanf(" %c", &ch);
    
   
    printf("You entered character: %c and number: %d\n", ch, i);
}