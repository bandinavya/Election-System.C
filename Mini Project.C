#include<stdio.h>                                                                                                         
#include<stdlib.h>
#define CANDIDATE_COUNT
#define CANDIDATE1 "Gayatri"
#define CANDIDATE2 "Yaswanth"
#define CANDIDATE3 "Navya"
int votescount1=0, votescount2=0, votescount3=0;
void castvote(){
   int choice;
   printf("\n\n ### Please choose your Candidate ####\n\n");
   printf("\n 1. %s", CANDIDATE1);
   printf("\n 2. %s", CANDIDATE2);
   printf("\n 3. %s", CANDIDATE3);
   printf("\n 4. %s", "None of These");
   printf("\n Input your choice (1 - 4) : ");
   scanf("%d",&choice);
   switch(choice){
      case 1: votescount1++; break;
      case 2: votescount2++; break;
      case 3: votescount3++; break;
      default: printf("\n Error: Wrong Choice !! Please retry");
   }
   printf("\n Thanks for your vote !");
}
void votesCount(){
   printf("\n\n ##### Voting Statics ####");
   printf("\n %s - %d ", CANDIDATE1, votescount1);
   printf("\n %s - %d ", CANDIDATE2, votescount2);
   printf("\n %s - %d ", CANDIDATE3, votescount3);
}
int main(){
   int i;
   int choice;
   while(1){
      printf("\n\n ###### Welcome to Elections of 2021 #####");
      printf("\n\n 1. Cast the Vote");
      printf("\n 2. Find Vote Count");
      printf("\n 0. Exit");
      printf("\n Please enter your choice : ");
      scanf("%d", &choice);
      switch(choice){
         case 1: castvote();break;
         case 2: votesCount();break;
         case 0: exit(0);
         default: printf("\n Error: Invalid Choice");
      }
   };
   return 0;
}
