//#include<iostream>
//#include<iomanip>
//using namespace std;
//
//int main()
//{
//	float num1, num2, result;
//	char op;
//
//	cout << setw(24) << "    -------------------  " << endl;
//	cout << setw(24) << "   |    CALCULATOR      |      " << endl;
//	cout << setw(24) << "   |                    |      " << endl;
//	cout << setw(24) << "    --------------------  " << endl;
//
//	cout << "Enter 2 integers" << endl;
//	cin >> num1 >> num2;
//
//	cout << "Enter the arithematic operator" << endl;
//	cin >> op;
//
//	switch (op)
//	{
//	case '+':
//		result = num1 + num2;
//		cout << "The result is: " << result << endl;
//		break;
//	case '-':
//		result = num1 - num2;
//		cout << "The result is: " << result << endl;
//		break;
//	case'*':
//		result = num1 * num2;
//		cout << "The result is: " << result << endl;
//		break;
//	case'/':
//		if (num2 == 0)
//		{
//			cout << "Denominator cannot be Zero. Please try again" << endl;
//			break;
//		}
//		else
//		{
//			result = num1 + num2;
//			cout << "The result is: " << result << endl;
//		}
//		break;
//	default:
//		cout << "Wrong input. Please try again." << endl;
//	}
//
//	system("pause");
//	return 0;
//}