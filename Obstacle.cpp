#include "Obstacle.h"

AObstacle::AObstacle()
{
	PrimaryActorTick.bCanEverTick = false;

	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
	RootComponent = MeshComponent;
}

void AObstacle::BeginPlay()
{
	Super::BeginPlay();
}

void AObstacle::Activate()
{
	UE_LOG(LogTemp, Log, TEXT("%s activado"), *GetObstacleName());
}