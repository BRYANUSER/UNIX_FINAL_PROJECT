#include<iostream>
#include<cstdlib>
//#include<unistd.h>

using namespace std;

void print_main_menu(void)
{
	cout << "�п�ܷQ�ϥΪ��\��" << endl;
	cout << "(��J1)�ۥѼu��" << endl;
	cout << "(��J2)���s�q��" << endl;
	cout << "(��J3)�i�J���֮w" << endl;
	cout << "(��J4)help" << endl;
	cout << "(��J5)���}�{��" << endl;
}

int main()
{
	A 3:40 : 25
		B 3 : 40 : 35
		C 3 : 40 : 37
	print_main_menu();
	int input;
	while (cin >> input)
	{
		if (input == 1)//���ϥΪ̯�����@����
		{
			char word = ' ';
			/*do
			{
				if (word == 'A' || word == 'a') {}
				else if (word == 'S' || word == 's') {}
				else if (word == 'D' || word == 'd') {}
				else if (word == 'F' || word == 'f') {}
				else if (word == 'G' || word == 'g') {}
				else if (word == 'H' || word == 'h') {}
				else if (word == 'J' || word == 'j') {}
			} while (word != 'p' && word != 'P');*/

		}
		else if (input == 2)
		{

		}
		else if (input == 3)
		{

		}
		else if (input == 4)//�]�w�n
		{
			cout << "�H�U�O���^���:" << endl;
			cout << "A => A\nS => B\nD => C\nF => D\nG => E\nH => F\nJ => G" << endl;
			cout << "W => A#\nE => C#\nR => D#\nT => G#\nY => F#" << endl;
		}
		else if (input == 5)
		{
			cout << "���}�{��" << endl;
			return 0;
		}
		else
		{
			cout << "��J���~" << endl;
		}

		system("cls");	
		print_main_menu();
	}



	//system("pause");
	return 0;
}