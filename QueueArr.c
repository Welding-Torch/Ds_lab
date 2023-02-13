// OPERATIONS ON QUEUE
#include <stdio.h>

int n, f, r, choice;
int queue[100];

void insert(void);
void delete (void);
void display(void);

int main()
{
    f = -1;
    r = -1;
    printf("\nEnter the size of Queue:");
    scanf("%d", &n);
    printf("\n\tQUEUE OPERATIONS USING ARRAY");
    printf("\n\t--------------------------------");
    printf("\n\t 1.INSERT\n\t 2.DELETE\n\t 3.DISPLAY\n\t 4.EXIT");

    do
    {
        printf("\n\nEnter the Choice:");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
        {
            insert();
            break;
        }

        case 2:
        {
            delete ();
            break;
        }

        case 3:
        {
            display();
            break;
        }
        case 4:
        {
            printf("\n\tEXIT POINT");
            break;
        }
        default:
        {
            printf("\n\tPlease Enter a Valid Choice(1/2/3/4)");
        }
        }
    } while (choice != 4);

    return 0;
}

void insert()
{
    if (r == n)
    {
        printf("Queue is full.");
    }
    else
    {
        int a;
        printf("Enter a value to insert:");
        scanf("%d", &a);
        queue[r] = a;
        r++;
    }
}
void delete ()
{
    if (f == r)
    {
        printf("Queue is empty.");
    }
    else
    {
        printf("Deleted element is: %d", queue[f]);
        f++;
    }
}
void display()
{
    if (f == r)
    {
        printf("Queue is empty.");
    }
    else
    {
        printf("Queue elements: ");
        for (int i = f; i < r; i++)
        {
            printf("%d \t", queue[i]);
        }
    }
}
