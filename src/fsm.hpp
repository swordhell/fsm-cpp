#pragma once
#include "state_base.hpp"

template <typename T>
class fsm
{
	T* owner_ = nullptr;
	state_base<T>* current_state_ = nullptr;
	state_base<T>* previous_state_ = nullptr;
public:
	fsm(T* owner) : owner_(owner_) {}
	~fsm()=default;

	void set_current_state(state_base<T>* _state) { current_state_ = _state; }
	void set_previous_state(state_base<T>* _state) { previous_state_ = _state; }

	state_base<T>* get_current_state()const { return current_state_; }
	state_base<T>* get_previous_state()const { return previous_state_; }

	bool is_in_state(const state_base<T>& st)const
	{
		if (typeid(*current_state_) == typeid(st)) return true;
		return false;
	}

	void change_state(state_base<T>* _new_state)
	{
		if (_new_state == nullptr)
		{
			return;
		}
		previous_state_ = current_state_;
		current_state_->exit(owner_);
		current_state_ = _new_state;
		current_state_->enter(_new_state);
	}
	
	void revert_to_previous()
	{
		change_state(previous_state_);
	}

	bool handle_message(const telegram& msg)const
	{
		if (current_state_ && current_state_->handle_message(msg)) return true;
		return false;
	}

	void update()
	{
		if (current_state_ == nullptr) return current_state_;
		current_state_->update(owner_);
	}
};
