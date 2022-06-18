#include<iostream>
using namespace std;

int main()
{
    int a;
    int i;
    int div;

    while( cin >> a ){
        div = 0;
	i = 1;
    while( i <= a ){
        if( a%i == 0 ){
				
        div = div +1;    }  /****divisible+1***/
      
            i = i+1;  }
        	
	    if( div == 2 ) {               /*****2-prime******/
            cout << "Yes" << endl; }
        else{
        
            cout << "No" << endl;}
        
    }

    return 0;
}
