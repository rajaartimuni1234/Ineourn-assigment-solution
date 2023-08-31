#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> Val{};
    cout<<"enter your number: ";
    int num;
    for (int i=0; i<5;i++){
    cin>>num;
    Val.push_back(num);
    }

    cout<<endl;
    cout<<"value in Vector ";
    for (int v:Val){
        cout<<v<<" ";
    }
}