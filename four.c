#include<stdio.h>
int main(){
int a[3][3]={
    10,20,30,
    40,50,60,
    70,80,90};
    int sum=0,n=3;

for (int i = 0; i < n; i++)
    {
        for(int j=0;j<n;j++){
         if(i==j){
            sum=sum+a[i][j];
         }
        }
        }
    printf("Sum is %d",sum);
return 0;
}