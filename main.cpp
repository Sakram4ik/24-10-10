#include <iostream>

using namespace std;

int main(void) {
	int size;

	cin >> size;

	if (size > 0 && size < 50) {// якщо розмір більше 0 там менше від 50
		cout << '+';
    size=size-2;//щоб кількість - та | була як і в прикладах
		for (int i = 0; i < size; i++){//побудова першого рядка
			cout << '-'; }
		cout << '+' << endl;
		for (int i = 0; i < size; i++) {// стовпець
			cout << '|';
			for (int j = 0; j < size; j++){// рядок(ставимо пробіли)
				cout << ' ';}
			cout << '|' << endl;
		}//виконували побудову стовпців
		cout << '+';
		for (int i = 0; i < size; i++){//побудова останнього рядка
			cout << '-';}
		cout << '+' << endl;
	}
	else// якщо буде 50 то цей варіант
	{
		cout << "Sorry, the side size is too big";
	}

	return 0;
}
