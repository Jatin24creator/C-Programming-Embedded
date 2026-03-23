/*Coordinate lies in which quadrant

2nd, 1st
3rd, 4th*/
#include<stdio.h>
int main(){
    int x,y;
    printf("Enter the coordinate x: ");
    scanf("%d",&x);
    printf("Enter the coordinate y: ");
    scanf("%d",&y);

    if(x>0&&y>0) { //++
        printf("1st Quadrant");
    }else if(x<0 &&y>0) {//-+
        printf("2nd Quadrant"); 
    } else if(x<0 &&  y<0){ // --
        printf("3rd Quadrant");
    } else if(x<0 && y<0){ // +-
        printf("4th Quadrant");
    } else if(x == 0 && y == 0){ // 00
        printf("At Origin 0,0");
    }else if(x == 0){
        printf("Lies on the Y axis");
    } else if(y == 0){
        printf("Lies on the X axis");
    }else{
        printf("Invalid coordinates");
    }
}