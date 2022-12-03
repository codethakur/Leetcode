#include <bits/stdc++.h> 
using namespace std;

vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here
vector<vector<int>>Ans;
    for(int i=0; i<arr.size(); i++){
        for(int j=i+1; j<arr.size(); j++){
            if(arr[i]+arr[j]==s){
                vector<int>temp;
                temp.push_back(min(arr[i],arr[j]));
                temp.push_back(max(arr[i],arr[j]));
                Ans.push_back(temp);
            }
        }
    }
    sort(Ans.begin(),Ans.end());
    return Ans;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int s;
    cin>>s;
    vector<vector<int>>v;
    v=pairSum(arr,s);

    for(int i=0; i<v.size(); i++){
        for(int j=0; j<v[i].size(); j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}