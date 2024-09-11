#ifndef _DATABASE_H_
#define _DATABASE_H_

typedef struct
{
    char username[12];
    char password[20];
    char phone[12];
    int ticket[6][6];
    int programs[5];
    int usernum;
} USER;

#endif