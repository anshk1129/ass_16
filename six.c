#include<stdio.h>
int main(){
int a[3][3]={
    10,20,30,
    40,50,60,
    70,8,90
};
int sum_row=0,sum_column=0;
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
    sum_row=sum_row+a[i][j];
    sum_column=sum_column+a[j][i];
    }
}
printf("The sum of row is %d ",sum_row);
printf("\nThe sum of column is %d ",sum_column);

return 0;
}