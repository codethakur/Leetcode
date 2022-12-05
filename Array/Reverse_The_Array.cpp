#include <bits/stdc++.h> 
// #include<array>
using namespace std;
void reverseArray(vector<int> &arr , int m)
{
	// Write your code here.
    int start = m+1;
    int end = arr.size() - 1;
    
    while (start<=end){
        swap(arr[start],arr[end]);
            start ++ ;
            end -- ;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        vector<int>arr;
        int n; 
        cin>>n;
        int m;
        cin>>m;
        for(int i=0;i<n; i++){
        int x;
        cin>>x;
        arr.push_back(x);  
    }
    reverseArray(arr,m);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    }
}

