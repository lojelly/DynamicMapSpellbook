#include <stdio.h>
#include "dynamic_map_spellbook.h"

typedef struct Map
{
	size_t *keys;
	char **values;
	size_t size;
	size_t capacity;
} Map;

int main(void)
{
	Map map;

	dynmaps_init(&map);

	dynmaps_set(&map, 0, "world1");
	dynmaps_set(&map, 1, "world2");
	dynmaps_set(&map, 44, "main world");
	dynmaps_set(&map, 271, "player271");
	dynmaps_set(&map, 512, "random value");

	for(size_t i = 0; i < map.size; ++i)
	{
		printf("%zu = '%s'\n", map.keys[i], map.values[i]);
	}

	dynmaps_free(&map);

	return 0;
}
