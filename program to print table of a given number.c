#include<stdio.h>
#include<conio.h>
int main()
{
    int no=0,cnt=1;
    printf("\n enter a number");
    scanf("%d",&no);
    printf("table of %d is",no);
    while(cnt<=10)
    {
        printf("\n %d",(no*cnt));
        cnt++;
    }
    getch();
    return 0;
}
