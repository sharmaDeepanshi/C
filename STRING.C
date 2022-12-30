 #include<stdio.h>
 #include<string.h>
 void main()
 {
   char s1[80],s2[80];
   clrscr();
   printf("Enter 1st string:");
   gets(s1);
   printf("length of string:%d\n",strlen(s1));
   printf("stringin lowwercase:%s\n",strlwr(s1));
   printf("string in upparcase:%s\n\n",strupr(s1));
   printf("Enter 2nd string:");
   gets(s2);
   printf("string after concatination:%s\n",strcat(s1,s2));
   if(strcmp(s1,s2)==0)
   { printf("Strings are equal\n");
   }
   else
   { printf("Strings are not equal\n");
   }
   printf("Reverse of string:%s\n",strrev(s2));
   getch();
 }