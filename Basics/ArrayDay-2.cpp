#include<iostream>
using namespace std;

// Write a program to print array.
int user_arr(){
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
        cout << arr[i] << " ";
    }
    return 0;
}

// Creating a 2D Matrix.
void TwoD_Arr(){
    int rows, columns;
    cout << "Enter value for rows and columns: " << endl;
    cin >> rows >> columns;
    int arr[rows][columns];
    cout << "Enter the elements for the 2D Matrix: " << endl;
    for(int i = 0;i < rows; i++){
        for(int j = 0;j < columns; j++){
            cin >> arr[i][j];
        }
    }
    cout << "Printing the 2D Matrix: " << endl;
    for(int i = 0;i < rows; i++){
        for(int j = 0;j < columns; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

// Writing a function using BubbleSort.
void Bubblesort(){
    int n;
    cout << "Enter the no. of elements in the Array: " << endl;
    cin >> n;
    int arr[100];
    cout << "Enter elements: " << endl;
    for(int i = 0;i < n; i++){
        cin >> arr[i];
    }

    for (int i = 0; i < n-1; i++){
        for (int j = 0; j < n-i-1; j++){
        if (arr[j]>arr[j+1])
            {   int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }   
        }    
    }
    
    cout << "Sorted array: " << endl;
    for(int i = 0; i < n;i++){
            cout << arr[i] << " ";
    }
}

void linear(){
    int n, key;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter the element to search: ";
    cin >> key;
    int position = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            position = i; // store index
            break;
        }
    }
    if (position != -1)
        cout << "Element found at index " << position << endl;
    else
        cout << "Element not found in the array." << endl;
}


int main(){
    //user_arr();
    //TwoD_Arr();
    //Bubblesort();
    linear();
}