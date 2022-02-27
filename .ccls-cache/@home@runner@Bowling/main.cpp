//Bowling Teri Homicile
//#include <cstdlib>
#include <iostream>    //delete unnecessary libraries
 
using namespace std;

int main()
{
    //bonus rolls go immediately after your tenth frame
     //(three rolls within the last frame or an 11th frame)
   
    int bowl[3][22] ={0};
        //player //rolls

    int play1sum =0;
    int play2sum =0;
    int play3sum =0;
   

    for (int f=0; f<10; f++)
    {
        cout << "Frame " << f+1 << endl << endl;
        for (int p=0; p<3; p++)
        {
            cout << "Player " << p+1 << endl;
            {
                for (int r=0; r<2; r++)
                {
                    cout << "How may pins did you knock down in Roll " << r+1 << "?\n";
                    cin >> bowl[p][r];
                        
                    if (p==0)
                        play1sum += bowl[p][r];
                    else if (p==1)
                        play2sum += bowl[p][r];
                    else //if (p==2)
                        play3sum += bowl[p][r];
    
                    if (bowl[p][r]==10) //if strike
                        r=1; //so prog. only prompts the user once
                    else if (bowl[p][r]+bowl[p][r+1]==10) //if spare
                        //look up scoring for spares
                        
                        
                            
                            
                    }
                }
                cout << endl;  
            }
        cout << endl;
    }

//        cout << "Player 2" << endl;
  //      for (int r=0; r<2; r++)
    //    {
      //      cout << "How may pins did you knock down in Roll " << r+1 << "?\n";
//            cin >> player2[f][r];
  //          play2sum += player2[f][r];
    //        if (player2[f][r]==10)
      //          r=1;
        //    if (player2[f][r-1]==10)
          //      play2sum += player2[f][r];
//        }
  //      cout << endl;
    //    
      //  cout << "Player 3" << endl;
        //for (int r=0; r<2; r++)
//        {
  //          cout << "How may pins did you knock down in Roll " << r+1 << "?\n";
//            cin >> player3[f][r];
  //          play3sum += player3[f][r];
    //        if (player3[f][r]==10)
      //          r=1;
        //    if (player3[f][r-1]==10)
          //      play3sum += player3[f][r];
//        }
  //      cout << endl;
    //}
    
    cout << "player1 " << play1sum << endl << "player2 " << play2sum << endl << "player3 " << play3sum << endl;

        
    return 0;
}
