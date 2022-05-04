#include <stdio.h>
#include <stdarg.h>

/// <summary>
/// printf와 유사하게 동작하나 기능이 제한됨.
/// %d / %c / %s
/// *putchar만 사용하기!!!
/// </summary>
/// <param name="format"> 형식 문자열 </param>
/// <param name=""> 가변 인자값</param>
void myprintf(const char* format, ...);

/// <summary>
/// int형 10진수 정수를 문자열로 변환하는 함수
/// </summary>
/// <param name="n"> 변환할 10진수 정수</param>
/// <param name="buffer"> 변환 값을 저장할 문자열 포인터</param>
/// <returns> 변환한 문자열. buffer와 같다.</returns>
char* itoa(int n, char* buffer);

int main(void) {
	//printf("%s", itoa(-10));
	myprintf("Hello My Printf : %d, %c, %s", -1234, '!', "Hello world");
	return 0;
}

char* itoa(int n, char * buffer) {
	//함수 내부에서 하면 객체의 수명 때문에 오류가 난다
	//	>> 즉, result를 함수 내부에 선언하면 result의 수명은 itoa 함수가 끝날 때까지 이며, 해당 주소값을 반환한다 하더라도, 데이터에서 해당 값이 버퍼에서 사라지기 때문에 가리킬 주소가 없어지게 된다.
	// 때문에 전역 변수로 선언해야 해당 주소를 안전하게 가져올 수 있다.
	//  <> 혹은 해당 값을 저장할 배열을 주소로 가져오면 된다!
	//char result[12] = { '\0' };
	int resultCount = 0;

	if (n == 0) {
		buffer[resultCount++] = 0;
		return buffer;
	}
	
	//음수인 경우 -을 미리 해두고 양수로 만들어 준다.
	if (n < 0) {
		buffer[resultCount++] = '-';
		n *= -1;
	}

	//뒤에서부터 값 저장
	char temp[10] = { '\0' };
	int i = 0;
	while (n > 0) {
		temp[i++] = n % 10 + '0';
		n /= 10;
	}

	//뒤집어진 값을 다시 원래대로 변환하여 반환 문자열에 저장
	for (int j = i-1; j > -1; j--) {
		buffer[resultCount++] = temp[j];
	}

	buffer[resultCount++] = '\0';

	return buffer;
}

void myprintf(const char* format, ...) {
	va_list args;
	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%') {
			format++;
			
			switch (*format)
			{
			case 'd': //%d 정수 입력
			{
				char numChar[12] = { '\0' };
				itoa(va_arg(args, int), numChar);

				for (char* temp = numChar; *temp != '\0'; temp++) {
					putchar(*temp);
				}
			}
				break;

			case 'c': //%c 문자 입력
				putchar(va_arg(args, char));
				break;

			case 's': //%s 문자열 입력
			{
				char* temp = va_arg(args, char*);

				while (*temp != '\0') {
					putchar(*temp);
					temp++;
				}
			}
				break;
			default:
			{
				putchar('%');
				putchar(*format);
			}
				break;
			}
		}
		else { //그냥 문자면 출력
			putchar(*format);
		}
		format++;
	}

	va_end(args);
}