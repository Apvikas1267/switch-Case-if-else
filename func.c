/*#include <stdio.h>
int add();
int add(){
    int a,b,c=0;
    printf("Enter values:\n");
    scanf("%d %d",&a,&b);
    c=a+b;
    printf("SUM=%d",c);
    return 0;
}
int main(){
    add();
    return 0;
}*/
/*#include <stdio.h>
int add();
int add(){
    int a,b,c=0;
    printf("Enter values:\n");
    scanf("%d %d",&a,&b);
    c=a+b;
    
    return c;
}
int main(){
    int res;
    res=add();
    printf("sum=%d",res);
    return 0;
}*/



/*#include <stdio.h>
int area(float  );
int area(float r){
    float a;
    a=3.142*r*r;
    printf("Area=%f",a);
    return 0;
}
int main(){
    float rad;
    printf("Enter radius:\n");
    scanf("%f",&rad);
   area(rad);
    return 0;
}*/
#include <stdio.h>
int area(float  );
int area(float r){
    float a;
    a=3.142*r*r;
    return a;
}
int main(){
    float rad;
    printf("Enter radius:\n");
    scanf("%f",&rad);
    float res;
    res=area(rad);
    printf("area=%f",res);
    return 0;
}