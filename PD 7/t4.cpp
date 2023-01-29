#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"ENter a number :";
    cin>>number;
    for(int i=1;i<=number;i++){
        if(i%4==0){
            cout<<(i*10);
            cout<<endl;
        }
        else
        cout<<i<<endl;
    }
}