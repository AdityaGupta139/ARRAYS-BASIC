#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n:";
    cin >> n;
    int arr[n];
    
    cout << "Enter elements of array:";
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i <= n - 1; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        if (i%2!=0)
        {
            arr[i]*=2;
        }
        else{arr[i]+=10;}
        cout<<arr[i]<<" ";
    }
    
    
}