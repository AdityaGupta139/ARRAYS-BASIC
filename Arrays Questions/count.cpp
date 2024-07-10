#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n:";
    cin >> n;
    int arr[n];
    int count=0;
    int x;
    cout<<"Enter x:";
    cin>>x;
    
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
        if (arr[i]>x)
        {
            count++;
        }
        
        
    }
    
    cout<<"total elements which are bigger than given number are:"<<count<<" ";
}