#include<stdio.h>
int input()
{
    printf("Enter number : ");
    int n;
    scanf("%d",&n);
    return n;
}
int main()
{
    char s[20];
    int num;
    printf("Enter unit : ");
    gets(s);
    switch(s)
    {
    case 'kms':
        num=input();
        printf("%.2f",num*0.62);
        break;
    case 'inches':
        num=input();
        printf("%.2f",num*0.083);
        break;
    default:
        printf("NOT VALID");
        break;
    }
}
