#include <iostream>
#include <vector>

using namespace std;

void Map::Draw()
{
	
		vector<string> add_treasure(vector<string> map_) 
	{
		srand(time(NULL));
		int treasure_count = rand() % 5;

		for (int i = 0; i < treasure_count; i++) {
			int treasure_place = rand() % map_.size();
			while (map_[treasure_place] != "_") {
				treasure_place = rand() % map_.size();
			}
			map_[treasure_place] = "T";
		}

		return map_;
	}

	this->DrawMap();

	vector<string> generate_map(int height, int length) {

		srand(time(NULL));

		vector<string> tilemap{};
		tilemap.reserve(static_cast<vector<string, allocator<string>>::size_type>(height) * length);

		for (int i = 0; i < (height * length); i++) {
			int random_num = rand() % 7;

			if (random_num <= 5)
				tilemap.push_back("_");
			else
				tilemap.push_back("#");
		}

		int start = (rand() % (length - 1)) + length + 1;
		tilemap[start] = "S";
		int path = start + height;

		while (path < tilemap.size() - static_cast<unsigned long long>(length) * 2) {
			tilemap[path] = "_";
			int path_choice = rand() % 5;

			if (path_choice == 0)
				path += length;
			else if (path_choice == 1 && (path + 1) % length != 0 && (path + 2) % length != 0)
				path += 1;
			else if (path_choice == 2 && path % length != 0 && (path - 1) % length != 0)
				path -= 1;

			if (path >= (tilemap.size() - (static_cast<unsigned long long>(length) * 2)))
				tilemap[path] = "E";
		}

		for (int i = 0; i < tilemap.size(); i++) {
			if (i < length || i >(tilemap.size() - length) || (i + 1) % length == 0 || i % length == 0) {
				tilemap[i] = "#";
			}
		}

		tilemap = add_treasure(tilemap);

		for (int i = 0; i < tilemap.size(); i++) {
			cout << tilemap[i];
			if ((i + 1) % length == 0)
				cout << endl;
		}
		return tilemap;
	}


}