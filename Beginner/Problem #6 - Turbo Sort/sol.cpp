#include<stdio.h>
#include<stdlib.h>
using namespace std;

int asc (const void* a, const void* b) { return *(int*)a-*(int*)b; }

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int t; scanf("%d", &t);
	
	int A[t];
	for ( int i=0; i<t; ++i ) scanf("%d", &A[i]);
	
	qsort(A, t, sizeof(int), asc);
	for ( int i=0; i<t; ++i ) printf("%d\n", A[i]);
}
