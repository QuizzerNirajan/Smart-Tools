#include"header.h"
#include"library.h"
void menu(){
    int menu1choice;
  clrscr();
    get_time();
    printf("\n\n\n\n\t\t\t\t\t ___________________________\n");
    printf("\t\t\t\t\t|\t:::::MAIN MENU::::: |");
    printf("\n\t\t\t\t\t _____________________________\n");
  Sleep(1);
    printf("\t\t\t\t\t|\t1. QUIZ             |\n");
  Sleep(1);
    printf("\t\t\t\t\t|\t2. SECRET NOTES     |\n");
  Sleep(1);
    printf("\t\t\t\t\t|\t3. TIME TOOLS       |\n");
		Sleep(1);
    printf("\t\t\t\t\t|\t4. VISITORS         |\n");
  Sleep(1);
    printf("\t\t\t\t\t|\t5. BMI CALCULATOR   |\n");
  Sleep(1);
    printf("\t\t\t\t\t|\t6. EXIT             |\n");
  Sleep(1);
    printf("\t\t\t\t\t|\t                    |");
  Sleep(1);
    printf("\n\t\t\t\t\t_____________________________\n\n\t\t");
    printf("Choice -> ");
    scanf("%d", &menu1choice);


    switch ( menu1choice )
    {
         case 1:
    	{
        clrscr();
        quiz();
        break;
      }

         case 2:
			{
            clrscr();
        welcome();

        break;

			}
			case 3:
			{
        timeTool();
      }
				break;

			case 4:{
        clrscr();
        show_visitors();
        break;
			}
      case 6:{
        printf("Are you sure? \n");
        exit_c();
        break;

      }
      case 5:{
        system("cls");
        bmi();
      }


		}
}


void stopwatch(){
  int hour, min, sec;
  for(hour=0; hour<24; hour++){
    for(min=0; min<59; min++){
      for(sec=0; sec<59; sec++){
				clrscr();

        printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t %d\t\t: %d\t\t: %d\t\t",hour,min,sec);
        printf("\n");

        Sleep(1000);

      }
    }
  }

}

void clrscr(){
	system("@cls||clear");
}

void timer(){
  int hour, min, sec,i,j,k=0;
  printf("\n\nEnter Hours: \n");
  scanf("%d", &hour );
  printf("Enter Minutes: \n");
  scanf("%d", &min);

  if(hour>0 && min==0)
  {
  for (i=hour-1; i>=0; i--){
  for(j=59;j>0;j--){
      for(sec=59; sec>=0; sec--){
        clrscr();
        printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t %d\t\t: %d\t\t: %d\t\t",i,j,sec);
      Sleep(1);

    }
  }
  }
  }
  else if (hour==0 && min>0)
  {

        for(j=min; j>=0; j--){
          for(sec=5; sec>=0; sec--){
            clrscr();
            printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t %d\t\t: %d\t\t: %d\t\t",j,sec);
          Sleep(1);

        }
      }
    }

  else if(hour>0 && min>0)
  {
    for(i=hour; i>=0; i--){
      if(k>0)

      {
        for(j=59; j>0; j--){
          for (sec=59;sec>=0;sec--){
          clrscr();
          printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t %d\t\t: %d\t\t: %d\t\t",i,j,sec);
        Sleep(1);

        }
      }
    }

      for(j=min; j>=0; j--){
        for (sec=59;sec>=0;sec--)
        {
        clrscr();
        printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t %d\t\t: %d\t\t: %d\t\t",i,j,sec);
      Sleep(1);



  }
    }
        k++;

    }

  }

}

void visitors(){
    FILE *fptr;
    printf("\n\n");
    printf("\t****************************A B O U T************************** \n");
    printf(" \t------------------------------------------------------------------------------------------------------");
    printf("\n \t|This project is collaborative effort of 3 beginners in programming.                                 |");
    printf("\n \t|It is developed as a part of the C assignment that we are entitiled to submit at the end of semester|");
    printf("\n \t|As the name suggests It incorporates some of the smart features of some smart tools                     |");
    printf("\n \t|We believe that the user will like our creation and benefit in some way from this project           |");
    printf("\n \t------------------------------------------------------------------------------------------------------");
    printf("\n\n\n");
    char name[20];
    char surname[30];
    fptr = fopen("visitors.txt", "a");

    if (fptr == NULL)
    {
        printf("File does not exists \n");
        return;
    }
      printf("\n\n\n\t\t\t                   Enter the name: ");
      scanf("%s %s", name, surname);
      fprintf(fptr, "%s %s\n", name, surname);
      fclose(fptr);

}

void show_visitors(){
  FILE *fptr;
  char ch;

  fptr = fopen("visitors.txt", "r");

  while( (ch = getc(fptr))!= EOF)
  printf("%c",ch);

  // closing the file pointer
  fclose(fptr);
  getch();
  system("cls");
  menu();
}

void exit_c(){
  exit(1);
}

void timeTool(){

  int choice2;
  printf("\t\t\t\t\t:::::::::::::::::::: Select One to use::::::::::::::::::::: \n\n1. Stopwatch\t\t\t\t2. Timer " );
  scanf("%d",&choice2);
  switch (choice2) {
    case 1:stopwatch();
      break;

    case 2: timer();
      break;

    default: {
      printf("something wrong\n");
    }
  }
}

void welcome(){

  char choice;
  printf("\t\t\tSECRET NOTES\n");
  printf("\n\n");
  printf("User Login");
  printf("\n\n");
  printf("A.Sign In:\n");
  printf("B.Sign Up:\n");
  printf("C.Return to Main screen\n");
  printf("D.Exit\n");
  printf("\nEnter the index of your access type(A/B/C/D) : ");
  scanf("%c",&choice);
  decision(choice);
}

//decision() function definition
void decision(char choice){
  switch(toupper(choice)){
    case 'A':
    signIn();//signIn() function declaration
    break;
    case 'B':
    system("cls");
    signUp(); //signUp() function declaration
    break;
    case 'C':
    menu();
    break;
    case 'D':
    exit(1);
    break;
    default:
    system("cls");
    welcome(); //Welcome() function decaration to prompt to the welcome screen
    }
  }//singUp() function definition

void signUp(){

  char Uname[30],password[30];
  FILE *fptr;
  printf("Username :");
  scanf("%s",Uname);//Username input
  printf("Password:");
  scanf("%s",password);//Password input
  fptr = fopen("List.txt", "a+");

  fprintf(fptr,"\n%s %s", Uname, password);//Writing the details in a file

   fclose(fptr);
   getch();
   welcome();
 }
 //signIn() function definition

void signIn(){
  list *l1; //structure pointer variable(array) declaration
  char Uname1[30],p1[30];char c;int n=0,i=0,count=0;
  printf("Username : ");
  scanf ("%s",Uname1);
  printf("Password : ");
  scanf ("%s",p1);
  FILE * fp;
  fp=fopen("List.txt","r");
  c=getc(fp);
  while(c!= EOF)
  {
  if(c=='\n') //Total no of lines count
  n=n+1;
  c=getc(fp);
  }
  fclose(fp); //close the file pointer
  l1=(list*) malloc(n*sizeof(list));//Dynamic memory allocation
  fp=fopen("List.txt","r");
  for(i=0;i<n+1;i++)
  {
  fscanf(fp,"%s %s",&l1[i].Uname,&l1[i].password);
  }
  fclose(fp);

  for(i=0;i<n+1;i++)
  {
  if ((strcmp(Uname1,l1[i].Uname)==0) && (strcmp(p1,l1[i].password)==0))
  count++;
  }
  free(l1);//Delocalize the dynamic memory
   if(count>0)
  {
  printf("Access granted\n"); getch(); Secret();

  }
  else if(count==0)
  {
    printf("Username or password incorrect\n");
    getch();
    system("cls");
    signIn();//Calling the SignIn() function
  }
}
//Home screen of secret notes section
void Secret(){
  int choices5;
  printf(" \t\t\t Secret Notes\t\n");
  printf("\t\t*********************************\t\n");
  printf("1.Create a new note\n");
  printf("2.Display the contents\n");
  printf("3.Edit your note\n");
  printf("4.Delete note\n");
  printf("5.Return to main screen of Secret Notes\n");
  printf("6.Exit\n");
  printf("\n\n\n*Note: Enter Numbers Only    \nChoice : ");
  scanf("%d",&choices5);
  switch(toupper(choices5))
  {
   case 1 : newFile(); //newFile() function calling
   break;
   case 2 : DisplayNote(); //DisplayNote() function Calling
   break;
   case 3 : Edit(); //Edit() function calling
   break;
   case 4 : Delete_File();//Delete_File() function calling
   break;
   case 5 :system("cls") ;welcome();//Return to welcome screen
   break;
   case 6 : exit(1); //Exit the program successfully
   break;
   default:
   printf("Enter a valid choice");//Not a valid choice
  }
}
//Create new fle function
void newFile(){
  char ch,filename1[30],str1[50];int n,i;
  printf("Enter the filename :");
  fflush(stdin);
  gets(filename1);
  printf("Enter number of lines to be written : ");
  scanf("%d",&n);
  FILE *fpt1;
  fpt1=fopen(strcat(filename1,".txt"),"w");
  if(fpt1==NULL)
  {
  printf("File cannot be opened!");
  exit(1);
  }
  printf("Enter the contents of the file\n\n\n");
  for(i=0;i<=n;i++)
  {
    fgets(str1, sizeof str1, stdin);
    fputs(str1, fpt1);
  }
  fclose(fpt1);
  /*-------------- read the file -------------------------------------*/
  system("cls");
    fpt1 = fopen (filename1, "r");
    printf("\n The contents of the file %s is  :\n",filename1);
    ch = fgetc(fpt1);
    while (ch != EOF)
      {
        printf ("%c", ch);
      ch = fgetc(fpt1);
      }
      printf("\n\n");
      fclose (fpt1);
      getch();
system("cls");
      Secret();


}
//Edit the file function
void Edit(void){


    FILE *fileptr1, *fileptr2;
    char filechar[40];
    char c;
    int delete_line, temp = 0;

    printf("Enter file name: ");
    scanf("%s", filechar);
    fileptr1 = fopen(strcat(filechar,".txt"), "r");
    c = getc(fileptr1);
    //print the contents of file .
    while (c != EOF)
    {
        printf("%c", c);
        c = getc(fileptr1);
    }
    printf(" \n Enter line number to be deleted and replaced : ");
    scanf("%d", &delete_line);
    //take fileptr1 to start point.
    rewind(fileptr1);
    //open duplicate.c in write mode
    fileptr2 = fopen("duplicate.c", "w");
    c = getc(fileptr1);
    while (c != EOF)
    {
        if (c == '\n')
        {
            temp++;
        }
        //till the line to be deleted comes,copy the content to other
        if (temp != delete_line)
        {
            putc(c, fileptr2);
        }
        else
        {
            while ((c = getc(fileptr1)) != '\n')
            {
            }
            //read and skip the line ask for new text
            printf("Enter new text\n");
            //flush the input stream
            fflush(stdin);
            putc('\n', fileptr2);
            //put '\n' in new file
            while ((c = getchar()) != '\n')
                putc(c, fileptr2);
            //take the data from user and place it in new file
            fputs("\n", fileptr2);
            temp++;
        }
        //continue this till EOF is encountered
        c = getc(fileptr1);
    }
    fclose(fileptr1);
    fclose(fileptr2);
    remove(filechar);
    rename("duplicate.c",filechar);
    fileptr1 = fopen(filechar, "r");
    //reads the character from file
    c = getc(fileptr1);
    //until last character of file is encountered
    while (c != EOF)
    {
        printf("%c", c);
        //all characters are printed
        c = getc(fileptr1);
    }
    fclose(fileptr1);
    getch();
    system("cls");
    Secret();
}

//Delete_File() function definition
void Delete_File(){
  char filename[30];
  bool r;
  printf("Enter the file name : ");
  scanf("%s",filename);
  r=remove(filename);
  if(r==false)
  printf("File removed successfully\n");
  else
  printf("Unable to delete or file does not exist\n");

  getch();
  system("cls");
  Secret();
}

void show_record(){
  FILE *f;
  char ch;

  f = fopen("score.txt", "r");
  while( (ch = getc(f))!= EOF)

  printf("%c",ch);
  getch();
  fclose(f);
}



 void update(float score, char playername[20]){
   FILE *f;
   f=fopen("score.txt","a+");
   printf("Write a name to make your score secure : \n");
   gets(playername);
   if (f== NULL)
   {
     printf("File cannpt be opened\n");
   }
   fprintf(f,"%s %0.2f\n",playername,score);
   fclose(f);
 }

void quiz(){
      {
      int r,r1,count,i,n;
      float score;
      char playername[20];
      char choice;

      mainhome:

      printf("\t\t::::::::::::::::::::::::::::::::::::::::::::::::::\n");
      printf("\t\t\tC PROGRAM QUIZ GAME\n");

      printf("\n\t\t > Press S to start the game");
      printf("\n\t\t > Press v to view all player data");
      printf("\n\t\t > Press M to return to Main screen");


      choice=toupper(getch());
      if (choice=='V')
    {
    show_record();
    goto mainhome;
    }




     else if (choice=='M')
    {
    menu();
  }


     else if(choice=='S')
     {
       system("cls");

     printf("\n\n\n\n\n\n\n\n\n\n\t\t\tResister your name:");
    gets(playername);
      goto home;

      home:
      system("cls");
      count=0;
      for(i=1;i<=8;i++)
      {
     system("cls");
      r1=i;


      switch(r1)
     {
     case 1:
     printf("What is IOE?\n");
     printf("\n\nA. Institutute Of Engineering\t\tB. Industrial Office of Economics\n\nC. Institutute of Energy\t\tD. International office of electronics\n");

     if (toupper(getch())=='A')
       {
           printf("\n\nCorrect!!!");count++;
           getch();
           break;
    }
     else
            {
                printf("\n\nWrong!!! The correct answer is A. Institutute Of Engineering ");
                getch();
            break;
            }

         case 2:
     printf("\n\n\nWho won the World Cup in 2014?");
     printf("\n\n\nA. Germany \n\nB. France");

     if (toupper(getch())=='A')
       {
         printf("\n\nCorrect!!!");count++;
       getch();
       break;
       }
     else
            {
              printf("\n\nWrong!!! The correct answer is A. Germany");
            getch();
            break;
          }


          case 3:printf("\n\n\nWhat is know as father of computer science?");
          printf("\n\n\nA. Alan Tuning \t\tB. Charles Babbage \nC. John Stafford \t\tD. Adam Gatters");

          if (toupper(getch())=='A')
            {
              printf("\n\nCorrect!!!");count++;
            getch();
            break;
         }
          else
                 {
                   printf("\n\nWrong!!! The correct answer is A. Alan Tuning");
                 getch();
                 break;
               }

         case 4:
         printf("\n\n\nWho inveted Farrari?");
         printf("\n\n\nA. Anjil \t\tB. Nirajan \nC. Kundan \t\tD. None of the above");

         if (toupper(getch())=='A')
           {
             printf("\n\nCorrect!!!");count++;
           getch();
           break;
           }
         else
                {
                  printf("\n\nWrong!!! The correct answer is A. Anjil dai :P ");
                getch();
                break;
              }

          case 5:
              printf("\n\n\nWhat is the color do you get when you mix red and white?");
              printf("\n\n\nA. Red \t\tB. Pink \nC. Orange \t\tD. none of the above ");

              if (toupper(getch())=='B')
                {printf("\n\nCorrect!!!");count++;
                getch();
                break;
                }
              else
                     {printf("\n\nWrong!!! The correct answer is A. Pink");
                     getch();
                     break;
                   }

          case 6:
          printf("\n\n\nWhat is the national sport in Japan?");
          printf("\n\n\nA. Cricket  \t\tB. Table Tenis \nC. Sumo Wrestling \t\tD. Base Ball");

          if (toupper(getch())=='C')
            {
              printf("\n\nCorrect!!!");count++;
            getch();
            break;
            }
          else
                 {
                 printf("\n\nWrong!!! The correct answer is A. Sumo Wrestling");
                 getch();
                 break;
               }

         case 7:
         printf("\n\n\nKim Jong-Un is leader of which country?");
         printf("\n\n\nA. South Korea \t\tB. North Korea \nC. China \t\tD. Japan");

         if (toupper(getch())=='B')
           {
           printf("\n\nCorrect!!!");
           count++;
           getch();
           break;
           }
           else
          {
          printf("\n\nWrong!!! The correct answer is A. North Korea");
          getch();
          break;
          goto score;
          }
        }

    }
    score:

    score=(float)count*1000;
    if(score>0.00 && score<7000)
      {
      printf("\n\n\t\t CONGRATULATION ");
        printf("\n\t  %s won Rs.%.2f",playername,score);
        goto go;
      }


    else
    {
    printf("\n\n\t******** SORRY YOU DIDN'T WIN ANY CASH ********");
       printf("\n\t\t Thanks for your participation");
       printf("\n\t\t TRY AGAIN");
       goto go;}

    go:
    puts("\n\n Press Y if you want to play next game");
    puts(" Press any key if you want to go main menu");
    if (toupper(getch())=='Y')
    menu();

    else
     {
     update(score, playername);
     goto mainhome;
       }
     }
     else
     {
       printf("Enter a valid choice \n");
      goto mainhome;
     }
    }
}

void DisplayNote() //DisplayNote() function definition
{
  FILE *fptr;char ch,fname[30];
  scanf("%s",fname);
  fptr = fopen(strcat(fname,".txt"),"r");
  if(fptr==NULL)
  {
    printf("Filename error or file cannot be opened");
    DisplayNote();
  }
  system("cls");
  printf("------------------C O N T E N T S------------------\n\n");
  ch=fgetc(fptr);
  while(ch != EOF)
  {
    printf("%c",ch);
    ch = fgetc(fptr);
  }
  printf("\n\n");
  fclose (fptr);
  getch();
  system("cls");
  Secret();

}

void get_time(){
  SYSTEMTIME str_t;
	GetSystemTime(&str_t);
  printf("%700c",' ');
	printf("%d/%d/%d",
	str_t.wYear,str_t.wMonth,str_t.wDay
	);
}

void bmi(){
  float weight,height,bmi;
  printf("\nEnter weight in kgs:");
  scanf("%f",&weight);
  printf("Enter Height in meters: ");
  scanf("%f",&height );
  bmi=weight/(height*height);
  printf("bmi: %f",bmi);
  bmi<18.5?printf("\t\tUnderweight"):
  (bmi<25)?printf("\t\tNormal weight"):
  (bmi<30)?printf("\t\tOverweight"):
  printf("Obesity");
  getch();
  system("cls");
  menu();
}
