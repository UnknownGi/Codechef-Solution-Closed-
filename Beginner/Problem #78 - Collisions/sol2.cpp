#include<iostream>
using namespace std;

int main( ) {
    char a[10][10];
    
    int t; cin >> t;
    while ( t-- ) {
    	int n, m, c=0;
        cin >> n >> m;
        for( int i=0; i<n; i++ ) {
            for( int j=0; j<m; j++ ) {
                cin >> a[i][j];
                for( int k=0; k<i; k++ ) {
                    if(a[i][j]=='1' && a[k][j]=='1') c++;
                }
            }
        }
        
        cout << c << endl;
    }
}
 
