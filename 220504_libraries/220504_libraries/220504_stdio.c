#include <stdio.h>

int main(void) {
	//파일을 다루기 위한 객체(pointer) 생성
	FILE* fp = NULL;

	//파일을 다루기 위해 파일을 연다.
	// 파일의 종류
	// 1) 택스트 파일 : 텍스트 에디터로 열 수 있는 파일. 사람이 읽을 수 있는 문자로 구성됨.
	// 2) 바이너리 파일 : 그외의 모든 파일 (사람이 읽을 수 없음... 2진수로만 구성됨)
	if (0 != fopen_s(&fp, "Metaverse.txt", "w")) {
		//파일을 열 수 없다면 0이 반환. 즉 오류 처리 해줘야함.
		printf("오류 발생\n");
		return 1;
	} //Metaverse라는 이름의 텍스트 파일 열기
	//open mode: r(읽기/파일 없으면 오류) w(쓰기/덮어쓰기/ 파일이 없으면 생성) a(뒤에 추가) r+, w+, a+
	
	// 파일 내용 작성
	// 텍스트 파일에 사용할 수 있는 함수: fputs() / fputc() / fprintf()
	// 바이너리 파일에 사용할 수 있는 함수 : fwrite()
	fputs("Hello File!", fp); 
	fputc('J', fp);
	fprintf(fp, "\nThe name of the queen : 퀸균지");

	// 파일 조작이 끝났으면 파일을 닫아준다. cpp 파일이 있는 곳에 둔다.
	fclose(fp);

	////////////////파일 읽기///////////////
	FILE* fp1 = NULL;
	if (0 != fopen_s(&fp1, "Metaverse.txt", "r")) {
		printf("오류 발생함.\n");
		return 1;
	}

	//텍스트 파일에서 읽어들일 수 있는 함수: fgets() / fgetc() / fscanf()
	//바이너리 파일에서 읽어드릴 수 있는 함수 : fread()
	char ch = fgetc(fp);
	char str[128] = "";
	fgets(str, sizeof(str), fp); //개행 문자까지 받아드린다.
	char str2[128] = "";
	fscanf_s(fp, "The name of the queen : %s", str2, sizeof(str2));

	printf("읽어드린 문자: %c\n", ch);
	printf("읽어드린 문자열: %s\n", str);
	printf("퀸은 누구? : %s\n", str2);

	fclose(fp);

	////////////////////////////////////
	// 바이너리 파일				////
	////////////////////////////////////
	if (0 != fopen_s(&fp1, "Metaverse2", "wb")) {
		printf("오류 발생 \n");
		return 1;
	}

	struct Student {
		int age;
		enum Blood{ A, B, O, AB } BloodType;
		char Name[24];
	};

	struct Student s = { 20, A , "ChoiSeonMoon" };

	if (1 != fwrite(&s, sizeof(s), 1, fp1)) {
		printf("오류 발생함\n");

		fclose(fp1);

		return 1;
	}

	struct Student csy = { 22, A, "ChoiSeoyeon" };

	if (1 != fwrite(&csy, sizeof(csy), 1, fp1)) {
		printf("오류 발생\n");
		fclose(fp1);
	}

	fclose(fp1);


	struct Student s2 = { 0 };
	
	if (0 != fopen_s(&fp1, "Metaverse2", "rb")) {
		printf("오류 발생함.");
		fclose(fp1);
		return 1;
	}

	if (1 != fread(&s2, sizeof(s2), 1, fp1)) {
		printf("오류 발생\n");
		fclose(fp1);
	}
	printf("나이 %d, 혈액형: %d, 이름: %s", s2.age, s2.BloodType, s2.Name);

	if (1 != fread(&s2, sizeof(s2), 1, fp1)) {
		printf("오류 발생\n");
		fclose(fp1);
	}
	printf("나이 %d, 혈액형: %d, 이름: %s", s2.age, s2.BloodType, s2.Name);

	fclose(fp1);



	return 0;
}