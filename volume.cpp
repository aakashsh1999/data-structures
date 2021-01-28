//Program to Find the Factorial of a number;
#include <iostream>
#include <conio.h>
int main()
{
  int fact=1, num;
    cout<<"Enter the number";
    cin>>num;
    for(int i=0;i<=num;i++)
    {
        fact=fact*i;
    }
    cout<<"The factorial of "<<num<<" is"<<fact;

    return 0;




    

}