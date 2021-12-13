

#include <stdio.h>

struct matrix{
	int row;
	int col;
	int val;
};

int read(struct matrix m[]){
	int i,j,k=1,temp,count=0;
	printf("Enter the Matrix elements:\n");	
	for(i=0;i<m[0].row;i++){
		for(j=0; j<m[0].col;j++){
			scanf("%d", &temp);
			if(temp!=0){
				m[k].row=i;
				m[k].col=j;
				m[k++].val=temp;
				count+=1;
			}
		}
	}
	m[0].val=count;
	return count;
}

void printMatrix(struct matrix m[]){
	int i;
	printf("\n\n\nrow\tcol\tval\n");
	for(i=0;i<m[0].val+1;i++)
		printf("%d\t%d\t%d\n",m[i].row,m[i].col,m[i].val);
	printf("\n\n\n");
}

int main(){
	int n,col,row;
	printf("Enter the no of rows and columns in the matrix: ");
	scanf("%d%d",&row,&col);
	
	struct matrix m[100];
	m[0].row=row;
	m[0].col=col;
	n = read(m);
	printMatrix(m);
	printf("Sparsity = %f\n", (float)n/(col*row));
}

