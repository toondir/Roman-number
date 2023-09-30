// Roman number.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include<vector>

using namespace std;

int main()
{
    string Roman = "MCMXCVI";
    vector<int> pos;
    int value=0;
    

    for (int i = 0; i < Roman.length(); i++)
    {
        if ((Roman[i] == 'I' && Roman[i + 1] == 'V') || (Roman[i] == 'I' && Roman[i + 1] == 'X') || (Roman[i] == 'X' && Roman[i + 1] == 'L') || (Roman[i] == 'X' && Roman[i + 1] == 'C') || (Roman[i] == 'C' && Roman[i + 1] == 'D') || (Roman[i] == 'C' && Roman[i + 1] == 'M'))
        {
            pos.push_back(i);
        }
    }

    for (int i = 0; i < pos.size(); i++)
    {
        cout << pos[i];
    }
   

    int j = 0;
  
        for (int i = 0; i < Roman.length(); i++)
        {
            if ( pos.empty())//
            {
            switch (Roman[i])
            {
            case 'M': value += 1000;
                break;
            case 'D': value += 500;
                break;
            case 'C': value += 100;
                break;
            case 'L': value += 50;
                break;
            case 'X': value += 10;
                break;
            case 'V': value += 5;
                break;
            case 'I': value += 1;
                break;
            }
            }
            else if(pos[j]!=i)//
            {
                switch (Roman[i])
                {
                case 'M': value += 1000;
                    break;
                case 'D': value += 500;
                    break;
                case 'C': value += 100;
                    break;
                case 'L': value += 50;
                    break;
                case 'X': value += 10;
                    break;
                case 'V': value += 5;
                    break;
                case 'I': value += 1;
                    break;
                }
            }//
            else if (Roman[i] == 'I' && Roman[i + 1] == 'V')
            {
                value += 4;
                i++;
                if(j<pos.size()-1)
                {
                    j++;
                }
            }
            else if (Roman[i] == 'I' && Roman[i + 1] == 'X')
            {
                value += 9;
                i++;
                if (j < pos.size() - 1)
                {
                    j++;
                }
            }
            else if (Roman[i] == 'X' && Roman[i + 1] == 'L')
            {
                value += 40;
                i++;
                if (j < pos.size() - 1)
                {
                    j++;
                }
            }
            else if (Roman[i] == 'X' && Roman[i + 1] == 'C')
            {
                value += 90;
                i++;
                if (j < pos.size() - 1)
                {
                    j++;
                }

            }
            else if (Roman[i] == 'C' && Roman[i + 1] == 'D')
            {
                value += 400;
                i++;
                if (j < pos.size() - 1)
                {
                    j++;
                }
            }
            else if (Roman[i] == 'C' && Roman[i + 1] == 'M')
            {
                value += 900;
                i++;
                if (j < pos.size() - 1)
                {
                    j++;
                }
            }
        }
        cout << value;
}

