#include<stdio.h>
#include<math.h>
#include <stdlib.h>

int l =50;

int main() {
    int i,j,m;
    float x[3],c,t,u[3];
    int n =3;
    int a[3][3] = { 3, 1, 1,
                 1, 3, -1,
                 3, 1, -5 }; // The input system 1 of equations
    int b[3] = {5, 3, -1}; // The right hand side numbers for system 1
    //Second system
    int r[3][3] = { 3, 1, 1,
                 3, 1, -5,
                 1, 3, -1 }; // The input system 2 of equations
    int s[3] = {5, -1, 3}; // The right hand side numbers for system 2
    printf("The first system of values:\n");
    for (int i =0; i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);//Printitng the matrix
        }
        printf("\n");
    }
    //Check if the matrix is diagonally dominant
    if((abs(a[0][0]) < abs(a[0][1])+abs(a[0][2])) || (abs(a[1][1]) < abs(a[1][0])+abs(a[1][2])) || (abs(a[2][2]) < abs(a[2][0])+abs(a[2][1])) )
    {
        printf("There is no convergence. Not a diagonally dominant matrix\n");
        exit;
    }
    else
    {
    m=1;
    line:
    for(i=0;i<n;i++) {
        c=b[i]; // capture the initial value in c
        for(j=0;j<n;j++) {
            if(i!=j) {
                c=c-a[i][j]*x[j];//recomputation of the value
            }
        }
        x[i]=c/a[i][i];//capturing the new value
    }
    m++;
    if(m<=l) {
        goto line;
    }
    else {
        printf("\nThe Solution for first system of equations is : \n");
        for(i=0;i<n;i++) {
            printf("\nx(%d) = %f\n",i,x[i]);//solution
            }
    }
    }
    //For the second set of equations
    printf("For the second set of equations\n");
    for (int i =0; i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            printf("%d\t",r[i][j]);//Printitng the matrix
        }
        printf("\n");
    }
    //Checking for the diagonal dominance of the matrix
    if((abs(r[0][0]) < abs(r[0][1])+abs(r[0][2])) || (abs(r[1][1]) < abs(r[1][0])+abs(r[1][2])) || (abs(r[2][2]) < abs(r[2][0])+abs(r[2][1])) )
    {
        printf("There is no convergence. Not a diagonally dominant matrix");
        exit;
    }
    else
    {
    m=1;
    line1:
    for(i=0;i<n;i++) {
        t=s[i]; // capture the initial value in c
        for(j=0;j<n;j++) {
            if(i!=j) {
                t=t-r[i][j]*x[j];//recomputing the value
            }
        }
        u[i]=t/r[i][i];//capturing the value
    }
    m++;
    if(m<=l) {
        goto line1;
    }
    else {
        printf("\nThe Solution is : \n");
        for(i=0;i<n;i++) {
            printf("\nx(%d) = %f\n",i,u[i]);//printing the solution
            }
    }
    }
}
