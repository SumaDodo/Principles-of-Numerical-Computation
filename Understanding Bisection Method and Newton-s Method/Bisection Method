#include<stdio.h>
#include<math.h>

int func; //Global variable to access the required fuction
 int i =0;
 int max_iter;
 double err = 2.22045e-16;
 
double operation(double x)
{
    if (func == 1)
        return (cos(x)- (x*sin(x)));
    else if (func == 2)
    	return (pow(x,-1)-pow(2,x));
    else if (func == 3)
	    return (pow(x,8)-36*pow(x,7)+546*pow(x,6)-4536*pow(x,5)+22449*pow(x,4)-67284*pow(x,3)+118124*pow(x,2)-109584*pow(x,1)+43020);
    else
        return (pow(x,8)-36.001*pow(x,7)+546*pow(x,6)-4536*pow(x,5)+22449*pow(x,4)-67284*pow(x,3)+118124*pow(x,2)-109584*pow(x,1)+43020);
}
 
//double e=0.01;
double c; //midpoint variable declaration
 
double bisec(double a,double b)
{
    c = (a+b)/2.0; //mid point calculation
    i = i+1;
    if(i < max_iter)//check iterations
    {
        if (operation(a)*operation(c)<0) //check for the sign only if they are opposite compute bisection
        {
            return bisec(a,c);//call to recursive bisection method to find the root in the interval a and mid point c
        }
        else if (operation(c)* operation(b)<0)//else if condition if the root is not in the first interval then check for the second interval
        {
           return bisec(c,b);//call to recursive bisection method to find the root in the interval mid point c and b
        }
        else if(operation(c) < err)
        {
          return c;//return mid point
        }
        else
            return c;
    }
    return c;
}
 
int main()
{
    double a,b;
    printf("enter the values of a and b and max iteration\n");//the interval boundary values and max iterations
    scanf("%lf%lf%d",&a,&b,&max_iter);
    printf("enter the case value of the function\n");//case value to choose the fucntion
    scanf("%d",&func);
    printf("a = %lf\n",a);
    printf("b = %lf\n",b);
    printf("%lf",bisec(a,b));//root of bisection fucntion with the given interval boundary values
 
    return 0;
}
