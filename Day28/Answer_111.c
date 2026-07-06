#include <stdio.h>
struct Ticket
{
    int ticket_no;
    char name[50];
    char destination[50];
};
int main()
{
    struct Ticket t;
    printf("Enter Ticket Number: ");
    scanf("%d",&t.ticket_no);
    printf("Enter Passenger Name: ");
    scanf("%s",t.name);
    printf("Enter Destination: ");
    scanf("%s",t.destination);
    printf("\nTicket Details\n");
    printf("Ticket No: %d\n",t.ticket_no);
    printf("Name: %s\n",t.name);
    printf("Destination: %s",t.destination);
    return 0;
}