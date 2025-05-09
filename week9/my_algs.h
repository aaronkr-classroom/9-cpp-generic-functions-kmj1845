#pragma once
// my_algs.h
#ifndef GUARD_my_algs_h
#define GUARD_my_algs_h

// 최대값 함수

template<class T>
T max(const T& left, const T& right) {
	return left > right ? // 조건?
		left : right;		//참 반환 : 거짓 반환
}

// 최소값 함수 (min)
template<class T>
T min(const T& left, const T& right) {
	return left < right ? // 조건?
		left : right;		//참 반환 : 거짓 반환
}

// 같으면 함수 (equals)
template<class T>
T equals(const T& left, const T& right) {
	return left == right ? // 조건?
		true : false;		//참 반환 : 거짓 반환
}

#endif