#include <iostream>
#include <RARCArchive.hpp>
#include <RARCArchiveReader.hpp>

int main(int argc, const char* argv[])
{
    if (argc < 1)
    {
        std::cerr << "Usage: " << argv[0] << " <rarcarchive>" << std::endl;
        return 1;
    }

    RARCArchive* test = nullptr;
    try
    {
        RARCArchiveReader reader(argv[1]);
        test = reader.readArchive();
        test->printTree();
    }
    catch(...)
    {
        std::cerr << "Something went wrong!" << std::endl;
    }

    delete test;
    return 0;
}
