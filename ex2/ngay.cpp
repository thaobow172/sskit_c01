#include <stdio.h>
#include <assert.h>
int nhuan(int year)
{
	if (((year % 400)==0) || (((year % 4) == 0 )&& ((year % 100) != 0)))
	return 1; else
	return 0;

}
int ktra(int b, int kt)
{
int d;
	if ((b==4)||(b==6)||(b==9)||(b==11))
	{
	d=30;}  else
	{ if ((b==1)||(b==3)||(b==5)||(b==7)||(b==8)||(b==10)||(b==12))
	{
	d=31;}  else
	{ if (b==2 && kt==1) 
	{
	d=29; } else { d=28; }}}
	return d;
}
void ngaytt(int a,int b,int c,int d)
{
	if (a<d)
	{ 
	a=++a; }
	else
		{
			if (a==d)
			{ a=1;
			  if (b==12)
			  {
			  	b=1;
			  	c=++c;
			  } else {
			  			b=++b;}
			}
		};
	
	printf("\n ngay tiep theo la: %d  %d  %d",a,b,c);
}
void ngaytr(int a,int b,int c,int d)
{
	if (a!=1)
	{ 
	a=--a; }
	else
		{
			if (b!=1)
			{ b=--b;
			  a=ktra(b,(nhuan(c)));
			}
		    else {
			    c=--c;
				b=12;
				a=31; }
			
		};
	
	printf("\n ngay truoc la: %d  %d  %d",a,b,c);
}
int main()
{
int ngay,thang,nam;
	printf("nhap ngay: ");
		scanf("%d",&ngay);
	printf("nhap thang: ");
		scanf("%d",&thang);
	printf("nhap nam: ");
		scanf("%d",&nam);
		while ((ngay>(ktra(thang,nhuan(nam))))||(thang>12)||(nam==0)||(ngay==0)||(thang==0))
	{
		printf(" \n nhap lai: \n");
		printf("nhap ngay: ");
			scanf("%d",&ngay);
	  	printf("nhap thang: ");
			scanf("%d",&thang);
		printf("nhap nam: ");
			scanf("%d",&nam);
	};
	printf("ngay: %d  thang: %d  nam: %d ",ngay,thang,nam);
	ngaytt(ngay,thang,nam,ktra(thang,nhuan(nam)));
	ngaytr(ngay,thang,nam,ktra(thang,nhuan(nam)));
return 0;
}
