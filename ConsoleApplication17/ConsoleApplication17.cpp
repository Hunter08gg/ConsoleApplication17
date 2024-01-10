#include <iostream>
#include <string>
#include <vector>
#include <random>

using namespace std;

std::string getRandomResponse()
{
	std::vector<std::string> responses = { "Интересно...", "Расскажи подробнее.", "Я не уверен, что понимаю.", "Как интересно!", "Может быть...", "Давай обсудим это дальше.", "Что еще ты думаешь об этом?" };

	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<int> dis(0, responses.size() - 1);

	return responses[dis(gen)];
}

int main()
{
	std::string userInput;

	std::cout << "Привет! Я чат-бот. Как дела?\n";

	while (true)
	{
		std::getline(std::cin, userInput);

		if (userInput == "привет")
		{
			std::cout << "Привет!\n";
		}
		else if (userInput == "пока")
		{
			std::cout << "Пока!\n";
			break;
		}
		else
		{
			std::string response = getRandomResponse();
			std::cout << response << std::endl;
		}
	}

	return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.

/*
#include <iostream>
#include <string>
#include <vector>
#include <random>

std::string getRandomResponse()
{
std::vector<std::string> responses = { "Интересно...", "Расскажи подробнее.", "Я не уверен, что понимаю.", "Как интересно!", "Может быть...", "Давай обсудим это дальше.", "Что еще ты думаешь об этом?" };

std::random_device rd;
std::mt19937 gen(rd());
std::uniform_int_distribution<int> dis(0, responses.size() - 1);

return responses[dis(gen)];
}

int main()
{
std::string userInput;

std::cout << "Привет! Я чат-бот. Как дела?\n";

while (true)
{
std::getline(std::cin, userInput);

if (userInput == "привет")
{
std::cout << "Привет!\n";
}
else if (userInput == "пока")
{
std::cout << "Пока!\n";
break;
}
else
{
std::string response = getRandomResponse();
std::cout << response << std::endl;
}
}

return 0;
}
*/