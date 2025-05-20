#include<stdio.h>
int main(void){
    int no , m;
    int even = 0;
    int odd=0;
    
    printf("Enter array size : \n");
    scanf("%d", &no);
    
    int A[no];
    
    for(m=0; m<no; m++){
        printf("Enter values : \n");
        scanf("%d", &A[m]);
    }
    
    for(m=0; m< no; m++){
        if(A[m] % 2 == 0){
            even = even +1;
        }
        else
        {
            odd = odd+1;
            
        }
        
        
    }
    
    printf("No of Even = %d \n ",even);
    printf("No of Odd = %d \n ",odd);


    return 0;
}