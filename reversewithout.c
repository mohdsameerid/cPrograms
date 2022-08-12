void main(){
  char s[20], temp;
  int i,l;
  printf("Enter a string\t");
  gets(s);
  for(l=0;s[l];l++);
  for(i=0;i<l/2;i++)
  {
      temp = s[i];
      s[i] = s[l-1-i];
      s[l-1-i] = temp;
  }

  printf("%s", s);
  getch();

}
