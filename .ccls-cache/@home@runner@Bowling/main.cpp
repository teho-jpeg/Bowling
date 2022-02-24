//Bowling Teri Homicile
//#include <cstdlib>
#include <iostream>                                                             //delete unnecessary libraries
 
using namespace std;

int main()
{
    //bonus rolls go immediately after your tenth frame
     //(three rolls within the last frame or an 11th frame)

    int bowl [10] [2] [3] = {0};
          //frame //roll //player
    int input =0;
    int play1sum =0;
    int play2sum =0;
    int play3sum =0;
   
    for (int f=0; f<10; f++)
    {
        cout << "Frame " << f+1 << endl << endl;
        for (int p=0; p<3; p++)
        {
            cout << "Player " << p+1 << endl;
            for (int r=0; r<2; r++)
            {
                cout << "How may pins did you knock down in Roll " << r+1 << "?\n";
                cin >> input;
                bowl[f][r][p] = input;
            }
            cout << endl;
        }
    }

    for (int f=0; f<10; f++)
    {
        for (int p=0; p<3; p++)
        {
            if (p=0)
                for (int r=0; r<2; r++)
                {
                    play1sum += bowl[f][r][p];
                    cout << bowl [f][r][p] << " ";
                }
        }
        cout << endl;
    }

  cout << endl << play1sum << endl << play2sum << endl << play3sum << endl;
   
    return 0;
}
