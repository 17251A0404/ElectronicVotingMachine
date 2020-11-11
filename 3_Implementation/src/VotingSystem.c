#include<VotingSystem.h>
int votesCount1=0, votesCount2=0, votesCount3=0, spoiledtvotes=0;

void castVote()
{

int c;

printf("\n\n *****Choose your Candidate *****\n\n");
printf("\n 1. %s", CANDIDATE1);
printf("\n 2. %s", CANDIDATE2);
printf("\n 3. %s", CANDIDATE3);
printf("\n 4. %s", "None of These");
printf("\n\n Enter your c : ");
scanf("%d",&c);
switch(c){
    case 1: votesCount1++; break;
    case 2: votesCount2++; break;
    case 3: votesCount3++; break;
    case 4: spoiledtvotes++; break;
    default: printf("\n Error: Wrong Choice !! Please retry");
             //hold the screen
             getchar();
}
printf("\n Thank You For Your Valuable Vote !!!!!!!!!");
printf(" hi %d",votesCount1);
}
int login()
{char u[15]="MYS01";
char p[12]="456";


if(strcmp(u,"MYS01")==0)
    {
         if(strcmp(p,"456")==0)
     {
         return 1;
     }
}
else{
    return 0;
}
}





void admin()
{

int x;
char username[15];
char password[12];
printf("**Please Login**");
printf("\n Enter your username:\n");
scanf("%s", &username);
printf("Enter your password:\n");
    scanf("%s",&password);

    if(strcmp(username,"MYS01")==0)
    {
        if(strcmp(password,"456")==0){

        printf("\nWelcome.Login Success!");

  }else{
    printf("\nwrong password");
    return ;
}
    }
    else{
    printf("\nUser doesn't exist");
    return ;
}

printf("\n What do you want to Know?");
printf("\n 1.Voting Statics");
printf("\n 2.Leading candidate");
printf("\n\n Enter choice");
scanf("%d",&x);

if (x==1)
{
printf("\n\n ****Voting Statics ****");
printf("\n %s - %d ", CANDIDATE1, votesCount1);
printf("\n %s - %d ", CANDIDATE2, votesCount2);
printf("\n %s - %d ", CANDIDATE3, votesCount3);

printf("\n %s - %d ", "Spoiled Votes", spoiledtvotes);


}
else if(x==2)
{
    printf("\n\n  **** Leading Candiate ****\n\n");
    if(votesCount1>votesCount2 && votesCount1>votesCount3)
    printf("[%s]",CANDIDATE1);
    else if (votesCount2>votesCount3  && votesCount2 >votesCount1)
    printf("[%s]",CANDIDATE2);
    else if( votesCount3>votesCount2 && votesCount3 >votesCount1)
    printf("[%s]",CANDIDATE3);

    else
    printf(" !!!!!!No-win situation!!!!!!!");

    }
    else
    {
      printf("Invalid choice");
    }
}

