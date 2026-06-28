#include <stdio.h>

struct Ticket {
    int ticketId;
    char passengerName[50];
    char destination[50];
    int seats;
};

struct Ticket tickets[100];
int count = 0;

int addTicket() {
    if (count >= 100) {
        printf("Ticket list is full\n");
    }
    else {
        printf("Enter Ticket ID: ");
        scanf("%d", &tickets[count].ticketId);
        printf("Enter Passenger Name: ");
        scanf(" %[^\n]", tickets[count].passengerName);
        printf("Enter Destination: ");
        scanf(" %[^\n]", tickets[count].destination);
        printf("Enter Number of Seats: ");
        scanf("%d", &tickets[count].seats);

        count++;
        printf("Ticket booked successfully\n");
    }
    return 0;
}

int displayTickets() {
    if (count == 0) {
        printf("No tickets found\n");
    }
    else {
        printf("Booked Tickets\n");
        for (int i = 0; i < count; i++) {
            printf("TicketID: %d  Name: %s  Destination: %s  Seats: %d\n",
                   tickets[i].ticketId,
                   tickets[i].passengerName,
                   tickets[i].destination,
                   tickets[i].seats);
        }
    }
    return 0;
}

int searchTicket() {
    int id;
    printf("Enter Ticket ID to search: ");
    scanf("%d", &id);
    for (int i = 0; i < count; i++) {
        if (tickets[i].ticketId == id) {
            printf("Record found: Name: %s  Destination: %s  Seats: %d\n",
                   tickets[i].passengerName,
                   tickets[i].destination,
                   tickets[i].seats);
            return 0;
        }
    }
    printf("Ticket not found\n");
    return 0;
}

int deleteTicket() {
    int id;
    printf("Enter Ticket ID to delete: ");
    scanf("%d", &id);
    for (int i = 0; i < count; i++) {
        if (tickets[i].ticketId == id) {
            for (int j = i; j < count - 1; j++) {
                tickets[j] = tickets[j + 1];
            }
            count--;
            printf("Ticket deleted successfully\n");
            return 0;
        }
    }
    printf("Ticket not found\n");
    return 0;
}

int main() {
    int choice;
    do {
        printf("Ticket Booking System\n");
        printf("1. Book Ticket\n");
        printf("2. Display Tickets\n");
        printf("3. Search Ticket\n");
        printf("4. Delete Ticket\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addTicket(); break;
            case 2: displayTickets(); break;
            case 3: searchTicket(); break;
            case 4: deleteTicket(); break;
            case 5: printf("Goodbye!\n"); break;
            default: printf("Invalid choice!\n");
        }
    } while (choice != 5);

    return 0;
}
