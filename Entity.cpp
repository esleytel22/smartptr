#include <iostream>
#include <string>
#include <memory>
class Entity {
public:
	Entity() {
		std::cout << "Created Entity!" << std::endl;
	}
	~Entity() {
		std::cout << "Destroyed Entity!" << std::endl;

	}

	void print() {}
};

int main() {
	{
		//std::unique_ptr<Entity> entity(new Entity()); // call the new pointer

		std::unique_ptr<Entity> entity = std::make_unique<Entity>(); // call the new pointer for exception purpose bc it is safer 


		entity->print();
	}

	{
		std::shared_ptr<Entity> sE;

		{
			std::shared_ptr<Entity> sharedEntity = std::make_shared<Entity>();
			sE = sharedEntity;
			
		}
	}

	std::cin.get();
}