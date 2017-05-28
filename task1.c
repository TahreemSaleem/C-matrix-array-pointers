#include<stdio.h>

int main(){
    int arr[10][10]={0}, sum_row[10]={0}, sum_coloumn[10]={0};
    int m,n,r,c,a=0,hold;

    printf("Enter the numbers of Rows: ");
    scanf("%d", &m);
    printf("Enter the numbers of Coloumns: ");
    scanf("%d", &n);

    if(m==n){
        printf("Matrix is Square\nEnter the elements of array\n");
        for(r=1;r<=m;r++){
            for(c=1;c<=n;c++){
                printf("ro %d and column %d= ", r,c);
                scanf("%d", &arr[r][c]);
            }
        }
        for(r=1;r<=m;r++){
            for(c=1;c<=n;c++){
                printf("%d\t", arr[r][c]);
            }
            printf("\n");
        }

        for(r=1;r<=m;r++)
            for(c=1;c<=n;c++){
                sum_row[r]=sum_row[r]+arr[
r][c];
            }
        for(r=1;r<=m;r++)
            for(c=1;c<=n;c++){
                sum_coloumn[r]=sum_coloumn[r]+matrix[c][r];
            }
        for(r=1;r<=m;r++)
        a=a+arr[r][c];
        printf("\n");
        for(r=1;r<=m;r++){
        printf("Sum of Row %d is= %d\n",i,sum_row[r]);}
        for(r=1;r<=m;r++){
        printf("Sum of Coloumn %d is= %d\n",r,sum_coloumn[r]);}
        printf("\nSum of diagnol elements is= %d\n", a);

        for(r=1;r<=m;r++){
            for(c=1;c<=n;c++){
                if(r<c){
                    hold=arr[r][c];
                   arr[r][c]=arr[c][r];
                    arr[c][r]=hold;
                }
            }
        }
        printf("\nThe new Matrix is:\n");
        for(r=1;r<=m;r++){
            for(c=1;c<=n;c++){
                printf("%d\t", arr[r][c]);
            }
            printf("\n");
    }
    }
    else
        printf("Matrix is not square!");

    return 0;
}
