#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct player{
    int jerseyno;
    char name[20];
    int runs;
    int wickets;
    int matches;
}player;
void Addplayers(player*,int);
void displayplayer(player*,int);
void searchplayer(player*,int);
void deleteplayer(player*, int*);
void updateplayer(player*, int);
void sortplayers(player*,int);
void main(){
   player *players;
   player *temp;
int choice=0;
int size = 5;

players = (player*)malloc(size * sizeof(player));

if(players == NULL)
{
    printf("Memory allocation failed!");
    return;
}

     printf("Enter 5 Player Details:\n");
     Addplayers(players, size);

    while(choice!=7)
    {
    printf("\n\n===== PLAYER MANAGEMENT SYSTEM =====");
    printf("\n1.Add players:");
    printf("\n2.Search players:");
    printf("\n3.Update players:");
    printf("\n4.Remove players:");
    printf("\n5.Display Sorted Players:");
    printf("\n6.Display All Players");
    printf("\n7.Exit");
    printf("\nenter your choice");
    scanf("%d",&choice);

    switch(choice){
            case 1:
                   printf("Enter Player Details:");
                   temp = realloc(players, (size + 1) * sizeof(player));
                     if(temp == NULL){
                         printf("Memory allocation failed!");
                         break;
                        }
                        players = temp;
                        Addplayers(&players[size], 1); 
                        size++;
                        break;

            case 2:
             printf("Player search by Jearsy or name:");
                searchplayer(players,size);
                break;

            case 3:
                printf("\nUpdate Player details:");
                updateplayer(players,size);
                break;

            case 4:
                printf("\nRemove Player:");
                deleteplayer(players,&size);
                break;

            case 5:
                printf("\nPlayers sort by Runs or Wickets or Matchs.");
                sortplayers(players,size);
                break;

            case 6:
             printf("Player details are:");
                displayplayer(players, size);
                break;

            case 7:
                printf("\nExit");
                break;
                

            default:
                printf("\nInvalid Choice!");
        }
    }
}

void Addplayers(player *p, int size)
{
    int i;
    int no;

    for(i = 0; i < size; i++)
    {
        printf("\nEnter details of Player %d:\n", i + 1);

        printf("Enter Jersey Number: ");
        scanf("%d", &p->jerseyno);

        printf("Enter Name: ");
        scanf("%s", p->name);

        printf("Enter Runs: ");
        scanf("%d", &p->runs);

        printf("Enter Wickets: ");
        scanf("%d", &p->wickets);

        printf("Enter Matches: ");
        scanf("%d", &p->matches);

        p++;
    }
}
void displayplayer(player* p,int size){
    int i;
    for(i=0;i<size;i++){
        
        printf("\n------------------------");
        printf("\nDetails of Player %d:\n", i + 1);
        printf("\njerseyno:%d",p->jerseyno);
        printf("\nPlayerName:%s",p->name);
        printf("\nRuns:%d",p->runs);
        printf("\nWickets:%d",p->wickets);
        printf("\nMatches:%d",p->matches);
        p++;
    }

}
void searchplayer(player *p, int size)
{
    int choice;
    int jersey;
    char name[20];
    int i, found = 0;
    printf("\n1. Search by Jersey Number");
    printf("\n2. Search by Name");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);
    if(choice==1)
    {
        printf("Enter Jersey Number: ");
        scanf("%d", &jersey);
        for(i = 0; i < size; i++)
        {
            if(p->jerseyno == jersey)
            {
                printf("\nPlayer Found");
                printf("\nJersey No : %d", p->jerseyno);
                printf("\nName      : %s", p->name);
                printf("\nRuns      : %d", p->runs);
                printf("\nWickets   : %d", p->wickets);
                printf("\nMatches   : %d", p->matches);
                found = 1;
                break;
            }
            p++;
        }
    }
    else if(choice == 2)
    {
        printf("Enter Player Name: ");
        scanf("%s", name);
        for(i = 0; i < size; i++)
        {
            if(strstr(p->name, name) != '\0')
            {
                printf("\nPlayer Found");
                printf("\nJersey No : %d", p->jerseyno);
                printf("\nName      : %s", p->name);
                printf("\nRuns      : %d", p->runs);
                printf("\nWickets   : %d", p->wickets);
                printf("\nMatches   : %d", p->matches);
                found = 1;
                break;
            }
           p++;
        }
    }
    else
    {
        printf("\nInvalid Choice");
        return;
    }
 if(found == 0)
        printf("\nPlayer Not Found");
}

void deleteplayer(player *p, int *size)
{
    int jersey;
    int i, j;
    int found = 0;

    printf("\nEnter Jersey Number to delete: ");
    scanf("%d", &jersey);

    for(i = 0; i < *size; i++)
    {
        if(p[i].jerseyno == jersey)
        {
            found = 1;

            
            for(j = i; j < *size - 1; j++)
            {
                p[j] = p[j + 1];
            }

            (*size)--;

            printf("\nPlayer deleted successfully!");
            break;
        }
    }

    if(found == 0)
    {
        printf("\nPlayer not found!");
    }
}
void updateplayer(player *p, int size)
{
    int choice;
    char name[20];
    int i, found = 0;

    printf("\nEnter Player Name: ");
    scanf("%s",name);
    for(i=0;i<size;i++)
    {
        if(strstr(p->name, name) != NULL)
        {
            found=1;
            printf("\nPlayer Found!");
            printf("\n1. Update Runs");
            printf("\n2. Update Wickets");
            printf("\n3. Update Matches");
            printf("\nEnter your choice: ");
            scanf("%d",&choice);
            if(choice==1)
            {
                do
                {
                    printf("Enter New Runs: ");
                    scanf("%d", &p->runs);
                    if(p->runs < 0)
                        printf("Runs cannot be negative!\n");
                }while(p->runs < 0);
            }
            else if(choice==2)
            {
                do
                {
                    printf("Enter New Wickets: ");
                    scanf("%d", &p->wickets);
                    if(p->wickets < 0)
                        printf("Wickets cannot be negative!\n");
                }while(p->wickets < 0);
            }
            else if(choice==3)
            {
                do
                {
                    printf("Enter New Matches: ");
                    scanf("%d", &p->matches);
                    if(p->matches < 0)
                        printf("Matches cannot be negative!\n");
                }while(p->matches < 0);
            }
            else
            {
                printf("\nInvalid Choice!");
                return;
            }
            printf("\nPlayer Updated Successfully!");
            break;
        }
     p++;
    }
  if(found == 0)
      printf("\nPlayer Not Found!");
    
}
void sortplayers(player *p, int size)
{
    player tempArr[100];
    player temp;

    int choice;
    int i, j;

    for(i = 0; i < size; i++)
    {
        tempArr[i] = p[i];
    }

    printf("\n1. Sort By Runs");
    printf("\n2. Sort By Wickets");
    printf("\n3. Sort By Matches");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    for(i = 0; i < size - 1; i++)
    {
        for(j = i + 1; j < size; j++)
        {
            if(choice == 1 && tempArr[i].runs < tempArr[j].runs)
            {
                temp = tempArr[i];
                tempArr[i] = tempArr[j];
                tempArr[j] = temp;
            }

            else if(choice == 2 && tempArr[i].wickets < tempArr[j].wickets)
            {
                temp = tempArr[i];
                tempArr[i] = tempArr[j];
                tempArr[j] = temp;
            }

            else if(choice == 3 && tempArr[i].matches < tempArr[j].matches)
            {
                temp = tempArr[i];
                tempArr[i] = tempArr[j];
                tempArr[j] = temp;
            }
        }
    }

    printf("\nSorted Players:\n");

    displayplayer(tempArr, size);
}