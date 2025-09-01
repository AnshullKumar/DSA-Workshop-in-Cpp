// Q1.Write a program to take three numbers as user input and print their largest and smallest number.

#include <iostream>
using namespace std;
int QFirst(){
    int num1, num2, num3;
    cout << "Enter 3 numbers: " << endl;
    cin >> num1 >> num2 >> num3;
    
    if(num1 > num2 && num1 > num3){
        cout << num1 << "is the largest element" << endl;
    }else if(num2 > num1 && num2 > num3){
        cout << num2 << "is the largest element" << endl;
    }else if(num3 > num1 && num3 > num2){
        cout << num3 << "is the largest element" << endl;
    }else{
        cout << "Invalid." << endl;
    }
    
    if(num1 < num2 && num1 < num3){
        cout << num1 << "is the smallest element" << endl;
    }else if(num2 < num1 && num2 < num3){
        cout << num2 << "is the smallest element" << endl;
    }else if(num3 < num1 && num3 < num2){
        cout << num3 << "is the smallest element" << endl;
    }else{
        cout << "Invalid." << endl;
    }
}

//Write a program to reverse a number.
int reverse(){
    char num[100];
    int length = 0;

    cout << "Enter a number with many digits: ";
    cin >> num;
    while
    
}