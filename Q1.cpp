#include<iostream>
using namespace std;
void createArray(int arr[],int &n)
{
    cout<<"Enter number of elements "<<endl;
    cin>>n;
    cout<<"Enter "<<n<<" elements : ";
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Array created successfully!"<<endl;
}
void displayArray(int arr[],int n)
{
    cout<<"Array elements : "<<endl;
    for (int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void insertElement(int arr[],int &n)
{
    int pos,value;
    cout<<"Enter position : ";
    cin>>pos;
    cout<<"Enter value to be inserted : ";
    cin>>value;
    for (int i=n;i>pos;i--)
    {
        arr[i]=arr[i-1];
        arr[i-1]=value;
    }
    n++;    
    cout<<"Element inserted successfully!"<<endl;
}
void deleteElement(int arr[],int &n)
{
    int pos;
    cout<<"Enter position : ";
    cin>>pos;
    for (int i=pos;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    n--;
    cout<<"Element deleted successfully!"<<endl;
}
void linearSearch(int arr[], int n)
{
    int key;
    cout<<"Enter element to search : ";
    cin>>key;
    for (int i=0;i<n;i++)
    {
        if (arr[i]==key)
        {
            cout<<"Element found at position "<<i<<endl;
            return;
        }
    }
    cout<<"Element not found!"<<endl;
}
int main()
{
    int arr[100],n=0,choice;
    while (true)
    {
        cout<<"MENU"<<endl;
    cout<<"1.CREATE\n2.DISPLAY\n3.INSERT\n4.DELETE\n5.LINEAR SEARCH\n6.EXIT"<<endl;
    cout<<"Enter your choice : ";
    cin>>choice;
    switch(choice)
    {
        case 1 : createArray(arr,n);
                 break;
        case 2 : displayArray(arr,n);
                 break;
        case 3 : insertElement(arr,n);
                 break;
        case 4 : deleteElement(arr,n);
                 break;       
        case 5 : linearSearch(arr,n);
                 break;
        case 6: cout<<"Exiting program.\n";
                 return 0; 
        default : cout<<"Invalid choice!"<<endl;
    }
    }    
    return 0;
}