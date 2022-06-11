#pragma once

struct telegram;
template <typename T>
class state_base {
public:
  state_base() = default;
  virtual ~state_base() = default;
  virtual void enter(T &_obj) = 0;
  virtual void update(T &_obj) = 0;
  virtual void exit(T &_obj) = 0;
  virtual bool handle_message(const telegram& msg)const = 0;
};
