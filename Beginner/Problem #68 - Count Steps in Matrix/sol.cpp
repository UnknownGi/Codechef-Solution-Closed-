#include<stdio.h>
#include<utility>
#define REP(i,a,b) for(int i=a;i<=b;++i)
#define REPN(i,a,b) for(int i=a;i<b;++i)
#define ABS(a)  (a>=0)? (a) : -(a);
#define mp make_pair
using namespace std;

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int t; scanf("%d", &t);
	while ( t-- ) {
		int x, n; scanf("%d", &n);
		
		pair<int, int> arr[n*n];
		REPN(i,0,n) {
			REPN(j,0,n) {
				scanf("%d", &x);
				arr[x-1] = mp(i, j);	
			}
		}
		
		int step=0;
		pair<int, int> current = arr[0];
		REPN(i,0,(n*n)) {
			int x_dist = ABS(current.first-arr[i].first);
			int y_dist = ABS(current.second-arr[i].second);
			
			current.first = arr[i].first;
			current.second = arr[i].second;
			
			step += (x_dist + y_dist);
		}
		
		printf("%d\n", step);
	}
}
