
#include <bits/stdc++.h>

using namespace std;

void solve(string str,vector<string>&ans, int index){
    if(index>=str.size()){
        ans.push_back(str); 
        return;
    }
    for(int i=index;i<str.size();i++){
        swap(str[index],str[i]); 
        solve(str,ans,index+1);
        //backtraccking so that we get orginal input for next recursion
        swap(str[index],str[i]);
    }
}
vector<string> permutation(string str){
    vector<string>ans; 
    int index=0; 
    solve(str,ans,index); 
    return ans;
}
int main()
{
    string str="bac"; 
    int index=0;
    vector<string>ans=permutation(str);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
