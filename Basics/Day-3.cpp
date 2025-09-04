#include<iostream>
#include<vector>
using namespace std;
int vec(){
    vector<int> v(5,10);
    cout << "For loop using C++ STL...";
    for (int i: v) {  
        cout << i << " ";
    }
    cout << "For loop with no==standard form..";
    for(int i = 0; i < 5; i++){
        cout << v[i] << " ";
    } 
    return 0;
}

int stack(){
    vector<int> v(5);
    cout << "Enter elements for the array: " << endl;
    for(int i = 0; i < v.size(); i++){
        cin >> v[i];
    }
    cout << "Printing the array..." << endl;
    for (int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    v.pop_back();
    v.push_back(3);
    cout << endl <<"Printing the array after operations..." << endl;
    for (int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    
}
