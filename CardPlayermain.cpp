// Tyler Menzie
// CardPlayer Lab

/*****************************************************************************************************
*      - Utilizes graph1.h                                                                           *
*      - Asks the user if they would like for a Red or Black Card set to be delt                     *
*      - Asks the user how many cards ( Greater than or Equal to 5 or Less than or Equal to 10 )     *
*      - Deals a random set of cards for the user within the parameters set by the user              *
*        and displays them to the graphics window                                                    *
*                                                                                                    *
******************************************************************************************************/

#include <iostream>
#include <ctime>
#include "graph1.h"
#include "CardPlayer.h"

using namespace std;

int main()
{
    //Variable Declaration/Initialization
    int noCards = 0;
    char color = 'r';
    CardPlayer player1;
    CardPlayer dealer;

    srand(time(0));

    //Display Graphics
    displayGraphics();

    //Prompt for the suit color
    cout << "Enter the suit color (r for red suits, b for black suits): ";
    cin >> color;

    //Set the color
    if (color == 'r')
    {
        player1.setColor(color);
        dealer.setColor('b');
    }
    else
    {
        player1.setColor('b');
        dealer.setColor(color);
    }

    //Prompt for the number of cards
    cout << "Enter the number of cards to deal to each player (>= 5 but <= 10): ";
    cin >> noCards;


    //Set the nuCards (will need to dynamically allocate the hand inside of this method)

    player1.setNoCards(noCards);

    //Deal the cards

    player1.deal();

    //Display the cards

    player1.displayHand(250, 100);

    //Display the score


    return 0;

}
