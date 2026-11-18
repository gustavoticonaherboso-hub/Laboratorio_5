#pragma once

#include "CoreMinimal.h"
#include "ObstacleFactory.h"
#include "RockObstacleFactory.generated.h"

/**
 * FABRICA CONCRETA: produce obstaculos de tipo Roca.
 */
UCLASS()
class MYPROJECT_API URockObstacleFactory : public UObstacleFactory
{
	GENERATED_BODY()

public:
	virtual AObstacle* CreateObstacle(UWorld* World, const FVector& Location, const FRotator& Rotation) const override;
};