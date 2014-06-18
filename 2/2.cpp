#define INF numeric_limits<int>::max()
#define popcount __builtin_popcount
#define gcd __gcd
//#define NDEBUG

#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<string> vs;
typedef vector<char> vc;
typedef pair<int,int> ii;
typedef pair<string,string> ss;
typedef vector<ii> vii;
typedef double db;
typedef vector<db> vdb;
typedef pair<db, db> dbdb;

int main(){
  int n;
  scanf("%d", &n);
  vector<vector<int> > M(n, vi(n));
  
  for(int i=0; i<n; i++) {
    for(int j=0; j<n; j++) {
      scanf("%d", &M[i][j]);
    }
  }
  
  n--;
  int a = M[0][0], b = M[0][n], c = M[n][n], d = M[n][0];
  for(int i=0; i<n; i++) {
    M[0][i] = M[0][i+1];
    M[i][n] = M[i+1][n];
    M[n][n-i] = M[n][n-i-1];
    M[n-i][0] = M[n-i-1][0];
  }

  M[1][0] = a;
  M[0][n-1] = b;
  M[n-1][n] = c;
  M[n][1] = d;
  
  n++;
  printf("Matriz rotada...\n");
  for(int i=0; i<n; i++) {
    for(int j=0; j<n; j++) {
      printf("%d ", M[i][j]);
      if(M[i][j] < 10)
	printf(" ");
    }
    printf("\n");
  }

  return 0;
}

