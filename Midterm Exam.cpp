#include <iostream>

using namespace std;

int main()
{
	string subjects[9];
	subjects[0] = "Computer Programming 1";
	subjects[1] = "Calculus 1";
	subjects[2] = "Math in Modern World";
	subjects[3] = "Purposive Communication";
	subjects[4] = "Euthenics";
	subjects[5] = "Kritikal na Pagbasa at Pagsulat";
	subjects[6] = "Physical Education";
	subjects[7] = "Understanding the Self";
	subjects[8] = "NSTP 1";
		
		cout << " ________________________________________" << endl;
		cout << "|           List of Subjects:            |" << endl;
		cout << "|________________________________________|" << endl;
		cout << "| Computer Programming 1                 |" << endl;
		cout << "| Calculus 1                             |" << endl;
		cout << "| Math in Modern World                   |" << endl;
		cout << "| Purposive Communication                |" << endl;
		cout << "| Euthenics                              |" << endl;
		cout << "| Kritikal na Pagbasa at Pagsulat        |" << endl;
		cout << "| Physical Education                     |" << endl;
		cout << "| Understanding the Self                 |" << endl;
		cout << "| NSTP 1                                 |" << endl;
		cout << "|________________________________________|" << endl;
		cout << endl;

		char firstLetter;
		char secondLetter;

		cout << "Enter the first letter of the subject: ";
		cin >> firstLetter;

		if (firstLetter == 'c' || firstLetter == 'C') {

			cout << "Two (2) Subjects Found:" << endl;
			cout << "1. " << subjects[0] << endl;
			cout << "2. " << subjects[1] << endl;

			cout << "Enter the second letter of the subject: ";
			cin >> secondLetter;

			if (secondLetter == 'o' || secondLetter == 'O') {
				cout << "Your Instructor for " << subjects[0] << " is " << "Mrs. Connelyn Torres";
			}

			if (secondLetter == 'a' || secondLetter == 'A') {
				cout << "Your Instructor for " << subjects[1] << " is " << "Mrs. Janis Lopez";
			}

			if (secondLetter != 'o' && secondLetter != 'O' && secondLetter != 'a' && secondLetter != 'A') {
				cout << "No subject Found!";
			}

		}

		if (firstLetter == 'p' || firstLetter == 'P') {

			cout << "Two (2) Subjects Found:" << endl;
			cout << "1. " << subjects[3] << endl;
			cout << "2. " << subjects[6] << endl;

			cout << "Enter the second letter of the subject: ";
			cin >> secondLetter;

			if (secondLetter == 'u' || secondLetter == 'U') {
				cout << "Your Instructor for " << subjects[3] << " is " << "Mr. All";
			}

			if (secondLetter == 'h' || secondLetter == 'H') {
				cout << "Your Instructor for " << subjects[6] << " is " << "Mrs. Karize";
			}

			if (secondLetter != 'u' && secondLetter != 'U' && secondLetter != 'a' && secondLetter != 'A') {
				cout << "No subject Found!";
			}

		}

		if (firstLetter == 'm' || firstLetter == 'M') {
			cout << "Your Instructor for " << subjects[2] << " is " << "Mr. Joseph Calara";
		}

		if (firstLetter == 'e' || firstLetter == 'E') {
			cout << "Your Instructor for " << subjects[4] << " is " << "Mr. Rico Garcia";
		}

		if (firstLetter == 'k' || firstLetter == 'K') {
			cout << "Your Instructor for " << subjects[5] << " is " << "Mr. Rico Garcia";
		}

		if (firstLetter == 'u' || firstLetter == 'U') {
			cout << "Your Instructor for " << subjects[7] << " is " << "Mr. Rico Garcia";
		}

		if (firstLetter == 'n' || firstLetter == 'N') {
			cout << "Your Instructor for " << subjects[8] << " is " << "Mr. Rico Garcia";
		}

		if (firstLetter != 'c' && firstLetter != 'C' && firstLetter != 'p' && firstLetter 
			!= 'P' && firstLetter != 'm' && firstLetter != 'M' && firstLetter != 'e' 
			&& firstLetter != 'E' && firstLetter != 'k' && firstLetter != 'K' &&
			firstLetter != 'u' && firstLetter != 'U' && firstLetter != 'n' && firstLetter != 'N') {
			cout << "No subject Found!";
		}

		cout << endl;

	return 0;
}