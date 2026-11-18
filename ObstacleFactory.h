#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ObstacleFactory.generated.h"

class AObstacle;

/**
 * FABRICA ABSTRACTA del patron Abstract Factory.
 * Declara la operacion para crear un obstaculo sin especificar
 * de que clase concreta sera.
 */
UCLASS(Abstract)
class MYPROJECT_API UObstacleFactory : public UObject
{
	GENERATED_BODY()

public:
	virtual AObstacle* CreateObstacle(UWorld* World, const FVector& Location, const FRotator& Rotation) const PURE_VIRTUAL(UObstacleFactory::CreateObstacle, return nullptr;);
};