#include<cstdio>

using namespace std;

int main(){
  int ca=0;
  int a=1;
  int imp=1;
  int cimp=0;
  int n;
  scanf("%d", &n);

  for(int i=1; i<=n; i++) {
    if(!(i%2)) {
      if(ca == 2) {
	ca=0;
	a=!a;
      }	
      printf("%d ", a);
      ca++;
    } else {
      if(cimp == imp) {
	cimp =0;
	imp++;
      }
      printf("%d ", imp);
      cimp++;
    }
  }

  printf("\n");

  return 0;
}

