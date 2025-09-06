#include<iostream>
#include<vector>
using namespace std;
int vec(){
    vector<int> v(5,10);
    cout << endl << "For loop using C++ STL..." << endl;
    for (int i: v) {  
        cout << i << " ";
    }
    cout << endl << "For loop with standard form.." << endl;
    for(int i = 0; i < 5; i++){
        cout << v[i] << " ";
    } 
    cout << endl;
    return 0;
}

int stack(){
    vector<int> v(5);
    cout << endl << "Enter elements for the array: " << endl;
    for(int i = 0; i < v.size(); i++){
        cin >> v[i];
    }
    cout << endl << "Printing the array..." << endl;
    for (int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    v.pop_back();
    v.push_back(3);
    cout << endl <<"Printing the array after operations..." << endl;
    for (int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
    
}

int reverse(){
    vector<int> vec = {1,2,3,4};
    int n = vec.size();
    cout << "Printing the original array..." << endl;
    for(int i = 0; i < n; i++){
        cout << vec[i] << " ";
    }

    cout << endl << "Performing the reversing operation..." << endl;
    for(int i = 0; i < n / 2; i++){
        int temp = vec[i];
        vec[i] = vec[n - i - 1];
        vec[n - i - 1] = temp;
    }
    cout << "Reversed array..." << endl;
    for(int i = 0; i < n; i++){
        cout << vec[i] << " ";
    }

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
    /*reverse();
    stack();
    vec();
    queuemenu();
    */

    
    vector<int> prices = {7,1,5,3,6,4};
    int x = -1;
    int y = -1;
    int j_index = 0, i_index = 0;
    for(int i = 0; i < prices.size(); i++){
        if(prices[i] < prices[i + 1]){
            x = prices[i];
            i_index++;
            break;
        }
    }
    for(int j = x; j < prices.size(); j++){
        if(prices[j - 1] > prices[j]){
            y = prices[j];
            j_index++;
        }
    }
    cout << y << " y value" << endl;
    cout << x << " x value" << endl;
    int z =  j_index - i_index;
    cout << i_index << " i index value" << endl;
    cout << j_index << " j index value" << endl;

    cout << z << " z value" << endl;

    return 0;
}
