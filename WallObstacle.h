#pragma once

#include "CoreMinimal.h"
#include "Obstacle.h"
#include "WallObstacle.generated.h"

/**
 * PRODUCTO CONCRETO: obstaculo tipo Muro. Bloquea totalmente un camino.
 */
UCLASS()
class MYPROJECT_API AWallObstacle : public AObstacle
{
	GENERATED_BODY()

public:
	AWallObstacle();

	virtual void Activate() override;
	virtual FString GetObstacleName() const override { return TEXT("Muro"); }
};