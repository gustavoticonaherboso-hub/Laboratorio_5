#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ObstacleSpawner.generated.h"

class UObstacleFactory;

/**
 * CLIENTE del patron Abstract Factory.
 * Se coloca en el escenario como un Actor mas y usa la fabrica concreta
 * seleccionada en el Editor (sin tocar codigo) para generar obstaculos
 * en los puntos indicados.
 */
UCLASS()
class MYPROJECT_API AObstacleSpawner : public AActor
{
	GENERATED_BODY()

public:
	AObstacleSpawner();

protected:
	virtual void BeginPlay() override;

	// Fabrica concreta a usar: en el Editor eliges RockObstacleFactory,
	// SpikeObstacleFactory o WallObstacleFactory (o una Blueprint de alguna de ellas)
	UPROPERTY(EditAnywhere, Category = "ObstacleFactory")
		TSubclassOf<UObstacleFactory> FactoryClass;

	// Puntos del escenario donde se colocara cada obstaculo
	UPROPERTY(EditAnywhere, Category = "ObstacleFactory")
		TArray<FTransform> SpawnPoints;

private:
	UPROPERTY()
		UObstacleFactory* ObstacleFactory;

	void PlaceObstacles();
};