#include<iostream>
using namespace std;
float calculateMoney(int age,int machineprice,int toyprice);
int main(){
    int age,machineprice,toyprice,rem;
    cout<<"ENter age :";
    cin>>age;
    cout<<"ENter Machine Price :";
    cin>>machineprice;
    cout<<"Enter toyprice :";
    cin>>toyprice;
    rem=calculateMoney(age,machineprice,toyprice);
    cout<<rem;
}
float calculateMoney(int age,int machineprice,int toyprice){
    float sumt=0,sumd=0,total=0,c=0,r=0,s=0;

    for(int i=1;i<=age;i++){
        if(i%2==0){
            sumd=sumd+10;
            c++;
        }
        else
        {
            s++;
        }
     
    
    }
     sumt=toyprice*s;
    sumd=sumd-c;
    total=sumd+sumt;
    if(total>machineprice){
        r=total-machineprice;
        cout<<"Yes "<<endl<<r;
    }
    
    else
    {
        r=machineprice-total;
        cout<<"No "<<r;
    }
   
}
