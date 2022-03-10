// Персональный шаблон проекта С++
#include <iostream>
#include <string> // библиотека для работы с типом данных string

using namespace std;

string repeatStr(string str, int num) {
	string newStr;
	for (int i = 0; i < num; i++)
		newStr += str;
	return newStr;
}
int compare(string str1, string str2) {
	if (str1.size() > str2.size())
		return 1;
	if (str1.size() < str2.size())
		return -1;
	return 0;
}



int main() {
	setlocale(LC_ALL, "Russian");

	/*char word[4] = {'H', 'e', 'y', '\0'};
	for (int i = 0; i < 4; i++)
		cout << word[i] << " ";
	cout << endl;

	char line[] = "Hello world!";
	cout << line << endl;
	cout << line[1] << line[2] << endl;
	// char sym = line[3];
	line[0] = 'L';
	cout << line << endl;*/

	/*string str; // создается сразу пустая строка, можно ее вывести
	str = "Hello world!";
	cout << str << endl;
	str = "Bye world!";
	cout << str << endl;
	str = ""; // обнуление строки (пустые кавычки)
	string str2 = "12345"; // можно прировнять и к другой переменной (все как с обычными переменными)
	// есть несколько способов создать строку см.презентацию
*/
	/*string strNew = "oranges";
	string strNew2 = "bananas";
	cout << strNew + " and " + strNew2 << endl; // конкатенация << или +. переменные типа int и тд через + не выведутся
	string strNew3 = strNew + " without " + strNew2;
	cout << strNew3 << endl;
	string strNew4 = "apples";
	strNew4 += " and kiwis"; // минус сделать нельзя
	cout << strNew4 << endl;*/

	/*string str1, str2;
	cout << "Введите слово: ";
	cin >> str;
	cout << "Вы ввели \"" << str << "\"\n"; // на экране только первое слово (до пробела или enter)
	
	cout << "Введите предложение: ";
	getline(cin, str);
	cout << str << endl;

	str = "Hello";
	for (int i = 4; i >= 0; i--)
		cout << str[i];
	cout << endl;

	str = "Hello\nworld";
	cout << str << endl;

	getline(cin, str);
	int len = str.size();
	cout << "Длина строки \"" + str + "\" = " << len << endl;
	cout << str.length() << endl;*/

	// cout << "Введите 1 строку: \n";
	// getline(cin, str1);
	// cout << "Введите 2 строку: \n";
	// getline(cin, str2);
	// str1.insert(2, str2);
	// str1.replace(3, 2, str2); // если не хотим ничего вставлять, ставим пустые кавычки ""
	// int index = str1.find(str2, 2);
	// int index = str1.rfind(str2);
	// string str3 = str1.substr(5, 4);
	// методы можно вызывать друг в друге

	/*int n;
	cin >> n;
	string str = to_string(n);
	// str += "!";
	string newStr;
	for (int i = str.size() - 1; i >= 0; i--)
		newStr += str[i];
	int newN = stoi(newStr);
	cout << newN << endl;
	newN++;
	cout << newN << endl;

	string meow;
	getline(cin, meow);
	for (int i = 0; i < meow.length(); i++)
		meow[i] = toupper(meow[i]);
	cout << meow << endl;*/
	// tolower
	

	string str, str2;
	int n;

	// Задача 1

	/*cout << "Введите строку: \n";
	getline(cin, str);
	cout << "Введите число: \n";
	cin >> n;
	cout << repeatStr(str, n) << endl;*/

	// Задача 2
	cout << "Введите 1 строку: ";
	getline(cin, str);
	cout << "Введите 2 строку: ";
	getline(cin, str2);
	cout << compare(str, str2);


	return 0;
}