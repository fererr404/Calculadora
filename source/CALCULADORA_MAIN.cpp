#include <iostream>

int main()
{
    int wannaLeave;
    int option;

    do
    {   
        do
        {
            std::cout << "Escolha uma operacao:\n";
            std::cout << "1 para Soma\n";
            std::cout << "2 para Subtracao\n";
            std::cout << "3 para Multiplicacao\n";
            std::cout << "4 para Divisao\n";
            std::cin >> option;
        } while(option > 4 && option < 1);

        if (option == 1)
        {
            int Number1;
            int Number2;

            std::cout << "Insira o primeiro numero:\n";
            std::cin >> Number1;

            std::cout << "Insira o segundo numero:\n";
            std::cin >> Number2;

            int result = Number1 + Number2;

            std::cout << "O resultado e: " << result << "\n";
        }
        else if (option == 2)
        {
            int Number1;
            int Number2;

            std::cout << "Insira o primeiro numero:\n";
            std::cin >> Number1;

            std::cout << "Insira o segundo numero:\n";
            std::cin >> Number2;

            int result = Number1 - Number2;

            std::cout << "O resultado e: " << result << "\n";
        }
        else if (option == 3)
        {
            int Number1;
            int Number2;
            
            std::cout << "Insira o primeiro numero:\n";
            std::cin >> Number1;

            std::cout << "Insira o segundo numero:\n";
            std::cin >> Number2;

            int result = Number1 * Number2;

            std::cout << "O resultado e: " << result << "\n";
        }
        else if (option == 4)
        {
            int Number1;
            int Number2;

            std::cout << "Insira o primeiro numero:\n";
            std::cin >> Number1;

            std::cout << "Insira o segundo numero:\n";
            std::cin >> Number2;

            int result = Number1 / Number2;

            std::cout << "O resultado e: " << result << "\n";
        }
    
        std::cout << "Deseja continuar usando a calculadora?\n";
        std::cout << "Digite 1 para continuar, ou qualquer outro numero para sair.\n";
        
        std::cin >> wannaLeave;

    } while(wannaLeave == 1);

    return 0;
}