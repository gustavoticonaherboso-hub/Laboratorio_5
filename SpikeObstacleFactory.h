#pragma once

#include "CoreMinimal.h"
#include "ObstacleFactory.h"
#include "SpikeObstacleFactory.generated.h"

/**
 * FABRICA CONCRETA: produce obstaculos de tipo Pinchos.
 */
UCLASS()
class MYPROJECT_API USpikeObstacleFactory : public UObstacleFactory
{
	GENERATED_BODY()

public:
	virtual AObstacle* CreateObstacle(UWorld* World, const FVector& Location, const FRotator& Rotation) const override;
};