#include<stdio.h>
#include<conio.h>
#include<iostream.h>

main()
{
#include<stdio.h>
#include<conio.h>
#include<iostream.h>

main();
{
int a,b;
int k1,k2,k3,k4,k5,k6;

cout<<"masukan kondisi 1 :";cin>>a;
cout<<"masukan kondisi 2 :";cin>>b;

k1= a == b;
k2= a > b;
k3= a >= b;
k4= a < b;
k5= a <= b;
k6= a != b;
cout<<"hasil perbandingan adalah"<<endl;
cout<<"apakah nilai "  <<a<<  "=="  <<b<<  "? :"<<k1<<endl;
cout<<"apakah nilai "  <<a<<  ">"   <<b<<  "? :"<<k2<<endl;
cout<<"apakah nilai "  <<a<<  ">="  <<b<<  "? :"<<k3<<endl;
cout<<"apakah nilai "  <<a<<  "<"   <<b<<  "? :"<<k4<<endl;
cout<<"apakah nilai "  <<a<<  "<="  <<b<<  "? :"<<k5<<endl;
cout<<"apakah nilai "  <<a<<  "!="  <<b<<  "? :"<<k6<<endl;

getch();
}
