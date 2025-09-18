//============================================================================
// Name        : cppw01-task.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int id;
	std::string name;
	float balance;

	std::cout << "Enter the name: ";
	std::cin >> name;
	std::cout << "\n";
	std::cout << "Enter the balance: ";
	std::cin >> balance;
	std::cout << "\n";

	do{
		std::cout << "Menu: " << "\n" << "0. Quit" << "\n" << "1. Display" << "\n" << "2. Deposit" << "\n" << "3. Withdraw" << "\n" << "Your choice: ";
		std::cin >> id;
		std::cout << "\n";

		if (id == 1){
			std::cout << "Name: " << name << " Balance: $" << balance << "\n";
		} else if (id == 2){
			float deposit;
			std::cout << "Deposit amount: ";
			std::cin >> deposit;
			std::cout << "\n";
			balance += deposit;
		} else if (id == 3){
			float withdraw;
			std::cout << "Withdrawal amount: ";
			std::cin >> withdraw;
			std::cout << "\n";
			balance -= withdraw;
		}
	}while(id != 0);
}
