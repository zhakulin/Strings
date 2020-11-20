#include <iostream>

using namespace std;

int countWords(char str[]);
int findShorteWordLenth(char str[]);
void getNumOfVolvesAndNotVolves(char str[]);
bool isVolve(char letter);

int main() {
	//char str[] = "I love C++ programming naming laungage!";
	char str[] = "Programming languages develop very fast";
	cout << str << endl;
	cout << "There are " << countWords(str) << " words in the string";
	cout << "The shortes were's lenght = " << findShorteWordLenth(str) << endl;
	getNumOfVolvesAndNotVolves(str);

	char str1[256];
	cin >> str1;
	cout << str << endl;
	cin.ignore(256, '\n');
	cin.getline(str, 256);
	cout << str1;

	return 0;
}

int countWords(char str[])
{
	int counter = 0;
	//int i = 0;
	//while (str[i] != '\0') {
	//	if (str[i] == 32)
	//		counter++;
	//	i++;
	//}

	//for (int i = 0; str[i] != '\0'; i++) {
	//	if (str[i] == ' ')
	//		counter++;
	//}

	for (int i = 0; i < strlen(str); i++) {
		if (str[i] == 32)
		counter++;
	}
	counter++;

	return counter;
}

int findShorteWordLenth(char str[])
{
	int min = 10000;
	for (int i = 0; i <= strlen(str); i++) {
		if (str[i] == ' ' || str[i] == '\0' ) {
			int counter = 0;
			for (int j = i; (j >= 0 || str[j] != ' '); j--) {
				counter++; 
			}
			if (counter < min) {
				min = counter;
			}

		}
	}
	return 0;
}
void getNumOfVolvesAndNotVolves(char str[])
{
	int volves = 0;
	int notVolves = 0;
	for (int i = 0; i < strlen(str); i++) {
		char letter = toupper(str[i]);
		if (isVolve(letter) == true)
			volves++;
		else if((letter >= 65 && letter <= 90))
			notVolves++;
	}
	cout << "Volves = " << volves << endl;
	cout << "Not Volves = " << notVolves << endl;
	if (volves > notVolves) {
		cout << "Num of volves is greater" << endl;
	}
	else {
		cout << "Num of not volve is greater" << endl;
	}
}

bool isVolve(char letter)
{
	if (letter == 'A' || letter == 'O' || letter == 'E' || letter == 'Y' || letter == 'I' || letter == 'J' || letter == 'U')
	   return false;
	else
	   return true;
}
