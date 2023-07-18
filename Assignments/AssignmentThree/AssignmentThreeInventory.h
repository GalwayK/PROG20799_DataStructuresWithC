#include "AssignmentThreePart.h"
#include <stdbool.h>

typedef struct InventoryList 
{
	struct InventoryList* pntNextNode;
	void* pntPart;
} InventoryList;

InventoryList* initializeInventoryList(void);

InventoryList* initializeBlankInventoryNode(void);

Part* getPartFromInventoryNode(InventoryList* pntInventoryNode);

bool isPartGreater(InventoryList* pntNodeOne, InventoryList* pntNodeTwo);

InventoryList* initializeDetailedInventoryNode(Part* part);

void insertPartIntoInventory(InventoryList** pntInventoryList, 
	int partNumber, char* partName, int partQuantity);


