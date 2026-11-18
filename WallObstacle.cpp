#include "WallObstacle.h"

AWallObstacle::AWallObstacle()
{
	MeshComponent->SetRelativeScale3D(FVector(2.0f, 0.3f, 2.0f));
}

void AWallObstacle::Activate()
{
	Super::Activate();
	// Comportamiento propio: por ejemplo, impedir el paso por completo
}