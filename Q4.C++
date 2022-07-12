#include <bits/stdc++.h>

using namespace std;


int help(vector<int> v){
    int n=v.size();
    int count=0;
    if(n%2==0){
        
        int m1=n/2-1;
        int m2=n/2;
        
        if(v[m1]==v[m2]){
            int i=m1-1;
            int j=m2+1;
            while(i>=0 && j<n){
                if(v[i]!=v[i+1]-1){
                    count++;
                }
                if(v[j]!=v[j-1]+1){
                    count++;
                }
                i--;
                j++;
            }
            
        }
        else{
            count++;
            if(v[m1-1]+1==v[m1])
                v[m2]=v[m1];
            else
                v[m1]=v[m2];
            int i=m1-1;
            int j=m2+1;
            while(i>=0 && j<n){
                if(v[i]!=v[i+1]-1){
                    count++;
                }
                if(v[j]!=v[j-1]-1){
                    count++;
                }
                i--;
                j++;
            }
        }
    }
    else{
        int m=n/2;
        int i=m-1;
        int j=m+1;
        while(i>=0 && j<n){
                if(v[i]!=v[i+1]-1){
                    count++;
                }
                if(v[j]!=v[j-1]-1)
                    count++;
                i--;
                j++;
        }
        
    }
    return count;
}
int main()
{
    int n;
    cin>>n;
    
    vector<int> v;
    while(n--){
        int t;
        cin>>t;
        v.push_back(t);
    }
    int ans1=help(v);
    sort(v.begin(),v.end());
    int ans2=help(v);
    cout<<min(ans1,ans2);

    return 0;
}
