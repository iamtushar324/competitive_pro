#include <bits/stdc++.h>

using namespace std;

#define all(x) (x).begin(), (x).end()
#define MOD 1000000007
#define int long long int
#define endl "\n"
#define printArr(arr) for(auto e :arr) cout << e << " "; cout << endl;
#define inArr(arr, n) for(int i = 0 ; i < n ; i++) cin >> arr[i];

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;

#ifndef ONLINE_JUDGE
#define debug(x) cout << #x <<" "; _print(x); cout << endl;
#else
#define debug(x)
#endif

void _print(ll t) {cout << t;}
void _print(string t) {cout << t;}
void _print(char t) {cout << t;}
void _print(lld t) {cout << t;}
void _print(double t) {cout << t;}
void _print(ull t) {cout << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cout << "{"; _print(p.ff); cout << ","; _print(p.ss); cout << "}";}
template <class T> void _print(vector <T> v) {cout << "[ "; for (T i : v) {_print(i); cout << " ";} cout << "]";}
template <class T> void _print(set <T> v) {cout << "[ "; for (T i : v) {_print(i); cout << " ";} cout << "]";}
template <class T> void _print(multiset <T> v) {cout << "[ "; for (T i : v) {_print(i); cout << " ";} cout << "]";}
template <class T, class V> void _print(map <T, V> v) {cout << "[ "; for (auto i : v) {_print(i); cout << " ";} cout << "]";}


int solve();

int32_t main() {

  #ifndef ONLINE_JUDGE
    freopen("in1.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif

  clock_t z = clock();

  int testCases;
  // testCases = 1;
  scanf("%lld", &testCases);

  for (int i = 0; i < testCases; i++) {
    solve();
  }

  #ifndef ONLINE_JUDGE
   cerr << std::fixed;
    cerr << std::setprecision(10);
    cerr << "Run Time : " << ((double)(clock() - z ) / CLOCKS_PER_SEC)<<endl; 
  #endif

  return 0;
}

int solve() {

  //code here

  return 0;
}
