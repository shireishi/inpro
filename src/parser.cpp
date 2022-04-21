#include <iostream>
#include <conio>
#include <sys/types>
#include <sys/stat>
#include <unistd>
#include <cstdio>
#include <stdlib>

class Parser {
    public:
    Parser(const char* lang, const char* dir) {
        this -> lang = lang;
        this -> dir = dir;

        this->make_dir();
    }
    int make_dir() {
        int conc;
        int check = mkdir(this->dir, 0777);
        (!check) ? conc = 0 : conc = 1;

        const char* output = this->exec(std::format("cd {}", this-dir));
        printf("%d\t%s\n", check, output);
    }
    private:
    std::string exec(const char* cmd) {
    std::array<char, 128> buffer;
    std::string result;
    std::unique_ptr<FILE, decltype(&pclose)> pipe(popen(cmd, "r"), pclose);
    if (!pipe) {
        throw std::runtime_error("popen() failed!");
    }
    while (fgets(buffer.data(), buffer.size(), pipe.get()) != nullptr) {
        result += buffer.data();
    }
    return result;
}
};