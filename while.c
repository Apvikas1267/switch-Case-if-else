#include <stdio.h>
int main(){
    int a,b,c;
    int ch;
    int valid=1;
    printf("Enter the values of two number:\n");
    scanf("%d %d",&a,&b);
    printf("\n \n ");
    printf("\n 1.ADD \n 2.SUBTARCT \n 3.MULTIPLY\n 4.DIVISION\n 5.MODULO\n");
    printf("Enter your options(1-5):\n");
    scanf("%d",&ch);
    switch(ch){
        case 1: c=a+b;break;
        case 2 :c=a-b;break;
        case 3 :c=a*b;break;
        case 4 : if(b==0){
                printf("Zero division ERROR!!!");
                        valid=0;
                    }
                    else{
                        c=a/b;
                    }
                    break;
        case 5 :c=a%b;
                break;
        default:
        printf("Invalid choice please enter correct choice!!!");
        valid=0;
    }
    if (valid){

        printf("The result is %d",c);
    }
        
return 0;
}