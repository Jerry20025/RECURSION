// this is similar to the subset problem , we just need to transform the vector return 
#include <bits/stdc++.h>
using namespace std;
void solve(string arr,string output, vector<string>&ans , int i){
    if(i>=arr.size()){
        ans.push_back(output); 
        return;
    }
    //exclude 
    solve(arr,output,ans,i+1); 
    //include
    
    char element=arr[i]; 
    output.push_back(element); 
    solve(arr,output,ans,i+1);
}
vector<string>subset(string arr){
    vector<string>ans;
    string output;
    int index=0;
    solve(arr,output,ans,index); 
    return ans;
}

int main()
{
    string arr="abc";
    vector<string>ans=subset(arr); 
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl; 
    }

    return 0;
}
