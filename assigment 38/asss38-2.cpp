#include<iostream>
#include<list>

using namespace std;
void displayList(list<int>iList){
 list<int>::const_iterator i;
  i=iList.begin();
  while(i!=iList.end())
   {
    cout<<*i<<" ";
    
    i++;
   }
}
int main(){
    list<int> ilist1;
    list<int> ilist2;
    list<int> ilist3;
    list<int> ilist4;
    list<int>::iterator it =ilist1.begin();
    ilist1.assign(*it,44);
    ilist1.assign(2,44);
  displayList(ilist1);
  cout<<endl;
    ilist2.assign(ilist1.begin(), ilist1.end());
    displayList(ilist2);
    cout<<endl;
    int arr[]={1,2,3,4,5};
    ilist3.assign(arr, arr+5);
  displayList(ilist3);
//3
  list<int>::iterator iter2,iter3;
for(iter2=ilist3.end(); iter2!=ilist3.begin(); iter2--){
  cout<<*iter2<<" ";
}
cout<<endl;
cout<<"enter your numer"<<endl;
int i;
while(true)
{    
    cin>>i;
    if(i==NULL){
        break;
    }
   ilist4.push_front(i);
}
displayList(ilist4);
cout<<ilist4.front()<<endl;
cout<<ilist4.back()<<endl;
ilist4.remove(3);
displayList(ilist4);
ilist1.merge(ilist4);
displayList(ilist1);
}



