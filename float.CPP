#include<stdio.h>
#include<conio.h>
#include<iostream.h>

main()
{
float a,b,c,d,na;

cout<<"masukan nilai mahasiswa"<<endl;
cout<<"======================="<<endl;
cout<<"masukan nilai tugas: ",cin>>a;
cout<<"masukan nilai absen: ",cin>>b;
cout<<"masukan nilai UTS  : ",cin>>c;
cout<<"masukan nilai UAS  : ",cin>>d;

na=(0.1*a)+(0.2*b)+(0.3*c)+(0.4*d);

cout<<"\n\n==========hasil akhir========"<<endl;

cout<< "nilai akhir anda adalah :"<<na<<endl;

getch();
}
