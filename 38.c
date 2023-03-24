What is the output of the program given below?
#include<stdio.h>
int aaa() 
{
printf(“Hi”);
}
 int bbb()
{
printf(“hello”);
}
 int ccc()
{
printf(“bye”);
}
 main() 
{
 int ( * ptr[3]) ();
 ptr[0] = aaa; 
ptr[1] = bbb; 
ptr[2] =ccc; 
ptr[2]();
return 0;                                                                                                                                                                  
}
output:
Hi
hello
bye