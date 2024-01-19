#include "Solution2.h"
#include <fstream>
#include <iostream>
#include <string>
#include <ostream>

// Don't forget to enable the exercise in the SudentConfiguration.h file !
#include "StudentConfiguration.h"
#ifdef COMPILE_EXERCICE_2

float Solution2::GetBalance(const std::string& accountName)
{
	std::ifstream file("BankAccount/" + accountName + ".txt");

	if (!file.is_open()) {
		throw std::logic_error("Compte non trouvé :(");
	}

	std::string operation;
	int amount;
	int balance = 0.0f; 

	while (file >> operation >> amount)
	{

		if (operation == "DEPOSIT") {
			balance += amount;
		}

		else if (operation == "WITHDRAW") {
			balance -= amount; 
		}

		else {
			std::cerr << "Opération inconue : " << operation << std::endl;
		}
	}

	return balance;
}

#endif
