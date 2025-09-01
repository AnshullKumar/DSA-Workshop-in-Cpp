#include<iostream>
#include<string>
using namespace std;

int userage(){
    int userAge;
    cout << "Enter your age: ";
    cin >> userAge;

    cout << "You are" << userAge << "years old." << endl;
    return 0;
}

// Write a program to take user input and display their sum.
int add(){
    int num1, num2, sum;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    sum = num1 + num2;
    cout << "The sum is: " << sum << endl;
    return 0;
}

int sum(){
    double num1, num2, sum;
    cout << "Enter 2 numbers: ";
    cin >> num1 >> num2;
    sum = num1 + num2;
    cout << "The sum is: " << sum << endl;
    return 0;
}

// Calculator program to perform basic arithmetic operations.
int cal(){
    int num1, num2;
    cout << "Enter 2 numbers : ";
    cin >> num1 >> num2;
    int sum = num1 + num2;
    int diff = num1 - num2;
    int prod = num1 * num2;
    double quot = num1 / num2;
    int rem = num1 % num2;
    cout << "Sum is : " << sum << endl;
    cout << "Difference is : " << diff << endl;
    cout << "Product is : " << prod << endl;
    cout << "Quotient is : " << quot << endl;
    cout << "Remainder is : " << rem << endl;
    return 0;
}

//Incrementing a number by 1.
int inc(){
    int num, a = 5;
    int b = ++a;
    cout << "Value of a is: " << a << endl;
    cout << "Value of a after incrementing: " << b << endl;
    cout << "Now trying it with user input." << endl;
    cout << "Enter a number: ";
    cin >> num;
    cout << "After increment: " << ++num << endl;
    return 0;
}

//Number is positive or negative. Using if else.
int P_N(){
    int num;
    cout << "Enter a nuber: ";
    cin >> num;
    if(num > 0){
        cout << "The number is positive." << endl;
    }else if(num < 0){
        cout << "The number is negative." << endl;
    }else if(num == 0){
        cout << "The number is zero." << endl;
    }else{
        cout << "Invalid input." << endl;
    }
    return 0;
}

//For loop and While loop

int loop(){
    cout << "Printing till 5";
    for(int i = 0;i <= 5; i++){
        cout << i << endl;
    }
    int count = 0;
    cout << "Now trying using While loop" << endl;
    while(count <= 4){
        cout << count << endl;
        count++;
    } 
}

//Function declaration
void greet(string name){
    cout << "Hello" << name << endl;
}
int greet(){
    greet("Anurag");
}
int greet();