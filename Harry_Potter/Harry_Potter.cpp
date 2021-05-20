#include <iostream>

#include "Lobby.h"
#include "Cards.h"
#include "Fight.h"

#include <conio.h> 

#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <fstream>
#include <string>

using namespace std;

bool gameOver;


void cards(vector<string>x) {
	srand(time(0));
	int c;
	for (int i = 0; i < 3; i++) {
		c = rand() % (x.size() - i);
		cout << x[c] << "    ";
		x.erase(x.begin() + c);
	}
	cout << endl << "There are still " << x.size() << " cards left in the deck." << endl;
}

void Menu() {
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "\t\t\t\t\t\t\t\t\t    HARRY\tPOTTER" << endl;
	cout << "\t\t\t\t\t\t\t\t____________________________________________" << endl << endl;
	
	cout << "\t\t\t\t\t\t\t\t\t\tSTART GAME" << endl << endl;
	cout << "\t\t\t\t\t\t\t\t\t(enter '1' to start game) " << endl << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t  EXIT" << endl;
	cout << "\t\t\t\t\t\t\t\t\t(enter 'E' to start game) " << endl << endl;

	char key =0;

	while (key != 1) {
		cin >> key;
		if (key == '1') {
			gameOver = false;
			system("cls");
			//cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			//cout << "\t\t\t\t\t\t\t\t\t\tGame start";
			//cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			
			vector<string>person;

			ifstream in("Text.txt");
			while (in) {
				string str;
				in >> str;
				person.push_back(str);


			}

			string name;
			cout << "Please enter your name: ";
			cin >> name;
			srand(time(0));

			cout << name << ", these are your cards: ";
			cards(person);
			cout << endl << "-----------------------------------------------------------------------------------------------------------------" << endl;
			cout << "These are card of your opponent: ";
			random_shuffle(person.begin(), person.end());
			cards(person);
			
		}
		else if (key == 'e' || key == 'E') {
			gameOver = true;
			system("cls");
			cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "\t\t\t\t\t\t\t\t\t\tThank you for game:)" << endl;
			cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		}
		/*else {
			cout << "Invalid argument. Please, try again." << endl;
		}*/
	}
}

//void drawBoard() {
//
//}

//
//void Fight() {
//	vector<string>person;
//
//	ifstream in("Text.txt");
//	while (in) {
//		string str;
//		in >> str;
//		person.push_back(str);
//	}
//
//
//	string name;
//	cout << "Please enter your name: ";
//	cin >> name;
//	srand(time(0));
//
//	cout << name << ", these are your cards: ";
//	cards(person);
//	cout << endl << "-----------------------------------------------------------------------------------------------------------------" << endl;
//	cout << "These are card of your opponent: ";
//	random_shuffle(person.begin(), person.end());
//	cards(person);
//}


int main() {
    
	Menu();
	/*drawBoard();*/

    return 0;
}


//bool gameOver;
//const int wight = 200;
//const int height = 125;
//
//
////enum eDirection { START, FIRSTcard, SECONDcard, THIRDcard, FORTHcard, FIFTHcard, SIXTHcard, SEVENTHcard, INFORMATION, EXIT};
////eDirection dir;
//
//void Setup() {
//	gameOver = false;
//	/*dir = EXIT;*/
//}
//
//void Draw() {
//	system("cls");
//	for (int i = 0; i < wight + 1; i++) {
//		cout << "#";
//	}
//	cout << endl;
//	for (int i = 0; i < wight + 1; i++) {
//		cout << "#";
//	}
//}
////
////void printOnTable() {
////
////}
////
////void Input() {
////	if (_kbhit()) {
////		switch (_getch())
////		{
////		case ' ':
////			dir = START;
////			break;
////		case '1':
////			dir = FIRSTcard;
////			break;
////		case '2':
////			dir = SECONDcard;
////			break;
////		case '3':
////			dir = THIRDcard;
////			break;
////		case '4':
////			dir = FORTHcard;
////			break;
////		case '5':
////			dir = FIFTHcard;
////			break;
////		case '6':
////			dir = SIXTHcard;
////			break;
////		case '7':
////			dir = SEVENTHcard;
////			break;
////		case 'i':
////			dir = INFORMATION;
////		case 'x':
////			gameOver = true;
////			break;
////		}
////	}
////}
//
////void Fight() {
////
////
////
////	/*switch (dir) {
////	case FIRSTcard:
////		printOnTable();
////		break;
////	}
////	case SECONDcard:
////		printOnTable();
////		break;
////	}
////	case FORTHcard:
////		printOnTable();
////		break;
////	}
////	case FIFTHcard:
////		printOnTable();
////		break;
////	}
////	case SIXTHcard:
////		printOnTable();
////		break;
////	}
////	case SEVENTHcard:
////		printOnTable();
////		break;
////	}
////	case FIRSTcard:
////		printOnTable();
////		break;
////	}*/
////
////}
//
////void GameStart() {}
//
//int main() {
//	/*GameStart();*/
//
//
//	while (!gameOver) {
//		Draw();
//		/*Input();
//		Fight();*/
//	}
//
//	return 0;
//}
//







//void GameStart() {
//	int key = 0;
//	int x = 0;
//	while (key != 2) {
//		cout << "Choose the action: 1 is start game; 2 is quit." << endl;
//		cin >> key;
//		if (key == 1 && x == 0) {
//			cout << "Think one more time..." << endl;
//
//		}
//		else if (key == 2) {
//			cout << "Thank you for game!" << endl;
//		}
//		if (x == 1) {
//			cout << "Are you sure?" << endl;
//		}
//		else if (x == 2) {
//			cout << "I give you one more chance to change your choice." << endl;
//		}
//		x++;
//	}
//}


//
//
//#include <iostream>
//#include <windows.h>
//
//using namespace std;
//
//struct position {
//    int x, y;
//};
//
//
//class field_cls {
//    static const int height;
//    static const int width;
//    char** field;
//    field_cls(const field_cls&);
//    field_cls operator=(const field_cls&);
//public:
//    field_cls() {
//        field = new char* [field_cls::height];
//        for (int c = 0; c < field_cls::height; ++c) {
//            field[c] = new char[field_cls::width];
//        }
//    }
//    ~field_cls() {
//        for (int c = 0; c < field_cls::height; ++c) {
//            delete[] field[c];
//        }
//        delete[] field;
//    }
//
//    void print() {
//        for (int c = 0; c < height; ++c) {
//            for (int r = 0; r < width; ++r) {
//                cout << field[c][r];
//            }
//            cout << endl;
//        }
//    }
//
//    void clear() {
//        for (int c = 0; c < height; ++c) {
//            for (int r = 0; r < width; ++r) {
//                field[c][r] = ' ';
//            }
//        }
//    }
//
//    int get_width() const { return width; }
//    int get_height() const { return height; }
//
//
//    void draw(int y, int x, char what) {
//        //y = (y < 0) ? 0 : (y >= height ? height - 1 : y);
//        //x = (x < 0) ? 0 : (x >= width ? width - 1 : x);
//
//        field[y][x] = what;
//    }
//
//} field;
//
//
//class food_cls {
//    position pos;
//    char symbol;
//public:
//    food_cls() : symbol('X'), pos() {
//        pos.x = pos.y = -1;
//    }
//
//    void set_pos(int x, int y) {
//        pos.x = x;
//        pos.y = y;
//    }
//
//    void reposition(const field_cls& field) {
//        pos.x = rand() % field.get_width();
//        pos.y = rand() % field.get_height();
//    }
//
//    int get_x() const { return pos.x; }
//    int get_y() const { return pos.y; }
//    char get_symbol() const { return symbol; }
//} food;
//
//class snake_cls {
//    enum { UP, DOWN, LEFT, RIGHT } dir;
//    char symbol, head_symbol;
//    position pos[100];
//    position& head;
//    int speed;
//    int size;
//    bool can_turn;
//public:
//    snake_cls(int x, int y) :
//        symbol('#'), head_symbol('@'), pos(),
//        speed(1), size(1), dir(RIGHT),
//        head(pos[0]), can_turn(true)
//    {
//        pos[0].x = x;
//        pos[0].y = y;
//    }
//
//    bool check_food(const food_cls& food) {
//        if (food.get_x() == head.x && food.get_y() == head.y) {
//            size += 1;
//            return true;
//        }
//        return false;
//    }
//
//    void get_input(const field_cls& field) {
//        if (GetAsyncKeyState(VK_UP) && dir != DOWN) {
//            dir = UP;
//        }
//        if (GetAsyncKeyState(VK_DOWN) && dir != UP) {
//            dir = DOWN;
//        }
//        if (GetAsyncKeyState(VK_LEFT) && dir != RIGHT) {
//            dir = LEFT;
//        }
//        if (GetAsyncKeyState(VK_RIGHT) && dir != LEFT) {
//            dir = RIGHT;
//        }
//    }
//
//    void move(const field_cls& field) {
//        position next = { 0, 0 };
//        switch (dir) {
//        case UP:
//            next.y = -speed;
//            break;
//        case DOWN:
//            next.y = speed;
//            break;
//        case LEFT:
//            next.x = -speed;
//            break;
//        case RIGHT:
//            next.x = speed;
//        }
//        for (int c = size - 1; c > 0; --c) {
//            pos[c] = pos[c - 1];
//        }
//        head.x += next.x;
//        head.y += next.y;
//
//        if (head.x < 0 || head.y < 0 || head.x >= field.get_width() || head.y >= field.get_height()) {
//            throw "DEADD!!!!";
//        }
//    }
//
//    void draw(field_cls& field) {
//        for (int c = 0; c < size; ++c) {
//            if (c == 0) {
//                field.draw(pos[c].y, pos[c].x, head_symbol);
//            }
//            else {
//                field.draw(pos[c].y, pos[c].x, symbol);
//            }
//        }
//    }
//
//    int get_x() const { return head.x; }
//    int get_y() const { return head.y; }
//    char get_symbol() const { return symbol; }
//} snake(1, 1);
//
//
//const int field_cls::height = 24;
//const int field_cls::width = 79;
//
//
//int main() {
//    field.clear();
//
//    food.set_pos(5, 5);
//
//    while (1) {
//        field.clear();
//
//       
//            snake.get_input(field);
//        try {
//            snake.move(field);
//        }
//        catch (const char* er) {
//            field.clear();
//            cerr << er << endl;
//            system("pause");
//            return -1;
//        }
//        snake.draw(field);
//        field.draw(food.get_y(), food.get_x(), food.get_symbol());
//
//
//        if (snake.check_food(food)) {
//            food.reposition(field);
//        }
//
//        field.print();
//
//        Sleep(1000 / 30);
//        system("cls");
//    }
//
//    return 0;
//}


//#include <iostream>
//#include <functional>
//#include <Windows.h>
//using namespace std;
//const int cell = 4;
//void draw_board() {
//    for (int y = 0; y <= 3 * cell; ++y) {
//        for (int x = 0; x <= 3 * cell; ++x)
//            if (x % cell == 0 && y % cell == 0) cout << "+";
//            else if (x % cell == 0) cout << "|";
//            else if (y % cell == 0) cout << "-";
//            else cout << " ";
//        cout << endl;
//    }
//}
//HANDLE output;
//COORD input() {
//    static COORD cursor = { 2, 2 };
//    SetConsoleCursorPosition(output, cursor);
//    while (!GetAsyncKeyState(VK_RETURN)) {
//        const int max_move = 4;
//        COORD moves[max_move] = { {2,0}, {0,2}, {1,0}, {0,1} };
//        bool moved = false;
//        for (int i = 0; i < max_move; ++i)
//            if (GetAsyncKeyState(VK_LEFT + i)) {
//                moved = true;
//                cursor.X = (moves[i].X * cell + cursor.X) % (3 * cell);
//                cursor.Y = (moves[i].Y * cell + cursor.Y) % (3 * cell);
//            }
//        if (moved) SetConsoleCursorPosition(output, cursor);
//        Sleep(100);
//    }
//    return { (cursor.X - 2) / cell, (cursor.Y - 2) / cell };
//}
//char board[3][4] = { "   ","   ", "   " };
//void iterate(SHORT& it, SHORT& i, SHORT& j, int& x_counter, int& o_counter, COORD& space, function<SHORT(SHORT)> adjust) {
//    x_counter = 0, o_counter = 0;
//    for (it = 0; it < 3; ++it)
//        if (board[i][adjust(j)] == 'X') ++x_counter;
//        else if (board[i][adjust(j)] == 'O') ++o_counter;
//        else space = { i, adjust(j) };
//}
//bool seek_row(COORD& space, int triggerX, int triggerO) {
//    int x_counter, o_counter;
//    SHORT i, j;
//    for (i = 0; i < 3; ++i) {
//        iterate(j, i, j, x_counter = 0, o_counter = 0, space, [](SHORT x) {return x; });
//        if (x_counter == triggerX && o_counter == triggerO) return true;
//        iterate(j, j, i, x_counter = 0, o_counter = 0, space, [](SHORT x) {return x; });
//        if (x_counter == triggerX && o_counter == triggerO) return true;
//    }
//    iterate(i, i, i, x_counter = 0, o_counter = 0, space, [](SHORT x) {return x; });
//    if (x_counter == triggerX && o_counter == triggerO) return true;
//    iterate(i, i, i, x_counter = 0, o_counter = 0, space, [](SHORT x) {return 2 - x; });
//    if (x_counter == triggerX && o_counter == triggerO) return true;
//    return false;
//}
//COORD solve(int turn, bool& gameover) {
//    gameover = false;
//    if (turn == 0) return { 1, 1 };
//    if (turn == 1) {
//        const int max_case = 8;
//        COORD cases[] = { {0,0}, {0,2}, {2,2}, {2,0}, {1,0}, {2,1}, {1,2}, {0,1} };
//        COORD answs[] = { {0,2}, {2,2}, {0,2}, {2,2}, {0,2}, {0,0}, {0,0}, {0,2} };
//        for (int i = 0; i < max_case; ++i)
//            if (board[cases[i].X][cases[i].Y] == 'O') return answs[i];
//    }
//    COORD space;
//    if (seek_row(space, 2, 0)) {
//        gameover = true;
//        return space;
//    }
//    if (seek_row(space, 0, 2)) return space;
//    return space;
//}
//void put_X(COORD cursor) {
//    board[cursor.X][cursor.Y] = 'X';
//    cursor.X = (cursor.X * cell) + 2;
//    cursor.Y = (cursor.Y * cell) + 2;
//    SetConsoleCursorPosition(output, cursor);
//    cout << 'X';
//}
//int main() {
//    output = GetStdHandle(STD_OUTPUT_HANDLE);
//    bool gameover = false;
//    draw_board();
//    int counter = 0;
//    while (!gameover) {
//        put_X(solve(counter, gameover));
//        if (gameover || counter == 4) break;
//        COORD plr;
//        do {
//            plr = input();
//        } while (board[plr.X][plr.Y] != ' ');
//        cout << (board[plr.X][plr.Y] = 'O');
//        ++counter;
//    }
//    SetConsoleCursorPosition(output, { 0, 13 });
//    return 0;
//}

//#include <functional>
//#include <iostream>
//#include <Windows.h>
//
//
//using namespace std;
//
//using namespace std;
//const int cell = 4;
//void draw_board() {
//    for (int y = 0; y <= 3 * cell; ++y) {
//        for (int x = 0; x <= 3 * cell; ++x)
//            if (x % cell == 0 && y % cell == 0) cout << "+";
//            else if (x % cell == 0) cout << "|";
//            else if (y % cell == 0) cout << "-";
//            else cout << " ";
//        cout << endl;
//    }
//}
//HANDLE output;
//COORD input() {
//    static COORD cursor = { 2, 2 };
//    SetConsoleCursorPosition(output, cursor);
//    while (!GetAsyncKeyState(VK_RETURN)) {
//        const int max_move = 4;
//        COORD moves[max_move] = { {2,0}, {0,2}, {1,0}, {0,1} };
//        bool moved = false;
//        for (int i = 0; i < max_move; ++i)
//            if (GetAsyncKeyState(VK_LEFT + i)) {
//                moved = true;
//                cursor.X = (moves[i].X * cell + cursor.X) % (3 * cell);
//                cursor.Y = (moves[i].Y * cell + cursor.Y) % (3 * cell);
//            }
//        if (moved) SetConsoleCursorPosition(output, cursor);
//        Sleep(100);
//    }
//    return { (cursor.X - 2) / cell, (cursor.Y - 2) / cell };
//}
//char board[3][4] = { "   ","   ", "   " };
//void iterate(SHORT& it, SHORT& i, SHORT& j, int& x_counter, int& o_counter, COORD& space, function<SHORT(SHORT)> adjust) {
//    x_counter = 0, o_counter = 0;
//    for (it = 0; it < 3; ++it)
//        if (board[i][adjust(j)] == 'X') ++x_counter;
//        else if (board[i][adjust(j)] == 'O') ++o_counter;
//        else space = { i, adjust(j) };
//}
//bool seek_row(COORD& space, int triggerX, int triggerO) {
//    int x_counter, o_counter;
//    SHORT i, j;
//    for (i = 0; i < 3; ++i) {
//        iterate(j, i, j, x_counter = 0, o_counter = 0, space, [](SHORT x) {return x; });
//        if (x_counter == triggerX && o_counter == triggerO) return true;
//        iterate(j, j, i, x_counter = 0, o_counter = 0, space, [](SHORT x) {return x; });
//        if (x_counter == triggerX && o_counter == triggerO) return true;
//    }
//    iterate(i, i, i, x_counter = 0, o_counter = 0, space, [](SHORT x) {return x; });
//    if (x_counter == triggerX && o_counter == triggerO) return true;
//    iterate(i, i, i, x_counter = 0, o_counter = 0, space, [](SHORT x) {return 2 - x; });
//    if (x_counter == triggerX && o_counter == triggerO) return true;
//    return false;
//}
//COORD solve(int turn, bool& gameover) {
//    gameover = false;
//    if (turn == 0) return { 1, 1 };
//    if (turn == 1) {
//        const int max_case = 8;
//        COORD cases[] = { {0,0}, {0,2}, {2,2}, {2,0}, {1,0}, {2,1}, {1,2}, {0,1} };
//        COORD answs[] = { {0,2}, {2,2}, {0,2}, {2,2}, {0,2}, {0,0}, {0,0}, {0,2} };
//        for (int i = 0; i < max_case; ++i)
//            if (board[cases[i].X][cases[i].Y] == 'O') return answs[i];
//    }
//    COORD space;
//    if (seek_row(space, 2, 0)) {
//        gameover = true;
//        return space;
//    }
//    if (seek_row(space, 0, 2)) return space;
//    return space;
//}
//void put_X(COORD cursor) {
//    board[cursor.X][cursor.Y] = 'X';
//    cursor.X = (cursor.X * cell) + 2;
//    cursor.Y = (cursor.Y * cell) + 2;
//    SetConsoleCursorPosition(output, cursor);
//    cout << 'X';
//}
//struct position {
//    int x, y;
//};
//
//
//class field_cls {
//    static const int height;
//    static const int width;
//    char** field;
//    field_cls(const field_cls&);
//    field_cls operator=(const field_cls&);
//public:
//    field_cls() {
//        field = new char* [field_cls::height];
//        for (int c = 0; c < field_cls::height; ++c) {
//            field[c] = new char[field_cls::width];
//        }
//    }
//    ~field_cls() {
//        for (int c = 0; c < field_cls::height; ++c) {
//            delete[] field[c];
//        }
//        delete[] field;
//    }
//
//    void print() {
//        for (int c = 0; c < height; ++c) {
//            for (int r = 0; r < width; ++r) {
//                cout << field[c][r];
//            }
//            cout << endl;
//        }
//    }
//
//    void clear() {
//        for (int c = 0; c < height; ++c) {
//            for (int r = 0; r < width; ++r) {
//                field[c][r] = ' ';
//            }
//        }
//    }
//
//    int get_width() const { return width; }
//    int get_height() const { return height; }
//
//
//    void draw(int y, int x, char what) {
//        y = (y < 0) ? 0 : (y >= height ? height - 1 : y);
//        x = (x < 0) ? 0 : (x >= width ? width - 1 : x);
//
//        field[y][x] = what;
//    }
//
//} field;
//
//
//class food_cls {
//    position pos;
//    char symbol;
//public:
//    food_cls() : symbol('X'), pos() {
//        pos.x = pos.y = -1;
//    }
//
//    void set_pos(int x, int y) {
//        pos.x = x;
//        pos.y = y;
//    }
//
//    void reposition(const field_cls& field) {
//        pos.x = rand() % field.get_width();
//        pos.y = rand() % field.get_height();
//    }
//
//    int get_x() const { return pos.x; }
//    int get_y() const { return pos.y; }
//    char get_symbol() const { return symbol; }
//} food;
//
//class snake_cls {
//    enum { UP, DOWN, LEFT, RIGHT } dir;
//    char symbol, head_symbol;
//    position pos[100];
//    position& head;
//    int speed;
//    int size;
//    bool can_turn;
//public:
//    snake_cls(int x, int y) :
//        symbol('#'), head_symbol('@'), pos(),
//        speed(1), size(1), dir(RIGHT),
//        head(pos[0]), can_turn(true)
//    {
//        pos[0].x = x;
//        pos[0].y = y;
//    }
//
//    bool check_food(const food_cls& food) {
//        if (food.get_x() == head.x && food.get_y() == head.y) {
//            size += 1;
//            return true;
//        }
//        return false;
//    }
//
//    void get_input(const field_cls& field) {
//        if (GetAsyncKeyState(VK_UP) && dir != DOWN) {
//            dir = UP;
//        }
//        if (GetAsyncKeyState(VK_DOWN) && dir != UP) {
//            dir = DOWN;
//        }
//        if (GetAsyncKeyState(VK_LEFT) && dir != RIGHT) {
//            dir = LEFT;
//        }
//        if (GetAsyncKeyState(VK_RIGHT) && dir != LEFT) {
//            dir = RIGHT;
//        }
//    }
//
//    void move(const field_cls& field) {
//        position next = { 0, 0 };
//        switch (dir) {
//        case UP:
//            next.y = -speed;
//            break;
//        case DOWN:
//            next.y = speed;
//            break;
//        case LEFT:
//            next.x = -speed;
//            break;
//        case RIGHT:
//            next.x = speed;
//        }
//        for (int c = size - 1; c > 0; --c) {
//            pos[c] = pos[c - 1];
//        }
//        head.x += next.x;
//        head.y += next.y;
//
//        if (head.x < 0 || head.y < 0 || head.x >= field.get_width() || head.y >= field.get_height()) {
//            /*throw "DEADD!!!!";*/
//            throw "We hope you reminded your great childhood:)";
//        }
//    }
//
//    void draw(field_cls& field) {
//        for (int c = 0; c < size; ++c) {
//            if (c == 0) {
//                field.draw(pos[c].y, pos[c].x, head_symbol);
//            }
//            else {
//                field.draw(pos[c].y, pos[c].x, symbol);
//            }
//        }
//    }
//
//    int get_x() const { return head.x; }
//    int get_y() const { return head.y; }
//    char get_symbol() const { return symbol; }
//} snake(1, 1);
//
//
//const int field_cls::height = 24;
//const int field_cls::width = 79;
//int main() {
//    int time = 0;
//    while (time != 1) {
//        output = GetStdHandle(STD_OUTPUT_HANDLE);
//        bool gameover = false;
//        draw_board();
//        int counter = 0;
//        while (!gameover) {
//            put_X(solve(counter, gameover));
//            if (gameover || counter == 4) break;
//            COORD plr;
//            do {
//                plr = input();
//            } while (board[plr.X][plr.Y] != ' ');
//            cout << (board[plr.X][plr.Y] = 'O');
//            ++counter;
//        }
//        SetConsoleCursorPosition(output, { 0, 13 });
//        time++;
//    }
//    cout << "Now try to play another great game" << endl;
//
//    field.clear();
//
//    food.set_pos(5, 5);
//
//    while (1) {
//        field.clear();
//
//        snake.get_input(field);
//        try {
//            snake.move(field);
//        }
//        catch (const char* er) {
//            field.clear();
//            cerr << er << endl;
//            system("pause");
//            return -1;
//        }
//        snake.draw(field);
//        field.draw(food.get_y(), food.get_x(), food.get_symbol());
//
//
//        if (snake.check_food(food)) {
//            food.reposition(field);
//        }
//
//        field.print();
//
//        Sleep(1000 / 30);
//        cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;
//        system("cls");
//        cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;
//    }
//
//    return 0;
//}
