#include <iostream>
#include <vector>

std::vector<int> small_num(std::vector<int> v)
{
    std::vector<int> v1;
    for (int i = 1; i < v.size() - 1; i++)
    {
        if (v[i] < v[i - 1] && v[i] < v[i + 1])
        {
            v1.push_back(v[i]);
        }
    }
    return v1;
}

int main()
{
    int size, elem;
    std::vector<int> vec, vec1;
    std::cout << "Enter the size of vector: ";
    std::cin >> size;
    std::cout << "The elements of vector: ";
    for (int i = 0; i < size; i++)
    {
        std::cin >> elem;
        vec.push_back(elem);
    }
    vec1 = small_num(vec);
    std::cout << "The result: ";
    for (int i = 0; i < vec1.size(); i++)
    {
        std::cout << vec1[i] << ' ';
    }
    std::cout << '\n';
}