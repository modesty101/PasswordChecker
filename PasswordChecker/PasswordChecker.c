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

	/* ���� ǥ��
	for (i = 0; i < offset; i++)
		_putch(passwd[i]);
	//scanf("%s", passwd);
	*/
	length = strlen(passwd);

	// �н����� ����
	if (length > 8)
	{
		printf("A length of at least eigth characters\n");
	}
	
	// ��ҹ��� �Ǻ�
	// �빮�� : 65 ~ 90 �ҹ��� : 97 ~ 122
	for (i = 0; i < length; i++)
	{
		int cnt = 0;

		for (alpa = 65; alpa <= 90; alpa++)
		{
			if (passwd[i] == (char)alpa)
			{
				// �н����忡 �빮�ڰ� �ִٸ� cnt ����
				printf("�н����忡 �빮�ڰ� �ֽ��ϴ�. %d\n",alpa);
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
				printf("�н����忡 �ҹ��ڰ� �ֽ��ϴ�. %d \n",alpa);
				cnt++;
			}
		}
	}
	
	// ���� �Ǻ�
	for (i = 0; i < length; i++)
	{
		int cnt = 0;

		for (alpa = 48; alpa <58; alpa++)
		{
			if (passwd[i] == (char)alpa)
			{
				printf("�н����忡 ���ڰ� �ֽ��ϴ�. %d \n", alpa);
				cnt++;
			}
		}
	}

	// Ư�� ���� �Ǻ�
	for (i = 0; i < length; i++)
	{
		int cnt = 0;

		for (alpa = 0; alpa < 11; alpa++)
		{
			if (passwd[i] == spec[alpa])
			{
				printf("�н����忡 Ư�����ڰ� �ֽ��ϴ�. %d \n", alpa);
				cnt++;
			}
		}
	}
}