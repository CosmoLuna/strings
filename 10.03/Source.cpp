// ������������ ������ ������� �++
#include <iostream>
#include <string> // ���������� ��� ������ � ����� ������ string

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

	/*string str; // ��������� ����� ������ ������, ����� �� �������
	str = "Hello world!";
	cout << str << endl;
	str = "Bye world!";
	cout << str << endl;
	str = ""; // ��������� ������ (������ �������)
	string str2 = "12345"; // ����� ���������� � � ������ ���������� (��� ��� � �������� �����������)
	// ���� ��������� �������� ������� ������ ��.�����������
*/
	/*string strNew = "oranges";
	string strNew2 = "bananas";
	cout << strNew + " and " + strNew2 << endl; // ������������ << ��� +. ���������� ���� int � �� ����� + �� ���������
	string strNew3 = strNew + " without " + strNew2;
	cout << strNew3 << endl;
	string strNew4 = "apples";
	strNew4 += " and kiwis"; // ����� ������� ������
	cout << strNew4 << endl;*/

	/*string str1, str2;
	cout << "������� �����: ";
	cin >> str;
	cout << "�� ����� \"" << str << "\"\n"; // �� ������ ������ ������ ����� (�� ������� ��� enter)
	
	cout << "������� �����������: ";
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
	cout << "����� ������ \"" + str + "\" = " << len << endl;
	cout << str.length() << endl;*/

	// cout << "������� 1 ������: \n";
	// getline(cin, str1);
	// cout << "������� 2 ������: \n";
	// getline(cin, str2);
	// str1.insert(2, str2);
	// str1.replace(3, 2, str2); // ���� �� ����� ������ ���������, ������ ������ ������� ""
	// int index = str1.find(str2, 2);
	// int index = str1.rfind(str2);
	// string str3 = str1.substr(5, 4);
	// ������ ����� �������� ���� � �����

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

	// ������ 1

	/*cout << "������� ������: \n";
	getline(cin, str);
	cout << "������� �����: \n";
	cin >> n;
	cout << repeatStr(str, n) << endl;*/

	// ������ 2
	cout << "������� 1 ������: ";
	getline(cin, str);
	cout << "������� 2 ������: ";
	getline(cin, str2);
	cout << compare(str, str2);


	return 0;
}