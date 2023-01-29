#include<iostream>
using namespace std;
void nestedloop(int n);
int main(){
    int n;
    cout<<"ENter number of rows:";
    cin>>n;
    nestedloop(n);
}
void nestedloop(int n){
     for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}