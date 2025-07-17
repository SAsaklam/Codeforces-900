#include<bits/stdc++.h>
using namespace std;
int main(){

int w;
cin >> w;
while(w--){

int a,b,c;
cin >> a >> b >> c;

if((a+b+c ) % 2 == 1)  cout << -1 << endl;

 else if((a+b) < c)  cout << a+b << endl;
else   cout << (a+b+c) / 2 << endl;












}












}
