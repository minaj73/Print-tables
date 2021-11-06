#include<stdio.h>
#include<conio.h>
int main()
{
    int R=0,C=0,SP=0,EP=0;
    printf("\n enter SP for table =");
    scanf("%d",&SP);
    printf("\n enter EP for table =");
    scanf("%d",&EP);
    for(R=1;R<=10;R++)
    {
        for(C=SP;C<=EP;C++)
        {
            printf("%3d",R*C);
        }

    printf("\n");
    }
    getch();
    return 0;
}
