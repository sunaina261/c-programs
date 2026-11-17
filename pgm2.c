#include<stdio.h>
int main(void)
{
    double length,breadth,radius,base,height;
    const double PI=3.14159;
    printf("Enter rectangle length and breadth:");
    scanf("%lf%lf",&length,&breadth);
    printf("Rectangle area=%.2lf\n",length*breadth);
    printf("Rectangle perimeter=%.2lf\n",2*(length+breadth));
    printf("Enter circle radius:");
    scanf("%lf",&radius);
    printf("Circle area=%.2lf\n",PI*radius*radius);
    printf("Circle circumference=%.2lf\n",2* PI *radius);
    printf("Enter triangle base and height:");
    scanf("%lf%lf",&base,&height);
    printf("Triangle area=%.2lf\n",0.5*base*height);
    return 0;
}
