//Find maximum sum of subarray of size k
#include<bits/stdc++.h>

using namespace std;

int main(){
    int arr[]={1,13,5,7,9};
    int n=5;
    int k=3;
    int ans=INT_MIN,sum=0;
    int i=0,j=0;
    while(j<n){
        sum+=arr[j];
        if((j-i+1)<k)
            j++;
        else if((j-i+1)==k){
            ans=max(ans,sum);
            sum-=arr[i];
            i++;
            j++;
        }
    }
    cout<<ans<<"\n";
}
