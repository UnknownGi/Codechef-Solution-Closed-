#include<stdio.h>
#define REPN(i,a,b) for(int i=a; i<b; ++i) 
using namespace std;

void check ( int *a, int index, int N, int K ) {
	++a[index+1];
	a[index] = 0;
	if ( index+1 < K && a[index+1]>N ) check(a, index+1, N, K);
}

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int A, N, K;
	scanf("%d %d %d", &A, &N, &K);
	
	int a[K];
	REPN(i,0,K) a[i]=0;
	
	REPN(i,0,A) {
		if ( A-i>=N+1 ) {
			a[0]+=(N+1);
			i+=N;
		}
		else {
			a[0]+=(A-i);
			i+=(A-i);
		}
		
		if ( a[0]>N ) check(a, 0, N, K);
	}
	
	REPN(i,0,K) printf("%d ", a[i]); printf("\n");
}
