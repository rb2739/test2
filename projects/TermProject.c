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
	printf("忙式煎斜檣式式式式式式式忖\n");
	printf("\t\t\t\t\t弛    檜葷 :            弛\b\b\b\b\b\b");
	scanf("%s",&Stu[0][0].Name);
	printf("\t\t\t\t\t弛    з廓 :            弛\b\b\b\b\b\b");
	scanf("%s",&Stu[0][0].number);
	printf("\t\t\t\t\t戌式式式式式式式式式式式戎");	

	//getch();

}

void MainScreen()
{
	//system("cls");

	puts("\t\t\t忙式釭曖 撩瞳婦葬 Щ煎斜極式式式式式式式式式式式式式式式忖                  忙式Login 式式式式式式式忖");
	printf("\t\t\t弛   Menu                                               弛                  弛    檜葷 : %s     弛\n",Stu[0][0].Name);
	printf("\t\t\t弛                                                      弛                  弛    з廓 : %s   弛\n",Stu[0][0].number);
	puts("\t\t\t弛      - Diary / Grade -                               弛                  戌式式式式式式式式式式式戎");
	puts("\t\t\t弛                                                      弛");
	puts("\t\t\t弛              1. 釭曖 撩瞳 殮溘                       弛");
	puts("\t\t\t弛              2. 釭曖 撩瞳 轎溘                       弛");
	puts("\t\t\t弛              3. 釭曖 衛я橾薑                        弛");
	puts("\t\t\t弛                                                      弛");
	puts("\t\t\t弛      - Save -                                        弛");
	puts("\t\t\t弛                                                      弛");	
	puts("\t\t\t弛              4. 撩瞳薑爾 盪濰ж晦                    弛"); 
	puts("\t\t\t弛              5. 釭曖橾薑 盪濰ж晦                    弛");
	puts("\t\t\t弛                                                      弛");
	puts("\t\t\t弛      - Q&A / Exit -                                  弛");
	puts("\t\t\t弛                                                      弛");
	puts("\t\t\t弛              6. 紫遺蜓                               弛");
	puts("\t\t\t弛              7. The End                              弛");
	puts("\t\t\t弛                                                      弛");
	puts("\t\t\t戌式式式式式式式式式式式式式式式式式式式式式式式式式式式戎");
	


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

	puts("\t\t\t忙式撩瞳殮溘(Menu)式式式式式式式式式式式式式式式忖                          忙式Login 式式式式式式式忖");
	printf("\t\t\t弛   �紊腎桭炴� %s椒                        弛                          弛    檜葷 : %s     弛\n",Stu[0][0].Name,Stu[0][0].Name);
	printf("\t\t\t戌式式式式式式式式式式式式式式式式式式式式式式式戎                          弛    з廓 : %s   弛\n",Stu[0][0].number);
	puts("\t\t\t                                                                            戌式式式式式式式式式式式戎");
		

	
	for(i=0;i<Sugang;i++)
    {
        for(j=0;j<1;j++)
        {
            printf("[%d]廓簞 婁跡殮棲棻.\n\n",i+1);        
            
            printf("掘碟擊 殮溘ж撮蹂(掖摹/掖в/瞪摹/瞪в/掖曄) : ");
            fflush(stdin);
			scanf("%s",Stu[i][j].Gubun);
            
            printf("婁跡貲擊 殮溘ж撮蹂(Ex.C樹橫 / C++ /Java) : ");
            fflush(stdin);
			scanf("%s",Stu[i][j+1].Class);
            
            printf("з薄擊 殮溘ж撮蹂(3з薄/2з薄/1з薄 薑熱虜殮溘) : ");
            fflush(stdin);
            scanf("%lf",&hak[i][j]);
            
            hak_sum1+=(hak[i][j]);                                
            
            printf("撩瞳擊 殮溘ж撮蹂(A+ ~ F): ");
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
	tot=Trade(sum)/hak_sum1; //ゎ薄掘ж晦
	ba=tot/4.5*100;  //寥碟徽 掘ж晦


	prn_line();
    printf("\t\t\t2009з喇紫 1з晦\n");
    prn_line();
    printf("\t掘碟\t\t婁跡貲\t\tз薄\t\t撩瞳\n");
    prn_line();

	for(i=0;i<Sugang;i++)
		{    
        for(j=0;j<1;j++)
			{
            
				printf("\t%s\t\t%s\t\t%3.f\t\t%3s\n",Stu[i][j].Gubun,Stu[i][j+1].Class,hak[i][j],Stu[i][j+2].Grade);
			}        
		}
	printf("\t\t識 熱鬼婁跡\t褐羶з薄\t檜熱з薄\n");
    printf("\t\t%5d婁跡\t%2.fз薄\t\t%3.fз薄\t\t\n",Sugang,hak_sum1,hak_sum2);

	prn_line();  
    
    fflush(stdin);

	//getch();

}


void GradeMenu_Output()
{
	
	system("cls");

	
	puts("\t\t\t忙式撩瞳殮溘(Menu)式式式式式式式式式式式式式式式忖                          忙式Login 式式式式式式式忖");
	printf("\t\t\t弛   �紊腎桭炴� %s椒                        弛                          弛    檜葷 : %s     弛\n",Stu[0][0].Name,Stu[0][0].Name);
	printf("\t\t\t戌式式式式式式式式式式式式式式式式式式式式式式式戎                          弛    з廓 : %s   弛\n",Stu[0][0].number);
	puts("\t\t\t                                                                            戌式式式式式式式式式式式戎");
	prn_line();
    printf("\t\t\t2009з喇紫 1з晦\n");
    prn_line();
    printf("\t掘碟\t\t婁跡貲\t\tз薄\t\t撩瞳\n");
    prn_line();

	for(i=0;i<Sugang;i++)
		{    
        for(j=0;j<1;j++)
			{
            
				printf("\t%s\t\t%s\t\t%3.f\t\t%3s\n",Stu[i][j].Gubun,Stu[i][j+1].Class,hak[i][j],Stu[i][j+2].Grade);
			}        
		}

	
	prn_line();  

	

	printf("識 熱鬼婁跡\t褐羶з薄\t檜熱з薄\tゎ薄ゎ敕\t寥碟徽\n");
	prn_line();  
    printf("%5d婁跡\t%2.fз薄\t\t%3.fз薄\t\t%6.2f\t\t%2.2f\n",Sugang,hak_sum1,hak_sum2,tot,ba);

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
            
			if(strcmp(Stu[i][j+2].Grade,"a+")==0)  //僥濠翮 綠掖л熱 strcmp(string1,string2)==0 0橾陽陛 霤
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
	printf("\t\t\t忙式 Diary (Menu) 式式式式式式式式式式式式式式式忖                          忙式Login 式式式式式式式忖\n");
	printf("\t\t\t弛   �紊腎桭炴� %s椒                        弛                          弛    檜葷 : %s     弛\n",Stu[0][0].Name,Stu[0][0].Name);
	printf("\t\t\t戌式式式式式式式式式式式式式式式式式式式式式式式戎                          弛    з廓 : %s   弛\n",Stu[0][0].number);
	puts("\t\t\t                                                                            戌式式式式式式式式式式式戎");
		
	
	printf("\t\t\t\t忙式衛я 橾薑 塽 晦喃橾擊 殮溘ж撮蹂式式式式式式式式忖\n");	
	printf("\t\t\t\t弛\t 殮溘 :                                     弛\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b");	
	gets(Diary);      //霜蕾 殮溘
	printf("\t\t\t\t戌式式式式式式式式式式式式式式式式式式式式式式式式式戎");
	

	printf("\n\n\n\n\t\t\t\t忙式衛я 橾薑 塽 晦喃橾 殮溘頂辨式式式式式式式式忖\n");
	printf("\t\t\t\t弛\t 頂辨 :  %s                       弛\n",Diary);
	printf("\t\t\t\t戌式式式式式式式式式式式式式式式式式式式式式式式戎\n");
	
	
	printf("\n\t\t\t\t\t詭景�飛橉虞� 給嬴骨棲棻");

	//getch();
		
}

void SaveStudentFile()
{

	FILE *FP;
	int i,j;

	
	FP = fopen("Student.txt", "w");

    fprintf(FP,"==========================================================================\n");
	fprintf(FP,"\t\t\t2009з喇紫 1з晦\n");
    fprintf(FP,"==========================================================================\n");
    fprintf(FP,"\t掘碟\t\t婁跡貲\t\tз薄\t\t撩瞳\n");
    fprintf(FP,"==========================================================================\n");
    
	for(i=0;i<Sugang;i++)
		{    
        for(j=0;j<1;j++)
			{
            
				fprintf(FP,"\t%s\t\t%s\t\t%3.f\t\t%3s\n",Stu[i][j].Gubun,Stu[i][j+1].Class,hak[i][j],Stu[i][j+2].Grade);
			}        
		}
    fprintf(FP,"==========================================================================\n");
	fprintf(FP,"識 熱鬼婁跡\t褐羶з薄\t檜熱з薄\tゎ薄ゎ敕\t寥碟徽\n");
	fprintf(FP,"==========================================================================\n");
    fprintf(FP,"%5d婁跡\t%2.fз薄\t\t%3.fз薄\t\t%6.2f\t\t%2.2f\n",Sugang,hak_sum1,hak_sum2,tot,ba);
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

    fprintf(FPS,"\n\t\t\t\t忙式衛я 橾薑 塽 晦喃橾 殮溘頂辨式式式式式式式式忖\n");
	fprintf(FPS,"\t\t\t\t弛\t 頂辨 :  %s                       弛\n",Diary);
	fprintf(FPS,"\t\t\t\t戌式式式式式式式式式式式式式式式式式式式式式式式戎\n");
	
    
    fflush(stdin);
	
	fclose(FPS);
	puts("\n\t\t\t\t Diary.txt is Saved");

	//getch();
}

void HelpDesk()
{
	system("cls");

	puts("\t\t\t忙式紫遺蜓 (Menu) 式式式式式式式式式式式式式式式式式式式忖                  忙式Login 式式式式式式式忖");
	printf("\t\t\t弛                                                      弛                  弛    檜葷 : %s     弛\n",Stu[0][0].Name);
	printf("\t\t\t弛                                                      弛                  弛    з廓 : %s   弛\n",Stu[0][0].number);
	puts("\t\t\t弛  獄 Щ煎斜極擎 餌辨濠曖 撩瞳 婦葬 塽 橾薑擊 婦葬     弛                  戌式式式式式式式式式式式戎");
	puts("\t\t\t弛   ж晦 嬪ж罹 虜菟橫霞 Щ煎斜極殮棲棻.               弛");
	puts("\t\t\t弛  з儅曖 撩瞳擊 殮溘/轎溘 ж堅 斜 薑爾蒂 盪濰й 熱    弛");
	puts("\t\t\t弛   氈蝗棲棻. 傳и, 橾薑婦葬蒂 鱔п 濠褐曖 橾薑 塽     弛"); 
	puts("\t\t\t弛  晦喃橾 蛔擊 蹺陛ж罹 憲嬴爾晦 蔣啪 虜菟橫 螺蝗棲棻. 弛");
	puts("\t\t\t弛   號擎 檜辨 睡饕萄董棲棻.                            弛");
	puts("\t\t\t弛                                                      弛");
	puts("\t\t\t弛  薯濛濠 : Team 06褻                                  弛");
	puts("\t\t\t弛  僥曖餌о H.P : 010-2512-5222                        弛");
	puts("\t\t\t弛                                                      弛");
	puts("\t\t\t戌式式式式式式式式式式式式式式式式式式式式式式式式式式式戎");

	//getch();
}


void Exit()
{
		printf("\t\t\t忙式 Щ煎斜極擊 謙猿м棲棻..!!  式式式式式式式式式式忖\n");	
		printf("\t\t\t弛           寰喟�鱁■宒藩� %s椒..!!            弛\n",Stu[0][0].Name);	
		printf("\t\t\t戌式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");

		END = 5;
}
