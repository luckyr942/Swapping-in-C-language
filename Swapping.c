#include<stdio.h>
/*int main(){
    int a,b,c;
    printf("\n Enter two numbers for A & B:");
    scanf("%d %d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("\n After swapping the values are : A=%d , B=%d.",a,b);
    
}*/
  
// ANOTHER WAY FOR SWAPPING WITHOUT USING THIRD VARIABLE

int main() {
    int ch;
    printf("Press 1 for one\n Press 2 for two\n Press 3 for three");
    printf("\n Enter your choice");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
            printf("one");
            break;
        case 2:
            printf("two");
            break;
        case 3:
            printf("three");
            break;
        default:
            printf("Invalid cHOPICES");
    }
}