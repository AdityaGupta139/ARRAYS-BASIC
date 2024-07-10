#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array:";
    cin>>n;
    int a[n];
    cout<<"Enter elements of array:";
    for(int i=0;i<=n-1;i++){
        cin>>a[i];
    }
    int b[n];
    for (int i = 0; i < n; i++)
    {
        b[i]=a[n-1-i];
        cout<<b[i]<<" ";
    }
    
}