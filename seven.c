#include<stdio.h>
int main(){
int a[4][4]={
    10,1,1,20,
    20,30,1,12,
    2,3,1,2,
    1,2,1,1
};
for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
        if(i<j){
          a[i][j]=0;
        }
    }
}
for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
        printf("%3d ",a[i][j]);
    }
    printf("\n");
}
return 0;
}