#include<conio.h>
#include<iostream.h>
#include<stdio.h>
#include<stdlib.h>
#include<dos.h>
#include<process.h>
#define X_pos 30
#include<fstream.h>
#include<string.h>


static int globalSelect=0;
static int Adm_No=1000;
void doubleborder(int c1,int c2);
void singleborder(int c);
//*****************************************************************
//########################## class defination ######################
//**************************************************************

class student
{
  private:
    int  stu_Adm_No;
    char stu_Name[40];
    char stu_Father_Name[40];
    char stu_Mother_Name[40];
    char stu_Address[50];
    char stu_Gender[10];
    char stu_Blood_Group[10];
    char stu_Mobile_No[15];
    char stu_DOB[15];
    int  stu_Class;
    char stu_Section;
    int  stu_Roll_No;
 public:
    int ret_Stu_Adm_No()
    {
     return(stu_Adm_No);
    }
    char *ret_Stu_Name()
    {
     return(stu_Name);
    }
    student()
    {

    }

    student(int tempAdm)
    {
       stu_Adm_No=tempAdm;
    }

    void get_Student_Data();
    void show_Student_Data(void);



    int compareFun(const char name[],const int adm)
    {
       if(adm==stu_Adm_No)
       {
	  if((stricmp(stu_Name,name))==0)
	  {
		return(0);
	  }
	  else
		return(1);
       }
       else
       {
	  return(1);
       }
    }
};

void student::get_Student_Data()
{
   clrscr();
   gotoxy(25,5);

   cout<<"FILL ADDMISSION FORM [ "<<stu_Adm_No<<" ]";

   gotoxy(17,7);
   cout<<"NAME          :";

   gotoxy(17,8);
   cout<<"FATHER's NAME :";
   gotoxy(17,9);
   cout<<"MOTHER's NAME :";

   gotoxy(17,10);
   cout<<"ADDRESS       :";

   gotoxy(17,11);
   cout<<"PHONE NO.     :";

   gotoxy(17,12);
   cout<<"GENDER [M/F]  :";

   gotoxy(17,13);
   cout<<"BLOOD GROUP   :";

   gotoxy(17,14);
   cout<<"D.O.B         :";

   gotoxy(17,15);
   cout<<"CLASS         :";

   gotoxy(17,16);
   cout<<"SECTION       :";

   gotoxy(17,17);
   cout<<"ROLL No.      :";

   fflush(stdin);
   gotoxy(33,7);
   gets(stu_Name);

   fflush(stdin);
   gotoxy(33,8);
   gets(stu_Father_Name);

   fflush(stdin);
   gotoxy(33,9);
   gets(stu_Mother_Name);

   fflush(stdin);
   gotoxy(33,10);
   gets(stu_Address);

   fflush(stdin);
   gotoxy(33,11);
   gets(stu_Mobile_No);

   fflush(stdin);
   gotoxy(33,12);
   gets(stu_Gender);

   fflush(stdin);
   gotoxy(33,13);
   gets(stu_Blood_Group);

   fflush(stdin);
   gotoxy(33,14);
   gets(stu_DOB);

   fflush(stdin);
   fflush(stdin);
   gotoxy(33,15);
   cin>>stu_Class;

   fflush(stdin);
   gotoxy(33,16);
   fflush(stdin);
   cin>>stu_Section;

   gotoxy(33,17);
   fflush(stdin);
   cin>>stu_Roll_No;

   fflush(stdin);
   fflush(stdin);
}

void student::show_Student_Data(void)
{

   gotoxy(20,5);
   cout<<"ADDMISSION NO :"<<stu_Adm_No;


   gotoxy(20,7);
   cout<<"NAME          :"<<stu_Name;

   gotoxy(20,8);
   cout<<"FATHER's NAME :"<<stu_Father_Name;

   gotoxy(20,9);
   cout<<"MOTHER's NAME :"<<stu_Mother_Name;

   gotoxy(20,10);
   cout<<"ADDRESS       :"<<stu_Address;

   gotoxy(20,11);
   cout<<"PHONE NO.     :"<<stu_Mobile_No;

   gotoxy(20,12);
   cout<<"GENDER [M/F]  :"<<stu_Gender;

   gotoxy(20,13);
   cout<<"BLOOD GROUP   :"<<stu_Blood_Group;

   gotoxy(20,14);
   cout<<"D.O.B         :"<<stu_DOB;

   gotoxy(20,15);
   cout<<"CLASS         :"<<stu_Class;

   gotoxy(20,16);
   cout<<"SECTION       :"<<stu_Section;

   gotoxy(20,17);
   cout<<"ROLL No.      :"<<stu_Roll_No;
}

class scienceStudent:public student
{
  private:

     char ENG[5];
     char PHE[8];
     char PHY[5];
     char CHE[5];
     char OPTION1[15];
     char OPTION2[15];

  public:
    scienceStudent():student()
    {
      strcpy(ENG,"ENG");
      strcpy(PHE,"PHE");
      strcpy(PHY,"PHY");
      strcpy(CHE,"CHE");
    }
    scienceStudent(int temAdm):student(temAdm)
    {
       strcpy(ENG,"ENG");
       strcpy(PHE,"PHE");
       strcpy(PHY,"PHY");
       strcpy(CHE,"CHE");
    }

    void get_ScienceStudent()
   {
     get_Student_Data();

     clrscr();

     gotoxy(25,10);
     cout<<"CHOOSE TWO SUBJECTS";

     gotoxy(22,11);
     cout<<"---------------------";

     gotoxy(22,13);
     cout<<"1.MATH/BIO [TYPE] :";

     gotoxy(22,14);
     cout<<"2.C++/ECON [TYPE] :";

     gotoxy(42,13);
     fflush(stdin);
     cin>>OPTION1;

     gotoxy(42,14);
     fflush(stdin);
     cin>>OPTION2;

     clrscr();
     show_ScienceStudent();
   }

   void show_ScienceStudent()
   {
     clrscr();

     gotoxy(35,10);
     cout<<"SUBJECTS ARE";

     gotoxy(33,11);
     cout<<"---------------";

     gotoxy(35,13);
     cout<<ENG;

     gotoxy(35,14);
     cout<<PHE;

     gotoxy(35,15);
     cout<<PHY;

     gotoxy(35,16);
     cout<<CHE;

     gotoxy(43,14);
     cout<<OPTION1;

     gotoxy(43,15);
     cout<<OPTION2;
  }

  void showSubject()
  {
     gotoxy(20,8);
     cout<<ENG<<" :";

     gotoxy(20,12);
     cout<<PHE<<" :";

     gotoxy(20,16);
     cout<<PHY<<" :";

     gotoxy(45,8);
     cout<<CHE<<"  :";

     gotoxy(45,12);
     cout<<OPTION1<<" :";

     gotoxy(45,16);
     cout<<OPTION2<<"  :";
  }
    void graphicResult(void)
    {
	 gotoxy(10,5);
     cout<<ENG;

     gotoxy(10,7);
     cout<<PHE;

     gotoxy(10,9);
     cout<<PHY;

     gotoxy(10,11);
     cout<<CHE;

     gotoxy(10,13);
     cout<<OPTION1;

     gotoxy(10,15);
     cout<<OPTION2;
    }
};

class commerceStudent:public student
{
   private:

      char ENG[5];
      char PHE[5];
      char BST[8];
      char ACC[5];
      char ECONO[5];
      char OPTION1[8];

   public:
      commerceStudent():student()
      {
	 strcpy(ENG,"ENG");
	 strcpy(PHE,"PHE");
	 strcpy(BST,"BST");
	 strcpy(ACC,"ACC");
	 strcpy(ECONO,"ECO");
      }

      commerceStudent(int temAdm):student(temAdm)
      {

	strcpy(ENG,"ENG");
	strcpy(PHE,"PHE");
	strcpy(BST,"BST");
	strcpy(ACC,"ACC");
	strcpy(ECONO,"ECO");
      }

     void get_CommerceStudent()
     {
	get_Student_Data();

	clrscr();

	gotoxy(25,10);
	cout<<"CHOOSE ONE SUBJECT";

	gotoxy(22,11);
	cout<<"---------------------";

	gotoxy(22,13);
	cout<<"1.MATH/JAVA [TYPE] :";

	gotoxy(43,13);
	fflush(stdin);
	cin>>OPTION1;

	clrscr();
	show_CommerceStudent();
  }

  void show_CommerceStudent()
  {
     clrscr();

     gotoxy(35,10);
     cout<<"SUBJECTS ARE";

     gotoxy(33,11);
     cout<<"---------------";

     gotoxy(35,13);
     cout<<ENG;

     gotoxy(35,14);
     cout<<PHE;

     gotoxy(35,15);
     cout<<BST;

     gotoxy(35,16);
     cout<<ACC;

     gotoxy(43,14);
     cout<<ECONO;

     gotoxy(43,15);
     cout<<OPTION1;
  }
  void showSubject()
  {
     gotoxy(20,8);
     cout<<ENG<<" :";

     gotoxy(20,12);
     cout<<PHE<<" :";

     gotoxy(20,16);
     cout<<BST<<" :";

     gotoxy(45,8);
     cout<<ACC<<" :";

     gotoxy(45,12);
     cout<<ECONO<<" :";

     gotoxy(45,16);
     cout<<OPTION1<<" :";
  }

    void graphicResult(void)
    {
     gotoxy(10,5);
     cout<<ENG;

     gotoxy(10,7);
     cout<<PHE;

     gotoxy(10,9);
     cout<<BST;

     gotoxy(10,11);
     cout<<ACC;

     gotoxy(10,13);
     cout<<ECONO;

     gotoxy(10,15);
     cout<<OPTION1;

    }

};


class juniorStudent:public student
{
  private:

     char ENG[5];
     char HIN[5];
     char MATH[8];
     char SCI[5];
     char SST[5];
     char COMP[8];

  public:
     juniorStudent():student()
     {
	strcpy(ENG,"ENG");
	strcpy(HIN,"HIN");
	strcpy(SCI,"SCI");
	strcpy(MATH,"MATH");
	strcpy(SST,"SST");
	strcpy(COMP,"COMP");
     }
    juniorStudent(int temAdm):student(temAdm)
    {
      student(temAdm);
      strcpy(ENG,"ENG");
      strcpy(HIN,"HIN");
      strcpy(SCI,"SCI");
      strcpy(MATH,"MATH");
      strcpy(SST,"SST");
      strcpy(COMP,"COMP");
    }
   void show_juniorStudent()
   {
     clrscr();

     gotoxy(35,10);
     cout<<"SUBJECTS ARE";

     gotoxy(33,11);
     cout<<"---------------";

     gotoxy(35,13);
     cout<<ENG;

     gotoxy(35,14);
     cout<<HIN;

     gotoxy(35,15);
     cout<<MATH;

     gotoxy(35,16);
     cout<<SCI;

     gotoxy(43,14);
     cout<<SST;

     gotoxy(43,15);
     cout<<COMP;
   }
   void showSubject()
   {
     gotoxy(20,8);
     cout<<ENG<<" :";

     gotoxy(20,12);
     cout<<HIN<<" :";

     gotoxy(20,16);
     cout<<MATH<<" :";

     gotoxy(45,8);
     cout<<SCI<<" :";

     gotoxy(45,12);
     cout<<SST<<" :";

     gotoxy(45,16);
     cout<<COMP<<" :";
  }
    void graphicResult(void)
    {
	  gotoxy(10,5);
     cout<<ENG;

     gotoxy(10,7);
     cout<<HIN;

     gotoxy(10,9);
     cout<<MATH;

     gotoxy(10,11);
     cout<<SCI;

     gotoxy(10,13);
     cout<<SST;

     gotoxy(10,15);
     cout<<COMP;
    }
};

class studentMarks
{
  private:

    char stu_Marks_With_Name[40];
    int  stu_Marks_With_stuAdm_No;
    double subjectMarks1;
    double subjectMarks2;
    double subjectMarks3;
    double subjectMarks4;
    double subjectMarks5;
    double subjectMarks6;

   public:
	   studentMarks()
	   {
	      subjectMarks1=00;
	      subjectMarks2=00;
	      subjectMarks3=00;
	      subjectMarks4=00;
	      subjectMarks5=00;
	      subjectMarks6=00;
	   }

	   studentMarks(const char name1[],const int adm1)
	   {
	      strcpy(stu_Marks_With_Name,name1);
	      stu_Marks_With_stuAdm_No=adm1;
	      subjectMarks1=00;
	      subjectMarks2=00;
	      subjectMarks3=00;
	      subjectMarks4=00;
	      subjectMarks5=00;
	      subjectMarks6=00;
	   }

	   void stu_Get_Marks()
	   {
	      gotoxy(15,4);
	      cout<<"NAME : "<<stu_Marks_With_Name;

	      gotoxy(40,4);
	      cout<<"ADMISSION NUMBER : "<< stu_Marks_With_stuAdm_No;

	      gotoxy(27,8);
	      fflush(stdin);
	      cin>>subjectMarks1;

	      gotoxy(27,12);
	      fflush(stdin);
	      cin>>subjectMarks2;

	      fflush(stdin);
	      gotoxy(27,16);
	      fflush(stdin);
	      cin>>subjectMarks3;

	      fflush(stdin);
	      gotoxy(52,8);
	      fflush(stdin);
	      cin>>subjectMarks4;

	      fflush(stdin);
	      gotoxy(52,12);
	      fflush(stdin);
	      cin>>subjectMarks5;

	      fflush(stdin);
	      gotoxy(52,16);
	      fflush(stdin);
	      cin>>subjectMarks6;
	    }

	 void stu_Show_Marks()
	 {
	   gotoxy(15,4);
	   cout<<"NAME : "<<stu_Marks_With_Name;

	   gotoxy(40,4);
	   cout<<"ADMISSION NUMBER : "<< stu_Marks_With_stuAdm_No;

	   gotoxy(26,8);
	   cout<<subjectMarks1;

	   gotoxy(26,12);
	   cout<<subjectMarks2;

	   gotoxy(26,16);
	   cout<<subjectMarks3;

	   gotoxy(51,8);
	   cout<<subjectMarks4;

	   gotoxy(51,12);
	   cout<<subjectMarks5;

	   gotoxy(51,16);
	   cout<<subjectMarks6;

	   double totalMarks=subjectMarks1+subjectMarks2+subjectMarks3+subjectMarks4+subjectMarks5+subjectMarks6;

	   gotoxy(30,20);
	   cout<<"TOTAL MARKS : "<<totalMarks;
	 }

	int compareFun(const char name1[],const int adm1)
	{
	   if(adm1== stu_Marks_With_stuAdm_No)
	   {
	      if((stricmp(stu_Marks_With_Name,name1))==0)
	      {
		return(0);
	      }
	      else
	      return(1);
	   }
	   else
	   {
	   return(1);
	   }
      }

    void studentMarks::graphicResult(void);
};


void studentMarks::graphicResult(void)
{
       gotoxy(40,3);
       cout<<"RESULT ";
	gotoxy(18,5);
	cout<<":";
       gotoxy(20,5);
       textcolor(BLUE);
      for(int i=0;i<subjectMarks1/2;i++)
      cprintf("л");
      cout<<"\t"<<subjectMarks1;

/****************************************************************/
	gotoxy(18,7);
	cout<<":";

     gotoxy(20,7);
     textcolor(12);
     for(i=0;i<subjectMarks2/2;i++)
     cprintf("л");
     cout<<"\t"<<subjectMarks2;


/****************************************************************/

	gotoxy(18,9);
	cout<<":";

    gotoxy(20,9);
    textcolor(RED);
    for(i=0;i<subjectMarks3/2;i++)
    cprintf("л");
    cout<<"\t"<<subjectMarks3;

/****************************************************************/

	gotoxy(18,11);
	cout<<":";

    gotoxy(20,11);
    textcolor(YELLOW);
    for(i=0;i<subjectMarks4/2;i++)
    cprintf("л");
    cout<<"\t"<<subjectMarks4;

/****************************************************************/

	gotoxy(18,13);
	cout<<":";

 gotoxy(20,13);
 textcolor(CYAN);
 for(i=0;i<subjectMarks5/2;i++)
 cprintf("л");
 cout<<"\t"<<subjectMarks5;

 gotoxy(18,15);
 cout<<":";

 gotoxy(20,15);
 textcolor(11);
 for(i=0;i<subjectMarks6/2;i++)
 cprintf("л");
 cout<<"\t"<<subjectMarks6;

 gotoxy(4,17);
 double avg=(subjectMarks1+subjectMarks2+subjectMarks3+subjectMarks4+subjectMarks5+subjectMarks6)/6;
 gotoxy(8,19);cout<<"Percentage:"<<avg<<"%";
 gotoxy(38,18);
 if(subjectMarks1<32||subjectMarks2<32||subjectMarks3<32||subjectMarks4<32||subjectMarks5<32||subjectMarks6<32)
   { textcolor(RED);
     cprintf("FAIL");
   }
 else
 { textcolor(YELLOW);
   cprintf("PASS");
 }
 }

//######## Global object
scienceStudent globalScienceObject;
juniorStudent globalJuniorObject ;
commerceStudent globalCommerceObject;

//***********************************************************************
//###################### All Function Declaration ##########################
//*****************************************************************************
void graphicSubjectMenu(const int select );
void resultMenu(void);
int selectUserMenu(void);
int scrollUpDown(const int );
int scrollLeftRight(const int);
void studentInterface(void);
void administratorInterface(void);
void administrator(void);
int passWord();
void LOAD(void);
void setting(void);
void newRecord(void);
void modifyRecord(void);
void searchRecord(void);
void deleteRecord(void);
void newResult(void);
void modifyResult(void);
void searchResult(void);
void deleteResult(void);
int conformRecord(const char [],const int) ;
void allSubjectMenu(const int  );
int checkResultExist(const char name1[],const int adm1);
void personalStudentDetails(const char name1[],const int adm1);
void studentResultDeclare(const char name1[],const int adm1);
int conformResultDeclareDate(void);
void createResultDeclareDate(void);
studentMarks conformCheckResult(const char name[],const int adm);
void deleteWithRecord(char name1[],int adm1);
void all_List();
//******************* End Function Declaration **************************
//################## Main Function ######################


void main()
{
textbackground(BLACK);
textcolor(GREEN);
clrscr();
LOAD();

  back:

 int returnchoice=selectUserMenu();
  clrscr();

  switch(returnchoice)
  {
    case 10:studentInterface();goto back;
    case 11:administratorInterface();goto back;
    case 12:textbackground(BLACK);clrscr();exit(0);
  }

/*
all_List();
getch();
  */
}

//******************************** End Main Function ************************
//******************************** All List Function ************************
void all_List()
{
    clrscr();
    textcolor(GREEN);
    int total =0,i=1;
    ifstream infile1;
    infile1.open("ScienceStudent.bin",ios::binary);
    gotoxy(2,1);cout<<"SCIENCE";
    gotoxy(28,1);cout<<"COMMERCE";
    gotoxy(54,1);cout<<"JUNIORS";

      if(infile1)
      {
	scienceStudent allstu1;

	while( infile1.read((char*)&allstu1,sizeof(allstu1))  )
       {
		 total++;
	    gotoxy(1,2+i);
	    cout<<"Adm No.:"<<allstu1.ret_Stu_Adm_No();gotoxy(24,2+i);cout<<"|";
	    i++;
	    gotoxy(1,2+i);
	    cout<<"Name:"<<allstu1.ret_Stu_Name();gotoxy(24,2+i);cout<<"|";
	    i++;
	    gotoxy(1,2+i);cout<<"-----------------------+";
	    i++;
       }
     }
	 infile1.close();
     infile1.open("CommerceStudent.bin",ios::binary);
     if(infile1)
     {

	 commerceStudent allstu2;

	i=1;
	 while( infile1.read((char*)&allstu2,sizeof(allstu2))  )
	 {
	      total++;
	    gotoxy(26,2+i);
	    cout<<"Adm No.:"<<allstu2.ret_Stu_Adm_No();gotoxy(50,2+i);cout<<"|";
	    i++;
	    gotoxy(26,2+i);
	    cout<<"Name:"<<allstu2.ret_Stu_Name();gotoxy(50,2+i);cout<<"|";
	    i++;
	    gotoxy(24,2+i);cout<<"+-------------------------+";
	    i++;
	 }
      }
	infile1.close();

       infile1.open("JuniorStudent.bin",ios::binary);

       if(infile1)
       {
	 juniorStudent	 allstu3;
	 i=1;
	 while(infile1.read((char*)&allstu3,sizeof(allstu3))  )
	 {
	    total++;
	    gotoxy(50,2+i);cout<<"|";
	    gotoxy(52,2+i);
	    cout<<"Adm No.:"<<allstu3.ret_Stu_Adm_No();
	    i++;
	    gotoxy(50,2+i);cout<<"|";
	    gotoxy(52,2+i);
	    cout<<"Name:"<<allstu3.ret_Stu_Name();
	    i++;
	    gotoxy(50,2+i);cout<<"+------------------------";
	    i++;
	 }
       }
       infile1.close();

       gotoxy(70,23);cout<<"Total:"<<total;
       getch();
 if(!total)
  {
    textcolor(RED+BLINK);
    clrscr();
    gotoxy(33,13);
    cout<<"EMPTY RECORDS";
     remove("StuAdmNo.bin");
    getch();
    textcolor(GREEN);
    clrscr();
  }



}
//################################ All Function Defination ########################

int selectUserMenu(void)
{
   clrscr();
   doubleborder(RED,2);
   textcolor(GREEN);
   gotoxy(25,5);
   cout<<"      ________ SCOOM________";

   gotoxy(23,6);
   cout<<"---------------------------------";

   gotoxy(33,8);
   cout<<"SELECT USER()";

   gotoxy(30,9);
   cout<<"";

   gotoxy(X_pos,10);
   cout<<"1.STUDENT";

   gotoxy(X_pos,11);
   cout<<"2.ADMINISTRATOR";

   gotoxy(X_pos,12);
   cout<<"3.EXIT";

   gotoxy(30,13);
   cout<<"";
   int d,m,y;
   date D;
	  getdate(&D);
	  d=D.da_day,m=D.da_mon,y=D.da_year;
   gotoxy(60,6);
   cout<<"DATE: "<<d<<":"<<m<<":"<<y;

   int returnchoice=scrollUpDown(3);
    sound(1200);
     delay(160);
    nosound();
   return(returnchoice);
}

void studentInterface(void)
{
  clrscr();
  doubleborder(RED,2);
  if(!conformResultDeclareDate())
    {
    char studentname[40];
    int student_adm_no;

      gotoxy(30,13);
      cout<<"NAME          :";
      gotoxy(30,14);
      cout<<"ADMISSION No. :";
      gotoxy(46,13);
      fflush(stdin);
      gets(studentname);
      gotoxy(46,14);
      fflush(stdin);
      cin>>student_adm_no;

     if(!checkResultExist(studentname,student_adm_no))
     {
       conformRecord(studentname,student_adm_no);
       clrscr();
       personalStudentDetails(studentname,student_adm_no);
      back:
      textcolor(GREEN);
      back1:
      gotoxy(20,23);
      cprintf("<");
      gotoxy(38,23);
     cprintf("BACK");
    gotoxy(60,23);
    cprintf(">");
    fflush(stdin);
   int returnchoice=00;
   fflush(stdin);
    returnchoice=scrollLeftRight(2);
   switch(returnchoice)
   {
     case 0:clrscr(); personalStudentDetails(studentname,student_adm_no);fflush(stdin); fflush(stdin); goto back;
     case 1:
	    char ch='\0';
		 fflush(stdin);
		 ch=getch();
		if(ch==13)
		 return;
		 else
		  goto back1;
     case 2:clrscr();graphicSubjectMenu(globalSelect);studentResultDeclare(studentname,student_adm_no);fflush(stdin);fflush(stdin); goto back;

   }
   }
   else{textcolor(RED+BLINK);
    clrscr();
    gotoxy(30,13);
    cout<<"RESULT NOT AVAILABLE";
    getch();
    textcolor(GREEN);
    clrscr();
    }
   }
   else
   {
       ifstream infile("R_Date.bin",ios::ate,ios::binary);
       infile.seekg(0,ios::beg);
       if(!infile)
       { infile.close();
	 return;
       }
	int date=00,month=00,year=00;
	infile>>date>>month>>year;

	clrscr();
       gotoxy(23,13);
       cout<<"RESULT ANNOUNCEMENT DATE:"<<date<<"/"<<month<<"/"<<year;
       getch();
       infile.close();
      clrscr();
   }
}


void administratorInterface(void)
{
  clrscr();
  doubleborder(RED,2);
    {
      if(!passWord())
       {
	sound(1200);
	delay(160);
	nosound();
       administrator();
       }
      else
      {

	textcolor(RED+128);
	clrscr();

	gotoxy(30,13);
	cout<<"INVALID PASSWORD";
	getch();

	textcolor(GREEN);
	return;
      }
    }

}

int passWord()
{
   clrscr();
   doubleborder(RED,2);
   ifstream infile("PassWord.bin",ios::in,ios::binary);

   if(!infile)
   {

      char file_password[30];
      gotoxy(25,13);
      ofstream outfile("PassWord.bin",ios::out,ios::binary);
      back:
      gotoxy(20,13);
      cout<<"ENTER NEW PASSWORD:";
      fflush(stdin);
      gets(file_password);
      if(strlen(file_password)>=8)
      {
      outfile.write((char*)&file_password,sizeof(file_password));
      outfile.close();
      infile.close();
      clrscr();
      gotoxy(27,13);
      cout<<"RESTART THE PROGRAM";
      getch();
      exit(1);
      }
      else
      {
	clrscr();
	gotoxy(20,13);
	cout<<"PASSWORD IS TOO SHORT(MIN.8 CHAR)";
	getch();
	clrscr();
	goto back;
      }
    }

  int i=0;
  char file_password[30],check_password[30];

   infile.seekg(0,ios::beg);
   infile.read((char*)file_password,sizeof(file_password));
   infile.close();
   gotoxy(30,13);
   cout<<"ENTER PASSWORD:";

   char key='\0';
   while(key!=13)
  {
    fflush(stdin);
     key=getch();

    if(key==8)
    {
      if(i>0)
      {
	cout<<"\b \b";
	--i;
      }
    }
    else
    {
      if(!(key==13))
      {
	cout<<"*";

	check_password[i]=key;
	i++;
      }
     }
   }

   check_password[i]='\0';

   if(strcmp(file_password,check_password)==0)
   {
     return 0 ;
   }
   else
   {
     return 1;
   }
}


int scrollUpDown(const int Y_pos)
{
  int i=0;
  int y=10;
  gotoxy(X_pos,y);

  char key='\0';

   do
   {
   fflush(stdin);
   key=getch();
   switch(key)
   {
     case 72:sound(600);
	     delay(150);
	     nosound();
	     if(i>0)
	       --i;
	     else
	       i=Y_pos-1;
	     gotoxy(X_pos,y=i+10);
	     break;

     case 80:sound(600);

	     delay(150);
	     nosound();
	     if(i<Y_pos-1)
	       i++;
	     else
	       i=0;
	     gotoxy(X_pos,y=i+10);

	     break;
   }
   }while(key!=13);
  return(y);
}


int scrollLeftRight(const int x_pos)
{

  static int move=0;
 static  int i=0;
  char key='\0';
  gotoxy(i+20,23);
  fflush(stdin);
    key=getch();
    switch(key)
    {
     case 75:sound(600);
	     delay(150);
	     nosound();
	     if(i>0)
	     i=i-20;
	     if(move>0)
		--move;
	    gotoxy(i+20,23);
	     return(move);
     case 77:    sound(600);
		 delay(150);
		 nosound();
		 if(i<=20)
		 i=i+20;
		 if(move<x_pos)
		  ++move;
		 gotoxy(i+20,23);
		return(move);
    default:
	   break;
    }
 return (move);
}


void administrator()
{
  back:
  clrscr();
  doubleborder(RED,2);

  gotoxy(26,6);
  textcolor(CYAN);
  cprintf("__ADMINISTRATOR__");

  gotoxy(X_pos,9);
  cout<<"";
  gotoxy(X_pos,10);
  cout<<"1.NEW RECORD";
  gotoxy(X_pos,11);
  cout<<"2.MODIFY RECORD";
  gotoxy(X_pos,12);
  cout<<"3.SEARCH RECORD";
  gotoxy(X_pos,13);
  cout<<"4.DELETE RECORD";
  gotoxy(X_pos,14);
  cout<<"5.RESULT";
  gotoxy(X_pos,15);
  cout<<"6.SETTING";
  gotoxy(X_pos,16);
  cout<<"7.ALL DATA BASE";
  gotoxy(X_pos,17);
  cout<<"8.BACK";
  gotoxy(X_pos,18);
  cout<<"";
  int returnchoice=scrollUpDown(8);
    sound(1200);
    delay(160);
    nosound();
  switch(returnchoice)
  {
   case 10: newRecord(); goto back;
   case 11: modifyRecord(); goto back;
   case 12: searchRecord(); goto back;
   case 13:deleteRecord(); goto back;
   case 14:resultMenu(); goto back;
   case 15:setting(); goto back;
   case 16: all_List();goto back;
   case 17: return;
  }

}


void setting(void)
{

 if(!passWord())
 {
   sound(1200);
   delay(160);
   nosound();
   clrscr();
   gotoxy(15,13);
   cout<<"DO YOU WANT TO CHANGE YOUR PASSWORD [ TYPE (Y/N) ]";
   fflush(stdin);
   char choice=getch();
   cout<<choice;
   delay(200);
   if(choice=='y'||choice=='Y')
   {
   remove("PassWord.bin");
   passWord();
   }
   else
    return;
 }
 else
  {
      textcolor(RED+128);
      clrscr();
      gotoxy(30,13);
      cout<<"INVALID PASSWORD";
      getch();
      textcolor(GREEN);
      return;
  }
}

void resultMenu(void)
{
   back:
   clrscr();
   doubleborder(RED,2);

   gotoxy(26,6);
   textcolor(YELLOW);
   cprintf("__ADMINISTRATOR__");

   gotoxy(X_pos,9);
   cout<<"";
   gotoxy(X_pos,10);
   cout<<"1.ADD NEW RESULT";
   gotoxy(X_pos,11);
   cout<<"2.MODIFY RESULT";
   gotoxy(X_pos,12);
    cout<<"3.SEARCH RESULT";
   gotoxy(X_pos,13);
    cout<<"4.DELETE RESULT";
    gotoxy(X_pos,14);
    cout<<"5.RESULT ANNOUNCE DATE";
   gotoxy(X_pos,15);
   cout<<"6.BACK";
   gotoxy(X_pos,16);
   cout<<"";

  int returnchoice=scrollUpDown(6);
  sound(1200);
  delay(160);
  nosound();
  switch(returnchoice)
  {
    case 10:newResult();  goto back;
    case 11: modifyResult(); goto back;
    case 12: searchResult(); goto back;
    case 13: deleteResult(); goto back;
    case 14: createResultDeclareDate();goto back;
    case 15:return;
  }
}

//************************************************************************
//############################# Record Menu #############################
//*************************************************************************

void newRecord(void)
{
  clrscr();
  gotoxy(12,13);
  cout<<"WHICH CLASS DO YOU WANT TO ADMISSION : ";
   int Class;
   fflush(stdin);
   cin>>Class;

     fflush(stdin);
     int tempAdm_No;
	    ifstream infile("StuAdmNo.bin",ios::binary);
	    if(infile)
	    {
	     int studentAdmNo;
	     infile>>studentAdmNo;
	      tempAdm_No=studentAdmNo;
	      Adm_No=studentAdmNo;
	    }
	    else
	    {
	      tempAdm_No=Adm_No;
	    }
	   infile.close();
	   Adm_No++;
	  ofstream outfile("StuAdmNo.bin",ios::binary);
	  outfile<<Adm_No;
	  outfile.close();

   if(Class<=10)
   {
     juniorStudent juStudent(tempAdm_No);
     juStudent.get_Student_Data();
	clrscr();
     juStudent.show_juniorStudent();
     getch();
      ofstream outfile("JuniorStudent.bin",ios::ate,ios::binary);
     outfile.seekp(0,ios::end);
     outfile.write((char*)&juStudent,sizeof(juStudent));
     outfile.close();
   }
   else
   {
	    clrscr();
	    char stream[15];
	    gotoxy(30,13);
	    cout<<"STREAM [ SCI/COM ] :";
	    fflush(stdin);
	    cin>>stream;
	    if(stricmp("SCI",stream)==0)
	    {

		   scienceStudent scstudent(tempAdm_No);
		   scstudent.get_ScienceStudent();
		   getch();
		    ofstream outfile("ScienceStudent.bin",ios::ate,ios::binary);
		   outfile.seekp(0,ios::end);
		   outfile.write((char*)&scstudent,sizeof(scstudent));
		   outfile.close();
	    }
	else
	{

		   commerceStudent comstudent(tempAdm_No);
		   comstudent.get_CommerceStudent();
		   getch();

		  ofstream outfile("CommerceStudent.bin",ios::ate,ios::binary);
		  outfile.seekp(0,ios::end);
		  outfile.write((char*)&comstudent,sizeof(comstudent));
		  outfile.close();
	 }


   }

}


void modifyRecord(void)
{

   ifstream infile1("ScienceStudent.bin",ios::binary);
      ifstream infile2("JuniorStudent.bin",ios::binary);
      ifstream infile3("CommerceStudent.bin",ios::binary);

    if((infile1)||(infile2)||(infile3))
     {
	ofstream outfile("temp.bin",ios::ate,ios::binary);
	outfile.seekp(0,ios::beg);

	ifstream temfile;

	textcolor(GREEN);
	clrscr();
	char name1[40];
	int adm1;
	gotoxy(30,13);
	cout<<"NAME          :";
	gotoxy(30,14);
	cout<<"ADMISSION No. :";
	gotoxy(46,13);
	fflush(stdin);
	gets(name1);
	gotoxy(46,14);
	fflush(stdin);
	cin>>adm1;

       if(infile1)
       {
	   infile1.close();

	   scienceStudent allstu1;

	   temfile.open("ScienceStudent.bin",ios::binary);
	   temfile.seekg(0,ios::beg);
	   while(temfile.read((char*)&allstu1,sizeof(allstu1))  )
	   {

	      if(!allstu1.compareFun(name1, adm1))
	      {
		 clrscr();
		 allstu1.show_Student_Data();
		   getch();
		 clrscr();
		 gotoxy(15,13);
		 cout<<"SURE YOU MODIFY RECORD [ TYPE Y/N ] :";
		 char ch='\0';
		 fflush(stdin);
		 ch=getchar();
		 if(ch=='y'||ch=='Y')
		 {
		    temfile.seekg(0,ios::beg);
		    while( temfile.read((char*)&allstu1,sizeof(allstu1))  )
		    {
		       if(allstu1.compareFun(name1,adm1))
		       {
			  outfile.seekp(0,ios::end);
			  outfile.write((char*)&allstu1,sizeof(allstu1));
		       }
		     }
		      clrscr();
		      scienceStudent sc(adm1);
		      sc.get_ScienceStudent();
		      getch();
		      outfile.seekp(0,ios::end);
		      outfile.write((char*)&sc,sizeof(sc));

		     infile1.close();
		     infile2.close();
		     infile3.close();
		     outfile.close();
		     temfile.close();
		     remove("ScienceStudent.bin");
		     rename("temp.bin","ScienceStudent.bin");
		     return;
		 }
		 else
		 {
		   infile1.close();
		   infile2.close();
		   infile3.close();
		   outfile.close();
		   temfile.close();
		   remove("temp.bin");
		   return;
		 }
	      }
	   }temfile.close();
       }


       if(infile2)
       {

	 juniorStudent allstu2;

	 temfile.open("juniorStudent.bin",ios::binary);
	  temfile.seekg(0,ios::beg);
	 while( temfile.read((char*)&allstu2,sizeof(allstu2))  )
	 {
	      if(!allstu2.compareFun(name1, adm1))
	      {

		 clrscr();
		 allstu2.show_Student_Data();
		 getch();
		 clrscr();
		 gotoxy(15,13);
		 cout<<"SURE YOU WANT TO MODIFY RECORD [ TYPE Y/N ] :";
		 char ch='\0';
		 fflush(stdin);
		 ch=getchar();
		 if (ch=='y'||ch=='Y')
		 {
		   temfile.seekg(0,ios::beg);
		     while( temfile.read((char*)&allstu2,sizeof(allstu2))  )
		     {
			if(allstu2.compareFun(name1,adm1))
			{
			  outfile.seekp(0,ios::end);
			  outfile.write((char*)&allstu2,sizeof(allstu2));
			}
		     }
		      juniorStudent js(adm1);
		      js.get_Student_Data();
		      js.show_juniorStudent();
		      getch();

		      outfile.seekp(0,ios::end);
		      outfile.write((char*)&js,sizeof(js));

		     infile1.close();
		     infile2.close();
		     infile3.close();
		     outfile.close();
		     temfile.close();
		      remove("juniorStudent.bin");
		     rename("temp.bin","juniorStudent.bin");
		     return;
		 }
		 else
		 {
		  infile1.close();
		 infile2.close();
		 infile3.close();
		 outfile.close();
		 temfile.close();
		 remove("temp.bin");
		 return;
		 }
	      }
	 }temfile.close();
     }


       if(infile3)
       {
	  commerceStudent allstu3;

	  temfile.open("CommerceStudent.bin",ios::binary);
	  temfile.seekg(0,ios::beg);
	  while( temfile.read((char*)&allstu3,sizeof(allstu3))  )
	 {

	   if(!allstu3.compareFun(name1, adm1))
	   {
	       clrscr();
	       allstu3.show_Student_Data();
	       getch();
	       clrscr();
	       gotoxy(15,13);
	       cout<<"SURE YOU WANT TO MODIFY RECORD [ TYPE Y/N ] :";
	       char ch='\0';
	       fflush(stdin);
	       ch=getchar();
	       if(ch=='y'||ch=='Y')
	       {
			temfile.seekg(0,ios::beg);
			while( temfile.read((char*)&allstu3,sizeof(allstu3))  )
		       {
			  if(allstu3.compareFun(name1,adm1))
			  {
				outfile.seekp(0,ios::end);
				outfile.write((char*)&allstu3,sizeof(allstu3));
			  }
		       }

			 commerceStudent cms(adm1);
		      cms.get_CommerceStudent();
		      getch();
		      outfile.seekp(0,ios::end);
		      outfile.write((char*)&cms,sizeof(cms));

			infile1.close();
			 infile2.close();
			 infile3.close();
			 outfile.close();
			 temfile.close();
			     remove("CommerceStudent.bin");
		       rename("temp.bin","CommerceStudent.bin");
			 return;
		}
		else
		{
		 infile1.close();
		 infile2.close();
		 infile3.close();
		 outfile.close();
		 temfile.close();
		 remove("temp.bin");
		return;
		}
	   }
	 }
	  temfile.close();
   }
       clrscr();
       textcolor(RED+BLINK);
    clrscr();
    gotoxy(33,13);
    cout<<"RECORD NOT FOUND";
    getch();
    textcolor(GREEN);
    clrscr();
    infile1.close();
    infile2.close();
    infile3.close();
    outfile.close();
  }
  else
  {
    textcolor(RED+BLINK);
    clrscr();
    gotoxy(33,13);
    cout<<"EMPTY RECORDS";
      remove("StuAdmNo.bin");
    getch();
    textcolor(GREEN);
    clrscr();
    infile1.close();
    infile2.close();
    infile3.close();
  }
}


void searchRecord(void)
{
    ifstream infile1("ScienceStudent.bin",ios::binary);
    ifstream infile2("JuniorStudent.bin",ios::binary);
    ifstream infile3("CommerceStudent.bin",ios::binary);
    if((infile1)||(infile2)||(infile3))
     {
      textcolor(GREEN);
      clrscr();
      char name1[40];
      int adm1;
      gotoxy(30,13);
      cout<<"NAME          :";
      gotoxy(30,14);
      cout<<"ADMISSION No. :";
      gotoxy(46,13);
      fflush(stdin);
      gets(name1);
      gotoxy(46,14);
      fflush(stdin);
      cin>>adm1;

      ifstream temfile;

      if(infile1)
      {
	infile1.close();
	scienceStudent allstu1;

	temfile.open("ScienceStudent.bin",ios::binary);
	while( temfile.read((char*)&allstu1,sizeof(allstu1))  )
       {
	    if(!allstu1.compareFun(name1, adm1))
	   {
	     clrscr();
	    allstu1.show_Student_Data();
	  sciback:
	  textcolor(GREEN);
	  sciback1:
	  gotoxy(20,23);
	  cprintf("<");
	  gotoxy(38,23);
	  cprintf("BACK");
	  gotoxy(60,23);
	  cprintf(">");
	 int returnchoice=scrollLeftRight(2);
	 switch(returnchoice)
	 {
	   case 0:clrscr();    allstu1.show_Student_Data();  goto sciback;
	   case 1:    fflush(stdin);
		   char ch='\0';
		   fflush(stdin);
		   ch=getch();
		  if(ch==13)
		  {
		    temfile.close();
		    infile1.close();
		    infile2.close();
		    infile3.close();
		    return;
		  }
		  else
			  goto sciback1;
     case 2: clrscr();   allstu1.show_ScienceStudent(); goto sciback;
	  }
	   }
       }
	temfile.close();
     }

     if(infile2)
     {
	 infile2.close();

	 juniorStudent allstu2;

	 temfile.open("juniorStudent.bin",ios::binary);
	 while( temfile.read((char*)&allstu2,sizeof(allstu2))  )
	 {
	   if(!allstu2.compareFun(name1, adm1))
	   {
	     clrscr();
	    allstu2.show_Student_Data();
	   juback:
	  textcolor(GREEN);

	  juback1:
	  gotoxy(20,23);
	  cprintf("<");
	  gotoxy(38,23);
	  cprintf("BACK");
	  gotoxy(60,23);
	  cprintf(">");
	 int returnchoice=scrollLeftRight(2);
	 switch(returnchoice)
	 {
	   case 0: clrscr();  allstu2.show_Student_Data();
		     goto juback;
	   case 1:
		   char ch='\0';
		   fflush(stdin);
		   ch=getch();
		  if(ch==13)
		  {
		    temfile.close();
		    infile1.close();
		    infile2.close();
		    infile3.close();
		    return;
		  }
		  else
		  goto juback1;
	   case 2:clrscr(); allstu2.show_juniorStudent();; goto juback;
	  }
	 }
	   }
	   temfile.close();
      }

       if(infile3)
       {
	 infile3.close();

	 commerceStudent allstu3;

	 temfile.open("CommerceStudent.bin",ios::binary);
	 while( temfile.read((char*)&allstu3,sizeof(allstu3))  )
	 {
	    if(!allstu3.compareFun(name1, adm1))
	   {
	     clrscr();
	      allstu3.show_Student_Data();
	       cmback:
	  textcolor(GREEN);
	  cmback1:
	  gotoxy(20,23);
	  cprintf("<");
	  gotoxy(38,23);
	  cprintf("BACK");
	  gotoxy(60,23);
	  cprintf(">");
	 int returnchoice=scrollLeftRight(2);
	 switch(returnchoice)
	 {
	   case 0:clrscr();   allstu3.show_Student_Data();
		     goto cmback;
	   case 1:
		   char ch='\0';
		   fflush(stdin);
		   ch=getch();
		  if(ch==13)
		  {
		    temfile.close();
		    infile1.close();
		    infile2.close();
		    infile3.close();
		    return;
		  }
		  else
		  goto cmback1;
	   case 2:clrscr(); allstu3.show_CommerceStudent(); goto cmback;
	  }
			   }
	 }

	 temfile.close();
       }
       clrscr();
       textcolor(RED+BLINK);
    clrscr();
    gotoxy(33,13);
    cout<<"RECORD NOT FOUND";
    getch();
    textcolor(GREEN);
    clrscr();
    infile1.close();
    infile2.close();
    infile3.close();
  }
  else
  {
    textcolor(RED+BLINK);
    clrscr();
    gotoxy(33,13);
    cout<<"EMPTY RECORDS";
     remove("StuAdmNo.bin");
    getch();
    textcolor(GREEN);
    clrscr();
    infile1.close();
    infile2.close();
    infile3.close();
  }
}


void deleteRecord(void)
{

    ifstream infile1("ScienceStudent.bin",ios::binary);
    ifstream infile2("JuniorStudent.bin",ios::binary);
    ifstream infile3("CommerceStudent.bin",ios::binary);
    if((infile1)||(infile2)||(infile3))
     {
	ofstream outfile("temp.bin",ios::ate,ios::binary);
	outfile.seekp(0,ios::end);

	ifstream temfile;
	textcolor(GREEN);
	clrscr();
	char name1[40];
	int adm1;

	gotoxy(30,13);
	cout<<"NAME          :";
	gotoxy(30,14);
	cout<<"ADMISSION No. :";
	gotoxy(46,13);
	fflush(stdin);
	gets(name1);
	gotoxy(46,14);
	fflush(stdin);
	cin>>adm1;

       if(infile1)
       {
	   infile1.close();
	   scienceStudent allstu1;

	   temfile.open("ScienceStudent.bin",ios::binary);
	   temfile.seekg(0,ios::beg);
	   while( temfile.read((char*)&allstu1,sizeof(allstu1))  )
	   {
	      if(!allstu1.compareFun(name1, adm1))
	      {
		 clrscr();
		 gotoxy(15,13);
		 cout<<"SURE YOU WANT TO DELETE RECORD [ TYPE Y/N ] :";
		 char ch='\0';
		 fflush(stdin);
		 ch=getchar();
		 if(ch=='y'||ch=='Y')
		 {
		    deleteWithRecord(name1,adm1);
		    temfile.seekg(0,ios::beg);
		    while( temfile.read((char*)&allstu1,sizeof(allstu1))  )
		    {
		       if(allstu1.compareFun(name1,adm1))
		       {
			  outfile.seekp(0,ios::end);
			  outfile.write((char*)&allstu1,sizeof(allstu1));
		       }
		     }

		     infile1.close();
		     infile2.close();
		     infile3.close();
		     outfile.close();
		     temfile.close();
		      remove("ScienceStudent.bin");
		     rename("temp.bin","ScienceStudent.bin");
		     return;
		 }
		 else
		 {
		   infile1.close();
		   infile2.close();
		   infile3.close();
		   outfile.close();
		   temfile.close();
		   remove("temp.bin");
		   return;
		 }
	      }
	   }temfile.close();
       }

       if(infile2)
       {
	  infile2.close();
	  juniorStudent allstu2;

	 temfile.open("juniorStudent.bin",ios::binary);
	 temfile.seekg(0,ios::beg);
	 while( temfile.read((char*)&allstu2,sizeof(allstu2))  )
	 {
	      if(!allstu2.compareFun(name1, adm1))
	      {

		 clrscr();
		 gotoxy(15,13);
		 cout<<"SURE YOU WANT TO DELETE RECORD [ TYPE Y/N ] :";
		 char ch='\0';
		 fflush(stdin);
		 ch=getchar();
		 if (ch=='y'||ch=='Y')
		 {
		   deleteWithRecord(name1,adm1);
		   temfile.seekg(0,ios::beg);
		     while( temfile.read((char*)&allstu2,sizeof(allstu2))  )
		     {
			if(allstu2.compareFun(name1,adm1))
			{
			  outfile.seekp(0,ios::end);
			  outfile.write((char*)&allstu2,sizeof(allstu2));
			}
		     }

		     infile1.close();
		     infile2.close();
		     infile3.close();
		     outfile.close();
		     temfile.close();
		      remove("juniorStudent.bin");
		     rename("temp.bin","juniorStudent.bin");
		     return;
		 }
		 else
		 {
		  infile1.close();
		 infile2.close();
		 infile3.close();
		 outfile.close();
		 temfile.close();
		 remove("temp.bin");
		 return;
		 }
	      }
	 }temfile.close();
     }

       if(infile3)
       {
	  infile3.close();

	  commerceStudent allstu3;

	  temfile.open("CommerceStudent.bin",ios::binary);
	  temfile.seekg(0,ios::beg);
	  while( temfile.read((char*)&allstu3,sizeof(allstu3))  )
	 {

	   if(!allstu3.compareFun(name1, adm1))
	   {
	       clrscr();
	       gotoxy(15,13);
	       cout<<"SURE YOU WANT TO DELETE RECORD [ TYPE Y/N ] :";
	       char ch='\0';
	       fflush(stdin);
	       ch=getchar();
	       if(ch=='y'||ch=='Y')
	       {          deleteWithRecord(name1,adm1);
			temfile.seekg(0,ios::beg);
			while( temfile.read((char*)&allstu3,sizeof(allstu3))  )
		       {
			  if(allstu3.compareFun(name1,adm1))
			  {
				outfile.seekp(0,ios::end);
				outfile.write((char*)&allstu3,sizeof(allstu3));
			  }
		       }

			infile1.close();
			 infile2.close();
			 infile3.close();
			 outfile.close();
			 temfile.close();
			 remove("CommerceStudent.bin");
		       rename("temp.bin","CommerceStudent.bin");
			 return;
		}
		else
		{
		 infile1.close();
		 infile2.close();
		 infile3.close();
		 outfile.close();
		 temfile.close();
		 remove("temp.bin");
		return;
		}
	   }
	 }
	  temfile.close();
   }
       clrscr();
       textcolor(RED+BLINK);
    clrscr();
    gotoxy(33,13);
    cout<<"RECORD NOT FOUND";
    getch();
    textcolor(GREEN);
    clrscr();
    infile1.close();
    infile2.close();
    infile3.close();
    outfile.close();
  }
  else
  {
    textcolor(RED+BLINK);
    clrscr();
    gotoxy(33,13);
    cout<<"EMPTY RECORDS";
    remove("StuAdmNo.bin");
    getch();
    textcolor(GREEN);
    clrscr();
    infile1.close();
    infile2.close();
    infile3.close();
  }
}
//*************************************************************************
//########################### Result Menu #################################
//*************************************************************************

void newResult(void)
{
  clrscr();
     char name[40];
      int adm;
      gotoxy(30,13);
      cout<<"NAME          :";
      gotoxy(30,14);
      cout<<"ADMISSION No. :";
      gotoxy(46,13);
      fflush(stdin);
      gets(name);
      gotoxy(46,14);
      fflush(stdin);
      cin>>adm;
     int returnchoice=conformRecord(name,adm);

     if(!returnchoice)
     {
	  ofstream outfile("StuResult.bin",ios::ate,ios::binary);

	  if(outfile)
	    {
		  clrscr();
		  if(checkResultExist(name,adm))
		  {
		  allSubjectMenu(globalSelect);
		  studentMarks sMarks(name,adm);
		  sMarks.stu_Get_Marks();
		   outfile.seekp(0,ios::end);
		  outfile.write((char*)&sMarks,sizeof(sMarks));
		  outfile.close();
		  }
		  else
		  {
		     textcolor(RED+BLINK);
		       clrscr();
		       gotoxy(27,13);
		       cout<<"RESULT ALREADY EXIST";
		       getch();
		       textcolor(GREEN);
		       clrscr();
		       outfile.close();

		  }
	    }
	    else
	    {
		      textcolor(RED+BLINK);
		       clrscr();
		       gotoxy(33,13);
		       cout<<"EMPTY RESULTS";
		       getch();
		       textcolor(GREEN);
		       clrscr();
		       outfile.close();
      }
    }

}

void modifyResult(void)
{
     clrscr();
     char name[40];
     int adm;
      gotoxy(30,13);
      cout<<"NAME          :";
      gotoxy(30,14);
      cout<<"ADMISSION No. :";
      gotoxy(46,13);
      fflush(stdin);
      gets(name);
      gotoxy(46,14);
      fflush(stdin);
      cin>>adm;
     int returnchoice=conformRecord(name,adm);


     if(!returnchoice)
     {

	 ifstream infile("StuResult.bin",ios::binary);

	  if(infile)
	    {
		ofstream outfile("tempResult.bin",ios::ate,ios::binary);
		studentMarks stuMarks;

		infile.seekg(0,ios::beg);
		while(infile.read((char*)&stuMarks,sizeof(stuMarks)))
		{
		      if(!stuMarks.compareFun(name,adm))
		      {   clrscr();
			 allSubjectMenu(globalSelect);
			 stuMarks.stu_Show_Marks();
			 getch();
			  clrscr();
			 gotoxy(15,13);
			 cout<<"SURE YOU WANT TO MODIFY RESULT [ TYPE Y/N ] :";
			 char ch='\0';
			 fflush(stdin);
			 ch=getchar();
			 if(ch=='y'||ch=='Y')
			    {
			       clrscr();
				studentMarks stuMarks1;

				infile.seekg(0,ios::beg);
				while(infile.read((char*)&stuMarks1,sizeof(stuMarks1)))
				{

				   if(stuMarks.compareFun(name,adm))
				   {
				     outfile.seekp(0,ios::end);
				     outfile.write((char*)&stuMarks1,sizeof(stuMarks1));
				   }
				}
				studentMarks stuMarks3(name,adm);
				allSubjectMenu(globalSelect);
				stuMarks3.stu_Get_Marks();

				outfile.seekp(0,ios::end);
				outfile.write((char*)&stuMarks3,sizeof(stuMarks3));
				outfile.close();
				infile.close();
				remove("StuResult.bin");
				rename("tempResult.bin","StuResult.bin");
				return;
			    }
			    else
			    {
			     outfile.close();
			     infile.close();
			     return;
			    }

		      }

		}     textcolor(RED+BLINK);
		       clrscr();
		       gotoxy(33,13);
		       cout<<"RESULT NOT FOUND";
		       getch();
		       textcolor(GREEN);
		       clrscr();
		       infile.close();
		       outfile.close();
		       remove("tempResult.bin");

	    }
	    else
	    {
		      textcolor(RED+BLINK);
		       clrscr();
		       gotoxy(33,13);
		       cout<<"EMPTY RESULTS";
		       getch();
		       textcolor(GREEN);
		       clrscr();
		       infile.close();
	    }
     }
}

void searchResult(void)
{
    clrscr();

     char name[40];
      int adm;
      gotoxy(30,13);
      cout<<"NAME          :";
      gotoxy(30,14);
      cout<<"ADMISSION No. :";
      gotoxy(46,13);
      fflush(stdin);
      gets(name);
      gotoxy(46,14);
      fflush(stdin);
      cin>>adm;
     int returnchoice=conformRecord(name,adm);

     if(!returnchoice)
     {

	 ifstream infile("StuResult.bin",ios::binary);

	  if(infile)
	    {
		studentMarks stuMarks;

		while(infile.read((char*)&stuMarks,sizeof(stuMarks)))
		{
		      if(!stuMarks.compareFun(name,adm))
		      {   clrscr();
			 allSubjectMenu(globalSelect);
			 stuMarks.stu_Show_Marks();
			 getch();
			 infile.close();
			 return;
		      }
		}     textcolor(RED+BLINK);
		       clrscr();
		       gotoxy(33,13);
		       cout<<"RESULTS NOT FOUND";
		       getch();
		       textcolor(GREEN);
		       clrscr();
		       infile.close();

	    }
	    else
	    {
		      textcolor(RED+BLINK);
		       clrscr();
		       gotoxy(33,13);
		       cout<<"EMPTY RESULTS";
		       getch();
		       textcolor(GREEN);
		       clrscr();
		       infile.close();
	    }
    }


}

void deleteResult(void)
{
   clrscr();

     char name[40];
      int adm;
      gotoxy(30,13);
      cout<<"NAME          :";
      gotoxy(30,14);
      cout<<"ADMISSION No. :";
      gotoxy(46,13);
      fflush(stdin);
      gets(name);
      gotoxy(46,14);
      fflush(stdin);
      cin>>adm;
     int returnchoice=conformRecord(name,adm);

     if(!returnchoice)
     {

	 ifstream infile("StuResult.bin",ios::binary);

	  if(infile)
	    {
		ofstream outfile("tempResult.bin",ios::ate,ios::binary);
		studentMarks stuMarks;
		infile.seekg(0,ios::beg);

		while(infile.read((char*)&stuMarks,sizeof(stuMarks)))
		{
		      if(!stuMarks.compareFun(name,adm))
		      {   clrscr();
			 allSubjectMenu(globalSelect);
			 stuMarks.stu_Show_Marks();
			 getch();
			  clrscr();
			 gotoxy(15,13);
			 cout<<"SURE YOU WANT TO DELETE RESULT [ TYPE Y/N ] :";
			 char ch='\0';
			 fflush(stdin);
			 ch=getchar();
			 if(ch=='y'||ch=='Y')
			    {
				studentMarks stuMarks1;
			       infile.seekg(0,ios::beg);
				while(infile.read((char*)&stuMarks1,sizeof(stuMarks1)))
				{

				  if(stuMarks.compareFun(name,adm))
				  {
				     outfile.seekp(0,ios::end);
				     outfile.write((char*)&stuMarks1,sizeof(stuMarks1));
				  }
				}   outfile.close();
				     infile.close();
				     remove("StuResult.bin");
				     rename("tempResult.bin","StuResult.bin");
				     return;
			    }
			    else
			    {
			     outfile.close();
			     infile.close();
			     return;
			    }

		      }

		}     textcolor(RED+BLINK);
		       clrscr();
		       gotoxy(33,13);
		       cout<<"RESULT NOT FOUND";
		       getch();
		       textcolor(GREEN);
		       clrscr();
		       infile.close();
		       outfile.close();

	    }
	    else
	    {
		      textcolor(RED+BLINK);
		       clrscr();
		       gotoxy(33,13);
		       cout<<"EMPTY RESULTS";
		       getch();
		       textcolor(GREEN);
		       clrscr();
		       infile.close();
	    }
    }


}

int conformRecord(const char name1[],const int adm1)
{
  ifstream infile1("ScienceStudent.bin",ios::binary);
    ifstream infile2("JuniorStudent.bin",ios::binary);
    ifstream infile3("CommerceStudent.bin",ios::binary);

    if((infile1)||(infile2)||(infile3))
     {
	 textcolor(GREEN);
	 clrscr();

	 ifstream temfile;
	 if(infile1)
	 {
	    infile1.close();
	       scienceStudent allstu1;

	     temfile.open("ScienceStudent.bin",ios::binary);
	       while( temfile.read((char*)&allstu1,sizeof(allstu1))  )
	       {
		   if(!allstu1.compareFun(name1, adm1))
		   {
			 temfile.close();
			 infile1.close();
			 infile2.close();
			 infile3.close();
			globalScienceObject=allstu1;
			    globalSelect=1;
			    return(0);
		    }

		}
	    temfile.close();
	  } infile1.close();

     if(infile2)
     {
	 infile2.close();

	  juniorStudent allstu2;

	 temfile.open("juniorStudent.bin",ios::binary);
	 while( temfile.read((char*)&allstu2,sizeof(allstu2))  )
	 {
	   if(!allstu2.compareFun(name1, adm1))
	   {


		 temfile.close();
		 infile1.close();
		 infile2.close();
		 infile3.close();
		    globalJuniorObject=allstu2;
		    globalSelect=2;
		     return(0);
	    }

	 }

	   temfile.close();
      }    infile2.close();

       if(infile3)
       {
	  infile3.close();
	  commerceStudent allstu3;

	 temfile.open("CommerceStudent.bin",ios::binary);
	  while( temfile.read((char*)&allstu3,sizeof(allstu3))  )
	 {
	    if(!allstu3.compareFun(name1, adm1))
	   {
		    temfile.close();
		    infile1.close();
		    infile2.close();
		    infile3.close();
		    globalCommerceObject=allstu3;
		    globalSelect=3;
		    return(0);
	     }

	   }
	 temfile.close();
       }
	 infile3.close();

   textcolor(RED+BLINK);
    clrscr();
    gotoxy(28,13);
    cout<<"RECORD DOES NOT EXIST";
      getch();
    textcolor(GREEN);
    clrscr();
   return(1);

  }
  else
  {
    textcolor(RED+BLINK);
    clrscr();
    gotoxy(33,13);
    cout<<"EMPTY RECORDS";
     remove("StuAdmNo.bin");
    getch();
    textcolor(GREEN);
    clrscr();
    infile1.close();
    infile2.close();
    infile3.close();
    return(1);
  }
}

void allSubjectMenu(const int select )
{
    if(select==1)
    {
    globalScienceObject.showSubject();
    }
    else
      if(select==2)
     globalJuniorObject.showSubject();
    else
      if(select==3)
    globalCommerceObject.showSubject();
}

int checkResultExist(const char name1[],const int adm1)
{

	 ifstream infile("StuResult.bin",ios::binary);

	  if(infile)
	    {
		studentMarks stuMarks;
		while(infile.read((char*)&stuMarks,sizeof(stuMarks)))
		{
		      if(!stuMarks.compareFun(name1,adm1))
		      {
			 infile.close();
			 return(0);
		      }
		}
		       infile.close();
		       return(1);
	    }
	    else
	    {

		       infile.close();
		       return(1);
	    }

}
void personalStudentDetails(const char name1[],const int adm1)
{
  ifstream infile1("ScienceStudent.bin",ios::binary);
    ifstream infile2("JuniorStudent.bin",ios::binary);
    ifstream infile3("CommerceStudent.bin",ios::binary);
    ifstream temfile;
      if(infile1)
     {
       infile1.close();
       temfile.open("ScienceStudent.bin",ios::binary);
       scienceStudent allstu1;
       while( temfile.read((char*)&allstu1,sizeof(allstu1))  )
       {
	    if(!allstu1.compareFun(name1, adm1))
	   {

	      allstu1.show_Student_Data();

		    fflush(stdin);
		temfile.close();
		infile1.close();
		infile2.close();
		infile3.close();
		return;
	    }
       }
	temfile.close();
	infile1.close();
     }


     if(infile2)
     {
	infile2.close();

	 temfile.open("juniorStudent.bin",ios::binary);
	 juniorStudent allstu2;

	 while( temfile.read((char*)&allstu2,sizeof(allstu2))  )
	 {
	   if(!allstu2.compareFun(name1, adm1))
	   {

	      allstu2.show_Student_Data();

		    fflush(stdin);
		    temfile.close();
		    infile1.close();
		    infile2.close();
		    infile3.close();
		    return;
	    }
	 }
	   temfile.close();
	   infile2.close();
      }    infile1.close();

       if(infile3)
       {
	  infile3.close();

	 temfile.open("CommerceStudent.bin",ios::binary);
	 commerceStudent allstu3;

	  while( temfile.read((char*)&allstu3,sizeof(allstu3))  )
	 {
	    if(!allstu3.compareFun(name1, adm1))
	   {

		allstu3.show_Student_Data();


		fflush(stdin);
		infile1.close();
		infile2.close();
		temfile.close();
		infile3.close();
		    return;
	     }
	  }
	  infile2.close();
	  infile1.close();
	  infile3.close();
	 temfile.close();
       }
       infile1.close();
       infile2.close();
       infile3.close();
       temfile.close();


}
void studentResultDeclare(const char name1[],const int adm1)
{
  studentMarks conformMarks=conformCheckResult(name1,adm1);
   conformMarks.graphicResult();
}

int conformResultDeclareDate(void)
{
     date D;
     ifstream infile("R_Date.bin",ios::binary);
     if(!infile)
    {
     textcolor(RED+BLINK);
     clrscr();
     gotoxy(30,13);
     cout<<"RESULT NOT DECLARED";
     getch();
     textcolor(GREEN);
     clrscr();
     infile.close();
     return(1);
   }
    else
    {
       int date=00,month=00,year=00;
       infile>>date>>month>>year;

       getdate(&D);

       if(year<D.da_year)
	{
	  infile.close();
	 return(0);
	 }

	 if(month<D.da_mon&&year==D.da_year)
	  {
	     infile.close();
	     return(0);
	   }

       if((date<=D.da_day&&month==D.da_mon&&year==D.da_year))
       {
	 infile.close();
	 return(0);
       }
       else
       {

	 infile.close();
	 return(1);
       }

    }
}

void createResultDeclareDate(void)
{
    clrscr();
    int day=00,month=00,year=00;
    gotoxy(25,8);
    cout<<"DATE OF RESULT DECLARATION\n";
    gotoxy(30,11);
    cout<<"Day  :";
    gotoxy(30,12);
    cout<<"Month:";
    gotoxy(30,13);
    cout<<"Year :";
     fflush(stdin);
   gotoxy(37,11);
    cin>>day;  fflush(stdin);
       gotoxy(37,12);
    cin>>month; fflush(stdin);
       gotoxy(37,13);
    cin>>year;
    ofstream outfile("R_Date.bin",ios::binary);
    if(!outfile)
    {
      textcolor(RED+BLINK);
     clrscr();
     gotoxy(33,13);
     cout<<"FILE DOES NOT EXIST";
     getch();
     textcolor(GREEN);
     clrscr();
     outfile.close();
    }
    else
    {
	outfile<<day<<" "<<month<<" "<<year;
	outfile.close();
    }
}


studentMarks conformCheckResult(const char name[],const int adm)
{

	 ifstream infile("StuResult.bin",ios::binary);

	 studentMarks stuMarks;
		while(infile.read((char*)&stuMarks,sizeof(stuMarks)))
		      if(!stuMarks.compareFun(name,adm))
			  break;

  infile.close();
  return(stuMarks);
}

void graphicSubjectMenu(const int select )
{
    if(select==1)
    {
    globalScienceObject.graphicResult();
    }
    else
      if(select==2)
     globalJuniorObject.graphicResult();
    else
      if(select==3)
    globalCommerceObject.graphicResult();
}


void LOAD(void)
{
 clrscr();
 doubleborder(11,12);
 textcolor(GREEN);
 gotoxy(32,12);
 cprintf("LOADING...\n");
 for(int i=0;i<=20;i+=2)
 {
  gotoxy(i+26,10);
  cprintf("лл");
  fflush(stdin);
  gotoxy(50,10);cprintf("%d%",i*5);
  delay(500);
 }
 gotoxy(26,15);
 cprintf("Load Complete Press any Key !");
 getch();
}

void deleteWithRecord(char name[],int adm)
{
 ifstream infile("StuResult.bin",ios::ate,ios::binary);

   if(infile)
   {
     ofstream outfile("tempResult.bin",ios::ate,ios::binary);
	studentMarks stuMarks;
	infile.seekg(0,ios::beg);

	while(infile.read((char*)&stuMarks,sizeof(stuMarks)))
	{
	      if(!stuMarks.compareFun(name,adm))
	      {
		      studentMarks stuMarks1;
		       infile.seekg(0,ios::beg);
			while(infile.read((char*)&stuMarks1,sizeof(stuMarks1)))
			{

			    if(stuMarks.compareFun(name,adm))
			    {
			      outfile.seekp(0,ios::end);
			      outfile.write((char*)&stuMarks1,sizeof(stuMarks1));
			    }
			}
			 infile.close();
			 outfile.close();
			  remove("StuResult.bin");
			  rename("tempResult.bin","StuResult.bin");
			  return;
	       }
	}
	 infile.close();
	 outfile.close();
	 return;
     }

infile.close();
}
void doubleborder(int c1,int c2)
{
 fflush(stdin);
 textcolor(c1);
 //For Upper Border
 for(int i=0;i<=79;i++)
  cprintf("%c",219);
 //For Side Border
 for(int j=0;j<=21;j++)
  for(int k=0;k<=77;k++)
   if(k==0 || k==77)
    cprintf("%c%c",219,219);
   else
    cprintf(" ");
 //For Bottom Border
 for(i=0;i<=79;i++)
  cprintf("%c",219);


 textcolor(c2);
 //For Upper Border
 gotoxy(3,2);
 for(i=2;i<=77;i++)
  cprintf("%c",219);
// For Side Border
 for(j=2;j<=21;j++)
 {gotoxy(3,1+j);
  for(k=2;k<=75;k++)
   if(k==2 || k==75)
    cprintf("%c%c",219,219);
   else
    cprintf(" ");
  }
// For Bottom Border
 gotoxy(3,23);
 for(i=2;i<=77;i++)
  cprintf("%c",219);

}
void singleborder(int c)
{
 textcolor(c);
 //For Upper Border
  for(int i=0;i<=79;i++)
  cprintf("%c",271);
 //For Side Border
 for(int j=0;j<=22;j++)
  for(int k=0;k<=77;k++)
   if(k==0 || k==77)
    cprintf("%c%c",271,271);
   else
    cprintf(" ");
 //For Bottom Border
  for(i=0;i<=78;i++)
  cprintf("%c",271);
  gotoxy(20,5);
}


//************************************** End All Function Defination **************