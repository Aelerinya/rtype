#include "ComponentStorage.hpp"
#include <iostream>

class FiveHandler {
    public:
    int giveMeFive(void)
    {
        return 5;
    }
};

int main(void)
{
    std::cout << "ComponentStorage tests...";

    ComponentStorage storage;
    int five = 5;
    FiveHandler handler;

    storage.registerComponent<FiveHandler>();
    storage.registerComponent<int>();

    storage.buildEntity()
    .withComponent(handler)
    .withComponent(5)
    .build();

    std::cout << "Done !" << std::endl;
}
