#include <vector> // vector ����
#include <algorithm> // sort() ����
#include <stdexcept> // domain_earror ����
#include "median.h"

using std::domain_error;	using std::sort;	using std::vector;

//median(vector<double>)
double median(vector<double> vec) {
	typedef vector<double>::size_type vec_sz;
	vec_sz size = vec.size();

	if (size == 0)
		throw domain_error("Median of empty vector!");

	// ������ ����
	sort(vec.begin(), vec.end()); // hw[0]~hw[size-1]

	// ���� ������ �߾Ӱ��� ����
	vec_sz mid = size / 2;
	return size % 2 == 0
		? (vec[mid] + vec[mid - 1]) / 2 // ¦�� ���
		: vec[mid]; // Ȧ�� ���

}