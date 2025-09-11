// Calculate the area of a circle and modify the same program to calculate the
// volume of a cylinder given its radius and height.

#include <stdio.h>
#define Pi 3.14 
    int main(){
        int radius, height, area, volume;
        printf("enter the radius: ");
        scanf("%d", &radius);
        //area of a circle is (A=pi r^{2})
        area= Pi*(radius*radius);
        printf("area of circle is %d\n", area);

        printf("enter the height: ");
        scanf("%d",&height);
        //volume of a cylinder is (V=pi r^{2}h). 
        volume = Pi*(radius*radius)*height;
        printf("volume of a cylinder is %d", volume);

        return 0;
    
    }