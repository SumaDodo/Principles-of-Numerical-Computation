#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double *cholesky(int n, double *a)
{
       double *L = (double*)calloc (n*n,sizeof(double));//memory allocation
       for (int i=0; i<n; i=i+1)
       {
           for (int j=0; j<(i+1);j=j+1)
           {
               double s =0;
               for (int k = 0;k<j;k++)
                         s = s + L[i*n+k] * L[j*n+k];
               L[i*n+j] = (i ==j) ? sqrt(a[i * n + i] - s) :
                           (1.0 / L[j * n + j] * (a[i * n + j] - s));//diagonal elements
           }
       }
       return L;//return the lower transpose
       }
int main()
{
    int n = 4;
    double transpose[n][n];
    double b [] = {0.23,0.32,0.33,0.31};
    double z[4], x[4];
    double m2[] = {0.05, 0.07, 0.06, 0.05,
                   0.07, 0.10, 0.08, 0.07,
                   0.06, 0.08, 0.10, 0.09,
                   0.05, 0.07, 0.09, 0.10};//given matrix
    double *L1 = cholesky(n,m2);//call method with the matrix
    printf("Lower Triangular matrix:\n");//print the lower triangular matrix
    for (int i=0;i<n;i++)
    {
        for(int j=0; j<n;j++)
        {
                printf("%3f\t",L1[i*n+j]);
                }
        printf("\n");
    }
    for (int i =0; i<n;i++)//compute transpose
    {
        for (int j=0;j<n;j++)
        {
            transpose[j][i] = L1 [i*n+j];
            }
    }
    printf("\n\n Transpose of lower traingular matrix:\n");//printing transpose
    for (int i =0 ; i<n; i++)
    {
        for(int j =0;j<n;j++)
        {
                printf("%3f\t",transpose[i][j]);
                } 
        printf("\n");
        }
    //Finding Z in LZ = b
    for (int i=0; i<n ;i++)
    {
        double sum =0 ;
        for(int p=0;p<i;p++)
            {
                sum+=L1[i*n+p]*z[p];
            }
        z[i] = (b[i]-sum)/L1[i*n+i];
       // printf("%3f\t",z[i]);
    }
    //finding X in ux =z
    for(int i=n-1;i>=0;i--)
    {
        double sum=0;
        for(int p=n;p>i;p--)
            sum+=transpose[i][p]*x[p];
        x[i]=(z[i]-sum)/transpose[i][i];
    }
    printf("result:\n");//printing result
    for (int i =0;i<n;i++)
    {
        printf("%3f\t",x[i]);
    }
}
