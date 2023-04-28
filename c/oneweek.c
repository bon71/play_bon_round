#include <stdio.h>
#include <stdlib.h>

#define SIZE 256

int	main()
{
	FILE *file;
	char	line[SIZE];
	line[0] = '\0';

//書込み時
//	file = fopen("./oneweek_test/sample.txt", "w");
//読込み時
	file = fopen("./oneweek_test/sample.txt", "r");

	if(file == NULL)
	{
		printf("can't open the file\n");
		exit(1);
	}
//書き込み
/*
	fprintf(file, "Hello, World.\n");
	fprintf(file, "ABCDEF\n");
*/
//読み込み

	while (fgets(line, SIZE, file) != NULL)
	{
		printf("%s", line);
	}


//後処理
	fclose(file);
}