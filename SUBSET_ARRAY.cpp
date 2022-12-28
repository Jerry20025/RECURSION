#include <bits/stdc++.h>

using namespace std;
void solve(vector<int>arr,vector<int>output, vector<vector<int>>&ans , int i){
    if(i>=arr.size()){
        ans.push_back(output); 
        return;
    }
    //exclude 
    solve(arr,output,ans,i+1); 
    //include
    
    int element=arr[i]; 
    output.push_back(element); 
    solve(arr,output,ans,i+1);
}
vector<vector<int>>subset(vector<int>&arr){
    vector<vector<int>>ans;
    vector<int>output;
    int index=0;
    solve(arr,output,ans,index); 
    return ans;
}

int main()
{
    vector<int>arr={1,2,3}; 
    vector<vector<int>>ans=subset(arr); 
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl; 
    }

    return 0;
}
