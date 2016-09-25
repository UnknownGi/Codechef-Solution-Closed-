#include<iostream>
using namespace std;
 
int ifPalindrome ( int x ) {
    int n = 0, z = 1;
    while ( x/z > 0 ){
        n++;
        z *= 10;
    }
    
    int a[n];
    z /= 10;
    for( int i=0; i<n; ++i ) {
        a[i] = x/z;
        x %= z;
        z /= 10;  
    }
    
    bool y = true;
    for( int i=0; i<n/2 && y; ++i ) {
        if( a[i] != a[n-1-i] ) y = false;
    }
    
    return y;
}
 
int main( ) {
    int t; cin >> t;

    for( int f=1; f<=t; f++ ) {
        int a, b, sum = 0;
        cin >> a >> b;
        
        for( int i=a; i<=b; i++ ) {
            bool x = ifPalindrome(i);
            if( x == true ) sum +=i ;
        }
        
        cout << sum << endl;
    }
} 
