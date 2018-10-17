#include<stdio.h>
int main()
{
  char a[20], b[20];
  printf("Enter the string to copy\n");
  scanf("\n%s",a);
  string_copy(a,b);
  printf("%s",b);
  return 0;
}
void string_copy(char a[20], char c[20])
{
  int i;
  for(i=0;a[i]!='\0';i++)
  {
    c[i]=a[i];
  }
  c[i]='\0';
}
