#include<iostream>
using namespace std;
void revArray(int arr[], int n)
{
    int st=0,end=n-1;
    while (st<end)
    {
        swap(arr[st++],arr[end--]);
    }
}
int main()
{
    int arr[100],n;
    cout<<"Enter number of elements "<<endl;
    cin>>n;
    cout<<"Enter "<<n<<" elements : ";
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    revArray(arr,n);
    cout<<"After reversing : "<<endl;
    for (int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}