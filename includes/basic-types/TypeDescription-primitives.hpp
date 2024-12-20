#pragma once

#include "../empty-templates/TypeDescription.hpp"
#include "../empty-templates/TypeInfo.hpp"
#include "../interfaces/IReaderWriter.hpp"

#include <utility>

namespace Core::TypesDescriptions
{
template <>
struct TypeDescription<bool>
{
    static void read(const IReader& reader, bool& value, std::string&& name)
    {
        reader.readBool(value, std::move_if_noexcept(name));
    }

    static void write(IWriter& writer, bool&& value, std::string&& name)
    {
        writer.writeBool(std::move_if_noexcept(value), std::move_if_noexcept(name));
    }

    static constexpr size_t size()
    {
        return TypeInfo<bool>::size;
    }
};

// TODO rest of types

// TODO optional

// TODO variant

// TODO containers
}