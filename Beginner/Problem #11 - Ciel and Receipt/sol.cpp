#include<stdio.h>
using namespace std;

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int t; scanf("%d", &t);
	while ( t-- ) { 
		int n; scanf("%d", &n);
		
		int d = 0;
		while ( n >= 2048 ) { ++d, n-=2048; }
		while ( n >= 1024 ) { ++d, n-=1024; }
		while ( n >= 512 ) { ++d, n-=512; }
		while ( n >= 256 ) { ++d, n-=256; }
		while ( n >= 128 ) { ++d, n-=128; }
		while ( n >= 64 ) { ++d, n-=64; }
		while ( n >= 32 ) { ++d, n-=32; }
		while ( n >= 16 ) { ++d, n-=16; }
		while ( n >= 8 ) { ++d, n-=8; }
		while ( n >= 4 ) { ++d, n-=4; }
		while ( n >= 2 ) { ++d, n-=2; }
		while ( n >= 1 ) { ++d, n-=1; }
		
		printf("%d\n", d);
	}
}
