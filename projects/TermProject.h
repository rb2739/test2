

//--------------변수선언--------------------
int i,j = 0, Sugang = 0;
double hak[100][1]={0};
double hak_sum1=0.00;
double hak_sum2=0.00;
double sum=0.00;
double Avr_sum[2]={0};
char Diary[100] = { NULL };
double tot,ba = 0;
int END;


//---------------구조체---------------------

typedef struct Student
{
	char	Name[10];		//이름
	char	number[10];		// 학번
	char	Gubun[10];		//구분
	char	Class[10];		//과목
	char	Grade[10];		//성적
	
}Student;

Student Stu[100][100];

//----------------함수들--------------------
double Trade();
void prn_line();
void LoginScreen();
void MainScreen();
void MainSelcet();
void GradeMenu_Input();
void GradeMenu_Output();
void Diary_Input();
void SaveStudentFile();
void SaveDiaryFile();
void HelpDesk();
void Exit();

