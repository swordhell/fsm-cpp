#pragma once
#include "fsm.hpp"
#include "entity_base.hpp"

class monster : public entity_base {
public:
  monster();
  virtual ~monster();
  virtual void update();
  virtual void handle_message(const telegram&_event);

private:
	fsm<monster> *fsm_;
};
