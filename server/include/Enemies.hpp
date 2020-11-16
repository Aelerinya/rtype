#ifndef RTYPE_ENEMIES_H_
#define RTYPE_ENEMIES_H_

#include "ComponentStorage.hpp"
#include "components/AnimMontage.hpp"
#include "components/AnimationLoop.hpp"
#include "components/CollisionBox.hpp"
#include "components/OrientedSprite.hpp"
#include "components/PatternLoop.hpp"
#include "components/Sprite.hpp"
#include "components/Trajectory.hpp"
#include "components/OrientedSprite.hpp"
#include "components/Speaker.hpp"
#include "components/BydoShooter.hpp"
#include "components/PlayerScanner.hpp"
#include <variant>
#include <optional>

struct Enemy {
    CollisionBox collision;
    std::variant<Trajectory, PatternLoop> movement;
    std::variant<Sprite, AnimationLoop, OrientedSprite> animation;
    std::optional<BydoShooter> shooter;
    std::optional<PlayerScanner> scanner;
    int health;
    DeathMontage death_montage;
    DeathSpeaker death_sound;

    static const Enemy BUG;
    static const Enemy PATA_PATA;

    void build(ComponentStorage::EntityBuilder &builder) const;
};

#endif // RTYPE_ENEMIES_H_
