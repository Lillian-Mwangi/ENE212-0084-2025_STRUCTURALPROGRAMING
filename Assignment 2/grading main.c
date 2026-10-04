#include <stdio.h>
#include <stdlib.h>
//PSEUDOCODE
    //START
       // DISPLAY ENTER MARKS
       // INPUT MARKS
      //SELECT CASE
        //CASE 0-40
          //DISPLAY YOU FAILED
        //CASE 41-50
          //DISPLAY D
        //CASE 51-60
          //DISPALY C
        //CASE 61-70
          // DISPLAY B
        //CASE 71-100
          //DISPLAY A
      //ENDCASE
    //END
int main()

{
// DECLARATION
int MARKS;
// INPUT MARKS
    printf("ENTER YOUR NUMERICAL MARKS\n");
    scanf("%i",&MARKS);
//EVALUATION USING CODITIONAL LOGIC CASE
switch(MARKS){
  case 0 ... 40:
    printf("you FAILED");
  break;
  case 41 ... 50:
    printf("you scored a D!\n");
  break;
  case 51 ... 60:
    printf("you scored a C!\n");
  break;
  case 61 ... 70:
    printf("you scored a B!\n");
  break;
  case 71 ... 100:
    printf("you scored an A!\n");
  break;
}
    return 0;
}
