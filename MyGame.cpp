#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int player1_score = 0; // 1 ci oyuncu icin xarici deyiseni teyin edirik
int player2_score = 0; // 2 ci oyuncu icin xarici deyiseni teyin edirik
int player1_endscore = 0;
int player2_endscore = 0;
void rollDice(int& score)
{
    int dice1 = rand() % 6 + 1;
    int dice2 = rand() % 6 + 1;
    score = dice1 + dice2;
}

void playGame()
{
    int turns = 3;
    for(int i = 0; i < turns; i++)
    {
        cout << "round " << i+1 << endl;
        cout << "1-ci oyuncu zeri atir..." << endl;
        rollDice(player1_score);
        cout << "2-ci oyuncu zeri atir..." << endl;
        rollDice(player2_score);
        cout << "round neticeleri: " << endl;
        cout << "1-ci oyuncu: " << player1_score << endl;
        cout << "2-ci oyuncu: " << player2_score << endl;
        if(player1_score > player2_score)
        {
            cout << "1-ci oyuncu round qalibidir!" << endl;
            player1_score++;
            player1_endscore++;
        }
        else if(player1_score < player2_score)
        {
            cout << "2-ci oyuncu round qalibidir!" << endl;
            player2_score++;
            player2_endscore++;
        }
        else
        {
            cout << "berabere" << endl;
        }
        cout << endl;
    }
}

int main()
{
    srand(time(NULL)); // random reqem generatorunun inisializasiyasi
    cout << "Zer atma oyunu!" << endl;
    cout << "qanunlar: her bir oyuncu zer atir, kimin umumi xall sayisi daha coxdusa o qalib gelir" << endl;
    cout << endl;
    playGame(); // oyun basdiyir
    cout << "Oyunun sonu!" << endl;
    cout << "1-ci oyuncunun hesabi: " << player1_endscore << endl;
    cout << "2-ci oyuncunun hesabi: " << player2_endscore << endl;
    if(player1_endscore > player2_endscore)
    {
        cout << "1-ci oyuncu qalib geldi!" << endl;
    }
    else if(player1_endscore < player2_endscore)
    {
        cout << "2-ci oyuncu qalib geldi!" << endl;
    }
    else
    {
        cout << "berabere";
	}
}