
#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<time.h>
void delay(long time_in_miliseconds);
void gotoxy(short x,short y);
void rectangle(int left,int top,int width,int height);
void change(char** arrayPtr);
int menu(char** moviesPtr,int left,int top,int width,int height);
int movieSelected(void);
int bronze1(int bronzeTickets1,int* bronzePtr1,char** moviesPtr,int left,int top,int width,int height);
int silver1(int silvertickets1,int* silverPtr1,char** moviesPtr,int left,int top,int width,int height);
int gold1(int goldtickets1,int* goldPtr1,char** moviesPtr,int left,int top,int width,int height);
int bronze2(int bronzeTickets2,int* bronzePtr2,char** moviesPtr,int left,int top,int width,int height);
int silver2(int silvertickets2,int* silverPtr2,char** moviesPtr,int left,int top,int width,int height);
int gold2(int goldtickets2,int* goldPtr2,char** moviesPtr,int left,int top,int width,int height);
int bronze3(int bronzeTickets3,int* bronzePtr3,char** moviesPtr,int left,int top,int width,int height);
int silver3(int silvertickets3,int* silverPtr3,char** moviesPtr,int left,int top,int width,int height);
int gold3(int goldtickets3,int* goldPtr3,char** moviesPtr,int left,int top,int width,int height);
int available(int numberOfTickets,int* arrayPtr,char** moviesPtr,int left,int top,int width,int height);
int main()
{
	int flag,left=10,count=0,offset1,offset,top=0,width=18,height=3,movie,loginOption,typeOfTicket,bronzeTickets1=38,status,amountBronze1=0,amountBronze2=0,amountBronze3=0,totalAmount=0,silverTickets1=38,goldTickets1=38,bronzeTickets2=38,silverTickets2=38,goldTickets2=38,bronzeTickets3=38,silverTickets3=38,goldTickets3=38,amountSilver1=0,amountSilver2=0,amountSilver3=0,amountGold2=0,amountGold3=0,amountGold1=0,totalAmount1=0,totalAmount2=0,totalAmount3=0,bronzePtr1[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38},silverPtr1[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38},goldPtr1[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38},bronzePtr2[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38},silverPtr2[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38},goldPtr2[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38},bronzePtr3[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38},silverPtr3[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38},goldPtr3[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38};
	char password[]={1,2,3,4,5,6},password1[6],ch;
	char* moviesPtr[3];
	char movie1[]={'3','i','d','i','o','t'};
	char movie2[]={'S','u','l','t','a','n'};
	char movie3[]={'g','o','l','m','a','l'};
	moviesPtr[0]=movie1;
	moviesPtr[1]=movie2;
	moviesPtr[2]=movie3;
	startTop1:
	printf("\n\nlogin as:");
	left+=10;
	rectangle(left,top,width,height);
	left++;
	top++;
	gotoxy(left,top);
	printf(" 1.administrator");
	left+=25;
	top--;
	rectangle(left,top,width,height);
	left+=5;
	top++;
	gotoxy(left,top);
	printf("2.user");
	printf("\n\n\n\n\noption:\t");
	levelO:
	scanf("%d",&loginOption);
	if(loginOption==1)
	{
		fflush(stdin);
		printf("\n\n\nEnter the password");
		top+=11;
		left-=15;
	    rectangle(left,top,20,3);
	    password:
	    gotoxy(left+6,top+1);
	    for(offset=0;offset<6;offset++)
	    {
		    ch=fgetc(stdin);
		    if(ch!='\n') password1[offset]=ch-48;
		    else break;
		}
	    for(offset=0;offset<6;offset++)
	    {
	        if(password[offset]==password1[offset])
	        {
		        status=1;
	        }
	        else
	        {
		        status=0;
		        printf("\n\n\nyou entered a wrong password");


			    count++;
		        if(count<3)
		        {
		        	goto password;
				}
				else
				{
					printf("\n\n\nyou have made 3 wrong attempts");

					printf("\n\n please wait for 30 seconds");
					count=0;
					printf(" ");
					delay(8000);
	                goto password;
				}
	        }
        }
        change(moviesPtr);
        top+=15;
        left-=27;
        fflush(stdin);
        goto startTop1;


	}
	else
	{
	  if(loginOption==2)
	  {

		left-=3;
		start:
	    movie=menu(moviesPtr,left,top,width,height);
	    if(movie==1)
	    {
	    	up1:
		    printf("\n\nselect type of ticket you want:");
		    top+=27;
		    left-=5;
		    rectangle(left,top,12,3);
		    gotoxy(left+=1,top+=1);
		    printf(" 1.bronze");
			top+=6;
			left--;
			rectangle(left,top,12,3);
			gotoxy(left+=1,top+=1);
			printf(" 2.silver");
			top+=6;
			left--;
			rectangle(left,top,12,3);
			gotoxy(left+=1,top+=1);
			printf(" 3.gold");
		    printf("\n\noption:\t");
		    level:
		    scanf("%d",&typeOfTicket);
		    if(typeOfTicket==1)
		    {
		    	if(bronzeTickets1!=0)
		    	{
				    printf("\n\ntickets available:\t");
		            printf("%d",bronzeTickets1);
			    }
				else
				{
					printf("\n\nall bronze tickets are sold out");
					goto up1;
				}
				bronzeTickets1=bronze1(bronzeTickets1,bronzePtr1,moviesPtr,left,top,width,height);
			    printf("\n\ndo you want to book any more tickets: ");
	            printf("\t1.yes 2.no");
	            printf("\n\n option:\t");
	            scanf("%d",&status);
	            if(status==1)
	            {
	            	printf("\n\n press1: to book ticket for same movie \tpress2:To go to main menu");
					printf("\n\noption: ");
					scanf("%d",&flag);
					if(flag==1)
					{
						top+=7;
						left+=5;
						goto up1;
					}
					else
					{

						top+=60;
						left+=6;
						goto start;
					}
				}
				else
	            {
		            amountBronze1=amountBronze1+(38-bronzeTickets1)*150;
                }
		    }
		    else
		    {
		    	if(typeOfTicket==2)
		    	{
		    		if(silverTickets1!=0)
		    		{
					    printf("\n\ntickets available:");
		    		    printf("%d",silverTickets1);
		    		}
					else
					{
						printf("\n\nall silver tickets are sold out");
						goto up1;
					}
					silverTickets1=silver1(silverTickets1,silverPtr1,moviesPtr,left,top,width,height);
		    		printf("\n\ndo you want to book any more tickets:");
	                printf("\t1.yes 2.no");
	                printf("\n\noption:\t");
	                scanf("%d",&status);
	                if(status==1)
					{
						printf("\n\n press1: to book ticket for same movie \tpress2:To go to main menu");
						printf("\n\noption: ");
						scanf("%d",&flag);
						if(flag==1)
						{
							goto up1;
						}
						else
						{
							goto start;
							top+=20;
							left+=5;
						}
					}
	                else
	                {
		                amountSilver1=amountSilver1+(38-silverTickets1)*200;
                    }

				}
				else
				{
					if(typeOfTicket==3)
					{
						if(goldTickets1!=0)
				  	  	{
							printf("\n\ntickets available:");
					        printf("%d",goldTickets1);
						}
						else
						{
							printf("\n\n all gold tickets are sold out");
							goto up1;
						}
						goldTickets1=gold1(goldTickets1,goldPtr1,moviesPtr,left,top,width,height);
						printf("\n\ndo you want to book any more tickets:");
	                	printf("\t1.yes 2.no");
	                	printf("\n\noption:\t");
	                	scanf("%d",&status);
	                	if(status==1)
	                	{
	                		printf("\n\n press1: to book ticket for same movie \tpress2:To go to main menu");
						    printf("\n\noption: ");
						    scanf("%d",&flag);
						    if(flag==1)
						    {
							    goto up1;
						    }
						    else
						    {
							    goto start;
							    left+=5;
							    top+=20;
						    }
						}
	                	else
	                	{
		               		amountGold1=amountGold1+(38-goldTickets1)*300;
                    	}
                    }
                    else
                    {
                    	printf("\n\n Invalid option");
                    	printf("\n\n Select the type of ticket you want again");
                    	fflush(stdin);
                    	goto level;
					}


				}
			}
			totalAmount1=amountBronze1+amountSilver1+amountGold1;
	    }
	    else
	    {
	    	if(movie==2)
	    	{
	    		up2:
	    		printf("\n\nselect type of ticket you want:");
		        top+=27;
		        left-=5;
		        rectangle(left,top,12,3);
		        gotoxy(left+=1,top+=1);
		        printf(" 1.bronze");
			    top+=6;
			    left--;
			    rectangle(left,top,12,3);
			    gotoxy(left+=1,top+=1);
			    printf(" 2.silver");
			    top+=6;
			    left--;
			    rectangle(left,top,12,3);
			    gotoxy(left+=1,top+=1);
			    printf(" 3.gold");
                printf("\n\noption:\t");
		        level2:
		        scanf("%d",&typeOfTicket);
		        if(typeOfTicket==1)
		        {
		        	if(bronzeTickets2!=0)
		        	{
			            printf("\n\ntickets available:");
		                printf("%d",bronzeTickets2);
			        }
			        else
			        {
			        	printf("\n\nall bronze tickets are sold out");
			        	goto up2;
					}
					bronzeTickets2=bronze2(bronzeTickets2,bronzePtr2,moviesPtr,left,top,width,height);
			        printf("\n\ndo you want to book any more tickets:");
	                printf("\t1.yes 2.no\t");
	                scanf("%d",&status);
	                if(status==1)
	                {
	                	printf("\n\n press1: to book ticket for same movie \tpress2:To go to main menu");
						printf("\n\noption: ");
						scanf("%d",&flag);
						if(flag==1)
						{
							goto up2;
						}
						else
						{
							goto start;
							top+=20;
							left+=5;
						}
					}
	                else
	                {
		                amountBronze2=amountBronze2+(38-bronzeTickets2)*150;
                    }

		        }
		        else
		        {
		    	    if(typeOfTicket==2)
		    	    {
		    	    	if(silverTickets2!=0)
		    		    {
						    printf("\n\ntickets available:");
		    		        printf("%d",silverTickets2);
		    		    }
		    		    else
		    		    {
		    		    	printf("\n\n all silver tickets are sold out");
		    		    	goto up2;
						}
		    		    silverTickets2=silver2(silverTickets2,silverPtr2,moviesPtr,left,top,width,height);
		    		    printf("\n\ndo you want to book any more tickets:");
	                    printf("\t1.yes 2.no\t");
	                    scanf("%d",&status);
	                    if(status==1)
	                    {
	                    	printf("\n\n press1: to book ticket for same movie \tpress2:To go to main menu");
						    printf("\n\noption: ");
						    scanf("%d",&flag);
						    if(flag==1)
						    {
							    goto up2;
						    }
						    else
						    {
							    goto start;
							    top+=20;
							    left+=5;
						    }
						}
	                    else
	                    {
		                    amountSilver2=amountSilver2+(38-silverTickets2)*200;
                        }

				    }
				    else
				    {
				    	if(typeOfTicket==3)
				    	{
				    		if(goldTickets2!=0)
				    		{
							    printf("\n\ntickets available:");
					            printf("%d",goldTickets2);
					        }
					        else
					        {
					        	printf("\n\n all gold tickets are sold out");
					        	goto up2;
							}
							goldTickets2=gold2(goldTickets2,goldPtr2,moviesPtr,left,top,width,height);
					        printf("\n\ndo you want to book any more tickets:");
	                        printf("\t1.yes 2.no\t");
	                        scanf("%d",&status);
	                        if(status==1)
	                        {
	                        	printf("\n\n press1: to book ticket for same movie \tpress2:To go to main menu");
						        printf("\n\noption: ");
						        scanf("%d",&flag);
						        if(flag==1)
						        {
							        goto up2;
						        }
						        else
						        {
							        goto start;
							        top+=20;
							        left+=5;
						        }
							}
	                        else
	                        {
		                        amountGold2=amountGold2+(38-goldTickets2)*300;
                            }
                        }
                        else
                        {
                            printf("\n\n Invalid option");
                    	    printf("\n\n Select the type of ticket you want again");
                    	    fflush(stdin);
                    	    goto level2;
						}
                    }
                }
			    totalAmount2=amountBronze2+amountSilver2+amountGold2;
		    }
		    else
		    {
		    	up3:
		    	printf("\n\nSelect type of ticket you want:");
		        top+=27;
		        left-=5;
		        rectangle(left,top,12,3);
		        gotoxy(left+=1,top+=1);
		        printf(" 1.bronze");
			    top+=6;
			    left--;
			    rectangle(left,top,12,3);
			    gotoxy(left+=1,top+=1);
			    printf(" 2.silver");
			    top+=6;
			    left--;
			    rectangle(left,top,12,3);
			    gotoxy(left+=1,top+=1);
			    printf(" 3.gold");
                printf("\n\noption:\t");
		        level3:
		        scanf("%d",&typeOfTicket);
		        if(typeOfTicket==1)
		        {
		        	if(bronzeTickets3!=0)
		        	{
			            printf("\n\nTickets Available:");
	                    printf("%d",bronzeTickets3);
	                }
	                else
	                {
	                	printf("\n\n\nAll bronze tickets are SOLD OUT");
	                	goto up3;
					}
			        bronzeTickets3=bronze3(bronzeTickets3,bronzePtr3,moviesPtr,left,top,width,height);
			        printf("\n\n\nDo you want to book any more tickets:");
	                printf("\t1.Yes 2.No\t");
	                scanf("%d",&status);
	                if(status==1)
	                {
	                	printf("\n\n\n PRESS 1: to book ticket for same movie \tPRESS 2:To go to main menu");
						printf("\n\nOption: ");
						scanf("%d",&flag);
						if(flag==1)
						{
							goto up3;
						}
						else
						{
							goto start;
							top+=20;
							left+=5;
						}
					}
	                else
	                {
		                amountBronze3=amountBronze3+(38-bronzeTickets3)*150;
                    }

		        }
		        else
		        {
		    	    if(typeOfTicket==2)
		    	    {
		    	    	if(silverTickets3!=0)
		    	    	{
		    		        printf("\n\nTickets Available:");
		    		        printf("%d",silverTickets3);
		    		    }
		    		    else
						{
	                        printf("\n\n\nAll silver tickets are Sold Out");
	                        goto up3;
		    		    }
		    		    silverTickets3=silver3(silverTickets3,silverPtr3,moviesPtr,left,top,width,height);
		    		    printf("\n\n\nDo you want to book any more tickets:");
	                    printf("\t1.Yes 2.No\t");
	                    scanf("%d",&status);
	                    if(status==1)
	                    {
	                    	printf("\n\n\n PRESS 1: to book ticket for same movie \tPRESS 2:To go to main menu");
						    printf("\n\nOption: ");
						    scanf("%d",&flag);
						    if(flag==1)
						    {
							    goto up3;
						    }
						    else
						    {
							    goto start;
							    top+=20;
							    left+=5;
						    }
						}
	                    else
	                    {
		                    amountSilver3=amountSilver3+(38-silverTickets3)*200;
                        }

				    }
				    else
				    {
				    	if(typeOfTicket==3)
				    	{
				    		if(goldTickets3!=0)
				    		{
					            printf("\n\nTickets Available:");
					            printf("%d",goldTickets3);
					        }
					        else
							{
							    printf("\n\n\nAll gold tickets are SOLD OUT");
							    goto up3;
							}
					        goldTickets3=gold3(goldTickets3,goldPtr3,moviesPtr,left,top,width,height);
					        printf("\n\nDo you want to book any more tickets:");
	                        printf("\t1.yes 2.no\t");
	                        scanf("%d",&status);
	                        if(status==1)
	                        {
	                        	printf("\n\n\nPRESS 1: to book ticket for same movie \tPRESS 2:To go to main menu");
						        printf("\n\nOption: ");
						        scanf("%d",&flag);
						        if(flag==1)
						        {
							        goto up3;
						        }
						        else
						        {
							        goto start;
							        top+=20;
							        left+=5;
						        }
							}
	                        else
	                        {
		                        amountGold3=amountGold3+(38-goldTickets3)*300;
                            }
                        }
                        else
                        {
                        	printf("\n\n\nINVALID OPTION");
                    	    printf("\n\n Select the type of ticket you want again:");
                    	    fflush(stdin);
                    	    goto level3;
						}
                    }
                }
			    totalAmount3=amountBronze3+amountSilver3+amountGold3;
			}
		}
      }
      else
      {
      	printf("\nInvalid option Enter again:  ");
      	goto levelO;
	  }

	}
	printf("\n\n\n\nBILL: ");
	printf("\n\n\nYOU HAVE TO PAY=   Rs");
	totalAmount=totalAmount+totalAmount1+totalAmount2+totalAmount3;
	printf("%d",totalAmount);
	printf("\n\n\n\t\t\t\tTHANK YOU");
	return(0);
}
void delay(long time_in_miliseconds)
{
	clock_t mytime;
	mytime=time_in_miliseconds+clock();
	while(mytime>clock());
}

void rectangle(int left,int top,int width,int height)
{
	int leftTemp=left,topTemp=top;
	for(;left<=width+leftTemp;left++)
	{
		gotoxy(left,top);
		printf("*");
	}
	left--;
	for(;top<=height+topTemp;top++)
	{
		gotoxy(left,top);
		printf("*");
	}
	top--;
	for(;left>=leftTemp;left--)
	{
		gotoxy(left,top);
		printf("*");
	}
	left++;
	for(;top>=topTemp;top--)
	{
		gotoxy(left,top);
		printf("*");
	}
}
void gotoxy(short x,short y)
{
	COORD pos={x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}
void change(char** moviesPtr)
{
	int offset,offset1;
	char ch;
	printf("\n\n\n Enter the movies for today's shows:\n");
	fflush(stdin);
	for(offset1=0;offset1<3;offset1++)
	{

		printf("\t");
		printf("%d",offset1+1);
		printf(".");
		fflush(stdin);
		for(offset=0;offset<6;offset++)
		{
		    if((ch=fgetc(stdin))!='\n')
		    {
			    *(moviesPtr[offset1]+offset)=ch;
		    }
		    else
		    {
		    	offset=5;
			}

		}
	}
}
int menu(char** moviesPtr,int left,int top,int width,int height)
{
	int offset,offset1,selectedMovie;
    printf("\nMovies Available: ");
    left-=5;
	top+=7;
	for(offset1=0;offset1<3;offset1++)
	{
		width=11;
	    height=3;

		rectangle(left,top,width,height);
		gotoxy(left+=2,top+=1);
		printf("%d",offset1+1);
		printf(".");
		for(offset=0;offset<6;offset++)
		{
			printf("%c",*(moviesPtr[offset1]+offset));
		}
		top+=5;
		left-=2;
	}
	selectedMovie=movieSelected();
	if(selectedMovie==1) return(1);
	else
	{
		if(selectedMovie==2) return(2);
		else return(3);
	}


}
int movieSelected(void)
{
	int selected;
	up:
	printf("\n\n\n\nSelect the movie you want: ");
	scanf("\t%d",&selected);
	switch(selected)
	{
		case 1:
			return(1);
			break;
		case 2:
		    return(2);
		    break;
		case 3:
		    return(3);
			break;
	    default:
	    printf("\n\n\nINVALID OPTION  ");
	    fflush(stdin);
	    goto up;
    }
}
int bronze1(int bronzeTickets1,int* bronzePtr1,char** moviesPtr,int left,int top,int width,int height)
{
	int numberOfTickets,remainingTickets,offset;
	label:
	    printf("\n\nHow much tickets you want: ");
	    up:
	    scanf("%d",&numberOfTickets);

	    if(numberOfTickets<=bronzeTickets1)
	    {
	        if(numberOfTickets<=10)
	        {
			    numberOfTickets=available(numberOfTickets,bronzePtr1,moviesPtr,left,top,width,height);
			    remainingTickets=bronzeTickets1-numberOfTickets;
	            return(remainingTickets);
	        }
	        else
			{
				printf("\n\n\nSORRY YOU CANT BOOK MORE THAN 10 TICKETS FOR SAME SHOW");
				printf("\n\nPLEASE CHOOSE YOUR NUMBER OF TICKETS AGAIN: ");
				fflush(stdin);
				goto up;
		    }
        }
        else
        {
    	    printf("\n\n\nYOU EXCEED THE LIMIT");
    	    fflush(stdin);
    	    goto label;
	    }

}
int silver1(int silverTickets1,int* silverPtr1,char** moviesPtr,int left,int top,int width,int height)
{
	int numberOfTickets,remainingTickets;
	label:
	    printf("\n\nHow much tickets you want: ");
	    up:
	    scanf("%d",&numberOfTickets);
	    if(numberOfTickets<=silverTickets1)
	    {
	        if(numberOfTickets<=10)
	        {
			    numberOfTickets=available(numberOfTickets,silverPtr1,moviesPtr,left,top,width,height);
			    remainingTickets=silverTickets1-numberOfTickets;
	            return(remainingTickets);
	        }

	        else
	        {
	        	printf("\n\n\nSORRY YOU CANT BOOK MORE THAN 10 TICKETS FOR SAME SHOW");
				printf("\n\nPLEASE CHOOSE YOUR NUMBER OF TICKETS AGAIN: ");
				fflush(stdin);
				goto up;
			}
        }
        else
        {
    	    printf("\n\n\nYOU EXCEED THE LIMIT");
    	    fflush(stdin);
    	    goto label;
	    }
}
int gold1(int goldTickets1,int* goldPtr1,char** moviesPtr,int left,int top,int width,int height)
{
	int numberOfTickets,remainingTickets;
    label:
	    printf("\n\nHow much tickets you want: ");
	    up:
	    scanf("%d",&numberOfTickets);
	    if(numberOfTickets<=goldTickets1)
	    {
	    	if(numberOfTickets<=10)
	    	{
	            numberOfTickets=available(numberOfTickets,goldPtr1,moviesPtr,left,top,width,height);
	            remainingTickets=goldTickets1-numberOfTickets;
	            return(remainingTickets);
	        }
	        else
	        {
	        	printf("\n\n\nSORRY YOU CANT BOOK MORE THAN 10 TICKETS FOR SAME SHOW");
				printf("\n\nPLEASE CHOOSE YOUR NUMBER OF TICKETS AGAIN: ");
				fflush(stdin);
				goto up;
			}
        }
        else
        {
    	    printf("\n\n\nYOU  EXCEED THE LIMIT");
    	    fflush(stdin);
    	    goto label;
	    }
}
int bronze2(int bronzeTickets2,int* bronzePtr2,char** moviesPtr,int left,int top,int width,int height)
{
	int numberOfTickets,remainingTickets;
	label:
		printf("\n\nHow much tickets you want: ");
		up:
	    scanf("%d",&numberOfTickets);
	    if(numberOfTickets<=bronzeTickets2)
	    {
	    	if(numberOfTickets<=10)
	    	{
	            numberOfTickets=available(numberOfTickets,bronzePtr2,moviesPtr,left,top,width,height);
	            remainingTickets=bronzeTickets2-numberOfTickets;
				return(remainingTickets);
	        }
	        {
	        	printf("\n\n\nSORRY YOU CANT BOOK MORE THAN 10 TICKETS FOR THE SAME SHOW");
				printf("\n\nPLEASE CHOOSE YOUR NUMBER OF TICKETS AGAIN: ");
				fflush(stdin);
				goto up;
			}
        }
        else
        {
    	    printf("\n\n\nYOU EXCEED THE LIMIT");
    	    fflush(stdin);
    	    goto label;
	    }
}
int silver2(int silverTickets2,int* silverPtr2,char** moviesPtr,int left,int top,int width,int height)
{
	int numberOfTickets,remainingTickets;
	label:
		printf("\n\nHow much tickets you want: ");
		up:
	    scanf("%d",&numberOfTickets);
	    if(numberOfTickets<=silverTickets2)
	    {
	    	if(numberOfTickets<=10)
	    	{
	            numberOfTickets=available(numberOfTickets,silverPtr2,moviesPtr,left,top,width,height);
	            remainingTickets=silverTickets2-numberOfTickets;
				return(remainingTickets);
	        }
	        else
	        {
	        	printf("\n\n\nSORRY YOU CANT BOOK MORE THAN 10 TICKETS FOR THE SAME SHOW");
				printf("\n\nPLEASE CHOOSE YOUR NUMBER OF TICKETS AGAIN: ");
				fflush(stdin);
				goto up;
			}
        }
        else
        {
    	    printf("\n\n\nYOU EXCEED THE LIMIT");
    	    fflush(stdin);
    	    goto label;
	    }
}
int gold2(int goldTickets2,int* goldPtr2,char** moviesPtr,int left,int top,int width,int height)
{
	int numberOfTickets,remainingTickets;
	label:
		printf("\n\nHow much tickets you want: ");
		up:
	    scanf("%d",&numberOfTickets);
	    if(numberOfTickets<=goldTickets2)
	    {
	    	if(numberOfTickets<=10)
	    	{
	            numberOfTickets=available(numberOfTickets,goldPtr2,moviesPtr,left,top,width,height);
	            remainingTickets=goldTickets2-numberOfTickets;
				return(remainingTickets);
	        }
	        else
	        {
	        	printf("\n\n\nSORRY YOU CANT BOOK MORE THAN 10 TICKETS FOR THE SAME SHOW");
				printf("\n\nPLEASE CHOOSE YOUR NUMBER OF TICKETS AGAIN: ");
				fflush(stdin);
				goto up;
			}
        }
        else
        {
    	    printf("\n\n\nYOU EXCEED THE LIMIT");
    	    fflush(stdin);
    	    goto label;
	    }
}
int bronze3(int bronzeTickets3,int* bronzePtr3,char** moviesPtr,int left,int top,int width,int height)
{
	int numberOfTickets,remainingTickets;
	label:
		printf("\n\nHow much tickets you want: ");
		up:
	    scanf("%d",&numberOfTickets);
	    if(numberOfTickets<=bronzeTickets3)
	    {
	    	if(numberOfTickets<=10)
	    	{
	            numberOfTickets=available(numberOfTickets,bronzePtr3,moviesPtr,left,top,width,height);
	            remainingTickets=bronzeTickets3-numberOfTickets;
				return(remainingTickets);
	        }
	        else
	        {
	        	printf("\n\n\nSORRY YOU CANT BOOK MORE THAN 10 TICKETS FOR SAME SHOW");
				printf("\n\nPLEASE CHOOSE YOUR NUMBER OF TICKETS AGAIN: ");
				fflush(stdin);
				goto up;
			}
        }
        else
        {
    	    printf("\n\n\nYOU EXCEED THE LIMIT");
    	    fflush(stdin);
    	    goto label;
	    }
}
int silver3(int silverTickets3,int* silverPtr3,char** moviesPtr,int left,int top,int width,int height)
{
	int numberOfTickets,remainingTickets;
	label:
		printf("\n\nHow much tickets you want: ");
		up:
	    scanf("%d",&numberOfTickets);
	    if(numberOfTickets<silverTickets3)
	    {
	    	if(numberOfTickets<=10)
	    	{
	            numberOfTickets=available(numberOfTickets,silverPtr3,moviesPtr,left,top,width,height);
	            remainingTickets=silverTickets3-numberOfTickets;
				return(remainingTickets);
	        }
	        else
	        {
	        	printf("\n\n\nSORRY YOU CANT BOOK MORE THAN 10 TICKETS FOR SAME SHOW");
				printf("\n\nPLEASE CHOOSE YOUR NUMBER OF TICKETS AGAIN: ");
				fflush(stdin);
				goto up;
			}
        }
        else
        {
    	    printf("\n\n\nYOU EXCEED THE LIMIT");
    	    fflush(stdin);
    	    goto label;
	    }
}
int gold3(int goldTickets3,int* goldPtr3,char** moviesPtr,int left,int top,int width,int height)
{
	int numberOfTickets,remainingTickets;
	label:
		printf("\n\nHow much tickets you want: ");
		up:
	    scanf("%d",&numberOfTickets);
	    if(numberOfTickets<=goldTickets3)
	    {
	    	if(numberOfTickets<=10)
	    	{
	            numberOfTickets=available(numberOfTickets,goldPtr3,moviesPtr,left,top,width,height);
	            remainingTickets=goldTickets3-numberOfTickets;
				return(remainingTickets);
	        }
	        else
	        {
	        	printf("\n\n\n YOU CANT BOOK MORE THAN 10 TICKETS FOR SAME SHOW");
				printf("\n\nPLEASE CHOOSE YOUR NUMBER OF TICKETS AGAIN: ");
				fflush(stdin);
				goto up;
			}
        }
        else
        {
    	    printf("\n\n\nYOU EXCEED THE LIMIT");
    	    fflush(stdin);
    	    goto label;
	    }
}
int available(int numberOfTickets,int* arrayPtr,char** moviesPtr,int left,int top,int width,int height)
{
	int offset,seatNumber[10],flag,seatNum,decision,status,index,offset1;
	top:
	printf("\nseat chart");
	printf("\nA:");
	for(offset=0;offset<14;offset++)
	{
		printf("  ");
	    printf("%d",arrayPtr[offset]);
	}
	printf("\nB:");
	for(offset=14;offset<20;offset++)
	{
		printf(" ");
	    printf("%d",arrayPtr[offset]);
	}
	printf("    ");
	for(offset=20;offset<26;offset++)
	{
		printf(" ");
	    printf("%d",arrayPtr[offset]);
	}
	printf("\nC:");
	for(offset=26;offset<32;offset++)
	{
		printf(" ");
	    printf("%d",arrayPtr[offset]);
    }
    printf("    ");
    for(offset=32;offset<38;offset++)
    {
    	printf(" ");
    	printf("%d",arrayPtr[offset]);
	}
    label:
	printf("\n\nEnter the seat numbers you want:  ");
	for(index=0;index<numberOfTickets;index++)
	{
		up:
		scanf("%d",&seatNum);
		for(offset1=0;offset1<index;offset1++)
		{
		    if(seatNum==seatNumber[offset1])
		    {
	     	    printf("\n\n\n YOU HAVE ENTERED SAME SEAT NUMBER TWICE");
	    	    printf("\n\n PLEASE ENTER THE SEAT NUMBER AGAIN:  ");
	    	    goto up;
		    }
		}
		if(!(seatNum>0&&seatNum<=38))
		{
		   	printf("\n\n\n INVALID SEAT NUMBER");
		   	printf("\n\n ENTER THE SEAT NUMBER AGAIN:   ");
		   	fflush(stdin);
		   	goto up;
		}
		else
		{
		   	if(arrayPtr[seatNum-1]==0)
		   	{
		   	    printf("\n\n\nTHIS SEAT NUMBER IS ALREADY BOOKED");
		   	    printf("\n\nENTER ANY OTHER SEAT NUMBER");
		   	    fflush(stdin);
		   	    goto up;
			}
		}

	    seatNumber[index]=seatNum;
    }
	for(index=0;index<numberOfTickets;index++)
	{
		for(offset=0;offset<38;offset++)
		{
   	        if(arrayPtr[offset]==seatNumber[index])
   	        {
   	        	arrayPtr[offset]=0;
			}
		}
    }

    printf("\n\n\nPRESS 1 to proceed\n\nPRESS 2: if you want to cancel your tickets");
    printf("\n\noption:  ");
    scanf("%d",&decision);
    if(decision==2)
    {
    	for(index=0;index<numberOfTickets;index++)
    	{
    	    for(offset=0;offset<30;offset++)
   		    {
   			    if(arrayPtr[offset]==0 &&offset+1==seatNumber[index])
   			    {
   			    	arrayPtr[offset]=arrayPtr[offset]+seatNumber[index];
			    }
		    }
	    }
	    numberOfTickets=0;
        printf("\n\nWant to book another ticket:");
    	printf("\n\t 1:yes     2.no");
    	printf("\n\nOption:  ");
    	scanf("%d",&status);
    	if(status==1)
    	{
    		printf("\n\nPRESS 1: if you want to book ticket for same movie and of same type    \n\nPRESS2: if you want to book ticket for same movie but of another type\n\nPRESS 3 if you want to book ticket for another movie");
    		printf("\n\nOption: ");
    		scanf("%d",&flag);
    		if(flag==1)
    		{
    			printf(" \n\nHow much tickets do you want: ");
    			scanf("%d",&numberOfTickets);
    			fflush(stdin);
    		    goto top;
			}
			else
			{

			    if(flag==3) menu(moviesPtr,left,top,width,height);
		    }

		}
	}
	return(numberOfTickets);
}



