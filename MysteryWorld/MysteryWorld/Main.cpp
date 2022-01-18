#include <iostream>
#include <string>

void doMath();

int main()
{
	try
	{
		doMath();
	}
	catch(char* message)
	{
		std::cout << message << std::endl;
	}

	return EXIT_SUCCESS;
}

void doMath()
{
	double leftOperand(0), rightOperand(0), result(0);
	char mathOperator(NULL);

	std::cin >> leftOperand >> mathOperator >> rightOperand;

	switch (mathOperator)
	{
	case '+':
		result = leftOperand + rightOperand;
		break;
	case '-':
		result = leftOperand - rightOperand;
		break;
	case '/':
		result = leftOperand / rightOperand;
		break;
	case '*':
		result = leftOperand * rightOperand;
		break;
	default:
		throw "Operator not implemented";
	}
	std::cout << leftOperand << mathOperator << rightOperand << " = " << result << std::endl;
}