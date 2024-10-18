#include<bits/stdc++.h>
using namespace std;

int main(){

  int arr[] = {1, 2, 3, 1, 4, 5};
  int n = sizeof(arr)/sizeof(arr[0]);
  int k=3;
    int sum = 0;
  for(int i=0;i<k;i++){
    sum = sum + arr[i];
  }

  int maxi = sum;

  for(int i=k;i<n;i++){
        sum = sum - arr[i-k];
        sum += arr[i];

        maxi = max(maxi,sum); 
  }

  cout<<maxi<<endl;

}