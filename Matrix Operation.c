#include <stdio.h>
#define M 2
#define N 2
#define P 3
int main(void) {
  void printMatrix(int row,int col,int Mat[row][col]);
  void readMatrix(int row,int col,int Mat[row][col]);
   
  int A[M][N],B[N][P],C[M][P]={0};
  
  printf("Enter Matrix A size %dx%d:\n",M,N);
  readMatrix(M,N,A);
  
  printf("Enter Matrix B size %dx%d:\n",N,P);
  readMatrix(N,P,B);

  for(int i=0;i<M;i++)
    for(int j=0;j<P;j++)
      for(int k=0;k<N;k++)
         C[i][j] += A[i][k]*B[k][j]; //ith row from A * jth column of B
  
  printf("A=\n");
  printMatrix(M, N, A);

  printf("B=\n");
  printMatrix(N, P, B);

  printf("The multiplication of two matrices is:\n");
  printMatrix(M,P,C);
  return 0;
}
  
void printMatrix(int row,int col,int Mat[row][col]){
   for(int i=0;i<row;i++)
   {
     for(int j=0;j<col;j++)
       printf("%5d",Mat[i][j]);
     printf("\n");
   }
}
  
void readMatrix(int row,int col,int Mat[row][col]){
  for(int i=0;i<row;i++)
  for(int j=0;j<col;j++){
    printf("[%d][%d] = ",i,j);
    scanf("%d",&Mat[i][j]);
  }

}