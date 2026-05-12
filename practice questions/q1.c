#include <stdio.h>

int main (){
    int area_rectangle,length,width;
    printf("Enter the area of the length \n");
    scanf("%d",&length);
    printf("Enter the area of the width \n");
    scanf("%d",&width);
    area_rectangle= length*width;
    printf("The area of the rectangle is %d",area_rectangle);

    return 0;
}