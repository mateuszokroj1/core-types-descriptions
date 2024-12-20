#pragma once

#include "../basic-types/ConditionalValue.hpp"

#include <string_view>
#include <type_traits>
#include <iterator>

namespace Core::TypesDescriptions
{
#define getText(T) "#T"

template <typename T>
struct ByteSizeImpl : std::enable_if_t<std::is_integral_v<T> || std::is_floating_point_v<T> || !std::is_enum_v<T>, std::input_iterator_tag>
{
    static constexpr size_t value = sizeof(T);
};

template <typename T>
constexpr size_t ByteSize = ByteSizeImpl<T>::value;

template <typename T>
struct SizeOfEnumImpl : std::enable_if_t<std::is_enum_v<T>, std::input_iterator_tag>
{
    static constexpr size_t value = sizeof(T);
};

template <typename T>
constexpr size_t SizeOfEnum = SizeOfEnumImpl<T>::value;

template <typename T>
struct TypeInfo
{
    static constexpr std::string_view name = getText(T);

    static constexpr size_t size = ConditionalValue<std::is_enum_v<T>, size_t, SizeOfEnum<T>, ByteSize<T>>;
};
}