#include <stdio.h>

#ifndef ADDRESS_BOOK_H

#define ADDRESS_BOOK_H
typedef struct  address_book
{
    char name[20];
    char phone_number[11];
    char email_id[40];
    char location[20];
}ContactDetail;
typedef struct
{
    FILE *faddress_book;

}AddressBook;

typedef enum name
{
    e_success,
    e_failure,
    e_empty
}Status;

/* Function declaration */
int read_option();
Status add_contact(FILE *fcontact);
#endif