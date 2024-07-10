#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter no. of rows:";
    cin>>n;
    cout<<"Enter no. of columns:";
    cin>>m;
    int a[n][m];
    int b[n][m];
    int c[n][m];
    cout<<"Enter elements for matrix A:";
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j < m; j++)
        {
           cin>>a[i][j];
            
        }
        
    }
    cout<<"Enter elements for matrix B:";
      for (int i = 0; i <n; i++)
    {
        for (int j = 0; j < m; j++)
        {
           cin>>b[i][j];
            
        }
        
    }
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
 

}