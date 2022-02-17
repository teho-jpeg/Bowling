//Bowling Teri Homicile
//#include <cstdlib>
#include <iostream>                                                             //delete unnecessary libraries
 
using namespace std;

int main()
{
    //bonus rolls go immediately after your tenth frame
     //(three rolls within the last frame or an 11th frame)
   
    int player1 [10] [2]= {0};
             //frame //roll
    int player2 [10] [2]= {0};
    int player3 [10] [2]= {0};

    int input =0;
    int play1sum =0;
    int play2sum =0;
    int play3sum =0;
   

    for (int f=1; f<11; f++)
    {
        cout << "Frame " << f << endl << endl;

        cout << "Player 1" << endl;
        for (int r=1; r<3; r++)
        {
                cout << "How may pins did you knock down in Roll " << r << "?\n";
                cin >> input;
                player1 [f][r] = input;
        }
        cout << endl;

        cout << "Player 2" << endl;
        for (int r=1; r<3; r++)
        {
                cout << "How may pins did you knock down in Roll " << r << "?\n";
                cin >> input;
                player2 [f][r] = input;
        }
        cout << endl;
        
        cout << "Player 3" << endl;
        for (int r=1; r<3; r++)
        {
                cout << "How may pins did you knock down in Roll " << r << "?\n";
                cin >> input;
                player3 [f][r] = input;
        }
        cout << endl;

    }

    return 0;
}
