#include<iostream>
using namespace std;

void solve(int n){
    if(n == 0) return;
    solve(n - 1);
    cout << n << endl;
}

int factorial(int n){
    if(n == 0)
        return 1;
    if(n == 1)
        return 1;
    int ans = n * factorial(n - 1);
    return ans;
}

int fibonacci(int n){
    if(n <= 1 ){
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

void tail_recursion(int n){
    if(n == 0) return;
    cout << n << endl;
    solve(n - 1);
}

void hanoi(int n, char a, char b, char c){
    if (n == 0) return;
    hanoi(n - 1, a, c, b);
    cout << a << " -> " << c << endl;
    hanoi(n - 1, b, a, c);
}

int main(){
    //solve(3);
    int n;
    //cout << factorial(n) << endl;
    int y = fibonacci(11);
    cout << "Enter no. of discs :" << endl;
    //tail_recursion(n);
    cin >> n;
    hanoi(n, 'A', 'B', 'C');   

    return 0;

}