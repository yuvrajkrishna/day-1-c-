#include <stdio.h>

int main (){
    int area_rectangle,length,width;
    length=5;   
    width=5;
    area_rectangle= length*width;
    printf("The area of the rectangle is %d \n",area_rectangle);


    int inputed_area_rectangle,inputed_length,inputed_width;
    printf("Enter the length \n");
    scanf("%d",&inputed_length);
    printf("Enter the width \n");
    scanf("%d",&inputed_width);
    inputed_area_rectangle= inputed_length*inputed_width;
    printf("The area of the rectangle is %d",inputed_area_rectangle);

    return 0;
}