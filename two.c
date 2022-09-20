#include<stdio.h>
int main(){
int a[3][3]={
    1,2,3,
    4,5,6,
    7,8,9
};
int b[3][3]={
    1,2,3,
    4,5,6,
    7,8,9
};
int c[3][3],sum;
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        sum=0;
     for(int k=0;k<=2;k++){
     sum=sum+(a[i][k]*b[k][j]);
     }
     c[i][j]=sum;

    }
}
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        printf("%4d ",c[i][j]);
    }
    printf("\n");
}
return 0;
}