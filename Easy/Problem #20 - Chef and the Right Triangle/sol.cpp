#include<math.h>
#include<stdio.h>
using namespace std;

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int count=0, t; scanf("%d", &t);
	while ( t-- ) {
		float x1, x2, x3, y1, y2, y3;
		scanf("%f %f %f %f %f %f", &x1, &y1, &x2, &y2, &x3, &y3);
		
		float d1 = pow((x2-x1),2) + pow((y2-y1), 2);
		float d2 = pow((x3-x1),2) + pow((y3-y1), 2);
		float d3 = pow((x3-x2),2) + pow((y3-y2), 2); 
		
		if ( d1>=d2 && d1>=d3 && d1==(d2+d3) ) ++count;
		else if ( d2>=d1 && d2>=d3 && d2==(d1+d3) ) ++count;
		else if ( d3>=d1 && d3>=d2 && d3==(d1+d2) ) ++count;
		
	}
	
	printf("%d\n", count);
}
