#include<iostream>
using namespace std;

// Write a program to print array.
int main(){
    int n;
    
    cout << "Enter the size of the array: " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: " << endl;
    for(int i = 0; i <= n ; i++){
        cin >> arr[i];
    }
    cout << "Printing the array..." << endl;
    for(int i = 0; i <= n ; i++){
        cout << arr[i];
    }
    return 0;
}