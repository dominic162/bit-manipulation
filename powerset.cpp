#include<bits/stdc++.h>
using namespace std;

void answer(string s){

    int total=pow(2,s.size());
    vector<string> vr;
    for(int i=0; i<total; ++i){

        int j=i,index=0;
        string ans="";
        for(; j!=0; ){

            if(j&1){
                ans+=s[index];
            }
            ++index;
            j=j>>1;
        }
        vr.push_back(ans);
        sort(vr.begin(),vr.end());
    }

    cout<<"All subsets are: ";
    for(int i=0; i<vr.size(); ++i){
        cout<<vr[i]<<" ";
    }
    return ;

}



int main(){
    string s;
    cout<<"Enter string: ";
    cin>>s;
    answer(s);
    return 0;
}