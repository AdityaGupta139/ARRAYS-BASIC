#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter no. of rows:";
    cin>>n;
    cout<<"Enter no. of columns:";
    cin>>m;
    int a[n][m];
    int b;
    cout<<"Enter number you wantt every index:";
    cin>>b;
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            a[i][j]=b;
            
        }
        
    }
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
 

}