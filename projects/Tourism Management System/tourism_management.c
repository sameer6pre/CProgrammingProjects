#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the maximum number of tourists and length of names
#define MAX_TOURISTS 100
#define MAX_NAME_LEN 50

// Define the structure to store tourist details
struct Tourist {
    int id;
    char name[MAX_NAME_LEN];
    char destination[MAX_NAME_LEN];
    int days;
};

// Declare an array to store the tourists
struct Tourist tourists[MAX_TOURISTS];
int touristCount = 0;

// Function to add a new tourist
#include <stdio.h>
#include <string.h>

#define MAX_TOURISTS 100
#define NAME_LEN 64
#define DEST_LEN 64

struct Tourist {
    int id;
    char name[NAME_LEN];
    char destination[DEST_LEN];
    int days;
};

struct Tourist tourists[MAX_TOURISTS];
int touristCount = 0;

void addTourist() {
    if (touristCount >= MAX_TOURISTS) {
        printf("Cannot add more tourists. The list is full.\n");
        return;
    }
    struct Tourist newTourist;
    printf("Enter Tourist ID: ");
    if (scanf("%d", &newTourist.id) != 1) {
        printf("Invalid input for ID.\n");
        // Clear stdin
        int c; while ((c = getchar()) != '\n' && c != EOF);
        return;
    }
    printf("Enter Tourist Name: ");
    // FIX: Use width specifier to prevent buffer overflow
    if (scanf("%63s", newTourist.name) != 1) {
        printf("Invalid input for name.\n");
        int c; while ((c = getchar()) != '\n' && c != EOF);
        return;
    }
    printf("Enter Destination: ");
    if (scanf("%63s", newTourist.destination) != 1) {
        printf("Invalid input for destination.\n");
        int c; while ((c = getchar()) != '\n' && c != EOF);
        return;
    }
    printf("Enter Number of Days: ");
    if (scanf("%d", &newTourist.days) != 1) {
        printf("Invalid input for days.\n");
        int c; while ((c = getchar()) != '\n' && c != EOF);
        return;
    }
    tourists[touristCount++] = newTourist;
    printf("Tourist added successfully!\n");
}

// The fix uses width specifiers in scanf (e.g., "%63s") to ensure that no more than the buffer size minus one is read, preventing buffer overflow. It also checks scanf return values and clears stdin on error for robustness.

// Function to display all tourists
void displayTourists() {
    if (touristCount == 0) {
        printf("No tourists to display.\n");
        return;
    }
    printf("ID\tName\t\tDestination\t\tDays\n");
    printf("------------------------------------------------------\n");
    for (int i = 0; i < touristCount; i++) {
        printf("%d\t%s\t\t%s\t\t%d\n", tourists[i].id, tourists[i].name, tourists[i].destination, tourists[i].days);
    }
}

// Function to search for a tourist by ID
void searchTourist() {
    int id;
    printf("Enter Tourist ID to search: ");
    scanf("%d", &id);
    for (int i = 0; i < touristCount; i++) {
        if (tourists[i].id == id) {
            printf("Tourist found:\n");
            printf("ID: %d\n", tourists[i].id);
            printf("Name: %s\n", tourists[i].name);
            printf("Destination: %s\n", tourists[i].destination);
            printf("Days: %d\n", tourists[i].days);
            return;
        }
    }
    printf("Tourist with ID %d not found.\n", id);
}

// Function to delete a tourist by ID
void deleteTourist() {
    int id;
    printf("Enter Tourist ID to delete: ");
    scanf("%d", &id);
    for (int i = 0; i < touristCount; i++) {
        if (tourists[i].id == id) {
            for (int j = i; j < touristCount - 1; j++) {
                tourists[j] = tourists[j + 1];
            }
            touristCount--;
            printf("Tourist with ID %d deleted successfully.\n", id);
            return;
        }
    }
    printf("Tourist with ID %d not found.\n", id);
}

int main() {
    int choice;
    while (1) {
        printf("\nTourism Management System\n");
        printf("1. Add Tourist\n");
        printf("2. Display Tourists\n");
        printf("3. Search Tourist\n");
        printf("4. Delete Tourist\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                addTourist();
                break;
            case 2:
                displayTourists();
                break;
            case 3:
                searchTourist();
                break;
            case 4:
                deleteTourist();
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}
