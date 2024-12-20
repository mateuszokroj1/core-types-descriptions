#pragma once

#include <string>

namespace Core::TypesDescriptions
{
struct IReader
{
    virtual ~IReader() = default;

    virtual void readByte(unsigned char& value, std::string&& name) const = 0;
    virtual void readChar(char& value, std::string&& name) const = 0;
    virtual void readChar(wchar_t& value, std::string&& name) const = 0;
    virtual void readBool(bool& value, std::string&& name) const = 0;
    virtual void readShort(int16_t& value, std::string&& name) const = 0;
    virtual void readUShort(uint16_t& value, std::string&& name) const = 0;
    virtual void readInt(int32_t& value, std::string&& name) const = 0;
    virtual void readUInt(uint32_t& value, std::string&& name) const = 0;
    virtual void readLong(int64_t& value, std::string&& name) const = 0;
    virtual void readULong(uint64_t& value, std::string&& name) const = 0;
    virtual void readFloat(float& value, std::string&& name) const = 0;
    virtual void readDouble(double& value, std::string&& name) const = 0;

    virtual bool supportOptional() const = 0;

    virtual const IReader& getArrayReader(std::string&& name) const = 0;
    virtual const IReader& getObjectReader(std::string&& name) const = 0;
    virtual const IWriter& getVariantReader(std::string&& name) const = 0;
};

struct IWriter
{
    virtual ~IWriter() = default;

    virtual void writeByte(unsigned char&& value, std::string&& name) = 0;
    virtual void writeChar(char&& value, std::string&& name) = 0;
    virtual void writeChar(wchar_t&& value, std::string&& name) = 0;
    virtual void writeBool(bool&& value, std::string&& name) = 0;
    virtual void writeShort(int16_t&& value, std::string&& name) = 0;
    virtual void writeUShort(uint16_t&& value, std::string&& name) = 0;
    virtual void writeInt(int32_t&& value, std::string&& name) = 0;
    virtual void writeUInt(uint32_t&& value, std::string&& name) = 0;
    virtual void writeLong(int64_t&& value, std::string&& name) = 0;
    virtual void writeULong(uint64_t&& value, std::string&& name) = 0;
    virtual void writeFloat(float&& value, std::string&& name) = 0;
    virtual void writeDouble(double&& value, std::string&& name) = 0;

    virtual IWriter& getArrayWriter(std::string&& name) = 0;
    virtual IWriter& getObjectWriter(std::string&& name) = 0;
    virtual IWriter& getVariantWriter(std::string&& name) = 0;
};
} // namespace Core::TypesDescriptions