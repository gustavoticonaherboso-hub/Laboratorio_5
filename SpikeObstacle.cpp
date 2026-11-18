#include "SpikeObstacle.h"

ASpikeObstacle::ASpikeObstacle()
{
	MeshComponent->SetRelativeScale3D(FVector(1.0f, 1.0f, 0.5f));
}

void ASpikeObstacle::Activate()
{
	Super::Activate();
	// Comportamiento propio: por ejemplo, aplicar daño si el jugador lo toca
}