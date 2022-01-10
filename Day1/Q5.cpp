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

void solve(vector<int> &arr) {
  int low = 0;
  int high = arr.size() - 1;
  int mid = 0;

  while(mid<=high){
    switch(arr[mid]){
      case 0:
        swap(arr[low++], arr[mid++]);
        break;
      case 1:
        mid++;
        break;
      case 2:
        swap(arr[mid], arr[high--]);
        break;
    }
  }
  return;
}

int main(){

#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif

int n;
cin >> n;
vector<int> arr(n);
for (int i = 0; i < n; i++){
  cin >> arr[i];
}
solve(arr);
for (int i = 0; i < arr.size(); i++){
  cout << arr[i]<<" ";
}
return 0;
}