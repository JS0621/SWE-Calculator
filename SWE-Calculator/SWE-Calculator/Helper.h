#pragma once
#include <iostream>
#include <vector>
#include <bitset>

namespace Helper
{
	void ClearBuffer()
	{
		std::cin.clear();
		std::cin.ignore(INT_MAX, '\n');
	}
	int GetValidatedInt(const char* strMessage, int nMinnimumRange = 0, int nMaximumRange = 0)
	{
		int number;
		std::cout << strMessage;
		while (true)
		{
			if (nMinnimumRange == 0 && nMaximumRange == 0)//ignoring range part
			{
				std::cin >> number;
				if (std::cin.fail())
				{
					ClearBuffer();
					std::cout << "Please input an integer\n";
				}
				else
				{
					ClearBuffer();
					return(number);
					break;
				}
			}
			else
			{
				std::cin >> number;
				if (std::cin.fail())
				{
					ClearBuffer();
					std::cout << "Please input an integer\n";
				}
				else
				{
					if (number < nMinnimumRange || number > nMaximumRange)
					{
						std::cout << "Please input an integer in range.\n";
					}
					else
					{
						ClearBuffer();
						return(number);
						break;
					}
				}

			}
		}
	}

	int GetRandomNumber(int maxRange = 100, int minRange = 0)
	{
		if (minRange > maxRange)
			return (0);
		else
		{
			int rng;
			srand((int)time(NULL));
			rng = rand() % maxRange;
			while (rng < minRange)
				rng = rand() % maxRange;
			return(rng);
		}
	}

	void PrintBinary(int number) //Will automatically new line after running
	{
		std::cout << "Int: " << number << std::endl << "Bin: ";
		//use & to check bit is 1
		for (int i = 31; i >= 0; i--)
		{
			if ((number & (1 << i)) == 1 << i)
				std::cout << "1";
			else
				std::cout << "0";
		}
		std::cout << std::endl;
	}
	void PrintHex(int number) //Will automatically new line after running, returns to decimal
	{
		std::cout << std::hex << number << std::endl << std::dec;
	}
	void PrintOct(int number) //Will automatically new line after running, returns to decimal
	{
		std::cout << std::oct << number << std::endl << std::dec;
	}

	std::string DecimalToBinary(int input)
	{
		std::string binary = std::bitset<32>(input).to_string();
		for (int i = 0; i < 32; ++i) {
			if (stoi(binary.substr(i)) != stoi(binary)) {
				binary = binary.substr(i - 1);
				break;
			}

		}
		return binary;
	}

	int BinaryToDecimal(int input)
	{
		int decimal = 0;
		int base = 1;

		int temp = input;
		while (temp) {
			int last_digit = temp % 10;
			temp = temp / 10;

			decimal += last_digit * base;

			base = base * 2;
		}

		return decimal;
	}
}