#include<stdio.h>
int main(){
int a[4][4]={
    10,1,1,20,
    20,30,1,12,
    2,3,1,2,
    1,2,1,1
};
int max=0,sum_row,index=0;
for(int i=0;i<4;i++){
    sum_row=0;
    for(int j=0;j<4;j++){
        if(a[i][j]==1)
     sum_row=sum_row+a[i][j];
    }
    if(max<sum_row){
        max=sum_row;
        index=i;
    }
}
printf("%d is the row with highest number of one  %d ",index,max);
return 0;
}