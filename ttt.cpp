#include <iostream>
#include <vector>
void placement();
void turn();
void board();
void win();
void WinMessage();

std::vector<char> slot(8);
int move;
bool Xturn = true;
bool end = false;
  
void placement() {
 if (move == 1) {
  if (Xturn == true) {
    slot[0] = 'X';
 }
 else if (Xturn == false) {
    slot[0] = 'O';
  }
 else {}
 }
 else if (move == 2) {
   if (Xturn == true) {
    slot[1] = 'X';
  }
 else if (Xturn == false) {
    slot[1] = 'O';
  }
 else {}
 }
 else if (move == 3) {
 if (Xturn == true) {
    slot[2] = 'X';
 }
 else if (Xturn == false) {
    slot[2] = 'O';
  }
 else {}
 }
 else if (move == 4) {
  if (Xturn == true) {
    slot[3] = 'X';
 }
 else if (Xturn == false) {
    slot[3] = 'O';
  }
 else {}
 }
 else if (move == 5) {
  if (Xturn == true) {
    slot[4] = 'X';
 }
 else if (Xturn == false) {
    slot[4] = 'O';
  }
 else {}
 }
 else if (move == 6) {
 if (Xturn == true) {
    slot[5] = 'X';
 }
 else if (Xturn == false) {
    slot[5] = 'O';
  }
 else {}
 }
 else if (move == 7) {
  if (Xturn == true) {
    slot[6] = 'X';
 }
 else if (Xturn == false) {
    slot[6] = 'O';
  }
 else {}
 }
 else if (move == 8) {
  if (Xturn == true) {
    slot[7] = 'X';
 }
 else if (Xturn == false) {
    slot[7] = 'O';
  }
 else {}
 }
 else if (move == 9) {
  if (Xturn == true) {
    slot[8] = 'X';
 }
 else if (Xturn == false) {
    slot[8] = 'O';
  }
 else {}
 }
 else {
  std::cout << "Invalid Input\n\n";
  //move = 10;
  }
 }

void board() {
   std::cout << " " << slot[0]<< "  | "<< slot[1] << " |  " << slot[2] << "\n____|___|____" << "\n " << slot[3] << "  | " << slot[4] << " |  " << slot[5] << "\n____|___|____\n " << slot[6] << "  | "<< slot[7] << " |  " << slot[8] << "\n    |   |" << " \n\n";}

void WinMessage() {
  if (Xturn == true) {
  std::cout << "X wins!!!\n\n";
  end = true;
  }
  else if (Xturn == false) {
  std::cout << "O wins!!!\n\n";
  end = true;
  }
 }

void win() {
  if (slot[0] == slot[1] && slot[1] == slot[2]) {
 WinMessage();
  }
 else if (slot[3] == slot[4] && slot[4] == slot[5]) {
 WinMessage();
  }
 else if (slot[6] == slot[7] && slot[7] == slot[8]) {
 WinMessage();
  }
 else if (slot[0] == slot[3] && slot[3] == slot[6]) {
 WinMessage();
  }
 else if (slot[1] == slot[4] && slot[4] == slot[7]) {
 WinMessage();
  }
 else if (slot[2] == slot[5] && slot[5] == slot[8]) {
 WinMessage();
  }
 else if (slot[0] == slot[4] && slot[4] == slot[8]) {
 WinMessage();
  }
 else if (slot[2] == slot[4] && slot[4] == slot[6]) {
 WinMessage();
  }
 } 
int main() {
  slot[0] = '1';
  slot[1] = '2';
  slot[2] = '3';
  slot[3] = '4';
  slot[4] = '5';
  slot[5] = '6';
  slot[6] = '7';
  slot[7] = '8';
  slot[8] = '9';

 std::cout << " Tic-Tac-Toe!\n\n";
 board();
 for (int i = 1; i < 10; i++) {
 if (Xturn == true) {
  std::cout << "X turn!\n";
  std::cin >> move;
  placement();
  board ();
  win();
  if (end == true) {
   i = 10;
   }
  Xturn = false;
  }
 else {
  std::cout << "O turn!\n";
  std::cin >> move;
  placement();
  board ();
  win();
  if (end == true) {
    i = 10;
   }
  Xturn = true;
  }
 if (i == 9 && end != true) {
  std::cout << "Tie!\n";
  end = true;
  }
 }
 }
