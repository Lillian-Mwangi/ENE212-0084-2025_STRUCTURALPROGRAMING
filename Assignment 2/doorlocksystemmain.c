#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
//PSEUDOCODE
     //START
      //SET COORRECTPIN
      //SET COUNT TO 2
      //SET MAX ATTEMPT TO 3
      //DISPLAY PROVIDE USERPIN
      //IF USERPIN IS<1000 and USERPIN IS>9999
         //DISPLAY TOO SHORT AND TOO LONG RESPECTIVELY
         //DISPLAY EXACTLY 4 DIGITS IF IT HAS 4 DIGITS
      //ELSE IF USERPIN IS EQUAL TO CORRECT PIN
         //DISPLAY GRANT ACCESS
      //ELSE DENY ACCESS
      //DISPLAY A MEN OPTION
      //PROMPT USER TO ENTER A CHOICE FROM MENU
      //END IF
      //WHILE COUNT IS <=3
         //DISPLAY TRY AGAIN AND NUMBER OF ATEMPTS LEFT
      //INCREASE COUNT BY 1
      //ENDWHILE
      //IF COUNT IS >3
         //DISPLAY PIN BLOCKED
         // DISPLAY ACCESS DENIED
         //display wait for 5 mins AND TRY AGAIN
      //END IF
    //END
//THE PROGRAM
int main()
//INITALIZATION AND DECLARATION
{
      int correctpin =9999;
      int userpin ;
      int count=2;
      int choice;
 //ASK USER TO ENTER THE PIN
      printf("PLEASE PROVIDE THE USERPIN: ");
      scanf("%i",&userpin);

 //CHECKING ON THE LENGTH
 if(userpin<1000){
      printf("\nPIN IS TOO SHORT(NOTE 4 digits please)\n");}
 else if(userpin>9999){
      printf("\nPIN IS TOO LONG(NOTE 4 digits please)\n");}
 else{
      printf("\nPIN IS EXACTLY 4 DIGITS\n");}
 //IF PIN IS CORRECT
   if(userpin==correctpin){
      printf("ACCESS GRANTED\n");
 //DISPLAY MENU
      printf("\n====DEVICE MENU====\n");
      printf("1. Open door\n");
      printf("2. Change pin\n");
      printf("3. Change username\n");
      printf("4. Exit\n");
      printf("\nPLEASE ENTER YOUR CHOICE\n");

      scanf("%i",&choice);
 //CHOICE FROM MENU
 switch(choice){
    case 1:
      printf("\nAccess Granted...DOOR UNLOCKED\n");
    break;
    case 2:
      printf("\nChange username feature coming soon\n");
    break;
    case 3:
      printf("\nChange userpin feature coming soon\n");
    break;
    case 4:
      printf("\nEXITING SYSTEM\n");
    break;
    default:
      printf("\nINVALID OPTION!\nPLEASE TRY AGAIN\n");
    break;

 }
      return 0;
      }
   else {
      printf("\nWRONG PIN\n");
      printf("ACCESS DENIED\n");
   }

//LOOPING
 while(count<=3){
      printf("\nattempt %i of 3 TRY AGAIN\n",count);
      printf("PROVIDE USERPIN: \n");
      scanf("%i",&userpin);
 //checks if pin fits length
 if(userpin<1000){
      printf("\nPIN IS TOO SHORT(NOTE 4 digits please)\n");
      printf("ACCESS DENIED\n");}
 else if(userpin>9999){
      printf("\nPIN IS TOO LONG(NOTE 4 digits please)\n");
      printf("ACCESS DENIED\n");}
 else{
      printf("\nPIN IS EXACTLY 4 DIGITS\n");
 //IF PIN IS CORRECT
   if(userpin==correctpin){
      printf("ACCESS GRANTED\n");

      printf("\n.......WELCOME........\n");
      printf("\n====DEVICE MENU====\n");
      printf("1. Open door\n");
      printf("2. Change pin\n");
      printf("3. Change username\n");
      printf("4. Exit\n");
      printf("\nPLEASE ENTER YOUR CHOICE\n");

      scanf("%i",&choice);
 switch(choice){
    case 1:
      printf("\nAccess Granted...DOOR UNLOCKED\n");
    break;
    case 2:
      printf("\nChange username feature coming soon\n");
    break;
    case 3:
      printf("\nChange userpin feature coming soon\n");
    break;
    case 4:
      printf("\nEXITING SYSTEM\n");
    break;
    default:
      printf("\nINVALID OPTION!\nPLEASE TRY AGAIN\n");
    break;
 }
    return 0;//stops immediately if its correct
   }
   else {
      printf("\nWRONG PIN\n");
      printf("ACCESS DENIED\n");}
      }
      count++;
 }
 //CONFIRM ON NUMBER OF ATTEMPTS
 if(count>3){
      printf("\nPIN IS BLOCKED\n");
      printf("ACCESS DENIED\n");

      printf("\nSystem locked....wait for 5 mins\n");
 // 5 MINS SYSTEM RELOAD
   for(int mins=5;mins>=1;mins--){
      printf("\n%i...\n",mins);
      fflush(stdout);
      Sleep(1000);

      }

      printf("\n YOU CAN NOW TRY AGAIN \n");

 }
 return 0;
}

























