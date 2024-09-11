#ifndef _NOTICE_H_
#define _NOTICE_H_

void notice_draw();
void notice(int *, USER *);
void show_announcement(USER *user);
void visitor_information();
void time_count(int , int );
void repaint_background();
void booked(USER *user, int program);
void booking_failed();
void booking_success(USER*, int);

#endif