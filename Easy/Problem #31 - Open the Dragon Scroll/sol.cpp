#include<math.h>
#include<stdio.h>
#include<algorithm>
using namespace std;

int count ( int x ) {
	if ( x==0 ) return 0;
	else if ( x%2==0 ) return count(x/2);
	else return 1 + count(x/2);
}

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int t; scanf("%d", &t);
	while ( t-- ) {
		int n, a, b;
		scanf("%d %d %d", &n, &a, &b);
		
		int arr[2][2];
		arr[0][0] = n-count(a); arr[0][1] = count(a);
		arr[1][0] = n-count(b); arr[1][1] = count(b);
		
		int one = min(arr[0][0], arr[1][1]);
		one += min(arr[1][0], arr[0][1]);
		
		int max = pow(2, n-1), ans=0;
		for ( int i=1; i<=one; ++i ) {
			ans += max;
			max /= 2;
		}
		
		printf("%d\n", ans);
	}
}
