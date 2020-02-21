#include <stdio.h>
#include <stdlib.h>

void menu();
void add();
void view();
void delete ();
void search();
int id[20];
char phone[20][20];
char name[20][20];

int count = 0;

int main()
{
    int c;
    do
    {
        menu();
        printf("\n\t\t Enter the select number: ");
        scanf("%d", &c);
        system("clear");
        if (c == 1)
        {
            add();
        }
        if (c == 2)
        {
            view();
        }

        if (c == 3)
        {
            delete ();
        }
        if (c == 4)
        {
            search();
        }

    } while (c < 5);
}

void menu()
{

    printf("\n \t\t..::Student INFORMATION::..\n");
    printf("\n \t\t--------------------------\n");
    printf("\n\t\t  1. Student Add\n");
    printf("\n\t\t  2. Student View \n");
    printf("\n\t\t  3. Student delete\n");
    printf("\n\t\t  4. Student search\n");
    printf("\n\t\t  5. exit\n");
}
void add()
{

    char c;
    do
    {

        printf("\n\n\t\t***************************\n");
        printf("\t\t\tADD Student Info ");
        printf("\n\t\t***************************\n\n");
        printf("\n\t  ID :");
        scanf("%d", &id[count]);
        printf("\n\t  Name :");
        scanf("%s", name[count]);
        printf("\n\t  Phone :");
        scanf("%s", phone[count]);
        count++;

        printf("\n\t  Are you again? y/n: ");
        scanf("%s", &c);
        system("clear");
    } while (c == 'y');
}

void view()
{
    char c;
    do
    {
        printf("\n\n\t\t***************************\n");
        printf("\t\t\tStudent View ");
        printf("\n\t\t***************************\n\n");
        for (int i = 0; i < count; i++)
        {
            printf("\n\t  ID : %d\n", id[i]);
            printf("\n\t  Name: %s\n", name[i]);
            printf("\n\t  Phone: %s\n", phone[i]);
            printf("\n\t  -----------------------");
        }
        printf("\n\t  Are you want to back menu? press any key: ");
        scanf("%s", &c);
        system("clear");
    } while (c == ' ');
}
void delete ()
{
    int delete_id;
    printf("\n\n\t\t***************************\n");
        printf("\t\t\tStudent Delete ");
        printf("\n\t\t***************************\n\n");

        printf("Enter your ID :");
        scanf("%d", &delete_id);
        


}
void search()
{
    printf("studnet search\n");
}
