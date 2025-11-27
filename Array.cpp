#include<bits/stdc++.h>
#include<array>
using namespace std;
int main(){
    
    int basic[30] = {1,2,3};

    array<int, 4> a = {1,2,3,4};
    int size = a.size();

    for(int i = 0; i < size; i++){
        cout<<a[i]<<" "<<endl;
    }

    cout<<"The Element of 2nd Index = "<<a.at(2)<<endl;
    cout<<"Empty of Not -> "<<a.empty()<<endl;

    cout<<"First Element -> "<<a.front()<<endl;
    cout<<"First Element -> "<<a.back()<<endl;

    return 0;
}