#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
void show_record();
void help();
void update(float , char []);
void menu();
void timer();
void clrscr();
void pass();
void stopwatch();
void quiz();
void visitors();
void show_visitors();
void exit_c();
void timeTool();
void get_time();
void  signUp();
void  signIn();
void  decision(char);
void  welcome();
void  Secret();
void  newFile();
void  Edit();
void  Delete_File();
void DisplayNote();
void bmi();
//Structure with username and password as its members
typedef struct{
char Uname[30],password[30];
}list;


#endif // HEADER_H_INCLUDED
