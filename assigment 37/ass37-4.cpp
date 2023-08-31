#include<iostream>
#include<vector>
#include<numeric>
#include<algorithm>
using namespace std;

int main(){
    vector<int>V{22,33,55,11,10};
    vector<int> V1(V);
    
    for(int i:V1){
        cout<<i<<" ";
    } 

cout<<endl;
//5
    cout<<*max_element(V.begin(),V.end())<<endl;
    cout<<*min_element(V.begin(),V.end())<<endl;


//6
reverse(V.begin(),V.end());
 for(int i:V){
        cout<<i<<" ";
    } 
    
 //7
// int sum=0;
// for (int i:V){
  //sum=sum+i;
// }
int sum=accumulate(V.begin(),V.end(),0);
 cout<<sum;
}