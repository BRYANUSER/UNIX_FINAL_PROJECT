#include<iostream>
#include<cstdlib>
#include<fstream>
#include<cstring>
#include<unistd.h>

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

			system("> 1.txt");//clear 1.txt
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
				else if (word == 'P' || word == 'p') { system("expr \"P\" >> 1.txt"); cout << endl; }
				system("date +%M%S >> 1.txt");

			} while (word != 'p' && word != 'P');


		}
		else if (input == 3)
		{
			cout << "(輸入1)播放錄製的歌曲" << endl;
			cout << "(輸入2)刪除錄製的歌曲" << endl;
			cout << "(輸入3)將錄製的歌曲製成五線譜" << endl;
			cout << "(輸入4)回到主頁面" << endl;
			int cho;
			cin >> cho;
			if (cho == 1)
			{
				fstream file;
				string str;
				file.open("1.txt", ios::in);
				getline(file, str);//start
				int min1 = (int(str[0]) - 48) * 10 + int(str[1]) - 48;
				int sec1 = (int(str[2]) - 48) * 10 + int(str[3]) - 48;
				int min2, sec2, sleeptime;
				while (true)
				{
					getline(file, str);//input
					if (str == "P")
					{
						break;
					}
					if (str == "A") { system("play pianoC.mp3 2> /dev/null"); }
					else if (str == "S") { system("play pianoD.mp3 2> /dev/null"); }
					else if (str == "D") { system("play pianoE.mp3 2> /dev/null"); }
					else if (str == "F") { system("play pianoF.mp3 2> /dev/null"); }
					else if (str == "G") { system("play pianoG.mp3 2> /dev/null"); }
					else if (str == "H") { system("play pianoA.mp3 2> /dev/null"); }
					else if (str == "J") { system("play pianoB.mp3 2> /dev/null"); }
					else if (str == "K") { system("play pianoC2.mp3 2> /dev/null"); }
					getline(file, str);//input time
					min2 = (int(str[0]) - 48) * 10 + int(str[1]) - 48;
					sec2 = (int(str[2]) - 48) * 10 + int(str[3]) - 48;
					sleeptime = sec2 + (60 * (min2 - min1)) - sec1;
					cout << min1 << " " << min2 << " " << sec1 << " " << sec2 << "   " << sleeptime << endl;
					min1 = min2;
					sec1 = sec2;
					sleep(sleeptime);
				}
				file.close();
			}
			else if (cho == 2)
			{
				system("> 1.txt");//clear 1.txt}
			}
			else if (cho == 3)
			{
				fstream file;
				string str;
				file.open("1.txt", ios::in);
				getline(file, str);//start
				system("cp h0.png h.png");
				while (true)
				{
					getline(file, str);//input
					if (str == "P")
					{
						break;
					}
					if (str == "A") { system("convert +append h.png Do.png dst.png"); }
					else if (str == "S") { system("convert +append h.png Re.png dst.png"); }
					else if (str == "D") { system("convert +append h.png Mi.png dst.png"); }
					else if (str == "F") { system("convert +append h.png Fa.png dst.png"); }
					else if (str == "G") { system("convert +append h.png Sol.png dst.png"); }
					else if (str == "H") { system("convert +append h.png La.png dst.png"); }
					else if (str == "J") { system("convert +append h.png Si.png dst.png"); }
					else if (str == "K") { system("convert +append h.png DO_2.png dst.png"); }
					system("rm h.png ");
					system("mv dst.png  h.png");
					getline(file, str);//input time

				}
				file.close();
				//cout << "GG" << endl;
			}
			else if (cho == 4) {}//get out
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
