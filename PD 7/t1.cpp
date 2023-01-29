#include<iostream>
using namespace std;
void nestedloop(int n);
int main(){
    int n;
    cout<<"Enter number of rows :";
    cin>>n;
    nestedloop(n);
}
void nestedloop(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}