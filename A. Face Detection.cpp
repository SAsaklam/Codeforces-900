#include<bits/stdc++.h>
using namespace std;
int main(){

int n,m;
cin >> n >> m;

char arr[n][m];

for(int i=0;i<n;i++){

for(int j=0;j<m;j++){

cin >> arr[i][j];
}
}


int res= 0;

for(int i=0;i<n-1;i++){

for(int j=0;j<m-1;j++){

string tmp;

tmp += arr[i][j];
tmp += arr[i][j+1];
tmp += arr[i+1][j];

tmp += arr[i+1][j+1];


sort(tmp.begin(),tmp.end());


if(tmp == "acef"){

res++;
}


}
}

cout << res << endl;











}
