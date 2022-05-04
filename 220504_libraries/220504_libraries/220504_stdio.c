#include <stdio.h>

int main(void) {
	//������ �ٷ�� ���� ��ü(pointer) ����
	FILE* fp = NULL;

	//������ �ٷ�� ���� ������ ����.
	// ������ ����
	// 1) �ý�Ʈ ���� : �ؽ�Ʈ �����ͷ� �� �� �ִ� ����. ����� ���� �� �ִ� ���ڷ� ������.
	// 2) ���̳ʸ� ���� : �׿��� ��� ���� (����� ���� �� ����... 2�����θ� ������)
	if (0 != fopen_s(&fp, "Metaverse.txt", "w")) {
		//������ �� �� ���ٸ� 0�� ��ȯ. �� ���� ó�� �������.
		printf("���� �߻�\n");
		return 1;
	} //Metaverse��� �̸��� �ؽ�Ʈ ���� ����
	//open mode: r(�б�/���� ������ ����) w(����/�����/ ������ ������ ����) a(�ڿ� �߰�) r+, w+, a+
	
	// ���� ���� �ۼ�
	// �ؽ�Ʈ ���Ͽ� ����� �� �ִ� �Լ�: fputs() / fputc() / fprintf()
	// ���̳ʸ� ���Ͽ� ����� �� �ִ� �Լ� : fwrite()
	fputs("Hello File!", fp); 
	fputc('J', fp);
	fprintf(fp, "\nThe name of the queen : ������");

	// ���� ������ �������� ������ �ݾ��ش�. cpp ������ �ִ� ���� �д�.
	fclose(fp);

	////////////////���� �б�///////////////
	FILE* fp1 = NULL;
	if (0 != fopen_s(&fp1, "Metaverse.txt", "r")) {
		printf("���� �߻���.\n");
		return 1;
	}

	//�ؽ�Ʈ ���Ͽ��� �о���� �� �ִ� �Լ�: fgets() / fgetc() / fscanf()
	//���̳ʸ� ���Ͽ��� �о�帱 �� �ִ� �Լ� : fread()
	char ch = fgetc(fp);
	char str[128] = "";
	fgets(str, sizeof(str), fp); //���� ���ڱ��� �޾Ƶ帰��.
	char str2[128] = "";
	fscanf_s(fp, "The name of the queen : %s", str2, sizeof(str2));

	printf("�о�帰 ����: %c\n", ch);
	printf("�о�帰 ���ڿ�: %s\n", str);
	printf("���� ����? : %s\n", str2);

	fclose(fp);

	////////////////////////////////////
	// ���̳ʸ� ����				////
	////////////////////////////////////
	if (0 != fopen_s(&fp1, "Metaverse2", "wb")) {
		printf("���� �߻� \n");
		return 1;
	}

	struct Student {
		int age;
		enum Blood{ A, B, O, AB } BloodType;
		char Name[24];
	};

	struct Student s = { 20, A , "ChoiSeonMoon" };

	if (1 != fwrite(&s, sizeof(s), 1, fp1)) {
		printf("���� �߻���\n");

		fclose(fp1);

		return 1;
	}

	struct Student csy = { 22, A, "ChoiSeoyeon" };

	if (1 != fwrite(&csy, sizeof(csy), 1, fp1)) {
		printf("���� �߻�\n");
		fclose(fp1);
	}

	fclose(fp1);


	struct Student s2 = { 0 };
	
	if (0 != fopen_s(&fp1, "Metaverse2", "rb")) {
		printf("���� �߻���.");
		fclose(fp1);
		return 1;
	}

	if (1 != fread(&s2, sizeof(s2), 1, fp1)) {
		printf("���� �߻�\n");
		fclose(fp1);
	}
	printf("���� %d, ������: %d, �̸�: %s", s2.age, s2.BloodType, s2.Name);

	if (1 != fread(&s2, sizeof(s2), 1, fp1)) {
		printf("���� �߻�\n");
		fclose(fp1);
	}
	printf("���� %d, ������: %d, �̸�: %s", s2.age, s2.BloodType, s2.Name);

	fclose(fp1);



	return 0;
}