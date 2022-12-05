#include <bits/stdc++.h>
using namespace std; 
void sort012(int *arr, int n)
{
   //   Write your code here
    int low=0;
    int mid =0;
    int high=n-1;
    
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            low++;mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else if(arr[mid]==2){
            swap(arr[high],arr[mid]);
            high--;
        }
        
    }
}
int main(){
    int t;
    cin>>t;
    int n;
    cin>>n;
    while(t--){
        int arr[n];
        for(int i=0; i<n; i++){
        cin>>arr[i];
        }
        sort012(arr,n);
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout << endl;
    }
    return 0;
}