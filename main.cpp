//Bowling Teri Homicile
//#include <cstdlib>
#include <iostream>    //delete unnecessary libraries
 
using namespace std;

int main()
{
    //bonus rolls go immediately after your tenth frame
     //(three rolls within the last frame or an 11th frame)
   
    int player1 [10][2] ={0};
          //roll1 //roll2
    int player2 [10][2] ={0};
    int player3 [10][2] ={0};

    int play1sum =0;
    int play2sum =0;
    int play3sum =0;
   

    for (int f=0; f<10; f++)
    {
        cout << "Frame " << f+1 << endl << endl;

        cout << "Player 1" << endl;
        for (int r=0; r<2; r++)
        {
            cout << "How may pins did you knock down in Roll " << r+1 << "?\n";
            cin >> player1[f][r];
            play1sum += player1[f][r];
            if (player1[f][r]==10) //so it doesn't prompt the user twice
                r=1; 
            if (player1[f][r]==10) //for strikes
                play1sum += player1[f][r]
                
                play1sum += player1[f][r];
            if (player1[f][r]+player1[f][r+1]==10) //for spares
                play1sum += player1[f][r];
        }
        cout << endl;

        cout << "Player 2" << endl;
        for (int r=0; r<2; r++)
        {
            cout << "How may pins did you knock down in Roll " << r+1 << "?\n";
            cin >> player2[f][r];
            play2sum += player2[f][r];
            if (player2[f][r]==10)
                r=1;
            if (player2[f][r-1]==10)
                play2sum += player2[f][r];
        }
        cout << endl;
        
        cout << "Player 3" << endl;
        for (int r=0; r<2; r++)
        {
            cout << "How may pins did you knock down in Roll " << r+1 << "?\n";
            cin >> player3[f][r];
            play3sum += player3[f][r];
            if (player3[f][r]==10)
                r=1;
            if (player3[f][r-1]==10)
                play3sum += player3[f][r];
        }
        cout << endl;
    }
    
    
    cout << "player1 " << play1sum << endl << "player2 " << play2sum << endl << "player3 " << play3sum << endl;

        
    return 0;
}
