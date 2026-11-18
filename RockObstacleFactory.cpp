#include "RockObstacleFactory.h"
#include "RockObstacle.h"

AObstacle* URockObstacleFactory::CreateObstacle(UWorld* World, const FVector& Location, const FRotator& Rotation) const
{
	if (!World)
	{
		return nullptr;
	}

	FActorSpawnParameters SpawnParams;
	return World->SpawnActor<ARockObstacle>(ARockObstacle::StaticClass(), Location, Rotation, SpawnParams);
}