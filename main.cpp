#include <iostream>
#include <string>
#include <fstream>

int main() {
    std::ifstream notebook;
    notebook.open("Notebook.txt");
    if(notebook) {
        std::string wordNeed;
        std::cout << "Input please word for finding!" << std::endl;
        std::getline(std::cin, wordNeed);

        int count = 0;
        while (!notebook.eof()) {
            std::string wordFind;
            notebook >> wordFind;
            if (wordNeed == wordFind) {
                count++;
            }
        }


        std::cout << "The word " << wordNeed << " appears in the text " << count << " times." << std::endl;
        notebook.close();
    } else {
        std::cerr << "File is not found!"<< std::endl;
    }
    return 0;
}
