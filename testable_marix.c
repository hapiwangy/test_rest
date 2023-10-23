#include<stdio.h>
#include<string.h>

int main(){
    // store the size of matrix
    int size;
    while(1){
        scanf("%d", &size);
        // decide if size = 0
        if(size){
            // input the matrix
            int matrix[size][size];
            for(int i=0;i<size;i++)
                for(int j=0;j<size;j++)
                    scanf("%d",&matrix[i][j]);
            //end of the input
            int col=-1,row=-1;
            // loop through the matrix's col
            int count = 0;
            int wrcol = 0, wrrow = 0;
            while(count < size){
                int test = 0;
                for(int j=0;j<size;j++){
                    test += matrix[count][j];
                }
                // check the test bit
                if (test % 2 == 1){
                    col = count;
                    wrcol += 1;
                }

                count += 1;
            }
            // loop through the matrix's row
            count = 0;
            while(count < size){
                int test = 0;
                for(int j=0;j<size;j++){
                    test += matrix[j][count];
                }
                // check the test bit
                if (test % 2 == 1){
                    row = count;
                    wrrow += 1;
                }
                count += 1;
            }
            // check the matrix state
            // state 1 everything is alright
            if(col == -1 && row == -1) {printf("OK\n");}
            else if(wrcol != 1 || wrrow !=1) {printf("Corrupt\n");}
            else if((col == -1 && row != -1) || (row == -1 && col != -1)) {printf("Corrupt\n");}
            else {printf("Change bit (%d,%d)\n",(col+1),(row+1));}
        }
        else {
            // end of the input
            break;
        }
    }
    return 0;
}
