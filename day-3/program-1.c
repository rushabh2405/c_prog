#include<stdio.h>
void main()
{
int n_question,c_mrk,w_mrk,n_c_answer,n_inc__answer,total_mrk,total_mrk_obt;
float percentage;

printf("enter no of questions: ");
scanf("%d",&n_question);

printf("enter mark per correct answer: ");
scanf("%d",&c_mrk);

printf("enter mark deducted per incorrect answer: ");
scanf("%d",&w_mrk);

printf("enter number of correct answer: ");
scanf("%d",&n_c_answer);

n_inc__answer=n_question-n_c_answer;
total_mrk=n_question*c_mrk;
total_mrk_obt=(n_c_answer*c_mrk)-(n_inc__answer*w_mrk);
percentage=(total_mrk_obt*100)/total_mrk;

printf("total mrk obtained is: %d\n",total_mrk_obt);
printf("percentage obtained is: %f\n",percentage);

if (percentage>50)
{printf("congratulation you have passed the exam\n");}
else
{printf("sorry you have failed in exam\n");}
}