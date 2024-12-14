#include <type_traits>
#include <concepts>

namespace Core::TypesDescriptions
{
    template <typename TestedType, typename BaseType>
    concept SubOrBaseType = std::is_base_of_v<BaseType, TestedType> || TestedType == BaseType;
}