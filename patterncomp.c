#include<stdio.h>
int main(){
    int row,col;

    for(row=3; row>=1; row--){
        for(col=3; col>=1; col--) 
        { 
            if(col<=row) printf("%d",row);
            else  printf("%d",col);
        }
        
        for(col=2; col<=3; col++)
        {
            if((col<=row)) printf("%d",row);
            else printf("%d",col);
        }
        printf("\n");
    }
    
    for(row=1; row<=3-1; row++){
        for(col=3; col>=1; col--) { 
            if(col<=row) printf("%d",row+1);
            else  printf("%d",col);
        }
        
        for(col=2; col<=3; col++){
            if(col<=row) printf("%d",row+1);
            else printf("%d",col);
        }
        printf("\n");
    }
    return 0;
}