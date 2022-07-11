#pragma once

// std
#include <vector>

namespace hpe {

using State = std::vector<float>;

class HpeParticle
{
  public:
    HpeParticle(){}
    ~HpeParticle(){}

    void update_state(){}

  private:
    // first three elements represent position, and the rest do velocity
    State state_;
};
} // namespace hpe