#pragma once
#include "state_base.hpp"

class monster;
class monster_idle_state : public state_base<monster> {
  static monster_idle_state _instance;

public:
  monster_idle_state();
  virtual ~monster_idle_state();
  virtual void enter(monster &_obj);
  virtual void update(monster &_obj);
  virtual void exit(monster &_obj);
  virtual bool handle_message(const telegram& msg)const;
  static monster_idle_state *instance() { return &_instance; }
};

class monster_seek_enemy_state : public state_base<monster> {
  static monster_seek_enemy_state _instance;

public:
  monster_seek_enemy_state();
  virtual ~monster_seek_enemy_state();
  virtual void enter(monster &_obj);
  virtual void update(monster &_obj);
  virtual void exit(monster &_obj);
  virtual bool handle_message(const telegram& msg)const;
  static monster_seek_enemy_state *instance() { return &_instance; }
};

class monster_pursuit_state : public state_base<monster> {
  static monster_pursuit_state _instance;

public:
  monster_pursuit_state();
  virtual ~monster_pursuit_state();
  virtual void enter(monster &_obj);
  virtual void update(monster &_obj);
  virtual void exit(monster &_obj);
  virtual bool handle_message(const telegram& msg)const;
  static monster_pursuit_state *instance() { return &_instance; }
};

class monster_attack_state : public state_base<monster> {
  static monster_attack_state _instance;

public:
  monster_attack_state();
  virtual ~monster_attack_state();
  virtual void enter(monster &_obj);
  virtual void update(monster &_obj);
  virtual void exit(monster &_obj);
  virtual bool handle_message(const telegram& msg)const;
  static monster_attack_state *instance() { return &_instance; }
};

class monster_go_home_state : public state_base<monster> {
  static monster_go_home_state _instance;

public:
  monster_go_home_state();
  virtual ~monster_go_home_state();
  virtual void enter(monster &_obj);
  virtual void update(monster &_obj);
  virtual void exit(monster &_obj);
  virtual bool handle_message(const telegram& msg)const;
  static monster_go_home_state *instance() { return &_instance; }
};
