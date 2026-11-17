#include<stdio.h>
#include<math.h>
int main(void)
{
    double a,b,c,d,r1,r2,realpart,imagpart;
    printf("Enter a,b and c:");
    scanf("%lf%lf%lf",&a,&b,&c);
    if(a==0) {
        printf("Not a quadratic equation.\n");
        return 0;
    }
    d=b*b-4*a*c;
    if(d>0) {
        r1=(-b+sqrt(d))/(2*a);
        r2=(-b-sqrt(d))/(2*a);
        printf("Roots are %.2lf and %.2lf\n",r1,r2);
    } else if(d==0) {
        r1=-b/(2*a);
        printf("Equal roots=%.2lf\n",r1);
    } else {
        realpart=-b/(2*a);
        imagpart=sqrt(-d)/(2*a);
        printf("Roots are %.2lf+%.2lfi and %.2lf-%.2lfi\n",
        realpart,imagpart,realpart,imagpart);
    }
    return 0;
}