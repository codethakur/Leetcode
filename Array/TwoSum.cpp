<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>> twoSum(vector<int>& arr, int target, int n)
{
	// Write your code here.
    vector<pair<int,int>>v;
    sort(arr.begin(),arr.end());
    int i=0; int j=n-1;
    while(i<j){
        if(arr[i]+arr[j]<target){
            i++;
        }else if(arr[i]+arr[j]>target){
            j--;
        }else if(arr[i]+arr[j]==target){
            v.push_back({arr[i],arr[j]});
            i++;
            j--;
        }    
    }
    if(v.empty()){
            v.push_back({-1,-1});
            return v;
        }
        return v;
    
}

int main()
{
    int t;
    cin>>t;
    while(t--){
    vector<int>arr;
    int n; 
    cin>>n;
    int target;
    cin>>target;
    for(int i=0;i<n; i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    vector<pair<int,int>>v;
    v=twoSum(arr,target,n);
    for(auto i:v){
        cout << i.first << ", " << i.second <<endl;
    }
    }
    return 0;
    
=======
#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>> twoSum(vector<int>& arr, int target, int n)
{
	// Write your code here.
    vector<pair<int,int>>v;
    sort(arr.begin(),arr.end());
    int i=0; int j=n-1;
    while(i<j){
        if(arr[i]+arr[j]<target){
            i++;
        }else if(arr[i]+arr[j]>target){
            j--;
        }else if(arr[i]+arr[j]==target){
            v.push_back({arr[i],arr[j]});
            i++;
            j--;
        }    
    }
    if(v.empty()){
            v.push_back({-1,-1});
            return v;
        }
        return v;
    
}

int main()
{
    int t;
    cin>>t;
    while(t--){
    vector<int>arr;
    int n; 
    cin>>n;
    int target;
    cin>>target;
    for(int i=0;i<n; i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    vector<pair<int,int>>v;
    v=twoSum(arr,target,n);
    for(auto i:v){
        cout << i.first << ", " << i.second <<endl;
    }
    }
    return 0;
    
>>>>>>> cbd4038525ed163ddd0850d06dfa8db8ce261ee9
}