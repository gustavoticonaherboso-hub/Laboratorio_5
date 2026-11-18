#pragma once

#include "CoreMinimal.h"
#include "Obstacle.h"
#include "RockObstacle.generated.h"

/**
 * PRODUCTO CONCRETO: obstaculo tipo Roca. Bloquea el paso.
 */
UCLASS()
class MYPROJECT_API ARockObstacle : public AObstacle
{
	GENERATED_BODY()

public:
	ARockObstacle();

	virtual void Activate() override;
	virtual FString GetObstacleName() const override { return TEXT("Roca"); }
};