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
	printf("¦£¦¡·Î±×ÀÎ¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤\n");
	printf("\t\t\t\t\t¦¢    ÀÌ¸§ :            ¦¢\b\b\b\b\b\b");
	scanf("%s",&Stu[0][0].Name);
	printf("\t\t\t\t\t¦¢    ÇÐ¹ø :            ¦¢\b\b\b\b\b\b");
	scanf("%s",&Stu[0][0].number);
	printf("\t\t\t\t\t¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥");	

	//getch();

}

void MainScreen()
{
	//system("cls");

	puts("\t\t\t¦£¦¡³ªÀÇ ¼ºÀû°ü¸® ÇÁ·Î±×·¥¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤                  ¦£¦¡Login ¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤");
	printf("\t\t\t¦¢   Menu                                               ¦¢                  ¦¢    ÀÌ¸§ : %s     ¦¢\n",Stu[0][0].Name);
	printf("\t\t\t¦¢                                                      ¦¢                  ¦¢    ÇÐ¹ø : %s   ¦¢\n",Stu[0][0].number);
	puts("\t\t\t¦¢      - Diary / Grade -                               ¦¢                  ¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥");
	puts("\t\t\t¦¢                                                      ¦¢");
	puts("\t\t\t¦¢              1. ³ªÀÇ ¼ºÀû ÀÔ·Â                       ¦¢");
	puts("\t\t\t¦¢              2. ³ªÀÇ ¼ºÀû Ãâ·Â                       ¦¢");
	puts("\t\t\t¦¢              3. ³ªÀÇ ½ÃÇèÀÏÁ¤                        ¦¢");
	puts("\t\t\t¦¢                                                      ¦¢");
	puts("\t\t\t¦¢      - Save -                                        ¦¢");
	puts("\t\t\t¦¢                                                      ¦¢");	
	puts("\t\t\t¦¢              4. ¼ºÀûÁ¤º¸ ÀúÀåÇÏ±â                    ¦¢"); 
	puts("\t\t\t¦¢              5. ³ªÀÇÀÏÁ¤ ÀúÀåÇÏ±â                    ¦¢");
	puts("\t\t\t¦¢                                                      ¦¢");
	puts("\t\t\t¦¢      - Q&A / Exit -                                  ¦¢");
	puts("\t\t\t¦¢                                                      ¦¢");
	puts("\t\t\t¦¢              6. µµ¿ò¸»                               ¦¢");
	puts("\t\t\t¦¢              7. The End                              ¦¢");
	puts("\t\t\t¦¢                                                      ¦¢");
	puts("\t\t\t¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥");
	


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

	puts("\t\t\t¦£¦¡¼ºÀûÀÔ·Â(Menu)¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤                          ¦£¦¡Login ¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤");
	printf("\t\t\t¦¢   È¯¿µÇÕ´Ï´Ù %s´Ô                        ¦¢                          ¦¢    ÀÌ¸§ : %s     ¦¢\n",Stu[0][0].Name,Stu[0][0].Name);
	printf("\t\t\t¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥                          ¦¢    ÇÐ¹ø : %s   ¦¢\n",Stu[0][0].number);
	puts("\t\t\t                                                                            ¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥");
		

	
	for(i=0;i<Sugang;i++)
    {
        for(j=0;j<1;j++)
        {
            printf("[%d]¹øÂ° °ú¸ñÀÔ´Ï´Ù.\n\n",i+1);        
            
            printf("±¸ºÐÀ» ÀÔ·ÂÇÏ¼¼¿ä(±³¼±/±³ÇÊ/Àü¼±/ÀüÇÊ/±³¾ç) : ");
            fflush(stdin);
			scanf("%s",Stu[i][j].Gubun);
            
            printf("°ú¸ñ¸íÀ» ÀÔ·ÂÇÏ¼¼¿ä(Ex.C¾ð¾î / C++ /Java) : ");
            fflush(stdin);
			scanf("%s",Stu[i][j+1].Class);
            
            printf("ÇÐÁ¡À» ÀÔ·ÂÇÏ¼¼¿ä(3ÇÐÁ¡/2ÇÐÁ¡/1ÇÐÁ¡ Á¤¼ö¸¸ÀÔ·Â) : ");
            fflush(stdin);
            scanf("%lf",&hak[i][j]);
            
            hak_sum1+=(hak[i][j]);                                
            
            printf("¼ºÀûÀ» ÀÔ·ÂÇÏ¼¼¿ä(A+ ~ F): ");
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
	tot=Trade(sum)/hak_sum1; //ÆòÁ¡±¸ÇÏ±â
	ba=tot/4.5*100;  //¹éºÐÀ² ±¸ÇÏ±â


	prn_line();
    printf("\t\t\t2009ÇÐ³âµµ 1ÇÐ±â\n");
    prn_line();
    printf("\t±¸ºÐ\t\t°ú¸ñ¸í\t\tÇÐÁ¡\t\t¼ºÀû\n");
    prn_line();

	for(i=0;i<Sugang;i++)
		{    
        for(j=0;j<1;j++)
			{
            
				printf("\t%s\t\t%s\t\t%3.f\t\t%3s\n",Stu[i][j].Gubun,Stu[i][j+1].Class,hak[i][j],Stu[i][j+2].Grade);
			}        
		}
	printf("\t\tÃÑ ¼ö°­°ú¸ñ\t½ÅÃ»ÇÐÁ¡\tÀÌ¼öÇÐÁ¡\n");
    printf("\t\t%5d°ú¸ñ\t%2.fÇÐÁ¡\t\t%3.fÇÐÁ¡\t\t\n",Sugang,hak_sum1,hak_sum2);

	prn_line();  
    
    fflush(stdin);

	//getch();

}


void GradeMenu_Output()
{
	
	system("cls");

	
	puts("\t\t\t¦£¦¡¼ºÀûÀÔ·Â(Menu)¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤                          ¦£¦¡Login ¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤");
	printf("\t\t\t¦¢   È¯¿µÇÕ´Ï´Ù %s´Ô                        ¦¢                          ¦¢    ÀÌ¸§ : %s     ¦¢\n",Stu[0][0].Name,Stu[0][0].Name);
	printf("\t\t\t¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥                          ¦¢    ÇÐ¹ø : %s   ¦¢\n",Stu[0][0].number);
	puts("\t\t\t                                                                            ¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥");
	prn_line();
    printf("\t\t\t2009ÇÐ³âµµ 1ÇÐ±â\n");
    prn_line();
    printf("\t±¸ºÐ\t\t°ú¸ñ¸í\t\tÇÐÁ¡\t\t¼ºÀû\n");
    prn_line();

	for(i=0;i<Sugang;i++)
		{    
        for(j=0;j<1;j++)
			{
            
				printf("\t%s\t\t%s\t\t%3.f\t\t%3s\n",Stu[i][j].Gubun,Stu[i][j+1].Class,hak[i][j],Stu[i][j+2].Grade);
			}        
		}

	
	prn_line();  

	

	printf("ÃÑ ¼ö°­°ú¸ñ\t½ÅÃ»ÇÐÁ¡\tÀÌ¼öÇÐÁ¡\tÆòÁ¡Æò±Õ\t¹éºÐÀ²\n");
	prn_line();  
    printf("%5d°ú¸ñ\t%2.fÇÐÁ¡\t\t%3.fÇÐÁ¡\t\t%6.2f\t\t%2.2f\n",Sugang,hak_sum1,hak_sum2,tot,ba);

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
            
			if(strcmp(Stu[i][j+2].Grade,"a+")==0)  //¹®ÀÚ¿­ ºñ±³ÇÔ¼ö strcmp(string1,string2)==0 0ÀÏ¶§°¡ Âü
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
	printf("\t\t\t¦£¦¡ Diary (Menu) ¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤                          ¦£¦¡Login ¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤\n");
	printf("\t\t\t¦¢   È¯¿µÇÕ´Ï´Ù %s´Ô                        ¦¢                          ¦¢    ÀÌ¸§ : %s     ¦¢\n",Stu[0][0].Name,Stu[0][0].Name);
	printf("\t\t\t¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥                          ¦¢    ÇÐ¹ø : %s   ¦¢\n",Stu[0][0].number);
	puts("\t\t\t                                                                            ¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥");
		
	
	printf("\t\t\t\t¦£¦¡½ÃÇè ÀÏÁ¤ ¹× ±â³äÀÏÀ» ÀÔ·ÂÇÏ¼¼¿ä¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤\n");	
	printf("\t\t\t\t¦¢\t ÀÔ·Â :                                     ¦¢\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b");	
	gets(Diary);      //Á÷Á¢ ÀÔ·Â
	printf("\t\t\t\t¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥");
	

	printf("\n\n\n\n\t\t\t\t¦£¦¡½ÃÇè ÀÏÁ¤ ¹× ±â³äÀÏ ÀÔ·Â³»¿ë¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤\n");
	printf("\t\t\t\t¦¢\t ³»¿ë :  %s                       ¦¢\n",Diary);
	printf("\t\t\t\t¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥\n");
	
	
	printf("\n\t\t\t\t\t¸Þ´ºÈ­¸éÀ¸·Î µ¹¾Æ°©´Ï´Ù");

	//getch();
		
}

void SaveStudentFile()
{

	FILE *FP;
	int i,j;

	
	FP = fopen("Student.txt", "w");

    fprintf(FP,"==========================================================================\n");
	fprintf(FP,"\t\t\t2009ÇÐ³âµµ 1ÇÐ±â\n");
    fprintf(FP,"==========================================================================\n");
    fprintf(FP,"\t±¸ºÐ\t\t°ú¸ñ¸í\t\tÇÐÁ¡\t\t¼ºÀû\n");
    fprintf(FP,"==========================================================================\n");
    
	for(i=0;i<Sugang;i++)
		{    
        for(j=0;j<1;j++)
			{
            
				fprintf(FP,"\t%s\t\t%s\t\t%3.f\t\t%3s\n",Stu[i][j].Gubun,Stu[i][j+1].Class,hak[i][j],Stu[i][j+2].Grade);
			}        
		}
    fprintf(FP,"==========================================================================\n");
	fprintf(FP,"ÃÑ ¼ö°­°ú¸ñ\t½ÅÃ»ÇÐÁ¡\tÀÌ¼öÇÐÁ¡\tÆòÁ¡Æò±Õ\t¹éºÐÀ²\n");
	fprintf(FP,"==========================================================================\n");
    fprintf(FP,"%5d°ú¸ñ\t%2.fÇÐÁ¡\t\t%3.fÇÐÁ¡\t\t%6.2f\t\t%2.2f\n",Sugang,hak_sum1,hak_sum2,tot,ba);
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

    fprintf(FPS,"\n\t\t\t\t¦£¦¡½ÃÇè ÀÏÁ¤ ¹× ±â³äÀÏ ÀÔ·Â³»¿ë¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤\n");
	fprintf(FPS,"\t\t\t\t¦¢\t ³»¿ë :  %s                       ¦¢\n",Diary);
	fprintf(FPS,"\t\t\t\t¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥\n");
	
    
    fflush(stdin);
	
	fclose(FPS);
	puts("\n\t\t\t\t Diary.txt is Saved");

	//getch();
}

void HelpDesk()
{
	system("cls");

	puts("\t\t\t¦£¦¡µµ¿ò¸» (Menu) ¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤                  ¦£¦¡Login ¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤");
	printf("\t\t\t¦¢                                                      ¦¢                  ¦¢    ÀÌ¸§ : %s     ¦¢\n",Stu[0][0].Name);
	printf("\t\t\t¦¢                                                      ¦¢                  ¦¢    ÇÐ¹ø : %s   ¦¢\n",Stu[0][0].number);
	puts("\t\t\t¦¢  º» ÇÁ·Î±×·¥Àº »ç¿ëÀÚÀÇ ¼ºÀû °ü¸® ¹× ÀÏÁ¤À» °ü¸®     ¦¢                  ¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥");
	puts("\t\t\t¦¢   ÇÏ±â À§ÇÏ¿© ¸¸µé¾îÁø ÇÁ·Î±×·¥ÀÔ´Ï´Ù.               ¦¢");
	puts("\t\t\t¦¢  ÇÐ»ýÀÇ ¼ºÀûÀ» ÀÔ·Â/Ãâ·Â ÇÏ°í ±× Á¤º¸¸¦ ÀúÀåÇÒ ¼ö    ¦¢");
	puts("\t\t\t¦¢   ÀÖ½À´Ï´Ù. ¶ÇÇÑ, ÀÏÁ¤°ü¸®¸¦ ÅëÇØ ÀÚ½ÅÀÇ ÀÏÁ¤ ¹×     ¦¢"); 
	puts("\t\t\t¦¢  ±â³äÀÏ µîÀ» Ãß°¡ÇÏ¿© ¾Ë¾Æº¸±â ½±°Ô ¸¸µé¾î Á³½À´Ï´Ù. ¦¢");
	puts("\t\t\t¦¢   ¸¹Àº ÀÌ¿ë ºÎÅ¹µå¸³´Ï´Ù.                            ¦¢");
	puts("\t\t\t¦¢                                                      ¦¢");
	puts("\t\t\t¦¢  Á¦ÀÛÀÚ : Team 06Á¶                                  ¦¢");
	puts("\t\t\t¦¢  ¹®ÀÇ»çÇ× H.P : 010-2512-5222                        ¦¢");
	puts("\t\t\t¦¢                                                      ¦¢");
	puts("\t\t\t¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥");

	//getch();
}


void Exit()
{
		printf("\t\t\t¦£¦¡ ÇÁ·Î±×·¥À» Á¾·áÇÕ´Ï´Ù..!!  ¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤\n");	
		printf("\t\t\t¦¢           ¾È³çÈ÷°¡½Ê½Ã¿À %s´Ô..!!            ¦¢\n",Stu[0][0].Name);	
		printf("\t\t\t¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥\n");

		END = 5;
}
