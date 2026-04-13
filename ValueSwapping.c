#include <stdio.h>
int main(){
    int x,y,temp;
    printf("Enter two values: \n");
    scanf("%d, %d", &x, &y );
    printf("...Before swapping\n");
    printf("x= %d..y= %d\n" ,x,y );
    temp = x;
    x=y;
    y=temp;
    printf("...After swapping. NEW VALUES\n");
    printf("x= %d..y= %d\n" ,x,y );


    return 0;
}
