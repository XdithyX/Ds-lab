#include <stdio.h>

struct matrix{
	int row;
	int col;
	int val;
};

void read(struct matrix m[]){
        int col,row;
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

  void add(struct matrix m1[],struct matrix m2[], struct matrix res[])
{
 int i=1,j=1,k=1;
 if(m1[0].row!=m2[0].row||m1[0].col!=m2[0].col)
 {
  printf("The matrix cannot be added\n");
  return;
 } 
 
 res[0].row=m1[0].row;
 res[0].col=m1[0].col;
 
  while(i<m1[0].val+1&&j<m2[0].val+1){
        if(m1[i].row==m2[j].row&&m1[i].col==m2[j].col){
            res[k].row=m1[i].row;
            res[k].col=m1[i].col;
            res[k].val=m1[i].val+m2[j].val;
            i++;
            j++;
                       
        }
        else if(m1[i].row==m2[j].row){
            res[k].row=m1[i].row;
            if(m1[i].col<m2[j].col){
                res[k].col=m1[i].col;
                res[k].val=m1[i].val;
                i++;
            }
            else{
                res[k].col=m2[j].col;
                res[k].val=m2[j].val;
                j++;
            }          
        }
        else 
        {
        if(m1[i].row<m2[i].row)
        {
         res[k].row=m1[i].row;
         res[k].col=m1[i].col;
         res[k].val=m1[i].val;
         i++;
        } 
         else
         {
          res[k].row=m2[j].row;
         res[k].col=m2[j].col;
         res[k].val=m2[j].val;
         j++;
        }
 
     
        
    }
     k++;
    }
    
    
   
   
       while (i < m1[0].val+1) 
    {
        res[k].row = m1[i].row;
        res[k].col = m1[i].col;
        res[k].val = m1[i].val;
        k++;
        i++;
    }
    while (j < m2[0].val+1) 
    {
        res[k].row = m2[j].row;
        res[k].col = m2[j].col;
        res[k].val = m2[j].val;
        k++;
        j++;
    }
    res[0].val=k-1;
    
}

int main(){
	
	struct matrix m1[100],m2[100],res[100];
	
	read(m1);
	printMatrix(m1);
	read(m2);
	printMatrix(m2);
	add(m1,m2,res);
	printMatrix(res);
}

