#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Obstacle.generated.h"

/**
 * PRODUCTO ABSTRACTO del patron Abstract Factory.
 * Clase base de todos los obstaculos que se pueden colocar en el escenario.
 * No se puede instanciar directamente (UCLASS Abstract).
 */
UCLASS(Abstract)
class MYPROJECT_API AObstacle : public AActor
{
	GENERATED_BODY()
		
public:
	AObstacle();

protected:
	virtual void BeginPlay() override;

	// Malla visual compartida por todos los obstaculos concretos
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Obstacle")
		UStaticMeshComponent* MeshComponent;

public:
	// Comportamiento que se dispara cuando el obstaculo se activa.
	// Cada obstaculo concreto lo sobrescribe con su propia logica.
	virtual void Activate();

	// Nombre descriptivo, util para logs/depuracion
	virtual FString GetObstacleName() const { return TEXT("Obstaculo generico"); }
};