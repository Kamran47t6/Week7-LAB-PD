#include<iostream>
using namespace std;
float calculatePrice(float money,int year);
int main(){
    float money;
    int year;
    cout<<"ENter inherited money :";
    cin>>money;
    cout<<"ENter Year :";
    cin>>year;
    calculatePrice(money,year);
}
float calculatePrice(float money,int year){
    float remain=0,total=0,yearb=18,remainss=0,remainpp=0;
    for(int i=1800;i<=year;i++){
        if(i%2==0){
            remain=-(money-12000);
            remainss=remain+remainss;
        }
        else{
            remainpp=remainss-(12000+50*yearb);
        }
        yearb++;
    }
    
    if(money>remain){
        cout<<"Yes ! He will live a carefree life and will have "<<money-remain<<" dollars left ";
    }
    else
    {

        cout<<"He will need "<<remain-money<<" dollars to survive ";
    }
}
