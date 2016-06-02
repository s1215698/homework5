#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	while(1)
	{
		int choose_time,adult,child,flag_1=1,flag_2=1,total;
		float total_price=0;
		printf("------------歡迎使用此系統------------\n");
		while(flag_1==1)
		{
			printf("請選擇價格計算方式：\n1.平日中午\n2.平日晚上、例假日\n");
			scanf("%d",&choose_time);
		
			if(choose_time==1)
			{
				
					printf("-------選擇平日中午計價方式-------\n");
					printf("大人人數：");
					scanf("%d",&adult);
					printf("小孩人數：");
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
						
							printf("\n\n小計：\n大人%d位,小孩%d位\n\n折扣：\n大人%d位,小孩%d位\n\n",adult,child,record_adult,record_child);
							printf("小計金額：%.0f\n\n",total_price);
						
							printf("請確認是否正確無誤\n1.正確\n2.錯誤\n");
							scanf("%d",&flag_2);
						
							if(flag_2==1)
							{
								printf("\n------------發票明細------------\n");
								printf("大人%d位\t268X%d  %d\n小孩%d位\t120X%d  %d\n",adult,adult,(268*adult),child,child,(120*child));
								printf("\n折扣金額\n大人%d位\t-268X%d  %d\n小孩%d位\t-120X%d  %d\n",record_adult,record_adult,(-268*record_adult),record_child,record_child,(-120*record_child));
								printf("\n服務費\t\t%f\n",(temp_adult*268 + temp_child*120)*0.1);
								printf("總金額為：%.0f\n",total_price);
								printf("------------發票明細------------\n\n\n");
							} 
							else if(flag_2==2)
							{
								break;
							}
							
						}
						else
						{
							total_price = (temp_adult*268 + temp_child*120) *1.1*0.95;
						
							printf("\n\n小計：\n大人%d位,小孩%d位\n\n折扣：\n大人%d位,小孩%d位\n\n",adult,child,record_adult,record_child);
							printf("滿十人再打九五折\n");
							printf("小計金額：%.0f\n\n",total_price);
						
							printf("請確認是否正確無誤\n1.正確\n2.錯誤\n");
							scanf("%d",&flag_2);
						
							if(flag_2==1)
							{
								printf("\n------------發票明細------------\n");
								printf("大人%d位\t268X%d  %d\n小孩%d位\t120X%d  %d\n",adult,adult,(268*adult),child,child,(120*child));
								printf("\n折扣金額\n大人%d位\t-268X%d  %d\n小孩%d位\t-120X%d  %d\n",record_adult,record_adult,(-268*record_adult),record_child,record_child,(-120*record_child));
								printf("\n服務費\t\t%f\n",(temp_adult*268 + temp_child*120)*0.1);
								printf("滿十人九五折\n");
								printf("總金額為：%.0f\n",total_price);
								printf("------------發票明細------------\n\n\n");
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
						
						printf("\n\n小計：\n大人%d位,小孩%d位\n\n",adult,child);
						printf("小計金額：%.0f\n\n",total_price);
						
						printf("請確認是否正確無誤\n1.正確\n2.錯誤\n");
						scanf("%d",&flag_2);
						
						if(flag_2==1)
						{
							printf("\n------------發票明細------------\n");
							printf("大人%d位\t268X%d  %d\n小孩%d位\t120X%d  %d\n",adult,adult,(268*adult),child,child,(120*child));
							printf("服務費\t\t%f\n",(adult*268 + child*120)*0.1);
							printf("總金額為：%.0f\n",total_price);
							printf("------------發票明細------------\n\n\n");
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
					printf("-------選擇平日晚上、例假日計價方式-------\n");
					printf("大人人數：");
					scanf("%d",&adult);
					printf("小孩人數：");
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
						
							printf("\n\n小計：\n大人%d位,小孩%d位\n\n折扣：\n大人%d位,小孩%d位\n\n",adult,child,record_adult,record_child);
							printf("小計金額：%.0f\n\n",total_price);
						
							printf("請確認是否正確無誤\n1.正確\n2.錯誤\n");
							scanf("%d",&flag_2);
						
							if(flag_2==1)
							{
								printf("\n------------發票明細------------\n");
								printf("大人%d位\t368X%d  %d\n小孩%d位\t150X%d  %d\n",adult,adult,(368*adult),child,child,(150*child));
								printf("\n折扣金額\n大人%d位\t-368X%d  %d\n小孩%d位\t-150X%d  %d\n",record_adult,record_adult,(-368*record_adult),record_child,record_child,(-150*record_child));
								printf("\n服務費\t\t%f\n",(temp_adult*368 + temp_child*150)*0.1);
								printf("總金額為：%.0f\n",total_price);
								printf("------------發票明細------------\n\n\n");
							} 
							else if(flag_2==2)
							{
								break;
							}
							
						}
						else
						{
							total_price = (temp_adult*368 + temp_child*150) *1.1*0.95;
						
							printf("\n\n小計：\n大人%d位,小孩%d位\n\n折扣：\n大人%d位,小孩%d位\n\n",adult,child,record_adult,record_child);
							printf("滿十人再打九五折\n");
							printf("小計金額：%.0f\n\n",total_price);
						
							printf("請確認是否正確無誤\n1.正確\n2.錯誤\n");
							scanf("%d",&flag_2);
						
							if(flag_2==1)
							{
								printf("\n------------發票明細------------\n");
								printf("大人%d位\t368X%d  %d\n小孩%d位\t150X%d  %d\n",adult,adult,(368*adult),child,child,(150*child));
								printf("\n折扣金額\n大人%d位\t-368X%d  %d\n小孩%d位\t-150X%d  %d\n",record_adult,record_adult,(-368*record_adult),record_child,record_child,(-150*record_child));
								printf("\n服務費\t\t%f\n",(temp_adult*368 + temp_child*150)*0.1);
								printf("滿十人九五折\n");
								printf("總金額為：%.0f\n",total_price);
								printf("------------發票明細------------\n\n\n");
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
						
						printf("\n\n小計：\n大人%d位,小孩%d位\n\n",adult,child);
						printf("小計金額：%.0f\n\n",total_price);
						
						printf("請確認是否正確無誤\n1.正確\n2.錯誤\n");
						scanf("%d",&flag_2);
						
						if(flag_2==1)
						{
							printf("\n------------發票明細------------\n");
							printf("大人%d位\t368X%d  %d\n小孩%d位\t150X%d  %d\n",adult,adult,(368*adult),child,child,(150*child));
							printf("服務費\t\t%f\n",(adult*368 + child*150)*0.1);
							printf("總金額為：%.0f\n",total_price);
							printf("------------發票明細------------\n\n\n");
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
				printf("輸入錯誤，請重新選擇\n");
			}	
		}
		
	}
	
	
	system("PAUSE");
	return 0 ;
	
} 
