#include <cstdio>

#include "parser.h"

const char* langs = {"python", "cpp", "c", "rust", "html", "js"};

int main(int argc, const char** argv) {
  (argc == 1) ? return 1 : continue;

  const char* lang = argv[1];
  const char* dir_name = argv[2];

  Parser parser(lang, dir_name);

  return 0;
}
