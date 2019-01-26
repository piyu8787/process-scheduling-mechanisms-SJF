#include<stdio.h>
#include<conio.h>
#include<conio.h>
void main()
{
	int p[100],bt[100],at[100],st[100],ft[100],wt[100],ta[100];
	int l,n,k,g,m,i,j,temp;
	int totwt=0,totat=0;
	float awt,ata;
	char pn[10][10],t[10];
	clrscr();

	printf("Enter Number of Process= ");
	scanf("%d",&n);
	printf("Enter Burst time");
	for(i=0;i<n;i++)
	{
		p[i]=i+1;
		printf("\nB[%d]:",p[i]);
		scanf("%d",&bt[i]);
	}
	printf("Enter Arrival time");
	for(j=0;j<n;j++)
	{
		p[j]=j+1;
		printf("\nA[%d]:",p[j]);
		scanf("%d",&at[j]);
	}
	for( k=0;k<n;k++)
	{
		for(l=0;l<n;l++)
		{
			if(bt[k]<bt[l])
			{
				    temp =at[k];
				    at[k]=at[l];
				    at[l]=temp;
				    temp=bt[k];
				    bt[k]=bt[l];
				    bt[l]=temp;
				    strcpy(t,pn[i]);
				    strcpy(pn[i],pn[j]);
				    strcpy(pn[j],t);
			}
		}
	}
	for(m=0;m<n;m++)
	{
		if(m==0)
		{
			st[m]=at[m];
		}
		else
			st[m]=ft[m-1];
			wt[m]=st[m]-at[m];
			ft[m]=st[m]+bt[m];
			ta[m]=ft[m]-at[m];
			totwt+=wt[m];
			totat+=ta[m];
	}
	awt=(float)totwt/n;
	ata=(float)totat/n;
	printf("\nProcess\tAt\tBt\twt\tTa");
	for(g=0;g<n;g++)
	{
		printf("\n%d\t%d\t%d\t%d\t%d",p[g],at[g],bt[g],wt[g],ta[g]);
	}
	printf("\nAverage waiting  time =%f",awt);
	printf("\nAverage trun-around time=%f",ata);
	getch();
}