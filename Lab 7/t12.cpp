#include<iostream>
using namespace std;
int calculateGCD(int number1,int number2);
int calculateLCM(int number1,int number2,int gcd);
int main(){
    int number1,number2,gcd;
    cout<<"ENter number 1:";
    cin>>number1;
    cout<<"ENter number 2:";
    cin>>number2;
    calculateGCD(number1,number2);
    calculateLCM(number1,number2,gcd);
}
int calculateGCD(int number1,int number2){
    int gcd;
    for(int i=1;i<=number1 && i<=number2;i++){
        if(number1%i==0 && number2%i==0){
            gcd=i;
        }
    }
    cout<<"GCD :"<<gcd<<endl;
}
int calculateLCM(int number1,int number2,int gcd){

    for(int i=number1;i<=number1*number2;i++){
        if(i%number1==0 && i%number2==0){
            gcd=i;
            break;
        }
    }
    cout<<"LCM :"<<gcd;
}
