#pragma once
// my_algs.h
#ifndef GUARD_my_algs_h
#define GUARD_my_algs_h

// �ִ밪 �Լ�

template<class T>
T max(const T& left, const T& right) {
	return left > right ? // ����?
		left : right;		//�� ��ȯ : ���� ��ȯ
}

// �ּҰ� �Լ� (min)
template<class T>
T min(const T& left, const T& right) {
	return left < right ? // ����?
		left : right;		//�� ��ȯ : ���� ��ȯ
}

// ������ �Լ� (equals)
template<class T>
T equals(const T& left, const T& right) {
	return left == right ? // ����?
		true : false;		//�� ��ȯ : ���� ��ȯ
}

#endif