#include <bits/stdc++.h>
using namespace std;
void solve(string digit, string output, vector<string>&ans, string mapping[], int index){
        if(index>=digit.size()){
            ans.push_back(output); 
            return; 
        }
        
        int number=digit[index] - '0'; //since digit is string , so to get the integer value we substracted with '0'
        
        string value=mapping[number];    //here we got the index of mapped string which we need
        for(int i=0;i<value.size();i++){
            output.push_back(value[i]); 
            solve(digit,output,ans,mapping,index+1); 
            output.pop_back();           // pop out the char present in output to make output empty
        }
    }

    vector<string> letter_combination(string digits) {
        vector<string>ans;
        if(digits.size()==0){
            return ans; 
        }
        string output=""; 
        string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        int index=0; 
        solve(digits,output,ans,mapping,index); 
        return ans;  
    }
int main()
{
    string digit="23"; 
    vector<string>ans=letter_combination(digit); 
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" "; 
        }
        cout<<endl;
    }

    return 0;
}
/*
output: ad ae af bd be bf cd ce cf
*/
