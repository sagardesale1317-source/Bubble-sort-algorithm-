#include<iostream>
using namespace std;
int bublesort(int a[], int n)
{
    int start=0;
    int end=n;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-i; j++)
        {
            if(a[j]>a[j+1])
            swap(a[j],a[j+1]);
        }
    }
    return 0;
    
}

int main()
{
    int n;
    cout<<"How many elements ";
    cin>>n;
    int a[n];
    cout<<"Enter "<<n<<" Elements"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];

    }
    
    bublesort(a,n);
    cout<<"Sorted list is "<<endl;
    for(int i=0; i<n; i++)
    {
    cout<<a[i]<<endl;
    }

    return (0);

// PS D:\Sagar> cd "d:\Sagar\" ; if ($?) { g++ tempCodeRunnerFile.cpp -o tempCodeRunnerFile } ; if ($?) { .\tempCodeRunnerFile }
// How many elements 5
// Enter 5 Elements
// 88
// 66
// 99
// 23
// 11
// Sorted list is 
// 11
// 23
// 66
// 88
// 99