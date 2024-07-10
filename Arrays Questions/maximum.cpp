#include<iostream>

using namespace std;
int main(){
    int n;
    cout<<"ENTER SIZE OF ARRAY:";
    cin>>n;
    int arr[n];
    int mx=INT16_MIN;
    cout<<"Enter elements of array:";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        mx=max(mx,arr[i]);
    }
    cout<<endl;
    cout<<mx;
}