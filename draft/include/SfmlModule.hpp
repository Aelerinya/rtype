#ifndef SFML_MODULE_HPP
#define SFML_MODULE_HPP

#include "Modules.hpp"
#include "components/Transform.hpp"
#include <SFML/Graphics.hpp>
#include <string>

class SfmlModule : public IDisplayModule {
    sf::RenderWindow m_window;
public:
    SfmlModule(const std::string &name, Dimensional dimensions={1000, 600});
    void drawSprite(const std::string &name, Transform const &transform, unsigned id) override;
    void update() override;
    ~SfmlModule();
};

#endif
