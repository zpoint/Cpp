#pragma once
#include <algorithm>
#include <functional>

template <typename T>
std::vector<T>& operator+=(std::vector<T>& a, const std::vector<T>& b)
{
		    a.insert(a.end(), b.begin(), b.end());
			    return a;
}

template <typename T>
std::vector<T>& operator+=(std::vector<T>& aVector, const T& aObject)
{
		    aVector.push_back(aObject);
			    return aVector;
}

