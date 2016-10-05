#include<stdio.h>
#define REPN(i,a,b) for(int i=a; i<b; ++i)
using namespace std;

int main ( ) { 
	freopen("input.txt", "r", stdin);
	
	int n, t, k;
	scanf("%d %d", &n, &k);
	
	unsigned int min=-1;
	int max=0;
	
	REPN(i,0,n) {
		scanf("%d", &t);
		if ( t<min ) min=t;
		if ( t>max ) max=t;
	}
	
	REPN(i,0,k) {
		scanf("%d", &t);
		if ( t >= min && t<= max ) printf("Yes\n");
		else printf("No\n");
	}
}
