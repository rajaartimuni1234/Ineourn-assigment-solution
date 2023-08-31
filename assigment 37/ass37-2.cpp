#include<iostream>
#include<vector>

#include <bits/stdc++.h>

using namespace std;

int main (){
    vector<int> V{};
    V.push_back(2);
    V.push_back(5);
    V.push_back(8);
    for(int i=0; i<=V.size()-1;i++){
        cout<<V[i]<<" ";

    }
    V.pop_back();
}