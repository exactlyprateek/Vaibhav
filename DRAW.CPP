#include<iostream.h>
#include<conio.h>
#include<process.h>
#include<dos.h>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include<graphics.h>
void main(){int i,j;  int gdriver = DETECT, gmode, errorcode;
initgraph(&gdriver, &gmode, "C:\\TC\\bgi");
rectangle(0,0,639,360);
{setcolor(15);   settextstyle(3,0,1);
outtextxy(1,360,"You have reached the limit!!!");
outtextxy(1,375,"Clearing...");
outtextxy(1,390,"Centre Marked successfully");
outtextxy(1,410,"Point marked");
outtextxy(1,435,"CIRCLE");
outtextxy(1,455,"Printing filled circle");

outtextxy(390,360,"<Esc> Close <c> Clear");
outtextxy(390,380,"< > mark point <t> Theme");
outtextxy(390,400,"<Enter> draw line ");
outtextxy(390,420,"<n> mark center");
outtextxy(390,440,"<o> draw solid circle");
outtextxy(390,460,"<k> draw empty circle");
rectangle(260,360,380,479);
}

getch();

}