#include "WallObstacleFactory.h"
#include "WallObstacle.h"

AObstacle* UWallObstacleFactory::CreateObstacle(UWorld* World, const FVector& Location, const FRotator& Rotation) const
{
	if (!World)
	{
		return nullptr;
	}

	FActorSpawnParameters SpawnParams;
	return World->SpawnActor<AWallObstacle>(AWallObstacle::StaticClass(), Location, Rotation, SpawnParams);
}