#pragma once

struct telegram;
class entity_base {
public:
  entity_base() = default;
  virtual ~entity_base() = default;
  virtual void update() = 0;
  virtual void handle_message(const telegram&_event) = 0;
};
