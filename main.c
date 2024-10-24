#include<stdio.h>
int main()
{
    printf("Game has started ! \n Guess the number and Input from keyboard and press enter.\n");
    int ans;
    ans=(int)&ans;
    ans=((ans)%100+100)%100;
    ans++;


    int input=0;
    int trial=7;
    while(trial--)
    {
        printf("Enter the Number : ");
        scanf("%d",&input);
        // check number
        
        if(ans<input)
        {
            printf("\nSmaller , ");
        }
        else if(ans>input)
        {
            printf("\nBigger , ");
        }
        else if(ans==input)
        {
            // game end win
            printf("\nHurrah , you have guessed it right : %d",ans);
            return 0;
        }
        else{
            printf("\nTry Again\n");
        }
    }
    printf("\nLoosed, Better luck next time, Answer is %d",ans);
    return 0;
}