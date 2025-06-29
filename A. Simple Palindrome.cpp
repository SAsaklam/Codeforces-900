#include<bits/stdc++.h>
using namespace std;
string vowels = "aeiou";
int main(){
    string vowels = "aeiou";
    int t;
    cin >> t;
    while(t--){

     long long n,vowelseq , rem;
     string res = "";
     cin >> n;
     vowelseq = n / 5;
     rem = n % 5;

     while(vowelseq--){

        res += vowels;


     }

     for(long long i=0;i< rem; i++){


        res += vowels[i];
     }

     sort(res.begin(),res.end());
     cout << res << endl;





    }}

