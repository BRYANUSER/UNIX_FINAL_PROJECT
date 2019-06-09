#include<iostream>
#include<cstdlib>
#include<fstream>
#include<cstring>
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
	print_main_menu();
	int input;
	fstream file;
	string str;
	file.open("1.txt", ios::out);
	while (cin >> input)
	{
		if (input == 1)//讓使用者能夠按一顆鍵
		{
			cout << "輸入p離開" << endl;
			char word = ' ';
			do
			{
				cin >> word;
				if (word == 'A' || word == 'a') { system("play pianoC.mp3 2> /dev/null"); }
				else if (word == 'S' || word == 's') { system("play pianoD.mp3 2> /dev/null"); }
				else if (word == 'D' || word == 'd') { system("play pianoE.mp3 2> /dev/null"); }
				else if (word == 'F' || word == 'f') { system("play pianoF.mp3 2> /dev/null"); }
				else if (word == 'G' || word == 'g') { system("play pianoG.mp3 2> /dev/null"); }
				else if (word == 'H' || word == 'h') { system("play pianoA.mp3 2> /dev/null"); }
				else if (word == 'J' || word == 'j') { system("play pianoB.mp3 2> /dev/null"); }
				else if (word == 'K' || word == 'k') { system("play pianoC2.mp3 2> /dev/null"); }

			} while (word != 'p' && word != 'P');

		}
		else if (input == 2)
		{


			cout << "輸入p結束錄製" << endl;
			system("date +%M%S >> 1.txt");//存入開始時間
			char word = ' ';
			do
			{
				cin >> word;
				if (word == 'A' || word == 'a') { system("expr \"A\" >> 1.txt"); system("play pianoC.mp3 2> /dev/null"); }
				else if (word == 'S' || word == 's') { system("expr \"S\" >> 1.txt"); system("play pianoD.mp3 2> /dev/null"); }
				else if (word == 'D' || word == 'd') { system("expr \"D\" >> 1.txt"); system("play pianoE.mp3 2> /dev/null"); }
				else if (word == 'F' || word == 'f') { system("expr \"F\" >> 1.txt"); system("play pianoF.mp3 2> /dev/null"); }
				else if (word == 'G' || word == 'g') { system("expr \"G\" >> 1.txt"); system("play pianoG.mp3 2> /dev/null"); }
				else if (word == 'H' || word == 'h') { system("expr \"H\" >> 1.txt"); system("play pianoA.mp3 2> /dev/null"); }
				else if (word == 'J' || word == 'j') { system("expr \"J\" >> 1.txt"); system("play pianoB.mp3 2> /dev/null"); }
				else if (word == 'K' || word == 'k') { system("expr \"K\" >> 1.txt"); system("play pianoC2.mp3 2> /dev/null"); }
				system("date +%M%S >> 1.txt");
				file << "\n";

			} while (word != 'p' && word != 'P');


		}
		else if (input == 3)
		{

		}
		else if (input == 4)//設定好
		{
			cout << "以下是鋼琴鍵位:" << endl;
			cout << "A -> C\nS -> D\nD -> E\nF -> F\nG -> G\nH -> A\nJ -> B\nK ->C2" << endl << endl;

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

		//system("cls");	
		print_main_menu();
	}



	//system("pause");
	return 0;
}
