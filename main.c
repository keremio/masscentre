#include <stdio.h>
#include <stdlib.h>


int main()
{
    int n;
    printf("How many objects do you have?\n");
    scanf("%d" , &n);
    float x[n], y[n], m[n];
    float totx = 0, toty = 0, totm = 0;
    for (int i = 0; i < n; i++)
    {
        printf("Enter the mass of %d. object.\n" , i+1);
        scanf("%f" , &m[i]);
        totm += m[i];
        printf("Enter the x-coordinate of %d. object.\n" , i+1);
        scanf("%f" , &x[i]);
        totx += x[i]*m[i];
        printf("Enter the y-coordinate of %d. object.\n" , i+1);
        scanf("%f" , &y[i]);
        toty += y[i]*m[i];
    }
    float X_Cntr, Y_Cntr;
    X_Cntr = totx / totm;
    Y_Cntr = toty / totm;
    printf("The coordinates of centre of mass is (%f,%f)", X_Cntr, Y_Cntr);
}
