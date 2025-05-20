#include<stdio.h>
int main(void){
    
    int no , m;

    
    printf("Enter number of elements : \n");
    scanf("%d", &no);
    
    int A[no];
    for(m=0; m<no; m++)
    {
        printf("enter the values :");
        scanf("%d", &A[m]);
        
    }
    
    int large = A[0];
    
    for(m=0; m<no; m++)
    {
        if(A[m] > large){
            large = A[m];
        }
    }
    
    printf("large number is : %d",large);
    
    return 0; 
    
    
}