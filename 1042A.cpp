#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define loop(i,a,b) for(ll i = a; i<= b ; i++)
#define loopr(i,a,b) for(ll i = a; i>=b ; i--)
#define no cout<<"NO"<<endl
#define yes cout<<"YES"<<endl
#define nn <<"\n"
#define all(x) (x).begin(), (x).end()
#define in INT_MAX

int main(int argc,char const * argv[]){
    int n,m;
    cin>>n>>m;
    int a[n];
    loop(i,0,n-1){
        cin>>a[i];
    }
    sort(a,a+n);
    int mi,ma;
    ma=a[n-1]+m;
    int t=0;
    loop(i,0,n-2){
        t+=(abs(a[i]-a[n-1]));
    }
    if(t>=m){
        mi=a[n-1];
    }
    else{
        loop(i,1,10000){
            t+=n;
            if(t>=m){
                mi=a[n-1]+i;
                break;
            }
        }
    }
    cout<<mi <<" "<<ma nn;
    

    
    return 0;
}