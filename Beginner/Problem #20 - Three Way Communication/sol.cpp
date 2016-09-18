#include<math.h>
#include<stdio.h>
#include<iostream>
using namespace std;

float dist ( int x1, int y1, int x2, int y2 ) {
	return sqrt(pow((x2-x1),2)+pow((y2-y1), 2));
}

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int t; scanf("%d", &t);
	while ( t-- ) {
		int r; scanf("%d", &r);
		
		int x1, y1, x2, y2, x3, y3;
		scanf("%d %d", &x1, &y1);
		scanf("%d %d", &x2, &y2);
		scanf("%d %d", &x3, &y3);
		
		int c = 0;
		if ( dist(x1, y1, x2, y2) <= r ) ++c;
		if ( dist(x1, y1, x3, y3) <= r ) ++c;
		if ( dist(x2, y2, x3, y3) <= r ) ++c;
		
		if ( c > 1 ) printf("yes\n");
		else printf("no\n");
	}
}
