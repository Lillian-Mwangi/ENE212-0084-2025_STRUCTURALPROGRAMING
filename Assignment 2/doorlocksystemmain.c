#include <stdio.h>
#include <stdlib.h>
//PSEUDOCODE
     //START
      //SET COORRECTPIN
      //SET COUNT TO 2
      //SET MAX ATTEMPT TO 3
      //WHILE COUNT IS <=3,PLEASE ATTEMPLT AGAIN
         //DISPLAY PROVIDE USERPIN
      //IF USERPIN IS<1000 and USERPIN IS>9999
         //DISPLAY INVALID LENGHTH
      //ELSE IF USERPIN IS EQUAL TO CORRECT PIN
         //DISPLAY GRANT ACCESS
      //ELSE DENY ACCESS
      //END IF
      //INCREASE COUNT BY 1
      //ENDWHILE
      //IF COUNT IS >3
         //DISPLAY PIN BLOCKED
         // DISPLAY ACCESS DENIED
      //END IF
    //END
//THE PROGRAM
int main()
//INITALIZATION AND DECLARATION
{
   int correctpin =9999;
   int userpin ;
   int count=2;
 //PROBLEM SOLVING
 //CONDITIONAL STATEMENTS
        printf("PLEASE PROVIDE USERPIN");
        scanf("%i",&userpin);
    if(userpin==correctpin){
        printf("GRANTED ACCESS");
    }
    else if(userpin<1000||userpin>9999){
        printf("INVALID LENGTH\n");
        }
    else{
        printf("ACCESS DENIED");
        }
 //LOOPING
    while(count<=3){
        printf("\nattempt %iof3 ...provide user pin",count);
        scanf("%i",&userpin);
    if(userpin==correctpin){
        printf("GRANTED ACCESS");
    return 0;
    }
    else if(userpin<1000||userpin>9999){
        printf("INVALID LENGTH\n");
    }
    else{
        printf("ACCESS DENIED");
    }
         count++;
    }
    if(count>3){
        printf("PIN BLOCKED");
        printf("ACCESS DENIED\n");
    }
    return 0;
}


