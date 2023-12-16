#include <stdio.h>
#include "address_book.h"

int read_option()
{
    printf("Features: \n");
    printf("1. Add Contact\n");
    printf("2. Search Contact\n");
    printf("3. Edit Contact\n");
    printf("4. Delete Contact\n");
    printf("5. List Contacts\n");
    printf("6. Save\n");
    printf("7. Exit\n\n");
    int option;
    printf("Please select an option: ");
    scanf("%d", &option);
    return option;
}

Status add_contact(FILE *fcontact)
{
    ContactDetail new;
    new.name[0] = '\n';
    new.phone_number[0] = '\n';
    new.email_id[0] = '\n';
    new.location[0] = '\n';

    while (1)
    {
        printf("Select option: \n");
        printf("1. Name\n2. Phone Number\n3. Email Id\n4. Location\n5. Save\n");
        int option;
        printf("Choose which detail have to Add: ");
        scanf("%d", &option);

        switch (option)
        {
            case 1:
            {
                printf("Enter the name: ");
                scanf("%s", new.name);
                break;
            }
            case 2:
            {
                printf("Enter Phone number: ");
                scanf("%s", new.phone_number);
                break;
            }
            case 3:
            {
                printf("Enter email id: ");
                scanf("%s", new.email_id);
                break;
            }
            case 4:
            {
                printf("Enter location: ");
                scanf("%s", new.location);
                break;
            }
            case 5:
            {
                fprintf(fcontact, "%s", new.name);
                fprintf(fcontact, "%c", ',');
                printf("hii\n");
                break;
            }
            
        }
    }
}