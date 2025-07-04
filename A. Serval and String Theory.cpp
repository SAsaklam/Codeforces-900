#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin >> t;
while(t--){
int n,k;
cin >> n >> k;
string s;
cin >> s;
bool flag = false;
for(int i=1;i<n;i++){
  if(s[i]!=s[i-1]){
            flag=true;
            break;
        }

        if(k>=1){
        if(flag){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }

    }


     if(!flag){
        cout<<"No"<<endl;

    }

    string t=s;
    reverse(all(s));
    if(t<s){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}}}
