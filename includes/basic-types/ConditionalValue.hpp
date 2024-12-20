#pragma once

namespace Core::TypeDescriptions
{
    template <bool, typename ValueType, ValueType IfTrue, ValueType IfFalse>
    struct ConditionalValueImpl
    {
    };

    template <typename ValueType, ValueType IfTrue, ValueType IfFalse>
    struct ConditionalValueImpl<true, ValueType, IfTrue, IfFalse>
    {
        static constexpr ValueType value = IfTrue;
    };

    template <typename ValueType, ValueType IfTrue, ValueType IfFalse>
    struct ConditionalValueImpl<false, ValueType, IfTrue, IfFalse>
    {
        static constexpr ValueType value = IfFalse;
    };

    template <bool Test, typename ValueType, ValueType IfTrue, ValueType IfFalse>
    constexpr ValueType ConditionalValue = ConditionalValueImpl<Test, ValueType, IfTrue, IfFalse>::value;
}