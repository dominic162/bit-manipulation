/*
    given a array containing only bits. Find the min number of group of bits to make array equal.
*/


#include<iostream>
using namespace std;
/*
int minswap(int* a,int n){

    int b[2]={0,0};
    b[a[0]]++;

    for(int i=1;i<n;++i){
        if(a[i] != a[i-1]){
            b[a[i]]++;
        }
    }


    return min(b[0],b[1]);
}
*/


void minswap(int* a,int n){

    for(int i=1; i<n; ++i){

        if(a[i] != a[i-1]){

            if(a[i] != a[0]){
                cout<<"start from "<<i;
            }
            else{
                cout<<" end at "<<i-1<<endl;
            }
        }
        

    }

    if(a[0] != a[n-1]){
        cout<<" end at "<<n-1;
    }

    return ;
}

int main(){

    int n;
    cout<<"Enter number of elements in array: ";
    cin>>n;
    int* arr= new int[n];

    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    minswap(arr,n);
    
    //cout<<"Min group of bits required to swap array: "<<ans;

    return 0;
}