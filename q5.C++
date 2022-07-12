/*You have an interesting string S of length N. It is interesting because you can rearrange the characters of this string in any order. You want to cut this string into some contiguous pieces such that after cutting, all the pieces are equal to one another.
You can't rearrange the characters in the cut pieces or join the pieces together. You want to make the number of pieces as large as possible. What is the maximum number of pieces you can get?
Note: You can observe that you may not want to cut the string at all, therefore the number of pieces is 1. Hence, the answer always exists.*/





#include <bits/stdc++.h>

using namespace std;


int help(string s){
    unordered_map<int,int> mp;
    for(int i=0;i<s.length();i++){
        mp[s[i]]++;
    }
    bool ans=true;
    int a=INT_MAX;
    for(int i=0;i<s.length();i++){
        if(mp[s[i]]<a){
            a=mp[s[i]];
        }
    }
    for(int i=0;i<s.length();i++){
        if(mp[s[i]]>a && mp[s[i]]%a!=0){
            ans=false;
            break;
        }
    }
    if(!ans)
        return 1;
    else
        return a;
    
}
int main()
{
    string s;
    cin>>s;
    
    int ans=help(s);
    
    cout<<ans;

    return 0;
}
