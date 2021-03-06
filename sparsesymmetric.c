#include <stdio.h>

struct matrix{
	int row;
	int col;
	int val;
};

void read(struct matrix m[]){
       int n,col,row;
	printf("Enter the no of rows and columns in the matrix: ");
	scanf("%d%d",&row,&col);
	m[0].row=row;
	m[0].col=col;
	
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
	
}

void printMatrix(struct matrix m[]){
	int i;
	printf("\n\n\nrow\tcol\tval\n");
	for(i=0;i<m[0].val+1;i++)
		printf("%d\t%d\t%d\n",m[i].row,m[i].col,m[i].val);
	printf("\n\n\n");
}

void transpose(struct matrix m[],struct matrix res[])
{ int i,j,k=1;
 res[0].row=m[0].col;
 res[0].col=m[0].row;
 res[0].val=m[0].val;
 for(i=1;i<m[0].col+1;i++)
 for(j=1;j<m[0].val+1;j++)
 {
 if (m[j].col == i-1)
            {
                res[k].row = m[j].col;
                res[k].col = m[j].row;
                res[k].val= m[j].val;
                k++;
            }
           }
          }  
  int symmetry(struct matrix m[], struct matrix res[])
  { 
  int flag =1,i;
  if(m[0].val==res[0].val){
     for(i=1;i<res[0].val+1;i++){
     
          if(m[i].row!=res[i].row||m[i].col!=res[i].col||m[i].val!=res[i].val)
          { flag=0;
          break;
          }
          }
}
else
flag=0;
return flag;
}
          
            
int main(){
	
	
	struct matrix m[100],res[100];
	
	read(m);
	printMatrix(m);
	transpose(m,res);
	printMatrix(res);
	if (symmetry(m,res))
	printf("symmetric\n");
	else
	printf("not symmetric\n");
	
}

