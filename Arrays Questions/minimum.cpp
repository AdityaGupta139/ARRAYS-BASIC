#include<iostream>

using namespace std;
int main(){
    int n;
    cout<<"ENTER SIZE OF ARRAY:";
    cin>>n;
    int arr[n];
    int mn=INT16_MAX;
    cout<<"Enter elements of array:";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        mn=min(mn,arr[i]);
    }
    cout<<endl;
    cout<<mn;
}