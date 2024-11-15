#include<stdio.h>
#include<math.h>
void main()
{
    float side,surface_area;
    printf("enter the length of side of octahedron");
    scanf("%f",&side);
    surface_area =2*sqrt(3)*(side*side);
    printf("surface area of the octahedron :%3f \n", surface_area);
  
}

