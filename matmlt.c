#include<stdio.h>
#include<string.h>

int main(){
    // define two matrix
    int row_a, col_a;
    int row_b, col_b;
    while(scanf("%d", &col_a) != EOF){
        scanf("%d",&row_a);
        // define matrixa
        int matrixa[col_a][row_a];
        for(int i=0;i<col_a;i++){
            for(int j=0;j<row_a;j++){
                scanf("%d",&matrixa[i][j]);
            }
        }
        scanf("%d",&col_b);
        scanf("%d",&row_b);
        int matrixb[col_b][row_b];
        for(int i=0;i<col_b;i++){
            for(int j=0;j<row_b;j++){
                scanf("%d",&matrixb[i][j]);
            }
        }
        if(row_a != col_b){
            printf("Invalid calculation!!\n");
            continue;
        }
        else{
            // combine matrixc
            int matrixc[col_a][row_b];
            for(int i=0;i<col_a;i++){
                for(int j=0;j<row_b;j++)
                    matrixc[i][j]=0;
            }
            for(int i=0;i<col_a;i++){
                for(int k=0;k<row_b;k++){
                    for(int j=0;j<row_a;j++)
                        matrixc[i][k] += matrixa[i][j] * matrixb[j][k];
                }
            }
            for(int i=0;i<col_a;i++){
                for(int j=0;j<row_b;j++){
                    printf("%d",matrixc[i][j]);
                    if(j != row_b-1)
                        printf(" ");
                }
                printf("\n");
            }
        }
    }
    return 0;
}
