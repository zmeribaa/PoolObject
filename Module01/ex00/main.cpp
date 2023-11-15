#include <iostream>
#include "Worker.hpp"
#include "Workshop.hpp"
#include "Shovel.hpp"
#include "Hammer.hpp"

int main() {
    // Create tools
    Shovel shovel;
    Hammer hammer;

    // Create a couple of workshops
    Workshop workshop1;
    Workshop workshop2;

    // Create a worker
    Worker worker1;

    // Assign tools to the worker
    worker1.addTool(&shovel);
    worker1.addTool(&hammer);

    // Register the worker to the workshops
    worker1.registerToWorkshop(&workshop1);
    worker1.registerToWorkshop(&workshop2);

    // Execute a work day in workshop1
    std::cout << "Workshop 1 work day:" << std::endl;
    workshop1.executeWorkDay();

    // Execute a work day in workshop2
    std::cout << "Workshop 2 work day:" << std::endl;
    workshop2.executeWorkDay();

    // Worker leaves workshop1
    worker1.releaseFromWorkshop(&workshop1);

    // Execute another work day in workshop1
    std::cout << "Workshop 1 work day after worker1 leaves:" << std::endl;
    workshop1.executeWorkDay();

    return 0;
}
