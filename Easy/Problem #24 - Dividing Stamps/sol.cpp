#include<stdio.h>
#define REPN(i,a,b) for(int i=a; i<b; ++i)
#define llu unsigned long long int
using namespace std;

int main ( ) {
	freopen("input2.txt", "r", stdin);
	
	int n; scanf("%d", &n);
	
	llu tmp, total=0, red=0;
	REPN(i,0,n) {
		scanf("%llu", &tmp);
		total += (i+1);
		red += tmp;
	}
	
	red==total? printf("YES\n") : printf("NO\n");
}
