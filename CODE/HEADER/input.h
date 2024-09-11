#ifndef _INPUT_H_
#define _INPUT_H_

int input_admin(char *id, int x, int y, int charnum, int color, int flag);
int cmp_login(USER *uu);
int judge_phone(char *PH);
int changepass(char user[20], char key[20], char key1[20], char key2[20], int flag);
int cmp_phone(char *user,char *phone,char *pass);
int judge_sameuser(char *new_user);
int judge_key(char *P);

#endif