//目前測試 windows 7的格式不會有問題(背景)//
#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
int R();
int L();
int U();
int D();
int Ram();
int FRam();
int cov[4][4],cov2[4][4];
int main()
{
	int Temp[16],temp;
	char ch1, ch2;
	srand(time(NULL));
	FRam();
	while(1)
	{
		system("cls");
		printf("			2048\n\n");
		printf("┌────┬────┬────┬────┐\n");
		printf("│        │        │        │        │\n");
		printf("│  %4d  │  %4d  │  %4d  │  %4d  │\n",cov[0][0],cov[0][1],cov[0][2],cov[0][3]);
		printf("│        │        │        │        │\n");
		printf("├────┼────┼────┼────┤\n");
		printf("│        │        │        │        │\n");
		printf("│  %4d  │  %4d  │  %4d  │  %4d  │\n",cov[1][0],cov[1][1],cov[1][2],cov[1][3]);
		printf("│        │        │        │        │\n");
		printf("├────┼────┼────┼────┤\n");
		printf("│        │        │        │        │\n");
		printf("│  %4d  │  %4d  │  %4d  │  %4d  │\n",cov[2][0],cov[2][1],cov[2][2],cov[2][3]);
		printf("│        │        │        │        │\n");
		printf("├────┼────┼────┼────┤\n");
		printf("│        │        │        │        │\n");
		printf("│  %4d  │  %4d  │  %4d  │  %4d  │\n",cov[3][0],cov[3][1],cov[3][2],cov[3][3]);
		printf("│        │        │        │        │\n");
		printf("└────┴────┴────┴────┘\n");
		ch1 = getch();
		if(ch1 == -32)
		{
		    ch2 = getch();
		  
		    if(ch2 == 72)
	        {
	        	for(int i=0;i<4;i++)
				{
					for(int j=0;j<4;j++)
					{
						cov2[i][j]=cov[i][j];
					}
				}
	        	U();
	        	for(int i=0;i<4;i++)
				{
					for(int j=0;j<4;j++)
					{
						for(int k=0;k<16;k++)
						{
							if(cov[i][j]==cov2[i][j])
							{
								Temp[k]=1;
							}
							else
							{
								Temp[k]=0;
							}
						}
					}
				}
				for(int m=0;m<16;m++)
				{
					temp=temp+Temp[m];
				}
				if(temp==16)
				continue;
	        	Ram();
			}
		    if(ch2 == 75)
	        {
	        	for(int i=0;i<4;i++)
				{
					for(int j=0;j<4;j++)
					{
						cov2[i][j]=cov[i][j];
					}
				}
	        	L();
	        	for(int i=0;i<4;i++)
				{
					for(int j=0;j<4;j++)
					{
						for(int k=0;k<16;k++)
						{
							if(cov[i][j]==cov2[i][j])
							{
								Temp[k]=1;
							}
							else
							{
								Temp[k]=0;
							}
						}
					}
				}
				for(int m=0;m<16;m++)
				{
					temp=temp+Temp[m];
				}
				if(temp==16)
				continue;
	        	Ram();
			}
		    if(ch2 == 77)
	        {
	        	for(int i=0;i<4;i++)
				{
					for(int j=0;j<4;j++)
					{
						cov2[i][j]=cov[i][j];
					}
				}
	        	R();
	        	for(int i=0;i<4;i++)
				{
					for(int j=0;j<4;j++)
					{
						for(int k=0;k<16;k++)
						{
							if(cov[i][j]==cov2[i][j])
							{
								Temp[k]=1;
							}
							else
							{
								Temp[k]=0;
							}
						}
					}
				}
				for(int m=0;m<16;m++)
				{
					temp=temp+Temp[m];
				}
				if(temp==16)
				continue;
	        	Ram();
			}
		    if(ch2 == 80)
	        {
	        	for(int i=0;i<4;i++)
				{
					for(int j=0;j<4;j++)
					{
						cov2[i][j]=cov[i][j];
					}
				}
	        	D();
	        	for(int i=0;i<4;i++)
				{
					for(int j=0;j<4;j++)
					{
						for(int k=0;k<16;k++)
						{
							if(cov[i][j]==cov2[i][j])
							{
								Temp[k]=1;
							}
							else
							{
								Temp[k]=0;
							}
						}
					}
				}
				for(int m=0;m<16;m++)
				{
					temp=temp+Temp[m];
				}
				if(temp==16)
				continue;
	        	Ram();
			}
		}
	}	
}

U()
{
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(cov[0][i]==0)
			{
				cov[0][i]=cov[1][i];
				cov[1][i]=0;
			}
			if(cov[1][i]==0)
			{
				cov[1][i]=cov[2][i];
				cov[2][i]=0;
			}
			if(cov[2][i]==0)
			{
				cov[2][i]=cov[3][i];
				cov[3][i]=0;
			}
		}
		if(cov[0][i]==cov[1][i])
		{
			cov[0][i]=cov[0][i]+cov[1][i];
			cov[1][i]=0;
		}
		if(cov[1][i]==cov[2][i])
		{
			cov[1][i]=cov[1][i]+cov[2][i];
			cov[2][i]=0;
		}
		if(cov[2][i]==cov[3][i])
		{
			cov[2][i]=cov[2][i]+cov[3][i];
			cov[3][i]=0;
		}
		for(int j=0;j<3;j++)
		{
			if(cov[0][i]==0)
			{
				cov[0][i]=cov[1][i];
				cov[1][i]=0;
			}
			if(cov[1][i]==0)
			{
				cov[1][i]=cov[2][i];
				cov[2][i]=0;
			}
			if(cov[2][i]==0)
			{
				cov[2][i]=cov[3][i];
				cov[3][i]=0;
			}
		}
	}
	return 0;
}

L()
{
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(cov[i][0]==0)
			{
				cov[i][0]=cov[i][1];
				cov[i][1]=0;
			}
			if(cov[i][1]==0)
			{
				cov[i][1]=cov[i][2];
				cov[i][2]=0;
			}
			if(cov[i][2]==0)
			{
				cov[i][2]=cov[i][3];
				cov[i][3]=0;
			}
		}
		if(cov[i][0]==cov[i][1])
		{
			cov[i][0]=cov[i][0]+cov[i][1];
			cov[i][1]=0;
		}
		if(cov[i][1]==cov[i][2])
		{
			cov[i][1]=cov[i][1]+cov[i][2];
			cov[i][2]=0;
		}
		if(cov[i][2]==cov[i][3])
		{
			cov[i][2]=cov[i][2]+cov[i][3];
			cov[i][3]=0;
		}
		for(int j=0;j<3;j++)
		{
			if(cov[i][0]==0)
			{
				cov[i][0]=cov[i][1];
				cov[i][1]=0;
			}
			if(cov[i][1]==0)
			{
				cov[i][1]=cov[i][2];
				cov[i][2]=0;
			}
			if(cov[i][2]==0)
			{
				cov[i][2]=cov[i][3];
				cov[i][3]=0;
			}
		}
	}
	return 0;
}

R()
{
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(cov[i][3]==0)
			{
				cov[i][3]=cov[i][2];
				cov[i][2]=0;
			}
			if(cov[i][2]==0)
			{
				cov[i][2]=cov[i][1];
				cov[i][1]=0;
			}
			if(cov[i][1]==0)
			{
				cov[i][1]=cov[i][0];
				cov[i][0]=0;
			}
		}
		if(cov[i][3]==cov[i][2])
		{
			cov[i][3]=cov[i][3]+cov[i][2];
			cov[i][2]=0;
		}
		if(cov[i][2]==cov[i][1])
		{
			cov[i][2]=cov[i][2]+cov[i][1];
			cov[i][1]=0;
		}
		if(cov[i][1]==cov[i][0])
		{
			cov[i][1]=cov[i][1]+cov[i][0];
			cov[i][0]=0;
		}
		for(int j=0;j<3;j++)
		{
			if(cov[i][3]==0)
			{
				cov[i][3]=cov[i][2];
				cov[i][2]=0;
			}
			if(cov[i][2]==0)
			{
				cov[i][2]=cov[i][1];
				cov[i][1]=0;
			}
			if(cov[i][1]==0)
			{
				cov[i][1]=cov[i][0];
				cov[i][0]=0;
			}
		}
	}
	return 0;
}
D()
{
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(cov[3][i]==0)
			{
				cov[3][i]=cov[2][i];
				cov[2][i]=0;
			}
			if(cov[2][i]==0)
			{
				cov[2][i]=cov[1][i];
				cov[1][i]=0;
			}
			if(cov[1][i]==0)
			{
				cov[1][i]=cov[0][i];
				cov[0][i]=0;
			}
		}
		if(cov[3][i]==cov[2][i])
		{
			cov[3][i]=cov[3][i]+cov[2][i];
			cov[2][i]=0;
		}
		if(cov[2][i]==cov[1][i])
		{
			cov[2][i]=cov[2][i]+cov[1][i];
			cov[1][i]=0;
		}
		if(cov[1][i]==cov[0][i])
		{
			cov[1][i]=cov[1][i]+cov[0][i];
			cov[0][i]=0;
		}
		for(int j=0;j<3;j++)
		{
			if(cov[3][i]==0)
			{
				cov[3][i]=cov[2][i];
				cov[2][i]=0;
			}
			if(cov[2][i]==0)
			{
				cov[2][i]=cov[1][i];
				cov[1][i]=0;
			}
			if(cov[1][i]==0)
			{
				cov[1][i]=cov[0][i];
				cov[0][i]=0;
			}
		}
	}
	return 0;
}
Ram()
{
	int temp,temp2;
	srand(time(NULL));
	while(1)
	{
		temp=(rand()%(3-0+1))+0;
		temp2=(rand()%(3-0+1))+0;
		if(cov[temp][temp2]==0)
		{
			cov[temp][temp2]=2;
			break;
		}
	}
}

FRam()
{
	int temp,temp2,temp3;
	srand(time(NULL));
	while(1)
	{
		temp=(rand()%(3-0+1))+0;
		temp2=(rand()%(3-0+1))+0;
		if(cov[temp][temp2]==0)
		{
			cov[temp][temp2]=2;
			break;
		}
	}
	temp=0;
	temp2=0;
	do
	{
		temp3=(rand()%(4-2+1))+2;
		if(temp3==2||temp3==4)
		break;
	}while(1);
	while(1)
	{
		temp=(rand()%(3-0+1))+0;
		temp2=(rand()%(3-0+1))+0;
		if(cov[temp][temp2]==0)
		{
			cov[temp][temp2]=temp3;
			break;
		}
	}
}
