#include <stdio.h>
#include "dynamic_map_spellbook.h"

typedef struct Map
{
	char **keys;
	size_t *values;
	size_t size;
	size_t capacity;
} Map;

int main(void)
{
	Map map;

	dynmaps_init(&map);

	dynmaps_set_strkey(&map, "world1", 0);
	dynmaps_set_strkey(&map, "world2", 1);

	for(size_t i = 0; i < map.size; ++i)
	{
		printf("'%s' = %zu\n", map.keys[i], map.values[i]);
	}

	dynmaps_free_strkey(&map);

	return 0;
}
