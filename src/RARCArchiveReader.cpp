#include "RARCArchiveReader.hpp"

RARCArchiveReader::RARCArchiveReader(const atUint8 *data, atUint64 length)
    : base(data, length)
{
    base::setEndian(Athena::Endian::BigEndian);
}

RARCArchiveReader::RARCArchiveReader(const std::string& filepath)
    : base(filepath)
{
    base::setEndian(Athena::Endian::BigEndian);
}

RARCArchive* RARCArchiveReader::readArchive()
{
    return nullptr;
}
