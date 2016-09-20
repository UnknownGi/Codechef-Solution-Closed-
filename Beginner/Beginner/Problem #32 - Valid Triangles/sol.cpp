#include<stdio.h>
using namespace std;

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int t; scanf("%d", &t);
	while ( t-- ) {
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);
		
		bool d = true;
		if ( a==0 || b==0 || c==0 ) d = false;
		else if ( a==180 || b==180 || c==180 ) d = false;
		
		if ( d && a+b+c==180 ) printf("YES\n");
		else printf("NO\n");
	}
}
