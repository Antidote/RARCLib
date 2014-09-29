#ifndef RARCFILEREADER_HPP
#define RARCFILEREADER_HPP

#include "RARCLib.hpp"

#include <Athena/BinaryReader.hpp>

class RARCArchive;
class RARCLIB_API_EXPORT RARCArchiveReader : protected Athena::io::BinaryReader
{
    BINARYREADER_BASE();
public:
    RARCArchiveReader(const atUint8* data, atUint64 length);
    RARCArchiveReader(const std::string& filepath);

    RARCArchive* readFile();
};

#endif // RARCFILEREADER_HPP
