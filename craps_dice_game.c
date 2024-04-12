#include "stdio.h"
#include "stdlib.h"
#include "time.h"
enum Status{WON,LOST,CONTINUE};
int roll_dice(void);
int main(){
    int sum;
    int mypoint;
    enum Status gameStatus;
    srand(time(NULL));
    sum=roll_dice();
    switch (sum) {
        case 7:
        case 11:
            gameStatus=WON;
                    break;
        case 2:
        case 3:
        case 12:
            gameStatus=LOST;
            break;
        default:
            gameStatus=CONTINUE;
            mypoint=sum;
            break;



    }
    while(gameStatus==CONTINUE){
        sum=roll_dice();
        if(sum==mypoint){gameStatus=WON;}
        else{
            if (sum==7){gameStatus=LOST;}
        }
    }
    if (gameStatus==WON){ printf("Player Wins");}
    else{ printf("Player Loses,House wins");}
    return 0;
}
int roll_dice(void){
    int die1;
    int die2;
    int worksum;
    die1=1+(rand()%6);
    die2=1+(rand()%6);
    worksum=die1+die2;
    printf("Player rolled %d and %d, a sum of %d\n",die1,die2,worksum);
    return worksum;
}