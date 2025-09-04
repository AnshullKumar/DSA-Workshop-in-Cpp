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

