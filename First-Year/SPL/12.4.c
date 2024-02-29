/*Problem 12.4: Write a function using pointers to add two matrices and to return
the resultant matrix to the calling function.*/

#include<stdio.h> //start
#include<stdlib.h>

void matrix(int *mat1, int *mat2, int **result, int m,int n);//define a function

int main(){
    printf("Enter m and n for m x n Matrix: ");
    int n,m;
    scanf("%d%d",&m,&n); // scan m,n in main function for row and column

    int a[m][n],b[m][n];// scan value of mxn matrices a and b
    printf("Enter matrix a[%d][%d]: \n",m,n);
    for(int i=0; i<m; i++){
        for(int j=0 ; j<n; j++){
            scanf("%d",&a[i][j]);
        }
    }

    printf("\nEnter Matrix b[%d][%d]: \n",m,n);
    for(int i=0; i<m; i++){
        for(int j=0 ; j<n; j++){
            scanf("%d",&b[i][j]);
        }
    }

    int **result;// define a double pointer to store address of summed value

    result = (int**)malloc(m*sizeof(int*));// define array size of that pinter in row wise...

    for (int i=0;i<m;i++)
        result[i] = (int*)malloc(n*sizeof(int)); // expand each row size to colum size of matrix

    matrix((int*)a, (int*)b, result, m, n);// call the user define function.. by passing pointer argument

// down...

    for (int i=0;i<m;i++)
        free(result[i]); // free all the un used memory in pointer array
    free(result);
    return 0;// end
}

void matrix(int *mat1, int *mat2, int **result, int m,int n){//calculate new array by summig a and b matrices
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            result[i][j]=mat1[i*n+j]+mat2[i*n+j];
        }
    }
    for(int i=0; i<m; i++){ //print the value of new matrix
        for(int j=0; j<n; j++){
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
}
