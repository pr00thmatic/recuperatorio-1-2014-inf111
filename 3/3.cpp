#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

vector<int> V;

void recorrer(int i, int tamano) {
  for(int r=tamano-1; r>=i; r--) {
    V[r+1] = V[r];
  }
}

void imprimirVector(int tamano) {
  for(int i=0; i<tamano; i++) { 
    printf("%d ", V[i]);
  }
  printf("\n");
}

int main(){
  int n, x;
  scanf("%d", &n);
  V.assign(n*2, 0);

  for(int i=0; i<n; i++) {
    scanf("%d", &V[i]);
  }

  scanf("%d", &x);
  for(int i=n-1; i>=0; i--) {
    if((V[i]%2)!=0) {
      recorrer(i, n);
      V[i+1] = x;
      n++;
    }
  }

  imprimirVector(n);
  
  return 0;
}

