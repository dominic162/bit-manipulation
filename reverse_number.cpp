/*
    Given a 32 bit unsigned number. Find the number by reversing position of bits.
*/

#include<iostream>
using namespace std;

unsigned int reversebit(unsigned int n){
    
    unsigned int big=1<<31,ans=0;
    while(n){
        if(n&1){
            ans+=big;
        }
        big=big>>1;
        n=n>>1;
    }

    return ans;

}

int main(){

    unsigned int n;
    cout<<"Enter element: ";
    cin>>n;
    unsigned int ans=reversebit(n);
    cout<<"Number by reversing bits position: "<<ans;

    return 0;
}