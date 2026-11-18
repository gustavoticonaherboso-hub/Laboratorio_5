#pragma once
#include "CoreMinimal.h"
#include "ObstacleFactory.h"
#include "WallObstacleFactory.generated.h"

/**
 * FABRICA CONCRETA: produce obstaculos de tipo Muro.
 */
UCLASS()
class MYPROJECT_API UWallObstacleFactory : public UObstacleFactory
{
	GENERATED_BODY()

public:
	virtual AObstacle* CreateObstacle(UWorld* World, const FVector& Location, const FRotator& Rotation) const override;
};