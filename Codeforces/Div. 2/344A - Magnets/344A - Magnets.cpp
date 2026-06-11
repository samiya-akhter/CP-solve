#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int count=0;
    int temp;


    while (n--)
    {int b;
        cin>>b;
        
        if(b!=temp){
            count++;
        }
        temp=b;

        /* code */
    }
    cout<<count;

    return 0;
}