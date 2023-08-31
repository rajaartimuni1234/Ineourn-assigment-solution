#include<iostream>
#include<forward_list>
using namespace std;

void display(forward_list<int> f){
  for (int v:f){
    cout<<v<<" ";
  }
  cout<<endl;
}
int main(){
    forward_list<int> fl{1,2,3,48,7};
    forward_list<int> fl2{2,3,4,5};
    fl.sort();
    fl.merge(fl2);
    //display(fl);
    forward_list<int> fl3;
    forward_list<int> fl4;
    int arr[]={33,33,22,21,50};
    fl3.assign({1,2,3,4,5,3,6,7,8,9,3,10});
    int sum=0;
    for (int v:fl3){
         sum=sum+v;
    }
    cout<<sum<<endl;
    fl3.remove(3);
   swap(fl,fl3);
    display(fl3);
    display(fl);
   forward_list<int> fl5{1,3,4,5,7};
   forward_list<int> fl6;

   fl6.assign(fl5.begin(), fl5.end());
   display(fl6);
}