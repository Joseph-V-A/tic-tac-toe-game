#include<stdio.h>
#include<conio.h>
void main ()
{
    int pos,p=1,b[11],i,n=1,again;
    char a[11],z;
    printf("Welcome To The Game\n");
    againl:a[1]='1',a[2]='2',a[3]='3',a[4]='4',a[5]='5',a[6]='6',a[7]='7',a[8]='8',a[9]='9';
    int count=0;
    for(int j=0;j<11;j++)
    {
    b[j]=0;
    }
    printf("player 1 :- X \t player 2 :-O\n");
    
    printf(" %c | %c | %c \n---+---+---\n %c | %c | %c \n---+---+---\n %c | %c | %c \n\n",a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9]);
    do
    {
    printf("Enter a number b/w 1 & 9\n");
    printf("player %d :- ",p);
    label1:scanf("%d",&pos);
    count++;
    for(i=1;i<=count;i++)
    {
    if(b[i]==pos||pos>9||pos<0)
    {
        count--;
        printf("it is already filled or does exit so try another number\n");
        goto label1;
    }
    }
    b[count]=pos;
    if(1==p)
    {
       a[pos]='X';
        p=2;
    }
    else
    {
        a[pos]='O';
        p=1;
        
    }
    printf(" %c | %c | %c \n---+---+---\n %c | %c | %c \n---+---+---\n %c | %c | %c \n\n",a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9]);
    if(a[1]==a[2]&&a[2]==a[3]||a[4]==a[5]&&a[5]==a[6]||a[7]==a[8]&&a[8]==a[9]||a[1]==a[4]&&a[4]==a[7]||a[2]==a[5]&&a[5]==a[8]||a[3]==a[6]&&a[6]==a[9]||a[1]==a[5]&&a[5]==a[9]||a[3]==a[5]&&a[5]==a[7])
    {
        if(p==1)
        {
            p=2;
        }
        else
        {
            p=1;
        }
        printf("player %d wins\n",p);
        printf("Do u want to play again ?\nYes = 1,No = 0\n");
        scanf("%d",&again);
        if(again==1)
        { 
            goto againl;
        }
        else
        {
            n=0;
        }
    }
     else if(count==9)
        {
        printf("The Game cannot be won.So lets start a new game  ");
        goto againl;
        }
    } while (n==1);
    printf("------THE END------");
    getch();
}   