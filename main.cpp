#include <iostream>
#include <thread>

// Função que será executada na primeira thread
void threadFunction1()
{
    for (int i = 0; i < 500000000; ++i)
    {
        std::cout << "Thread 1 executando..." << i << std::endl;
    }

}

// Função que será executada na segunda thread
void threadFunction2()
{
    for (int i = 0; i < 1000000000; ++i)
    {
        std::cout << "Thread 2 executando..." << i << std::endl;

    }
}

int main()
{
    // Criação das threads
    std::thread t1(threadFunction1);
    std::thread t2(threadFunction2);


    for (int i = 0; i < 1000000000; ++i)
    {
        std::cout << "MAIN exec..." << i << std::endl;

    }

    // Aguarda as threads terminarem
    t1.join();
    t2.join();



    std::cout << "Threads concluídas." << std::endl;

    return 0;
}
