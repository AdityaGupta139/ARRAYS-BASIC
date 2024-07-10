#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter no. of rows:";
    cin>>n;
    cout<<"Enter no. of columns:";
    cin>>m;
    int a[n][m];
    int mx=INT16_MIN;
    
    cout<<"Enter elements of array:";
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>a[i][j];
        }
        
    }
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            mx=max(mx,a[i][j]);
        }
        cout<<mx;
    }
 

}