#include <stdio.h>
#include <stdlib.h>
#include "address_book.h"

int main()
{
    int ret;
    while(1)
    {
        char file[20];
        printf("Enter the File name: ");
        scanf("%s", file);
        FILE *fcontact_detail = fopen(file, "w+");
        ret = read_option();

        switch(ret)
        {
            case 1:
            {
                add_contact(fcontact_detail);
                printf("create Success\n");
                break;
            }
            case 2:
            {
                printf("search Success\n");
                break;
            }
            case 3:
            {
                printf("edit Success\n");
                break;
            }
            case 4:
            {
                printf("Delete Success\n");
                break;
            }
            case 5:
            {
                printf("list Success\n");
                break;
            }
            case 6:
            {
                printf("save Success\n");
                break;
            }
            case 7:
            {
                exit(0);
            }
            default:
            {
                printf("INFO: You entered invalid option\nPealse enter valid oprion\n");
            }
        }
    }
    return 0;
}