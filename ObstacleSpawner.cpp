#include "ObstacleSpawner.h"
#include "ObstacleFactory.h"

AObstacleSpawner::AObstacleSpawner()
{
	PrimaryActorTick.bCanEverTick = false;
	ObstacleFactory = nullptr;
}

void AObstacleSpawner::BeginPlay()
{
	Super::BeginPlay();

	if (FactoryClass)
	{
		// Aqui se crea la fabrica concreta en tiempo de ejecucion,
		// sin que este codigo sepa de que tipo exacto es (Roca, Pinchos o Muro)
		ObstacleFactory = NewObject<UObstacleFactory>(this, FactoryClass);
	}

	PlaceObstacles();
}

void AObstacleSpawner::PlaceObstacles()
{
	if (!ObstacleFactory)
	{
		UE_LOG(LogTemp, Warning, TEXT("ObstacleSpawner: no se asigno FactoryClass en el Editor"));
		return;
	}

	for (const FTransform& Point : SpawnPoints)
	{
		ObstacleFactory->CreateObstacle(GetWorld(), Point.GetLocation(), Point.Rotator());
	}
}