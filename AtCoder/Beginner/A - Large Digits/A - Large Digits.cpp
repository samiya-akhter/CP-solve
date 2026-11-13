#include<iostream>
using namespace std;
int main(){

    int A,B,SA,SB,a,b;
    SA=0,SB=0;
    cin>> A >>B;
    if(A>=100 && B<=999){
        while(A>0 && B>0){
            a=A%10;
            b=B%10;
            SA=SA+a;
            SB=SB+b;
            A=A/10;
            B=B/10;


        }
        cout<<(SA>=SB?SA:SB);


    }



    return 0;
}