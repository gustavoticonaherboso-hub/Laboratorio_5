#include "SpikeObstacleFactory.h"
#include "SpikeObstacle.h"

AObstacle* USpikeObstacleFactory::CreateObstacle(UWorld* World, const FVector& Location, const FRotator& Rotation) const
{
	if (!World)
	{
		return nullptr;
	}

	FActorSpawnParameters SpawnParams;
	return World->SpawnActor<ASpikeObstacle>(ASpikeObstacle::StaticClass(), Location, Rotation, SpawnParams);
}