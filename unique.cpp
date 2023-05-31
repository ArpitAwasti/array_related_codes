#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,count=0;
    cin >> n;
    int A[n];
    for(int i=0; i<n; i++){
        cin >> A[i];
    }
    sort(A, A+n);
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(A[i]==A[j]){
                count++;
            }
        }
        if(count<2){
                cout << A[i];
            }
            count=0;
    }
}
