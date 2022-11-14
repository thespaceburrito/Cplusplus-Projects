// DiceRoller.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Author - Jonathan Obi

#include <iostream>

int roll() {
	return rand() % 6 + 1;
}

void game() {
	int total, die1, die2;
	die1 = roll();
	die2 = roll();
	total = die1 + die2;
	std::cout << "\nDie 1: " << die1 << "\nDie 2: " << die2 << "\nTotal: " << total;

	if (total == 2) {
		std::cout << "\nSnake eyes!";
	}
	else if (total == 12) {
		std::cout << "\nBoxcars!";
	}

}


int main()
{
	char choice;
	bool con = true;
	

	std::cout << "Dice Roller\n\n";
	std::cout << "Roll the dice? (y/n): ";
	std::cin >> choice;

	if (choice == 'y') {
		game();
	}
	else {
		con = false;
	}

	while (con) {
		std::cout << "\n\nRoll again? (y/n): ";
		std::cin >> choice;

		if (choice == 'y') {
			game();
		}
		else {
			break;
		}
	}

}


