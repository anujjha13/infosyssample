#include <iostream>
#include <bits/stdc++.h>
using namespace std;

static bool comp(int a ,int b){
        
        return a>b;
}
int help(vector<int> arr,int te,int size){
    
    int ans=0;
    for(int i=0;i<size;i++){
        if(arr[i]>te){
            continue;
        }
        else{
            int done=te/arr[i];
            if(done>2){
                ans+=2;
                te-=2*arr[i];
            }
            else{
                ans+=done;
                te-=done*arr[i];
            }
        }
        
    }
    if(te>0){
        return -1;
    }
    return ans;
    
} 
int main()
{
    int te,n;
    cin>>te>>n;
    
    vector<int> arr;
    while(n--){
        int ele;
        cin>>ele;
        arr.push_back(ele);
    }
    sort(arr.begin(),arr.end(),comp);
    int ans=help(arr,te,arr.size());
    cout<<ans;
    return 0;
}
