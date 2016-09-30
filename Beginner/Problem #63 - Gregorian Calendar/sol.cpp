#include<stdio.h>
#include<iostream>
using namespace std;

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int t; scanf("%d", &t);
	string d[7] = { "sunday", "monday", "tuesday", "wednesday", "thursday", "friday", "saturday" };
	while ( t-- ) {
		int y; scanf("%d", &y);
		
		int diff=y-1900;
		for ( int i=1904; i<y; ++i ) {
			if ( i%400==0 || (i%100 && i%4 == 0) ) diff++;
		}
		
		diff = (diff+1)%7;
		cout << d[diff] << endl;
		
	}
}
