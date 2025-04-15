#include "squeeze.h"

int main(int argc, char **argv) {
  Squeeze squeeze;
  int ret;
  FILE *filename, *zipped;
  std::string s, extension;

  if (argc == 3 && strcmp(argv[1], "a") == 0) {
    filename = fopen(argv[2], "rb");
    if (!filename) {
      std::cerr << "Error: file " << argv[2] << " not found.";
      return 0;
    }
    s = argv[2];
    s = s + ".Z";
    zipped = fopen(&s[0], "w");
    ret = squeeze.compress(filename, zipped, Z_DEFAULT_COMPRESSION);
    if (ret != Z_OK) {
      squeeze.error(ret);
      return 0;
    }
    return ret;
  }
  else if (argc == 3 && strcmp(argv[1], "e") == 0) {
    zipped = fopen(argv[2], "rb"); 
    if (!zipped) {
      std::cerr << "Error: file " << argv[2] << " not found.";
      return 0;
    }
    s = argv[2];
    extension = s.substr(s.length() - 2, s.length());
    if (extension != ".Z") {
      std::cerr << "Error: file extension is not \".Z\".";
      return 0;
    }
    std::cout << extension << std::endl;
    s = s.substr(0, s.length() - 2);
    filename = fopen(&s[0], "w");
    ret = squeeze.decompress(zipped, filename);
    if (ret != Z_OK) squeeze.error(ret);
    return ret;
  }
  else {
    squeeze.usage(argv);
    return 1;
  }
}