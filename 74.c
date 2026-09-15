//Find the transpose of a matrix.
#include <stdio.h>

int main()
{
    int i , j , mat1[3][3], trans[3][3];
    printf("Enter the elements of matrix 1 : ");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&mat1[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            trans[j][i] = mat1[i][j] ;
        }
    }
    printf("\nTranspose of a matrix :\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d",trans[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}