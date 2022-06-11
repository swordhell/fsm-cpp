#include "monster.hpp"

monster::monster()
{
	fsm_ = new fsm<monster>(this);
}
monster::~monster()
{
	delete fsm_;
}
void monster::update()
{
	fsm_->update();
}

void monster::handle_message(const telegram& _event)
{
	fsm_->handle_message(_event);
}
