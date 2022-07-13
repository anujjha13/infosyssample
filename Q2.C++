
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int V;
    int H;
    int h;
    cin>>V>>H>>h;
    
    vector<int> v;
    int i=0;
    while(i<V){
        int temp;
        cin>>temp;
        v.push_back(temp);
        i++;
    }
    
    i=i-1;
    int j=0;
    while(j<H){
        int cur=h;
        while(cur-v[i]>0){
            cur-=v[i];
            i--;
            
        }
        
        if(cur-v[i]<0){
            j++;
        }
        else{
            j++;
            i--;
        }
    }
   cout<<i+1;
    return 0;
}
