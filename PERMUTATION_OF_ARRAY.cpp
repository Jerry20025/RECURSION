
#include <bits/stdc++.h>

using namespace std;

void solve(vector<int>arr,vector<vector<int>>&ans, int index){
    if(index>=arr.size()){
        ans.push_back(arr); 
        return;
    }
    for(int i=index;i<arr.size();i++){
        swap(arr[index],arr[i]); 
        solve(arr,ans,index+1);
        //backtraccking so that we get orginal input for next recursion
        swap(arr[index],arr[i]);
    }
}
vector<vector<int>> permutation(vector<int>&arr){
    vector<vector<int>>ans; 
    int index=0; 
    solve(arr,ans,index); 
    return ans;
}
int main()
{
    vector<int>arr={1,2,3};
    int index=0;
    vector<vector<int>>ans=permutation(arr);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
