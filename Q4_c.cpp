#include<iostream>
using namespace std;
int main()
{
    int rows,cols;
    cout<<"Enter number of rows and columns"<<endl;
    cin>>rows>>cols;
    int A[50][50],T[50][50];
    cout<<"Enter elements of matrix : "<<endl;
    for (int i=0;i<rows;i++)
    {
        for (int j=0;j<cols;j++)
        {
            cin>>A[i][j];
        }
    }
    for (int i=0;i<rows;i++)
    {
        for (int j=0;j<cols;j++)
        {
            T[i][j]=A[j][i];
        }
    }
    cout<<"Transpose : "<<endl;
    for (int i=0;i<rows;i++)
    {
        for (int j=0;j<cols;j++)
        {
            cout<<T[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}