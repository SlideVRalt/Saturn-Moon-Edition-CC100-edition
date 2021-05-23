#ifndef StrawZipLoader
#define StrawZipLoader

#include "moon/mod-engine/interfaces/file-entry.h"
#include <vector>
#include <string>

namespace MoonFS {
    std::string normalize(std::string path);
    std::string joinPath(std::string base, std::string file);
}

class StrawFile {
public:
    StrawFile(std::string path);
    void open();
    bool exists(std::string path);
    std::vector<std::string> entries();
    std::string read(std::string file);
    void read(std::string file, TextureFileEntry *entry);
    std::string getPath();
    void close();
protected:
    std::string path;
};

#endif