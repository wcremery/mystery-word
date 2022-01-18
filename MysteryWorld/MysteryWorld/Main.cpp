#include <iostream>
#include <string>


int main()
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
		return EXIT_FAILURE;
	}
	std::cout << leftOperand << mathOperator << rightOperand <<  " = " << result << std::endl;

	return EXIT_SUCCESS;
}