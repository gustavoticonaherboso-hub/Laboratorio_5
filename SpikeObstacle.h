#pragma once

#include "CoreMinimal.h"
#include "Obstacle.h"
#include "SpikeObstacle.generated.h"

/**
 * PRODUCTO CONCRETO: obstaculo tipo Pinchos. Causa daño al jugador.
 */
UCLASS()
class MYPROJECT_API ASpikeObstacle : public AObstacle
{
	GENERATED_BODY()

public:
	ASpikeObstacle();

	virtual void Activate() override;
	virtual FString GetObstacleName() const override { return TEXT("Pinchos"); }
};