#include<bits/stdc++.h>
using namespace std;
/*  <--------- Shortcuts --------->  */
#define f(i,a,b) for(ll i=a;i<b;i++)
#define f2(i,a,b) for(ll i=a;i<b;i+=2)
#define fr(j,a,b) for(ll j=b-1;j>=a;j--)
#define vsort(a) sort(a.begin(),a.end())
#define vrsort(a) sort(a.begin(),a.end(),greater< ll >())
#define vprsort(a) sort(a.rbegin(),a.rend())
#define vll vector <ll>
#define vmll vector <vll>
#define pi pair <int,int>
#define pll pair <ll,ll>
#define vpi vector< pi >
#define vpll vector< pll >
#define si set <int>
#define spi set <pi >
#define spll set <pll >
#define sll set <ll>
#define wl while
#define e "\n"
#define spc " "
#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define ins insert
#define F first
#define S second
#define all(a) a.begin(),a.end()

int main(){

#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif

int n;
cin >> n;
vector<int> a(n);
for (int i = 0; i < n; i++){
  cin >> a[i];
}
int k, l;
for (k = n - 2; k >= 0; k--){
  if(a[k]<a[k+1])
    break;
}
if(k<0){
  reverse(a.begin(), a.end());
}
else{
  for (l = n - 1; l >= 0; l--){
    if(a[l]<a[k]){
      break;
    }
    swap(a[l], a[k]);
    reverse(a.begin() + k + 1, a.end());
  }
}
for (int i = 0; i < n; i++){
  cout << a[i] << " ";
}

  return 0;
}