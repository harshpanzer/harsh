#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
int ret(int n){
    srand(time(NULL));
   return rand()%n;
}
void main(){
    int a,b,c=0,d=0;
    char e[50];
    printf("ROCK PAPER SCISSORS\n");
    printf("Enter User Name:\n");
    scanf("%s",&e);

    for(int i=1;i<=3;i++){
        printf("%d round\n\n",i);
        printf("For Rock : press 1\n");
        printf("For Paper : press 2\n");
        printf("For Scissors : press 3\n");
        scanf("%d",&a);
        b=ret(2);
        if(b==0)
            printf("Computer chooses Rock\n");
        else if(b==1)
            printf("Computer chooses Paper\n");
        else if(b==2)
            printf("Computer chooses Scissors\n");
        if((a==1&&b==2)||(a==2&&b==0)||(a==3&&b==1)){
            printf("%s wins the %d round\n",e,i);
            c++;
        }
        else if((b==0&&a==3)||(b==1&&a==1)||(b==2||a==2)){
            printf("Computer wins the %d round\n",i);
            d++;}
        else 
            printf("Its a Tie\n");
    }
        if(c>d)
            printf("%s wins the match\n",e);
        else if(d>c)
            printf("Computer wins the match\n");
        else
            printf("Both are loosers\n");
    getch();
}