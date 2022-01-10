#include<stdio.h>

void sequential(int files[50]){
    int i,b,flag=0,len;
    char ch;
    printf("Enter the starting block: ");
    scanf("%d",&b);
    printf("Enter the length of file: ");
    scanf("%d",&len);
    for(i=b;i<(b+len);i++)
    {
        if(files[i]==1)
        {
            printf("This file cannot be allocated in this disk block\n");
            flag=1;
            break;
        }
    }
    if(flag==0){
        for(int j=b;j<(b+len);j++)
            files[j]=1;
        printf("File has been allocated in the disk block \n");
    }
    printf("Do You want to add more Files? (y/n):  ");
    scanf("%s",&ch);
    if(ch=='y')
        sequential(files);
}

int main(){
    int files[50];
    for(int i=0;i<50;i++)
        files[i]=0;
    printf("* Sequential File Allocation Method * \n\n");
    sequential(files);
    return 0;
}