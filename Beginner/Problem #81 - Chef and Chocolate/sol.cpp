#include<math.h>
#include<stdio.h>
#define ull unsigned long long int 
using namespace std;

int main ( ) { 
	freopen("input.txt", "r", stdin);
	
	int t; scanf("%d", &t);
	while ( t-- ) {
		ull n, m;
		scanf("%llu %llu", &n, &m);
		
		if ( (n*m)%2==0 ) printf("Yes\n");
		else printf("No\n");
	}
}
