// This file has been automatically generated by the Unreal Header Implementation tool

#include "Tests/FGBuildableSpawnStrategy_Spline.h"

UFGBuildableSpawnStrategy_Spline::UFGBuildableSpawnStrategy_Spline() : Super() {
	this->mSplineRouteStrategy = EFGSplineBuildableRouteStrategy::Auto;
	this->mSplineBendRadius = 300.0;
	this->mLocalStartTransform = FTransform(FQuat::Identity, FVector::ZeroVector, FVector::OneVector);
	this->mLocalEndTransform = FTransform(FQuat::Identity, FVector::ZeroVector, FVector::OneVector);
}
bool UFGBuildableSpawnStrategy_Spline::IsCompatibleWith(AFGBuildable* buildable) const{ return bool(); }
void UFGBuildableSpawnStrategy_Spline::PreSpawnBuildable(AFGBuildable* buildable){ }
EFGSplineBuildableRouteStrategy UFGBuildableSpawnStrategy_Spline::GetDefaultRouteStrategyForBuildable(const UClass* buildableClass){ return EFGSplineBuildableRouteStrategy(); }
bool UFGBuildableSpawnStrategy_Spline::RouteSpline(TArray<FSplinePointData>& out_splineData, const FVector& startPos, const FVector& startForward, const FVector& endPos, const FVector& endForward, EFGSplineBuildableRouteStrategy routeStrategy, float bendRadius){ return bool(); }
