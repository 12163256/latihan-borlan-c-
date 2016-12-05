#include<stdio.h>
#include<conio.h>
#include<iostream.h>
main()
{

int nilai;
char *grade,*ket;
printf("\masukan sebuah nlai : ");scanf("%d",nilai);

if(nilai>90)
{
	ket="lulus";
   grade="A";
}
else if(nilai>80)
{
	ket="lulus";
   grade="B";
}
else if(nilai>70)
{
	ket="lulus";
   grade="C";
}
else if(nilai>=65)
{
	ket="gagal";
   grade="D";
}
else
{
	ket="gagal";
   grade="E";
}
cout<<"==========================="<<endl;
cout<<"HASIL NILAI AKHIR DAN GREAT"<<endl;
cout<<"==========================="<<endl;

getch();
}
