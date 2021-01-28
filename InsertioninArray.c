//Program to illustrate the Insertion in the array
#include<stdio.h>
int main()
{
    int a[100],  n;
    printf("Enter the number of element");
    scanf("%d", &n);
    printf("Enter the elements");
    for(int i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    printf("The Given elements are");
    
    for(int i=0;i<n;i++)
    {
        printf("%d", a[i]);
    }

}
