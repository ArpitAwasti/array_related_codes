#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int A[n];
    for(int i=0; i<n; i++){
        cin >> A[i];
    }
    int x;
    int j,k;
    cin >> x;
    int index_0 , index_n;
    for( j=0; j<n; j++){
        if(A[j]==x){
            break;
        }
    }
    index_0=j;

    for(k=n; k>0; k--){
        if(A[k]==x){
            break;
        }
    }
    index_n=k;

    cout << index_0 << " " << index_n;
}
