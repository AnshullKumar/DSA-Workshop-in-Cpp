#include<iostream>
using namespace std;
#include<vector>
#define max 5

// Making a Menu Driven program using stack.
int stk[max];
int top = -1;
int value, choice;

bool full(){
    return top == max - 1;
}
bool isEmpty(){
    return top == -1;
}
void push(){
    if(full()){
        cout << "Stack Overflow." << endl;
    }else{
        cout << "Enter the value to push to the stack :" << endl;
        cin >> value;
        stk[++top] = value;
        cout << value << " has been pushed to the stack..." << endl;
    }
}
void pop(){
    if(isEmpty()){
        cout << "Stack Underflow." << endl;
    }else{
        cout << stk[top--] <<" has been popped from the stack..." << endl;
    }
}
void display(){
    if(isEmpty()){
        cout << "Stack is empty." << endl;
    }else{
        for(int i = top; i >= 0; i--){
            cout << stk[i] << " ";
        }
        cout << endl;
    }
}

int stackmenu(){
    while(1){
        cout << endl << "---Menu Driven Stack---" << endl;
        cout << "1.Push (Insert)" << endl << "2.Pop (Delete)" << endl << "3.Display" << endl << "4.Exit" << endl;
        cout << "Enter operation to perform :" << endl;
        cin >>  choice;
        if(choice == 1){
            push();
        } else if(choice == 2){
            pop();
        } else if(choice == 3){
            display();
        } else if(choice == 4){
            return 0;
        } else{
            cout << "Invalid operation..." << endl;
        }
    }
    return 0;
}


// Write code for using queue using vectors.
#define MAX 5
int queuemenu(){
    vector<int> v;
    int choice1, value;
    while(1){
        cout << "---Menu Driven Queue---" << endl;
        cout << "1.Enqueue (Insert)" << endl << "2.Dequeue (Delete)" << endl << "3.Display" << endl << "4.Exit" << endl;
        cout << "Enter operations to perform :" << endl;
        cin >> choice1;
        if(choice1 == 1){
            if(v.size() == MAX){
                cout << "Queue Overflow." << endl;
            }else{
                cout << "Enter the value to enqueue :" << endl;
                cin >> value;
                v.push_back(value);
                cout << value << " has been pushed to the queue..." << endl;
            }
        } else if(choice1 == 2){
            if(v.size() == 0){
                cout << "Queue Underflow." << endl;
            } else{
                cout << v[0] << " has been popped from the queue..." << endl;
                v.erase(v.begin());
            }
        }else if (choice1 == 3){
            if(v.size() == 0){
                cout << "Queue is empty." << endl;
            }else{
                for(int i = 0; i < v.size(); i++){
                    cout << v[i] << " ";
                }
                cout << endl;
            }
        }else if(choice1 == 4){
            return 0;
        }else {
            cout << "Invalid choice." << endl;
        }
    }
    return 0;
}

int main(){
    stackmenu();
    queuemenu();
    return 0;
}