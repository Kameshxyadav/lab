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
    cout<<"Sum of each row : "<<endl;
    for (int i=0;i<rows;i++)
    {
        int rowSum=0;
        for (int j=0;j<cols;j++)
        {
            rowSum+=A[i][j];
        }
        cout<<"Row "<<i<<" : "<<rowSum<<endl;
    }    
      cout<<"Sum of each column : "<<endl;
    for (int j=0;j<cols;j++)
    {
        int colSum=0;
        for (int i=0;i<rows;i++)
        {
            colSum+=A[i][j];
        }
        cout<<"Column "<<j<<" : "<<colSum<<endl;
    } 
    return 0;
}