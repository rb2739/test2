#include <stdio.h>
#include "TermProject.h"



int main()
{
	int Moo = 0;
	
	LoginScreen();

	do{
		
	MainScreen();

	MainSelcet();

	if(END == 5)
	{
		 return 0;
	}
	
	}while(Moo = 9);

	
	return 0;

	//getch();

}

void prn_line()
{
    printf("==========================================================================\n");
}


void LoginScreen()
{
	printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t");
	printf("�����α��Φ���������������\n");
	printf("\t\t\t\t\t��    �̸� :            ��\b\b\b\b\b\b");
	scanf("%s",&Stu[0][0].Name);
	printf("\t\t\t\t\t��    �й� :            ��\b\b\b\b\b\b");
	scanf("%s",&Stu[0][0].number);
	printf("\t\t\t\t\t��������������������������");	

	//getch();

}

void MainScreen()
{
	//system("cls");

	puts("\t\t\t�������� �������� ���α׷���������������������������������                  ����Login ����������������");
	printf("\t\t\t��   Menu                                               ��                  ��    �̸� : %s     ��\n",Stu[0][0].Name);
	printf("\t\t\t��                                                      ��                  ��    �й� : %s   ��\n",Stu[0][0].number);
	puts("\t\t\t��      - Diary / Grade -                               ��                  ��������������������������");
	puts("\t\t\t��                                                      ��");
	puts("\t\t\t��              1. ���� ���� �Է�                       ��");
	puts("\t\t\t��              2. ���� ���� ���                       ��");
	puts("\t\t\t��              3. ���� ��������                        ��");
	puts("\t\t\t��                                                      ��");
	puts("\t\t\t��      - Save -                                        ��");
	puts("\t\t\t��                                                      ��");	
	puts("\t\t\t��              4. �������� �����ϱ�                    ��"); 
	puts("\t\t\t��              5. �������� �����ϱ�                    ��");
	puts("\t\t\t��                                                      ��");
	puts("\t\t\t��      - Q&A / Exit -                                  ��");
	puts("\t\t\t��                                                      ��");
	puts("\t\t\t��              6. ����                               ��");
	puts("\t\t\t��              7. The End                              ��");
	puts("\t\t\t��                                                      ��");
	puts("\t\t\t����������������������������������������������������������");
	


}

void MainSelcet()
{
	
	int choice;
	
	printf("\t\t\t\t\tNo. : [ ]\b\b");
	scanf("%d", &choice);
	fflush(stdin);
	
	switch(choice)
	{
		case 1 :	GradeMenu_Input();	break;
		case 2 :	GradeMenu_Output();	break;
		case 3 :	Diary_Input();		break;
		case 4 :	SaveStudentFile();	break;
		case 5 :	SaveDiaryFile();	break;
		case 6 :	HelpDesk();			break;
		case 7 :	Exit();				break;
	}
	

 
}



void GradeMenu_Input()
{
	
	
	system("cls");

	puts("\t\t\t���������Է�(Menu)��������������������������������                          ����Login ����������������");
	printf("\t\t\t��   ȯ���մϴ� %s��                        ��                          ��    �̸� : %s     ��\n",Stu[0][0].Name,Stu[0][0].Name);
	printf("\t\t\t��������������������������������������������������                          ��    �й� : %s   ��\n",Stu[0][0].number);
	puts("\t\t\t                                                                            ��������������������������");
		

	
	for(i=0;i<Sugang;i++)
    {
        for(j=0;j<1;j++)
        {
            printf("[%d]��° �����Դϴ�.\n\n",i+1);        
            
            printf("������ �Է��ϼ���(����/����/����/����/����) : ");
            fflush(stdin);
			scanf("%s",Stu[i][j].Gubun);
            
            printf("������� �Է��ϼ���(Ex.C��� / C++ /Java) : ");
            fflush(stdin);
			scanf("%s",Stu[i][j+1].Class);
            
            printf("������ �Է��ϼ���(3����/2����/1���� �������Է�) : ");
            fflush(stdin);
            scanf("%lf",&hak[i][j]);
            
            hak_sum1+=(hak[i][j]);                                
            
            printf("������ �Է��ϼ���(A+ ~ F): ");
            fflush(stdin);
			scanf("%s",Stu[i][j+2].Grade);     


			if(strcmp(Stu[i][j+2].Grade,"f")==0)
            {
                hak_sum2+=0; 
            }
            
			else if(strcmp(Stu[i][j+2].Grade,"F")==0)
            {
                hak_sum2+=0; 
            }
            
            else
            {
                hak_sum2+=(hak[i][j]); 
            }   
            
            printf("\n\n");       

	 
		}        
        
        
    }  
	tot=Trade(sum)/hak_sum1; //�������ϱ�
	ba=tot/4.5*100;  //����� ���ϱ�


	prn_line();
    printf("\t\t\t2009�г⵵ 1�б�\n");
    prn_line();
    printf("\t����\t\t�����\t\t����\t\t����\n");
    prn_line();

	for(i=0;i<Sugang;i++)
		{    
        for(j=0;j<1;j++)
			{
            
				printf("\t%s\t\t%s\t\t%3.f\t\t%3s\n",Stu[i][j].Gubun,Stu[i][j+1].Class,hak[i][j],Stu[i][j+2].Grade);
			}        
		}
	printf("\t\t�� ��������\t��û����\t�̼�����\n");
    printf("\t\t%5d����\t%2.f����\t\t%3.f����\t\t\n",Sugang,hak_sum1,hak_sum2);

	prn_line();  
    
    fflush(stdin);

	//getch();

}


void GradeMenu_Output()
{
	
	system("cls");

	
	puts("\t\t\t���������Է�(Menu)��������������������������������                          ����Login ����������������");
	printf("\t\t\t��   ȯ���մϴ� %s��                        ��                          ��    �̸� : %s     ��\n",Stu[0][0].Name,Stu[0][0].Name);
	printf("\t\t\t��������������������������������������������������                          ��    �й� : %s   ��\n",Stu[0][0].number);
	puts("\t\t\t                                                                            ��������������������������");
	prn_line();
    printf("\t\t\t2009�г⵵ 1�б�\n");
    prn_line();
    printf("\t����\t\t�����\t\t����\t\t����\n");
    prn_line();

	for(i=0;i<Sugang;i++)
		{    
        for(j=0;j<1;j++)
			{
            
				printf("\t%s\t\t%s\t\t%3.f\t\t%3s\n",Stu[i][j].Gubun,Stu[i][j+1].Class,hak[i][j],Stu[i][j+2].Grade);
			}        
		}

	
	prn_line();  

	

	printf("�� ��������\t��û����\t�̼�����\t�������\t�����\n");
	prn_line();  
    printf("%5d����\t%2.f����\t\t%3.f����\t\t%6.2f\t\t%2.2f\n",Sugang,hak_sum1,hak_sum2,tot,ba);

	prn_line();  
    
    fflush(stdin);

	//getch();


   
}

double Trade()       
{
    
    for(i=0;i<Sugang;i++)
    {
        for(j=0;j<1;j++)
        {
            
			if(strcmp(Stu[i][j+2].Grade,"a+")==0)  //���ڿ� ���Լ� strcmp(string1,string2)==0 0�϶��� ��
            {
                sum+=4.5*hak[i][j];        
            }
            
            else if(strcmp(Stu[i][j+2].Grade,"A+")==0)
            {
                sum+=4.5*hak[i][j];        
            }
            
            else if(strcmp(Stu[i][j+2].Grade,"a")==0)
            {
                sum+=4.0*hak[i][j];        
            }
            
            else if(strcmp(Stu[i][j+2].Grade,"A")==0)
            {
                sum+=4.0*hak[i][j];        
            }
            
            else if(strcmp(Stu[i][j+2].Grade,"b+")==0)
            {
                sum+=3.5*hak[i][j];
            }
            
            else if(strcmp(Stu[i][j+2].Grade,"B+")==0)
            {
                sum+=3.5*hak[i][j];
            }
            
            else if(strcmp(Stu[i][j+2].Grade,"b")==0)
            {
                sum+=3.0*hak[i][j];
            }
            
            else if(strcmp(Stu[i][j+2].Grade,"B")==0)
            {
                sum+=3.0*hak[i][j];
            }
            
            else if(strcmp(Stu[i][j+2].Grade,"c+")==0)
            {
                sum+=2.5*hak[i][j];
            }
            
            else if(strcmp(Stu[i][j+2].Grade,"C+")==0)
            {
                sum+=2.5*hak[i][j];
            }
            
            else if(strcmp(Stu[i][j+2].Grade,"c")==0)
            {
                sum+=2.0*hak[i][j];
            }
            
            else if(strcmp(Stu[i][j+2].Grade,"C")==0)
            {
                sum+=2.0*hak[i][j];
            }
            
            else if(strcmp(Stu[i][j+2].Grade,"d+")==0)
            {
                sum+=1.5*hak[i][j];
            }
            
            else if(strcmp(Stu[i][j+2].Grade,"D+")==0)
            {
                sum+=1.5*hak[i][j];
            }
            
            else if(strcmp(Stu[i][j+2].Grade,"d")==0)
            {
                sum+=1.0*hak[i][j];
            }
            
            else if(strcmp(Stu[i][j+2].Grade,"D")==0)
            {
                sum+=1.0*hak[i][j];
            }
            
            else if(strcmp(Stu[i][j+2].Grade,"f")==0)
            {
                sum+=0*hak[i][j];     
            }
            
            else if(strcmp(Stu[i][j+2].Grade,"F")==0)
            {
                sum+=0*hak[i][j];     
            }
        }
    }
    
    return sum;   
    
}

void Diary_Input()
{

	
	
	system("cls");
	printf("\t\t\t���� Diary (Menu) ��������������������������������                          ����Login ����������������\n");
	printf("\t\t\t��   ȯ���մϴ� %s��                        ��                          ��    �̸� : %s     ��\n",Stu[0][0].Name,Stu[0][0].Name);
	printf("\t\t\t��������������������������������������������������                          ��    �й� : %s   ��\n",Stu[0][0].number);
	puts("\t\t\t                                                                            ��������������������������");
		
	
	printf("\t\t\t\t�������� ���� �� ������� �Է��ϼ��䦡����������������\n");	
	printf("\t\t\t\t��\t �Է� :                                     ��\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b");	
	gets(Diary);      //���� �Է�
	printf("\t\t\t\t������������������������������������������������������");
	

	printf("\n\n\n\n\t\t\t\t�������� ���� �� ����� �Է³��릡����������������\n");
	printf("\t\t\t\t��\t ���� :  %s                       ��\n",Diary);
	printf("\t\t\t\t��������������������������������������������������\n");
	
	
	printf("\n\t\t\t\t\t�޴�ȭ������ ���ư��ϴ�");

	//getch();
		
}

void SaveStudentFile()
{

	FILE *FP;
	int i,j;

	
	FP = fopen("Student.txt", "w");

    fprintf(FP,"==========================================================================\n");
	fprintf(FP,"\t\t\t2009�г⵵ 1�б�\n");
    fprintf(FP,"==========================================================================\n");
    fprintf(FP,"\t����\t\t�����\t\t����\t\t����\n");
    fprintf(FP,"==========================================================================\n");
    
	for(i=0;i<Sugang;i++)
		{    
        for(j=0;j<1;j++)
			{
            
				fprintf(FP,"\t%s\t\t%s\t\t%3.f\t\t%3s\n",Stu[i][j].Gubun,Stu[i][j+1].Class,hak[i][j],Stu[i][j+2].Grade);
			}        
		}
    fprintf(FP,"==========================================================================\n");
	fprintf(FP,"�� ��������\t��û����\t�̼�����\t�������\t�����\n");
	fprintf(FP,"==========================================================================\n");
    fprintf(FP,"%5d����\t%2.f����\t\t%3.f����\t\t%6.2f\t\t%2.2f\n",Sugang,hak_sum1,hak_sum2,tot,ba);
    fprintf(FP,"==========================================================================\n");
	 
    
    fflush(stdin);
	
	fclose(FP);
	puts("\n\t\t\t\t Student.txt is Saved");

	//getch();


	
}

void SaveDiaryFile()
{

	FILE *FPS;
	
	FPS = fopen("Diary.txt", "w");

    fprintf(FPS,"\n\t\t\t\t�������� ���� �� ����� �Է³��릡����������������\n");
	fprintf(FPS,"\t\t\t\t��\t ���� :  %s                       ��\n",Diary);
	fprintf(FPS,"\t\t\t\t��������������������������������������������������\n");
	
    
    fflush(stdin);
	
	fclose(FPS);
	puts("\n\t\t\t\t Diary.txt is Saved");

	//getch();
}

void HelpDesk()
{
	system("cls");

	puts("\t\t\t�������� (Menu) ����������������������������������������                  ����Login ����������������");
	printf("\t\t\t��                                                      ��                  ��    �̸� : %s     ��\n",Stu[0][0].Name);
	printf("\t\t\t��                                                      ��                  ��    �й� : %s   ��\n",Stu[0][0].number);
	puts("\t\t\t��  �� ���α׷��� ������� ���� ���� �� ������ ����     ��                  ��������������������������");
	puts("\t\t\t��   �ϱ� ���Ͽ� ������� ���α׷��Դϴ�.               ��");
	puts("\t\t\t��  �л��� ������ �Է�/��� �ϰ� �� ������ ������ ��    ��");
	puts("\t\t\t��   �ֽ��ϴ�. ����, ���������� ���� �ڽ��� ���� ��     ��"); 
	puts("\t\t\t��  ����� ���� �߰��Ͽ� �˾ƺ��� ���� ����� �����ϴ�. ��");
	puts("\t\t\t��   ���� �̿� ��Ź�帳�ϴ�.                            ��");
	puts("\t\t\t��                                                      ��");
	puts("\t\t\t��  ������ : Team 06��                                  ��");
	puts("\t\t\t��  ���ǻ��� H.P : 010-2512-5222                        ��");
	puts("\t\t\t��                                                      ��");
	puts("\t\t\t����������������������������������������������������������");

	//getch();
}


void Exit()
{
		printf("\t\t\t���� ���α׷��� �����մϴ�..!!  ����������������������\n");	
		printf("\t\t\t��           �ȳ������ʽÿ� %s��..!!            ��\n",Stu[0][0].Name);	
		printf("\t\t\t������������������������������������������������������\n");

		END = 5;
}
