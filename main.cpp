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
   
    for (int f=1; f<11; f++)
    {
        cout << "Frame " << f << endl << endl;
        for (int p=1; p<4; p++)
        {
            cout << "Player " << p << endl;
            for (int r=1; r<3; r++)
            {
                cout << "How may pins did you knock down in Roll " << r << "?\n";
                cin >> input;
                bowl[f][r][p] = input;
            }
            cout << endl;
        }
    }

    for (int i=0; i<10; i++)
    {
        for (int j=1; j<4; j++)
        {
            for (int k=1; k<3; k++)
            {
                bowl[f][r][p;
            }
        }
    }
   
    return 0;
}
