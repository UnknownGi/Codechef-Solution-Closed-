#include<stdio.h>
#define REP(i,a,b) for(int i=a; i<=b; ++i)
using namespace std;

int sum ( int a ) {
	int s=1;
	REP(i,2,a) s+=i;
	return s;	
}

int main ( ) { 
	freopen("input.txt", "r", stdin);
	
	int t; scanf("%d", &t);
	while ( t-- ) {
		int d, n;
		scanf("%d %d", &d, &n);
		
		REP(i,1,d) n=sum(n);
		printf("%d\n", n);
	}
}
