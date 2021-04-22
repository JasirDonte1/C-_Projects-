
/*
 2D array
 */

#include <stdlib.h>
#include <stdio.h>
const int row = 5;
const int col = 5;
int integerArray [row][col];

void readInts(int[row][col]);


int main(int argc, const char * argv[]) {
    
    //populate array
    for(int x = 0; x<row; x++){
        for(int y = 0; y<col; y++){
            integerArray[x][y] = rand()%100 + 7;
        }
    }
    readInts(integerArray);
    
    
    
    return 0;
}

void readInts(int array[row][col]){
    int sum = 0;
    for(int x = 0; x<row; x++){
        for(int y = 0; y<col; y++){
            sum = sum + array[x][y];
            if (y==4){
                printf("Row %d sum: %d\n", x, sum);

            }
            if (x==4){
                sum = 0;
            }
        }
    }
    
    
}




