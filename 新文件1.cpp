#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	while(1)
	{
		int choose_time,adult,child,flag_1=1,flag_2=1,total;
		float total_price=0;
		printf("------------�w��ϥΦ��t��------------\n");
		while(flag_1==1)
		{
			printf("�п�ܻ���p��覡�G\n1.���餤��\n2.����ߤW�B�Ұ���\n");
			scanf("%d",&choose_time);
		
			if(choose_time==1)
			{
				
					printf("-------��ܥ��餤�ȭp���覡-------\n");
					printf("�j�H�H�ơG");
					scanf("%d",&adult);
					printf("�p�ĤH�ơG");
					scanf("%d",&child);
				
					total = adult + child;
					int free;
					free = total/3;
					
					
					if(free!=0)
					{
						int temp_adult,temp_child;
						
						temp_adult = adult;
						temp_child = child;	
						
						int record_child = 0;
						int record_adult = 0;
						
						for(int i=0;i<free;i++)
						{
							if(temp_child!=0)
							{
								temp_child--;
								record_child++;
							}
							else
							{
								temp_adult--;
								record_adult++;
							}	
						}
						
						if((adult+child)<10)
						{
							total_price = (temp_adult*268 + temp_child*120) *1.1;
						
							printf("\n\n�p�p�G\n�j�H%d��,�p��%d��\n\n�馩�G\n�j�H%d��,�p��%d��\n\n",adult,child,record_adult,record_child);
							printf("�p�p���B�G%.0f\n\n",total_price);
						
							printf("�нT�{�O�_���T�L�~\n1.���T\n2.���~\n");
							scanf("%d",&flag_2);
						
							if(flag_2==1)
							{
								printf("\n------------�o������------------\n");
								printf("�j�H%d��\t268X%d  %d\n�p��%d��\t120X%d  %d\n",adult,adult,(268*adult),child,child,(120*child));
								printf("\n�馩���B\n�j�H%d��\t-268X%d  %d\n�p��%d��\t-120X%d  %d\n",record_adult,record_adult,(-268*record_adult),record_child,record_child,(-120*record_child));
								printf("\n�A�ȶO\t\t%f\n",(temp_adult*268 + temp_child*120)*0.1);
								printf("�`���B���G%.0f\n",total_price);
								printf("------------�o������------------\n\n\n");
							} 
							else if(flag_2==2)
							{
								break;
							}
							
						}
						else
						{
							total_price = (temp_adult*268 + temp_child*120) *1.1*0.95;
						
							printf("\n\n�p�p�G\n�j�H%d��,�p��%d��\n\n�馩�G\n�j�H%d��,�p��%d��\n\n",adult,child,record_adult,record_child);
							printf("���Q�H�A���E����\n");
							printf("�p�p���B�G%.0f\n\n",total_price);
						
							printf("�нT�{�O�_���T�L�~\n1.���T\n2.���~\n");
							scanf("%d",&flag_2);
						
							if(flag_2==1)
							{
								printf("\n------------�o������------------\n");
								printf("�j�H%d��\t268X%d  %d\n�p��%d��\t120X%d  %d\n",adult,adult,(268*adult),child,child,(120*child));
								printf("\n�馩���B\n�j�H%d��\t-268X%d  %d\n�p��%d��\t-120X%d  %d\n",record_adult,record_adult,(-268*record_adult),record_child,record_child,(-120*record_child));
								printf("\n�A�ȶO\t\t%f\n",(temp_adult*268 + temp_child*120)*0.1);
								printf("���Q�H�E����\n");
								printf("�`���B���G%.0f\n",total_price);
								printf("------------�o������------------\n\n\n");
							} 
							else if(flag_2==2)
							{
								break;
							}
						}
						
						
						
					}
				
					else
					{
						total_price = (adult*268 + child*120) *1.1;
						
						printf("\n\n�p�p�G\n�j�H%d��,�p��%d��\n\n",adult,child);
						printf("�p�p���B�G%.0f\n\n",total_price);
						
						printf("�нT�{�O�_���T�L�~\n1.���T\n2.���~\n");
						scanf("%d",&flag_2);
						
						if(flag_2==1)
						{
							printf("\n------------�o������------------\n");
							printf("�j�H%d��\t268X%d  %d\n�p��%d��\t120X%d  %d\n",adult,adult,(268*adult),child,child,(120*child));
							printf("�A�ȶO\t\t%f\n",(adult*268 + child*120)*0.1);
							printf("�`���B���G%.0f\n",total_price);
							printf("------------�o������------------\n\n\n");
						} 
						else if(flag_2==2)
						{
							break;
						}
					
					
						
					
					}
				
				
				
				
				flag_1=0;
			}	 
			else if(choose_time==2)
			{	
					printf("-------��ܥ���ߤW�B�Ұ���p���覡-------\n");
					printf("�j�H�H�ơG");
					scanf("%d",&adult);
					printf("�p�ĤH�ơG");
					scanf("%d",&child);
				
					total = adult + child;
					int free;
					free = total/3;
					
					
					if(free!=0)
					{
						int temp_adult,temp_child;
						
						temp_adult = adult;
						temp_child = child;	
						
						int record_child = 0;
						int record_adult = 0;
						
						for(int i=0;i<free;i++)
						{
							if(temp_child!=0)
							{
								temp_child--;
								record_child++;
							}
							else
							{
								temp_adult--;
								record_adult++;
							}	
						}
						
						if((adult+child)<10)
						{
							total_price = (temp_adult*368 + temp_child*150) *1.1;
						
							printf("\n\n�p�p�G\n�j�H%d��,�p��%d��\n\n�馩�G\n�j�H%d��,�p��%d��\n\n",adult,child,record_adult,record_child);
							printf("�p�p���B�G%.0f\n\n",total_price);
						
							printf("�нT�{�O�_���T�L�~\n1.���T\n2.���~\n");
							scanf("%d",&flag_2);
						
							if(flag_2==1)
							{
								printf("\n------------�o������------------\n");
								printf("�j�H%d��\t368X%d  %d\n�p��%d��\t150X%d  %d\n",adult,adult,(368*adult),child,child,(150*child));
								printf("\n�馩���B\n�j�H%d��\t-368X%d  %d\n�p��%d��\t-150X%d  %d\n",record_adult,record_adult,(-368*record_adult),record_child,record_child,(-150*record_child));
								printf("\n�A�ȶO\t\t%f\n",(temp_adult*368 + temp_child*150)*0.1);
								printf("�`���B���G%.0f\n",total_price);
								printf("------------�o������------------\n\n\n");
							} 
							else if(flag_2==2)
							{
								break;
							}
							
						}
						else
						{
							total_price = (temp_adult*368 + temp_child*150) *1.1*0.95;
						
							printf("\n\n�p�p�G\n�j�H%d��,�p��%d��\n\n�馩�G\n�j�H%d��,�p��%d��\n\n",adult,child,record_adult,record_child);
							printf("���Q�H�A���E����\n");
							printf("�p�p���B�G%.0f\n\n",total_price);
						
							printf("�нT�{�O�_���T�L�~\n1.���T\n2.���~\n");
							scanf("%d",&flag_2);
						
							if(flag_2==1)
							{
								printf("\n------------�o������------------\n");
								printf("�j�H%d��\t368X%d  %d\n�p��%d��\t150X%d  %d\n",adult,adult,(368*adult),child,child,(150*child));
								printf("\n�馩���B\n�j�H%d��\t-368X%d  %d\n�p��%d��\t-150X%d  %d\n",record_adult,record_adult,(-368*record_adult),record_child,record_child,(-150*record_child));
								printf("\n�A�ȶO\t\t%f\n",(temp_adult*368 + temp_child*150)*0.1);
								printf("���Q�H�E����\n");
								printf("�`���B���G%.0f\n",total_price);
								printf("------------�o������------------\n\n\n");
							} 
							else if(flag_2==2)
							{
								break;
							}
						}
						
						
						
					}
				
					else
					{
						total_price = (adult*368 + child*150) *1.1;
						
						printf("\n\n�p�p�G\n�j�H%d��,�p��%d��\n\n",adult,child);
						printf("�p�p���B�G%.0f\n\n",total_price);
						
						printf("�нT�{�O�_���T�L�~\n1.���T\n2.���~\n");
						scanf("%d",&flag_2);
						
						if(flag_2==1)
						{
							printf("\n------------�o������------------\n");
							printf("�j�H%d��\t368X%d  %d\n�p��%d��\t150X%d  %d\n",adult,adult,(368*adult),child,child,(150*child));
							printf("�A�ȶO\t\t%f\n",(adult*368 + child*150)*0.1);
							printf("�`���B���G%.0f\n",total_price);
							printf("------------�o������------------\n\n\n");
						} 
						else if(flag_2==2)
						{
							break;
						}
					
					
						
					
					}
				
				
				
				
				flag_1=0;
			}
			else
			{
				printf("��J���~�A�Э��s���\n");
			}	
		}
		
	}
	
	
	system("PAUSE");
	return 0 ;
	
} 
