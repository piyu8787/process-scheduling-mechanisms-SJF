#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,p[10],bt[10]={0},tat[10]={0},wt[10]={0},ct[10]={0},at[10]={0},sum=0;
	float Awt=0.00,Atat=0.00;
	clrscr();
	printf("Enter Number of process= ");
	scanf("%d",&n);
	printf("Enter Burst time");
	for(i=0;i<n;i++)
	{
		p[i]=i+1;
		printf("\nP[%d]:",p[i]);
		scanf("%d",&bt[i]);
	}
	for(i=0;i<n;i++)
	{
	//calculate completion time
		sum+=bt[i];
		ct[i]+=sum;
	}
	//calculate Trun-around time
	for(int j=0;j<n;j++)
	{
		tat[j]=ct[j]-at[j];
		Atat+=tat[j];
	}
	for(j=0;j<n;j++)
	{
		wt[j]=tat[j]-bt[j];
		Awt+=wt[j];
	}
	printf("\n**********************************************\n");
	 printf("\nProcess\tat\tBt\tCt\ttat\twt");
	 for(int k=0;k<n;k++)
	 {
		printf("\n%d\t%d\t%d\t%d\t%d\t%d",p[k],at[j],bt[k],ct[k],tat[k],wt[k]);
	 }
	 printf("\n\nAverage Trun-around time=%f\n",Atat/n);
	 printf("Average Waiting time=%f",Awt/n);
	 getch();
}