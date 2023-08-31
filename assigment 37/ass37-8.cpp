#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
vector<int>V{22,33,55,11,10};
vector<int>V2{34,55,22,11,24};
vector<int>V3(V.size()+V2.size());
sort(V.begin(),V.end());
sort(V2.begin(),V2.end());
vector<int>::iterator end ,it;
end=set_intersection(V.begin(),V.end(),V2.begin(),V2.end(),V3.begin());

cout<<"common element V3: ";
for(it=V3.begin(); it!=end; it++){
    cout<<*it<<" ";
}
cout<<endl;

//10
int element =11;
vector<int> ::iterator it2=find(V.begin(),V.end(),element);

if(it2!=V.end()){
    cout<<element<<" found at position: "<<it2-V.begin()+1<<endl;
}
else {
    cout<<"element"<<element<<"not found"<<endl;
}
return 0;

}