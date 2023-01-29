#include<iostream>
using namespace std;
int frequencyChecker(int number,int digit);
int main(){
    int number,digit,result;
    cout<<"ENter a number :";
    cin>>number;
    cout<<"ENter digit :";
    cin>>digit;
    result=frequencyChecker(number,digit);
    cout<<result;
}
int frequencyChecker(int number,int digit){
    int r,n=0;
    while(number>0){
       r=number%10;
       number=number/10;
       if(r==digit){
          n++;
       }
    }
    return n;
}
