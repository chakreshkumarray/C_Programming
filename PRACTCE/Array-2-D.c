#include<stdio.h>
int main()
{
  int marks[5][6];

  for(int student=0; student<5; student++)
  {
    for(int subject=0; subject<6; subject++)
  {
  
    printf(" student :%d  , marks : %d : ", student++, subject++);
    scanf("%d",&marks[student][subject]);
  }
}
}