#include<stdio.h>
#include<math.h>
#define f1(x,y)
#define f2(x,y) 
#define f3(x,y) 
#define f4(x,y) 
int main()
{
    int k;
    float yn,yo,x0,y0,x[20],y[20],a,h;
    printf("enter initial values (x0,y0):");
    scanf("%f%f",&x0,&y0);
    printf("enter step size:");
    scanf("%f",&h);
    printf("enter value of a at which f(a) is required:");
    scanf("%f",&a);
    float n=(a-x0)/h;
    x[0]=x0;
    y[0]=y0;
    for(k=1;k<=n;k++)
    {
        x[k]=x[k-1]+h;
        y[k]=y[k-1]+h*f1(x[k-1],y[k-1])+(h*h/2)*f2(x[k-1],y[k-1])+(h*h*h/6)*f3(x[k-1],y[k-1])+(h*h*h*h/24)*f4(x[k-1],y[k-1]);
        printf("x:%.1f y:%.5f\n",x[i],y[i]);
    }
    return 0;
}
