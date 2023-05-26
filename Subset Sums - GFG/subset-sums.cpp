//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    vector<vector<int>> res;
        vector<int>subset;
    void dfs(int i , int N , vector<int> arr){
        if(i >= N){
            res.push_back(subset);
            return ;
        }
        subset.push_back(arr[i]);
        dfs(i + 1 , N , arr);
        subset.pop_back();
        dfs(i + 1 , N , arr);
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        dfs(0, N , arr);
        vector<int> final;
        for(auto x : res){
            final.push_back(accumulate(x.begin(),x.end(),0));
        }
        return final;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends