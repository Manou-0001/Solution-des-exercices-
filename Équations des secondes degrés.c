#include <stdio.h>
#include <math.h>
void equation(float a,float b,float c)
{
    float det1,x1,x2,var1,var2,det2;
    det1=(b*b)-(4*a*c);
    if(det1>0)
    {
        x1=((-b)+sqrt(det1))/(2*a);
        x2=((-b)-sqrt(det1))/(2*a);
        printf("x1=%f\n",x1);
        printf("x2=%f\n",x2);

    }
    else if(det1==0)
    {
        x1=x2=(-b)/(2*a);
        printf("x1=x2=%f\n",x2);
    }

    else
    {
        det2=-det1;
        var1=(-b)/(2*a);
        var2=sqrt(det2)/(2*a);
        printf("x1=%f+%fi\n",var1,var2);
        printf("x2=%f-%fi",var1,var2);
    }
}
int main()
{
    float a,b,c,x;
    printf("a=");
    scanf("%f",&a);
    printf("b=");
    scanf("%f",&b);
    printf("c=");
    scanf("%f",&c);
    if(a==0)
    {
        x=(-c)/b;
        printf("x1=x2=%f\n",x);
    }
    else
    {
   equation(a,b,c);
    }
    return 0;
}
