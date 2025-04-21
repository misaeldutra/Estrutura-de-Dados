#include <stdio.h>
#include <stdlib.h>

int main(){
    int matriz[2][2] = {{1, 2},
                        {3, 4}};

    int mtransposta[2][2];

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            mtransposta[j][i] = matriz[i][j];
        }
    }

    printf("\nTransposta: \n");
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("%d ", mtransposta[i][j]);
        }
        printf("\n");
    }




    return 0;
}