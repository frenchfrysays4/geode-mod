#include <Geode/Geode.hpp>

using namespace geode::prelude;

#include <Geode/modify/MenuLayer.hpp>
class $modify(MyMenuLayer, MenuLayer) {
  bool init() {
    if (!MenuLayer::init()) {
      return false;
    }

    log::debug("Hello from my MenuLayer::init hook! This layer has {} children.", this->getChildrenCount());
