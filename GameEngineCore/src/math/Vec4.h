#pragma once
#include <iostream>

namespace spacey{ namespace math{

	struct vec4{
		float x, y, z, w;

		vec4();
		vec4(const float& x, const float& y, const float& z, const float& w);

		//Basic math functions for vectors
		vec4& add(const vec4& other);
		vec4& subtract(const vec4& other);
		vec4& multiply(const vec4& other);
		vec4& divide(const vec4& other);

		//Operator overloading so doing math with vectors
		//is possible
		friend vec4& operator+(vec4 left, const vec4& right);
		friend vec4& operator-(vec4 left, const vec4& right);
		friend vec4& operator*(vec4 left, const vec4& right);
		friend vec4& operator/(vec4 left, const vec4& right);

		bool operator==(const vec4& other);
		bool operator!=(const vec4& other);


		vec4& operator+=(const vec4& other);
		vec4& operator-=(const vec4& other);
		vec4& operator*=(const vec4& other);
		vec4& operator/=(const vec4& other);
		friend std::ostream& operator<<(std::ostream& stream, const vec4& vector);
	};
	
}}