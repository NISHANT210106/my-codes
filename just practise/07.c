#include<stdio.h>
int ser(int);
int ser(int x){
    int n;
    if (x==0)
    {
        return 0;
    }
    else if (x==1)
    {
         return 1;
    }
    else{
        
      return ser(x-1)+ser(x-2);
    }
    
    
}
int main(){
    int fib;
    for (int i = 0;i<12; i++)
    {
        fib=ser(i);
        printf("%d\n",fib);
        
    }
    
    return 0;
}