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
 if(k == 0) {

    cout <<"YES" << endl;
    continue;

 }
 else{
        int count = 0;
    for(int i=0;i<s.length()/2;i++){

        if(s[i] == s[n-i-1]){

        count++;
        }
        else{

            break;
        }
    }



            if(n%2==0){
                if(k <= count && k <n/2){

                    cout << "YES" << endl;
                }
                else{

                     cout << "NO" << endl;
                }

            }

            else{
                  if(k <= count){

                    cout << "YES" << endl;
                }
                else{

                     cout << "NO" << endl;
                }


            }


    }




 }








}

















