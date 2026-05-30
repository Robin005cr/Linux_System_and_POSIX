#include <iostream>
int main()
{
    for (int i = 0; i < 5; i++)
    {
        std::cout << "Helloworld" << std::endl;
    }

    return 0;
}

// g++ -save-temps  hello.cpp -o hello | executing this command generates the intermediate files with extension including the binary
// g++ -E  hello.cpp -o hello | executing this comment will generate the file hello without extension but will contain the things that are in hello.ii file.