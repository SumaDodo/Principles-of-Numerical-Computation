#include<stdio.h>
#include<math.h>

double function1(double x)
{//our function
       double y=0.0;
       y = (x-tan(x));
    return (y);
}
double derivative1(double x)
{//function's derivative
    return (1 - ((1/cos (x)) * (1/cos(x))));
}

double function2(double x)
{
       double z = 0.0;
       z = (pow(x,3)-(5*pow(x,2))+(3*pow(x,1))-7);
       return z;
}

double derivative2(double x)
{
       double val = 0.0;
       val = ((3*pow(x,2))-(10*pow(x,1))+3);
       return val;
       }
int main()
{
    double x0,h,err = 2.22045e-16,x1,x3;
    double x2;
    int max_iter,n;
    printf("Enter the first approximation ,maximum number of iterations for the equation x - tan x = 0\n");//first approx, and max no of iteration
    scanf("%lf%d",&x0,&max_iter);
    n=1;
    double first = 0.0;
    first = function1(x0);//calculate fucntion vale
    if ( first <= err)//if less than machine epsilon
    {
         printf("Root for x - tan x = 0:%lf\n",x0);//approximation itself is the root
    }
    else 
    {
    while(n<=max_iter)//until maximum iterations
    {
        h=function1(x0)/derivative1(x0);//calculating f(x)/f'(x)as we do in Newton method
        x1=x0-h;//x1=x0-f(x)/f'(x)
        first = function1(x1);//x1 is the new value
        printf("The approximation's value after %d iteration is %.12lf\n",max_iter,x1);
        if((first<=err) || ((x1-x0)<= err))//If the difference between the 2 approximations is below the max error
        {
            printf("Root is:%lf\n",x0);//approximation itself is the root
        }
        x0=x1;
        n++;
    }
    }
   // return 0;
    printf("Enter the first approximation for the equation x^3 + 3x = 5x^2 + 7\n");
    scanf("%lf",&x2);
    int r= 1;
    double second = 0.0;
    second = function2(x2);//calculate function value
    if ( second <= err)
    {
         printf("Root is:%lf\n",x0);//approximation itself is the root
    }
    else 
    {
    while(r<=max_iter)//until max iteration
    {
        h=function2(x2)/derivative2(x2);//calculatinf f(x)/f'(x)as we do in Newton Raphson method
        x3=x2-h;//x1=x0-f(x)/f'(x)
        second = function2(x3);
        printf("The approximation's value after %d iteration is %.12lf\n",max_iter,x3);
        if((second<=err) || ((x3-x2)<= err))//If the difference between the 2 approximations is below the max error
        {
            printf("Root for x^3 + 3x = 5x^2 + 7:%lf\n",x2);
        }
        x2=x3;
        r++;
    }
    }
    return 0;
}
