/* �ணࠬ��஢����
������ୠ� ࠡ�� 1 �᭮��� ������ �몠 �
�ଠ�� ���� � �뢮� �����. �����  � ��⢨
��ਠ�� 10 �������㠫쭮� �������
 ������� ���祭�� �㭪樨 � ����ᨬ��� �� �
    sin x + cos x,                 x<-2,
  (x^2 + 24)/((1+x)^2),         -2<=x<2,
    cos x + (1/sqrt(x-4)),          x>2
    ���᫥��� �㭪樨 ॠ�������� � ������� ����樨 �᫮���(?:)
    �ᯮ�짮���� �㭪樨 �ଠ⭮�� �뢮��
*/


#include <stdio.h>     // standard  input ? output  header
#include <math.h>
#include <conio.h>    // console  input ? output  header

int main()
{

  float x, f, z; 
  int t = 1;
  clrscr();

  printf ("\n   ���᫨�� ���祭�� �㭪樨 � ����ᨬ��� �� ���祭�� ��㬥�� ");
  printf ("\n                       ");
  printf ("\n    sin x + cos x,                 x<-2,");
  printf ("\n  (x^2 + 24)/((1+x)^2),         -2<=x<2,");
  printf ("\n     cos x + (1/sqrt(x-4)),          x>2.");
  printf ("\n                      ");
  printf ("\n���᫨�� ���祭�� �㭪樨 � ����ᨬ��� �� ���祭�� ��㬥��");
  printf ("\n �ᯮ�짮���� �㭪�� �ଠ⭮�� �뢮��");
  printf("\n ������ ���祭�� �->");
  scanf ("%f", &x);


  f = x < -2 ? (sin(x)+cos(x)) : (x >=-2 && x<2 ? (x!=-1 ? (x*x+24)/((1+x)*(1+x)) : (t = 0)) : (x>4 ? (cos(x) + 1/sqrt(x-4)) : (t=0) ));


  z = x == -1 ? (2) : (3);

  clrscr();


  printf ("\n    ���᫨�� ���祭�� �㭪樨 � ����ᨬ��� �� ���祭�� ��㬥�� ");
  printf ("\n                      ");
  printf("\n    sin x + cos x,                 x<-2,");
  printf("\n  (x^2 + 24)/((1+x)^2),         -2<=x<2,");
  printf("\n     cos x + (1/sqrt(x-4)),          x>2.");
  printf ("\n                      ");
  printf ("\n  ���᫨�� ���祭�� �㭪樨 � ����ᨬ��� �� ���祭�� ��㬥��");
  printf ("\n  �ᯮ�짮���� �㭪�� �ଠ⭮�� �뢮��");


  printf ("\n  ��室�� ����� \n");
  printf ("��㬥�� � = %-6.2f",x);


  t == 1 ? printf("\n�� �=%-6.2f �㭪�� � =%-10.3f ��।����� �� ��⢨ %-6.0f", x, f, z) :
  printf("\n �� �=%-6.2f �㭪�� �� ��।�����(������� �� ���)�� ��⢨  %-6.0f", x, z);
  getch();

  return 0;
}


