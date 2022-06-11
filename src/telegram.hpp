#pragma once
#include <cmath>
#include <cstdlib>

const double smallest_deplay = 0.25;

struct telegram 
{
	int sender_;
	int receiver_;
	int message_;
	double post_ts_;
	void* ext_;
};

inline bool operator==(const telegram& t1, const telegram& t2) {
	return (std::abs(t1.post_ts_ - t2.post_ts_) < smallest_deplay)
		&& t1.sender_ == t2.sender_
		&& t1.receiver_ == t2.receiver_
		&& t1.message_ == t2.message_;
}

inline bool operator<(const telegram& t1, const telegram& t2) {
	if (t1 == t2)
	{
		return false;
	}
	else
	{
		return t1.post_ts_ < t2.post_ts_;
	}
}
