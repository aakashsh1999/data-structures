#include<iostream>
using namespace std;
int main()
{
    int j;
    for(int i=5;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            cout<<" ";
        }
        for(int k=1;k<=3;k++)
        {
            cout<<k;
        }
        cout<<endl;
    }
}