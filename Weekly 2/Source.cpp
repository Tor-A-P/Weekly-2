#include <iostream>

void task1();
void task2();
void task3();
void task4();
void task5();
void task6();
void clearcin();

int main() {

	char Choice{};
	char GoAgain{};
	bool Repeat{};

	do {
		Repeat = false;
		system("cls");
		std::cout << "Which task would you like to run?" << std::endl << "A. Task 1 - print numbers from 1 to 100" << std::endl << "B. Task 2 - print numbers from 100 to 1"
			<< std::endl << "C. Task 3 - print 5 to 50 in steps of 5 - while loop" << std::endl << "D. Task 4 - print 5 to 50 in steps of 5 - for loop" << std::endl
			<< "E. Task 5 - print 5 to 50 in steps of 5 - do..while loop" << std::endl << "F - Task 6 - switch cases test" << std::endl << "Q - Quit the program"
			<< std::endl << std::endl << "Which task do you want to run: ";
		std::cin >> Choice;
		clearcin();
		Choice = toupper(Choice);
		switch (Choice) {
		case 'A':
			task1();
			break;
		case 'B':
			task2();
			break;
		case 'C':
			task3();
			break;
		case'D':
			task4();
			break;
		case'E':
			task5();
			break;
		case'F':
			task6();
			break;
		case 'Q':
			exit(0);
		default:
			std::cout << "You did not enter a valid choice!" << std::endl;
			break;
		}
		std::cout << std::endl << "Would you like to try another task? Y/N" << std::endl;
		std::cin >> GoAgain;
		clearcin();
		GoAgain = toupper(GoAgain);
		switch (GoAgain) {
		case 'Y':
			Repeat = true;
			break;
		case 'N':
			std::cout << "Thank you, come again!" << std::endl;
			Repeat = false;
			break;
		}
		
	} while (Repeat == true);

	return 0;
}

void task1() {
	system("cls");
	/*int i = 1;
	while (i <= 100) {
		std::cout << i << " ";
		i++;
	}*/
	for (int i = 1; i <= 100; i++) {
		std::cout << i << ' ';
	}
}

void task2() {
	system("cls");
	for (int i = 100; i > 0; i--) {
		std::cout << i << ' ';
	}
}

void task3() {
	int i = 5;

	system("cls");
	while (i <= 50) {
		std::cout << i << ' ';
		i += 5;
	}
}

void task4() {
	system("cls");
	for (int i = 5; i <= 50; i += 5) {
		std::cout << i << ' ';
	}
}

void task5() {
	int i = 5;

	system("cls");
	do {
		std::cout << i << ' ';
		i += 5;
	} while (i <= 50);
}

void task6() {
	char Answer{};

	system("cls");
	std::cout << "What grade would you like to get in Programming 1?" << std::endl;
	std::cin >> Answer;
	clearcin();
	Answer = toupper(Answer);
	switch (Answer) {
	case 'A':
		std::cout << "Outstanding!" << std::endl;
		break;
	case 'B':
		std::cout << "Very good." << std::endl;
		break;
	case 'C':
		std::cout << "Good." << std::endl;
		break;
	case 'D':
		std::cout << "Some flaws." << std::endl;
		break;
	case 'E':
		std::cout << "Not very good..." << std::endl;
		break;
	case 'F':
		std::cout << "Fail!" << std::endl;
		break;
	default:
		std::cout << "That's not a grade!" << std::endl;
		break;
	}
}

void clearcin() {
	std::cin.clear();
	std::cin.ignore(32767, '\n');
}