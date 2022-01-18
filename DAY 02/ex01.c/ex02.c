#include <stdio.h>

int main(void) {
    short sh = 32767;
    int in = 2147483647;      // short  형의 최댓값으로 초기화 
    long ln =2147483647;      // 약 21 억의 값을 최댓값으로 담을 수 있다
    long long lln = 23124235423423;
     
     printf( "sh : %d \n ", sh );
     printf( "in : %d \n ", in );
     printf( "ln : %ld \n ", ln );    //long 형은 서식문자 %d
     printf( "lln : %lld \n ", lln );  // long long 형은 서식문자 %11d

     return 0 ;

} 