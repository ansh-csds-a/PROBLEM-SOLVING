#include<stdio.h>

int main()
{
    int n=4;  
    int i,j;  
    int space=0;  
    for(i=0;i<n;i++){// this loop is used to print lines  
        for(j=1;j<=space;j++){// this loop is used to print space in a line  
            cout<<" ";
        }  
        for(j=1;j<=n;j++){// this loop is used to print numbers in a line  
            if(j<=(n-i))  
            cout<<j;  
            else  
            cout<<"*";  
        }  
        j--;  
        while(j>0){// this loop is used to print numbers in a line  
            if(j>n-i) 
            cout<<"*";  
            else  
            cout<<j;  
            j--;  
        }  
        if((n-i)>9)// this loop is used to increment space  
        space=space+1;
        cout<<endl;  
    }  
    return 0;
}