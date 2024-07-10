// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter size of array:";
//     cin>>n;
//     int arr[n];
    
    
//     for(int i=0;i>=n-1;i--){
    
        
        
//         cout<<arr[i]<<" ";
//     }
    
    
// }
#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    int arr[n];

    for (int i = n; i > 0; i--) {
        arr[i-1] = i * i;
    }

    cout << "The squares of all natural numbers up to " << n << " are: ";
    for (int i = 0; i <= n-1; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}