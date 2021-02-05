#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define N 3  
#define M 3  

void insertionSort(int a[N][M], int row, int col)
{
	int size=row*col;
	for(int i=1;i<size;i++)
	{
		int key=a[i/col][i%col];
		int j=i-1;
		while(j>=0 && a[j/col][j%col]>key)
		{
			a[(j+1)/col][(j+1)%col]=a[j/col][j%col];
			j=j-1;
		}
		a[(j+1)/col][(j+1)%col] = key;
	}
}




void printMat(int mat[N][M], int row, int col) 
{ 
    for (int i = 0; i < row; i++)  
    { 
        for (int j = 0; j < col; j++) 
        { 
            cout << mat[i][j] << " "; 
        } 
        cout << endl; 
    } 
} 

int main()
{
	int mat[N][M] = { { 6, 2, 14 },  
                        { 11, 3, 7 }, 
                        { 2, 9, 5 } }; 
        int row =N;
        int col=M;
        insertionSort(mat,row,col);
        printMat(mat, row, col); 
}