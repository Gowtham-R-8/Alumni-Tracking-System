#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Alumni {
    int alumniID;
    char name[50];
    char department[30];
    int yearOfGrad;
    char occupation[50];
    struct Alumni *next;
};

struct Alumni *head = NULL;

void insertAlumni(int id, char name[], char dept[], int year, char occupation[]) {
    struct Alumni *newnode = (struct Alumni*)malloc(sizeof(struct Alumni));
    newnode->alumniID = id;
    strcpy(newnode->name, name);
    strcpy(newnode->department, dept);
    newnode->yearOfGrad = year;
    strcpy(newnode->occupation, occupation);
    newnode->next = head;
    head = newnode;
    printf("\nAlumni record inserted successfully!\n");
}

void searchByID(int id) {
    struct Alumni *temp = head;
    while (temp != NULL) {
        if (temp->alumniID == id) {
            printf("\nAlumni Found: %d | %s | %s | %d | %s\n",
            temp->alumniID, temp->name, temp->department,
            temp->yearOfGrad, temp->occupation);
            return;
        }
        temp = temp->next;
    }
    printf("\nAlumni not found!\n");
}

void deleteAlumni(int id) {
    struct Alumni *temp = head, *prev = NULL;
    while (temp != NULL && temp->alumniID != id) {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL) {
        printf("\nAlumni not found!\n");
        return;
    }
    if (prev == NULL) head = temp->next;
    else prev->next = temp->next;
    free(temp);
    printf("\nAlumni deleted successfully!\n");
}

void displayAll() {
    struct Alumni *temp = head;
    if (temp == NULL) {
        printf("\nNo alumni records.\n");
        return;
    }
    printf("\nAlumni List:\n");
    while (temp != NULL) {
        printf("%d | %s | %s | %d | %s\n",
        temp->alumniID, temp->name, temp->department,
        temp->yearOfGrad, temp->occupation);
        temp = temp->next;
    }
}

int main() {
    int choice, id, year;
    char name[50], dept[30], occupation[50];

    do {
        printf("\n--- Alumni Tracking System ---\n");
        printf("1. Insert Alumni\n");
        printf("2. Search Alumni by ID\n");
        printf("3. Delete Alumni by ID\n");
        printf("4. Display All Alumni\n");
        printf("0. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
        case 1:
            printf("Enter ID: ");
            scanf("%d", &id);
            printf("Enter Name: ");
            scanf(" %s[^\n]", name);
            printf("Enter Department: ");
            scanf("%s", dept);
            printf("Enter Year of Graduation: ");
            scanf("%d", &year);
            printf("Enter Occupation: ");
            scanf(" %s[^\n]", occupation);
            insertAlumni(id, name, dept, year, occupation);
            break;

        case 2:
            printf("Enter ID to search: ");
            scanf("%d", &id);
            searchByID(id);
            break;

        case 3:
            printf("Enter ID to delete: ");
            scanf("%d", &id);
            deleteAlumni(id);
            break;

        case 4:
            displayAll();
            break;

        case 0:
            printf("Exiting...\n");
            break;

        default:
            printf("Invalid choice!\n");
        }
    } while(choice != 0);
    return 0;
}
