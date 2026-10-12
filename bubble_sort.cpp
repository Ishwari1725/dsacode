#include<iostream>
using namespace std;
void bubble_sort(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
int main()
{
    int n;
    int a[10];
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter"<<n<<"integers in any order: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    bubble_sort(a,n);
    cout<<"Sorted array: ";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
//output
PS D:\c++ ishwari> cd "d:\c++ ishwari\" ; if ($?) { g++ bubble_sort.cpp -o bubble_sort } ; if ($?) { .\bubble_sort }
Enter the size of array: 6
Enter6integers in any order: 
23 18 55 42 67 5
Sorted array: 5 18 23 42 55 67 
PS D:\c++ ishwari> 


