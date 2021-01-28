#include<iostream>
using namespace std;
int linearSearch(int *, int , int, int);
int main()
{
    int arr[50];
    int n, element, index, flag = 0;

    cout<<"Enter the number of elements";
    cin>>n;
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"The elements are "<<endl;
    
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }

    cout<<"Enter the Element to be searched"<<endl;
    cin>>element;
    
    index=(arr, element, n, flag);
 if(index == -1)
    {
        cout<<"Element not found"<<endl;
    }
    else 
    {
        cout<<"Element found at Index"<<index;
    }
    return 0;
}
int linearSearch(int arr[], int element, int n)
{   int flag=1;
    int pos = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i] == element)
        {
            flag=0;
            pos=i+1;
        }
        else 
        {
            return -1;
        }
    }
    return pos;
}
