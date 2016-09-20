#include<stdio.h>
#include<iostream>
using namespace std;

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int t; scanf("%d", &t); 
	
	while ( t-- ) {
		char ch; cin >> ch;
		
		if ( ch == 'B' or ch == 'b' ) printf("BattleShip\n");
		else if ( ch == 'C' or ch == 'c' ) printf("Cruiser\n");
		else if ( ch == 'D' or ch == 'd' ) printf("Destroyer\n");
		else if ( ch == 'F' or ch == 'f' ) printf("Frigate\n");
	}
}
