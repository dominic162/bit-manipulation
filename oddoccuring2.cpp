/*
    Given a array in which every element except 2 elements occurs even time. Find the 2 odd occurring elements.
    sample test case:
    arr[] = {2, 1, 3, 2}
    
*/

#include<bits/stdc++.h>
using namespace std;

vector<int> singleNumber(vector<int> nums) 
    {
        // Code here.
        int xa=0,r;
        vector<int> ans{0,0};
        for(int i=0;i<nums.size();++i){
            xa=xa^nums[i];
        }
        
        r=(xa&(~(xa-1))); // it gives the number with only set bit equal to rightmost set bit of xa
        
        for(int i=0;i<nums.size();++i){
            if(nums[i]&r){
                ans[0]=ans[0]^nums[i];
            }
            else{
                ans[1]=ans[1]^nums[i];
            }
        }
        if(ans[1]<ans[0]){
            ans[0]=ans[0]^ans[1];
            ans[1]=ans[0]^ans[1];
            ans[0]=ans[0]^ans[1];
        }
        return ans;
        
    }

int main(){

    int n;
    cout<<"Enter number of elements in array: ";
    cin>>n;
    
    vector<int> arr;
    int r;
    cout<<"Enter elements of array: ";
    
    for(int i=0;i<n;++i){
        cin>>r;
        arr.push_back(r);
    }

    for(int i=0;i<n;++i){
        cout<<arr[i]<<" ";
    }
    vector<int> ans=singleNumber(arr);
    cout<<"The numbers are: ";
    for(int i=0;i<ans.size();++i){
        cout<<ans[i]<<" ";
    }

    return 0;
}