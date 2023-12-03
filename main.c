#include <stdio.h>
//1.fprintf -- put xxx into the file
struct S
{
	int n;
	double score;
	char arr[20];
};
int main()
{
	struct S s = { 100,3.14,"WHY" };

	FILE* pf = fopen("test.txt", "w");
	if (pf == NULL)
	{
		return 0;
	}
	fprintf(pf, "%d %lf %s", s.n, s.score, s.arr);
	fclose(pf);
	pf = NULL;
	return 0;
}
//2.fscanf -- get from the file and add them to xxx
struct S
{
	int n;
	double score;
	char arr[20];
};
int main()
{
	struct S s = {300,2.5,"WHAT"};
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		return 0;
	}
	fscanf(pf, "%d %lf %s", &(s.n), &(s.score), s.arr);
	printf("%d % lf %s", s.n, s.score, s.arr);
	fclose(pf);

	return 0;
}
//3.standard io -- stdin stdout
struct S
{
	int n;
	double score;
	char arr[20];
};
int main()
{
	struct S s = { 300,2.5,"WHAT" };
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		return 0;
	}
	fscanf(stdin,"%d %lf %s", &(s.n), &(s.score), s.arr);
	fprintf(stdout,"%d % lf %s", s.n, s.score, s.arr);
	fclose(pf);

	return 0;
}
//4.sprintf -- data to string /sscanf -- string to data
struct S
{
	int n;
	double score;
	char arr[10];
};
int main()
{
	struct S s = {100,3.44,"AMD"};
	struct S tmp;
	char buf[1024];
	sprintf(buf, "%d %lf %s", s.n, s.score, s.arr);
	printf("%s\n", buf);
	sscanf(buf,"%d %lf %s",&(tmp.n),&(tmp.score),tmp.arr);
	printf("%d %lf %s\n",tmp.n,tmp.score,tmp.arr);
	return 0;
}
