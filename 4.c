#include<stdio.h>
int main()
{
	FILE *fp;
        fp = fopen("filename.txt","w");
	fprintf(fp, "%s %s %s %s %s %d %s", "Hello","," ,"we" ,"are", "in", 2018, ".");
 	return 0;
}


