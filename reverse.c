/* Reversing a Integer with limits of signed int */
#include <stdio.h>
#include <limits.h>

int reverse(int x) {
    int rev = 0;
    int mod ;

    while(x != 0) {
        mod = x%10;
         x = x/10 ;
         if( rev > INT_MAX/10 || ( rev == INT_MAX/10 && mod >= INT_MAX%10 ))
             return 0;
         if ( rev < INT_MIN/10 ||( rev == INT_MIN/10 && mod<= INT_MIN%10 ))
             return 0;
          rev = rev *10 + mod;

    }
        return rev;

}



int main(void) {
    int x;
    printf( "Enter The Input : ");
    scanf( "%d",&x);    
    printf(" Output is : %d", reverse(x));
    return 0;
}

