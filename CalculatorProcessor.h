#pragma once
#include <string>
using namespace std;
class CalculatorProcessor
{
private:
	static CalculatorProcessor* processor;
	int numbers;
	CalculatorProcessor(){}
public:
	static CalculatorProcessor* GetInstance() {
		if (processor == nullptr)
		{
			processor = new CalculatorProcessor();
		}return processor;
	}
	void SetNumbers(int _numb);
	CalculatorProcessor(CalculatorProcessor& other) = delete;
	void operator=(const CalculatorProcessor& other) = delete;
	/*string GetHexadecimal() {
		string result = "";
		int number = numbers;
		while (number>0)
		{
			if (number > 0)
			{
				int mod = number % 16;
				if (mod < 10)
				{
					result = to_string(mod) + result;
				}
				else if (mod == 10)
				{
					result = "A" + result;
				}
				else if (mod == 11)
				{
					result = "B" + result;
				}
				else if (mod == 12)
				{
					result = "C" + result;
				}
				else if (mod == 13)
				{
					result = "D" + result;
				}
				else if (mod == 14)
				{
					result = "E" + result;
				}
				else if (mod == 15)
				{
					result = "F" + result;
				}
				number = number / 16;
			}result = "0x" + result;
		}
		return result;
	}
	string GetDecimal() {
		return to_string(numbers);
	}
	string GetBinary() {

		string result = "";
		int isNumber = numbers;
		for (int i = 0; i < 32; i++)
		{
			if (isNumber % 2 == 0)
			{
				result = "0" + result;
			}
			else
			{
				result = "1" + result;
			}isNumber = isNumber / 2;
		}return result;
	}*/
	string GetDivision() {

		string result = "";
		int isNumber = numbers;
		for (int i = 0; i < 32; i++)
		{
			if (isNumber / 2 == 0)
			{
				result = "0" + result;
			}
			else
			{
				result = "1" + result;
			}isNumber = isNumber / 2;
		}return result;
	}string GetAddition() {

		string result = "";
		int isNumber = numbers;
		for (int i = 0; i < 32; i++)
		{
			if (isNumber + 2 == 0)
			{
				result = "0" + result;
			}
			else
			{
				result = "1" + result;
			}isNumber = isNumber + 2;
		}return result;
	}string GetBinary() {

		string result = "";
		int isNumber = numbers;
		for (int i = 0; i < 32; i++)
		{
			if (isNumber - 2 == 0)
			{
				result = "0" + result;
			}
			else
			{
				result = "1" + result;
			}isNumber = isNumber - 2;
		}return result;
	}
	string GetBinary() {

		string result = "";
		int isNumber = numbers;
		for (int i = 0; i < 32; i++)
		{
			if (isNumber * 2 == 0)
			{
				result = "0" + result;
			}
			else
			{
				result = "1" + result;
			}isNumber = isNumber * 2;
		}return result;
	}

};
CalculatorProcessor* CalculatorProcessor::processor = nullptr;

