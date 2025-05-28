#pragma once
#include <concepts>

template<class A, class B>
concept Derived = std::is_base_of<B, A>::value;