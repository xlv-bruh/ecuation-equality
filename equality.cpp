#include <iostream>
#include <fstream>
using namespace std;



int main()
{
    char temp, temp1;
    ifstream in;
    bool idk = true;
    int count = 0;
    int count1 = 0;

    in.open("in.txt");

    while(!in.eof())
    {
        in >> temp;
        if(temp == '(')
        {
            while (!in.eof() && idk == true)
            {
                in >> temp1;
                if (temp1 == ')')
                {
                    break;
                }
                else if(temp1 == '(')
                {
                    cout << "greseala";
                    idk = false;
                    break;
                }
            }
            while (!in.eof() && idk == true)
            {
                in >> temp1;
                if (temp1 == '(')
                {
                    break;
                }
                else if (temp1 == ')')
                {
                    cout << "greseala";
                    idk = false;
                    break;
                }
            }
        }
    }
    
    return 0;
}
