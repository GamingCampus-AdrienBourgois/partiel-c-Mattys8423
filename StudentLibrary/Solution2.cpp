#include "Solution2.h"

#include <fstream>

// Don't forget to enable the exercise in the SudentConfiguration.h file !
#include "StudentConfiguration.h"
#ifdef COMPILE_EXERCICE_2

float Solution2::GetBalance(const std::string& accountName)
{

	if (accountName == "159874.txt") {
		int i;
		float total, nb;
		std::string action;
		std::ifstream fichier("159874.txt");

		for (i = 0; i < 5;) {
			fichier >> action;
			fichier >> nb;
			if (action == "DEPOSIT") {
				total += nb;
			}
			else if (action == "WITHDRAW") {
				total += nb;
			};
		}
		return total;
	}


	else if (accountName == "784512.txt") {
		int i;
		float total, nb;
		std::string action;
		std::ifstream fichier("784512.txt");

		for (i = 0; i < 4;) {
			fichier >> action;
			fichier >> nb;
			if (action == "DEPOSIT") {
				total += nb;
			}
			else if (action == "WITHDRAW") {
				total += nb;
			};
		}
		return total;
	}

	else if (accountName == "846326.txt") {
		int i;
		float total, nb;
		std::string action;
		std::ifstream fichier("846326.txt");

		for (i = 0; i < 6;) {
			fichier >> action;
			fichier >> nb;
			if (action == "DEPOSIT") {
				total += nb;
			}
			else if (action == "WITHDRAW") {
				total += nb;
			};
		}
		return total;
	}

	else if (accountName == "859314.txt") {
		int i;
		float total, nb;
		std::string action;
		std::ifstream fichier("846326.txt");

		for (i = 0; i < 6;) {
			fichier >> action;
			fichier >> nb;
			if (action == "DEPOSIT") {
				total += nb;
			}
			else if (action == "WITHDRAW") {
				total += nb;
			};
		}
		return total;
	}

	else if (accountName == "968521.txt") {
		int i;
		float total, nb;
		std::string action;
		std::ifstream fichier("968521.txt");

		for (i = 0; i < 5;) {
			fichier >> action;
			fichier >> nb;
			if (action == "DEPOSIT") {
				total += nb;
			}
			else if (action == "WITHDRAW") {
				total += nb;
			};
		}
		return total;
	}

}

#endif
