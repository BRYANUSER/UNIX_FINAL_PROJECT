#include<iostream>
#include<cstdlib>
//#include<unistd.h>

using namespace std;

void print_main_menu(void)
{
	cout << "請選擇想使用的功能" << endl;
	cout << "(輸入1)自由彈奏" << endl;
	cout << "(輸入2)錄製歌曲" << endl;
	cout << "(輸入3)進入音樂庫" << endl;
	cout << "(輸入4)help" << endl;
	cout << "(輸入5)離開程式" << endl;
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
		if (input == 1)//讓使用者能夠按一顆鍵
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
		else if (input == 4)//設定好
		{
			cout << "以下是鋼琴鍵位:" << endl;
			cout << "A => A\nS => B\nD => C\nF => D\nG => E\nH => F\nJ => G" << endl;
			cout << "W => A#\nE => C#\nR => D#\nT => G#\nY => F#" << endl;
		}
		else if (input == 5)
		{
			cout << "離開程式" << endl;
			return 0;
		}
		else
		{
			cout << "輸入錯誤" << endl;
		}

		system("cls");	
		print_main_menu();
	}



	//system("pause");
	return 0;
}