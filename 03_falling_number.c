#include <stdio.h>

int main()
{
    int i, j;
    
    for (i = 1000, j = 0; i >= 1; i--, j++) {
        if (j % 5 == 0) {
            printf("\n");
        }
        printf("%d\t", i);
    }  
    return 0;
}


/* #include <iostream>
using namespace std;
int main(){
for(int a =1;a<=1000;a++){
if(a%5==0){
cout<<a<<"\";
}
else{cout<<a<<"\";}
}
return 0;
} */