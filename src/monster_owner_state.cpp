#include "monster_owner_state.hpp"
#include "monster.hpp"

monster_idle_state monster_idle_state::_instance;
monster_seek_enemy_state monster_seek_enemy_state::_instance;
monster_pursuit_state monster_pursuit_state::_instance;
monster_attack_state monster_attack_state::_instance;
monster_go_home_state monster_go_home_state::_instance;

monster_idle_state::monster_idle_state() {}

monster_idle_state::~monster_idle_state() {}

void monster_idle_state::enter(monster &_obj) {}

void monster_idle_state::update(monster &_obj) {}

void monster_idle_state::exit(monster &_obj) {}

bool monster_idle_state::handle_message(const telegram& msg) const
{
	return true;
}

monster_seek_enemy_state::monster_seek_enemy_state() {}

monster_seek_enemy_state::~monster_seek_enemy_state() {}

void monster_seek_enemy_state::enter(monster &_obj) {}

void monster_seek_enemy_state::update(monster &_obj) {}

void monster_seek_enemy_state::exit(monster &_obj) {}

bool monster_seek_enemy_state::handle_message(const telegram& msg) const
{
	return true;
}

monster_pursuit_state::monster_pursuit_state() {}

monster_pursuit_state::~monster_pursuit_state() {}

void monster_pursuit_state::enter(monster &_obj) {}

void monster_pursuit_state::update(monster &_obj) {}

void monster_pursuit_state::exit(monster &_obj) {}

bool monster_pursuit_state::handle_message(const telegram& msg) const
{
	return true;
}

monster_attack_state::monster_attack_state() {}

monster_attack_state::~monster_attack_state() {}

void monster_attack_state::enter(monster &_obj) {}

void monster_attack_state::update(monster &_obj) {}

void monster_attack_state::exit(monster &_obj) {}

bool monster_attack_state::handle_message(const telegram& msg) const
{
	return true;
}

monster_go_home_state::monster_go_home_state() {}

monster_go_home_state::~monster_go_home_state() {}

void monster_go_home_state::enter(monster &_obj) {}

void monster_go_home_state::update(monster &_obj) {}

void monster_go_home_state::exit(monster &_obj) {}

bool monster_go_home_state::handle_message(const telegram& msg) const
{
	return true;
}
