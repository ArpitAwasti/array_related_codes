#include<bits/stdc++.h>
using namespace std;
int reversearray(vector<int> arp , int m){
    int index;
    int temp;
    cout << "Enter the vector";
    for(int i=0; i<arp.size(); i++){
        cin >>  arp[i];
    }
    for(int i=0; i<arp.size(); i++){
        if(arp[i]==m){
            index=i;
        }
        for(int i=0; i<arp.size(); i++){
            for(int j=i+1; j<arp.size(); j++){
                temp=arp[i];
                arp[i]=arp[j];
                arp[j]=temp;
            }
        }
        for(int i=0; i<arp.size(); i++)
        cout << arp[i];
    }
}
int main(){
    int m;
    cin >> m;
    vector<int> arp;
    reversearray(arp,m);
}
