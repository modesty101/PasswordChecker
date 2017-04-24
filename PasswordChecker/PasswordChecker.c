#include <stdio.h>
#include <string.h>
#include <conio.h>

void main()
{
	char passwd[12];
	char spec[] = { '!', '@', '#', '$', '%', '^', '&', '*', '(', ')' };

	char alpa;
	int i, length;
	int offset = 0;

	printf("Input password : ");
	while ((passwd[offset]=_getch())!='\r')
	{
		_putch('*');
		offset++;
	}
	printf("\n");

	/* 원본 표시
	for (i = 0; i < offset; i++)
		_putch(passwd[i]);
	//scanf("%s", passwd);
	*/
	length = strlen(passwd);

	// 패스워드 길이
	if (length > 8)
	{
		printf("A length of at least eigth characters\n");
	}
	
	// 대소문자 판별
	// 대문자 : 65 ~ 90 소문자 : 97 ~ 122
	for (i = 0; i < length; i++)
	{
		int cnt = 0;

		for (alpa = 65; alpa <= 90; alpa++)
		{
			if (passwd[i] == (char)alpa)
			{
				// 패스워드에 대문자가 있다면 cnt 증가
				printf("패스워드에 대문자가 있습니다. %d\n",alpa);
				cnt++;
			}
		}
	}

	for (i = 0; i < length; i++)
	{
		int cnt = 0;

		for (alpa = 97; alpa <= 122; alpa++)
		{
			if (passwd[i] == (char)alpa)
			{
				printf("패스워드에 소문자가 있습니다. %d \n",alpa);
				cnt++;
			}
		}
	}
	
	// 숫자 판별
	for (i = 0; i < length; i++)
	{
		int cnt = 0;

		for (alpa = 48; alpa <58; alpa++)
		{
			if (passwd[i] == (char)alpa)
			{
				printf("패스워드에 숫자가 있습니다. %d \n", alpa);
				cnt++;
			}
		}
	}

	// 특수 문자 판별
	for (i = 0; i < length; i++)
	{
		int cnt = 0;

		for (alpa = 0; alpa < 11; alpa++)
		{
			if (passwd[i] == spec[alpa])
			{
				printf("패스워드에 특수문자가 있습니다. %d \n", alpa);
				cnt++;
			}
		}
	}
}