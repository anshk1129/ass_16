#include<stdio.h>
int main(){
int a[3][3]={
    10,20,30,
    3,10,20,
    0,0,0
};
int count_zero=0;
int count_nzero=0;
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        if(a[i][j]==0){
            count_zero+=1;
        }
        else{
            count_nzero+=1;
        }
    }
}
if(count_zero>count_nzero){
    printf("Given matrix is Sparse Matrix");

}
else{
     printf("Given matrix is not Sparse Matrix");
}

return 0;
}