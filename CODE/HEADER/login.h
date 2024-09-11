#ifndef _LOGIN_H_
#define _LOGIN_H_

void welcome_screen();
void login_screen();
int login(int *page,USER *u);
void register_screen();
void forget_screen();
void register_page(int *page, USER *u) ;
void forget_page(int *page,USER *u);

#endif