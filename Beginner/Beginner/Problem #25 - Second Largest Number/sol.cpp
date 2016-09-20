#include<stdio.h>
#include<stdlib.h>
using namespace std;

int compare (const void* a, const void* b) { return *(int*)a-*(int*)b; }

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int t; scanf("%d", &t);
	while ( t-- ) {
		int a[3];
		for ( int i=0; i<3; ++i ) scanf("%d", &a[i]);
		qsort(a, 3, sizeof(int), compare);
		printf("%d\n", a[1]);
	}
}
