# include <iostream>
int main() {

	//8. ???? ??????????? ????? ?? 20 ?? 50.?????????? ?? ?? ???, ??????? ??????? ?? 3, ?? ?? ??????? ?? 5.
	int i;
	for (i = 20; i <= 50; i = i + 1) {
		if (i % 3 == 0 && i % 5 != 0) {
			std::cout << i << std::endl;
		}

	}


	//9. ???? ??????????? ????? ?? 35 ?? 87. ????? ? ?????????? ?? ?? ???, ??????? ??? ??????? ?? 7 ???? ??????? 1, 2 ??? 5.
	int k;
	for (k = 35; k <= 87; k = k + 1) {
		if (k % 7 == 1 || k % 7 == 2 || k % 7 == 5) {
			std::cout << k << std::endl;
		}

	}

	//10. ???? ??????????? ????? ?? 1 ?? 50. ????? ????? ??? ?? ???, ??????? ??????? ?? 5 ??? ?? 7.
	int l;
	int sum = 0;
	for (l = 1; l <= 50; l++) {
		if (l % 5 == 0 || l % 7 == 0) {
			sum = sum + l;
			std::cout << sum << std::endl;
		}
	}


	//11. ?????????? ?? ?? ?????????? ????? ??????? ??????? ?? 4, ?? ?? ??????? ?? 6
	int j;
	for (j = 10; j <= 99; j = j + 1) {
		if (j % 4 == 0 && j % 6 != 0) {
			std::cout << j << std::endl;
		}
	}

	//12. ????? ???????????? ?????????? ???????? ????? ??????? 13
	int a;
	int proiz = 1;
	for (a = 10; a <= 99; a = a + 1) {
		if (a % 13 == 0 && a % 2 != 0) {
			proiz = proiz * a;
			std::cout << proiz << std::endl;
		}
	}


	//13. ????? ????? ????? ?? 100 ?? 200 ??????? 17.
	int d;
	int summ = 0;
	for (d = 100; d <= 200; d = a + 1) {
		if (d % 17 == 0) {
			summ = summ + d;
			std::cout << summ << std::endl;
		}
	}
}