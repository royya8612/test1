#include<iostream>

int get_sum(int number)
{
	if(number/10 == 0)
		return number;
	int sum = 0;
	while(number > 0)
	{
		sum+= number%10;
		number/= 10;
	}
	return get_sum(sum);
	
}


int main()
{
	int num, sum;
	std::cout << "enter a number: \t";
	std::cin >> num;
	sum = get_sum(num);
	std::cout << "sum of digits of your number is: \t" << sum << std::endl;
	return 0;
}

