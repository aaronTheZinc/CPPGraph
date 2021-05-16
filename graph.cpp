
#include <iostream>
#include <vector>

class Graph
{

    // Nested Class

public:
    class threeDimensionalPoint
    {
    public:
        int x;
        int y;
        int z;
    };

public:
    int pointX;
    int pointY;
    int pointZ;

private:
    std::vector<int> projectGraph(int x, int y, int)
    {
        
    }

public:
    void indexPoints(int x, int y, int z)
    {
        pointX = x;
        pointY = y;
        pointZ = z;
        return;
    };

    bool fallsInside(std::vector<int> &pointList)
    {
        int pointListSize = pointList.size();

        for (int i = 0; i < pointListSize; i++)
        {
            std::cout << pointList[i] << "\n";
        }

        return true;
    }
};

int main()
{
    Graph curr_Graph;
    curr_Graph.indexPoints(12, 8, 8);
    Graph::threeDimensionalPoint _3DPoint;

    std::vector<int> points;
        points.push_back(12);
        points.push_back(37);
        points.push_back(98);

    bool doesFallInside = curr_Graph.fallsInside(points);

    return 0;
}