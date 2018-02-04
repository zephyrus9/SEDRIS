include $(DEPTH)/src/templates/cleanup_macros.mk

DIR_PATH := src/lib/taccess/interface
LIBNAME := SE_taccess

REQUIRED_LIBS   := SE_ta_implementation

CXX_SOURCES	:= seDRMBase.cpp \
		seHelperDRM.cpp \
		seHelperSRM.cpp \
		seHelperImage.cpp \
		seHelperDataTable.cpp \
		seIterator.cpp \
		seObject.cpp \
		seTransmittal.cpp \
		seWorkspace.cpp

NO_INSTALL 			:= true
NO_STATIC 			:= true

LOCAL_INCLUDES = -I$(INC_DIR) ${STLINCL} \
	-I$(DIR_PATH) -I$(DIR_PATH)/include \
	-I$(DIR_PATH)/../implementation/include

LOCAL_DFLAGS	:= ${STLDEFS}

LOCAL_INC_DIR := include/

EXPORTED_HEADERS := seCommon.h \
seDRMAbsoluteTime.h \
seDRMAbsoluteTimeInterval.h \
seDRMAggregateFeature.h \
seDRMAggregateGeometry.h \
seDRMAll.h \
seDRMAlternateHierarchyRelatedFeatures.h \
seDRMAlternateHierarchyRelatedGeometry.h \
seDRMAmbientColour.h \
seDRMAnimationBehaviour.h \
seDRMAnimationRelatedGeometry.h \
seDRMArc.h \
seDRMArealFeature.h \
seDRMAttachmentPoint.h \
seDRMAxis.h \
seDRMBaseAssociationData.h \
seDRMBase.h \
seDRMBaseLODData.h \
seDRMBasePositionalLight.h \
seDRMBaseSpatialAssociationData.h \
seDRMBaseSummaryItem.h \
seDRMBaseTimeData.h \
seDRMBlendDirectionalLight.h \
seDRMBoundingVolume.h \
seDRMBrowseMedia.h \
seDRMCameraPoint.h \
seDRMCC3DLocation.h \
seDRMCD3DLocation.h \
seDRMCDSurfaceLocation.h \
seDRMCitation.h \
seDRMClassificationData.h \
seDRMClassificationRelatedFeatures.h \
seDRMClassificationRelatedGeometry.h \
seDRMCM3DLocation.h \
seDRMCMYColourControlLink.h \
seDRMCMYColour.h \
seDRMCollisionVolume.h \
seDRMColourData.h \
seDRMColour.h \
seDRMColourIndexControlLink.h \
seDRMColourIndex.h \
seDRMColourShininess.h \
seDRMColourTableGroup.h \
seDRMColourTable.h \
seDRMColourTableLibrary.h \
seDRMConeDirectionalLight.h \
seDRMConformalBehaviour.h \
seDRMContactPoint.h \
seDRMContinuousLODRelatedGeometry.h \
seDRMControlLink.h \
seDRMCylindricalVolumeExtent.h \
seDRMDataQuality.h \
seDRMDataTable.h \
seDRMDataTableLibrary.h \
seDRMDiffuseColour.h \
seDRMDirectionalLightBehaviour.h \
seDRMDistanceLODData.h \
seDRMDRMClassSummaryItem.h \
seDRMECAugmented3DLocation.h \
seDRMECSurfaceLocation.h \
seDRMEDCSUseSummaryItem.h \
seDRMEdgeDirection.h \
seDRMEI3DLocation.h \
seDRMEllipse.h \
seDRMEmissiveColour.h \
seDRMEnclosingVolume.h \
seDRMEnumerationAxis.h \
seDRMEnvironmentalDomainSummary.h \
seDRMEnvironmentRoot.h \
seDRMExpression.h \
seDRMFaceDirection.h \
seDRMFadeRange.h \
seDRMFeatureEdge.h \
seDRMFeatureFace.h \
seDRMFeatureFaceRing.h \
seDRMFeatureHierarchy.h \
seDRMFeatureModel.h \
seDRMFeatureModelInstance.h \
seDRMFeatureNode.h \
seDRMFeatureRepresentation.h \
seDRMFeatureTopology.h \
seDRMFeatureTopologyHierarchy.h \
seDRMFeatureVolume.h \
seDRMFeatureVolumeShell.h \
seDRMFiniteElementMesh.h \
seDRMFlashingLightBehaviour.h \
seDRMFunctionalAssociationData.h \
seDRMFunction.h \
seDRMGeometricCentre.h \
seDRMGeometryEdge.h \
seDRMGeometryFace.h \
seDRMGeometryHierarchy.h \
seDRMGeometryModel.h \
seDRMGeometryModelInstance.h \
seDRMGeometryNode.h \
seDRMGeometryRepresentation.h \
seDRMGeometryTopology.h \
seDRMGeometryTopologyHierarchy.h \
seDRMGeometryVolume.h \
seDRMGridOverlap.h \
seDRMHAEC3DLocation.h \
seDRMHEEC3DLocation.h \
seDRMHEEQ3DLocation.h \
seDRMHierarchyData.h \
seDRMHierarchySummaryItem.h \
seDRMHSVColourControlLink.h \
seDRMHSVColour.h \
seDRMIcon.h \
seDRMIdentification.h \
seDRMImageAnchor.h \
seDRMImage.h \
seDRMImageLibrary.h \
seDRMImageMappingFunction.h \
seDRMIndexLODData.h \
seDRMInfiniteLight.h \
seDRMInlineColour.h \
seDRMInOut.h \
seDRMInterfaceTemplate.h \
seDRMIntervalAxis.h \
seDRMIrregularAxis.h \
seDRMKeywords.h \
seDRMLabel.h \
seDRMLCCAugmented3DLocation.h \
seDRMLCCSurfaceLocation.h \
seDRMLCE3DLocation.h \
seDRMLegalConstraints.h \
seDRMLibrary.h \
seDRMLightRenderingBehaviour.h \
seDRMLightRenderingPropertiesControlLink.h \
seDRMLightRenderingProperties.h \
seDRMLightSourceControlLink.h \
seDRMLightSource.h \
seDRMLineage.h \
seDRMLinearFeature.h \
seDRMLinearGeometry.h \
seDRMLine.h \
seDRMLiteral.h \
seDRMLobeData.h \
seDRMLocal4x4.h \
seDRMLocation2D.h \
seDRMLocation3D.h \
seDRMLocation.h \
seDRMLocationSurface.h \
seDRMLODRelatedFeatures.h \
seDRMLODRelatedGeometry.h \
seDRMLSA2DLocation.h \
seDRMLSP2DLocation.h \
seDRMLSR2DLocation.h \
seDRMLSR3DLocationControlLink.h \
seDRMLSR3DLocation.h \
seDRMLSRTransformation.h \
seDRMLSRTransformationStep.h \
seDRMLTSAS3DLocation.h \
seDRMLTSASSurfaceLocation.h \
seDRMLTSC3DLocation.h \
seDRMLTSCSurfaceLocation.h \
seDRMLTSE3DLocation.h \
seDRMLTSESurfaceLocation.h \
seDRMMapScaleLODData.h \
seDRMMAugmented3DLocation.h \
seDRMMeshFaceTable.h \
seDRMModel.h \
seDRMModelInstanceTemplateIndex.h \
seDRMModelLibrary.h \
seDRMMovingLightBehaviour.h \
seDRMMSurfaceLocation.h \
seDRMOctantData.h \
seDRMOctantRelatedFeatures.h \
seDRMOctantRelatedGeometry.h \
seDRMOMSAugmented3DLocation.h \
seDRMOMSSurfaceLocation.h \
seDRMOverloadPriorityIndex.h \
seDRMParallelepipedVolumeExtent.h \
seDRMPD3DLocation.h \
seDRMPDSurfaceLocation.h \
seDRMPerimeterData.h \
seDRMPerimeterRelatedFeatures.h \
seDRMPerimeterRelatedFeatureTopology.h \
seDRMPerimeterRelatedGeometry.h \
seDRMPerimeterRelatedGeometryTopology.h \
seDRMPointFeature.h \
seDRMPoint.h \
seDRMPolygonControlLink.h \
seDRMPolygon.h \
seDRMPolyhedron.h \
seDRMPositionalLight.h \
seDRMPredefinedFunction.h \
seDRMPresentationDomain.h \
seDRMPrimitiveColour.h \
seDRMPrimitiveFeature.h \
seDRMPrimitiveGeometry.h \
seDRMPrimitiveSummaryItem.h \
seDRMProcessStep.h \
seDRMPropertyCharacteristic.h \
seDRMPropertyDescription.h \
seDRMPropertyGrid.h \
seDRMPropertyGridHookPoint.h \
seDRMProperty.h \
seDRMPropertySet.h \
seDRMPropertySetIndexControlLink.h \
seDRMPropertySetIndex.h \
seDRMPropertySetTableGroup.h \
seDRMPropertySetTable.h \
seDRMPropertySetTableLibrary.h \
seDRMPropertyTable.h \
seDRMPropertyTableReferenceControlLink.h \
seDRMPropertyTableReference.h \
seDRMPropertyValue.h \
seDRMProximityData.h \
seDRMPSAugmented3DLocation.h \
seDRMPseudoCodeFunction.h \
seDRMPSSurfaceLocation.h \
seDRMPyramidDirectionalLight.h \
seDRMQuadrantData.h \
seDRMQuadrantRelatedFeatures.h \
seDRMQuadrantRelatedGeometry.h \
seDRMReferenceOrigin.h \
seDRMReferenceSurface.h \
seDRMReferenceVectorControlLink.h \
seDRMReferenceVector.h \
seDRMRegularAxis.h \
seDRMRelativeTime.h \
seDRMRelativeTimeInterval.h \
seDRMRenderingPriorityLevel.h \
seDRMRenderingProperties.h \
seDRMResponsibleParty.h \
seDRMRGBColourControlLink.h \
seDRMRGBColour.h \
seDRMRoleData.h \
seDRMRotatingLightBehaviour.h \
seDRMRotationControlLink.h \
seDRMRotation.h \
seDRMScaleControlLink.h \
seDRMScale.h \
seDRMSeason.h \
seDRMSEC3DLocation.h \
seDRMSecurityConstraints.h \
seDRMSeparatingPlaneData.h \
seDRMSeparatingPlane.h \
seDRMSeparatingPlaneRelatedGeometry.h \
seDRMSeparatingPlaneRelations.h \
seDRMSEQ3DLocation.h \
seDRMSMD3DLocation.h \
seDRMSME3DLocation.h \
seDRMSound.h \
seDRMSoundInstanceControlLink.h \
seDRMSoundInstance.h \
seDRMSoundLibrary.h \
seDRMSoundVolume.h \
seDRMSource.h \
seDRMSpatialAssociationData.h \
seDRMSpatialExtent.h \
seDRMSpatialIndexData.h \
seDRMSpatialIndexRelatedFeatures.h \
seDRMSpatialIndexRelatedFeatureTopology.h \
seDRMSpatialIndexRelatedGeometry.h \
seDRMSpatialIndexRelatedGeometryTopology.h \
seDRMSpatialResolutionLODData.h \
seDRMSpecularColour.h \
seDRMSphericalVolumeExtent.h \
seDRMSpotLight.h \
seDRMSRFSummary.h \
seDRMStampBehaviour.h \
seDRMStateControlLink.h \
seDRMStateData.h \
seDRMStateRelatedFeatures.h \
seDRMStateRelatedGeometry.h \
seDRMStrobingLightBehaviour.h \
seDRMSurfaceGeometry.h \
seDRMSymbol.h \
seDRMSymbolLibrary.h \
seDRMTablePropertyDescription.h \
seDRMTackPoint.h \
seDRMText.h \
seDRMTextureCoordinateControlLink.h \
seDRMTextureCoordinate.h \
seDRMTimeConstraintsData.h \
seDRMTimeInterval.h \
seDRMTimeOfDay.h \
seDRMTimePoint.h \
seDRMTimeRelatedFeatures.h \
seDRMTimeRelatedGeometry.h \
seDRMTMAugmented3DLocation.h \
seDRMTMSurfaceLocation.h \
seDRMTransformation.h \
seDRMTranslationControlLink.h \
seDRMTranslation.h \
seDRMTranslucencyControlLink.h \
seDRMTranslucency.h \
seDRMTransmittalRoot.h \
seDRMTransmittalSummary.h \
seDRMTwinklingLightBehaviour.h \
seDRMUnionOfFeatures.h \
seDRMUnionOfFeatureTopology.h \
seDRMUnionOfGeometry.h \
seDRMUnionOfGeometryHierarchy.h \
seDRMUnionOfGeometryTopology.h \
seDRMUnionOfPrimitiveGeometry.h \
seDRMVariable.h \
seDRMVertex.h \
seDRMVolumeExtent.h \
seDRMVolumeGeometry.h \
seDRMVolumeLightBehaviour.h \
seDRMVolumeLODData.h \
seDRMVolumeObject.h \
seDRMVolumetricFeature.h \
seDRMWorld3x3.h \
seDRMWorldTransformation.h \
seException.h \
seHelperDataTable.h \
seHelperDRM.h \
seHelperImage.h \
seHelperSRM.h \
seIterator.h \
seObject.h \
seSearchIterator.h \
seTransmittal.h \
seWorkspace.h

include $(DEPTH)/src/templates/localtargets.mk

LOCAL_INC_DIR := 
