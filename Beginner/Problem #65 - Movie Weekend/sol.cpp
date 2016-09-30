#include<stdio.h>
using namespace std;

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int t; scanf("%d", &t);
	while ( t-- ) {
		int n; scanf("%d", &n);
		
		int l[n], r[n], res[n], max=0, rin=0, in=0;
		for ( int i=0; i<n; ++i ) scanf("%d", &l[i]);
		for ( int i=0; i<n; ++i ) {
			scanf("%d", &r[i]);
			res[i] = l[i]*r[i];
			
			if ( res[i] > max ) {
				max = res[i];
				rin = r[i];
				in = i;
			} else if ( res[i] == max && r[i] > rin ) {
				rin = r[i];
				in = i;
			}
		}
		
		printf("%d\n", (in+1));
	}
}
