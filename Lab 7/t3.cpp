#include<iostream>
using namespace std;
int table(int n);
int main(){
    int n;
    cout<<"ENter a number :";
    cin>>n;
    table(n);

}
int table(int n){
    for(int i=1;i<=10;i++){
        cout<<n<<"*"<<i<<"="<<n*i<<endl;
    }
}