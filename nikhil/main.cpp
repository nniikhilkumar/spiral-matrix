#include<iostream>
using namespace std;
int main(){
    int n,m;cin>>n>>m;
    int arr[n][m];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    int t=1,b=n,r=1,l=m,d=0;
    while(t<=b && r<=l){
        if(d==0){
            for(int i=r;i<=l;i++){
                cout<<arr[t][i];
            }
            t++;
        }
        else if(d==1){
            for(int i=t;i<=b;i++){
                cout<<arr[i][l];
            }
            l--;
        }
        else if(d==2){
            for(int i=l;i>=r;i--){
                cout<<arr[b][i];
            }
            b--;
        }
        else{
            for(int i=b;i>=t;i--){
                cout<<arr[i][r];
            }
            r++;
                }
        d=(d+1)%4;
    }
    return 0;
}
