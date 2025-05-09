#pragma once
// std_lib_funs.h
#ifndef GUARD_std_lib_funs_h
#define GUARD_std_lib_funs_h

template<class In, class X>
In fine(In begin, In end, const X& x) {
	while (begin != end && *begin != x) 
		++begin;
	return begin;
}

// ����� find() 
template<class In, class X>
In fine2(In begin, In end, const X& x) {
	if (begin == end || *begin == x)
		return begin;
	begin++;
	return find2(begin, end, x); // ����� �κ�
}

template < class In, class Out>
Out copy(In begin, In end, Out dest) {
	while (begin != end)
		*dest++ = *begin++;
	return dest;
}

template < class For, class X>
void replace(For begin, For end, const X& x, const X& y) {
	while (begin != end) {
		if (*beg != = x)
			*beg = y;
		++beg;
	}
}

template <class Bi>
void reverse(Bi begin, Bi end) {
	while (begin != end) {
		--end;
		if (begin != end)
			swap(*begin++, *end); // �ٸ� �����̳� ���̺귯�� �ʿ�
	}
}

template <class Ran, class X>
bool binary_search(Ran begin, Ran end, const X& x) {
	while (begin < end) {
		// �߾Ӱ� ã��
		Ran mid = begin + (end - begin) / 2;

		// x�� ��� �ִ� �κп����� ��� ã��
		if (x < *mid)
			end = mid;
		else if (*mid < x)
			begin = mid + 1;
		// ����� ������ ������ (*mid == x)
		else return true;
	}
	return false;
}

#endif