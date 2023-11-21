#include <iostream>
#include <ctime>

using namespace std;


int main()
{
  srand(time(NULL));

  int dice1 = rand()%6+1;
  int dice2 = rand()%6+1;
  int dice3 = rand()%6+1;
  int dice4 = rand()%6+1;
  int dice5 = rand()%6+1;
  int dice6 = rand()%6+1;
  int sum = dice1 + dice2;
  int sum2 = dice3 + dice4;
  int sum3 = dice5 + dice6;
  cout << "You rolled " << dice1 << " + " << dice2 << " = " << sum << endl;

  if (sum == 2 || sum == 3 || sum == 12)
  {
    cout << "Craps! You lose!" << endl;
  }
  else if(sum == 7 || sum == 11)
  {
    cout << "You win!" << endl;
  }
  else
  {
      if(sum2 == sum)
      {
        cout << "Point is " << sum << endl;
        cout << "You rolled " << dice3 << " + " << dice4 << " = " << sum2 << endl;
        cout << "You win!";
      }
      else if (sum2 == 7)
      {
        cout << "Point is " << sum << endl;
        cout << "You rolled " << dice3 << " + " << dice4 << " = " << sum2 << endl;
        cout << "Craps! You lose!" << endl;
      }
      else
      {
        if(sum3 == sum)
        {
          cout << "Point is " << sum << endl;
          cout << "Point is still " << sum << endl;
          cout << "You rolled " << dice5 << " + " << dice6 << " = " << sum3 << endl;
          cout << "You win!";
        }
        else if (sum3 == 7)
        {
          cout << "Point is " << sum << endl;
          cout << "Point is still " << sum << endl;
          cout << "You rolled " << dice5 << " + " << dice6 << " = " << sum3 << endl;
          cout << "Craps! You lose!" << endl;
        }
      }
  }
}
