#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define SIZE 3

int sumall(int** a,int m, int n){
    int sum = 0;
    for(int i=0;i<m;i++){
        for ( int j; j<n; j++ ) {
            sum += a[i][j];
        }
    }
    return sum;

}

void main(void){
    int a[3][2] = {{1,100},{2,3},{0,0}}; //
    
    printf("0x%x  0x%ls %d \n",a,a[0],a[0][0]);
   // int** b = (*a);   //a  => (int*)[2]
/*  
    int sum;
    sum = sumall(b,3,2);    //??;
    printf("sum = %d \n",sum);
*/
}

