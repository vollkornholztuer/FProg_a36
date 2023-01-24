#include <string>
#include "MapElement.cpp"

class Map {
private:
    MapElement* head;
    void free_list();
public:
    Map() : head(nullptr) {}
    ~Map() { 
        free_list(); 
    }
    int insert(int k, const std::string& s);
    // .. weitere Elemente
};

void Map::free_list() 
{
    head->key = 0;
    head->next = nullptr;
}

int Map::insert(int k, const std::string& s)
{
    head->next->key = k;
    head->next->value = s
}
