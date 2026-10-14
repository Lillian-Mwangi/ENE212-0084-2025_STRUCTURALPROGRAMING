#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//PSEUDOCODE
    //START
      //LOOPING BEGINS
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
char NAME[20];
char REGNO[20];
char GRADE;
int COUNT=1;
int N;
char *status;
char ALL_CARDS[4000] = "";
char temp_card[300];
    printf("ENTER THE NUMBER OF STUDENTS YOU NEED TO BE GRADED\n");
    scanf("%i",&N);
//ASK FOR NAME AND REG NO
  while(COUNT<=N){
    printf("\nENTER STUDENT %i DETAILS\n",COUNT);
    printf("KINDLY ENTER THE FOLLOWING DETAILS ");
    printf("\nNAME:  ");
    scanf("%s",NAME);
    printf("REGISTRATION NUMBER:  ");
    scanf("%s",REGNO);
    printf("\nHELLO %s,%s\n",NAME,REGNO);
// INPUT MARKS
    printf("ENTER YOUR NUMERICAL MARKS: ");
    scanf("%i",&MARKS);
//EVALUATION USING CODITIONAL LOGIC CASE
switch(MARKS){
  case 0 ... 40:
    GRADE= 'F';
    status="YOU HAVE FAILED";
  break;
  case 41 ... 50:
    GRADE= 'D';
   status="YOU HAVE PASSED";
  break;
  case 51 ... 60:
    GRADE= 'C';
    status="YOU HAVE PASSED";
  break;
  case 61 ... 70:
    GRADE= 'B';
    status="YOU HAVE PASSED";
  break;
  case 71 ... 100:
    GRADE= 'A';
   status="YOU HAVE PASSED";
  break;
  default:
    printf("\ninvalid marks\n");
    GRADE= 'X';
    status="YOU HAVE FAILED...INVALID MARKS";
  break;
}
     sprintf(temp_card,
                "\n----------------------\n"
                "    STUDENT'S INFO    \n"
                "----------------------\n"
                "REG   : %s\n"
                "NAME  : %s\n"
                "MARKS : %i\n"
                "GRADE : %c\n"
                "STATUS: %s\n"
                "----------------------\n",
                REGNO, NAME, MARKS, GRADE, status);
    strcat(ALL_CARDS, temp_card);


    COUNT++;
}
    printf("\n======================================================\n");
    printf("             ALL STUDENT INFORMATION CARDS            \n");
    printf("======================================================\n");
     printf("%s", ALL_CARDS);

    printf("======================================================\n");

    return 0;
}
