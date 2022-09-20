#include<stdio.h>
int main(){
int arr[3][3]={10,20,30,40,50,60,70,80,90};
int arr1[3][3]={10,20,30,40,50,60,70,80,90};
int c[3][3];
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
       c[i][j]=arr[i][j]+arr1[i][j];
    }
}
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        printf("%d ",c[i][j]);
    }
    printf("\n");
}
return 0;
}