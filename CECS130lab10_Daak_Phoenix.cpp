//Phoenix Daak
//CSE 130-01
//04-15-2022
//Lab #10


#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <time.h>


using namespace std;


//first layer
class tiktak
{
	public:
		void outline_of_board();
		void computerchoice();
		void humanchoice();
		void gameboard();
		void checkifwin();
		void checkifwin_columns();
		void checkifwin_rows();
		void checkifwin_diagonals();
		void winner();
		int turn;
		char game_board[9];
};
//second layer
class tiktak_2 : public tiktak
{
	public:
		void outline_of_board();
};
//third layer
class tiktak_3 : public tiktak
{
	public:
		void outline_of_board();
};


tiktak game;
tiktak_2 game2;
tiktak_3 game3;
	

//functions
void tiktak::winner()
{
	int wincount4human;
	int wincount4comp;
	
	
	if(turn == 0)
	{
		wincount4human++;
	}
	else if (turn == 1)
	{
		wincount4comp++;
	}
	
	if(wincount4human > wincount4comp)
	{
		cout << "You won with %d points", wincount4human;
	}
	else
	{
		cout << "You lost";
	}
}


	void tiktak::checkifwin()
{
	if (game_board[0] == game_board[1] && game_board[1] == game_board[2])
	{
		winner();
	}
	
	if (game_board[3] == game_board[4] && game_board[4] == game_board[5])
	{
		winner();
	}
	if (game_board[6] == game_board[7] && game_board[7] == game_board [8])
	{
		winner();
	}
	if (game_board[0] == game_board[3] && game_board[3] == game_board[6])
	{
		winner();
	}
	if (game_board[1] == game_board[4] && game_board[4] == game_board[7])
	{
		winner();
	}
	if (game_board[2] == game_board[5] && game_board[5] == game_board[8])
	{
		winner();
	}
	if (game_board[0] == game_board[4] && game_board[4] == game_board [8])
	{
		winner();
	}
	if (game_board[2] == game_board[4] && game_board[4] == game_board[6])
	{
		winner();
	}
	
}

void tiktak::checkifwin_columns() //checks the columns for three in a row
{
	if (game.game_board[0] == game2.game_board[0] && game2.game_board[0] == game3.game_board[0])
	{
		winner();
	}
	if (game.game_board[1] == game2.game_board[1] && game2.game_board[1] == game3.game_board[1])
	{
		winner();
	}
	if (game.game_board[2] == game2.game_board[2] && game2.game_board[2] == game3.game_board[2])
	{
		winner();
	}
	if (game.game_board[3] == game2.game_board[3] && game2.game_board[3] == game3.game_board[3])
	{
		winner();
	}
	if (game.game_board[4] == game2.game_board[4] && game2.game_board[4] == game3.game_board[4])
	{
		winner();
	}
	if (game.game_board[5] == game2.game_board[5] && game2.game_board[5] == game3.game_board[5])
	{
		winner();
	}
	if (game.game_board[6] == game2.game_board[6] && game2.game_board[6] == game3.game_board[6])
	{
		winner();
	}
	if (game.game_board[7] == game2.game_board[7] && game.game_board[7] == game3.game_board[7])
	{
		winner();
	}
	if (game.game_board[8] == game2.game_board[8] && game2.game_board[8] == game3.game_board[8])
	{
		winner();
	}
}


void tiktak::checkifwin_diagonals()
{
	if (game.game_board[0] == game2.game_board[3] && game2.game_board[3] == game3.game_board[6])
	{
		winner();
	}
	if (game.game_board[6] == game2.game_board[3] && game2.game_board[3] == game3.game_board[0])
	{
		winner();
	}
	if (game.game_board[0] == game2.game_board[1] && game2.game_board[1] == game3.game_board[2])
	{
		winner();
	}
	if (game.game_board[2] == game2.game_board[1] && game2.game_board[1] == game3.game_board[0])
	{
		winner();
	}
	if (game.game_board[2] == game2.game_board[5] && game2.game_board[5] == game3.game_board[8])
	{
		winner();
	}
	if (game.game_board[8] == game2.game_board[5] && game2.game_board[5] == game3.game_board[2])
	{
		winner();
	}
	if (game.game_board[6] == game2.game_board[7] && game2.game_board[7] == game3.game_board[8])
	{
		winner();
	}
	if (game.game_board[8] == game2.game_board[7] && game2.game_board[7] == game3.game_board[6])
	{
		winner();
	}
	if (game.game_board[0] == game2.game_board[4] && game2.game_board[4] == game3.game_board[8])
	{
		winner();
	}
	if (game.game_board[8] == game2.game_board[4] && game2.game_board[4] == game3.game_board[0])
	{
		winner();
	}
	if (game.game_board[2] == game2.game_board[4] && game2.game_board[4] == game3.game_board[6])
	{
		winner();
	}
	if (game.game_board[6] == game2.game_board[4] && game2.game_board[4] == game3.game_board[2])
	{
		winner();
	}
}
//unsure how the comparisons above do not work...

void tiktak::gameboard()
{
	game_board[0] = {'0'};
	game_board[1] = {'1'};
	game_board[2] = {'2'};
	game_board[3] = {'3'};
	game_board[4] = {'4'};
	game_board[5] = {'5'};
	game_board[6] = {'6'};
	game_board[7] = {'7'};
	game_board[8] = {'8'};
}


void tiktak::outline_of_board()
{
	cout << "\n\n1\t" << game_board[0] << " | " << game_board[1] << " | " << game_board[2]
		 << "\n\t---------"
		 << "\n\t" << game_board[3] << " | " << game_board[4] << " | " << game_board[5]
		 << "\n\t---------"
		 << "\n\t" << game_board[6] << " | " << game_board[7] << " | " << game_board[8];
}

//overloading outline_of_board
void tiktak_2::outline_of_board()
{
	cout << "\n\n\t2\t" << game_board[0] << " | " << game_board[1] << " | " << game_board[2]
		 << "\n\t\t---------"
		 << "\n\t\t" << game_board[3] << " | " << game_board[4] << " | " << game_board[5]
		 << "\n\t\t---------"
		 << "\n\t\t" << game_board[6] << " | " << game_board[7] << " | " << game_board[8];
}

//overloading outline_of_board
void tiktak_3::outline_of_board()
{
	cout << "\n\n\t\t3\t" << game_board[0] << " | " << game_board[1] << " | " << game_board[2]
		 << "\n\t\t\t---------"
		 << "\n\t\t\t" << game_board[3] << " | " << game_board[4] << " | " << game_board[5]
		 << "\n\t\t\t---------"
		 << "\n\t\t\t" << game_board[6] << " | " << game_board[7] << " | " << game_board[8];
}

//computers move
void tiktak::computerchoice()
{
	int computer_choice;
	
	do 
	{
		computer_choice = rand()%(0, 9);
	}
	
	while (game_board[computer_choice] == 'x' || game_board[computer_choice] == 'o');
			
	game_board[computer_choice] = {'o'};
}

//human's move
void tiktak::humanchoice()
{
	int human_choice;
	
	do 
	{
		cout << "\n\nPick a space you would like to make a move on:";	 
		cin  >> human_choice;
	}
	while (game_board[human_choice] == 'x' || game_board[human_choice] == 'o');
			
	game_board[human_choice] = {'x'};
}



int main()
{	
	game.gameboard();
	game2.gameboard();
	game3.gameboard();
	
	
	game.outline_of_board();
	game2.outline_of_board();
	game3.outline_of_board();
	
	
	srand(time(0));
	int first_move;
	first_move = rand()%2;
	
	
	if (first_move == 0)
	{
		cout << "\n\nYou have the first move"
			 << "\n\nYou are x's";
			 
			 
		int i;
		for(i = 0; i < 28; i++)
		{
			game.turn = 0;
			game2.turn = 0;
			game3.turn = 0;
			
			
			int choice;
			cout << "\n\nPick a board to make a move on:";
			cin  >> choice;
			
			
			if (choice == 1)
			{
				game.humanchoice();
			}
			if(choice == 2)
			{
				game2.humanchoice();
			}
			if(choice == 3)
			{
				game3.humanchoice();
			}
		
			
			game.outline_of_board();
			game2.outline_of_board();
			game3.outline_of_board();
			
			
			game.turn = 1;
			game2.turn = 1;
			game3.turn = 1;
			
			srand(time(0));
			int computers_move;
			computers_move = rand()%3;
	
			if(computers_move == 0)
			{
				game.computerchoice();
			}
			if(computers_move == 1)
			{
				game2.computerchoice();
			}
			if(computers_move == 2)
			{
				game3.computerchoice();
			}
			
			
			game.outline_of_board();
			game2.outline_of_board();
			game3.outline_of_board();
		}
	}
	
	
	else
	{
		cout << "\n\nThe Computer has the first move";
		
		
		int human_choice = 0;
		
		
		int i;
		for(i = 0; i < 28; i++)
		{
			game.turn = 1;
			
			
			srand(time(0));
			int computers_move;
			computers_move = rand()%3;
			
			
			if(computers_move == 0)
			{
				game.computerchoice();
			}
			if(computers_move == 1)
			{
				game2.computerchoice();
			}
			if(computers_move == 2)
			{
				game3.computerchoice();
			}
			
			
			game.outline_of_board();
			game2.outline_of_board();
			game3.outline_of_board();

			
			game.turn = 0;
			game2.turn = 0;
			game3.turn = 0;
			
			
			int choice;
			cout << "\n\nPick a board to make a move on:";
			cin  >> choice;
			
			
			if (choice == 1)
			{
				game.humanchoice();
			}
			if(choice == 2)
			{
				game2.humanchoice();
			}
			if(choice == 3)
			{
				game3.humanchoice();
			}
			
			
			game.outline_of_board();
			game2.outline_of_board();
			game3.outline_of_board();
			
			
			cout << "\n\nComputer's Turn...";
		}
		game.checkifwin();
		game2.checkifwin();
		game3.checkifwin();
		game.checkifwin_columns();
		game.checkifwin_diagonals();
	}
	
	return 0;
}
