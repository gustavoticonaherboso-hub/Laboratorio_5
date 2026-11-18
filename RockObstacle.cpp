#include "RockObstacle.h"

ARockObstacle::ARockObstacle()
{
	// Aqui se asigna la malla/escala propia de la roca.
	// Si ya tienes un Static Mesh importado, puedes cargarlo con
	// ConstructorHelpers::FObjectFinder<UStaticMesh> en vez de solo escalar.
	MeshComponent->SetRelativeScale3D(FVector(1.5f, 1.5f, 1.5f));
}

void ARockObstacle::Activate()
{
	Super::Activate();
	// Comportamiento propio de la roca: por ejemplo, bloquear el paso del jugador
}