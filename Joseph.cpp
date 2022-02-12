
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
 
typedef struct Node 
{ 
int data; 
int num;//编号
struct Node *next;
}Node,*Link; 
 
typedef struct
{
    int data[100];
    int last;
}SqList;
 
 
 
void InitList(Link L)//创建&&初始化 
{
    L=(Node *)malloc(sizeof(Node));
	if(!L)
		exit(1);
	L->data=0;
	L->num=0;
	L->next=L;
}
 
void GetData(int n, Link L)
{
    Link p,q;
	q=L;
		printf("请输入%d个人的初始密码:",n);
	for(int i= 1;i <= n;i++)
	{
	     p=(Node *)malloc(sizeof(Node));
		 if(!p)
			 exit(1);
		 scanf("%d",&p->data);
		 p->num=i;
		 L->next=p;
		 L=p;
	}
	L->next=q->next;
	free(q);
}
 
 
void DelList(Link L,int m,int n)
{
    Link p,q;
	p=L;
	for(int i=1;i<=n;i++)
	{
		for(int i=1;i<m;i++)
	   		p=p->next;
	   	q=p->next;
	   	m=q->data;
		printf("%d ",q->num);
	   	p->next=q->next;
	   	free(q);
	}
}
 
 
void linklist()
{
 		 Link L,p,q;
  		 int n,m;
  		 L=NULL;
  		 InitList(L);
  		 printf("初始密码为:");
  		 scanf("%d",&m);
  		 printf("总人数为:");
  		 scanf("%d",&n);
  		 GetData(n,L);
  		 printf("\n模拟结果顺序为：");
   		 DelList(L,m,n);
  		 printf("\n\n");
}
 
void seqlist()
{
 
	SqList L;
   	int i,j=0,k;
	int e,m,n;
   	 	
	printf("初始密码为:");
   	scanf("%d",&m);
   	printf("总人数为:");
   	scanf("%d",&n);
   	L.last=n-1;
   		
    for(i=0;i<n;i++)
    	L.data[i]=i+1;
    		
   	int a[n];
    printf("依次输入%d个人的初始密码：");
    for(i=0;i<n;i++)
		scanf("%d",&a[i]);
    		
    		
    printf("\n模拟结果顺序为：");
    for(i=1;i<=n;i++)
	{
		for(k=1;k<=m;k++)
		{
			while(a[j%n]==0)
				j=(j+1)%n;
			j++;
		}
		j=(j-1)%n;
		e=L.data[j];
       	printf("%d ",e);
       	m=a[j];
		a[j]=0;  
	} 
	printf("\n\n");   				  
}
 
 
 
int main()
{
	while(1)
	{
		printf("************************************\n\t1.以\t链  表\t模拟\n\t2.以\t顺序表\t模拟\n\n\t0.退出模拟\n************************************\n");
		int flag;
		printf("请输入选择：");
		scanf("%d",&flag);
		if(flag==0)	return 0;
		if(flag==1)	
		{
			printf("\n*******正在以链表模拟*******\n");
			linklist();
		} 
		if(flag==2)
		{
			printf("\n*******正在以顺序表模拟*******\n");
			seqlist();
		} 
		system("pause");
		system("cls");
	}
}
