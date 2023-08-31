#include<iostream>
#include<list>
using namespace std;

void displayList(list<int>iList){
 list<int>::iterator i=iList.begin();
  i=iList.begin();
  while(i!=iList.end())
   {
    cout<<*i<<" ";
    
    i++;
   }
}

int main(){
    list<int> iList;
    if(iList.empty()){
        cout<<"list is empty"<<endl;
    }
    else {
        cout<<"list is not empty"<<endl;

    }
   iList.push_front(33);
   iList.push_front(44);
   iList.push_back(55);
   iList.push_back(39);
   iList.push_back(50);

   displayList(iList);
   cout<<endl;
 
   iList.sort();
   iList.reverse();
   iList.remove(50);
   cout<<iList.front()<<endl;
   iList.pop_back() ;
   cout<<iList.size()<<endl;
   displayList(iList);
   
}

