#include<iostream>
using namespace std;
int main(){
    char sab, sbc, sac;

    cin>>sab>>sac>>sbc;
    int a=0,b=0,c=0;
    if(sab=='>') 
    a++;
    else b++;

    if(sac=='>') 
    a++;
    else c++;

    if (sbc=='>') 
    b++;
    else c++;

    if(a==1)
    cout<<"A";
    else if(b==1)
    cout<<"B";
    else if (c==1)
    cout<<"C";
    
    

    return 0;
}