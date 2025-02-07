#include <bits/stdc++.h>
#include <cmath>
#include <cstring>
#define REP(i,n) for (int i=0;i<(n);i++)
int main(){
  char s[101];
  scanf("%[^\n]s",s);
  int n=strlen(s);
  int sum=0;
  REP(i,n){
  sum+=s[i];
  }
  n=sum/n;
  char f=char(n);
  printf("%c\n",f);
  return 0;
}
