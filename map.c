#include<stdio.h>
#include<stdlib.h>
#include<termios.h>//mac 전용. 윈도우는 conio.h 쓰세요

int getch(void) //mac 전용 
{ int ch; 
    struct termios old; 
    struct termios new; 
    tcgetattr(0, &old); 
    new = old; 
    new.c_lflag &= ~(ICANON|ECHO); 
    new.c_cc[VMIN] = 1; 
    new.c_cc[VTIME] = 0; 
    tcsetattr(0, TCSAFLUSH, &new); 
    ch = getchar(); 
    tcsetattr(0, TCSAFLUSH, &old); 
 return ch; 
}

int PrintMenu(void)//시작화면
{
   int nInput = 0;
   
   //system("clear");//원도우 "cls"
   //메뉴
   printf("\n \t\t\t\t\t\t\t\t\t\t 성적 관리 시스템");
   puts("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
   printf(" [1] 성적입력 \n\n\n [2] 성적 평균\n\n\n [3] 지원 가능 회사\n\n\n [4] 프로그램 종료\n\n : ");
   //입력 숫자
   scanf("%d", &nInput);
   return nInput;

   
}

int GetAge(void)//메뉴 1-1 학년선택
{
    int nAge=0;
    printf("[1] 1학년 [2] 2학년 [3] 3학년 [4] 4학년 \n :");
    scanf("%d", &nAge);

    return nAge;
}

int GetSemester(void)//학기선택
{
    int nSemester=0;
    printf("[1] 1학기 [2] 2학기\n :");
    scanf("%d", &nSemester);

    return nSemester;

}

char GetSubject(char szName[])//과목이름 점수저장
{
    int i=0;

    for(i=0; i<szName; i++){

    }
}



int main(void)
{
   int nMenu = 0, nAge=0, nSemester=0; 

   while ((nMenu = PrintMenu()) != 4)
   {
      switch (nMenu)
      {
          case 1:{
              nAge=GetAge();
              
              switch (nAge){
              case 1:
                  nSemester=GetSemester();
                  break;

              case 2:
                  nSemester=GetSemester();
                  break;

              case 3:
                  nSemester=GetSemester();
                  break;

              case 4:
                  nSemester=GetSemester();
                  break;

              default:
                 puts(" 1~4 사이의 숫자를 입력하세요");
                 continue;

             }
          }

            
             break;

         case 2:
            puts("성적평점");
            break;

         case 3:
            puts("학점별 기업목록");
            break;

         default: //???
            puts("\n\n\n   1~4 사이의 수를 입력하세요 ");


      }
     getch();
   }
return 0;
}

