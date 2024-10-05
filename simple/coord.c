#include<stdio.h>
void main(){
    int x,y;
    printf("Enter the coordinate x = ");
    scanf("%d",&x);

    printf("Enter the coordinate y = ");
    scanf("%d",&y);

    if(x>0 && y>0){
        printf("The coordinate point(%d,%d) lies in the First quadrant",x,y);
    }
        else if(x>0 && y<0){
        printf("The coordinate point (%d,%d) lies in the second quadrant",x,y);
    }
        else if(x<0 && y<0){
        printf("The coordinate point (%d,%d) lies in the third quadrant",x,y);
    }
        else{
            printf("The coordinate point (%d,%d) lies in the fourth quadrant",x,y);
        }

}
