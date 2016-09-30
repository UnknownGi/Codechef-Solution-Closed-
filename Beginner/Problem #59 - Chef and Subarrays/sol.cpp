#include<stdio.h>
#include<utility>
#define REP(i,a,b) for(int i=a; i<=b; ++i)
#define REPn(i,a,b) for(int i=a; i<b; ++i)
using namespace std;

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int t; scanf("%d", &t);
	while ( t-- ) {
		int n; scanf("%d", &n);
		
		int a[n];
		pair<int, int> b[n];
		
		REPn(i,0,n) scanf("%d", &a[i]);
		
		int c=0;
		REPn(i,1,n) {
			b[i-1].first = a[i-1];
			b[i-1].second = a[i-1];
			
			int j=i;
			while ( j<n ) {
				b[j].first = b[j-1].first*a[j];
				b[j].second = b[j-1].second+a[j];
				
				if ( b[j].first==b[j].second ) ++c;
				++j;
			}
		}
		
		printf("%d\n", (c+n));
	}
}
