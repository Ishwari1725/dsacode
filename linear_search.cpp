#include<iostream>
using namespace std;
int linear_search(int a[], int n, int x)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            return i;
        }
    }
    return -1;
}
int main(){
    int n;
    int a[20];
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter "<<n<<"integers:"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int x;
    cout<<"Enter the target element to search for: ";
    cin>>x;
    int location=linear_search(a,n,x);
    if(location != -1)
    {
        cout<<"Element"<<x<<"found at index: "<<location<<endl;
    }
    else{
        cout<<"Element"<<x<<"not found in array"<<endl;
    }
    return 0;
}

//output
PS D:\c++ ishwari> cd "d:\c++ ishwari\" ; if ($?) { g++ linear_search.cpp -o linear_search } ; if ($?) { .\linear_search }
Enter the size of the array: 6
Enter 6integers:
6 12 18 24 30 36
Enter the target element to search for: 24
Element24found at index: 3
PS D:\c++ ishwari> 