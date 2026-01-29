#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class NSUUID, NSString, NSSet<ObjectType>, NSObject, NSNumber, NSMutableSet<ObjectType>, NSMutableDictionary<KeyType, ObjectType>, NSMutableArray<ObjectType>, NSError, NSDictionary<KeyType, ObjectType>, NSData, NSArray<ObjectType>, KESPLK__SkieTypeExportsKt, KESPLK__SkieSuspendWrappersKt, KESPLK_KSP_IoGithubDeveloprofthingsKesplPreferencesESPPreferencesManager, KESPLK_KSP_IoGithubDeveloprofthingsKesplGetFlowController, KESPLK_KSP_IoGithubDeveloprofthingsKesplDiProvidesDataStore, KESPLK_KSP_IoGithubDeveloprofthingsKesplDiPreferencesModule, KESPLK_KSP_IoGithubDeveloprofthingsKesplDiPlatformNativeModule_Expect, KESPLK_KSP_IoGithubDeveloprofthingsKesplDiPlatformNativeModule_Actual, KESPLK_KSP_IoGithubDeveloprofthingsKesplDiESPModule, KESPLK_KSP_IoGithubDeveloprofthingsKesplBluetoothIOSBluetoothManager, KESPLK_KSP_IoGithubDeveloprofthingsKesplBluetoothDiscoveryLeIOSLEV1cScanner_Q_V1C_LE_QUALIFER, KESPLK_KSP_IoGithubDeveloprofthingsKesplBluetoothDiscoveryDemoV1cDemoScanner_Q_V1C_DEMO_QUALIFER, KESPLK_KSP_IoGithubDeveloprofthingsKesplBluetoothConnectionLeLeConnection_Q_LE_CONNECTION_QUALIFIER, KESPLK_KSP_IoGithubDeveloprofthingsKesplBluetoothConnectionDemoDemoConnection_Q_DEMO_CONNECTION_QUALIFIER, KESPLKVolumeKt, KESPLKVersionKt, KESPLKVehicleSpeedKt, KESPLKV1connectionScanResult, KESPLKV1connectionRemote, KESPLKV1connectionException, KESPLKV1connectionDemoCompanion, KESPLKV1connectionDemo, KESPLKV1cTypeKt, KESPLKV1cTypeCompanion, KESPLKV1cType, KESPLKV1Volumes, KESPLKV1Volume, KESPLKV1VersionInfoUserSettingsInfo, KESPLKV1VersionInfoSweepInfo, KESPLKV1VersionInfoKt, KESPLKV1VersionInfo, KESPLKV1ModeLogicKa, KESPLKV1ModeKt, KESPLKV1ModeInvalid, KESPLKV1ModeCompanion, KESPLKV1ModeAllBogeysKKa, KESPLKV1ModeAdvancedLogic, KESPLKV1Mode, KESPLKV1ConnectionTypePreference, KESPLKV1CapabilityInfoCompanion, KESPLKV1CapabilityInfo, KESPLKUtilKt, KESPLKUserSettingsKt, KESPLKUnknownException, KESPLKUShort, KESPLKULong, KESPLKUInt, KESPLKUByte, KESPLKSweepSectionKt, KESPLKSweepSection, KESPLKSweepDefinitionKt, KESPLKSweepDefinition, KESPLKSweepData, KESPLKSkie_SuspendResultSuccess, KESPLKSkie_SuspendResultError, KESPLKSkie_SuspendResultCanceled, KESPLKSkie_SuspendResult, KESPLKSkie_SuspendHandler, KESPLKSkie_CancellationHandler, KESPLKSkieKotlinStateFlow<T>, KESPLKSkieKotlinSharedFlow<T>, KESPLKSkieKotlinOptionalStateFlow<T>, KESPLKSkieKotlinOptionalSharedFlow<T>, KESPLKSkieKotlinOptionalMutableStateFlow<T>, KESPLKSkieKotlinOptionalMutableSharedFlow<T>, KESPLKSkieKotlinOptionalFlow<T>, KESPLKSkieKotlinMutableStateFlow<T>, KESPLKSkieKotlinMutableSharedFlow<T>, KESPLKSkieKotlinFlow<T>, KESPLKSkieColdFlowIterator<E>, KESPLKShort, KESPLKServicesDiscoveredEvent, KESPLKServiceCharacteristicsDiscoveredEvent, KESPLKSerialKt, KESPLKSavvyKt, KESPLKSAVVYThumbwheelOverrideNone, KESPLKSAVVYThumbwheelOverrideCustom, KESPLKSAVVYThumbwheelOverrideAuto, KESPLKSAVVYThumbwheelOverride, KESPLKSAVVYStatus, KESPLKReadRemoteRssiException, KESPLKReadRemoteRssiEvent, KESPLKPlatformNativeModuleGenio_github_developrofthings_kespl_diKt, KESPLKPlatformNativeModule, KESPLKPhotoRadarCompanion, KESPLKPhotoRadar, KESPLKPeripheralNotConnectedException, KESPLKPeripheralIsReadyToSend, KESPLKNumber, KESPLKNotProcessedKt, KESPLKMuteVolumeControl, KESPLKMutableSet<ObjectType>, KESPLKMutableDictionary<KeyType, ObjectType>, KESPLKLong, KESPLKLogger_iosKt, KESPLKLeUnsupported, KESPLKLeConnectionFailed, KESPLKKotlinx_serialization_coreStructureKindOBJECT, KESPLKKotlinx_serialization_coreStructureKindMAP, KESPLKKotlinx_serialization_coreStructureKindLIST, KESPLKKotlinx_serialization_coreStructureKindCLASS, KESPLKKotlinx_serialization_coreStructureKind, KESPLKKotlinx_serialization_coreSerializersModule, KESPLKKotlinx_serialization_coreSerialKindENUM, KESPLKKotlinx_serialization_coreSerialKindCONTEXTUAL, KESPLKKotlinx_serialization_coreSerialKind, KESPLKKotlinx_serialization_corePrimitiveKindSTRING, KESPLKKotlinx_serialization_corePrimitiveKindSHORT, KESPLKKotlinx_serialization_corePrimitiveKindLONG, KESPLKKotlinx_serialization_corePrimitiveKindINT, KESPLKKotlinx_serialization_corePrimitiveKindFLOAT, KESPLKKotlinx_serialization_corePrimitiveKindDOUBLE, KESPLKKotlinx_serialization_corePrimitiveKindCHAR, KESPLKKotlinx_serialization_corePrimitiveKindBYTE, KESPLKKotlinx_serialization_corePrimitiveKindBOOLEAN, KESPLKKotlinx_serialization_corePrimitiveKind, KESPLKKotlinx_serialization_corePolymorphicKindSEALED, KESPLKKotlinx_serialization_corePolymorphicKindOPEN, KESPLKKotlinx_serialization_corePolymorphicKind, KESPLKKotlinx_io_coreBuffer, KESPLKKotlinx_coroutines_coreCoroutineDispatcherKey, KESPLKKotlinx_coroutines_coreCoroutineDispatcher, KESPLKKotlinUuidCompanion, KESPLKKotlinUuid, KESPLKKotlinUnit, KESPLKKotlinThrowable, KESPLKKotlinRuntimeException, KESPLKKotlinPair<A, B>, KESPLKKotlinNothing, KESPLKKotlinLazyThreadSafetyMode, KESPLKKotlinInstantCompanion, KESPLKKotlinInstant, KESPLKKotlinIllegalStateException, KESPLKKotlinException, KESPLKKotlinError, KESPLKKotlinEnumCompanion, KESPLKKotlinEnum<E>, KESPLKKotlinCancellationException, KESPLKKotlinByteIterator, KESPLKKotlinByteArray, KESPLKKotlinArray<T>, KESPLKKotlinAbstractCoroutineContextKey<B, E>, KESPLKKotlinAbstractCoroutineContextElement, KESPLKKoin_coreTypeQualifier, KESPLKKoin_coreSingleInstanceFactory<T>, KESPLKKoin_coreScopeRegistryCompanion, KESPLKKoin_coreScopeRegistry, KESPLKKoin_coreScopeDSL, KESPLKKoin_coreScope, KESPLKKoin_coreResolutionContext, KESPLKKoin_corePropertyRegistry, KESPLKKoin_coreParametersHolder, KESPLKKoin_coreOptionRegistry, KESPLKKoin_coreModule, KESPLKKoin_coreLogger, KESPLKKoin_coreLockable, KESPLKKoin_coreLevel, KESPLKKoin_coreKoinOption, KESPLKKoin_coreKoinDefinition<R>, KESPLKKoin_coreKoinApplicationCompanion, KESPLKKoin_coreKoinApplication, KESPLKKoin_coreKoin, KESPLKKoin_coreKind, KESPLKKoin_coreInstanceRegistry, KESPLKKoin_coreInstanceFactoryCompanion, KESPLKKoin_coreInstanceFactory<T>, KESPLKKoin_coreExtensionManager, KESPLKKoin_coreCoreResolver, KESPLKKoin_coreCallbacks<T>, KESPLKKoin_coreBeanDefinition<T>, KESPLKKoinMeta_c10909c2Kt, KESPLKKoinMeta_5e440e9fKt, KESPLKKTimer, KESPLKInt, KESPLKInfV1BusyKt, KESPLKInfDisplayDataKt, KESPLKIV1cScannerCompanion, KESPLKIOSLegacyUnsupported, KESPLKIOSCentralManagerStateCompanion, KESPLKIOSCentralManagerState, KESPLKIESPClientKt, KESPLKIESPClientCompanion, KESPLKIConnectionKt, KESPLKFloat, KESPLKFailedToDiscoverServices, KESPLKFailedToDiscoverServiceCharacteristics, KESPLKEspUUID, KESPLKEnableNotificationsException, KESPLKEcho, KESPLKESPScanMode, KESPLKESPResponseSuccess<ESPResponseType>, KESPLKESPResponseKt, KESPLKESPResponseFailure<ErrorType>, KESPLKESPRequest, KESPLKESPPacketUtilsKt, KESPLKESPPacketIdUnknownPacketType, KESPLKESPPacketIdRespVersion, KESPLKESPPacketIdRespVehicleSpeed, KESPLKESPPacketIdRespUserBytes, KESPLKESPPacketIdRespUnsupportedPacket, KESPLKESPPacketIdRespSweepWriteResult, KESPLKESPPacketIdRespSweepSections, KESPLKESPPacketIdRespSweepDefinition, KESPLKESPPacketIdRespSerialNumber, KESPLKESPPacketIdRespSavvyStatus, KESPLKESPPacketIdRespRequestNotProcessed, KESPLKESPPacketIdRespMaxSweepIndex, KESPLKESPPacketIdRespDefaultSweepDefinitions, KESPLKESPPacketIdRespDataReceived, KESPLKESPPacketIdRespDataError, KESPLKESPPacketIdRespCurrentVolume, KESPLKESPPacketIdRespBatteryVoltage, KESPLKESPPacketIdRespAllVolume, KESPLKESPPacketIdRespAlertData, KESPLKESPPacketIdReqWriteVolume, KESPLKESPPacketIdReqWriteUserBytes, KESPLKESPPacketIdReqWriteSweepDefinition, KESPLKESPPacketIdReqVersion, KESPLKESPPacketIdReqVehicleSpeed, KESPLKESPPacketIdReqUserBytes, KESPLKESPPacketIdReqTurnOnMainDisplay, KESPLKESPPacketIdReqTurnOffMainDisplay, KESPLKESPPacketIdReqSweepSections, KESPLKESPPacketIdReqStopAlertData, KESPLKESPPacketIdReqStartAlertData, KESPLKESPPacketIdReqSetSavvyUnmuteEnable, KESPLKESPPacketIdReqSerialNumber, KESPLKESPPacketIdReqSavvyStatus, KESPLKESPPacketIdReqOverrideThumbwheel, KESPLKESPPacketIdReqMuteOn, KESPLKESPPacketIdReqMuteOff, KESPLKESPPacketIdReqMaxSweepIndex, KESPLKESPPacketIdReqFactoryDefault, KESPLKESPPacketIdReqDisplayCurrentVolume, KESPLKESPPacketIdReqDefaultSweeps, KESPLKESPPacketIdReqDefaultSweepDefinitions, KESPLKESPPacketIdReqCurrentVolume, KESPLKESPPacketIdReqChangeMode, KESPLKESPPacketIdReqBatteryVoltage, KESPLKESPPacketIdReqAllVolume, KESPLKESPPacketIdReqAllSweepDefinitions, KESPLKESPPacketIdReqAbortAudioDelay, KESPLKESPPacketIdKt, KESPLKESPPacketIdInfV1Busy, KESPLKESPPacketIdInfDisplayData, KESPLKESPPacketId, KESPLKESPOutOfMemoryError, KESPLKESPModuleGenio_github_developrofthings_kespl_diKt, KESPLKESPModule, KESPLKESPLeException, KESPLKESPFlowExtKt, KESPLKESPFailureV1NotDetermined, KESPLKESPFailureV1Busy, KESPLKESPFailureUnknown, KESPLKESPFailureTimedOut, KESPLKESPFailureNotTimeSlicing, KESPLKESPFailureNotSupported, KESPLKESPFailureNotProcessed, KESPLKESPFailureNotConnected, KESPLKESPFailureLegacyMode, KESPLKESPFailureInvalidSweep, KESPLKESPFailureESPOperationFailed, KESPLKESPFailureDataError, KESPLKESPDeviceValentineOneUnknown, KESPLKESPDeviceValentineOneNoChecksum, KESPLKESPDeviceValentineOneLegacy, KESPLKESPDeviceValentineOneChecksum, KESPLKESPDeviceValentineOne, KESPLKESPDeviceV1connection, KESPLKESPDeviceUnknownDevice, KESPLKESPDeviceThirdParty3, KESPLKESPDeviceThirdParty2, KESPLKESPDeviceThirdParty1, KESPLKESPDeviceSAVVY, KESPLKESPDeviceReserved, KESPLKESPDeviceRemoteDisplay, KESPLKESPDeviceRemoteAudio, KESPLKESPDeviceKt, KESPLKESPDeviceGeneralBroadcast, KESPLKESPDeviceCustom, KESPLKESPDevice, KESPLKESPCoroutineScopeKt, KESPLKESPContext, KESPLKESPConnectionStatus, KESPLKESPCentralManagerDelegateKt, KESPLKESPByteArrayFlowExtKt, KESPLKDouble, KESPLKDisplayDataKt, KESPLKCoreBluetoothOperation, KESPLKConstantsKt, KESPLKConnectionStrategy, KESPLKCharacteristicWriteException, KESPLKCharacteristicDidWriteValue, KESPLKCharacteristicDidUpdateValue, KESPLKCharacteristicDidUpdateNotificationState, KESPLKCentralManagerDiscoveryEvent, KESPLKCentralManagerConnectionEvent, KESPLKByteExtKt, KESPLKByte, KESPLKBoolean, KESPLKBogeyLockVolumeControl, KESPLKBogeyCounter7SegmentKt, KESPLKBluetooth_iosKt, KESPLKBluetoothKt, KESPLKBatteryKt, KESPLKBaseConnection, KESPLKBase, KESPLKBarGraphSensitive, KESPLKBandSensitivityCompanion, KESPLKBandSensitivity, KESPLKBandArrowIndicatorKt, KESPLKBTUnsupported, KESPLKBTDevice, KESPLKAux1Kt, KESPLKAutoMuteCompanion, KESPLKAutoMute, KESPLKArraySupportKt, KESPLKAlertKt, KESPLKAlertBandCompanion, KESPLKAlertBand, KESPLKAlertArrowCompanion, KESPLKAlertArrow, CBUUID, CBService, CBPeripheral, CBCharacteristic;

@protocol NSCopying, KESPLKV1connection, KESPLKUserSettings, KESPLKSkie_DispatcherDelegate, KESPLKPlatformLogger, KESPLKKotlinx_serialization_coreSerializersModuleCollector, KESPLKKotlinx_serialization_coreSerializationStrategy, KESPLKKotlinx_serialization_coreSerialDescriptor, KESPLKKotlinx_serialization_coreKSerializer, KESPLKKotlinx_serialization_coreEncoder, KESPLKKotlinx_serialization_coreDeserializationStrategy, KESPLKKotlinx_serialization_coreDecoder, KESPLKKotlinx_serialization_coreCompositeEncoder, KESPLKKotlinx_serialization_coreCompositeDecoder, KESPLKKotlinx_io_coreSource, KESPLKKotlinx_io_coreSink, KESPLKKotlinx_io_coreRawSource, KESPLKKotlinx_io_coreRawSink, KESPLKKotlinx_coroutines_coreStateFlow, KESPLKKotlinx_coroutines_coreSharedFlow, KESPLKKotlinx_coroutines_coreSelectInstance, KESPLKKotlinx_coroutines_coreSelectClause2, KESPLKKotlinx_coroutines_coreSelectClause1, KESPLKKotlinx_coroutines_coreSelectClause0, KESPLKKotlinx_coroutines_coreSelectClause, KESPLKKotlinx_coroutines_coreRunnable, KESPLKKotlinx_coroutines_coreParentJob, KESPLKKotlinx_coroutines_coreMutableStateFlow, KESPLKKotlinx_coroutines_coreMutableSharedFlow, KESPLKKotlinx_coroutines_coreJob, KESPLKKotlinx_coroutines_coreFlowCollector, KESPLKKotlinx_coroutines_coreFlow, KESPLKKotlinx_coroutines_coreDisposableHandle, KESPLKKotlinx_coroutines_coreDeferred, KESPLKKotlinx_coroutines_coreCoroutineScope, KESPLKKotlinx_coroutines_coreChildJob, KESPLKKotlinx_coroutines_coreChildHandle, KESPLKKotlinSequence, KESPLKKotlinLazy, KESPLKKotlinKDeclarationContainer, KESPLKKotlinKClassifier, KESPLKKotlinKClass, KESPLKKotlinKAnnotatedElement, KESPLKKotlinIterator, KESPLKKotlinCoroutineContextKey, KESPLKKotlinCoroutineContextElement, KESPLKKotlinCoroutineContext, KESPLKKotlinContinuationInterceptor, KESPLKKotlinContinuation, KESPLKKotlinComparator, KESPLKKotlinComparable, KESPLKKotlinAutoCloseable, KESPLKKotlinAnnotation, KESPLKKoin_coreScopeCallback, KESPLKKoin_coreResolutionExtension, KESPLKKoin_coreQualifier, KESPLKKoin_coreKoinScopeComponent, KESPLKKoin_coreKoinExtension, KESPLKKoin_coreKoinComponent, KESPLKIV1cScanner, KESPLKIESPClient, KESPLKIConnection, KESPLKESPResponse, KESPLKESPFailure, KESPLKESPCoreBluetoothEvent, KESPLKESPCBCharacteristicEvent;

// Due to an Obj-C/Swift interop limitation, SKIE cannot generate Swift types with a lambda type argument.
// Example of such type is: A<() -> Unit> where A<T> is a generic class.
// To avoid compilation errors SKIE replaces these type arguments with __SkieLambdaErrorType, resulting in A<__SkieLambdaErrorType>.
// Generated declarations that reference __SkieLambdaErrorType cannot be called in any way and the __SkieLambdaErrorType class cannot be used.
// The original declarations can still be used in the same way as other declarations hidden by SKIE (and with the same limitations as without SKIE).
@interface __SkieLambdaErrorType : NSObject
- (instancetype _Nonnull)init __attribute__((unavailable));
+ (instancetype _Nonnull)new __attribute__((unavailable));
@end

// Due to an Obj-C/Swift interop limitation, SKIE cannot generate Swift code that uses external Obj-C types for which SKIE doesn't know a fully qualified name.
// This problem occurs when custom Cinterop bindings are used because those do not contain the name of the Framework that provides implementation for those binding.
// The name can be configured manually using the SKIE Gradle configuration key 'ClassInterop.CInteropFrameworkName' in the same way as other SKIE features.
// To avoid compilation errors SKIE replaces types with unknown Framework name with __SkieUnknownCInteropFrameworkErrorType.
// Generated declarations that reference __SkieUnknownCInteropFrameworkErrorType cannot be called in any way and the __SkieUnknownCInteropFrameworkErrorType class cannot be used.
@interface __SkieUnknownCInteropFrameworkErrorType : NSObject
- (instancetype _Nonnull)init __attribute__((unavailable));
+ (instancetype _Nonnull)new __attribute__((unavailable));
@end

typedef id<KESPLKKoin_coreQualifier> _Nonnull Skie__TypeDef__0__id_KESPLKKoin_coreQualifier_ __attribute__((__swift_private__));
typedef id<KESPLKKoin_coreKoinExtension> _Nonnull Skie__TypeDef__1__id_KESPLKKoin_coreKoinExtension_ __attribute__((__swift_private__));
typedef id<KESPLKKoin_coreKoinExtension> _Nullable Skie__TypeDef__2__id_KESPLKKoin_coreKoinExtension___Nullable __attribute__((__swift_private__));

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface KESPLKBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface KESPLKBase (KESPLKBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface KESPLKMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface KESPLKMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorKESPLKKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface KESPLKNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface KESPLKByte : KESPLKNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface KESPLKUByte : KESPLKNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface KESPLKShort : KESPLKNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface KESPLKUShort : KESPLKNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface KESPLKInt : KESPLKNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface KESPLKUInt : KESPLKNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface KESPLKLong : KESPLKNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface KESPLKULong : KESPLKNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface KESPLKFloat : KESPLKNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface KESPLKDouble : KESPLKNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface KESPLKBoolean : KESPLKNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkieColdFlowIterator")))
@interface KESPLKSkieColdFlowIterator<E> : KESPLKBase
- (instancetype)initWithFlow:(id<KESPLKKotlinx_coroutines_coreFlow>)flow __attribute__((swift_name("init(flow:)"))) __attribute__((objc_designated_initializer));
- (void)cancel __attribute__((swift_name("cancel()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)hasNextWithCompletionHandler:(void (^)(KESPLKBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("hasNext(completionHandler:)")));
- (E _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreFlow")))
@protocol KESPLKKotlinx_coroutines_coreFlow
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<KESPLKKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkieKotlinFlow")))
@interface KESPLKSkieKotlinFlow<__covariant T> : KESPLKBase <KESPLKKotlinx_coroutines_coreFlow>
- (instancetype)initWithDelegate:(id<KESPLKKotlinx_coroutines_coreFlow>)delegate __attribute__((swift_name("init(_:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<KESPLKKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSharedFlow")))
@protocol KESPLKKotlinx_coroutines_coreSharedFlow <KESPLKKotlinx_coroutines_coreFlow>
@required
@property (readonly) NSArray<id> *replayCache __attribute__((swift_name("replayCache")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreFlowCollector")))
@protocol KESPLKKotlinx_coroutines_coreFlowCollector
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(id _Nullable)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreMutableSharedFlow")))
@protocol KESPLKKotlinx_coroutines_coreMutableSharedFlow <KESPLKKotlinx_coroutines_coreSharedFlow, KESPLKKotlinx_coroutines_coreFlowCollector>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (void)resetReplayCache __attribute__((swift_name("resetReplayCache()")));
- (BOOL)tryEmitValue:(id _Nullable)value __attribute__((swift_name("tryEmit(value:)")));
@property (readonly) id<KESPLKKotlinx_coroutines_coreStateFlow> subscriptionCount __attribute__((swift_name("subscriptionCount")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkieKotlinMutableSharedFlow")))
@interface KESPLKSkieKotlinMutableSharedFlow<T> : KESPLKBase <KESPLKKotlinx_coroutines_coreMutableSharedFlow>
@property (readonly) NSArray<T> *replayCache __attribute__((swift_name("replayCache")));
@property (readonly) id<KESPLKKotlinx_coroutines_coreStateFlow> subscriptionCount __attribute__((swift_name("subscriptionCount")));
- (instancetype)initWithDelegate:(id<KESPLKKotlinx_coroutines_coreMutableSharedFlow>)delegate __attribute__((swift_name("init(_:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<KESPLKKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(T)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (void)resetReplayCache __attribute__((swift_name("resetReplayCache()")));
- (BOOL)tryEmitValue:(T)value __attribute__((swift_name("tryEmit(value:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreStateFlow")))
@protocol KESPLKKotlinx_coroutines_coreStateFlow <KESPLKKotlinx_coroutines_coreSharedFlow>
@required
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreMutableStateFlow")))
@protocol KESPLKKotlinx_coroutines_coreMutableStateFlow <KESPLKKotlinx_coroutines_coreStateFlow, KESPLKKotlinx_coroutines_coreMutableSharedFlow>
@required
- (void)setValue:(id _Nullable)value __attribute__((swift_name("setValue(_:)")));
- (BOOL)compareAndSetExpect:(id _Nullable)expect update:(id _Nullable)update __attribute__((swift_name("compareAndSet(expect:update:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkieKotlinMutableStateFlow")))
@interface KESPLKSkieKotlinMutableStateFlow<T> : KESPLKBase <KESPLKKotlinx_coroutines_coreMutableStateFlow>
@property (readonly) NSArray<T> *replayCache __attribute__((swift_name("replayCache")));
@property (readonly) id<KESPLKKotlinx_coroutines_coreStateFlow> subscriptionCount __attribute__((swift_name("subscriptionCount")));
@property T value __attribute__((swift_name("value")));
- (instancetype)initWithDelegate:(id<KESPLKKotlinx_coroutines_coreMutableStateFlow>)delegate __attribute__((swift_name("init(_:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<KESPLKKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
- (BOOL)compareAndSetExpect:(T)expect update:(T)update __attribute__((swift_name("compareAndSet(expect:update:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(T)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (void)resetReplayCache __attribute__((swift_name("resetReplayCache()")));
- (BOOL)tryEmitValue:(T)value __attribute__((swift_name("tryEmit(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkieKotlinOptionalFlow")))
@interface KESPLKSkieKotlinOptionalFlow<__covariant T> : KESPLKBase <KESPLKKotlinx_coroutines_coreFlow>
- (instancetype)initWithDelegate:(id<KESPLKKotlinx_coroutines_coreFlow>)delegate __attribute__((swift_name("init(_:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<KESPLKKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkieKotlinOptionalMutableSharedFlow")))
@interface KESPLKSkieKotlinOptionalMutableSharedFlow<T> : KESPLKBase <KESPLKKotlinx_coroutines_coreMutableSharedFlow>
@property (readonly) NSArray<id> *replayCache __attribute__((swift_name("replayCache")));
@property (readonly) id<KESPLKKotlinx_coroutines_coreStateFlow> subscriptionCount __attribute__((swift_name("subscriptionCount")));
- (instancetype)initWithDelegate:(id<KESPLKKotlinx_coroutines_coreMutableSharedFlow>)delegate __attribute__((swift_name("init(_:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<KESPLKKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(T _Nullable)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (void)resetReplayCache __attribute__((swift_name("resetReplayCache()")));
- (BOOL)tryEmitValue:(T _Nullable)value __attribute__((swift_name("tryEmit(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkieKotlinOptionalMutableStateFlow")))
@interface KESPLKSkieKotlinOptionalMutableStateFlow<T> : KESPLKBase <KESPLKKotlinx_coroutines_coreMutableStateFlow>
@property (readonly) NSArray<id> *replayCache __attribute__((swift_name("replayCache")));
@property (readonly) id<KESPLKKotlinx_coroutines_coreStateFlow> subscriptionCount __attribute__((swift_name("subscriptionCount")));
@property T _Nullable value __attribute__((swift_name("value")));
- (instancetype)initWithDelegate:(id<KESPLKKotlinx_coroutines_coreMutableStateFlow>)delegate __attribute__((swift_name("init(_:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<KESPLKKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
- (BOOL)compareAndSetExpect:(T _Nullable)expect update:(T _Nullable)update __attribute__((swift_name("compareAndSet(expect:update:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(T _Nullable)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (void)resetReplayCache __attribute__((swift_name("resetReplayCache()")));
- (BOOL)tryEmitValue:(T _Nullable)value __attribute__((swift_name("tryEmit(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkieKotlinOptionalSharedFlow")))
@interface KESPLKSkieKotlinOptionalSharedFlow<__covariant T> : KESPLKBase <KESPLKKotlinx_coroutines_coreSharedFlow>
@property (readonly) NSArray<id> *replayCache __attribute__((swift_name("replayCache")));
- (instancetype)initWithDelegate:(id<KESPLKKotlinx_coroutines_coreSharedFlow>)delegate __attribute__((swift_name("init(_:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<KESPLKKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkieKotlinOptionalStateFlow")))
@interface KESPLKSkieKotlinOptionalStateFlow<__covariant T> : KESPLKBase <KESPLKKotlinx_coroutines_coreStateFlow>
@property (readonly) NSArray<id> *replayCache __attribute__((swift_name("replayCache")));
@property (readonly) T _Nullable value __attribute__((swift_name("value")));
- (instancetype)initWithDelegate:(id<KESPLKKotlinx_coroutines_coreStateFlow>)delegate __attribute__((swift_name("init(_:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<KESPLKKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkieKotlinSharedFlow")))
@interface KESPLKSkieKotlinSharedFlow<__covariant T> : KESPLKBase <KESPLKKotlinx_coroutines_coreSharedFlow>
@property (readonly) NSArray<T> *replayCache __attribute__((swift_name("replayCache")));
- (instancetype)initWithDelegate:(id<KESPLKKotlinx_coroutines_coreSharedFlow>)delegate __attribute__((swift_name("init(_:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<KESPLKKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkieKotlinStateFlow")))
@interface KESPLKSkieKotlinStateFlow<__covariant T> : KESPLKBase <KESPLKKotlinx_coroutines_coreStateFlow>
@property (readonly) NSArray<T> *replayCache __attribute__((swift_name("replayCache")));
@property (readonly) T value __attribute__((swift_name("value")));
- (instancetype)initWithDelegate:(id<KESPLKKotlinx_coroutines_coreStateFlow>)delegate __attribute__((swift_name("init(_:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<KESPLKKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Skie_CancellationHandler")))
@interface KESPLKSkie_CancellationHandler : KESPLKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)cancel __attribute__((swift_name("cancel()")));
@end

__attribute__((swift_name("Skie_DispatcherDelegate")))
@protocol KESPLKSkie_DispatcherDelegate
@required
- (void)dispatchBlock:(id<KESPLKKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(block:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Skie_SuspendHandler")))
@interface KESPLKSkie_SuspendHandler : KESPLKBase
- (instancetype)initWithCancellationHandler:(KESPLKSkie_CancellationHandler *)cancellationHandler dispatcherDelegate:(id<KESPLKSkie_DispatcherDelegate>)dispatcherDelegate onResult:(void (^)(KESPLKSkie_SuspendResult *))onResult __attribute__((swift_name("init(cancellationHandler:dispatcherDelegate:onResult:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("Skie_SuspendResult")))
@interface KESPLKSkie_SuspendResult : KESPLKBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Skie_SuspendResult.Canceled")))
@interface KESPLKSkie_SuspendResultCanceled : KESPLKSkie_SuspendResult
@property (class, readonly, getter=shared) KESPLKSkie_SuspendResultCanceled *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)canceled __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Skie_SuspendResult.Error")))
@interface KESPLKSkie_SuspendResultError : KESPLKSkie_SuspendResult
@property (readonly) NSError *error __attribute__((swift_name("error")));
- (instancetype)initWithError:(NSError *)error __attribute__((swift_name("init(error:)"))) __attribute__((objc_designated_initializer));
- (KESPLKSkie_SuspendResultError *)doCopyError:(NSError *)error __attribute__((swift_name("doCopy(error:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Skie_SuspendResult.Success")))
@interface KESPLKSkie_SuspendResultSuccess : KESPLKSkie_SuspendResult
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
- (instancetype)initWithValue:(id _Nullable)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (KESPLKSkie_SuspendResultSuccess *)doCopyValue:(id _Nullable)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface KESPLKKotlinThrowable : KESPLKBase
@property (readonly) KESPLKKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KESPLKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KESPLKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
- (KESPLKKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface KESPLKKotlinException : KESPLKKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KESPLKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KESPLKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface KESPLKKotlinRuntimeException : KESPLKKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KESPLKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KESPLKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface KESPLKKotlinIllegalStateException : KESPLKKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KESPLKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KESPLKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface KESPLKKotlinCancellationException : KESPLKKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KESPLKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KESPLKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("V1connectionException")))
@interface KESPLKV1connectionException : KESPLKKotlinCancellationException
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithCause:(KESPLKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KESPLKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BTUnsupported")))
@interface KESPLKBTUnsupported : KESPLKV1connectionException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol KESPLKKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface KESPLKKotlinEnum<E> : KESPLKBase <KESPLKKotlinComparable>
@property (class, readonly, getter=companion) KESPLKKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * This enum determines how to establish a connection with the V1connection.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConnectionStrategy")))
@interface KESPLKConnectionStrategy : KESPLKKotlinEnum<KESPLKConnectionStrategy *>
@property (class, readonly) KESPLKConnectionStrategy *first __attribute__((swift_name("first")));
@property (class, readonly) KESPLKConnectionStrategy *strongest __attribute__((swift_name("strongest")));
@property (class, readonly) KESPLKConnectionStrategy *last __attribute__((swift_name("last")));
@property (class, readonly) KESPLKConnectionStrategy *lastthenstrongest __attribute__((swift_name("lastthenstrongest")));
@property (class, readonly) NSArray<KESPLKConnectionStrategy *> *entries __attribute__((swift_name("entries")));
+ (instancetype)alloc __attribute__((unavailable));

/**
 * This enum determines how to establish a connection with the V1connection.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (KESPLKKotlinArray<KESPLKConnectionStrategy *> *)values __attribute__((swift_name("values()")));
@end


/**
 * iOS implementation of the "ESPContext" contract for accessing system resources and global
 * information.
 * @constructor configures an instance with a [Boolean] flag indicating context is for an iPhone
 * simulator environment.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ESPContext")))
@interface KESPLKESPContext : KESPLKBase
@property (readonly) BOOL isSimulator __attribute__((swift_name("isSimulator")));
- (instancetype)initWithIsSimulator:(BOOL)isSimulator __attribute__((swift_name("init(isSimulator:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isBluetoothLESupported __attribute__((swift_name("isBluetoothLESupported()")));
- (BOOL)isBluetoothSupported __attribute__((swift_name("isBluetoothSupported()")));
@end

__attribute__((swift_name("ESPDevice")))
@interface KESPLKESPDevice : KESPLKBase
@property (readonly) int8_t destinationIdentifier __attribute__((swift_name("destinationIdentifier")));
@property (readonly) int8_t id __attribute__((swift_name("id")));
@property (readonly) int8_t originatorIdentifier __attribute__((swift_name("originatorIdentifier")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ESPDevice.Custom")))
@interface KESPLKESPDeviceCustom : KESPLKESPDevice
- (instancetype)initWithCustomDeviceId:(int8_t)customDeviceId __attribute__((swift_name("init(customDeviceId:)"))) __attribute__((objc_designated_initializer));
@end


/** General ESP device. Packets with this destination ID are suitable for anyone */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ESPDevice.GeneralBroadcast")))
@interface KESPLKESPDeviceGeneralBroadcast : KESPLKESPDevice
@property (class, readonly, getter=shared) KESPLKESPDeviceGeneralBroadcast *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));

/** General ESP device. Packets with this destination ID are suitable for anyone */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)generalBroadcast __attribute__((swift_name("init()")));

/** General ESP device. Packets with this destination ID are suitable for anyone */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/** General ESP device. Packets with this destination ID are suitable for anyone */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/** General ESP device. Packets with this destination ID are suitable for anyone */
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**Remote Audio ESP device */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ESPDevice.RemoteAudio")))
@interface KESPLKESPDeviceRemoteAudio : KESPLKESPDevice
@property (class, readonly, getter=shared) KESPLKESPDeviceRemoteAudio *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));

/**Remote Audio ESP device */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)remoteAudio __attribute__((swift_name("init()")));

/**Remote Audio ESP device */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**Remote Audio ESP device */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**Remote Audio ESP device */
- (NSString *)description __attribute__((swift_name("description()")));
@end


/** Represents either a Concealed Display or Tech Display ESP**/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ESPDevice.RemoteDisplay")))
@interface KESPLKESPDeviceRemoteDisplay : KESPLKESPDevice
@property (class, readonly, getter=shared) KESPLKESPDeviceRemoteDisplay *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));

/** Represents either a Concealed Display or Tech Display ESP**/
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)remoteDisplay __attribute__((swift_name("init()")));

/** Represents either a Concealed Display or Tech Display ESP**/
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/** Represents either a Concealed Display or Tech Display ESP**/
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/** Represents either a Concealed Display or Tech Display ESP**/
- (NSString *)description __attribute__((swift_name("description()")));
@end


/** Reserved ESP device ID */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ESPDevice.Reserved")))
@interface KESPLKESPDeviceReserved : KESPLKESPDevice
@property (class, readonly, getter=shared) KESPLKESPDeviceReserved *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));

/** Reserved ESP device ID */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)reserved __attribute__((swift_name("init()")));

/** Reserved ESP device ID */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/** Reserved ESP device ID */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/** Reserved ESP device ID */
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**Savvy ESP device */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ESPDevice.SAVVY")))
@interface KESPLKESPDeviceSAVVY : KESPLKESPDevice
@property (class, readonly, getter=shared) KESPLKESPDeviceSAVVY *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));

/**Savvy ESP device */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sAVVY __attribute__((swift_name("init()")));

/**Savvy ESP device */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**Savvy ESP device */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**Savvy ESP device */
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**Third party assigned ESP device #1 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ESPDevice.ThirdParty1")))
@interface KESPLKESPDeviceThirdParty1 : KESPLKESPDevice
@property (class, readonly, getter=shared) KESPLKESPDeviceThirdParty1 *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));

/**Third party assigned ESP device #1 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)thirdParty1 __attribute__((swift_name("init()")));

/**Third party assigned ESP device #1 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**Third party assigned ESP device #1 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**Third party assigned ESP device #1 */
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**Third party assigned ESP device #2 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ESPDevice.ThirdParty2")))
@interface KESPLKESPDeviceThirdParty2 : KESPLKESPDevice
@property (class, readonly, getter=shared) KESPLKESPDeviceThirdParty2 *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));

/**Third party assigned ESP device #2 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)thirdParty2 __attribute__((swift_name("init()")));

/**Third party assigned ESP device #2 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**Third party assigned ESP device #2 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**Third party assigned ESP device #2 */
- (NSString *)description __attribute__((swift_name("description()")));
@end


/** Third party assigned ESP device #3 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ESPDevice.ThirdParty3")))
@interface KESPLKESPDeviceThirdParty3 : KESPLKESPDevice
@property (class, readonly, getter=shared) KESPLKESPDeviceThirdParty3 *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));

/** Third party assigned ESP device #3 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)thirdParty3 __attribute__((swift_name("init()")));

/** Third party assigned ESP device #3 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/** Third party assigned ESP device #3 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/** Third party assigned ESP device #3 */
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**Unknown ESP Device */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ESPDevice.UnknownDevice")))
@interface KESPLKESPDeviceUnknownDevice : KESPLKESPDevice
@property (class, readonly, getter=shared) KESPLKESPDeviceUnknownDevice *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));

/**Unknown ESP Device */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unknownDevice __attribute__((swift_name("init()")));

/**Unknown ESP Device */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**Unknown ESP Device */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**Unknown ESP Device */
- (NSString *)description __attribute__((swift_name("description()")));
@end


/** V1connection ESP device */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ESPDevice.V1connection")))
@interface KESPLKESPDeviceV1connection : KESPLKESPDevice
@property (class, readonly, getter=shared) KESPLKESPDeviceV1connection *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));

/** V1connection ESP device */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)v1connection __attribute__((swift_name("init()")));

/** V1connection ESP device */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/** V1connection ESP device */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/** V1connection ESP device */
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("ESPDevice.ValentineOne")))
@interface KESPLKESPDeviceValentineOne : KESPLKESPDevice
@property (readonly) int8_t id __attribute__((swift_name("id")));
@end


/**Valentine One W/ Checksum */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ESPDevice.ValentineOneChecksum")))
@interface KESPLKESPDeviceValentineOneChecksum : KESPLKESPDeviceValentineOne
@property (class, readonly, getter=shared) KESPLKESPDeviceValentineOneChecksum *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));

/**Valentine One W/ Checksum */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)checksum __attribute__((swift_name("init()")));

/**Valentine One W/ Checksum */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**Valentine One W/ Checksum */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**Valentine One W/ Checksum */
- (NSString *)description __attribute__((swift_name("description()")));
@end


/** Legacy Valentine One */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ESPDevice.ValentineOneLegacy")))
@interface KESPLKESPDeviceValentineOneLegacy : KESPLKESPDeviceValentineOne
@property (class, readonly, getter=shared) KESPLKESPDeviceValentineOneLegacy *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));

/** Legacy Valentine One */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)legacy __attribute__((swift_name("init()")));

/** Legacy Valentine One */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/** Legacy Valentine One */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/** Legacy Valentine One */
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**Valentine One W/o Checksum */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ESPDevice.ValentineOneNoChecksum")))
@interface KESPLKESPDeviceValentineOneNoChecksum : KESPLKESPDeviceValentineOne
@property (class, readonly, getter=shared) KESPLKESPDeviceValentineOneNoChecksum *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));

/**Valentine One W/o Checksum */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)noChecksum __attribute__((swift_name("init()")));

/**Valentine One W/o Checksum */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**Valentine One W/o Checksum */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**Valentine One W/o Checksum */
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ESPDevice.ValentineOneUnknown")))
@interface KESPLKESPDeviceValentineOneUnknown : KESPLKESPDeviceValentineOne
@property (class, readonly, getter=shared) KESPLKESPDeviceValentineOneUnknown *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unknown __attribute__((swift_name("init()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * Represents the possible failure states of an ESP operation.
 *
 * This sealed interface defines a set of specific error conditions that can occur
 * when interacting with an ESP device or service.
 */
__attribute__((swift_name("ESPFailure")))
@protocol KESPLKESPFailure
@required
@end


/**
 * The target [ESPDevice] sent a [ESPPacketId.RespDataError] in response to the
 * target request.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ESPFailureDataError")))
@interface KESPLKESPFailureDataError : KESPLKBase <KESPLKESPFailure>
@property (class, readonly, getter=shared) KESPLKESPFailureDataError *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));

/**
 * The target [ESPDevice] sent a [ESPPacketId.RespDataError] in response to the
 * target request.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)dataError __attribute__((swift_name("init()")));

/**
 * The target [ESPDevice] sent a [ESPPacketId.RespDataError] in response to the
 * target request.
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * The target [ESPDevice] sent a [ESPPacketId.RespDataError] in response to the
 * target request.
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * The target [ESPDevice] sent a [ESPPacketId.RespDataError] in response to the
 * target request.
 */
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * The target [ESPDevice] didn't return an error but otherwise the request could not be
 * confirmed to have succeeded.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ESPFailureESPOperationFailed")))
@interface KESPLKESPFailureESPOperationFailed : KESPLKBase <KESPLKESPFailure>
@property (class, readonly, getter=shared) KESPLKESPFailureESPOperationFailed *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));

/**
 * The target [ESPDevice] didn't return an error but otherwise the request could not be
 * confirmed to have succeeded.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)eSPOperationFailed __attribute__((swift_name("init()")));

/**
 * The target [ESPDevice] didn't return an error but otherwise the request could not be
 * confirmed to have succeeded.
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * The target [ESPDevice] didn't return an error but otherwise the request could not be
 * confirmed to have succeeded.
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * The target [ESPDevice] didn't return an error but otherwise the request could not be
 * confirmed to have succeeded.
 */
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * The target [ESPDevice] sent a [ESPPacketId.RespSweepWriteResult] containing the index of the
 * first invalid sweep.
 * @property sweepNumber The number of the first invalid sweep.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ESPFailureInvalidSweep")))
@interface KESPLKESPFailureInvalidSweep : KESPLKBase <KESPLKESPFailure>
@property (readonly) int32_t sweepNumber __attribute__((swift_name("sweepNumber")));
- (instancetype)initWithSweepNumber:(int32_t)sweepNumber __attribute__((swift_name("init(sweepNumber:)"))) __attribute__((objc_designated_initializer));
- (KESPLKESPFailureInvalidSweep *)doCopySweepNumber:(int32_t)sweepNumber __attribute__((swift_name("doCopy(sweepNumber:)")));

/**
 * The target [ESPDevice] sent a [ESPPacketId.RespSweepWriteResult] containing the index of the
 * first invalid sweep.
 * @property sweepNumber The number of the first invalid sweep.
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * The target [ESPDevice] sent a [ESPPacketId.RespSweepWriteResult] containing the index of the
 * first invalid sweep.
 * @property sweepNumber The number of the first invalid sweep.
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * The target [ESPDevice] sent a [ESPPacketId.RespSweepWriteResult] containing the index of the
 * first invalid sweep.
 * @property sweepNumber The number of the first invalid sweep.
 */
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * Attempted to send an invalid request while the ESP bus is operating in Legacy mode
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ESPFailureLegacyMode")))
@interface KESPLKESPFailureLegacyMode : KESPLKBase <KESPLKESPFailure>
@property (class, readonly, getter=shared) KESPLKESPFailureLegacyMode *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Attempted to send an invalid request while the ESP bus is operating in Legacy mode
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)legacyMode __attribute__((swift_name("init()")));

/**
 * Attempted to send an invalid request while the ESP bus is operating in Legacy mode
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Attempted to send an invalid request while the ESP bus is operating in Legacy mode
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Attempted to send an invalid request while the ESP bus is operating in Legacy mode
 */
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * Attempted to send a request while the client is not connected to a
 * [io.github.developrofthings.kespl.bluetooth.V1connection].
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ESPFailureNotConnected")))
@interface KESPLKESPFailureNotConnected : KESPLKBase <KESPLKESPFailure>
@property (class, readonly, getter=shared) KESPLKESPFailureNotConnected *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Attempted to send a request while the client is not connected to a
 * [io.github.developrofthings.kespl.bluetooth.V1connection].
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)notConnected __attribute__((swift_name("init()")));

/**
 * Attempted to send a request while the client is not connected to a
 * [io.github.developrofthings.kespl.bluetooth.V1connection].
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Attempted to send a request while the client is not connected to a
 * [io.github.developrofthings.kespl.bluetooth.V1connection].
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Attempted to send a request while the client is not connected to a
 * [io.github.developrofthings.kespl.bluetooth.V1connection].
 */
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * The target [ESPDevice] sent a [ESPPacketId.RespRequestNotProcessed] in response to the
 * target request.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ESPFailureNotProcessed")))
@interface KESPLKESPFailureNotProcessed : KESPLKBase <KESPLKESPFailure>
@property (class, readonly, getter=shared) KESPLKESPFailureNotProcessed *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));

/**
 * The target [ESPDevice] sent a [ESPPacketId.RespRequestNotProcessed] in response to the
 * target request.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)notProcessed __attribute__((swift_name("init()")));

/**
 * The target [ESPDevice] sent a [ESPPacketId.RespRequestNotProcessed] in response to the
 * target request.
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * The target [ESPDevice] sent a [ESPPacketId.RespRequestNotProcessed] in response to the
 * target request.
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * The target [ESPDevice] sent a [ESPPacketId.RespRequestNotProcessed] in response to the
 * target request.
 */
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * The client has detected that the target request is not supported by the Valentine One.
 * This is only used when attempting to send a request to the [ESPDevice.ValentineOne.Legacy].
 *
 * @see ESPDevice.ValentineOne
 * @see ESPDevice.ValentineOne.Legacy
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ESPFailureNotSupported")))
@interface KESPLKESPFailureNotSupported : KESPLKBase <KESPLKESPFailure>
@property (class, readonly, getter=shared) KESPLKESPFailureNotSupported *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));

/**
 * The client has detected that the target request is not supported by the Valentine One.
 * This is only used when attempting to send a request to the [ESPDevice.ValentineOne.Legacy].
 *
 * @see ESPDevice.ValentineOne
 * @see ESPDevice.ValentineOne.Legacy
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)notSupported __attribute__((swift_name("init()")));

/**
 * The client has detected that the target request is not supported by the Valentine One.
 * This is only used when attempting to send a request to the [ESPDevice.ValentineOne.Legacy].
 *
 * @see ESPDevice.ValentineOne
 * @see ESPDevice.ValentineOne.Legacy
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * The client has detected that the target request is not supported by the Valentine One.
 * This is only used when attempting to send a request to the [ESPDevice.ValentineOne.Legacy].
 *
 * @see ESPDevice.ValentineOne
 * @see ESPDevice.ValentineOne.Legacy
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * The client has detected that the target request is not supported by the Valentine One.
 * This is only used when attempting to send a request to the [ESPDevice.ValentineOne.Legacy].
 *
 * @see ESPDevice.ValentineOne
 * @see ESPDevice.ValentineOne.Legacy
 */
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * The attached Valentine One is not time slicing.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ESPFailureNotTimeSlicing")))
@interface KESPLKESPFailureNotTimeSlicing : KESPLKBase <KESPLKESPFailure>
@property (class, readonly, getter=shared) KESPLKESPFailureNotTimeSlicing *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));

/**
 * The attached Valentine One is not time slicing.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)notTimeSlicing __attribute__((swift_name("init()")));

/**
 * The attached Valentine One is not time slicing.
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * The attached Valentine One is not time slicing.
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * The attached Valentine One is not time slicing.
 */
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * The operation timed out before completing.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ESPFailureTimedOut")))
@interface KESPLKESPFailureTimedOut : KESPLKBase <KESPLKESPFailure>
@property (class, readonly, getter=shared) KESPLKESPFailureTimedOut *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));

/**
 * The operation timed out before completing.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)timedOut __attribute__((swift_name("init()")));

/**
 * The operation timed out before completing.
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * The operation timed out before completing.
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * The operation timed out before completing.
 */
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * An unknown error occurred.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ESPFailureUnknown")))
@interface KESPLKESPFailureUnknown : KESPLKBase <KESPLKESPFailure>
@property (readonly) KESPLKKotlinThrowable *e __attribute__((swift_name("e")));
- (instancetype)initWithE:(KESPLKKotlinThrowable *)e __attribute__((swift_name("init(e:)"))) __attribute__((objc_designated_initializer));
- (KESPLKESPFailureUnknown *)doCopyE:(KESPLKKotlinThrowable *)e __attribute__((swift_name("doCopy(e:)")));

/**
 * An unknown error occurred.
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * An unknown error occurred.
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * An unknown error occurred.
 */
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * The Valentine One sent a [ESPPacketId.InfV1Busy] containing the target [ESPPacketId] in
 * response to the request.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ESPFailureV1Busy")))
@interface KESPLKESPFailureV1Busy : KESPLKBase <KESPLKESPFailure>
@property (class, readonly, getter=shared) KESPLKESPFailureV1Busy *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));

/**
 * The Valentine One sent a [ESPPacketId.InfV1Busy] containing the target [ESPPacketId] in
 * response to the request.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)v1Busy __attribute__((swift_name("init()")));

/**
 * The Valentine One sent a [ESPPacketId.InfV1Busy] containing the target [ESPPacketId] in
 * response to the request.
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * The Valentine One sent a [ESPPacketId.InfV1Busy] containing the target [ESPPacketId] in
 * response to the request.
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * The Valentine One sent a [ESPPacketId.InfV1Busy] containing the target [ESPPacketId] in
 * response to the request.
 */
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * The library has not determined the Valentine one in charge of the ESP bus.
 *
 * @see ESPDevice.ValentineOne
 * @see ESPDevice.ValentineOne.Unknown
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ESPFailureV1NotDetermined")))
@interface KESPLKESPFailureV1NotDetermined : KESPLKBase <KESPLKESPFailure>
@property (class, readonly, getter=shared) KESPLKESPFailureV1NotDetermined *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));

/**
 * The library has not determined the Valentine one in charge of the ESP bus.
 *
 * @see ESPDevice.ValentineOne
 * @see ESPDevice.ValentineOne.Unknown
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)v1NotDetermined __attribute__((swift_name("init()")));

/**
 * The library has not determined the Valentine one in charge of the ESP bus.
 *
 * @see ESPDevice.ValentineOne
 * @see ESPDevice.ValentineOne.Unknown
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * The library has not determined the Valentine one in charge of the ESP bus.
 *
 * @see ESPDevice.ValentineOne
 * @see ESPDevice.ValentineOne.Unknown
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * The library has not determined the Valentine one in charge of the ESP bus.
 *
 * @see ESPDevice.ValentineOne
 * @see ESPDevice.ValentineOne.Unknown
 */
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("KotlinError")))
@interface KESPLKKotlinError : KESPLKKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KESPLKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KESPLKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ESPOutOfMemoryError")))
@interface KESPLKESPOutOfMemoryError : KESPLKKotlinError
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithCause:(KESPLKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KESPLKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((swift_name("ESPPacketId")))
@interface KESPLKESPPacketId : KESPLKBase
@property (readonly) int8_t id __attribute__((swift_name("id")));
@end


/**Packet Identifier for InfDisplayData */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ESPPacketId.InfDisplayData")))
@interface KESPLKESPPacketIdInfDisplayData : KESPLKESPPacketId
@property (class, readonly, getter=shared) KESPLKESPPacketIdInfDisplayData *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));

/**Packet Identifier for InfDisplayData */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)infDisplayData __attribute__((swift_name("init()")));

/**Packet Identifier for InfDisplayData */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**Packet Identifier for InfDisplayData */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**Packet Identifier for InfDisplayData */
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**Packet Identifier for InfV1Busy */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ESPPacketId.InfV1Busy")))
@interface KESPLKESPPacketIdInfV1Busy : KESPLKESPPacketId
@property (class, readonly, getter=shared) KESPLKESPPacketIdInfV1Busy *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));

/**Packet Identifier for InfV1Busy */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)infV1Busy __attribute__((swift_name("init()")));

/**Packet Identifier for InfV1Busy */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**Packet Identifier for InfV1Busy */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**Packet Identifier for InfV1Busy */
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * Packet Identifier used to request that the Valentine One stops waiting for the silent period
 * described in Table 9.4, which causes the Valentine One to play the audio for the primary
 * alert sooner than it normally would.
 *
 * @since V4.1035
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ESPPacketId.ReqAbortAudioDelay")))
@interface KESPLKESPPacketIdReqAbortAudioDelay : KESPLKESPPacketId
@property (class, readonly, getter=shared) KESPLKESPPacketIdReqAbortAudioDelay *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Packet Identifier used to request that the Valentine One stops waiting for the silent period
 * described in Table 9.4, which causes the Valentine One to play the audio for the primary
 * alert sooner than it normally would.
 *
 * @since V4.1035
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)reqAbortAudioDelay __attribute__((swift_name("init()")));

/**
 * Packet Identifier used to request that the Valentine One stops waiting for the silent period
 * described in Table 9.4, which causes the Valentine One to play the audio for the primary
 * alert sooner than it normally would.
 *
 * @since V4.1035
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Packet Identifier used to request that the Valentine One stops waiting for the silent period
 * described in Table 9.4, which causes the Valentine One to play the audio for the primary
 * alert sooner than it normally would.
 *
 * @since V4.1035
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Packet Identifier used to request that the Valentine One stops waiting for the silent period
 * described in Table 9.4, which causes the Valentine One to play the audio for the primary
 * alert sooner than it normally would.
 *
 * @since V4.1035
 */
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**Packet Identifier for all Sweep Definiton Request */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ESPPacketId.ReqAllSweepDefinitions")))
@interface KESPLKESPPacketIdReqAllSweepDefinitions : KESPLKESPPacketId
@property (class, readonly, getter=shared) KESPLKESPPacketIdReqAllSweepDefinitions *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));

/**Packet Identifier for all Sweep Definiton Request */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)reqAllSweepDefinitions __attribute__((swift_name("init()")));

/**Packet Identifier for all Sweep Definiton Request */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**Packet Identifier for all Sweep Definiton Request */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**Packet Identifier for all Sweep Definiton Request */
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * Packet Identifier used to request both the current and saved volume settings in the Valentine
 * One
 *
 * @since V4.1037
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ESPPacketId.ReqAllVolume")))
@interface KESPLKESPPacketIdReqAllVolume : KESPLKESPPacketId
@property (class, readonly, getter=shared) KESPLKESPPacketIdReqAllVolume *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Packet Identifier used to request both the current and saved volume settings in the Valentine
 * One
 *
 * @since V4.1037
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)reqAllVolume __attribute__((swift_name("init()")));

/**
 * Packet Identifier used to request both the current and saved volume settings in the Valentine
 * One
 *
 * @since V4.1037
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Packet Identifier used to request both the current and saved volume settings in the Valentine
 * One
 *
 * @since V4.1037
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Packet Identifier used to request both the current and saved volume settings in the Valentine
 * One
 *
 * @since V4.1037
 */
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**Packet Identifier for Battery Voltage Request */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ESPPacketId.ReqBatteryVoltage")))
@interface KESPLKESPPacketIdReqBatteryVoltage : KESPLKESPPacketId
@property (class, readonly, getter=shared) KESPLKESPPacketIdReqBatteryVoltage *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));

/**Packet Identifier for Battery Voltage Request */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)reqBatteryVoltage __attribute__((swift_name("init()")));

/**Packet Identifier for Battery Voltage Request */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**Packet Identifier for Battery Voltage Request */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**Packet Identifier for Battery Voltage Request */
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**Packet Identifier for Change Mode Request */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ESPPacketId.ReqChangeMode")))
@interface KESPLKESPPacketIdReqChangeMode : KESPLKESPPacketId
@property (class, readonly, getter=shared) KESPLKESPPacketIdReqChangeMode *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));

/**Packet Identifier for Change Mode Request */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)reqChangeMode __attribute__((swift_name("init()")));

/**Packet Identifier for Change Mode Request */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**Packet Identifier for Change Mode Request */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**Packet Identifier for Change Mode Request */
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**Packet Identifier for the current volume settings Request */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ESPPacketId.ReqCurrentVolume")))
@interface KESPLKESPPacketIdReqCurrentVolume : KESPLKESPPacketId
@property (class, readonly, getter=shared) KESPLKESPPacketIdReqCurrentVolume *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));

/**Packet Identifier for the current volume settings Request */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)reqCurrentVolume __attribute__((swift_name("init()")));

/**Packet Identifier for the current volume settings Request */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**Packet Identifier for the current volume settings Request */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**Packet Identifier for the current volume settings Request */
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**Packet Identifier for Default Sweep Definitions Request */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ESPPacketId.ReqDefaultSweepDefinitions")))
@interface KESPLKESPPacketIdReqDefaultSweepDefinitions : KESPLKESPPacketId
@property (class, readonly, getter=shared) KESPLKESPPacketIdReqDefaultSweepDefinitions *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));

/**Packet Identifier for Default Sweep Definitions Request */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)reqDefaultSweepDefinitions __attribute__((swift_name("init()")));

/**Packet Identifier for Default Sweep Definitions Request */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**Packet Identifier for Default Sweep Definitions Request */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**Packet Identifier for Default Sweep Definitions Request */
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**Packet Identifier for Default Sweep Request */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ESPPacketId.ReqDefaultSweeps")))
@interface KESPLKESPPacketIdReqDefaultSweeps : KESPLKESPPacketId
@property (class, readonly, getter=shared) KESPLKESPPacketIdReqDefaultSweeps *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));

/**Packet Identifier for Default Sweep Request */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)reqDefaultSweeps __attribute__((swift_name("init()")));

/**Packet Identifier for Default Sweep Request */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**Packet Identifier for Default Sweep Request */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**Packet Identifier for Default Sweep Request */
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * Packet Identifier used to request that the Valentine One displays the current volume. This is
 * equivalent to tapping one of the volume buttons on the V1 Gen2.
 *
 * @since V4.1036
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ESPPacketId.ReqDisplayCurrentVolume")))
@interface KESPLKESPPacketIdReqDisplayCurrentVolume : KESPLKESPPacketId
@property (class, readonly, getter=shared) KESPLKESPPacketIdReqDisplayCurrentVolume *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Packet Identifier used to request that the Valentine One displays the current volume. This is
 * equivalent to tapping one of the volume buttons on the V1 Gen2.
 *
 * @since V4.1036
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)reqDisplayCurrentVolume __attribute__((swift_name("init()")));

/**
 * Packet Identifier used to request that the Valentine One displays the current volume. This is
 * equivalent to tapping one of the volume buttons on the V1 Gen2.
 *
 * @since V4.1036
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Packet Identifier used to request that the Valentine One displays the current volume. This is
 * equivalent to tapping one of the volume buttons on the V1 Gen2.
 *
 * @since V4.1036
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Packet Identifier used to request that the Valentine One displays the current volume. This is
 * equivalent to tapping one of the volume buttons on the V1 Gen2.
 *
 * @since V4.1036
 */
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**Packet Identifier for Factory Default Request */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ESPPacketId.ReqFactoryDefault")))
@interface KESPLKESPPacketIdReqFactoryDefault : KESPLKESPPacketId
@property (class, readonly, getter=shared) KESPLKESPPacketIdReqFactoryDefault *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));

/**Packet Identifier for Factory Default Request */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)reqFactoryDefault __attribute__((swift_name("init()")));

/**Packet Identifier for Factory Default Request */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**Packet Identifier for Factory Default Request */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**Packet Identifier for Factory Default Request */
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**Packet Identifier for Max Sweep Index Request */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ESPPacketId.ReqMaxSweepIndex")))
@interface KESPLKESPPacketIdReqMaxSweepIndex : KESPLKESPPacketId
@property (class, readonly, getter=shared) KESPLKESPPacketIdReqMaxSweepIndex *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));

/**Packet Identifier for Max Sweep Index Request */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)reqMaxSweepIndex __attribute__((swift_name("init()")));

/**Packet Identifier for Max Sweep Index Request */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**Packet Identifier for Max Sweep Index Request */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**Packet Identifier for Max Sweep Index Request */
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**Packet Identifier for Mute Off Request */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ESPPacketId.ReqMuteOff")))
@interface KESPLKESPPacketIdReqMuteOff : KESPLKESPPacketId
@property (class, readonly, getter=shared) KESPLKESPPacketIdReqMuteOff *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));

/**Packet Identifier for Mute Off Request */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)reqMuteOff __attribute__((swift_name("init()")));

/**Packet Identifier for Mute Off Request */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**Packet Identifier for Mute Off Request */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**Packet Identifier for Mute Off Request */
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**Packet Identifier for Mute On Request */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ESPPacketId.ReqMuteOn")))
@interface KESPLKESPPacketIdReqMuteOn : KESPLKESPPacketId
@property (class, readonly, getter=shared) KESPLKESPPacketIdReqMuteOn *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));

/**Packet Identifier for Mute On Request */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)reqMuteOn __attribute__((swift_name("init()")));

/**Packet Identifier for Mute On Request */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**Packet Identifier for Mute On Request */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**Packet Identifier for Mute On Request */
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**Packet Identifier for Override Thumbwheel Request */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ESPPacketId.ReqOverrideThumbwheel")))
@interface KESPLKESPPacketIdReqOverrideThumbwheel : KESPLKESPPacketId
@property (class, readonly, getter=shared) KESPLKESPPacketIdReqOverrideThumbwheel *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));

/**Packet Identifier for Override Thumbwheel Request */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)reqOverrideThumbwheel __attribute__((swift_name("init()")));

/**Packet Identifier for Override Thumbwheel Request */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**Packet Identifier for Override Thumbwheel Request */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**Packet Identifier for Override Thumbwheel Request */
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**Packet Identifier for SAVVYStatus Request */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ESPPacketId.ReqSavvyStatus")))
@interface KESPLKESPPacketIdReqSavvyStatus : KESPLKESPPacketId
@property (class, readonly, getter=shared) KESPLKESPPacketIdReqSavvyStatus *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));

/**Packet Identifier for SAVVYStatus Request */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)reqSavvyStatus __attribute__((swift_name("init()")));

/**Packet Identifier for SAVVYStatus Request */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**Packet Identifier for SAVVYStatus Request */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**Packet Identifier for SAVVYStatus Request */
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**Packet Identifier for Serial Number Request */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ESPPacketId.ReqSerialNumber")))
@interface KESPLKESPPacketIdReqSerialNumber : KESPLKESPPacketId
@property (class, readonly, getter=shared) KESPLKESPPacketIdReqSerialNumber *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));

/**Packet Identifier for Serial Number Request */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)reqSerialNumber __attribute__((swift_name("init()")));

/**Packet Identifier for Serial Number Request */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**Packet Identifier for Serial Number Request */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**Packet Identifier for Serial Number Request */
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**Packet Identifier for Savvy Unmute Enable Request */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ESPPacketId.ReqSetSavvyUnmuteEnable")))
@interface KESPLKESPPacketIdReqSetSavvyUnmuteEnable : KESPLKESPPacketId
@property (class, readonly, getter=shared) KESPLKESPPacketIdReqSetSavvyUnmuteEnable *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));

/**Packet Identifier for Savvy Unmute Enable Request */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)reqSetSavvyUnmuteEnable __attribute__((swift_name("init()")));

/**Packet Identifier for Savvy Unmute Enable Request */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**Packet Identifier for Savvy Unmute Enable Request */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**Packet Identifier for Savvy Unmute Enable Request */
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**Packet Identifier for Start Alert Data Request */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ESPPacketId.ReqStartAlertData")))
@interface KESPLKESPPacketIdReqStartAlertData : KESPLKESPPacketId
@property (class, readonly, getter=shared) KESPLKESPPacketIdReqStartAlertData *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));

/**Packet Identifier for Start Alert Data Request */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)reqStartAlertData __attribute__((swift_name("init()")));

/**Packet Identifier for Start Alert Data Request */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**Packet Identifier for Start Alert Data Request */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**Packet Identifier for Start Alert Data Request */
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**Packet Identifier for Stop Alert Data Request */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ESPPacketId.ReqStopAlertData")))
@interface KESPLKESPPacketIdReqStopAlertData : KESPLKESPPacketId
@property (class, readonly, getter=shared) KESPLKESPPacketIdReqStopAlertData *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));

/**Packet Identifier for Stop Alert Data Request */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)reqStopAlertData __attribute__((swift_name("init()")));

/**Packet Identifier for Stop Alert Data Request */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**Packet Identifier for Stop Alert Data Request */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**Packet Identifier for Stop Alert Data Request */
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**Packet Identifier for Sweep Sections Request */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ESPPacketId.ReqSweepSections")))
@interface KESPLKESPPacketIdReqSweepSections : KESPLKESPPacketId
@property (class, readonly, getter=shared) KESPLKESPPacketIdReqSweepSections *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));

/**Packet Identifier for Sweep Sections Request */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)reqSweepSections __attribute__((swift_name("init()")));

/**Packet Identifier for Sweep Sections Request */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**Packet Identifier for Sweep Sections Request */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**Packet Identifier for Sweep Sections Request */
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**Packet Identifier for Turn Off Main Display Request */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ESPPacketId.ReqTurnOffMainDisplay")))
@interface KESPLKESPPacketIdReqTurnOffMainDisplay : KESPLKESPPacketId
@property (class, readonly, getter=shared) KESPLKESPPacketIdReqTurnOffMainDisplay *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));

/**Packet Identifier for Turn Off Main Display Request */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)reqTurnOffMainDisplay __attribute__((swift_name("init()")));

/**Packet Identifier for Turn Off Main Display Request */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**Packet Identifier for Turn Off Main Display Request */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**Packet Identifier for Turn Off Main Display Request */
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**Packet Identifier for Turn On Main Display Request */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ESPPacketId.ReqTurnOnMainDisplay")))
@interface KESPLKESPPacketIdReqTurnOnMainDisplay : KESPLKESPPacketId
@property (class, readonly, getter=shared) KESPLKESPPacketIdReqTurnOnMainDisplay *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));

/**Packet Identifier for Turn On Main Display Request */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)reqTurnOnMainDisplay __attribute__((swift_name("init()")));

/**Packet Identifier for Turn On Main Display Request */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**Packet Identifier for Turn On Main Display Request */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**Packet Identifier for Turn On Main Display Request */
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**Packet Identifier for UserBytes Request */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ESPPacketId.ReqUserBytes")))
@interface KESPLKESPPacketIdReqUserBytes : KESPLKESPPacketId
@property (class, readonly, getter=shared) KESPLKESPPacketIdReqUserBytes *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));

/**Packet Identifier for UserBytes Request */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)reqUserBytes __attribute__((swift_name("init()")));

/**Packet Identifier for UserBytes Request */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**Packet Identifier for UserBytes Request */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**Packet Identifier for UserBytes Request */
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**Packet Identifier for Vehicle Speed Request */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ESPPacketId.ReqVehicleSpeed")))
@interface KESPLKESPPacketIdReqVehicleSpeed : KESPLKESPPacketId
@property (class, readonly, getter=shared) KESPLKESPPacketIdReqVehicleSpeed *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));

/**Packet Identifier for Vehicle Speed Request */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)reqVehicleSpeed __attribute__((swift_name("init()")));

/**Packet Identifier for Vehicle Speed Request */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**Packet Identifier for Vehicle Speed Request */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**Packet Identifier for Vehicle Speed Request */
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**Packet Identifier for Version Request */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ESPPacketId.ReqVersion")))
@interface KESPLKESPPacketIdReqVersion : KESPLKESPPacketId
@property (class, readonly, getter=shared) KESPLKESPPacketIdReqVersion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));

/**Packet Identifier for Version Request */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)reqVersion __attribute__((swift_name("init()")));

/**Packet Identifier for Version Request */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**Packet Identifier for Version Request */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**Packet Identifier for Version Request */
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**Packet Identifier for writing a Sweep Definition Request */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ESPPacketId.ReqWriteSweepDefinition")))
@interface KESPLKESPPacketIdReqWriteSweepDefinition : KESPLKESPPacketId
@property (class, readonly, getter=shared) KESPLKESPPacketIdReqWriteSweepDefinition *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));

/**Packet Identifier for writing a Sweep Definition Request */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)reqWriteSweepDefinition __attribute__((swift_name("init()")));

/**Packet Identifier for writing a Sweep Definition Request */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**Packet Identifier for writing a Sweep Definition Request */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**Packet Identifier for writing a Sweep Definition Request */
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**Packet Identifier for Write UserBytes Request */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ESPPacketId.ReqWriteUserBytes")))
@interface KESPLKESPPacketIdReqWriteUserBytes : KESPLKESPPacketId
@property (class, readonly, getter=shared) KESPLKESPPacketIdReqWriteUserBytes *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));

/**Packet Identifier for Write UserBytes Request */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)reqWriteUserBytes __attribute__((swift_name("init()")));

/**Packet Identifier for Write UserBytes Request */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**Packet Identifier for Write UserBytes Request */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**Packet Identifier for Write UserBytes Request */
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**Packet Identifier for updating the current volume settings Request */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ESPPacketId.ReqWriteVolume")))
@interface KESPLKESPPacketIdReqWriteVolume : KESPLKESPPacketId
@property (class, readonly, getter=shared) KESPLKESPPacketIdReqWriteVolume *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));

/**Packet Identifier for updating the current volume settings Request */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)reqWriteVolume __attribute__((swift_name("init()")));

/**Packet Identifier for updating the current volume settings Request */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**Packet Identifier for updating the current volume settings Request */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**Packet Identifier for updating the current volume settings Request */
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**Packet Identifier for Alert Data Response */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ESPPacketId.RespAlertData")))
@interface KESPLKESPPacketIdRespAlertData : KESPLKESPPacketId
@property (class, readonly, getter=shared) KESPLKESPPacketIdRespAlertData *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));

/**Packet Identifier for Alert Data Response */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)respAlertData __attribute__((swift_name("init()")));

/**Packet Identifier for Alert Data Response */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**Packet Identifier for Alert Data Response */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**Packet Identifier for Alert Data Response */
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * Packet Identifier used by the Valentine One to respond to a [ReqAllVolume] request.
 *
 * @since V4.1037
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ESPPacketId.RespAllVolume")))
@interface KESPLKESPPacketIdRespAllVolume : KESPLKESPPacketId
@property (class, readonly, getter=shared) KESPLKESPPacketIdRespAllVolume *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Packet Identifier used by the Valentine One to respond to a [ReqAllVolume] request.
 *
 * @since V4.1037
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)respAllVolume __attribute__((swift_name("init()")));

/**
 * Packet Identifier used by the Valentine One to respond to a [ReqAllVolume] request.
 *
 * @since V4.1037
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Packet Identifier used by the Valentine One to respond to a [ReqAllVolume] request.
 *
 * @since V4.1037
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Packet Identifier used by the Valentine One to respond to a [ReqAllVolume] request.
 *
 * @since V4.1037
 */
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**Packet Identifier for Battery Voltage Response */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ESPPacketId.RespBatteryVoltage")))
@interface KESPLKESPPacketIdRespBatteryVoltage : KESPLKESPPacketId
@property (class, readonly, getter=shared) KESPLKESPPacketIdRespBatteryVoltage *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));

/**Packet Identifier for Battery Voltage Response */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)respBatteryVoltage __attribute__((swift_name("init()")));

/**Packet Identifier for Battery Voltage Response */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**Packet Identifier for Battery Voltage Response */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**Packet Identifier for Battery Voltage Response */
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**Packet Identifier for the current volume setting Response */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ESPPacketId.RespCurrentVolume")))
@interface KESPLKESPPacketIdRespCurrentVolume : KESPLKESPPacketId
@property (class, readonly, getter=shared) KESPLKESPPacketIdRespCurrentVolume *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));

/**Packet Identifier for the current volume setting Response */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)respCurrentVolume __attribute__((swift_name("init()")));

/**Packet Identifier for the current volume setting Response */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**Packet Identifier for the current volume setting Response */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**Packet Identifier for the current volume setting Response */
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**Packet Identifier for Data Error Response */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ESPPacketId.RespDataError")))
@interface KESPLKESPPacketIdRespDataError : KESPLKESPPacketId
@property (class, readonly, getter=shared) KESPLKESPPacketIdRespDataError *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));

/**Packet Identifier for Data Error Response */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)respDataError __attribute__((swift_name("init()")));

/**Packet Identifier for Data Error Response */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**Packet Identifier for Data Error Response */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**Packet Identifier for Data Error Response */
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**Packet Identifier for Response Data */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ESPPacketId.RespDataReceived")))
@interface KESPLKESPPacketIdRespDataReceived : KESPLKESPPacketId
@property (class, readonly, getter=shared) KESPLKESPPacketIdRespDataReceived *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));

/**Packet Identifier for Response Data */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)respDataReceived __attribute__((swift_name("init()")));

/**Packet Identifier for Response Data */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**Packet Identifier for Response Data */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**Packet Identifier for Response Data */
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**Packet Identifier for Default Sweep Definitions  Response */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ESPPacketId.RespDefaultSweepDefinitions")))
@interface KESPLKESPPacketIdRespDefaultSweepDefinitions : KESPLKESPPacketId
@property (class, readonly, getter=shared) KESPLKESPPacketIdRespDefaultSweepDefinitions *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));

/**Packet Identifier for Default Sweep Definitions  Response */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)respDefaultSweepDefinitions __attribute__((swift_name("init()")));

/**Packet Identifier for Default Sweep Definitions  Response */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**Packet Identifier for Default Sweep Definitions  Response */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**Packet Identifier for Default Sweep Definitions  Response */
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**Packet Identifier for Max Sweep Index Response */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ESPPacketId.RespMaxSweepIndex")))
@interface KESPLKESPPacketIdRespMaxSweepIndex : KESPLKESPPacketId
@property (class, readonly, getter=shared) KESPLKESPPacketIdRespMaxSweepIndex *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));

/**Packet Identifier for Max Sweep Index Response */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)respMaxSweepIndex __attribute__((swift_name("init()")));

/**Packet Identifier for Max Sweep Index Response */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**Packet Identifier for Max Sweep Index Response */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**Packet Identifier for Max Sweep Index Response */
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**Packet Identifier for Request Not Processed Response */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ESPPacketId.RespRequestNotProcessed")))
@interface KESPLKESPPacketIdRespRequestNotProcessed : KESPLKESPPacketId
@property (class, readonly, getter=shared) KESPLKESPPacketIdRespRequestNotProcessed *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));

/**Packet Identifier for Request Not Processed Response */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)respRequestNotProcessed __attribute__((swift_name("init()")));

/**Packet Identifier for Request Not Processed Response */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**Packet Identifier for Request Not Processed Response */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**Packet Identifier for Request Not Processed Response */
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**Packet Identifier for Savvy Status Response */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ESPPacketId.RespSavvyStatus")))
@interface KESPLKESPPacketIdRespSavvyStatus : KESPLKESPPacketId
@property (class, readonly, getter=shared) KESPLKESPPacketIdRespSavvyStatus *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));

/**Packet Identifier for Savvy Status Response */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)respSavvyStatus __attribute__((swift_name("init()")));

/**Packet Identifier for Savvy Status Response */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**Packet Identifier for Savvy Status Response */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**Packet Identifier for Savvy Status Response */
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**Packet Identifier for Serial Number Response */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ESPPacketId.RespSerialNumber")))
@interface KESPLKESPPacketIdRespSerialNumber : KESPLKESPPacketId
@property (class, readonly, getter=shared) KESPLKESPPacketIdRespSerialNumber *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));

/**Packet Identifier for Serial Number Response */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)respSerialNumber __attribute__((swift_name("init()")));

/**Packet Identifier for Serial Number Response */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**Packet Identifier for Serial Number Response */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**Packet Identifier for Serial Number Response */
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**Packet Identifier for Sweep Definition Response */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ESPPacketId.RespSweepDefinition")))
@interface KESPLKESPPacketIdRespSweepDefinition : KESPLKESPPacketId
@property (class, readonly, getter=shared) KESPLKESPPacketIdRespSweepDefinition *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));

/**Packet Identifier for Sweep Definition Response */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)respSweepDefinition __attribute__((swift_name("init()")));

/**Packet Identifier for Sweep Definition Response */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**Packet Identifier for Sweep Definition Response */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**Packet Identifier for Sweep Definition Response */
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**Packet Identifier for Sweep Sections Response */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ESPPacketId.RespSweepSections")))
@interface KESPLKESPPacketIdRespSweepSections : KESPLKESPPacketId
@property (class, readonly, getter=shared) KESPLKESPPacketIdRespSweepSections *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));

/**Packet Identifier for Sweep Sections Response */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)respSweepSections __attribute__((swift_name("init()")));

/**Packet Identifier for Sweep Sections Response */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**Packet Identifier for Sweep Sections Response */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**Packet Identifier for Sweep Sections Response */
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**Packet Identifier for Sweep Write Result Response */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ESPPacketId.RespSweepWriteResult")))
@interface KESPLKESPPacketIdRespSweepWriteResult : KESPLKESPPacketId
@property (class, readonly, getter=shared) KESPLKESPPacketIdRespSweepWriteResult *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));

/**Packet Identifier for Sweep Write Result Response */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)respSweepWriteResult __attribute__((swift_name("init()")));

/**Packet Identifier for Sweep Write Result Response */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**Packet Identifier for Sweep Write Result Response */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**Packet Identifier for Sweep Write Result Response */
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**Packet Identifier for Unsupported Packet Response */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ESPPacketId.RespUnsupportedPacket")))
@interface KESPLKESPPacketIdRespUnsupportedPacket : KESPLKESPPacketId
@property (class, readonly, getter=shared) KESPLKESPPacketIdRespUnsupportedPacket *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));

/**Packet Identifier for Unsupported Packet Response */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)respUnsupportedPacket __attribute__((swift_name("init()")));

/**Packet Identifier for Unsupported Packet Response */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**Packet Identifier for Unsupported Packet Response */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**Packet Identifier for Unsupported Packet Response */
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**Packet Identifier for UserBytes Response */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ESPPacketId.RespUserBytes")))
@interface KESPLKESPPacketIdRespUserBytes : KESPLKESPPacketId
@property (class, readonly, getter=shared) KESPLKESPPacketIdRespUserBytes *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));

/**Packet Identifier for UserBytes Response */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)respUserBytes __attribute__((swift_name("init()")));

/**Packet Identifier for UserBytes Response */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**Packet Identifier for UserBytes Response */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**Packet Identifier for UserBytes Response */
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**Packet Identifier for Vehicle Speed Response */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ESPPacketId.RespVehicleSpeed")))
@interface KESPLKESPPacketIdRespVehicleSpeed : KESPLKESPPacketId
@property (class, readonly, getter=shared) KESPLKESPPacketIdRespVehicleSpeed *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));

/**Packet Identifier for Vehicle Speed Response */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)respVehicleSpeed __attribute__((swift_name("init()")));

/**Packet Identifier for Vehicle Speed Response */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**Packet Identifier for Vehicle Speed Response */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**Packet Identifier for Vehicle Speed Response */
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**Packet Identifier for Version Response */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ESPPacketId.RespVersion")))
@interface KESPLKESPPacketIdRespVersion : KESPLKESPPacketId
@property (class, readonly, getter=shared) KESPLKESPPacketIdRespVersion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));

/**Packet Identifier for Version Response */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)respVersion __attribute__((swift_name("init()")));

/**Packet Identifier for Version Response */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**Packet Identifier for Version Response */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**Packet Identifier for Version Response */
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**Packet Identifier for Unknown Packet */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ESPPacketId.UnknownPacketType")))
@interface KESPLKESPPacketIdUnknownPacketType : KESPLKESPPacketId
@property (class, readonly, getter=shared) KESPLKESPPacketIdUnknownPacketType *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));

/**Packet Identifier for Unknown Packet */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unknownPacketType __attribute__((swift_name("init()")));

/**Packet Identifier for Unknown Packet */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**Packet Identifier for Unknown Packet */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**Packet Identifier for Unknown Packet */
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * A sealed interface representing the result of an ESP operation.
 * It can either be a [Success] containing the response data or a [Failure] containing an error.
 *
 * @param ESPResponseType The type of the successful response data.
 * @param ErrorType The type of the error data in case of failure.
 */
__attribute__((swift_name("ESPResponse")))
@protocol KESPLKESPResponse
@required
@end


/**
 * Represents a failed ESP operation.
 *
 * @param ErrorType The type of the error data.
 * @property data The error information associated with the failure.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ESPResponseFailure")))
@interface KESPLKESPResponseFailure<ErrorType> : KESPLKBase <KESPLKESPResponse>
@property (readonly) ErrorType _Nullable data __attribute__((swift_name("data")));
- (instancetype)initWithData:(ErrorType _Nullable)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
- (KESPLKESPResponseFailure<ErrorType> *)doCopyData:(ErrorType _Nullable)data __attribute__((swift_name("doCopy(data:)")));

/**
 * Represents a failed ESP operation.
 *
 * @param ErrorType The type of the error data.
 * @property data The error information associated with the failure.
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Represents a failed ESP operation.
 *
 * @param ErrorType The type of the error data.
 * @property data The error information associated with the failure.
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Represents a failed ESP operation.
 *
 * @param ErrorType The type of the error data.
 * @property data The error information associated with the failure.
 */
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * Represents a successful ESP operation.
 *
 * @param ESPResponseType The type of the successful response data.
 * @property data The actual response data from the ESP operation.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ESPResponseSuccess")))
@interface KESPLKESPResponseSuccess<ESPResponseType> : KESPLKBase <KESPLKESPResponse>
@property (readonly) ESPResponseType _Nullable data __attribute__((swift_name("data")));
- (instancetype)initWithData:(ESPResponseType _Nullable)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
- (KESPLKESPResponseSuccess<ESPResponseType> *)doCopyData:(ESPResponseType _Nullable)data __attribute__((swift_name("doCopy(data:)")));

/**
 * Represents a successful ESP operation.
 *
 * @param ESPResponseType The type of the successful response data.
 * @property data The actual response data from the ESP operation.
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Represents a successful ESP operation.
 *
 * @param ESPResponseType The type of the successful response data.
 * @property data The actual response data from the ESP operation.
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Represents a successful ESP operation.
 *
 * @param ESPResponseType The type of the successful response data.
 * @property data The actual response data from the ESP operation.
 */
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("IESPClient")))
@protocol KESPLKIESPClient
@required

/**
 * Requests that the connected Valentine One stops waiting for silent period. This will
 * result in the Valentine One playing audio for the primary alert sooner than it normally
 * would.
 *
 * This function is only intended for use with the V1 Gen2. For older V1 models, this
 * request is not be supported.
 *
 * @param timeout The maximum duration to wait for the Valentine One to acknowledge
 *                the command. Defaults to [defaultRequestTimeout].
 * @return An [ESPResponse] indicating the outcome:
 * - [ESPResponse.Success] with `Unit` if the command was successfully sent and acknowledged
 *   by the V1.
 * - [ESPResponse.Failure] containing an [ESPFailure] if the request fails or times out.
 *   Possible failures include:
 *   - [ESPFailure.TimedOut]: The V1 did not respond within the specified `timeout`.
 *   - [ESPFailure.NotConnected]: The client isn't connected to a [V1connection].
 *   - [ESPFailure.NotSupported]: The connected V1 does not support this command
 *   (e.g., older V1 models).
 *
 * @since V4.1035
 * @see ESPPacketId.ReqAbortAudioDelay For the underlying ESP request.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)abortAudioDelayTimeout:(int64_t)timeout completionHandler:(void (^)(id<KESPLKESPResponse> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("abortAudioDelay(timeout:completionHandler:)")));

/**
 * Sets whether the client should persist the last connected [V1connection].
 * When `persist` is `true`, the details of successfully connected devices will be saved,
 * allowing for quicker reconnections using [ConnectionStrategy.Last] or
 * [ConnectionStrategy.LastThenStrongest].
 *
 * If `persist` is `false`, any previously stored last device information will be cleared,
 * and future connections will not save their details.
 *
 * This setting is useful for scenarios where a user frequently connects to the same device
 * and wants to minimize the connection setup time.
 *
 * @param persist `true` to enable persisting of the last connected device, `false` to disable
 * and clear any existing persisted device.
 *
 * @see clearPersistedLastDevices To explicitly clear stored device information without changing
 * the persistence setting.
 * @see ConnectionStrategy.Last For connecting only to the last known device.
 * @see ConnectionStrategy.LastThenStrongest For trying the last known device first.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)canPersistLastDevicesPersist:(BOOL)persist completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("canPersistLastDevices(persist:completionHandler:)")));

/**
 * Requests the connected Valentine One changes it's operating mode (e.g., All Bogeys, Logic,
 * Advanced Logic).
 *
 * This function sends a request to the V1 to switch to the specified `mode`.
 * It can optionally verify that the mode change was successful by reading back the V1's
 * current mode from its display data.
 *
 * @param mode The desired [V1Mode] to set on the Valentine One.
 * @param timeout The maximum duration to wait for the mode change to complete (and be
 * verified, if `verifyMode` is `true`). Defaults to [defaultRequestTimeout].
 * @return An [ESPResponse] indicating the outcome:
 * - [ESPResponse.Success] with `Unit` if the mode was successfully changed (and verified,
 *   if applicable).
 * - [ESPResponse.Failure] containing an [ESPFailure] if the operation failed. Possible
 *   failures include:
 *   - [ESPFailure.TimedOut]: The V1 did not respond or confirm the mode change within
 *     the specified `timeout`.
 *   - [ESPFailure.NotConnected]: The client isn't connected to a [V1connection].
 *   - [ESPFailure.NotSupported]: The connected V1 does not support mode changes via ESP.
 *   - [ESPFailure.ESPOperationFailed]: If `verifyMode` is `true` and the V1's mode did not
 *     change to the requested `mode`.
 *
 * @see V1Mode For the different operating modes available.
 * @see infDisplayDataMode For a flow of the V1's current operating mode.
 * @see ESPResponse For the sealed class representing the outcome of ESP operations.
 * @see ESPFailure For possible error types.
 * @see defaultRequestTimeout For the default timeout value.
 * @see ESPPacketId.ReqChangeMode For the underlying ESP request.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)changeModeMode:(KESPLKV1Mode *)mode timeout:(int64_t)timeout completionHandler:(void (^)(id<KESPLKESPResponse> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("changeMode(mode:timeout:completionHandler:)")));

/**
 * Clears any persisted information about the last connected [V1connection].
 *
 * This is useful if the user wishes to remove the stored device details without necessarily
 * disabling the persistence feature itself (controlled by [canPersistLastDevices]). After
 * calling this, connection strategies like [ConnectionStrategy.Last] or
 * [ConnectionStrategy.LastThenStrongest] will behave as if no device was previously connected
 * until a new connection is successfully established and persisted (if persistence is enabled).
 *
 * @see canPersistLastDevices To control whether the last device is persisted.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)clearPersistedLastDevicesWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("clearPersistedLastDevices(completionHandler:)")));

/**
 * Attempts to connect to a Valentine One device using the specified connection strategy and
 * scan duration.
 *
 * @param connectionStrategy The strategy to use when selecting a device to connect to
 * (e.g., [ConnectionStrategy.LastThenStrongest], [ConnectionStrategy.First]). Defaults to
 * [ConnectionStrategy.LastThenStrongest].
 * @param scanDurationMillis The maximum duration to scan for devices. Defaults to
 * [defaultScanDuration].
 * @return `true` if a connection was successfully established, `false` otherwise.
 * @throws BTUnsupported If the selected connection type requires Bluetooth Classic and it's not
 * supported on the device.
 * @throws LeUnsupported If the selected connection type requires Bluetooth Low Energy and it's
 * not supported on the device.
 *
 * @see ConnectionStrategy For different approaches to selecting a device.
 * @see defaultScanDuration For the default scanning time.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)connectConnectionStrategy:(KESPLKConnectionStrategy *)connectionStrategy scanDurationMillis:(int64_t)scanDurationMillis completionHandler:(void (^)(KESPLKBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("connect(connectionStrategy:scanDurationMillis:completionHandler:)")));

/**
 * Attempts to connect to the specified [V1connection].
 *
 * @param v1c The [V1connection] object representing the device to connect to.
 * @param directConnect `true` if the an "immediate" connection should be attempted with [v1c];
 * attempts will timeout after a number of seconds. `false` if a connection should be
 * established as soon as the [V1connection] becomes available.
 * This argument is intended for clients wishing to attempt a connection that will not timeout
 * such as background re/connections. Under normal circumstances, the default value
 * (`true`) is the desired behavior. This argument only has an effect for [V1cType.LE]
 * connections on the **Android** platform. On iOS, Bluetooth connections attempts do not
 * timeout. To abort a connection attempt call [disconnect].
 *
 * @return `true` if the connection was successfully established, `false` otherwise.
 * @throws BTUnsupported If the connection type of `v1c` requires Bluetooth Classic and it's not
 * supported on the device.
 * @throws LeUnsupported If the connection type of `v1c` requires Bluetooth Low Energy and it's
 * not supported on the device.
 *
 * @see V1connection For details on the connection object.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)connectV1c:(id<KESPLKV1connection>)v1c directConnect:(BOOL)directConnect completionHandler:(void (^)(KESPLKBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("connect(v1c:directConnect:completionHandler:)")));

/**
 * Asynchronously attempts to connect to a [V1connection] using the specified connection
 * strategy and scan duration. This function returns immediately with a [Job] that represents
 * the asynchronous connection attempt.
 *
 * @param connectionStrategy The strategy to use when selecting a device to connect to
 * (e.g., [ConnectionStrategy.LastThenStrongest], [ConnectionStrategy.First]). Defaults to
 * [ConnectionStrategy.LastThenStrongest].
 * @param scanDurationMillis The maximum duration to scan for devices. Defaults to
 * [defaultScanDuration].
 * @return A [Job] representing the asynchronous connection operation. You can use this job to
 * cancel the connection attempt or await its completion (though the connection status is
 * typically observed via [connectionStatus] flow).
 * @throws BTUnsupported If the selected connection type requires Bluetooth Classic and it's not
 * supported on the device.
 * @throws LeUnsupported If the selected connection type requires Bluetooth Low Energy and it's
 * not supported on the device.
 *
 * @see ConnectionStrategy For different approaches to selecting a device.
 * @see defaultScanDuration For the default scanning time.
 * @see connectionStatus To observe the outcome of the connection attempt.
 */
- (id<KESPLKKotlinx_coroutines_coreJob>)connectAsyncConnectionStrategy:(KESPLKConnectionStrategy *)connectionStrategy scanDurationMillis:(int64_t)scanDurationMillis __attribute__((swift_name("connectAsync(connectionStrategy:scanDurationMillis:)")));

/**
 * Asynchronously attempts to connect to the specified [V1connection]. This function returns
 * immediately with a [Deferred] that will complete with the connection result.
 *
 * @param v1c The [V1connection] object representing the device to connect to.
 * @param directConnect `true` if the an "immediate" connection should be attempted with [v1c];
 * attempts will timeout after a number of seconds. `false` if a connection should be
 * established as soon as the [V1connection] becomes available.
 * This argument is intended for clients wishing to attempt a connection that will not timeout
 * such as background re/connections. Under normal circumstances, the default value
 * (`true`) is the desired behavior. This argument only has an effect for [V1cType.LE]
 * connections on the **Android** platform. On iOS, Bluetooth connections attempts do not
 * timeout. To abort a connection attempt call [disconnect].
 *
 * @return A [Deferred] which will resolve to `true` if the connection was successfully
 * established, or `false` otherwise. You can `await()` this Deferred to get the result, or
 * handle its completion in other ways.
 * @throws BTUnsupported If the connection type of `v1c` requires Bluetooth Classic and it's not
 * supported on the device.
 * @throws LeUnsupported If the connection type of `v1c` requires Bluetooth Low Energy and it's
 * not supported on the device.
 *
 * @see V1connection For details on the connection object.
 * @see connectionStatus To observe the ongoing status of the connection attempt.
 */
- (id<KESPLKKotlinx_coroutines_coreDeferred>)connectAsyncV1c:(id<KESPLKV1connection>)v1c directConnect:(BOOL)directConnect __attribute__((swift_name("connectAsync(v1c:directConnect:)")));

/**
 * Disconnects from the currently connected [V1connection].
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)disconnectWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("disconnect(completionHandler:)")));

/**
 * Asynchronously disconnects from the currently connected [V1connection]. This function returns
 * immediately with a [Job] that represents the asynchronous disconnection attempt.
 *
 * @return A [Job] representing the asynchronous disconnection operation.
 * The outcome of this operation can also be observed via [connectionStatus] flow).
 *
 * @see connectionStatus To observe the outcome of the disconnection attempt.
 */
- (id<KESPLKKotlinx_coroutines_coreJob>)disconnectAsync __attribute__((swift_name("disconnectAsync()")));

/**
 * Requests that the connected Valentine One Gen2 display is current volume.
 *
 * This action is equivalent to tapping one of the volume buttons on a Valentine One Gen2.
 * The behavior depends on the V1's current state:
 * - If no alert is present, the main volume level will be displayed.
 * - If an alert is currently active, the volume displayed will be either the main volume or
 *   the mute volume, depending on the V1's mute status at that moment.
 *
 * This function is only intended for use with the V1 Gen2. For older V1 models, this
 * request is not be supported.
 *
 * @param timeout The maximum duration to wait for the Valentine One to acknowledge
 *                the command. Defaults to [defaultRequestTimeout].
 * @return An [ESPResponse] indicating the outcome:
 * - [ESPResponse.Success] with `Unit` if the command was successfully sent and acknowledged
 *   by the V1.
 * - [ESPResponse.Failure] containing an [ESPFailure] if the request fails or times out.
 *   Possible failures include:
 *   - [ESPFailure.TimedOut]: The V1 did not respond within the specified `timeout`.
 *   - [ESPFailure.NotConnected]: The client isn't connected to a [V1connection].
 *   - [ESPFailure.NotSupported]: The connected V1 does not support this command
 *   (e.g., older V1 models).
 *
 * @since V4.1036
 * @see requestCurrentVolume To retrieve the current volume levels programmatically.
 * @see writeVolume To set new volume levels on the V1.
 * @see ESPPacketId.ReqDisplayCurrentVolume For the underlying ESP request.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)displayCurrentVolumeTimeout:(int64_t)timeout completionHandler:(void (^)(id<KESPLKESPResponse> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("displayCurrentVolume(timeout:completionHandler:)")));

/**
 * Enables or disables the transmission of alert table data from the Valentine One.
 *
 * When enabled, the V1 will send [ESPPacketId.RespAlertData] packets containing detailed
 * information about detected alerts. This data can be observed via the [alertTable] or
 * [alertTableClosable] flows.
 *
 * @param enable `true` to enable alert tables transmission, `false` to disable them.
 * @param timeout The maximum duration to wait for the Valentine One to acknowledge
 *                the command. Defaults to [defaultRequestTimeout].
 *
 * @return An [ESPResponse] indicating the outcome:
 * - [ESPResponse.Success] with `Unit` on success.
 * - [ESPResponse.Failure] with an [ESPFailure] on error (e.g., timeout, device not connected).
 *
 * @see alertTable For a flow of the current alert data.
 * @see alertTableClosable For a closable flow of the current alert data.
 * @see ESPPacketId.ReqStartAlertData For the underlying ESP request to enable alert tables.
 * @see ESPPacketId.ReqStopAlertData For the underlying ESP request to disable alert tables.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)enableAlertTableEnable:(BOOL)enable timeout:(int64_t)timeout completionHandler:(void (^)(id<KESPLKESPResponse> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("enableAlertTable(enable:timeout:completionHandler:)")));

/**
 * Checks if there is a previously connected [V1connection] persisted.
 *
 * This method can be used to determine if connection strategies like [ConnectionStrategy.Last]
 * or [ConnectionStrategy.LastThenStrongest] are likely to succeed in finding a previously
 * connected device.
 *
 * The persistence of the last connected device is controlled by [canPersistLastDevices].
 *
 * @return `true` if a previous [V1connection] is stored, `false` otherwise.
 *
 * @see canPersistLastDevices To control whether the last device is persisted.
 * @see clearPersistedLastDevices To clear any stored device information.
 * @see ConnectionStrategy.Last For connecting only to the last known device.
 * @see ConnectionStrategy.LastThenStrongest For trying the last known device first.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)hasPreviousV1connectionWithCompletionHandler:(void (^)(KESPLKBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("hasPreviousV1connection(completionHandler:)")));

/**
 * Requests the connected Valentine One mutes it's audio.
 *
 * This function sends a request to the Valentine One to mute all alerts in its alert table
 * (including Laser).
 *
 * It's a convenience function that internally calls [mute] with `muted = true`.
 *
 * @param timeout The maximum duration to wait for the Valentine One to acknowledge
 *                the command. Defaults to [defaultRequestTimeout].
 * @return An [ESPResponse] indicating the outcome:
 * - [ESPResponse.Success] with `Unit` if the V1 was successfully muted.
 * - [ESPResponse.Failure] containing an [ESPFailure] if the operation failed.
 *   Possible failures include:
 *   - [ESPFailure.TimedOut]: The V1 did not respond within the specified `timeout`.
 *   - [ESPFailure.NotConnected]: The client isn't connected to a [V1connection].
 *   - [ESPFailure.NotSupported]: The connected V1 does not support remote muting.
 *
 * @see mute To control both muting and unmuting with a boolean parameter.
 * @see unmute To explicitly unmute the Valentine One.
 * @see isSoft For a flow indicating the V1's current mute status.
 * @see ESPResponse For the sealed class representing the outcome of ESP operations.
 * @see ESPFailure For possible error types.
 * @see defaultRequestTimeout For the default timeout value.
 * @see ESPPacketId.ReqMuteOn For the underlying ESP request.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)muteTimeout:(int64_t)timeout completionHandler:(void (^)(id<KESPLKESPResponse> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("mute(timeout:completionHandler:)")));

/**
 * Requests the connected Valentine One mutes or unmutes it's audio.
 *
 * This function sends a request to the Valentine One to either mute all alerts in its alert
 * table (including Laser) or unmute alerts not muted by its internal logic.
 *
 * @param muted `true` to mute the Valentine One, `false` to unmute it.
 * @param timeout The maximum duration to wait for the Valentine One to acknowledge
 *                the command. Defaults to [defaultRequestTimeout].
 * @return An [ESPResponse] indicating the outcome:
 * - [ESPResponse.Success] with `Unit` if the V1 was successfully muted or unmuted.
 * - [ESPResponse.Failure] containing an [ESPFailure] if the operation failed.
 *   Possible failures include:
 *   - [ESPFailure.TimedOut]: The V1 did not respond within the specified `timeout`.
 *   - [ESPFailure.NotConnected]: The client isn't connected to a [V1connection].
 *   - [ESPFailure.NotSupported]: The connected V1 does not support remote muting/unmuting.
 *
 * @see unmute For a convenience function to specifically unmute the Valentine One.
 * @see isSoft For a flow indicating the V1's current mute status.
 * @see ESPResponse For the sealed class representing the outcome of ESP operations.
 * @see ESPFailure For possible error types.
 * @see defaultRequestTimeout For the default timeout value.
 * @see ESPPacketId.ReqMuteOn For the underlying ESP request.
 * @see ESPPacketId.ReqMuteOff For the underlying ESP request.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)muteMuted:(BOOL)muted timeout:(int64_t)timeout completionHandler:(void (^)(id<KESPLKESPResponse> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("mute(muted:timeout:completionHandler:)")));

/**
 * Overrides the SAVVY's thumbwheel setting based on the provided [SAVVYThumbwheelOverride].
 *
 * The SAVVY device expects the speed threshold to be in **Kilometers Per Hour (KPH)**
 * when a custom value is provided.
 *
 * - [SAVVYThumbwheelOverride.None]: Disables SAVVY muting functionality, bypassing the
 *   SAVVY thumbwheel value. Corresponds to a speed value of `0`.
 * - [SAVVYThumbwheelOverride.Auto]: Enables muting at all speeds, bypassing the SAVVY
 *   thumbwheel value. Corresponds to a speed value of `255`.
 * - [SAVVYThumbwheelOverride.Custom]: Sets a specific speed threshold. The provided `speed`
 *   value (1-254 KPH) will be used.
 *
 * This command is only relevant if a SAVVY is attached to the ESP bus.
 *
 * @param override The [SAVVYThumbwheelOverride] state to set on the SAVVY.
 * @param timeout The maximum duration to wait for a response from the SAVVY. Defaults to
 * [defaultRequestTimeout].
 * @return An [ESPResponse] which will be:
 * - [ESPResponse.Success] with `Unit` if the command was successfully sent and acknowledged
 *   by the SAVVY.
 * - [ESPResponse.Failure] containing an [ESPFailure] (e.g., [ESPFailure.TimedOut],
 *   [ESPFailure.NotConnected], [ESPFailure.NotSupported]) if the request fails,
 *   times out, or no SAVVY is present.
 *
 * @see SAVVYThumbwheelOverride For the different override states and their meanings.
 * @see requestSAVVYStatus To get the current status of SAVVY, including its thumbwheel setting.
 * @see ESPResponse For the sealed class representing the outcome of ESP operations.
 * @see ESPFailure For possible error types.
 * @see defaultRequestTimeout For the default timeout value.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)overrideSAVVYThumbWheelOverride:(KESPLKSAVVYThumbwheelOverride *)override timeout:(int64_t)timeout completionHandler:(void (^)(id<KESPLKESPResponse> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("overrideSAVVYThumbWheel(override:timeout:completionHandler:)")));

/**
 * Overrides the SAVVY's thumbwheel setting with a specific speed value.
 *
 * The SAVVY device expects the speed threshold to be in **Kilometers Per Hour (KPH)**.
 *
 * - A `speed` value of `0` (**None**) disables SAVVY muting functionality, bypassing the SAVVY
 * thumbwheel value. Equivalent to [SAVVYThumbwheelOverride.None])
 * - A `speed` value of `255`  (**Auto**) enables muting at all speeds, bypassing the SAVVY
 * thumbwheel value. Equivalent to [SAVVYThumbwheelOverride.Auto])
 * - Any other `speed` value (`1-254` KPH) sets a custom speed threshold. Equivalent to
 * [SAVVYThumbwheelOverride.Custom])
 *
 * This command is only relevant if a SAVVY is attached to the ESP bus.
 *
 * @param speed The desired speed threshold in KPH.
 *  - `0` (****): Disables SAVVY override (equivalent to `None`) and disables SAVVY muting.
 *  - `255` (**Auto**): Sets SAVVY to Auto mode.
 *  - `1-254`: Sets a custom speed threshold in KPH. Values outside this range for custom speed
 *  might lead to unexpected behavior.
 * @param timeout The maximum duration to wait for a response from the SAVVY. Defaults to
 * [defaultRequestTimeout].
 * @return An [ESPResponse] which will be:
 * - [ESPResponse.Success] with `Unit` if the command was successfully sent and acknowledged
 *   by the SAVVY.
 * - [ESPResponse.Failure] containing an [ESPFailure] (e.g., [ESPFailure.TimedOut],
 *   [ESPFailure.NotConnected], [ESPFailure.NotSupported]) if the request fails,
 *   times out, or no SAVVY is present.
 *
 * @see SAVVYThumbwheelOverride For the different override states.
 * @see requestSAVVYStatus To get the current status of SAVVY, including its thumbwheel setting.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)overrideSAVVYThumbWheelSpeed:(int8_t)speed timeout:(int64_t)timeout completionHandler:(void (^)(id<KESPLKESPResponse> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("overrideSAVVYThumbWheel(speed:timeout:completionHandler:)")));

/**
 * Overrides the SAVVY's thumbwheel setting with a specific speed value.
 *
 * The SAVVY device expects the speed threshold to be in **Kilometers Per Hour (KPH)**.
 *
 * - A `speed` value of `0` (**None**) disables SAVVY muting functionality, bypassing the SAVVY
 * thumbwheel value. Equivalent to [SAVVYThumbwheelOverride.None])
 * - A `speed` value of `255`  (**Auto**) enables muting at all speeds, bypassing the SAVVY
 * thumbwheel value. Equivalent to [SAVVYThumbwheelOverride.Auto])
 * - Any other `speed` value (`1-254` KPH) sets a custom speed threshold. Equivalent to
 * [SAVVYThumbwheelOverride.Custom])
 *
 * This command is only relevant if a SAVVY is attached to the ESP bus.
 *
 * @param speed The desired speed threshold in KPH.
 *  - `0` (****): Disables SAVVY override (equivalent to `None`) and disables SAVVY muting.
 *  - `255` (**Auto**): Sets SAVVY to Auto mode.
 *  - `1-254`: Sets a custom speed threshold in KPH. Values outside this range for custom speed
 *  might lead to unexpected behavior.
 * @param timeout The maximum duration to wait for a response from the SAVVY. Defaults to
 * [defaultRequestTimeout].
 * @return An [ESPResponse] which will be:
 * - [ESPResponse.Success] with `Unit` if the command was successfully sent and acknowledged
 *   by the SAVVY.
 * - [ESPResponse.Failure] containing an [ESPFailure] (e.g., [ESPFailure.TimedOut],
 *   [ESPFailure.NotConnected], [ESPFailure.NotSupported]) if the request fails,
 *   times out, or no SAVVY is present.
 *
 * @see SAVVYThumbwheelOverride For the different override states.
 * @see requestSAVVYStatus To get the current status of SAVVY, including its thumbwheel setting.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)overrideSAVVYThumbWheelSpeed:(int32_t)speed timeout:(int64_t)timeout completionHandler_:(void (^)(id<KESPLKESPResponse> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("overrideSAVVYThumbWheel(speed:timeout:completionHandler_:)")));

/**
 * Request both the current and saved volume levels from the Valentine One.
 *
 * This function is only intended for use with the V1 Gen2. For older V1 models, this
 * request is not be supported.
 *
 * @param timeout The maximum duration to wait for a response from the Valentine One.
 *                Defaults to [defaultRequestTimeout].
 * @return An [ESPResponse] which will be:
 * - [ESPResponse.Success] containing a [V1Volumes] object with the current & saved main and
 * muted volume levels if the request is successful.
 * - [ESPResponse.Failure] containing an [ESPFailure] if the request fails or times out.
 *   Possible failures include:
 *   - [ESPFailure.TimedOut]: The V1 did not respond within the specified `timeout`.
 *   - [ESPFailure.NotConnected]: The client isn't connected to a [V1connection].
 *   - [ESPFailure.NotSupported]: The connected V1 does not support requesting volume levels
 *   (e.g., older V1 models).
 *
 * @see V1Volume For the structure of the volume information.
 * @see V1Volumes For the structure of the current and saved volume information returned.
 * @see writeVolume To set new volume levels on the V1.
 * @see displayCurrentVolume To command the V1 to display its current volume.
 * @see ESPResponse For the sealed class representing the outcome of ESP operations.
 * @see ESPFailure For possible error types.
 * @see defaultRequestTimeout For the default timeout value.
 * @see ESPPacketId.ReqCurrentVolume For the underlying ESP request.
 * @since V4.1026
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)requestAllVolumesTimeout:(int64_t)timeout completionHandler:(void (^)(id<KESPLKESPResponse> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("requestAllVolumes(timeout:completionHandler:)")));

/**
 * Requests the battery voltage from the connected Valentine One.
 * This command is typically supported by these accessories, not directly by the Valentine One.
 *
 * The voltage is returned as a formatted string (e.g., "12.5V").
 *
 * @param timeout The maximum duration to wait for a response from the accessory. Defaults to
 * [defaultRequestTimeout].
 * @return An [ESPResponse] which will be:
 * - [ESPResponse.Success] containing the battery voltage as a [String] if the request is
 * successful.
 * - [ESPResponse.Failure] containing an [ESPFailure] (e.g., [ESPFailure.TimedOut],
 * [ESPFailure.NotConnected], [ESPFailure.NotSupported]) if the request fails or
 * times out.
 *
 * @see ESPResponse For the sealed class representing the outcome of ESP operations.
 * @see ESPFailure For possible error types.
 * @see defaultRequestTimeout For the default timeout value.
 * @see ESPPacketId.ReqBatteryVoltage For the underlying ESP request.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)requestBatteryVoltageTimeout:(int64_t)timeout completionHandler:(void (^)(id<KESPLKESPResponse> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("requestBatteryVoltage(timeout:completionHandler:)")));

/**
 * Requests the current main and muted volume levels from the Valentine One.
 *
 * This function is only intended for use with the V1 Gen2. For older V1 models, this
 * request is not be supported.
 *
 * @param timeout The maximum duration to wait for a response from the Valentine One.
 *                Defaults to [defaultRequestTimeout].
 * @return An [ESPResponse] which will be:
 * - [ESPResponse.Success] containing a [V1Volume] object with the current main and muted
 *   volume levels if the request is successful.
 * - [ESPResponse.Failure] containing an [ESPFailure] if the request fails or times out.
 *   Possible failures include:
 *   - [ESPFailure.TimedOut]: The V1 did not respond within the specified `timeout`.
 *   - [ESPFailure.NotConnected]: The client isn't connected to a [V1connection].
 *   - [ESPFailure.NotSupported]: The connected V1 does not support requesting volume levels
 *   (e.g., older V1 models).
 *
 * @see V1Volume For the structure of the volume information returned.
 * @see writeVolume To set new volume levels on the V1.
 * @see displayCurrentVolume To command the V1 to display its current volume.
 * @see ESPResponse For the sealed class representing the outcome of ESP operations.
 * @see ESPFailure For possible error types.
 * @see defaultRequestTimeout For the default timeout value.
 * @see ESPPacketId.ReqCurrentVolume For the underlying ESP request.
 * @since V4.1026
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)requestCurrentVolumeTimeout:(int64_t)timeout completionHandler:(void (^)(id<KESPLKESPResponse> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("requestCurrentVolume(timeout:completionHandler:)")));

/**
 * Requests the factory default [SweepDefinition]s from the connected Valentine One.
 *
 * This command retrieves the set of sweep definitions that the V1 would use if its custom
 * sweeps were reset to factory defaults. This is useful for understanding the baseline
 * behavior or for providing a starting point for users creating their own custom sweeps.
 *
 * This command is typically only supported by V1 devices that have custom sweep capabilities
 * (e.g., V1 Gen2 or V1.8 with appropriate firmware).
 *
 * @param timeout The maximum duration to wait for a response from the Valentine One. Defaults
 * to [defaultRequestTimeout].
 * @return An [ESPResponse] which will be:
 * - [ESPResponse.Success] containing a list of [SweepDefinition] objects representing the
 *   factory default sweeps if the request is successful.
 * - [ESPResponse.Failure] containing an [ESPFailure] if the request fails or times out.
 *   Possible failures include:
 *   - [ESPFailure.TimedOut]: The V1 did not respond within the specified `timeout`.
 *   - [ESPFailure.NotConnected]: The client isn't connected to a [V1connection].
 *   - [ESPFailure.NotSupported]: The connected V1 does not support requesting default
 *   sweep definitions.
 *
 * @see SweepDefinition For the structure of each sweep definition.
 * @see requestSweepDefinitions To get the currently programmed custom sweep definitions.
 * @see restoreDefaultSweeps To actually reset the V1's sweeps to their factory defaults.
 * @see ESPResponse For the sealed class representing the outcome of ESP operations.
 * @see ESPFailure For possible error types.
 * @see defaultRequestTimeout For the default timeout value.
 * @see ESPPacketId.ReqDefaultSweepDefinitions For the underlying ESP request.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)requestDefaultSweepDefinitionsTimeout:(int64_t)timeout completionHandler:(void (^)(id<KESPLKESPResponse> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("requestDefaultSweepDefinitions(timeout:completionHandler:)")));

/**
 * Requests the serial number from the specified ESP device.
 *
 * @param destination The [ESPDevice] from which to request the serial number. Supported devices
 * typically include [ESPDevice.ValentineOne], [ESPDevice.RemoteDisplay], etc.
 * @param timeout The maximum duration to wait for a response from the device. Defaults to
 * [defaultRequestTimeout].
 * @return An [ESPResponse] which will be:
 * - [ESPResponse.Success] containing the [SerialNumber] if the request is successful.
 * - [ESPResponse.Failure] containing an [ESPFailure] (e.g., [ESPFailure.TimedOut],
 *   [ESPFailure.NotConnected], [ESPFailure.NotSupported]) if the request fails,
 *   times out, or the device does not support this request.
 *
 * @see SerialNumber For the structure of the serial number information returned.
 * @see ESPDevice For the different types of ESP devices.
 * @see ESPResponse For the sealed class representing the outcome of ESP operations.
 * @see ESPFailure For possible error types.
 * @see defaultRequestTimeout For the default timeout value.
 * @see requestV1SerialNumber For a convenience function specifically for the Valentine One.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)requestDeviceSerialNumberDestination:(KESPLKESPDevice *)destination timeout:(int64_t)timeout completionHandler:(void (^)(id<KESPLKESPResponse> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("requestDeviceSerialNumber(destination:timeout:completionHandler:)")));

/**
 * Requests the version information from the specified ESP device.
 *
 * @param destination The [ESPDevice] from which to request the version information.
 * Supported devices typically include [ESPDevice.ValentineOne],[ESPDevice.RemoteDisplay], etc.
 * @param timeout The maximum duration to wait for a response from the device. Defaults to
 * [defaultRequestTimeout].
 * @return An [ESPResponse] which will be:
 * - [ESPResponse.Success] containing the [Version] information if the request is successful.
 * - [ESPResponse.Failure] containing an [ESPFailure] (e.g., [ESPFailure.TimedOut],
 * [ESPFailure.NotConnected], [ESPFailure.NotSupported]) if the request fails, times
 * out, or the device does not support this request.
 *
 * @see Version For the structure of the version information returned.
 * @see ESPDevice For the different types of ESP devices.
 * @see ESPResponse For the sealed class representing the outcome of ESP operations.
 * @see ESPFailure For possible error types.
 * @see defaultRequestTimeout For the default timeout value.
 * @see requestV1Version For a convenience function specifically for the Valentine One.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)requestDeviceVersionDestination:(KESPLKESPDevice *)destination timeout:(int64_t)timeout completionHandler:(void (^)(id<KESPLKESPResponse> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("requestDeviceVersion(destination:timeout:completionHandler:)")));

/**
 * Requests the maximum sweep index supported by the connected Valentine One.
 *
 * The maximum sweep index indicates the largest index in the "array" of [SweepDefinition] that
 * can be programmed into the V1. This value can vary depending on the V1 model and its
 * firmware.
 *
 * This command is typically only supported by V1 devices that have custom sweep capabilities.
 *
 * @param timeout The maximum duration to wait for a response from the Valentine One. Defaults
 * to [defaultRequestTimeout].
 * @return An [ESPResponse] which will be:
 * - [ESPResponse.Success] containing an [Int] representing the maximum sweep index if the
 *   request is successful.
 * - [ESPResponse.Failure] containing an [ESPFailure] if the request fails or times out.
 *   Possible failures include:
 *   - [ESPFailure.TimedOut]: The V1 did not respond within the specified `timeout`.
 *   - [ESPFailure.NotConnected]: The client isn't connected to a [V1connection].
 *   - [ESPFailure.NotSupported]: The connected V1 does not support requesting the
 *   maximum sweep index.
 *
 * @see requestSweepDefinitions To get the current custom sweep definitions.
 * @see writeSweepDefinitions To program new custom sweeps.
 * @see ESPResponse For the sealed class representing the outcome of ESP operations.
 * @see ESPFailure For possible error types.
 * @see defaultRequestTimeout For the default timeout value.
 * @see ESPPacketId.ReqMaxSweepIndex For the underlying ESP request.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)requestMaxSweepIndexTimeout:(int64_t)timeout completionHandler:(void (^)(id<KESPLKESPResponse> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("requestMaxSweepIndex(timeout:completionHandler:)")));

/**
 * Requests the current status of the connected SAVVY.
 *
 * SAVVY is an accessory for the Valentine One that automatically adjusts the mute threshold
 * based on vehicle speed. This function retrieves its current operational status,
 * including whether it's enabled, the current speed threshold, and if it's currently
 * overriding the V1's mute.
 *
 * This command is only relevant if a SAVVY is attached to the ESP bus.
 *
 * @param timeout The maximum duration to wait for a response from the SAVVY. Defaults to
 * [defaultRequestTimeout].
 * @return An [ESPResponse] which will be:
 * - [ESPResponse.Success] containing the [SAVVYStatus] if the request is successful.
 * - [ESPResponse.Failure] containing an [ESPFailure] (e.g., [ESPFailure.TimedOut],
 *   [ESPFailure.NotConnected], [ESPFailure.NotSupported]) if the request fails,
 *   times out, or no SAVVY is present/responding.
 *
 * @see SAVVYStatus For the structure of the status information returned.
 * @see requestVehicleSpeed To get the current vehicle speed as reported by SAVVY.
 * @see overrideSAVVYThumbWheel To manually set the SAVVY's speed threshold.
 * @see unmuteSAVVY To control SAVVY's unmuting behavior.
 * @see ESPResponse For the sealed class representing the outcome of ESP operations.
 * @see ESPFailure For possible error types.
 * @see defaultRequestTimeout For the default timeout value.
 * @see ESPPacketId.ReqSavvyStatus For the underlying ESP request.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)requestSAVVYStatusTimeout:(int64_t)timeout completionHandler:(void (^)(id<KESPLKESPResponse> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("requestSAVVYStatus(timeout:completionHandler:)")));

/**
 * Requests the current [SweepData] from the connected Valentine One.
 *
 * This command is typically only supported by V1 devices that have custom sweep capabilities
 * (e.g., V1 Gen2 or V1.8 with appropriate firmware).
 *
 * Due to the potentially larger size of sweep data and the time it might take for the V1 to
 * compile and send it, this request uses a longer default timeout
 * ([defaultLongRequestTimeout]).
 *
 * @param timeout The maximum duration to wait for a response from the Valentine One.
 * Defaults to [defaultLongRequestTimeout].
 * @return An [ESPResponse] which will be:
 * - [ESPResponse.Success] containing the [SweepData] if the request is successful.
 * - [ESPResponse.Failure] containing an [ESPFailure] if the request fails or times out.
 *   Possible failures include:
 *   - [ESPFailure.TimedOut]: The V1 did not respond within the specified `timeout`.
 *   - [ESPFailure.NotConnected]: The client isn't connected to a [V1connection].
 *   - [ESPFailure.NotSupported]: The connected V1 does not support requesting sweep data.
 *
 * @see SweepData For the structure of the sweep data information.
 * @see requestSweepDefinitions To get the custom sweep definitions.
 * @see requestSweepSections To get the underlying sweep sections.
 * @see ESPResponse For the sealed class representing the outcome of ESP operations.
 * @see ESPFailure For possible error types.
 * @see defaultLongRequestTimeout For the default timeout value used for this request.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)requestSweepDataTimeout:(int64_t)timeout completionHandler:(void (^)(id<KESPLKESPResponse> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("requestSweepData(timeout:completionHandler:)")));

/**
 * Requests the current list of [SweepDefinition] from the connected Valentine One.
 *
 * Sweep definitions allow users to define specific frequency ranges within a [SweepSection]
 * that the Valentine One will report detected alerts.
 *
 * This command is typically only supported by V1 devices that have custom sweep capabilities
 * (e.g., V1 Gen2 or V1.8 with appropriate firmware).
 *
 * @param timeout The maximum duration to wait for a response from the Valentine One.
 *                Defaults to [defaultRequestTimeout].
 * @return An [ESPResponse] which will be:
 * - [ESPResponse.Success] containing a list of [SweepDefinition] objects if the request is
 *   successful. The list may be empty if no custom sweeps are defined.
 * - [ESPResponse.Failure] containing an [ESPFailure] if the request fails or times out.
 *   Possible failures include:
 *   - [ESPFailure.TimedOut]: The V1 did not respond within the specified `timeout`.
 *   - [ESPFailure.NotConnected]: The client isn't connected to a [V1connection].
 *   - [ESPFailure.NotSupported]: The connected V1 does not support requesting sweep
 *   definitions (e.g., older models).
 *
 * @see SweepDefinition For the structure of each custom sweep definition.
 * @see writeSweepDefinitions To program new custom sweeps to the V1.
 * @see restoreDefaultSweeps To revert to the factory default sweep settings.
 * @see requestDefaultSweepDefinitions To get the factory default sweep definitions.
 * @see ESPResponse For the sealed class representing the outcome of ESP operations.
 * @see ESPFailure For possible error types.
 * @see defaultRequestTimeout For the default timeout value.
 * @see ESPPacketId.ReqAllSweepDefinitions For the underlying ESP request.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)requestSweepDefinitionsTimeout:(int64_t)timeout completionHandler:(void (^)(id<KESPLKESPResponse> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("requestSweepDefinitions(timeout:completionHandler:)")));

/**
 * Requests the current list of custom [SweepSection] from the connected Valentine One.
 *
 * Sweep sections are the fundamental building blocks of custom sweeps. Each section defines a
 * frequency range that the Valentine One can sweep. A [SweepDefinition] is a user configurable
 * ranges within the sweep sections (end-inclusive) that the Valentine One will
 * report detected alerts.
 *
 * This command is typically only supported by V1 devices that have custom sweep capabilities
 * (e.g., V1 Gen2 or V1.8 with appropriate firmware).
 *
 * @param timeout The maximum duration to wait for a response from the Valentine One.
 *                Defaults to [defaultRequestTimeout].
 * @return An [ESPResponse] which will be:
 * - [ESPResponse.Success] containing a list of [SweepSection] objects if the request is
 *   successful. The list may be empty if no custom sweeps are defined or if the V1
 *   doesn't support this specific request type (some older custom sweep V1s might only
 *   support [requestSweepDefinitions]).
 * - [ESPResponse.Failure] containing an [ESPFailure] if the request fails or times out.
 *   Possible failures include:
 *   - [ESPFailure.TimedOut]: The V1 did not respond within the specified `timeout`.
 *   - [ESPFailure.NotConnected]: The client isn't connected to a [V1connection].
 *   - [ESPFailure.NotSupported]: The connected V1 does not support requesting sweep
 *   sections (e.g., older models or models without custom sweep capabilities).
 *
 * @see SweepSection For the structure of each sweep section.
 * @see requestSweepDefinitions To get the higher-level custom sweep definitions.
 * @see writeSweepDefinitions To program new custom sweeps to the V1.
 * @see ESPResponse For the sealed class representing the outcome of ESP operations.
 * @see ESPFailure For possible error types.
 * @see defaultRequestTimeout For the default timeout value.
 * @see ESPPacketId.ReqSweepSections For the underlying ESP request.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)requestSweepSectionsTimeout:(int64_t)timeout completionHandler:(void (^)(id<KESPLKESPResponse> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("requestSweepSections(timeout:completionHandler:)")));

/**
 * Requests the raw user configuration settings (user bytes) as a [ByteArray] from the
 * specified ESP device.
 *
 * This function is similar to [requestUserSettings] but returns the raw byte array
 * directly without parsing it into a [UserSettings] object.
 *
 * @param destination The [ESPDevice] from which to request the raw user bytes. Typically
 * [ESPDevice.ValentineOne] or [ESPDevice.RemoteDisplay]. Support for [ESPPacketId.ReqUserBytes]
 * varies by device.
 * @param timeout The maximum duration to wait for a response from the device. Defaults to
 * [defaultRequestTimeout].
 *
 * @return An [ESPResponse] which will be:
 * - [ESPResponse.Success] containing the raw [ByteArray] of user settings if the request is
 * successful.
 * - [ESPResponse.Failure] containing an [ESPFailure] (e.g., [ESPFailure.TimedOut],
 * [ESPFailure.NotConnected], [ESPFailure.NotSupported]) if the request fails, times
 * out, or the device does not support user byte requests.
 *
 * @see requestUserSettings For requesting parsed [UserSettings].
 * @see ESPDevice For the different types of ESP devices.
 * @see ESPResponse For the sealed class representing the outcome of ESP operations.
 * @see ESPFailure For possible error types.
 * @see defaultRequestTimeout For the default timeout value.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)requestUserBytesDestination:(KESPLKESPDevice *)destination timeout:(int64_t)timeout completionHandler:(void (^)(id<KESPLKESPResponse> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("requestUserBytes(destination:timeout:completionHandler:)")));

/**
 * Requests the user configuration settings (user bytes) from the specified ESP device.
 *
 * @param destination The [ESPDevice] from which to request the user settings.
 * Only [ESPDevice.RemoteDisplay] and [ESPDevice.ValentineOne] support
 * [ESPPacketId.ReqUserBytes].
 * @param forceVersionRequest If `true`, the client will attempt to determine the version of the
 * [destination] device before requesting its user bytes. This setting is only necessary
 * when [destination] is [ESPDevice.ValentineOne]; all other [ESPDevice] types that support
 * user byte requests will always have their version checked first. Defaults to `false`.
 * @param timeout The maximum duration to wait for a response from the device. Defaults to
 * [defaultRequestTimeout].
 *
 * @return An [ESPResponse] which will be:
 * - [ESPResponse.Success] containing the [UserSettings] if the request is successful.
 * The actual type of [UserSettings] will depend on the `destination` device.
 * - [ESPResponse.Failure] containing an [ESPFailure] (e.g., [ESPFailure.TimedOut],
 * [ESPFailure.NotConnected], [ESPFailure.NotSupported]) if the request fails,
 * times out, or the device does not support user byte requests.
 *
 * @see UserSettings For the base class of user settings information.
 * @see ESPDevice For the different types of ESP devices.
 * @see ESPPacketId.ReqUserBytes For the underlying ESP request.
 * @see requestV1UserSettings For requesting user bytes specifically from a Valentine One.
 * @see defaultRequestTimeout For the default timeout duration.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)requestUserSettingsDestination:(KESPLKESPDevice *)destination forceVersionRequest:(BOOL)forceVersionRequest timeout:(int64_t)timeout completionHandler:(void (^)(id<KESPLKESPResponse> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("requestUserSettings(destination:forceVersionRequest:timeout:completionHandler:)")));

/**
 * Requests the serial number from the connected Valentine One.
 *
 * @param timeout The maximum duration to wait for a response from the Valentine One. Defaults
 * to [defaultRequestTimeout].
 * @return An [ESPResponse] which will be:
 * - [ESPResponse.Success] containing the [SerialNumber] if the request is successful.
 * - [ESPResponse.Failure] containing an [ESPFailure] (e.g., [ESPFailure.TimedOut],
 * [ESPFailure.NotConnected]) if the request fails or times out.
 *
 * @see SerialNumber For the structure of the serial number information returned.
 * @see ESPResponse For the sealed class representing the outcome of ESP operations.
 * @see ESPFailure For possible error types.
 * @see defaultRequestTimeout For the default timeout value.
 * @see requestDeviceSerialNumber To request serial number from a specific ESP device.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)requestV1SerialNumberTimeout:(int64_t)timeout completionHandler:(void (^)(id<KESPLKESPResponse> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("requestV1SerialNumber(timeout:completionHandler:)")));

/**
 * Requests the user configuration settings (user bytes) from the connected Valentine One.
 *
 * @param forceVersionRequest If `true`, the client will request the V1's version
 * before requesting the user bytes. Defaults to `false`.
 * @param timeout The maximum duration to wait for a response from the Valentine One. Defaults
 * to [defaultRequestTimeout].
 * @return An [ESPResponse] which will be:
 * - [ESPResponse.Success] containing the [UserSettings] if the request is successful. The
 * specific type of [UserSettings] (e.g., [V18UserSettings]) will depend on the version of the
 * connected Valentine One.
 *
 * - [ESPResponse.Failure] containing an [ESPFailure] (e.g., [ESPFailure.TimedOut],
 * [ESPFailure.NotConnected], [ESPFailure.NotSupported]) if the request fails, times
 * out, or the V1 does not support user byte requests.
 *
 * @see UserSettings For the base class of user settings information.
 * @see V18UserSettings For user settings specific to V1.8 and later models.
 * @see ESPResponse For the sealed class representing the outcome of ESP operations.
 * @see ESPFailure For possible error types.
 * @see defaultRequestTimeout For the default timeout value.
 * @see requestUserSettings To request user bytes from a specific ESP device (not just V1).
 * @see requestV1Version To understand how the V1 version is determined.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)requestV1UserSettingsForceVersionRequest:(BOOL)forceVersionRequest timeout:(int64_t)timeout completionHandler:(void (^)(id<KESPLKESPResponse> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("requestV1UserSettings(forceVersionRequest:timeout:completionHandler:)")));

/**
 * Requests the version information from the connected Valentine One.
 *
 * @param timeout The maximum duration to wait for a response from the Valentine One. Defaults
 * to [defaultRequestTimeout].
 * @return An [ESPResponse] which will be:
 * - [ESPResponse.Success] containing the [Version] information if the request is successful.
 * - [ESPResponse.Failure] containing an [ESPFailure] (e.g., [ESPFailure.TimedOut],
 * [ESPFailure.NotConnected]) if the request fails or times out.
 *
 * @see Version For the structure of the version information returned.
 * @see ESPResponse For the sealed class representing the outcome of ESP operations.
 * @see ESPFailure For possible error types.
 * @see defaultRequestTimeout For the default timeout value.
 * @see requestDeviceVersion To request version from a specific ESP device.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)requestV1VersionTimeout:(int64_t)timeout completionHandler:(void (^)(id<KESPLKESPResponse> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("requestV1Version(timeout:completionHandler:)")));

/**
 * Requests the current vehicle speed from the connected SAVVY.
 *
 * The speed is typically reported in MPH or KM/H, depending on the SAVVY's configuration,
 * but this function returns it as a raw integer value.
 *
 * This command is only relevant if a SAVVY is attached to the ESP bus.
 *
 * @param timeout The maximum duration to wait for a response from the SAVVY. Defaults to
 * [defaultRequestTimeout].
 * @return An [ESPResponse] which will be:
 * - [ESPResponse.Success] containing the vehicle speed as an [Int] if the request is
 *   successful.
 * - [ESPResponse.Failure] containing an [ESPFailure] (e.g., [ESPFailure.TimedOut],
 *   [ESPFailure.NotConnected], [ESPFailure.NotSupported]) if the request fails,
 *   times out, or no SAVVY is present.
 *
 * @see requestSAVVYStatus To get the overall status of the SAVVY.
 * @see overrideSAVVYThumbWheel To manually set the SAVVY's speed threshold.
 * @see ESPResponse For the sealed class representing the outcome of ESP operations.
 * @see ESPFailure For possible error types.
 * @see defaultRequestTimeout For the default timeout value.
 * @see ESPPacketId.ReqVehicleSpeed For the underlying ESP request.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)requestVehicleSpeedTimeout:(int64_t)timeout completionHandler:(void (^)(id<KESPLKESPResponse> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("requestVehicleSpeed(timeout:completionHandler:)")));

/**
 * Requests the connected Valentine One to restore its default sweep settings.
 *
 * This command instructs the V1 to revert any custom sweep configurations to their
 * factory default values. After this operation, the V1 will use its standard,
 * out-of-the-box frequency sweep patterns.
 *
 * This command is typically only supported by V1 devices that have custom sweep capabilities
 * (e.g., V1 Gen2 or V1.8 with appropriate firmware). However, not all V1 versions that
 * support custom sweeps may support this specific command. Library users should consult
 * [V1CapabilityInfo.supportsDefaultSweepRequest] to determine if the connected V1
 * supports this functionality before calling this function.
 *
 * @param verify `true` if the client should read back the Valentine One's current sweep
 * definitions to verify they were set back to default values.
 * @param timeout The maximum duration to wait for the Valentine One to acknowledge
 *                the command. Defaults to [defaultRequestTimeout].
 * @return An [ESPResponse] which will be:
 * - [ESPResponse.Success] with `Unit` if the command was successfully sent and acknowledged
 *   by the V1.
 * - [ESPResponse.Failure] containing an [ESPFailure] if the request fails or times out.
 *   Possible failures include:
 *   - [ESPFailure.TimedOut]: The V1 did not respond within the specified `timeout`.
 *   - [ESPFailure.NotConnected]: The client isn't connected to a [V1connection].
 *   - [ESPFailure.NotSupported]: The connected V1 does not support restoring default
 *   sweeps (e.g., older models, models without custom sweep capabilities, or models that
 *   support custom sweeps but not this specific command).
 *
 * @see V1CapabilityInfo.supportsDefaultSweepRequest To check if the connected V1 supports this
 * command.
 * @see requestSweepDefinitions To get the current custom sweep definitions.
 * @see writeSweepDefinitions To program new custom sweeps to the V1.
 * @see requestDefaultSweepDefinitions To get the factory default sweep definitions without
 * actually restoring them.
 * @see ESPResponse For the sealed class representing the outcome of ESP operations.
 * @see ESPFailure For possible error types.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)restoreDefaultSweepsVerify:(BOOL)verify timeout:(int64_t)timeout completionHandler:(void (^)(id<KESPLKESPResponse> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("restoreDefaultSweeps(verify:timeout:completionHandler:)")));

/**
 * Requests that the the specified ESP device restore its factory default settings.
 * This operation typically resets user-configurable parameters to their original,
 * out-of-the-box state.
 *
 * Note: Not all ESP devices may support this command.
 *
 * @param destination The [ESPDevice] to which the restore factory defaults command should be
 * sent. Common targets might include [ESPDevice.ValentineOne] or other configurable
 * accessories.
 * @param verify `true` if the client should read back the Valentine One's user settings and
 * verify they were set back to default values.
 * @param timeout The maximum duration to wait for the device to acknowledge the command.
 * Defaults to [defaultRequestTimeout].
 *
 * @return An [ESPResponse] indicating the outcome:
 * - [ESPResponse.Success] with `Unit` if the command was successfully sent and acknowledged
 *   by the device.
 * - [ESPResponse.Failure] containing an [ESPFailure] if the operation failed. Possible
 *   failures include:
 *   - [ESPFailure.TimedOut]: The device did not respond within the specified `timeout`.
 *   - [ESPFailure.NotConnected]: No ESP device is currently connected.
 *   - [ESPFailure.NotSupported]: The `destination` device does not support the restore
 *   factory defaults command.
 *   - Other communication errors.
 *
 * @see ESPDevice For the different types of ESP devices.
 * @see ESPResponse For the sealed class representing the outcome of ESP operations.
 * @see ESPFailure For possible error types.
 * @see defaultRequestTimeout For the default timeout value.
 * @see ESPPacketId.ReqFactoryDefault For the underlying ESP request.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)restoreFactoryDefaultsDestination:(KESPLKESPDevice *)destination verify:(BOOL)verify timeout:(int64_t)timeout completionHandler:(void (^)(id<KESPLKESPResponse> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("restoreFactoryDefaults(destination:verify:timeout:completionHandler:)")));

/**
 * Set the display to be on or off.
 *
 * _Important information about changing the display state:_ By default, all Valentine Ones turn
 * off the main display when a Remote Display is connected and turn it back on when the
 * Concealed Display is disconnected. The reqTurnOffMainDisplay and reqTurnOnMainDisplay packets
 * change the current display state, but do not disable this feature.
 *
 * @param on `true` to turn the display on, `false` to turn it off.
 * @param timeout The maximum duration to wait for a response from the ESP device. Defaults
 *   to [defaultRequestTimeout].
 * @return An [ESPResponse] object. If the operation is successful, the `success` field will
 *   contain `Unit`. If it fails, the `failure` field will hold an [ESPFailure] object detailing
 *   the error.
 *
 * @see turnOnMainDisplay For a convenience function to specifically turn on the Valentine One's
 * main display.
 * @see turnOffMainDisplay For a convenience function to specifically turn off the Valentine
 * One's main display.
 * @see ESPResponse For the sealed class representing the outcome of ESP operations.
 * @see ESPFailure For possible error types.
 * @see defaultRequestTimeout For the default timeout value.
 * @see ESPPacketId.ReqTurnOnMainDisplay For the underlying ESP request.
 * @see ESPPacketId.ReqTurnOffMainDisplay For the underlying ESP request.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)setMainDisplayOn:(BOOL)on timeout:(int64_t)timeout completionHandler:(void (^)(id<KESPLKESPResponse> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("setMainDisplay(on:timeout:completionHandler:)")));

/**
 * Request the connected Valentine One to turn off it's main display.
 *
 * _Important information about changing the display state:_ By default, all Valentine Ones turn
 * off the main display when a Remote Display is connected and turn it back on when the
 * Concealed Display is disconnected. The reqTurnOffMainDisplay and reqTurnOnMainDisplay packets
 * change the current display state, but do not disable this feature.
 *
 * It's a convenience function that internally calls [setMainDisplay] with `on = false`.
 *
 * @param timeout The maximum duration to wait for a response from the V1. Defaults to
 * [defaultRequestTimeout].
 * @return An [ESPResponse] indicating the outcome:
 * - [ESPResponse.Success] with `Unit` if the V1 display was successfully turned off.
 * - [ESPResponse.Failure] containing an [ESPFailure] if the operation failed.
 *   Possible failures include:
 *   - [ESPFailure.TimedOut]: The V1 did not respond within the specified `timeout`.
 *   - [ESPFailure.NotConnected]: The client isn't connected to a [V1connection].
 *   - [ESPFailure.NotSupported]: The connected V1 does not support toggling its display state.
 *
 * @see turnOnMainDisplay For a convenience function to specifically turn on the Valentine One's
 * main display.
 * @see ESPResponse For the sealed class representing the outcome of ESP operations.
 * @see ESPFailure For possible error types.
 * @see defaultRequestTimeout For the default timeout value.
 * @see ESPPacketId.ReqTurnOnMainDisplay For the underlying ESP request.
 * @see ESPPacketId.ReqTurnOffMainDisplay For the underlying ESP request.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)turnOffMainDisplayTimeout:(int64_t)timeout completionHandler:(void (^)(id<KESPLKESPResponse> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("turnOffMainDisplay(timeout:completionHandler:)")));

/**
 * Request the connected Valentine One to turn on it's main display.
 *
 * _Important information about changing the display state:_ By default, all Valentine Ones turn
 * off the main display when a Remote Display is connected and turn it back on when the
 * Concealed Display is disconnected. The reqTurnOffMainDisplay and reqTurnOnMainDisplay packets
 * change the current display state, but do not disable this feature.
 *
 * It's a convenience function that internally calls [setMainDisplay] with `on = true`.
 *
 * @param timeout The maximum duration to wait for a response from the V1. Defaults to
 * [defaultRequestTimeout].
 * @return An [ESPResponse] indicating the outcome:
 * - [ESPResponse.Success] with `Unit` if the V1 display was successfully turned on.
 * - [ESPResponse.Failure] containing an [ESPFailure] if the operation failed.
 *   Possible failures include:
 *   - [ESPFailure.TimedOut]: The V1 did not respond within the specified `timeout`.
 *   - [ESPFailure.NotConnected]: The client isn't connected to a [V1connection].
 *   - [ESPFailure.NotSupported]: The connected V1 does not support toggling it's display state.
 *
 * @see setMainDisplay For a convenience function to specifically turn off the Valentine One's
 * main display.
 * @see ESPResponse For the sealed class representing the outcome of ESP operations.
 * @see ESPFailure For possible error types.
 * @see defaultRequestTimeout For the default timeout value.
 * @see ESPPacketId.ReqTurnOnMainDisplay For the underlying ESP request.
 * @see ESPPacketId.ReqTurnOffMainDisplay For the underlying ESP request.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)turnOnMainDisplayTimeout:(int64_t)timeout completionHandler:(void (^)(id<KESPLKESPResponse> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("turnOnMainDisplay(timeout:completionHandler:)")));

/**
 * Requests the connected Valentine One unmutes it's audio.
 *
 * This function sends a request to the Valentine One to mute all alerts in its alert table
 * (including Laser) that were not muted by it's internal logic.
 *
 * This is a convenience function that calls [mute] with `muted = false`.
 *
 * @param timeout The maximum duration to wait for the Valentine One to acknowledge
 *                the command. Defaults to [defaultRequestTimeout].
 * @return An [ESPResponse] indicating the outcome:
 * - [ESPResponse.Success] with `Unit` if the V1 was successfully unmuted.
 * - [ESPResponse.Failure] containing an [ESPFailure] if the operation failed (e.g.,
 *   timeout, device not connected).
 *
 * @see mute To control both muting and unmuting with a boolean parameter.
 * @see isSoft For a flow indicating the V1's current mute status.
 * @see ESPResponse For the sealed class representing the outcome of ESP operations.
 * @see ESPFailure For possible error types.
 * @see defaultRequestTimeout For the default timeout value.
 * @see ESPPacketId.ReqMuteOff For the underlying ESP request.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)unmuteTimeout:(int64_t)timeout completionHandler:(void (^)(id<KESPLKESPResponse> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("unmute(timeout:completionHandler:)")));

/**
 * Controls the unmuting behavior of an attached SAVVY device.
 *
 * SAVVY can automatically unmute the Valentine One when the vehicle's speed drops below
 * a certain threshold. This function allows enabling or disabling this automatic unmuting
 * feature of the attached SAVVY.
 *
 * This command is only relevant if a SAVVY is attached to the ESP bus.
 *
 * @param enableUnmuting `true` to enable the SAVVY's unmuting functionality, `false` to disable
 * it.
 * @param timeout The maximum duration to wait for a response from the SAVVY. Defaults to
 * [defaultRequestTimeout].
 * @return An [ESPResponse] which will be:
 * - [ESPResponse.Success] with `Unit` if the command was successfully sent and acknowledged
 *   by the SAVVY.
 * - [ESPResponse.Failure] containing an [ESPFailure] (e.g., [ESPFailure.TimedOut],
 *   [ESPFailure.NotConnected], [ESPFailure.NotSupported]) if the request fails,
 *   times out, or no SAVVY is present/responding.
 *
 * @see requestSAVVYStatus To get the current status of SAVVY, including its unmuting state.
 * @see overrideSAVVYThumbWheel To set the speed threshold for SAVVY.
 * @see ESPResponse For the sealed class representing the outcome of ESP operations.
 * @see ESPFailure For possible error types.
 * @see defaultRequestTimeout For the default timeout value.
 * @see [ESPPacketId.ReqSetSavvyUnmuteEnable] For the underlying ESP request.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)unmuteSAVVYEnableUnmuting:(BOOL)enableUnmuting timeout:(int64_t)timeout completionHandler:(void (^)(id<KESPLKESPResponse> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("unmuteSAVVY(enableUnmuting:timeout:completionHandler:)")));

/**
 * Attempts to write specified list of [SweepDefinition] to the Valentine One.
 *
 * @param sweepDefinitions The list of sweep definitions to write.
 * @param timeout The timeout duration for the request. Defaults to [defaultRequestTimeout].
 * @return An [ESPResponse] indicating the outcome:
 * - [ESPResponse.Success] with `0` if the custom sweeps write was successful.
 * - [ESPResponse.Failure] containing an [ESPFailure] if the operation failed.
 *   Possible failures include:
 *   - [ESPFailure.TimedOut]: The V1 did not respond within the specified `timeout`.
 *   - [ESPFailure.NotConnected]: The client isn't connected to a [V1connection].
 *   - [ESPFailure.V1NotDetermined]: The client has not determined the Valentine One in charge
 *   of the ESP bus.
 *   - [ESPFailure.InvalidSweep]: with the sweep number of the first invalid [SweepDefinition].
 *
 * @see defaultRequestTimeout For the default timeout value.
 * @see ESPPacketId.ReqWriteSweepDefinition For the underlying ESP request.
 * @see ESPPacketId.RespSweepWriteResult For the underlying ESP request.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)writeSweepDefinitionsSweepDefinitions:(NSArray<KESPLKSweepDefinition *> *)sweepDefinitions timeout:(int64_t)timeout completionHandler:(void (^)(id<KESPLKESPResponse> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("writeSweepDefinitions(sweepDefinitions:timeout:completionHandler:)")));

/**
 * Attempts to write [userBytes] to update the user configuration settings inside target
 * [ESPDevice].
 *
 * @param destination The [ESPDevice] who's user configuration settings you would like to write.
 * Only [ESPDevice.ValentineOne] and [ESPDevice.RemoteDisplay] support
 * [ESPPacketId.ReqWriteUserBytes].
 * @param userBytes Desired user configuration byte array. For [ESPDevice.ValentineOne], this
 * typically represents the Valentine One's user settings.
 * @param verifyBytes `true` if the client should read back the device's user bytes to
 * verify the values written were successfully set.
 * NOTE: When `destination` is [ESPDevice.ValentineOne], this verification may fail if the
 * [V18UserSettings.UserByte2.fForceLegacyDisplayDisabled] bit is set in the `userBytes`.
 * @param timeout The maximum duration the client should wait before timing out this operation.
 * Defaults to [defaultLongRequestTimeout] as V1 operations can sometimes take longer.
 *
 * @return An [ESPResponse] indicating the outcome:
 * - [ESPResponse.Success] containing the updated [UserSettings] if the operation was
 * successful (and verification passed, if enabled). The actual type of [UserSettings]
 * returned will depend on the `destination` device.
 * - [ESPResponse.Failure] containing an [ESPFailure] if the operation failed.
 *   - If `verifyBytes` is `true` and the user bytes read back from `destination` do not match
 *     `userBytes`, an [ESPFailure.ESPOperationFailed] will be returned.
 *   - Other possible failures include [ESPFailure.TimedOut], [ESPFailure.NotConnected],
 *     [ESPFailure.NotSupported], etc.
 *
 * @see UserSettings For the structure of user settings.
 * @see V18UserSettings.UserByte2.fForceLegacyDisplayDisabled For the specific bit that can cause verification
 * failure with Valentine One devices.
 * @see ESPResponse For the sealed class representing the outcome of ESP operations.
 * @see ESPFailure For possible error types.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)writeUserBytesDestination:(KESPLKESPDevice *)destination userBytes:(KESPLKKotlinByteArray *)userBytes verifyBytes:(BOOL)verifyBytes timeout:(int64_t)timeout completionHandler:(void (^)(id<KESPLKESPResponse> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("writeUserBytes(destination:userBytes:verifyBytes:timeout:completionHandler:)")));

/**
 * Attempts to write [userBytes] to update the user configuration settings inside the Valentine
 * One.
 *
 * @param userBytes Desired Valentine One user configuration.
 * @param verifyBytes `true` if the client should read back the Valentine One's user bytes to
 * verify the values written were set.
 * NOTE: This will fail if the [V18UserSettings.UserByte2.fForceLegacyDisplayDisabled] bit is set.
 * @param timeout The timeout the client should wait before timing out this operation.
 *
 * @return An [ESPResponse] indicating the outcome:
 * - [ESPResponse.Success] containing the updated [UserSettings] if the operation was
 * successful (and verification passed, if enabled).
 * - [ESPResponse.Failure] containing an [ESPFailure] if the operation failed. If `verifyBytes`
 * is `true` and the user bytes read back from the Valentine One don't match `userBytes`,
 * an [ESPFailure.ESPOperationFailed] will be returned. Other failures include
 * [ESPFailure.TimedOut], [ESPFailure.NotConnected], etc.
 *
 * @see UserSettings For the structure of user settings.
 * @see V18UserSettings.UserByte2.fForceLegacyDisplayDisabled For the specific bit that can cause verification
 * failure.
 * @see ESPResponse For the sealed class representing the outcome of ESP operations.
 * @see ESPFailure For possible error types.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)writeV1UserBytesUserBytes:(KESPLKKotlinByteArray *)userBytes verifyBytes:(BOOL)verifyBytes timeout:(int64_t)timeout completionHandler:(void (^)(id<KESPLKESPResponse> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("writeV1UserBytes(userBytes:verifyBytes:timeout:completionHandler:)")));

/**
 * Updates the main and muted volume levels inside of the Valentine One Gen2.
 *
 * This function is safe to call in rapid succession. The Valentine One will overwrite any
 * existing [ESPPacketId.ReqWriteVolume] commands in its processing queue to ensure that
 * only the last requested volume setting is applied. This prevents unintended intermediate
 * volume changes if multiple requests are sent quickly.
 *
 * The behavior of audio and visual feedback from the Valentine One Gen2 during this operation
 * depends on the `provideUserFeedback` and `skipFeedbackWhenNoChange` parameters, as well as
 * the current alert status:
 *
 * - **Feedback Control ([provideUserFeedback]):**
 *   - If `true`, the V1 will provide audio and visual feedback for the volume change.
 *   - If both main and muted volume levels are changed, the V1's feedback will typically
 *     toggle to indicate both new levels (e.g., displaying main volume then mute volume).
 *   - If `false`, no feedback will be provided, regardless of volume changes (unless an alert
 *     is active, see below).
 *
 * - **Skipping Feedback on No Change ([skipFeedbackWhenNoChange]):**
 *   - If `true` and `provideUserFeedback` is also `true`, feedback will be skipped if the new
 *     `volume` levels are identical to the V1's current volume levels.
 *   - If `false` (or if `provideUserFeedback` is `false`), this parameter has no effect.
 *
 * - **Behavior During an Alert:**
 *   - If an alert is actively being displayed by the Valentine One, the `provideUserFeedback`
 *     flag is ignored. The audio level will change *immediately* to reflect the new `volume`
 *     setting.
 *
 * @param volume The [V1Volume] object containing the desired main and muted volume levels
 *               to write to the Valentine One.
 * @param provideUserFeedback Enables visual & audio feedback.
 * @param skipFeedbackWhenNoChange Skips visual & audio feedback when written volume is the same
 * as the current volume.
 * @param saveVolume `true` if the written value should be persisted through power cycling the
 * V1. If `false` the last saved volume will be used after the next power cycle.
 * @see ESPPacketId.ReqWriteVolume For the underlying ESP request.
 * @see requestCurrentVolume To retrieve the current volume levels programmatically.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)writeVolumeVolume:(KESPLKV1Volume *)volume provideUserFeedback:(BOOL)provideUserFeedback skipFeedbackWhenNoChange:(BOOL)skipFeedbackWhenNoChange saveVolume:(BOOL)saveVolume timeout:(int64_t)timeout completionHandler:(void (^)(id<KESPLKESPResponse> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("writeVolume(volume:provideUserFeedback:skipFeedbackWhenNoChange:saveVolume:timeout:completionHandler:)")));

/**
 * A **hot** [Flow] alert tables. This flow will emit a list of [AlertData] that belong to
 * "table" of alerts actively being detected by the Valentine One.
 *
 * This flow is derived from [packets] by subsequent applications of the [Flow.filter] and
 * [Flow.map] operators on the source flow.
 *
 * @see [packets]
 * @see [AlertData]
 */
@property (readonly) id<KESPLKKotlinx_coroutines_coreFlow> alertTable __attribute__((swift_name("alertTable")));

/**
 * A **hot** [Flow] alert tables. This flow will emit a list of [AlertData] that belong to
 * "table" of alerts actively being detected by the Valentine One. The distinguishing feature
 * between this flow and [alertTable] is that collection will request the Valentine One to start
 * sending alert data. On "completion" the flow will attempt to request the Valentine One to
 * stop sending alert data (not guaranteed).
 *
 * This flow is derived from [packets] by subsequent applications of the [Flow.filter] and
 * [Flow.map] operators on the source flow.
 *
 * @see [packets]
 * @see [AlertData]
 * @see [enableAlertTable]
 */
@property (readonly) id<KESPLKKotlinx_coroutines_coreFlow> alertTableClosable __attribute__((swift_name("alertTableClosable")));

/**
 * [StateFlow] of the current [ESPConnectionStatus] of the client. This connection status will
 * change based on the state of a connection with a [V1connection]. Default value of
 * [ESPConnectionStatus.Disconnected].
 */
@property (readonly) id<KESPLKKotlinx_coroutines_coreStateFlow> connectionStatus __attribute__((swift_name("connectionStatus")));
@property (readonly) KESPLKV1cType *connectionType __attribute__((swift_name("connectionType")));

/**
 * A **cold** [Flow] of [DisplayData] received via the connected [V1connection].
 *
 * @see DisplayData
 */
@property (readonly) id<KESPLKKotlinx_coroutines_coreFlow> displayData __attribute__((swift_name("displayData")));

/**
 * A **hot** [Flow] that represents the [V1Mode] in which the Valentine One's is currently
 * operating.
 * This flow is derived from [displayData] by applying a [Flow.map] operator on the source flow
 * and returning the value of [DisplayData.isTimeSlicing].
 *
 * @see [displayData]
 * @see [DisplayData.mode]
 * @since V4.1028
 */
@property (readonly) id<KESPLKKotlinx_coroutines_coreFlow> infDisplayDataMode __attribute__((swift_name("infDisplayDataMode")));

/**
 * Indicates if the client is currently connected to a [V1connection].
 *
 * This value is derived by comparing the the current value of [connectionStatus] [StateFlow]
 * `==` [ESPConnectionStatus.Connected].
 *
 * @see connectionStatus
 */
@property (readonly) BOOL isConnected __attribute__((swift_name("isConnected")));

/**
 * A **hot** [Flow] that represents if the Valentine One's currently has custom sweeps defined.
 * This flow will emit `false` if custom sweeps have not been defined. `true` is emitted if
 * Valentine One has custom sweeps defined and custom modes will be used if operating in Euro
 * Mode.
 *
 * This flow is derived from [displayData] by applying a [Flow.map] operator on the source flow
 * and returning the value of [DisplayData.isCustomSweep].
 *
 * @see [displayData]
 * @see [DisplayData.isCustomSweep]
 * @see [Aux0.customSweep]
 */
@property (readonly) id<KESPLKKotlinx_coroutines_coreFlow> isCustomSweep __attribute__((swift_name("isCustomSweep")));

/**
 * A **hot** [Flow] that represents the Valentine One's current display status. This flow will
 * emit `false` if the Valentine One's display is showing a mode or the resting display
 * indicator. `true` is emitted if the display is actively showing an alert, volume or other
 * important information.
 *
 * This flow is derived from [displayData] by applying a [Flow.map] operator on the source flow
 * and returning the value of [DisplayData.isDisplayActive].
 *
 * @see [displayData]
 * @see [DisplayData.isDisplayActive]
 * @see [Aux0.displayActive]
 */
@property (readonly) id<KESPLKKotlinx_coroutines_coreFlow> isDisplayActive __attribute__((swift_name("isDisplayActive")));

/**
 * A **hot** [Flow] that represents if the Valentine One's current display is "on" or "off".
 *
 * This flow is derived from [displayData] by applying a [Flow.map] operator on the source flow
 * and returning the value of [DisplayData.isDisplayOn].
 *
 * @see [displayData]
 * @see [DisplayData.isDisplayOn]
 * @see [Aux0.displayOn]
 */
@property (readonly) id<KESPLKKotlinx_coroutines_coreFlow> isDisplayOn __attribute__((swift_name("isDisplayOn")));

/**
 * A **hot** [Flow] that represents if the Valentine One's is currently operating in
 * European ('Euro') mode.
 *
 * This flow is derived from [displayData] by applying a [Flow.map] operator on the source flow
 * and returning the value of [DisplayData.isEuro].
 *
 * @see [displayData]
 * @see [DisplayData.isEuro]
 * @see [Aux0.euroMode]
 */
@property (readonly) id<KESPLKKotlinx_coroutines_coreFlow> isEuro __attribute__((swift_name("isEuro")));

/**
 * A **hot** [Flow] that represents if the Valentine One's is currently operating in
 * Legacy mode.
 *
 * This flow is derived from [displayData] by applying a [Flow.map] operator on the source flow
 * and returning the value of [DisplayData.isLegacy].
 *
 * @see [displayData]
 * @see [DisplayData.isLegacy]
 * @see [Aux0.espLegacy]
 */
@property (readonly) id<KESPLKKotlinx_coroutines_coreFlow> isLegacy __attribute__((swift_name("isLegacy")));

/**
 * A **hot** [Flow] that represents if the Valentine One's is actively searching for alerts.
 * This flow emits `false` if the Valentine One is not actively searching for alerts. `true` is
 * emitted if the Valentine One has successfully signed on and is actively searching for alerts.
 *
 * This flow is derived from [displayData] by applying a [Flow.map] operator on the source flow
 * and returning the value of [DisplayData.isTimeSlicing].
 *
 * @see [displayData]
 * @see [DisplayData.isSearchingForAlerts]
 * @see [Aux0.systemStatus]
 */
@property (readonly) id<KESPLKKotlinx_coroutines_coreFlow> isSearchingForAlerts __attribute__((swift_name("isSearchingForAlerts")));

/**
 * A **hot** [Flow] that represents the Valentine One's current audio status
 * ("muted" or "unmuted").
 *
 * This flow is derived from [displayData] by applying a [Flow.map] operator on the source flow
 * and returning the value of [DisplayData.isSoft].
 *
 * @see [displayData]
 * @see [DisplayData.isSoft]
 * @see [Aux0.soft]
 */
@property (readonly) id<KESPLKKotlinx_coroutines_coreFlow> isSoft __attribute__((swift_name("isSoft")));

/**
 * A **hot** [Flow] that represents if the Valentine One's currently time slicing. This flow
 * emits `false` if no accessories on the ESP bus are to have a time slice following the receipt
 * of the [DisplayData] this flag belongs. `true` is emitted if all accessories are allowed to
 * have a time slice.
 *
 * This flow is derived from [displayData] by applying a [Flow.map] operator on the source flow
 * and returning the value of [DisplayData.isTimeSlicing].
 *
 * @see [displayData]
 * @see [DisplayData.isTimeSlicing]
 * @see [Aux0.tsHoldOff]
 */
@property (readonly) id<KESPLKKotlinx_coroutines_coreFlow> isTimeSlicing __attribute__((swift_name("isTimeSlicing")));

/**
 * A **hot** [Flow] that represents the  __**junk**__ [AlertData] contained in the Valentine
 * One's alert table. This flow will not emit if the Valentine One's alert table is empty or
 * there are no "junk" alerts detected.
 *
 * This flow is derived from [alertTable] by subsequent applications of the [Flow.filter] and
 * [Flow.map] operators on the source flow and returning the first alert with
 * [AlertData.isJunk] == `true`.
 *
 * @see [packets]
 * @see [alertTable]
 * @see [AlertData]
 * @see [AlertData.isJunk]
 */
@property (readonly) id<KESPLKKotlinx_coroutines_coreFlow> junkAlerts __attribute__((swift_name("junkAlerts")));

/**
 * A **hot** [Flow] of "No data detected" signals.
 *
 * This flow will emit [Unit] every 1.5 seconds if no "ESP" data has been detected.
 */
@property (readonly) id<KESPLKKotlinx_coroutines_coreFlow> noData __attribute__((swift_name("noData")));

/**
 * A **hot** Flow of "Notification Data".
 *
 * This flow emits [String]s in-between in the `<:` `>` tags contained in the "demo" ESP data
 * [String] used when constructing a [V1connection.Demo].
 */
@property (readonly) id<KESPLKKotlinx_coroutines_coreFlow> notificationData __attribute__((swift_name("notificationData")));

/**
 * A **cold** [Flow] of [ESPPacket] received via the connected [V1connection].
 */
@property (readonly) id<KESPLKKotlinx_coroutines_coreFlow> packets __attribute__((swift_name("packets")));

/**
 * A **hot** [Flow] that represents the __**priority**__ [AlertData] contained in the Valentine
 * One's alert table. This flow will not emit if the Valentine One's alert table is empty.
 *
 * This flow is derived from [alertTable] by subsequent applications of the [Flow.filter] and
 * [Flow.map] operators on the source flow and returning the first alert with
 * [AlertData.isPriority] == `true`.
 *
 * @see [packets]
 * @see [alertTable]
 * @see [AlertData]
 * @see [AlertData.isPriority]
 */
@property (readonly) id<KESPLKKotlinx_coroutines_coreFlow> priorityAlert __attribute__((swift_name("priorityAlert")));

/**
 * [StateFlow] of the most recently detected [V1CapabilityInfo] of the attached Valentine One
 */
@property (readonly) id<KESPLKKotlinx_coroutines_coreStateFlow> v1CapabilityInfo __attribute__((swift_name("v1CapabilityInfo")));

/**
 * [StateFlow] of the most recently detected [ESPDevice.ValentineOne] of the attached Valentine
 * One. After establishing a connection with a [V1connection], this flow is initialized to
 * [ESPDevice.ValentineOne.Unknown] and will take approximately `4` [ESPPacketId.InfDisplayData]
 * packets to determine.
 */
@property (readonly) id<KESPLKKotlinx_coroutines_coreStateFlow> valentineOneType __attribute__((swift_name("valentineOneType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IESPClientCompanion")))
@interface KESPLKIESPClientCompanion : KESPLKBase
@property (class, readonly, getter=shared) KESPLKIESPClientCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (void)enableLoggingEnabled:(BOOL)enabled __attribute__((swift_name("enableLogging(enabled:)")));

/**
 * Get the client for the given [ESPContext] and [V1ConnectionTypePreference].
 *
 * This is a helper function that will create the client based on the preference.
 *
 * @param preference The preference to use.
 * @param connectionScope The CoroutineScope to use.
 * @return The client.
 */
- (id<KESPLKIESPClient>)getClientPreference:(KESPLKV1ConnectionTypePreference *)preference connectionScope:(id<KESPLKKotlinx_coroutines_coreCoroutineScope>)connectionScope __attribute__((swift_name("getClient(preference:connectionScope:)")));

/**
 * Get a demo client.
 *
 * @param scope The coroutine scope to use.
 * @return The demo client.
 */
- (id<KESPLKIESPClient>)getDemoClientScope:(id<KESPLKKotlinx_coroutines_coreCoroutineScope>)scope __attribute__((swift_name("getDemoClient(scope:)")));

/**
 * Initializes the ESP Library. This should be called as soon as possible.
 * Safe to call multiple times.
 */
- (void)doInitEspContext:(KESPLKESPContext *)espContext loggingEnabled:(BOOL)loggingEnabled __attribute__((swift_name("doInit(espContext:loggingEnabled:)")));
- (BOOL)isBluetoothSupported __attribute__((swift_name("isBluetoothSupported()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)querySystemBluetoothLESupportWithCompletionHandler:(void (^)(KESPLKBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("querySystemBluetoothLESupport(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)querySystemBluetoothSupportWithCompletionHandler:(void (^)(KESPLKBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("querySystemBluetoothSupport(completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IOSLegacyUnsupported")))
@interface KESPLKIOSLegacyUnsupported : KESPLKV1connectionException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LeUnsupported")))
@interface KESPLKLeUnsupported : KESPLKV1connectionException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("V1CapabilityInfo")))
@interface KESPLKV1CapabilityInfo : KESPLKBase
@property (class, readonly, getter=companion) KESPLKV1CapabilityInfoCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL hasAlertDataJunkBit __attribute__((swift_name("hasAlertDataJunkBit")));
@property (readonly) BOOL hasInfDisplayDataLogicMode __attribute__((swift_name("hasInfDisplayDataLogicMode")));
@property (readonly) BOOL hasInfDisplayDataMuteAndBtIndicator __attribute__((swift_name("hasInfDisplayDataMuteAndBtIndicator")));
@property (readonly) BOOL hasInfDisplayDataMuteInformation __attribute__((swift_name("hasInfDisplayDataMuteInformation")));
@property (readonly) BOOL hasInfDisplayDataVolume __attribute__((swift_name("hasInfDisplayDataVolume")));
@property (readonly) BOOL isGen2 __attribute__((swift_name("isGen2")));
@property (readonly) BOOL supportStartupSequenceUserSetting __attribute__((swift_name("supportStartupSequenceUserSetting")));
@property (readonly) BOOL supportsAbortAudioDelay __attribute__((swift_name("supportsAbortAudioDelay")));
@property (readonly) BOOL supportsAllVolumesRequest __attribute__((swift_name("supportsAllVolumesRequest")));
@property (readonly) BOOL supportsAutoMuteUserSettings __attribute__((swift_name("supportsAutoMuteUserSettings")));
@property (readonly) BOOL supportsDefaultSweepRequest __attribute__((swift_name("supportsDefaultSweepRequest")));
@property (readonly) BOOL supportsDisplayActiveBit __attribute__((swift_name("supportsDisplayActiveBit")));
@property (readonly) BOOL supportsDisplayVolumeRequest __attribute__((swift_name("supportsDisplayVolumeRequest")));
@property (readonly) BOOL supportsDoubleTap __attribute__((swift_name("supportsDoubleTap")));
@property (readonly) BOOL supportsFastLaserDetectionUserSetting __attribute__((swift_name("supportsFastLaserDetectionUserSetting")));
@property (readonly) BOOL supportsKAndKaInEuroAndUsa __attribute__((swift_name("supportsKAndKaInEuroAndUsa")));
@property (readonly) BOOL supportsKaAlwaysPriorityUserSetting __attribute__((swift_name("supportsKaAlwaysPriorityUserSetting")));
@property (readonly) BOOL supportsKaThresholdUserSetting __attribute__((swift_name("supportsKaThresholdUserSetting")));
@property (readonly) BOOL supportsMainDisplayRequestAux0Byte __attribute__((swift_name("supportsMainDisplayRequestAux0Byte")));
@property (readonly) BOOL supportsPhotoRadar __attribute__((swift_name("supportsPhotoRadar")));
@property (readonly) BOOL supportsReqDefaultSweepDefinitions __attribute__((swift_name("supportsReqDefaultSweepDefinitions")));
@property (readonly) BOOL supportsRestingDisplayUserSetting __attribute__((swift_name("supportsRestingDisplayUserSetting")));
@property (readonly) BOOL supportsTemporaryVolume __attribute__((swift_name("supportsTemporaryVolume")));
@property (readonly) BOOL supportsVolumeControl __attribute__((swift_name("supportsVolumeControl")));
@property (readonly) BOOL unmutingAlertsAffectsLaser __attribute__((swift_name("unmutingAlertsAffectsLaser")));
- (instancetype)initWithVersion:(double)version __attribute__((swift_name("init(version:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithVersion_:(NSString *)version __attribute__((swift_name("init(version_:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("V1CapabilityInfo.Companion")))
@interface KESPLKV1CapabilityInfoCompanion : KESPLKBase
@property (class, readonly, getter=shared) KESPLKV1CapabilityInfoCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) KESPLKV1CapabilityInfo *DEFAULT __attribute__((swift_name("DEFAULT")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end


/**
 * This enum determines if the client should attempt a connection using a LE or Legacy (RFCOMM/SPP)
 * [V1connection]. This enum
 *
 *
 * @see V1cType
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("V1ConnectionTypePreference")))
@interface KESPLKV1ConnectionTypePreference : KESPLKKotlinEnum<KESPLKV1ConnectionTypePreference *>
@property (class, readonly) KESPLKV1ConnectionTypePreference *auto_ __attribute__((swift_name("auto_")));
@property (class, readonly) KESPLKV1ConnectionTypePreference *le __attribute__((swift_name("le")));
@property (class, readonly) KESPLKV1ConnectionTypePreference *legacy __attribute__((swift_name("legacy")));
@property (class, readonly) NSArray<KESPLKV1ConnectionTypePreference *> *entries __attribute__((swift_name("entries")));
+ (instancetype)alloc __attribute__((unavailable));

/**
 * This enum determines if the client should attempt a connection using a LE or Legacy (RFCOMM/SPP)
 * [V1connection]. This enum
 *
 *
 * @see V1cType
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (KESPLKKotlinArray<KESPLKV1ConnectionTypePreference *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BTDevice")))
@interface KESPLKBTDevice : KESPLKBase
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) CBPeripheral *realDevice __attribute__((swift_name("realDevice")));
- (instancetype)initWithRealDevice:(CBPeripheral *)realDevice __attribute__((swift_name("init(realDevice:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * Possible connection states for __V1c/V1c-LE__.
 *
 * __NOTE:__ From the perspective, the *V1 Gen2* is considered a V1c-LE.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ESPConnectionStatus")))
@interface KESPLKESPConnectionStatus : KESPLKKotlinEnum<KESPLKESPConnectionStatus *>
@property (class, readonly) KESPLKESPConnectionStatus *disconnected __attribute__((swift_name("disconnected")));
@property (class, readonly) KESPLKESPConnectionStatus *connecting __attribute__((swift_name("connecting")));
@property (class, readonly) KESPLKESPConnectionStatus *connectionfailed __attribute__((swift_name("connectionfailed")));
@property (class, readonly) KESPLKESPConnectionStatus *connected __attribute__((swift_name("connected")));
@property (class, readonly) KESPLKESPConnectionStatus *disconnecting __attribute__((swift_name("disconnecting")));
@property (class, readonly) KESPLKESPConnectionStatus *connectionlost __attribute__((swift_name("connectionlost")));
@property (class, readonly) NSArray<KESPLKESPConnectionStatus *> *entries __attribute__((swift_name("entries")));
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Possible connection states for __V1c/V1c-LE__.
 *
 * __NOTE:__ From the perspective, the *V1 Gen2* is considered a V1c-LE.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (KESPLKKotlinArray<KESPLKESPConnectionStatus *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EspUUID")))
@interface KESPLKEspUUID : KESPLKBase
@property (class, readonly, getter=shared) KESPLKEspUUID *shared __attribute__((swift_name("shared")));
@property (readonly) KESPLKKotlinUuid *CLIENT_CHARACTERISTIC_CONFIG_CHARACTERISTIC_UUID __attribute__((swift_name("CLIENT_CHARACTERISTIC_CONFIG_CHARACTERISTIC_UUID")));
@property (readonly) KESPLKKotlinUuid *CLIENT_OUT_V1_IN_SHORT_CHARACTERISTIC_UUID __attribute__((swift_name("CLIENT_OUT_V1_IN_SHORT_CHARACTERISTIC_UUID")));
@property (readonly) KESPLKKotlinUuid *LEGACY_UUID __attribute__((swift_name("LEGACY_UUID")));
@property (readonly) KESPLKKotlinUuid *V1CONNECTION_LE_SERVICE_UUID __attribute__((swift_name("V1CONNECTION_LE_SERVICE_UUID")));
@property (readonly) KESPLKKotlinUuid *V1_OUT_CLIENT_IN_SHORT_CHARACTERISTIC_UUID __attribute__((swift_name("V1_OUT_CLIENT_IN_SHORT_CHARACTERISTIC_UUID")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)espUUID __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IOSCentralManagerState")))
@interface KESPLKIOSCentralManagerState : KESPLKKotlinEnum<KESPLKIOSCentralManagerState *>
@property (class, readonly, getter=companion) KESPLKIOSCentralManagerStateCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) KESPLKIOSCentralManagerState *poweredoff __attribute__((swift_name("poweredoff")));
@property (class, readonly) KESPLKIOSCentralManagerState *poweredon __attribute__((swift_name("poweredon")));
@property (class, readonly) KESPLKIOSCentralManagerState *resetting __attribute__((swift_name("resetting")));
@property (class, readonly) KESPLKIOSCentralManagerState *unauthorized __attribute__((swift_name("unauthorized")));
@property (class, readonly) KESPLKIOSCentralManagerState *unknown __attribute__((swift_name("unknown")));
@property (class, readonly) KESPLKIOSCentralManagerState *unsupported __attribute__((swift_name("unsupported")));
@property (class, readonly) NSArray<KESPLKIOSCentralManagerState *> *entries __attribute__((swift_name("entries")));
@property (readonly) int64_t value_ __attribute__((swift_name("value_")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (KESPLKKotlinArray<KESPLKIOSCentralManagerState *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IOSCentralManagerState.Companion")))
@interface KESPLKIOSCentralManagerStateCompanion : KESPLKBase
@property (class, readonly, getter=shared) KESPLKIOSCentralManagerStateCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (KESPLKIOSCentralManagerState *)fromCBManagerStateLongValue:(int64_t)value __attribute__((swift_name("fromCBManagerStateLong(value:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("V1cType")))
@interface KESPLKV1cType : KESPLKKotlinEnum<KESPLKV1cType *>
@property (class, readonly, getter=companion) KESPLKV1cTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) KESPLKV1cType *legacy __attribute__((swift_name("legacy")));
@property (class, readonly) KESPLKV1cType *le __attribute__((swift_name("le")));
@property (class, readonly) KESPLKV1cType *demo __attribute__((swift_name("demo")));
@property (class, readonly) NSArray<KESPLKV1cType *> *entries __attribute__((swift_name("entries")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (KESPLKKotlinArray<KESPLKV1cType *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("V1cType.Companion")))
@interface KESPLKV1cTypeCompanion : KESPLKBase
@property (class, readonly, getter=shared) KESPLKV1cTypeCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<KESPLKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<KESPLKKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(KESPLKKotlinArray<id<KESPLKKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * Sealed interface representing a `physical` V1connection (RFCOMM/SPP or LE).
 * This can either be a [Remote] connection to a physical Bluetooth device or a [Demo] connection.
 */
__attribute__((swift_name("V1connection")))
@protocol KESPLKV1connection
@required

/**
 * Indicates if this [V1connection] can be persisted.
 */
@property (readonly) BOOL canSave __attribute__((swift_name("canSave")));
@property (readonly) NSString *id_ __attribute__((swift_name("id_")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) KESPLKV1cType *type __attribute__((swift_name("type")));
@end


/**
 * Represents a 'mock' V1connection where all ESP data is provided by [demoESP].
 *
 * @property demoESP String containing Hex ESP data.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("V1connectionDemo")))
@interface KESPLKV1connectionDemo : KESPLKBase <KESPLKV1connection>
@property (class, readonly, getter=companion) KESPLKV1connectionDemoCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL canSave __attribute__((swift_name("canSave")));
@property (readonly) NSString *demoESP __attribute__((swift_name("demoESP")));
@property (readonly) NSString *id_ __attribute__((swift_name("id_")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) KESPLKV1cType *type __attribute__((swift_name("type")));
- (instancetype)initWithDemoESP:(NSString *)demoESP __attribute__((swift_name("init(demoESP:)"))) __attribute__((objc_designated_initializer));
- (KESPLKV1connectionDemo *)doCopyDemoESP:(NSString *)demoESP __attribute__((swift_name("doCopy(demoESP:)")));

/**
 * Represents a 'mock' V1connection where all ESP data is provided by [demoESP].
 *
 * @property demoESP String containing Hex ESP data.
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Represents a 'mock' V1connection where all ESP data is provided by [demoESP].
 *
 * @property demoESP String containing Hex ESP data.
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Represents a 'mock' V1connection where all ESP data is provided by [demoESP].
 *
 * @property demoESP String containing Hex ESP data.
 */
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("V1connectionDemo.Companion")))
@interface KESPLKV1connectionDemoCompanion : KESPLKBase
@property (class, readonly, getter=shared) KESPLKV1connectionDemoCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)fromInputStreamIs:(id<KESPLKKotlinx_io_coreRawSource>)is completionHandler:(void (^)(id<KESPLKV1connection> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("fromInputStream(is:completionHandler:)")));
@end


/**
 * Represents a remote V1connection backed by a bluetooth connection to transmit ESP data.
 *
 * @property device The underlying [BluetoothDevice] for this connection.
 * @property type The [V1cType] of this connection.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("V1connectionRemote")))
@interface KESPLKV1connectionRemote : KESPLKBase <KESPLKV1connection>
@property (readonly) BOOL canSave __attribute__((swift_name("canSave")));
@property (readonly) NSString *id_ __attribute__((swift_name("id_")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) KESPLKV1cType *type __attribute__((swift_name("type")));
- (instancetype)initWithDevice:(KESPLKBTDevice *)device type:(KESPLKV1cType *)type __attribute__((swift_name("init(device:type:)"))) __attribute__((objc_designated_initializer));
- (KESPLKV1connectionRemote *)doCopyDevice:(KESPLKBTDevice *)device type:(KESPLKV1cType *)type __attribute__((swift_name("doCopy(device:type:)")));

/**
 * Represents a remote V1connection backed by a bluetooth connection to transmit ESP data.
 *
 * @property device The underlying [BluetoothDevice] for this connection.
 * @property type The [V1cType] of this connection.
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Represents a remote V1connection backed by a bluetooth connection to transmit ESP data.
 *
 * @property device The underlying [BluetoothDevice] for this connection.
 * @property type The [V1cType] of this connection.
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Represents a remote V1connection backed by a bluetooth connection to transmit ESP data.
 *
 * @property device The underlying [BluetoothDevice] for this connection.
 * @property type The [V1cType] of this connection.
 */
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * Represents the result of a [V1connection] scan.
 *
 * @property rssi The received signal strength indicator (RSSI) of the scanned device.
 * @property device The [V1connection] that was scanned.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("V1connectionScanResult")))
@interface KESPLKV1connectionScanResult : KESPLKBase
@property (readonly) id<KESPLKV1connection> device __attribute__((swift_name("device")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) int32_t rssi __attribute__((swift_name("rssi")));
- (instancetype)initWithRssi:(int32_t)rssi device:(id<KESPLKV1connection>)device __attribute__((swift_name("init(rssi:device:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
@end


/**
 * Interface defining the contract for a connection to an ESP device.
 * This interface provides properties and methods to manage the connection lifecycle,
 * send and receive data, and observe connection status and device information.
 */
__attribute__((swift_name("IConnection")))
@protocol KESPLKIConnection
@required

/**
 * Attempts to establish a connection with the provided [V1connection].
 *
 * @param v1c The [V1connection] to attempt a connection.
 * @param directConnect `true` if the an "immediate" connection should be attempted with [v1c];
 * attempts will timeout after a number of seconds. `false` if a connection should be
 * established as soon as the [V1connection] becomes available.
 * This argument is intended for clients wishing to attempt a connection that will not timeout
 * such as background re/connections. Under normal circumstances, the default value
 * (`true`) is the desired behavior. This argument only has an effect for [V1cType.LE]
 * connections on the **Android** platform. On iOS, Bluetooth connections attempts do not
 * timeout. To abort a connection attempt call [disconnect].
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)connectV1c:(id<KESPLKV1connection>)v1c directConnect:(BOOL)directConnect completionHandler:(void (^)(KESPLKBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("connect(v1c:directConnect:completionHandler:)")));

/**
 * Disconnects from the connected [V1connection].
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)disconnectWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("disconnect(completionHandler:)")));

/**
 * Filters a list of [V1connection]s that are compatible with [connectionType].
 */
- (NSArray<id<KESPLKV1connection>> *)filterDevicesDevices:(NSArray<id<KESPLKV1connection>> *)devices __attribute__((swift_name("filterDevices(devices:)")));

/**
 * Scans for nearby [V1connection]s based on the provided [scanMode].
 *
 * @param scanMode The [ESPScanMode] to use for scanning. This argument only has an effect for
 * [V1cType.LE] connections on the **Android** platform. Other platforms and [V1cType] this
 * argument is ignored.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)scanScanMode:(KESPLKESPScanMode *)scanMode completionHandler:(void (^)(id<KESPLKKotlinx_coroutines_coreFlow> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("scan(scanMode:completionHandler:)")));

/**
 * Attempts to write [request] to the connected [V1connection].
 * @param request The [ESPRequest] to be sent.
 * @param waitForV1TypeDuration The duration to wait for the V1 type to be determined.
 *
 * @return [ESPResponse] indicating the success or failure of the request.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)writeRequestRequest:(KESPLKESPRequest *)request waitForV1TypeDuration:(int64_t)waitForV1TypeDuration completionHandler:(void (^)(id<KESPLKESPResponse> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("writeRequest(request:waitForV1TypeDuration:completionHandler:)")));

/**
 * Controls if the connection should track echo ESP data.
 */
@property BOOL canEchoQueue __attribute__((swift_name("canEchoQueue")));
@property (readonly) id<KESPLKKotlinx_coroutines_coreCoroutineScope> connectionScope __attribute__((swift_name("connectionScope")));
@property (readonly) id<KESPLKKotlinx_coroutines_coreStateFlow> connectionStatus __attribute__((swift_name("connectionStatus")));
@property (readonly) KESPLKV1cType *connectionType __attribute__((swift_name("connectionType")));

/**
 * Stream of ESP data received from the connected [V1connection].
 */
@property (readonly) id<KESPLKKotlinx_coroutines_coreFlow> espData __attribute__((swift_name("espData")));
@property (readonly) BOOL hasDeterminedV1Type __attribute__((swift_name("hasDeterminedV1Type")));
@property (readonly) BOOL hasV1Version __attribute__((swift_name("hasV1Version")));
@property (readonly) id<KESPLKKotlinx_coroutines_coreStateFlow> isTimeSlicing __attribute__((swift_name("isTimeSlicing")));

/**
 * Stream of 'No Data' notifications that are emitted after [staleDataWatchDogTimeout]
 * milliseconds has passed without any ESP data being received from the connected [V1connection].
 */
@property (readonly) id<KESPLKKotlinx_coroutines_coreFlow> noData __attribute__((swift_name("noData")));

/**
 * Stream of notifications received from the connected [V1connection].
 * Note: this is presently only used by [DemoConnection].
 */
@property (readonly) id<KESPLKKotlinx_coroutines_coreFlow> notificationData __attribute__((swift_name("notificationData")));
@property (readonly) id<KESPLKKotlinx_coroutines_coreStateFlow> v1Type __attribute__((swift_name("v1Type")));
@property (readonly) id<KESPLKKotlinx_coroutines_coreStateFlow> v1Version __attribute__((swift_name("v1Version")));
@end


/**
 * Abstract class representing a base connection for ESP communication.
 * This class provides common functionality and properties for different connection types.
 *
 * @property connectionScope The [CoroutineScope] in which connection-related operations are performed.
 */
__attribute__((swift_name("BaseConnection")))
@interface KESPLKBaseConnection : KESPLKBase <KESPLKIConnection>
@property (readonly) id<KESPLKKotlinx_coroutines_coreMutableStateFlow> _connectionStatus __attribute__((swift_name("_connectionStatus")));
@property (readonly) id<KESPLKKotlinx_coroutines_coreMutableSharedFlow> _espData __attribute__((swift_name("_espData")));
@property (readonly) id<KESPLKKotlinx_coroutines_coreMutableSharedFlow> _notificationData __attribute__((swift_name("_notificationData")));
@property BOOL canEchoQueue __attribute__((swift_name("canEchoQueue")));
@property (readonly) id<KESPLKKotlinx_coroutines_coreCoroutineScope> connectionScope __attribute__((swift_name("connectionScope")));
@property (readonly) id<KESPLKKotlinx_coroutines_coreStateFlow> connectionStatus __attribute__((swift_name("connectionStatus")));
@property (readonly) id<KESPLKKotlinx_coroutines_coreFlow> espData __attribute__((swift_name("espData")));
@property (readonly) BOOL hasDeterminedV1Type __attribute__((swift_name("hasDeterminedV1Type")));
@property (readonly) BOOL hasV1Version __attribute__((swift_name("hasV1Version")));
@property (readonly) id<KESPLKKotlinx_coroutines_coreStateFlow> isTimeSlicing __attribute__((swift_name("isTimeSlicing")));
@property (readonly) id<KESPLKPlatformLogger> logger __attribute__((swift_name("logger")));
@property (readonly) id<KESPLKKotlinx_coroutines_coreSharedFlow> noData __attribute__((swift_name("noData")));
@property (readonly) id<KESPLKKotlinx_coroutines_coreFlow> notificationData __attribute__((swift_name("notificationData")));
@property (readonly) id<KESPLKKotlinx_coroutines_coreStateFlow> v1Type __attribute__((swift_name("v1Type")));
@property (readonly) id<KESPLKKotlinx_coroutines_coreStateFlow> v1Version __attribute__((swift_name("v1Version")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)cleanupForDisconnectionWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("cleanupForDisconnection(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)connectV1c:(id<KESPLKV1connection>)v1c directConnect:(BOOL)directConnect completionHandler:(void (^)(KESPLKBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("connect(v1c:directConnect:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)disconnectWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("disconnect(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)onConnectionLostWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("onConnectionLost(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)onDisconnectedWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("onDisconnected(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)performConnectionV1c:(id<KESPLKV1connection>)v1c directConnect:(BOOL)directConnect completionHandler:(void (^)(KESPLKBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("performConnection(v1c:directConnect:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)performDisconnectWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("performDisconnect(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)processESPDataEspData:(KESPLKKotlinByteArray *)espData completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("processESPData(espData:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)writeBytesBytes:(KESPLKKotlinByteArray *)bytes completionHandler:(void (^)(KESPLKBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("writeBytes(bytes:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)writeRequestRequest:(KESPLKESPRequest *)request waitForV1TypeDuration:(int64_t)waitForV1TypeDuration completionHandler:(void (^)(id<KESPLKESPResponse> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("writeRequest(request:waitForV1TypeDuration:completionHandler:)")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Echo")))
@interface KESPLKEcho : KESPLKBase
@property (readonly) KESPLKKotlinByteArray *packetPayload __attribute__((swift_name("packetPayload")));
@property (readonly) KESPLKKotlinInstant *txTime __attribute__((swift_name("txTime")));
- (instancetype)initWithPacketPayload:(KESPLKKotlinByteArray *)packetPayload txTime:(KESPLKKotlinInstant *)txTime __attribute__((swift_name("init(packetPayload:txTime:)"))) __attribute__((objc_designated_initializer));
- (KESPLKEcho *)doCopyPacketPayload:(KESPLKKotlinByteArray *)packetPayload txTime:(KESPLKKotlinInstant *)txTime __attribute__((swift_name("doCopy(packetPayload:txTime:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (BOOL)hasExpiredNow:(KESPLKKotlinInstant *)now expiration:(int64_t)expiration __attribute__((swift_name("hasExpired(now:expiration:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("ESPCoreBluetoothEvent")))
@protocol KESPLKESPCoreBluetoothEvent
@required
@property (readonly) CBPeripheral *peripheral __attribute__((swift_name("peripheral")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CentralManagerConnectionEvent")))
@interface KESPLKCentralManagerConnectionEvent : KESPLKBase <KESPLKESPCoreBluetoothEvent>
@property (readonly) BOOL isDisconnected __attribute__((swift_name("isDisconnected")));
@property (readonly) CBPeripheral *peripheral __attribute__((swift_name("peripheral")));
@property (readonly) KESPLKESPConnectionStatus *status __attribute__((swift_name("status")));
- (instancetype)initWithPeripheral:(CBPeripheral *)peripheral status:(KESPLKESPConnectionStatus *)status __attribute__((swift_name("init(peripheral:status:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CentralManagerDiscoveryEvent")))
@interface KESPLKCentralManagerDiscoveryEvent : KESPLKBase <KESPLKESPCoreBluetoothEvent>
@property (readonly) CBPeripheral *peripheral __attribute__((swift_name("peripheral")));
@property (readonly) int32_t rssi __attribute__((swift_name("rssi")));
- (instancetype)initWithPeripheral:(CBPeripheral *)peripheral rssi:(int32_t)rssi __attribute__((swift_name("init(peripheral:rssi:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("ESPCBCharacteristicEvent")))
@protocol KESPLKESPCBCharacteristicEvent <KESPLKESPCoreBluetoothEvent>
@required
- (BOOL)isSuccessful __attribute__((swift_name("isSuccessful()")));
@property (readonly) CBCharacteristic *characteristic __attribute__((swift_name("characteristic")));
@property (readonly) NSError * _Nullable error __attribute__((swift_name("error")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CharacteristicDidUpdateNotificationState")))
@interface KESPLKCharacteristicDidUpdateNotificationState : KESPLKBase <KESPLKESPCBCharacteristicEvent>
@property (readonly) CBCharacteristic *characteristic __attribute__((swift_name("characteristic")));
@property (readonly) BOOL enabled __attribute__((swift_name("enabled")));
@property (readonly) NSError * _Nullable error __attribute__((swift_name("error")));
@property (readonly) CBPeripheral *peripheral __attribute__((swift_name("peripheral")));
- (instancetype)initWithPeripheral:(CBPeripheral *)peripheral characteristic:(CBCharacteristic *)characteristic enabled:(BOOL)enabled error:(NSError * _Nullable)error __attribute__((swift_name("init(peripheral:characteristic:enabled:error:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CharacteristicDidUpdateValue")))
@interface KESPLKCharacteristicDidUpdateValue : KESPLKBase <KESPLKESPCBCharacteristicEvent>
@property (readonly) CBCharacteristic *characteristic __attribute__((swift_name("characteristic")));
@property (readonly) NSError * _Nullable error __attribute__((swift_name("error")));
@property (readonly) CBPeripheral *peripheral __attribute__((swift_name("peripheral")));
@property (readonly) KESPLKKotlinByteArray *value __attribute__((swift_name("value")));
- (instancetype)initWithPeripheral:(CBPeripheral *)peripheral characteristic:(CBCharacteristic *)characteristic value:(KESPLKKotlinByteArray *)value error:(NSError * _Nullable)error __attribute__((swift_name("init(peripheral:characteristic:value:error:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CharacteristicDidWriteValue")))
@interface KESPLKCharacteristicDidWriteValue : KESPLKBase <KESPLKESPCBCharacteristicEvent>
@property (readonly) CBCharacteristic *characteristic __attribute__((swift_name("characteristic")));
@property (readonly) NSError * _Nullable error __attribute__((swift_name("error")));
@property (readonly) CBPeripheral *peripheral __attribute__((swift_name("peripheral")));
- (instancetype)initWithPeripheral:(CBPeripheral *)peripheral characteristic:(CBCharacteristic *)characteristic error:(NSError * _Nullable)error __attribute__((swift_name("init(peripheral:characteristic:error:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("ESPLeException")))
@interface KESPLKESPLeException : KESPLKKotlinException
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithCause:(KESPLKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KESPLKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CharacteristicWriteException")))
@interface KESPLKCharacteristicWriteException : KESPLKESPLeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreBluetoothOperation")))
@interface KESPLKCoreBluetoothOperation : KESPLKKotlinEnum<KESPLKCoreBluetoothOperation *>
@property (class, readonly) KESPLKCoreBluetoothOperation *discoverservices __attribute__((swift_name("discoverservices")));
@property (class, readonly) KESPLKCoreBluetoothOperation *discoverservicecharacteristics __attribute__((swift_name("discoverservicecharacteristics")));
@property (class, readonly) KESPLKCoreBluetoothOperation *remoterssi __attribute__((swift_name("remoterssi")));
@property (class, readonly) KESPLKCoreBluetoothOperation *characteristicwrite __attribute__((swift_name("characteristicwrite")));
@property (class, readonly) KESPLKCoreBluetoothOperation *characteristicnotifications __attribute__((swift_name("characteristicnotifications")));
@property (class, readonly) NSArray<KESPLKCoreBluetoothOperation *> *entries __attribute__((swift_name("entries")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (KESPLKKotlinArray<KESPLKCoreBluetoothOperation *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EnableNotificationsException")))
@interface KESPLKEnableNotificationsException : KESPLKESPLeException
- (instancetype)initWithEnable:(BOOL)enable uuid:(KESPLKKotlinUuid *)uuid __attribute__((swift_name("init(enable:uuid:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FailedToDiscoverServiceCharacteristics")))
@interface KESPLKFailedToDiscoverServiceCharacteristics : KESPLKESPLeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FailedToDiscoverServices")))
@interface KESPLKFailedToDiscoverServices : KESPLKESPLeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LeConnectionFailed")))
@interface KESPLKLeConnectionFailed : KESPLKESPLeException
- (instancetype)initWithDeviceName:(NSString *)deviceName __attribute__((swift_name("init(deviceName:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PeripheralIsReadyToSend")))
@interface KESPLKPeripheralIsReadyToSend : KESPLKBase <KESPLKESPCoreBluetoothEvent>
@property (readonly) CBPeripheral *peripheral __attribute__((swift_name("peripheral")));
- (instancetype)initWithPeripheral:(CBPeripheral *)peripheral __attribute__((swift_name("init(peripheral:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PeripheralNotConnectedException")))
@interface KESPLKPeripheralNotConnectedException : KESPLKESPLeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReadRemoteRssiEvent")))
@interface KESPLKReadRemoteRssiEvent : KESPLKBase <KESPLKESPCoreBluetoothEvent>
@property (readonly) NSError * _Nullable error __attribute__((swift_name("error")));
@property (readonly) CBPeripheral *peripheral __attribute__((swift_name("peripheral")));
@property (readonly) int32_t rssi __attribute__((swift_name("rssi")));
- (instancetype)initWithPeripheral:(CBPeripheral *)peripheral rssi:(int32_t)rssi error:(NSError * _Nullable)error __attribute__((swift_name("init(peripheral:rssi:error:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isSuccessful __attribute__((swift_name("isSuccessful()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReadRemoteRssiException")))
@interface KESPLKReadRemoteRssiException : KESPLKESPLeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ServiceCharacteristicsDiscoveredEvent")))
@interface KESPLKServiceCharacteristicsDiscoveredEvent : KESPLKBase <KESPLKESPCoreBluetoothEvent>
@property (readonly) NSError * _Nullable error __attribute__((swift_name("error")));
@property (readonly) CBPeripheral *peripheral __attribute__((swift_name("peripheral")));
@property (readonly) CBService *service __attribute__((swift_name("service")));
- (instancetype)initWithPeripheral:(CBPeripheral *)peripheral service:(CBService *)service error:(NSError * _Nullable)error __attribute__((swift_name("init(peripheral:service:error:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isSuccessful __attribute__((swift_name("isSuccessful()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ServicesDiscoveredEvent")))
@interface KESPLKServicesDiscoveredEvent : KESPLKBase <KESPLKESPCoreBluetoothEvent>
@property (readonly) NSError * _Nullable error __attribute__((swift_name("error")));
@property (readonly) CBPeripheral *peripheral __attribute__((swift_name("peripheral")));
@property (readonly) NSArray<CBService *> *services __attribute__((swift_name("services")));
- (instancetype)initWithPeripheral:(CBPeripheral *)peripheral services:(NSArray<CBService *> *)services error:(NSError * _Nullable)error __attribute__((swift_name("init(peripheral:services:error:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isSuccessful __attribute__((swift_name("isSuccessful()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UnknownException")))
@interface KESPLKUnknownException : KESPLKESPLeException
- (instancetype)initWithOperation:(KESPLKCoreBluetoothOperation *)operation __attribute__((swift_name("init(operation:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end


/**
 *  Scan mode for [IV1cScanner].
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ESPScanMode")))
@interface KESPLKESPScanMode : KESPLKKotlinEnum<KESPLKESPScanMode *>
@property (class, readonly) KESPLKESPScanMode *opportunistic __attribute__((swift_name("opportunistic")));
@property (class, readonly) KESPLKESPScanMode *lowpower __attribute__((swift_name("lowpower")));
@property (class, readonly) KESPLKESPScanMode *balanced __attribute__((swift_name("balanced")));
@property (class, readonly) KESPLKESPScanMode *lowlatency __attribute__((swift_name("lowlatency")));
@property (class, readonly) NSArray<KESPLKESPScanMode *> *entries __attribute__((swift_name("entries")));
+ (instancetype)alloc __attribute__((unavailable));

/**
 *  Scan mode for [IV1cScanner].
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (KESPLKKotlinArray<KESPLKESPScanMode *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((swift_name("IV1cScanner")))
@protocol KESPLKIV1cScanner
@required
- (id<KESPLKKotlinx_coroutines_coreFlow>)startScanScanMode:(KESPLKESPScanMode *)scanMode __attribute__((swift_name("startScan(scanMode:)")));
@property (readonly) KESPLKV1cType *scanType __attribute__((swift_name("scanType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IV1cScannerCompanion")))
@interface KESPLKIV1cScannerCompanion : KESPLKBase
@property (class, readonly, getter=shared) KESPLKIV1cScannerCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<KESPLKIV1cScanner>)getScannerConnType:(KESPLKV1cType *)connType __attribute__((swift_name("getScanner(connType:)")));
@end

__attribute__((unavailable("can't be imported")))
__attribute__((swift_name("ByteList")))
@protocol KESPLKByteList
@required
@end


/**
 * A custom primitive [Byte] collection class that does not cause auto-boxing when storing and
 * retrieving elements.
 */
__attribute__((unavailable("can't be imported")))
__attribute__((swift_name("MutableByteList")))
@interface KESPLKMutableByteList : NSObject
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ESPModule")))
@interface KESPLKESPModule : KESPLKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlatformNativeModule")))
@interface KESPLKPlatformNativeModule : KESPLKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end


/**
 * Represents an ESP request to be sent to an ESP device.
 *
 * @property destination The [ESPDevice] that this request is intended for.
 * @property requestId The [ESPPacketId] of this request, identifying the type of request.
 * @property payload The data associated with this request. Defaults to an empty byte array.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ESPRequest")))
@interface KESPLKESPRequest : KESPLKBase
@property (readonly) KESPLKESPDevice *destination __attribute__((swift_name("destination")));
@property (readonly) KESPLKKotlinByteArray *payload __attribute__((swift_name("payload")));
@property (readonly) KESPLKESPPacketId *requestId __attribute__((swift_name("requestId")));
- (instancetype)initWithDestination:(KESPLKESPDevice *)destination requestId:(KESPLKESPPacketId *)requestId payload:(KESPLKKotlinByteArray *)payload __attribute__((swift_name("init(destination:requestId:payload:)"))) __attribute__((objc_designated_initializer));
- (KESPLKESPRequest *)doCopyDestination:(KESPLKESPDevice *)destination requestId:(KESPLKESPPacketId *)requestId payload:(KESPLKKotlinByteArray *)payload __attribute__((swift_name("doCopy(destination:requestId:payload:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Represents an ESP request to be sent to an ESP device.
 *
 * @property destination The [ESPDevice] that this request is intended for.
 * @property requestId The [ESPPacketId] of this request, identifying the type of request.
 * @property payload The data associated with this request. Defaults to an empty byte array.
 */
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * Represents the current status of a SAVVY.
 *
 * This class encapsulates the current speed threshold and status information related to SAVVY.
 *
 * @property currentSpeedThresholdKPH The current speed threshold in kilometers per hour (KPH).
 * @property status A byte representing the status of SAVVY, where individual bits correspond to
 * different flags.
 *
 * @property isThresholdUserOverride Indicates whether the speed threshold has been overridden by
 * the user.
 * This is determined by checking the 0th bit of the [status] byte.
 * @property currentSpeedThresholdMPH The current speed threshold in miles per hour (MPH),
 * calculated from [currentSpeedThresholdKPH].
 * @property isUnmuteEnabled Indicates whether unmuting is enabled.
 * This is determined by checking the 1st bit of the [status] byte.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SAVVYStatus")))
@interface KESPLKSAVVYStatus : KESPLKBase
@property (readonly) int32_t currentSpeedThresholdKPH __attribute__((swift_name("currentSpeedThresholdKPH")));
@property (readonly) int32_t currentSpeedThresholdMPH __attribute__((swift_name("currentSpeedThresholdMPH")));
@property (readonly) BOOL isThresholdUserOverride __attribute__((swift_name("isThresholdUserOverride")));
@property (readonly) BOOL isUnmuteEnabled __attribute__((swift_name("isUnmuteEnabled")));
- (instancetype)initWithCurrentSpeedThresholdKPH:(int32_t)currentSpeedThresholdKPH status:(int8_t)status __attribute__((swift_name("init(currentSpeedThresholdKPH:status:)"))) __attribute__((objc_designated_initializer));
- (KESPLKSAVVYStatus *)doCopyCurrentSpeedThresholdKPH:(int32_t)currentSpeedThresholdKPH status:(int8_t)status __attribute__((swift_name("doCopy(currentSpeedThresholdKPH:status:)")));

/**
 * Represents the current status of a SAVVY.
 *
 * This class encapsulates the current speed threshold and status information related to SAVVY.
 *
 * @property currentSpeedThresholdKPH The current speed threshold in kilometers per hour (KPH).
 * @property status A byte representing the status of SAVVY, where individual bits correspond to
 * different flags.
 *
 * @property isThresholdUserOverride Indicates whether the speed threshold has been overridden by
 * the user.
 * This is determined by checking the 0th bit of the [status] byte.
 * @property currentSpeedThresholdMPH The current speed threshold in miles per hour (MPH),
 * calculated from [currentSpeedThresholdKPH].
 * @property isUnmuteEnabled Indicates whether unmuting is enabled.
 * This is determined by checking the 1st bit of the [status] byte.
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Represents the current status of a SAVVY.
 *
 * This class encapsulates the current speed threshold and status information related to SAVVY.
 *
 * @property currentSpeedThresholdKPH The current speed threshold in kilometers per hour (KPH).
 * @property status A byte representing the status of SAVVY, where individual bits correspond to
 * different flags.
 *
 * @property isThresholdUserOverride Indicates whether the speed threshold has been overridden by
 * the user.
 * This is determined by checking the 0th bit of the [status] byte.
 * @property currentSpeedThresholdMPH The current speed threshold in miles per hour (MPH),
 * calculated from [currentSpeedThresholdKPH].
 * @property isUnmuteEnabled Indicates whether unmuting is enabled.
 * This is determined by checking the 1st bit of the [status] byte.
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Represents the current status of a SAVVY.
 *
 * This class encapsulates the current speed threshold and status information related to SAVVY.
 *
 * @property currentSpeedThresholdKPH The current speed threshold in kilometers per hour (KPH).
 * @property status A byte representing the status of SAVVY, where individual bits correspond to
 * different flags.
 *
 * @property isThresholdUserOverride Indicates whether the speed threshold has been overridden by
 * the user.
 * This is determined by checking the 0th bit of the [status] byte.
 * @property currentSpeedThresholdMPH The current speed threshold in miles per hour (MPH),
 * calculated from [currentSpeedThresholdKPH].
 * @property isUnmuteEnabled Indicates whether unmuting is enabled.
 * This is determined by checking the 1st bit of the [status] byte.
 */
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * Represents the different ways to override the SAVVY's thumbwheel setting.
 *
 * This sealed class defines the possible overrides for the SAVVY's thumbwheel, which controls
 * the speed at which the Valentine One is muted.
 *
 * @property speed The internal speed value associated with the override.
 */
__attribute__((swift_name("SAVVYThumbwheelOverride")))
@interface KESPLKSAVVYThumbwheelOverride : KESPLKBase
@end


/**
 * The SAVVY should mute the Valentine One at all speeds.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SAVVYThumbwheelOverride.Auto")))
@interface KESPLKSAVVYThumbwheelOverrideAuto : KESPLKSAVVYThumbwheelOverride
@property (class, readonly, getter=shared) KESPLKSAVVYThumbwheelOverrideAuto *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));

/**
 * The SAVVY should mute the Valentine One at all speeds.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)auto_ __attribute__((swift_name("init()")));

/**
 * The SAVVY should mute the Valentine One at all speeds.
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * The SAVVY should mute the Valentine One at all speeds.
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * The SAVVY should mute the Valentine One at all speeds.
 */
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * The SAVVY should mute the Valentine One at the specified speed (in KPH) overriding the
 * current thumbwheel value.
 *
 * This value is not persisted across reboots and will be overwritten if the SAVVY's thumbwheel
 * is changed.
 *
 * @property speedKPH The speed to mute at, in KPH.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SAVVYThumbwheelOverride.Custom")))
@interface KESPLKSAVVYThumbwheelOverrideCustom : KESPLKSAVVYThumbwheelOverride
- (instancetype)initWithSpeedKPH:(int8_t)speedKPH __attribute__((swift_name("init(speedKPH:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * The SAVVY should not mute the Valentine One.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SAVVYThumbwheelOverride.None")))
@interface KESPLKSAVVYThumbwheelOverrideNone : KESPLKSAVVYThumbwheelOverride
@property (class, readonly, getter=shared) KESPLKSAVVYThumbwheelOverrideNone *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));

/**
 * The SAVVY should not mute the Valentine One.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)none __attribute__((swift_name("init()")));

/**
 * The SAVVY should not mute the Valentine One.
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * The SAVVY should not mute the Valentine One.
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * The SAVVY should not mute the Valentine One.
 */
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * Current volume levels of the Valentine One's main and muted audio.
 *
 * @since V4.1026
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("V1Volume")))
@interface KESPLKV1Volume : KESPLKBase
@property (readonly) int32_t mainVolume __attribute__((swift_name("mainVolume")));
@property (readonly) int32_t mutedVolume __attribute__((swift_name("mutedVolume")));
- (instancetype)initWithMainVolume:(int32_t)mainVolume mutedVolume:(int32_t)mutedVolume __attribute__((swift_name("init(mainVolume:mutedVolume:)"))) __attribute__((objc_designated_initializer));
- (KESPLKV1Volume *)doCopyMainVolume:(int32_t)mainVolume mutedVolume:(int32_t)mutedVolume __attribute__((swift_name("doCopy(mainVolume:mutedVolume:)")));

/**
 * Current volume levels of the Valentine One's main and muted audio.
 *
 * @since V4.1026
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Current volume levels of the Valentine One's main and muted audio.
 *
 * @since V4.1026
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Current volume levels of the Valentine One's main and muted audio.
 *
 * @since V4.1026
 */
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * The volume level of the Valentine One's audio is not muted.
 * Valid values are 0-9
 */

/**
 * The volume level of the Valentine One's audio when muted.
 * Valid values are 0-9
 *
 */
@end


/**
 * The current and saved volume levels of the Valentine One's main and muted audio.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("V1Volumes")))
@interface KESPLKV1Volumes : KESPLKBase
@property (readonly) KESPLKV1Volume *currentVolume __attribute__((swift_name("currentVolume")));
@property (readonly) KESPLKV1Volume *savedVolume __attribute__((swift_name("savedVolume")));
- (instancetype)initWithCurrentVolume:(KESPLKV1Volume *)currentVolume savedVolume:(KESPLKV1Volume *)savedVolume __attribute__((swift_name("init(currentVolume:savedVolume:)"))) __attribute__((objc_designated_initializer));
- (KESPLKV1Volumes *)doCopyCurrentVolume:(KESPLKV1Volume *)currentVolume savedVolume:(KESPLKV1Volume *)savedVolume __attribute__((swift_name("doCopy(currentVolume:savedVolume:)")));

/**
 * The current and saved volume levels of the Valentine One's main and muted audio.
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * The current and saved volume levels of the Valentine One's main and muted audio.
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * The current and saved volume levels of the Valentine One's main and muted audio.
 */
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * Current volume levels of the Valentine One's main and muted audio. This value may differ from
 * [currentVolume] based on the values used when calling calling [IESPClient.writeVolume].
 */

/**
 * The "saved" volume levels of the Valentine One's main and muted audio. This value may differ
 * from [currentVolume] based on the values used when calling calling [IESPClient.writeVolume].
 */
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AlertArrow")))
@interface KESPLKAlertArrow : KESPLKKotlinEnum<KESPLKAlertArrow *>
@property (class, readonly, getter=companion) KESPLKAlertArrowCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) KESPLKAlertArrow *front __attribute__((swift_name("front")));
@property (class, readonly) KESPLKAlertArrow *side __attribute__((swift_name("side")));
@property (class, readonly) KESPLKAlertArrow *rear __attribute__((swift_name("rear")));
@property (class, readonly) KESPLKAlertArrow *none __attribute__((swift_name("none")));
@property (class, readonly) NSArray<KESPLKAlertArrow *> *entries __attribute__((swift_name("entries")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (KESPLKKotlinArray<KESPLKAlertArrow *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AlertArrow.Companion")))
@interface KESPLKAlertArrowCompanion : KESPLKBase
@property (class, readonly, getter=shared) KESPLKAlertArrowCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (KESPLKAlertArrow *)fromByteB:(int8_t)b __attribute__((swift_name("fromByte(b:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AlertBand")))
@interface KESPLKAlertBand : KESPLKKotlinEnum<KESPLKAlertBand *>
@property (class, readonly, getter=companion) KESPLKAlertBandCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) KESPLKAlertBand *laser __attribute__((swift_name("laser")));
@property (class, readonly) KESPLKAlertBand *ka __attribute__((swift_name("ka")));
@property (class, readonly) KESPLKAlertBand *k __attribute__((swift_name("k")));
@property (class, readonly) KESPLKAlertBand *x __attribute__((swift_name("x")));
@property (class, readonly) KESPLKAlertBand *ku __attribute__((swift_name("ku")));
@property (class, readonly) KESPLKAlertBand *photo __attribute__((swift_name("photo")));
@property (class, readonly) KESPLKAlertBand *none __attribute__((swift_name("none")));
@property (class, readonly) NSArray<KESPLKAlertBand *> *entries __attribute__((swift_name("entries")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (KESPLKKotlinArray<KESPLKAlertBand *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AlertBand.Companion")))
@interface KESPLKAlertBandCompanion : KESPLKBase
@property (class, readonly, getter=shared) KESPLKAlertBandCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (KESPLKAlertBand *)fromByteB:(int8_t)b __attribute__((swift_name("fromByte(b:)")));
@end


/**
 * Represents possible Photo Radar types that the Valentine One Gen2 is capable of detecting.
 *  Reference: Table 9.7 ESP Specification v. 3.013
 *
 * @since V4.1037
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PhotoRadar")))
@interface KESPLKPhotoRadar : KESPLKKotlinEnum<KESPLKPhotoRadar *>
@property (class, readonly, getter=companion) KESPLKPhotoRadarCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) KESPLKPhotoRadar *mrct __attribute__((swift_name("mrct")));
@property (class, readonly) KESPLKPhotoRadar *drivesafetype1 __attribute__((swift_name("drivesafetype1")));
@property (class, readonly) KESPLKPhotoRadar *drivesafetype2 __attribute__((swift_name("drivesafetype2")));
@property (class, readonly) KESPLKPhotoRadar *redflexhalo __attribute__((swift_name("redflexhalo")));
@property (class, readonly) KESPLKPhotoRadar *redflexnk7 __attribute__((swift_name("redflexnk7")));
@property (class, readonly) KESPLKPhotoRadar *ekin __attribute__((swift_name("ekin")));
@property (class, readonly) KESPLKPhotoRadar *none __attribute__((swift_name("none")));
@property (class, readonly) NSArray<KESPLKPhotoRadar *> *entries __attribute__((swift_name("entries")));
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Represents possible Photo Radar types that the Valentine One Gen2 is capable of detecting.
 *  Reference: Table 9.7 ESP Specification v. 3.013
 *
 * @since V4.1037
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (KESPLKKotlinArray<KESPLKPhotoRadar *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PhotoRadar.Companion")))
@interface KESPLKPhotoRadarCompanion : KESPLKBase
@property (class, readonly, getter=shared) KESPLKPhotoRadarCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (KESPLKPhotoRadar *)fromByteB:(int8_t)b __attribute__((swift_name("fromByte(b:)")));
@end


/**
 * Represents the operating mode of the Valentine One. The mode determines how the Valentine One
 * will alert to radar and laser signals.
 *
 * The Valentine One has three primary operating modes:
 * - **All Bogeys/K/Ka**: In this mode, all detected radar and laser signals (bogeys) are reported
 *   at their initial (unmuted) volume as soon as they are detected. This mode provides the most
 *   comprehensive and immediate alerting.
 * - **Logic/Ka**: In this mode, X and K-band bogeys that are assessed to be too weak to be threats
 *   are initially reported at a muted volume. If the Valentine One later determines these signals
 *   to be threats, the audio will increase to the initial (unmuted) volume. Ka-band signals are
 *   always reported at their initial volume. This mode helps to reduce false alerts from weaker
 *   X and K-band signals while still providing timely alerts for Ka-band threats.
 * - **Advanced Logic**: In this mode, X and K-band bogeys that the Valentine One determines not to
 *   be threats are not reported at all. Threats are reported at their initial (unmuted) volume.
 *   As a failsafe, the Valentine One will always alert to extremely strong signals, regardless of
 *   the mode. This mode provides the quietest operation by filtering out most non-threatening
 *   signals.
 *
 * @property byteValue The byte value representing the mode.
 *
 * @see AllBogeysKKa
 * @see LogicKa
 * @see AdvancedLogic
 * @see Invalid
 * @see InfDisplayData
 * @see DisplayData.aux1
 */
__attribute__((swift_name("V1Mode")))
@interface KESPLKV1Mode : KESPLKBase
@property (class, readonly, getter=companion) KESPLKV1ModeCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) int8_t byteValue __attribute__((swift_name("byteValue")));
@end


/**
 * X and K-band bogeys the Valentine One has determines to **not** be a threat will not be
 * reported at all. Threats will be reported at Initial (unmuted) Volume.
 *
 * **Note:** As a fail safe the Valentine One will always alert for extremely strong alerts.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("V1Mode.AdvancedLogic")))
@interface KESPLKV1ModeAdvancedLogic : KESPLKV1Mode
@property (class, readonly, getter=shared) KESPLKV1ModeAdvancedLogic *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));

/**
 * X and K-band bogeys the Valentine One has determines to **not** be a threat will not be
 * reported at all. Threats will be reported at Initial (unmuted) Volume.
 *
 * **Note:** As a fail safe the Valentine One will always alert for extremely strong alerts.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)advancedLogic __attribute__((swift_name("init()")));

/**
 * X and K-band bogeys the Valentine One has determines to **not** be a threat will not be
 * reported at all. Threats will be reported at Initial (unmuted) Volume.
 *
 * **Note:** As a fail safe the Valentine One will always alert for extremely strong alerts.
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * X and K-band bogeys the Valentine One has determines to **not** be a threat will not be
 * reported at all. Threats will be reported at Initial (unmuted) Volume.
 *
 * **Note:** As a fail safe the Valentine One will always alert for extremely strong alerts.
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * X and K-band bogeys the Valentine One has determines to **not** be a threat will not be
 * reported at all. Threats will be reported at Initial (unmuted) Volume.
 *
 * **Note:** As a fail safe the Valentine One will always alert for extremely strong alerts.
 */
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * All bogeys will be reported at the Initial (unmuted) Volume as soon as they are detected.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("V1Mode.AllBogeysKKa")))
@interface KESPLKV1ModeAllBogeysKKa : KESPLKV1Mode
@property (class, readonly, getter=shared) KESPLKV1ModeAllBogeysKKa *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));

/**
 * All bogeys will be reported at the Initial (unmuted) Volume as soon as they are detected.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)allBogeysKKa __attribute__((swift_name("init()")));

/**
 * All bogeys will be reported at the Initial (unmuted) Volume as soon as they are detected.
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * All bogeys will be reported at the Initial (unmuted) Volume as soon as they are detected.
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * All bogeys will be reported at the Initial (unmuted) Volume as soon as they are detected.
 */
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("V1Mode.Companion")))
@interface KESPLKV1ModeCompanion : KESPLKBase
@property (class, readonly, getter=shared) KESPLKV1ModeCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (KESPLKV1Mode *)fromAux1:(int8_t)aux1 __attribute__((swift_name("from(aux1:)")));
- (KESPLKV1Mode *)fromBogeyCounterBogeyCounter:(int8_t)bogeyCounter __attribute__((swift_name("fromBogeyCounter(bogeyCounter:)")));
@end


/**
 * A valid mode could not be determined using the
 * [InfDisplayData].
 * More than likely this will happen when the Valentine One is either alerting or displaying a
 * non-"mode" symbol on the bogey counter and the Valentine One doesn't support mode bits in
 * [DisplayData.aux1].
 *
 * @see InfDisplayData
 * @see DisplayData.aux1
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("V1Mode.Invalid")))
@interface KESPLKV1ModeInvalid : KESPLKV1Mode
@property (class, readonly, getter=shared) KESPLKV1ModeInvalid *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));

/**
 * A valid mode could not be determined using the
 * [InfDisplayData].
 * More than likely this will happen when the Valentine One is either alerting or displaying a
 * non-"mode" symbol on the bogey counter and the Valentine One doesn't support mode bits in
 * [DisplayData.aux1].
 *
 * @see InfDisplayData
 * @see DisplayData.aux1
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)invalid __attribute__((swift_name("init()")));

/**
 * A valid mode could not be determined using the
 * [InfDisplayData].
 * More than likely this will happen when the Valentine One is either alerting or displaying a
 * non-"mode" symbol on the bogey counter and the Valentine One doesn't support mode bits in
 * [DisplayData.aux1].
 *
 * @see InfDisplayData
 * @see DisplayData.aux1
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * A valid mode could not be determined using the
 * [InfDisplayData].
 * More than likely this will happen when the Valentine One is either alerting or displaying a
 * non-"mode" symbol on the bogey counter and the Valentine One doesn't support mode bits in
 * [DisplayData.aux1].
 *
 * @see InfDisplayData
 * @see DisplayData.aux1
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * A valid mode could not be determined using the
 * [InfDisplayData].
 * More than likely this will happen when the Valentine One is either alerting or displaying a
 * non-"mode" symbol on the bogey counter and the Valentine One doesn't support mode bits in
 * [DisplayData.aux1].
 *
 * @see InfDisplayData
 * @see DisplayData.aux1
 */
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * X and K-band bogeys assessed to be too weak to be threads will be reported at the Muted
 * volume. If and when the Valentine One determines them to be threats, the audio will increase
 * to the Initial (unmuted) Volume.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("V1Mode.LogicKa")))
@interface KESPLKV1ModeLogicKa : KESPLKV1Mode
@property (class, readonly, getter=shared) KESPLKV1ModeLogicKa *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));

/**
 * X and K-band bogeys assessed to be too weak to be threads will be reported at the Muted
 * volume. If and when the Valentine One determines them to be threats, the audio will increase
 * to the Initial (unmuted) Volume.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)logicKa __attribute__((swift_name("init()")));

/**
 * X and K-band bogeys assessed to be too weak to be threads will be reported at the Muted
 * volume. If and when the Valentine One determines them to be threats, the audio will increase
 * to the Initial (unmuted) Volume.
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * X and K-band bogeys assessed to be too weak to be threads will be reported at the Muted
 * volume. If and when the Valentine One determines them to be threats, the audio will increase
 * to the Initial (unmuted) Volume.
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * X and K-band bogeys assessed to be too weak to be threads will be reported at the Muted
 * volume. If and when the Valentine One determines them to be threats, the audio will increase
 * to the Initial (unmuted) Volume.
 */
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * A collection of sweep related information read from the connected Valentine One.
 *
 * @property maxSweepIndex Maximum supported index of a collection of sweep definitions stored
 * inside the Valentine One.
 * @property sweepSections List of current [SweepSection]s.
 * @property defaultSweepsDefinitions List of default [SweepDefinition]s. This may be an empty list
 * if the connected Valentine One does not support default sweep definitions.
 * @property customSweepsDefinitions List of custom [SweepDefinition]s.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SweepData")))
@interface KESPLKSweepData : KESPLKBase
@property (readonly) NSArray<KESPLKSweepDefinition *> *customSweepsDefinitions __attribute__((swift_name("customSweepsDefinitions")));
@property (readonly) NSArray<KESPLKSweepDefinition *> *defaultSweepsDefinitions __attribute__((swift_name("defaultSweepsDefinitions")));
@property (readonly) int32_t maxSweepIndex __attribute__((swift_name("maxSweepIndex")));
@property (readonly) NSArray<KESPLKSweepSection *> *sweepSections __attribute__((swift_name("sweepSections")));
- (instancetype)initWithMaxSweepIndex:(int32_t)maxSweepIndex sweepSections:(NSArray<KESPLKSweepSection *> *)sweepSections defaultSweepsDefinitions:(NSArray<KESPLKSweepDefinition *> *)defaultSweepsDefinitions customSweepsDefinitions:(NSArray<KESPLKSweepDefinition *> *)customSweepsDefinitions __attribute__((swift_name("init(maxSweepIndex:sweepSections:defaultSweepsDefinitions:customSweepsDefinitions:)"))) __attribute__((objc_designated_initializer));
- (KESPLKSweepData *)doCopyMaxSweepIndex:(int32_t)maxSweepIndex sweepSections:(NSArray<KESPLKSweepSection *> *)sweepSections defaultSweepsDefinitions:(NSArray<KESPLKSweepDefinition *> *)defaultSweepsDefinitions customSweepsDefinitions:(NSArray<KESPLKSweepDefinition *> *)customSweepsDefinitions __attribute__((swift_name("doCopy(maxSweepIndex:sweepSections:defaultSweepsDefinitions:customSweepsDefinitions:)")));

/**
 * A collection of sweep related information read from the connected Valentine One.
 *
 * @property maxSweepIndex Maximum supported index of a collection of sweep definitions stored
 * inside the Valentine One.
 * @property sweepSections List of current [SweepSection]s.
 * @property defaultSweepsDefinitions List of default [SweepDefinition]s. This may be an empty list
 * if the connected Valentine One does not support default sweep definitions.
 * @property customSweepsDefinitions List of custom [SweepDefinition]s.
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * A collection of sweep related information read from the connected Valentine One.
 *
 * @property maxSweepIndex Maximum supported index of a collection of sweep definitions stored
 * inside the Valentine One.
 * @property sweepSections List of current [SweepSection]s.
 * @property defaultSweepsDefinitions List of default [SweepDefinition]s. This may be an empty list
 * if the connected Valentine One does not support default sweep definitions.
 * @property customSweepsDefinitions List of custom [SweepDefinition]s.
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * A collection of sweep related information read from the connected Valentine One.
 *
 * @property maxSweepIndex Maximum supported index of a collection of sweep definitions stored
 * inside the Valentine One.
 * @property sweepSections List of current [SweepSection]s.
 * @property defaultSweepsDefinitions List of default [SweepDefinition]s. This may be an empty list
 * if the connected Valentine One does not support default sweep definitions.
 * @property customSweepsDefinitions List of custom [SweepDefinition]s.
 */
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * A user configurable range of frequencies that a Valentine One will report detected alerts.
 *
 * These frequency ranges **must** responds the bounds of the [SweepSection].
 *
 * The **maximum** number of sweeps is defined by [ResponseMaxSweepIndex.maxSweepIndex].
 *
 * @property index The index for this sweep definition. Max value determined by
 * [ResponseMaxSweepIndex.maxSweepIndex].
 * @property lowerEdge The lower frequency edge for this sweep in MHz.
 * @property upperEdge The upper frequency edge for this sweep in MHz.
 *
 * @see ResponseMaxSweepIndex.maxSweepIndex
 * @see ESPPacketId.ReqMaxSweepIndex
 * @see ESPPacketId.ReqAllSweepDefinitions
 * @see ESPPacketId.ReqDefaultSweepDefinitions
 * @see SweepSection
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SweepDefinition")))
@interface KESPLKSweepDefinition : KESPLKBase
@property (readonly) int32_t index __attribute__((swift_name("index")));
@property (readonly) int32_t lowerEdge __attribute__((swift_name("lowerEdge")));
@property (readonly) int32_t upperEdge __attribute__((swift_name("upperEdge")));
- (instancetype)initWithIndex:(int32_t)index lowerEdge:(int32_t)lowerEdge upperEdge:(int32_t)upperEdge __attribute__((swift_name("init(index:lowerEdge:upperEdge:)"))) __attribute__((objc_designated_initializer));
- (KESPLKSweepDefinition *)doCopyIndex:(int32_t)index lowerEdge:(int32_t)lowerEdge upperEdge:(int32_t)upperEdge __attribute__((swift_name("doCopy(index:lowerEdge:upperEdge:)")));

/**
 * A user configurable range of frequencies that a Valentine One will report detected alerts.
 *
 * These frequency ranges **must** responds the bounds of the [SweepSection].
 *
 * The **maximum** number of sweeps is defined by [ResponseMaxSweepIndex.maxSweepIndex].
 *
 * @property index The index for this sweep definition. Max value determined by
 * [ResponseMaxSweepIndex.maxSweepIndex].
 * @property lowerEdge The lower frequency edge for this sweep in MHz.
 * @property upperEdge The upper frequency edge for this sweep in MHz.
 *
 * @see ResponseMaxSweepIndex.maxSweepIndex
 * @see ESPPacketId.ReqMaxSweepIndex
 * @see ESPPacketId.ReqAllSweepDefinitions
 * @see ESPPacketId.ReqDefaultSweepDefinitions
 * @see SweepSection
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * A user configurable range of frequencies that a Valentine One will report detected alerts.
 *
 * These frequency ranges **must** responds the bounds of the [SweepSection].
 *
 * The **maximum** number of sweeps is defined by [ResponseMaxSweepIndex.maxSweepIndex].
 *
 * @property index The index for this sweep definition. Max value determined by
 * [ResponseMaxSweepIndex.maxSweepIndex].
 * @property lowerEdge The lower frequency edge for this sweep in MHz.
 * @property upperEdge The upper frequency edge for this sweep in MHz.
 *
 * @see ResponseMaxSweepIndex.maxSweepIndex
 * @see ESPPacketId.ReqMaxSweepIndex
 * @see ESPPacketId.ReqAllSweepDefinitions
 * @see ESPPacketId.ReqDefaultSweepDefinitions
 * @see SweepSection
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * A user configurable range of frequencies that a Valentine One will report detected alerts.
 *
 * These frequency ranges **must** responds the bounds of the [SweepSection].
 *
 * The **maximum** number of sweeps is defined by [ResponseMaxSweepIndex.maxSweepIndex].
 *
 * @property index The index for this sweep definition. Max value determined by
 * [ResponseMaxSweepIndex.maxSweepIndex].
 * @property lowerEdge The lower frequency edge for this sweep in MHz.
 * @property upperEdge The upper frequency edge for this sweep in MHz.
 *
 * @see ResponseMaxSweepIndex.maxSweepIndex
 * @see ESPPacketId.ReqMaxSweepIndex
 * @see ESPPacketId.ReqAllSweepDefinitions
 * @see ESPPacketId.ReqDefaultSweepDefinitions
 * @see SweepSection
 */
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * Range of frequencies that a Valentine One will sweep through in which user defined
 * [SweepDefinition] can be defined.
 *
 * @property index The index of this sweep section.
 * @property count The total number of sweeps sections.
 * @property lowerEdge The lower frequency edge for this sweep section in MHz.
 * @property upperEdge The upper frequency edge for this sweep section in MHz.
 *
 * @see SweepDefinition
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SweepSection")))
@interface KESPLKSweepSection : KESPLKBase
@property (readonly) int32_t count __attribute__((swift_name("count")));
@property (readonly) int32_t index __attribute__((swift_name("index")));
@property (readonly) int32_t lowerEdge __attribute__((swift_name("lowerEdge")));
@property (readonly) int32_t upperEdge __attribute__((swift_name("upperEdge")));
- (instancetype)initWithIndexCount:(int8_t)indexCount lowerEdge:(int32_t)lowerEdge upperEdge:(int32_t)upperEdge __attribute__((swift_name("init(indexCount:lowerEdge:upperEdge:)"))) __attribute__((objc_designated_initializer));
- (KESPLKSweepSection *)doCopyIndexCount:(int8_t)indexCount lowerEdge:(int32_t)lowerEdge upperEdge:(int32_t)upperEdge __attribute__((swift_name("doCopy(indexCount:lowerEdge:upperEdge:)")));

/**
 * Range of frequencies that a Valentine One will sweep through in which user defined
 * [SweepDefinition] can be defined.
 *
 * @property index The index of this sweep section.
 * @property count The total number of sweeps sections.
 * @property lowerEdge The lower frequency edge for this sweep section in MHz.
 * @property upperEdge The upper frequency edge for this sweep section in MHz.
 *
 * @see SweepDefinition
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Range of frequencies that a Valentine One will sweep through in which user defined
 * [SweepDefinition] can be defined.
 *
 * @property index The index of this sweep section.
 * @property count The total number of sweeps sections.
 * @property lowerEdge The lower frequency edge for this sweep section in MHz.
 * @property upperEdge The upper frequency edge for this sweep section in MHz.
 *
 * @see SweepDefinition
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Range of frequencies that a Valentine One will sweep through in which user defined
 * [SweepDefinition] can be defined.
 *
 * @property index The index of this sweep section.
 * @property count The total number of sweeps sections.
 * @property lowerEdge The lower frequency edge for this sweep section in MHz.
 * @property upperEdge The upper frequency edge for this sweep section in MHz.
 *
 * @see SweepDefinition
 */
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AutoMute")))
@interface KESPLKAutoMute : KESPLKKotlinEnum<KESPLKAutoMute *>
@property (class, readonly, getter=companion) KESPLKAutoMuteCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) KESPLKAutoMute *off __attribute__((swift_name("off")));
@property (class, readonly) KESPLKAutoMute *muteallsignals __attribute__((swift_name("muteallsignals")));
@property (class, readonly) KESPLKAutoMute *muteallsignalswithunmute __attribute__((swift_name("muteallsignalswithunmute")));
@property (class, readonly) KESPLKAutoMute *invalid __attribute__((swift_name("invalid")));
@property (class, readonly) NSArray<KESPLKAutoMute *> *entries __attribute__((swift_name("entries")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (KESPLKKotlinArray<KESPLKAutoMute *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AutoMute.Companion")))
@interface KESPLKAutoMuteCompanion : KESPLKBase
@property (class, readonly, getter=shared) KESPLKAutoMuteCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (KESPLKAutoMute *)fromByteValue:(int8_t)value __attribute__((swift_name("fromByte(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BandSensitivity")))
@interface KESPLKBandSensitivity : KESPLKKotlinEnum<KESPLKBandSensitivity *>
@property (class, readonly, getter=companion) KESPLKBandSensitivityCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) KESPLKBandSensitivity *full __attribute__((swift_name("full")));
@property (class, readonly) KESPLKBandSensitivity *original __attribute__((swift_name("original")));
@property (class, readonly) KESPLKBandSensitivity *relaxed __attribute__((swift_name("relaxed")));
@property (class, readonly) KESPLKBandSensitivity *invalid __attribute__((swift_name("invalid")));
@property (class, readonly) NSArray<KESPLKBandSensitivity *> *entries __attribute__((swift_name("entries")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (KESPLKKotlinArray<KESPLKBandSensitivity *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BandSensitivity.Companion")))
@interface KESPLKBandSensitivityCompanion : KESPLKBase
@property (class, readonly, getter=shared) KESPLKBandSensitivityCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (KESPLKBandSensitivity *)kAndXSensitivityFromByteKAndXSensitivityByte:(int8_t)kAndXSensitivityByte __attribute__((swift_name("kAndXSensitivityFromByte(kAndXSensitivityByte:)")));
- (KESPLKBandSensitivity *)kaSensitivityFromByteKaSensitivityByte:(int8_t)kaSensitivityByte __attribute__((swift_name("kaSensitivityFromByte(kaSensitivityByte:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BarGraphSensitive")))
@interface KESPLKBarGraphSensitive : KESPLKKotlinEnum<KESPLKBarGraphSensitive *>
@property (class, readonly) KESPLKBarGraphSensitive *normal __attribute__((swift_name("normal")));
@property (class, readonly) KESPLKBarGraphSensitive *responsive __attribute__((swift_name("responsive")));
@property (class, readonly) NSArray<KESPLKBarGraphSensitive *> *entries __attribute__((swift_name("entries")));
@property (readonly) BOOL value_ __attribute__((swift_name("value_")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (KESPLKKotlinArray<KESPLKBarGraphSensitive *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BogeyLockVolumeControl")))
@interface KESPLKBogeyLockVolumeControl : KESPLKKotlinEnum<KESPLKBogeyLockVolumeControl *>
@property (class, readonly) KESPLKBogeyLockVolumeControl *lever __attribute__((swift_name("lever")));
@property (class, readonly) KESPLKBogeyLockVolumeControl *knob __attribute__((swift_name("knob")));
@property (class, readonly) NSArray<KESPLKBogeyLockVolumeControl *> *entries __attribute__((swift_name("entries")));
@property (readonly) BOOL value_ __attribute__((swift_name("value_")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (KESPLKKotlinArray<KESPLKBogeyLockVolumeControl *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KTimer")))
@interface KESPLKKTimer : KESPLKKotlinEnum<KESPLKKTimer *>
@property (class, readonly) KESPLKKTimer *_10 __attribute__((swift_name("_10")));
@property (class, readonly) KESPLKKTimer *_30 __attribute__((swift_name("_30")));
@property (class, readonly) KESPLKKTimer *_20 __attribute__((swift_name("_20")));
@property (class, readonly) KESPLKKTimer *_15 __attribute__((swift_name("_15")));
@property (class, readonly) KESPLKKTimer *_7 __attribute__((swift_name("_7")));
@property (class, readonly) KESPLKKTimer *_5 __attribute__((swift_name("_5")));
@property (class, readonly) KESPLKKTimer *_4 __attribute__((swift_name("_4")));
@property (class, readonly) KESPLKKTimer *_3 __attribute__((swift_name("_3")));
@property (class, readonly) NSArray<KESPLKKTimer *> *entries __attribute__((swift_name("entries")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (KESPLKKotlinArray<KESPLKKTimer *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MuteVolumeControl")))
@interface KESPLKMuteVolumeControl : KESPLKKotlinEnum<KESPLKMuteVolumeControl *>
@property (class, readonly) KESPLKMuteVolumeControl *lever __attribute__((swift_name("lever")));
@property (class, readonly) KESPLKMuteVolumeControl *zero __attribute__((swift_name("zero")));
@property (class, readonly) NSArray<KESPLKMuteVolumeControl *> *entries __attribute__((swift_name("entries")));
@property (readonly) BOOL value_ __attribute__((swift_name("value_")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (KESPLKKotlinArray<KESPLKMuteVolumeControl *> *)values __attribute__((swift_name("values()")));
@end


/**
 * Represents user configuration settings inside of a Valentine One.
 *
 * Refer to Appendix 12.1 of the ESP Specification for a description of the [userBytes] based on the
 * firmware version of a Valentine One.s
 */
__attribute__((swift_name("UserSettings")))
@protocol KESPLKUserSettings
@required

/**
 * Valentine One user Configuration settings
 */
@property (readonly) KESPLKKotlinByteArray *userBytes __attribute__((swift_name("userBytes")));
@end

__attribute__((swift_name("PlatformLogger")))
@protocol KESPLKPlatformLogger
@required
- (void)debugTag:(NSString *)tag message:(NSString *)message __attribute__((swift_name("debug(tag:message:)")));
- (void)errorTag:(NSString *)tag message:(NSString *)message __attribute__((swift_name("error(tag:message:)")));
- (void)infoTag:(NSString *)tag message:(NSString *)message __attribute__((swift_name("info(tag:message:)")));
- (void)warnTag:(NSString *)tag message:(NSString *)message __attribute__((swift_name("warn(tag:message:)")));
@property BOOL enabled __attribute__((swift_name("enabled")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("V1VersionInfo")))
@interface KESPLKV1VersionInfo : KESPLKBase
@property (class, readonly, getter=shared) KESPLKV1VersionInfo *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)v1VersionInfo __attribute__((swift_name("init()")));
- (NSArray<KESPLKSweepDefinition *> *)defaultSweepForVersionVersion:(double)version __attribute__((swift_name("defaultSweepForVersion(version:)")));
- (KESPLKKotlinByteArray *)defaultUserBytesForVersionVersion:(double)version __attribute__((swift_name("defaultUserBytesForVersion(version:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("V1VersionInfo.SweepInfo")))
@interface KESPLKV1VersionInfoSweepInfo : KESPLKBase
@property (class, readonly, getter=shared) KESPLKV1VersionInfoSweepInfo *shared __attribute__((swift_name("shared")));
@property (readonly) NSArray<KESPLKSweepDefinition *> *V3_8920_CustomSweep __attribute__((swift_name("V3_8920_CustomSweep")));
@property (readonly) NSArray<KESPLKSweepSection *> *V3_8920_SweepSections __attribute__((swift_name("V3_8920_SweepSections")));
@property (readonly) NSArray<KESPLKSweepDefinition *> *V3_8952_CustomSweep __attribute__((swift_name("V3_8952_CustomSweep")));
@property (readonly) NSArray<KESPLKSweepSection *> *V3_8952_SweepSections __attribute__((swift_name("V3_8952_SweepSections")));
@property (readonly) NSArray<KESPLKSweepDefinition *> *V4_1000_CustomFrequencies __attribute__((swift_name("V4_1000_CustomFrequencies")));
@property (readonly) NSArray<KESPLKSweepSection *> *V4_1000_SweepSections __attribute__((swift_name("V4_1000_SweepSections")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sweepInfo __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("V1VersionInfo.UserSettingsInfo")))
@interface KESPLKV1VersionInfoUserSettingsInfo : KESPLKBase
@property (class, readonly, getter=shared) KESPLKV1VersionInfoUserSettingsInfo *shared __attribute__((swift_name("shared")));
@property (readonly) KESPLKKotlinByteArray *T1_0000_UserBytes __attribute__((swift_name("T1_0000_UserBytes")));
@property (readonly) KESPLKKotlinByteArray *V3_8920_UserBytes __attribute__((swift_name("V3_8920_UserBytes")));
@property (readonly) KESPLKKotlinByteArray *V4_1000_UserBytes __attribute__((swift_name("V4_1000_UserBytes")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)userSettingsInfo __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("_KSP_IoGithubDeveloprofthingsKesplBluetoothConnectionDemoDemoConnection_Q_DEMO_CONNECTION_QUALIFIER")))
@interface KESPLK_KSP_IoGithubDeveloprofthingsKesplBluetoothConnectionDemoDemoConnection_Q_DEMO_CONNECTION_QUALIFIER : KESPLKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("_KSP_IoGithubDeveloprofthingsKesplBluetoothConnectionLeLeConnection_Q_LE_CONNECTION_QUALIFIER")))
@interface KESPLK_KSP_IoGithubDeveloprofthingsKesplBluetoothConnectionLeLeConnection_Q_LE_CONNECTION_QUALIFIER : KESPLKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("_KSP_IoGithubDeveloprofthingsKesplBluetoothDiscoveryDemoV1cDemoScanner_Q_V1C_DEMO_QUALIFER")))
@interface KESPLK_KSP_IoGithubDeveloprofthingsKesplBluetoothDiscoveryDemoV1cDemoScanner_Q_V1C_DEMO_QUALIFER : KESPLKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("_KSP_IoGithubDeveloprofthingsKesplBluetoothDiscoveryLeIOSLEV1cScanner_Q_V1C_LE_QUALIFER")))
@interface KESPLK_KSP_IoGithubDeveloprofthingsKesplBluetoothDiscoveryLeIOSLEV1cScanner_Q_V1C_LE_QUALIFER : KESPLKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("_KSP_IoGithubDeveloprofthingsKesplBluetoothIOSBluetoothManager")))
@interface KESPLK_KSP_IoGithubDeveloprofthingsKesplBluetoothIOSBluetoothManager : KESPLKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("_KSP_IoGithubDeveloprofthingsKesplDiESPModule")))
@interface KESPLK_KSP_IoGithubDeveloprofthingsKesplDiESPModule : KESPLKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("_KSP_IoGithubDeveloprofthingsKesplDiPlatformNativeModule_Actual")))
@interface KESPLK_KSP_IoGithubDeveloprofthingsKesplDiPlatformNativeModule_Actual : KESPLKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("_KSP_IoGithubDeveloprofthingsKesplDiPlatformNativeModule_Expect")))
@interface KESPLK_KSP_IoGithubDeveloprofthingsKesplDiPlatformNativeModule_Expect : KESPLKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("_KSP_IoGithubDeveloprofthingsKesplDiPreferencesModule")))
@interface KESPLK_KSP_IoGithubDeveloprofthingsKesplDiPreferencesModule : KESPLKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("_KSP_IoGithubDeveloprofthingsKesplDiProvidesDataStore")))
@interface KESPLK_KSP_IoGithubDeveloprofthingsKesplDiProvidesDataStore : KESPLKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("_KSP_IoGithubDeveloprofthingsKesplGetFlowController")))
@interface KESPLK_KSP_IoGithubDeveloprofthingsKesplGetFlowController : KESPLKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("_KSP_IoGithubDeveloprofthingsKesplPreferencesESPPreferencesManager")))
@interface KESPLK_KSP_IoGithubDeveloprofthingsKesplPreferencesESPPreferencesManager : KESPLKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

@interface KESPLKESPDevice (Extensions)
@property (readonly) BOOL isV1 __attribute__((swift_name("isV1")));
@end

@interface KESPLKEspUUID (Extensions)
@property (readonly) CBUUID *CLIENT_OUT_V1_IN_SHORT_CHARACTERISTIC_CBUUID __attribute__((swift_name("CLIENT_OUT_V1_IN_SHORT_CHARACTERISTIC_CBUUID")));
@property (readonly) CBUUID *V1CONNECTION_LE_SERVICE_CBUUID __attribute__((swift_name("V1CONNECTION_LE_SERVICE_CBUUID")));
@property (readonly) CBUUID *V1_OUT_CLIENT_IN_SHORT_CHARACTERISTIC_CBUUID __attribute__((swift_name("V1_OUT_CLIENT_IN_SHORT_CHARACTERISTIC_CBUUID")));
@end

@interface KESPLKESPModule (Extensions)
@property (readonly) KESPLKKoin_coreModule *module __attribute__((swift_name("module")));
@end

@interface KESPLKPlatformNativeModule (Extensions)
@property (readonly) KESPLKKoin_coreModule *module __attribute__((swift_name("module")));
@end

@interface KESPLKESPRequest (Extensions)

/**
 * Utility function for determining if this request is for a [ESPDevice.V1connection].
 */
- (BOOL)isForV1c __attribute__((swift_name("isForV1c()")));
@end

@interface KESPLKV1Volume (Extensions)
- (KESPLKKotlinByteArray *)toPayloadProvideUserFeedback:(BOOL)provideUserFeedback skipFeedbackWhenNoChange:(BOOL)skipFeedbackWhenNoChange saveVolume:(BOOL)saveVolume __attribute__((swift_name("toPayload(provideUserFeedback:skipFeedbackWhenNoChange:saveVolume:)")));
@end

@interface KESPLKSweepDefinition (Extensions)
- (KESPLKKotlinByteArray *)toPayloadCommit:(BOOL)commit __attribute__((swift_name("toPayload(commit:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface KESPLKKotlinByteArray : KESPLKBase
@property (readonly) int32_t size __attribute__((swift_name("size")));
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(KESPLKByte *(^)(KESPLKInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (KESPLKKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@end

@interface KESPLKKotlinByteArray (Extensions)
@property (readonly) KESPLKV1Mode *bogeyCounterMode __attribute__((swift_name("bogeyCounterMode")));
@property (readonly) KESPLKESPDevice *destinationId __attribute__((swift_name("destinationId")));
@property (readonly) int8_t destinationIdByte __attribute__((swift_name("destinationIdByte")));
@property (readonly) BOOL isAlertData __attribute__((swift_name("isAlertData")));
@property (readonly) BOOL isDataError __attribute__((swift_name("isDataError")));
@property (readonly) BOOL isDisplayOn __attribute__((swift_name("isDisplayOn")));
@property (readonly) BOOL isForMe __attribute__((swift_name("isForMe")));
@property (readonly) BOOL isInfDisplayData __attribute__((swift_name("isInfDisplayData")));
@property (readonly) BOOL isLegacy __attribute__((swift_name("isLegacy")));
@property (readonly) BOOL isRequestNotProcessed __attribute__((swift_name("isRequestNotProcessed")));
@property (readonly) BOOL isSoft __attribute__((swift_name("isSoft")));
@property (readonly) BOOL isTimeSlicing __attribute__((swift_name("isTimeSlicing")));
@property (readonly) BOOL isUnsupportedPacket __attribute__((swift_name("isUnsupportedPacket")));
@property (readonly) BOOL isUserBytes __attribute__((swift_name("isUserBytes")));
@property (readonly) BOOL isV1Busy __attribute__((swift_name("isV1Busy")));
@property (readonly) BOOL isV1Version __attribute__((swift_name("isV1Version")));
@property (readonly) int32_t maxSweepIndex __attribute__((swift_name("maxSweepIndex")));
@property (readonly) KESPLKV1Mode *mode __attribute__((swift_name("mode")));
@property (readonly) KESPLKESPDevice *originId __attribute__((swift_name("originId")));
@property (readonly) int8_t originIdByte __attribute__((swift_name("originIdByte")));
@property (readonly) KESPLKESPPacketId *packetId __attribute__((swift_name("packetId")));
@property (readonly) int8_t packetIdByte __attribute__((swift_name("packetIdByte")));
@property (readonly) int32_t payloadLength __attribute__((swift_name("payloadLength")));
@property (readonly) int32_t speed __attribute__((swift_name("speed")));
@property (readonly) int32_t writeResult __attribute__((swift_name("writeResult")));
- (id)alertData __attribute__((swift_name("alertData()")));
- (KESPLKV1Volumes *)allVolumes __attribute__((swift_name("allVolumes()")));
- (NSString *)batteryVoltage __attribute__((swift_name("batteryVoltage()")));

/**
 * Returns an array of packet identifiers of pending requests to the Valentine One. An empty array
 * is returned if the Valentine One has no pending requests.
 *
 * @return packet identifiers of pending requests.
 *
 * @see ESPPacketId
 */
- (KESPLKKotlinByteArray *)busyPacketIdBytes __attribute__((swift_name("busyPacketIdBytes()")));
- (KESPLKV1Volume *)currentVolume __attribute__((swift_name("currentVolume()")));
- (id)displayData __attribute__((swift_name("displayData()")));
- (NSString *)espPayloadToStringStringLength:(int32_t)stringLength __attribute__((swift_name("espPayloadToString(stringLength:)")));
- (BOOL)isFromV1 __attribute__((swift_name("isFromV1()")));
- (BOOL)isValidFramingData __attribute__((swift_name("isValidFramingData()")));
- (NSString *)serialNumber __attribute__((swift_name("serialNumber()")));
- (KESPLKSAVVYStatus *)status __attribute__((swift_name("status()")));
- (KESPLKSweepDefinition *)sweepDefinition __attribute__((swift_name("sweepDefinition()")));
- (NSArray<KESPLKSweepSection *> *)sweepSections __attribute__((swift_name("sweepSections()")));
- (id<KESPLKUserSettings>)techDisplayUserBytesVersion:(double)version __attribute__((swift_name("techDisplayUserBytes(version:)")));
- (NSString *)toHexString __attribute__((swift_name("toHexString()")));
- (NSData *)toNSData __attribute__((swift_name("toNSData()")));
- (id<KESPLKUserSettings>)valentineOneUserBytesVersion:(double)version __attribute__((swift_name("valentineOneUserBytes(version:)")));
- (NSString *)version __attribute__((swift_name("version()")));
- (double)versionAsDouble __attribute__((swift_name("versionAsDouble()")));

/**
 * Indicates if the Valentine One's is turned on.
 */

/**
 * Indicates if the Valentine One is operating in Legacy mode.
 */

/**
 * Indicates if the Valentine One's audio is muted.
 */

/**
 * Indicates if the Valentine One is 'time slicing' (accessories will be given a "time slice" to
 * communicate on the ESP bus).
 */

/**
 * Current [V1Mode] the Valentine One is operating in
 *
 * @since V4.1028
 */
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="2.0")
 *   kotlin.uuid.ExperimentalUuidApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUuid")))
@interface KESPLKKotlinUuid : KESPLKBase <KESPLKKotlinComparable>
@property (class, readonly, getter=companion) KESPLKKotlinUuidCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="2.1")
*/
- (int32_t)compareToOther:(KESPLKKotlinUuid *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (KESPLKKotlinByteArray *)toByteArray __attribute__((swift_name("toByteArray()")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="2.1")
*/
- (NSString *)toHexDashString __attribute__((swift_name("toHexDashString()")));
- (NSString *)toHexString __attribute__((swift_name("toHexString()")));
- (id _Nullable)toLongsAction:(id _Nullable (^)(KESPLKLong *, KESPLKLong *))action __attribute__((swift_name("toLongs(action:)")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="2.1")
 *   kotlin.ExperimentalUnsignedTypes
*/
- (id)toUByteArray __attribute__((swift_name("toUByteArray()")));
- (id _Nullable)toULongsAction:(id _Nullable (^)(KESPLKULong *, KESPLKULong *))action __attribute__((swift_name("toULongs(action:)")));
@end

@interface KESPLKKotlinUuid (Extensions)
- (CBUUID *)toCBUUID __attribute__((swift_name("toCBUUID()")));
- (NSUUID *)toNSUUID __attribute__((swift_name("toNSUUID()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKoinApplication")))
@interface KESPLKKoin_coreKoinApplication : KESPLKBase
@property (class, readonly, getter=companion) KESPLKKoin_coreKoinApplicationCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) KESPLKKoin_coreKoin *koin __attribute__((swift_name("koin")));
- (void)allowOverrideOverride:(BOOL)override __attribute__((swift_name("allowOverride(override:)")));
- (void)close __attribute__((swift_name("close()")));
- (void)createEagerInstances __attribute__((swift_name("createEagerInstances()")));
- (KESPLKKoin_coreKoinApplication *)loggerLogger:(KESPLKKoin_coreLogger *)logger __attribute__((swift_name("logger(logger:)")));
- (KESPLKKoin_coreKoinApplication *)modulesModules:(KESPLKKotlinArray<KESPLKKoin_coreModule *> *)modules __attribute__((swift_name("modules(modules:)")));
- (KESPLKKoin_coreKoinApplication *)modulesModules_:(NSArray<KESPLKKoin_coreModule *> *)modules __attribute__((swift_name("modules(modules_:)")));
- (KESPLKKoin_coreKoinApplication *)modulesModules__:(KESPLKKoin_coreModule *)modules __attribute__((swift_name("modules(modules__:)")));
- (KESPLKKoin_coreKoinApplication *)optionsOptionValue:(KESPLKKotlinArray<KESPLKKotlinPair<KESPLKKoin_coreKoinOption *, id> *> *)optionValue __attribute__((swift_name("options(optionValue:)")));
- (KESPLKKoin_coreKoinApplication *)printLoggerLevel:(KESPLKKoin_coreLevel *)level __attribute__((swift_name("printLogger(level:)")));
- (KESPLKKoin_coreKoinApplication *)propertiesValues:(NSDictionary<NSString *, id> *)values __attribute__((swift_name("properties(values:)")));
@end

@interface KESPLKKoin_coreKoinApplication (Extensions)
- (void)platformInitializeEspContext:(KESPLKESPContext *)espContext __attribute__((swift_name("platformInitialize(espContext:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreModule")))
@interface KESPLKKoin_coreModule : KESPLKBase
@property (readonly) KESPLKMutableSet<KESPLKKoin_coreSingleInstanceFactory<id> *> *eagerInstances __attribute__((swift_name("eagerInstances")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSMutableArray<KESPLKKoin_coreModule *> *includedModules __attribute__((swift_name("includedModules")));
@property (readonly) BOOL isLoaded __attribute__((swift_name("isLoaded")));
@property (readonly) KESPLKMutableDictionary<NSString *, KESPLKKoin_coreInstanceFactory<id> *> *mappings __attribute__((swift_name("mappings")));
@property (readonly) KESPLKMutableSet<id<KESPLKKoin_coreQualifier>> *scopes __attribute__((swift_name("scopes")));
- (instancetype)initWith_createdAtStart:(BOOL)_createdAtStart __attribute__((swift_name("init(_createdAtStart:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (KESPLKKoin_coreKoinDefinition<id> *)factoryQualifier:(id<KESPLKKoin_coreQualifier> _Nullable)qualifier definition:(id _Nullable (^)(KESPLKKoin_coreScope *, KESPLKKoin_coreParametersHolder *))definition __attribute__((swift_name("factory(qualifier:definition:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (void)includesModule:(KESPLKKotlinArray<KESPLKKoin_coreModule *> *)module __attribute__((swift_name("includes(module:)")));
- (void)includesModule_:(id)module __attribute__((swift_name("includes(module_:)")));
- (void)indexPrimaryTypeInstanceFactory:(KESPLKKoin_coreInstanceFactory<id> *)instanceFactory __attribute__((swift_name("indexPrimaryType(instanceFactory:)")));
- (void)indexSecondaryTypesInstanceFactory:(KESPLKKoin_coreInstanceFactory<id> *)instanceFactory __attribute__((swift_name("indexSecondaryTypes(instanceFactory:)")));
- (NSArray<KESPLKKoin_coreModule *> *)plusModules:(NSArray<KESPLKKoin_coreModule *> *)modules __attribute__((swift_name("plus(modules:)")));
- (NSArray<KESPLKKoin_coreModule *> *)plusModule:(KESPLKKoin_coreModule *)module __attribute__((swift_name("plus(module:)")));
- (void)prepareForCreationAtStartInstanceFactory:(KESPLKKoin_coreSingleInstanceFactory<id> *)instanceFactory __attribute__((swift_name("prepareForCreationAtStart(instanceFactory:)")));
- (void)scopeScopeSet:(void (^)(KESPLKKoin_coreScopeDSL *))scopeSet __attribute__((swift_name("scope(scopeSet:)")));
- (void)scopeQualifier:(id<KESPLKKoin_coreQualifier>)qualifier scopeSet:(void (^)(KESPLKKoin_coreScopeDSL *))scopeSet __attribute__((swift_name("scope(qualifier:scopeSet:)")));
- (KESPLKKoin_coreKoinDefinition<id> *)singleQualifier:(id<KESPLKKoin_coreQualifier> _Nullable)qualifier createdAtStart:(BOOL)createdAtStart definition:(id _Nullable (^)(KESPLKKoin_coreScope *, KESPLKKoin_coreParametersHolder *))definition __attribute__((swift_name("single(qualifier:createdAtStart:definition:)")));
@end

@interface KESPLKKoin_coreModule (Extensions)
- (void)defineIoGithubDeveloprofthingsKesplBluetoothConnectionDemoDemoConnection __attribute__((swift_name("defineIoGithubDeveloprofthingsKesplBluetoothConnectionDemoDemoConnection()")));
- (void)defineIoGithubDeveloprofthingsKesplBluetoothConnectionLeLeConnection __attribute__((swift_name("defineIoGithubDeveloprofthingsKesplBluetoothConnectionLeLeConnection()")));
- (void)defineIoGithubDeveloprofthingsKesplBluetoothDiscoveryDemoV1cDemoScanner __attribute__((swift_name("defineIoGithubDeveloprofthingsKesplBluetoothDiscoveryDemoV1cDemoScanner()")));
- (void)defineIoGithubDeveloprofthingsKesplgetFlowController __attribute__((swift_name("defineIoGithubDeveloprofthingsKesplgetFlowController()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AlertKt")))
@interface KESPLKAlertKt : KESPLKBase
@property (class, readonly) id emptyAlert __attribute__((swift_name("emptyAlert")));
+ (int32_t)count:(id)receiver __attribute__((swift_name("count(_:)")));
+ (int32_t)index:(id)receiver __attribute__((swift_name("index(_:)")));
+ (int32_t)indexZB:(id)receiver __attribute__((swift_name("indexZB(_:)")));
+ (id)alertData:(id)receiver __attribute__((swift_name("alertData(_:)")));
+ (id<KESPLKKotlinx_coroutines_coreFlow>)alertTable:(id<KESPLKKotlinx_coroutines_coreFlow>)receiver __attribute__((swift_name("alertTable(_:)")));
+ (NSArray<id> *)doCopy:(NSArray<id> *)receiver start:(int32_t)start count:(int32_t)count __attribute__((swift_name("doCopy(_:start:count:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ArraySupportKt")))
@interface KESPLKArraySupportKt : KESPLKBase
+ (int32_t)doNewLengthOldLength:(int32_t)oldLength minGrowth:(int32_t)minGrowth prefGrowth:(int32_t)prefGrowth __attribute__((swift_name("doNewLength(oldLength:minGrowth:prefGrowth:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Aux1Kt")))
@interface KESPLKAux1Kt : KESPLKBase
+ (KESPLKV1Mode *)mode:(int8_t)receiver __attribute__((swift_name("mode(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BandArrowIndicatorKt")))
@interface KESPLKBandArrowIndicatorKt : KESPLKBase
+ (BOOL)front:(int8_t)receiver __attribute__((swift_name("front(_:)")));
+ (BOOL)rear:(int8_t)receiver __attribute__((swift_name("rear(_:)")));
+ (BOOL)side:(int8_t)receiver __attribute__((swift_name("side(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BatteryKt")))
@interface KESPLKBatteryKt : KESPLKBase
+ (NSString *)batteryVoltage:(id)receiver __attribute__((swift_name("batteryVoltage(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Bluetooth_iosKt")))
@interface KESPLKBluetooth_iosKt : KESPLKBase
+ (BOOL)checkBluetoothAddressAddress:(NSString *)address __attribute__((swift_name("checkBluetoothAddress(address:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BluetoothKt")))
@interface KESPLKBluetoothKt : KESPLKBase
@property (class, readonly) NSString *LEGACY_V1C_NAME_PREFIX __attribute__((swift_name("LEGACY_V1C_NAME_PREFIX")));
@property (class, readonly) NSString *V1C_NAME_PREFIX __attribute__((swift_name("V1C_NAME_PREFIX")));
+ (NSString *)computeDeviceName:(id<KESPLKV1connection>)receiver __attribute__((swift_name("computeDeviceName(_:)")));
+ (NSString *)getLEV1CNameAddress:(NSString *)address __attribute__((swift_name("getLEV1CName(address:)")));
+ (NSString *)getLegacyV1CNameAddress:(NSString *)address __attribute__((swift_name("getLegacyV1CName(address:)")));

/**
 * Helper method for determining if a BluetoothDevice is a V1.
 *
 * @param name  The name of the BluetoothDevices to scan if it a V1.
 *
 * @return  Returns true if the BluetoothDevices is a V1.
 */
+ (BOOL)isV1ConnectionName:(NSString *)name __attribute__((swift_name("isV1Connection(name:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BogeyCounter7SegmentKt")))
@interface KESPLKBogeyCounter7SegmentKt : KESPLKBase
+ (BOOL)decimalPoint:(int8_t)receiver __attribute__((swift_name("decimalPoint(_:)")));
+ (KESPLKV1Mode *)mode:(int8_t)receiver __attribute__((swift_name("mode(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ByteExtKt")))
@interface KESPLKByteExtKt : KESPLKBase
+ (BOOL)first:(int8_t)receiver __attribute__((swift_name("first(_:)")));
+ (BOOL)isFromV1:(int8_t)receiver __attribute__((swift_name("isFromV1(_:)")));
+ (BOOL)last:(int8_t)receiver __attribute__((swift_name("last(_:)")));
+ (BOOL)get:(int8_t)receiver index:(int32_t)index __attribute__((swift_name("get(_:index:)")));
+ (BOOL)isBitSet:(int8_t)receiver index:(int32_t)index __attribute__((swift_name("isBitSet(_:index:)")));
+ (int8_t)set:(int8_t)receiver index:(int32_t)index value:(BOOL)value __attribute__((swift_name("set(_:index:value:)")));
+ (int8_t)shl:(int8_t)receiver bitCount:(int32_t)bitCount __attribute__((swift_name("shl(_:bitCount:)")));
+ (int8_t)shr:(int8_t)receiver bitCount:(int32_t)bitCount __attribute__((swift_name("shr(_:bitCount:)")));
+ (BOOL)toBoolean:(int8_t)receiver __attribute__((swift_name("toBoolean(_:)")));
+ (int8_t)toByte:(BOOL)receiver __attribute__((swift_name("toByte(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConstantsKt")))
@interface KESPLKConstantsKt : KESPLKBase
@property (class, readonly) int8_t DATA_LINK_ESCAPE_BYTE_5D __attribute__((swift_name("DATA_LINK_ESCAPE_BYTE_5D")));
@property (class, readonly) int8_t DATA_LINK_ESCAPE_BYTE_5F __attribute__((swift_name("DATA_LINK_ESCAPE_BYTE_5F")));
@property (class, readonly) int8_t DATA_LINK_ESCAPE_BYTE_7D __attribute__((swift_name("DATA_LINK_ESCAPE_BYTE_7D")));
@property (class, readonly) int32_t DEST_IDX __attribute__((swift_name("DEST_IDX")));
@property (class, readonly) int8_t DEST_INDENTIFIER_BASE_CONST __attribute__((swift_name("DEST_INDENTIFIER_BASE_CONST")));
@property (class, readonly) int8_t ESP_PACKET_EOF __attribute__((swift_name("ESP_PACKET_EOF")));
@property (class, readonly) int8_t ESP_PACKET_SOF __attribute__((swift_name("ESP_PACKET_SOF")));
@property (class, readonly) int32_t LEGACY_FRAMING_BYTES __attribute__((swift_name("LEGACY_FRAMING_BYTES")));
@property (class, readonly) int32_t ORIG_IDX __attribute__((swift_name("ORIG_IDX")));
@property (class, readonly) int8_t ORIG_INDENTIFIER_BASE_CONST __attribute__((swift_name("ORIG_INDENTIFIER_BASE_CONST")));
@property (class, readonly) int8_t PACKET_DELIMITER_BYTE __attribute__((swift_name("PACKET_DELIMITER_BYTE")));
@property (class, readonly) int32_t PACK_ID_IDX __attribute__((swift_name("PACK_ID_IDX")));
@property (class, readonly) int32_t PAYLOAD_LEN_IDX __attribute__((swift_name("PAYLOAD_LEN_IDX")));
@property (class, readonly) int32_t PAYLOAD_START_IDX __attribute__((swift_name("PAYLOAD_START_IDX")));
@property (class, readonly) int8_t SEVEN_SEG_VALUE_0 __attribute__((swift_name("SEVEN_SEG_VALUE_0")));
@property (class, readonly) int8_t SEVEN_SEG_VALUE_1 __attribute__((swift_name("SEVEN_SEG_VALUE_1")));
@property (class, readonly) int8_t SEVEN_SEG_VALUE_2 __attribute__((swift_name("SEVEN_SEG_VALUE_2")));
@property (class, readonly) int8_t SEVEN_SEG_VALUE_3 __attribute__((swift_name("SEVEN_SEG_VALUE_3")));
@property (class, readonly) int8_t SEVEN_SEG_VALUE_4 __attribute__((swift_name("SEVEN_SEG_VALUE_4")));
@property (class, readonly) int8_t SEVEN_SEG_VALUE_5 __attribute__((swift_name("SEVEN_SEG_VALUE_5")));
@property (class, readonly) int8_t SEVEN_SEG_VALUE_6 __attribute__((swift_name("SEVEN_SEG_VALUE_6")));
@property (class, readonly) int8_t SEVEN_SEG_VALUE_7 __attribute__((swift_name("SEVEN_SEG_VALUE_7")));
@property (class, readonly) int8_t SEVEN_SEG_VALUE_8 __attribute__((swift_name("SEVEN_SEG_VALUE_8")));
@property (class, readonly) int8_t SEVEN_SEG_VALUE_9 __attribute__((swift_name("SEVEN_SEG_VALUE_9")));
@property (class, readonly) int8_t SEVEN_SEG_VALUE_A __attribute__((swift_name("SEVEN_SEG_VALUE_A")));
@property (class, readonly) int8_t SEVEN_SEG_VALUE_C __attribute__((swift_name("SEVEN_SEG_VALUE_C")));
@property (class, readonly) int8_t SEVEN_SEG_VALUE_E __attribute__((swift_name("SEVEN_SEG_VALUE_E")));
@property (class, readonly) int8_t SEVEN_SEG_VALUE_F __attribute__((swift_name("SEVEN_SEG_VALUE_F")));
@property (class, readonly) int8_t SEVEN_SEG_VALUE_J __attribute__((swift_name("SEVEN_SEG_VALUE_J")));
@property (class, readonly) int8_t SEVEN_SEG_VALUE_L __attribute__((swift_name("SEVEN_SEG_VALUE_L")));
@property (class, readonly) int8_t SEVEN_SEG_VALUE_POUND __attribute__((swift_name("SEVEN_SEG_VALUE_POUND")));
@property (class, readonly) int8_t SEVEN_SEG_VALUE_U __attribute__((swift_name("SEVEN_SEG_VALUE_U")));
@property (class, readonly) int8_t SEVEN_SEG_VALUE_b __attribute__((swift_name("SEVEN_SEG_VALUE_b")));
@property (class, readonly) int8_t SEVEN_SEG_VALUE_c __attribute__((swift_name("SEVEN_SEG_VALUE_c")));
@property (class, readonly) int8_t SEVEN_SEG_VALUE_d __attribute__((swift_name("SEVEN_SEG_VALUE_d")));
@property (class, readonly) int8_t SEVEN_SEG_VALUE_l __attribute__((swift_name("SEVEN_SEG_VALUE_l")));
@property (class, readonly) int8_t SEVEN_SEG_VALUE_u __attribute__((swift_name("SEVEN_SEG_VALUE_u")));
@property (class, readonly) int32_t SOF_IDX __attribute__((swift_name("SOF_IDX")));

/**Constant value that represents the Valentine One's Seven Segment displaying the character '0' */

/**Constant value that represents the Valentine One's Seven Segment displaying the character '1' */

/**Constant value that represents the Valentine One's Seven Segment displaying the character '2' */

/**Constant value that represents the Valentine One's Seven Segment displaying the character '3' */

/**Constant value that represents the Valentine One's Seven Segment displaying the character '4' */

/**Constant value that represents the Valentine One's Seven Segment displaying the character '5' */

/**Constant value that represents the Valentine One's Seven Segment displaying the character '6' */

/**Constant value that represents the Valentine One's Seven Segment displaying the character '7' */

/**Constant value that represents the Valentine One's Seven Segment displaying the character '8' */

/**Constant value that represents the Valentine One's Seven Segment displaying the character '9' */

/**Constant value that represents the Valentine One's Seven Segment displaying the character 'A' */

/**Constant value that represents the Valentine One's Seven Segment displaying the character 'C' */

/**Constant value that represents the Valentine One's Seven Segment displaying the character 'E' */

/**Constant value that represents the Valentine One's Seven Segment displaying the character 'F' */

/**Constant value that represents the Valentine One's Seven Segment displaying the character 'J' */

/**Constant value that represents the Valentine One's Seven Segment displaying the character 'L' */

/**Constant value that represents the Valentine One's Seven Segment displaying the character '#' */

/**Constant value that represents the Valentine One's Seven Segment displaying the character 'U' */

/**Constant value that represents the Valentine One's Seven Segment displaying the character 'B' */

/**Constant value that represents the Valentine One's Seven Segment displaying the character 'c' */

/**Constant value that represents the Valentine One's Seven Segment displaying the character 'D' */

/**Constant value that represents the Valentine One's Seven Segment displaying the character 'l' */

/**Constant value that represents the Valentine One's Seven Segment displaying the character 'u' */
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DisplayDataKt")))
@interface KESPLKDisplayDataKt : KESPLKBase
@property (class, readonly) int32_t AUX_0_INDEX __attribute__((swift_name("AUX_0_INDEX")));
@property (class, readonly) int32_t AUX_1_INDEX __attribute__((swift_name("AUX_1_INDEX")));
@property (class, readonly) int32_t AUX_2_INDEX __attribute__((swift_name("AUX_2_INDEX")));
@property (class, readonly) int32_t BAND_ARROW_IMG_1_INDEX __attribute__((swift_name("BAND_ARROW_IMG_1_INDEX")));
@property (class, readonly) int32_t BAND_ARROW_IMG_2_INDEX __attribute__((swift_name("BAND_ARROW_IMG_2_INDEX")));
@property (class, readonly) int32_t BOGEY_COUNTER_IMG_1_INDEX __attribute__((swift_name("BOGEY_COUNTER_IMG_1_INDEX")));
@property (class, readonly) int32_t BOGEY_COUNTER_IMG_2_INDEX __attribute__((swift_name("BOGEY_COUNTER_IMG_2_INDEX")));
@property (class, readonly) int32_t SIGNAL_STRENGTH_BARGRAPH_INDEX __attribute__((swift_name("SIGNAL_STRENGTH_BARGRAPH_INDEX")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ESPByteArrayFlowExtKt")))
@interface KESPLKESPByteArrayFlowExtKt : KESPLKBase

/**
 * Waits for an [ESPPacketId.InfDisplayData] packet from the specified [v1] device
 * that matches a custom condition, in response to an initial request.
 *
 * This function is a specialized version of [waitForESPResponseForESPRequest] tailored for
 * observing [ESPPacketId.InfDisplayData] packets. It waits for a response packet that
 * originates from the given [v1] and has the packet ID [ESPPacketId.InfDisplayData].
 * The key difference is the `transformESPPacket` lambda, which allows for custom validation
 * of the received `InfDisplayData` packet.
 *
 * The function will wait for a packet that satisfies the `transformESPPacket` predicate
 * (returns `true`). If such a packet is received within the [timeout] period,
 * an [ESPResponse.Success] containing the raw [ByteArray] of that packet is returned.
 *
 * If the [timeout] is reached before a matching packet is found, an [ESPFailure.TimedOut]
 * is returned. Other [ESPFailure] types (like [ESPFailure.V1Busy], [ESPFailure.NotProcessed],
 * etc.) can also be returned if encountered during the process.
 *
 * @param requestDestination TODO
 * @param requestPacketId The [ESPPacketId] of the original request packet. This is used to
 *                        correlate error responses (like "V1 Busy") back to this specific request.
 * @param v1 The specific [ESPDevice.ValentineOne] instance from which the `InfDisplayData`
 *           is expected.
 * @param timeout The maximum [Duration] to wait for a matching `InfDisplayData` packet.
 * @param maxBusyPackets The maximum number of consecutive "V1 Busy" packets to tolerate before
 *                       considering it an error. Defaults to 10.
 * @param infDisplayDataPredicate TODO
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)waitForMatchingInfDisplayDataObserveRequestFeedback:(id<KESPLKKotlinx_coroutines_coreFlow>)receiver requestDestination:(KESPLKESPDevice *)requestDestination requestPacketId:(KESPLKESPPacketId *)requestPacketId v1:(KESPLKESPDeviceValentineOne *)v1 timeout:(int64_t)timeout maxBusyPackets:(int32_t)maxBusyPackets infDisplayDataPredicate:(KESPLKBoolean *(^)(KESPLKKotlinByteArray *))infDisplayDataPredicate completionHandler:(void (^)(id<KESPLKESPResponse> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("waitForMatchingInfDisplayDataObserveRequestFeedback(_:requestDestination:requestPacketId:v1:timeout:maxBusyPackets:infDisplayDataPredicate:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ESPCentralManagerDelegateKt")))
@interface KESPLKESPCentralManagerDelegateKt : KESPLKBase
+ (BOOL)isConnectionInterrupted:(id<KESPLKESPCoreBluetoothEvent>)receiver peripheral:(CBPeripheral *)peripheral __attribute__((swift_name("isConnectionInterrupted(_:peripheral:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ESPCoroutineScopeKt")))
@interface KESPLKESPCoroutineScopeKt : KESPLKBase
+ (id<KESPLKKotlinx_coroutines_coreCoroutineScope>)getDefaultScopeDispatcher:(KESPLKKotlinx_coroutines_coreCoroutineDispatcher *)dispatcher parent:(id<KESPLKKotlinx_coroutines_coreJob> _Nullable)parent __attribute__((swift_name("getDefaultScope(dispatcher:parent:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ESPDeviceKt")))
@interface KESPLKESPDeviceKt : KESPLKBase
+ (KESPLKESPDeviceValentineOne *)getValentineOneOrigin:(int8_t)origin __attribute__((swift_name("getValentineOne(origin:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ESPFlowExtKt")))
@interface KESPLKESPFlowExtKt : KESPLKBase
+ (id<KESPLKKotlinx_coroutines_coreFlow>)filterIsDisplayData:(id<KESPLKKotlinx_coroutines_coreFlow>)receiver __attribute__((swift_name("filterIsDisplayData(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ESPModuleGenio_github_developrofthings_kespl_diKt")))
@interface KESPLKESPModuleGenio_github_developrofthings_kespl_diKt : KESPLKBase
@property (class, readonly) KESPLKKoin_coreModule *io_github_developrofthings_kespl_di_ESPModule __attribute__((swift_name("io_github_developrofthings_kespl_di_ESPModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ESPPacketIdKt")))
@interface KESPLKESPPacketIdKt : KESPLKBase
+ (KESPLKESPPacketId *)getPacketIdPacketIdByte:(int8_t)packetIdByte __attribute__((swift_name("getPacketId(packetIdByte:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ESPPacketUtilsKt")))
@interface KESPLKESPPacketUtilsKt : KESPLKBase
+ (BOOL)isAlertData:(id)receiver __attribute__((swift_name("isAlertData(_:)")));
+ (BOOL)isAllVolume:(id)receiver __attribute__((swift_name("isAllVolume(_:)")));
+ (BOOL)isDataError:(id)receiver __attribute__((swift_name("isDataError(_:)")));
+ (BOOL)isForMe:(id)receiver __attribute__((swift_name("isForMe(_:)")));
+ (BOOL)isInfDisplayData:(id)receiver __attribute__((swift_name("isInfDisplayData(_:)")));
+ (BOOL)isMaxSweepIndex:(id)receiver __attribute__((swift_name("isMaxSweepIndex(_:)")));
+ (BOOL)isRequestNotProcessed:(id)receiver __attribute__((swift_name("isRequestNotProcessed(_:)")));
+ (BOOL)isSweepSection:(id)receiver __attribute__((swift_name("isSweepSection(_:)")));
+ (BOOL)isUnsupportedPacket:(id)receiver __attribute__((swift_name("isUnsupportedPacket(_:)")));
+ (BOOL)isUserBytes:(id)receiver __attribute__((swift_name("isUserBytes(_:)")));
+ (BOOL)isV1Busy:(id)receiver __attribute__((swift_name("isV1Busy(_:)")));
+ (BOOL)isV1Version:(id)receiver __attribute__((swift_name("isV1Version(_:)")));
+ (BOOL)isVersion:(id)receiver __attribute__((swift_name("isVersion(_:)")));
+ (BOOL)isVolume:(id)receiver __attribute__((swift_name("isVolume(_:)")));
+ (KESPLKKotlinByteArray *)assemblePayloadUseChecksum:(BOOL)useChecksum destinationByte:(int8_t)destinationByte originIdByte:(int8_t)originIdByte packetIdByte:(int8_t)packetIdByte payload:(KESPLKKotlinByteArray *)payload __attribute__((swift_name("assemblePayload(useChecksum:destinationByte:originIdByte:packetIdByte:payload:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ESPResponseKt")))
@interface KESPLKESPResponseKt : KESPLKBase
+ (KESPLKESPResponseFailure<id> *)asFailure:(id _Nullable)receiver __attribute__((swift_name("asFailure(_:)")));
+ (KESPLKESPResponseSuccess<id> *)asSuccess:(id _Nullable)receiver __attribute__((swift_name("asSuccess(_:)")));
+ (void)onFailure:(id<KESPLKESPResponse>)receiver onFailure:(id _Nullable (^)(id<KESPLKESPFailure>))onFailure __attribute__((swift_name("onFailure(_:onFailure:)")));
+ (id<KESPLKESPResponse>)onSuccess:(id<KESPLKESPResponse>)receiver onSuccess:(id<KESPLKESPResponse> (^)(id _Nullable))onSuccess __attribute__((swift_name("onSuccess(_:onSuccess:)")));
+ (id<KESPLKESPResponse>)onSuccessResponse:(id<KESPLKESPResponse>)receiver onSuccess:(id<KESPLKESPResponse> (^)(KESPLKESPResponseSuccess<id> *))onSuccess __attribute__((swift_name("onSuccessResponse(_:onSuccess:)")));
+ (id _Nullable)unWrap:(id<KESPLKESPResponse>)receiver onFailure:(id _Nullable (^)(id<KESPLKESPFailure>))onFailure onSuccess:(id _Nullable (^)(id _Nullable))onSuccess __attribute__((swift_name("unWrap(_:onFailure:onSuccess:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IConnectionKt")))
@interface KESPLKIConnectionKt : KESPLKBase
@property (class, readonly) int64_t defaultWriteTimeout __attribute__((swift_name("defaultWriteTimeout")));
@property (class, readonly) int64_t staleDataWatchDogTimeout __attribute__((swift_name("staleDataWatchDogTimeout")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IESPClientKt")))
@interface KESPLKIESPClientKt : KESPLKBase
@property (class, readonly) int64_t defaultLongRequestTimeout __attribute__((swift_name("defaultLongRequestTimeout")));
@property (class, readonly) int64_t defaultRequestTimeout __attribute__((swift_name("defaultRequestTimeout")));
@property (class, readonly) int64_t defaultScanDuration __attribute__((swift_name("defaultScanDuration")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InfDisplayDataKt")))
@interface KESPLKInfDisplayDataKt : KESPLKBase
+ (KESPLKV1Mode *)bogeyCounterMode:(id)receiver __attribute__((swift_name("bogeyCounterMode(_:)")));
+ (BOOL)isCustomSweep:(id)receiver __attribute__((swift_name("isCustomSweep(_:)")));
+ (BOOL)isDisplayActive:(id)receiver __attribute__((swift_name("isDisplayActive(_:)")));
+ (BOOL)isDisplayOn:(id)receiver __attribute__((swift_name("isDisplayOn(_:)")));
+ (BOOL)isEuro:(id)receiver __attribute__((swift_name("isEuro(_:)")));
+ (BOOL)isLegacy:(id)receiver __attribute__((swift_name("isLegacy(_:)")));
+ (BOOL)isSearchingForAlerts:(id)receiver __attribute__((swift_name("isSearchingForAlerts(_:)")));
+ (BOOL)isSoft:(id)receiver __attribute__((swift_name("isSoft(_:)")));
+ (BOOL)isTimeSlicing:(id)receiver __attribute__((swift_name("isTimeSlicing(_:)")));
+ (KESPLKV1Mode *)mode:(id)receiver __attribute__((swift_name("mode(_:)")));
+ (id)displayData:(id)receiver __attribute__((swift_name("displayData(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InfV1BusyKt")))
@interface KESPLKInfV1BusyKt : KESPLKBase
+ (KESPLKKotlinByteArray *)busyPacketIdBytes:(id)receiver __attribute__((swift_name("busyPacketIdBytes(_:)")));

/**
 * Returns a [List] of [ESPPacketId] of pending requests to the Valentine One. An empty list
 * is returned if the Valentine One has no pending requests.
 */
+ (NSArray<KESPLKESPPacketId *> *)busyPacketIds:(id)receiver __attribute__((swift_name("busyPacketIds(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KoinMeta_5e440e9fKt")))
@interface KESPLKKoinMeta_5e440e9fKt : KESPLKBase
@property (class, readonly) KESPLKKotlinUnit *_KSP_AndroidxDatastoreCoreDataStore __attribute__((swift_name("_KSP_AndroidxDatastoreCoreDataStore")));
@property (class, readonly) KESPLKKotlinUnit *_KSP_IoGithubDeveloprofthingsKesplBluetoothConnectionIConnection_Q_DEMO_CONNECTION_QUALIFIER __attribute__((swift_name("_KSP_IoGithubDeveloprofthingsKesplBluetoothConnectionIConnection_Q_DEMO_CONNECTION_QUALIFIER")));
@property (class, readonly) KESPLKKotlinUnit *_KSP_IoGithubDeveloprofthingsKesplBluetoothConnectionIConnection_Q_LE_CONNECTION_QUALIFIER __attribute__((swift_name("_KSP_IoGithubDeveloprofthingsKesplBluetoothConnectionIConnection_Q_LE_CONNECTION_QUALIFIER")));
@property (class, readonly) KESPLKKotlinUnit *_KSP_IoGithubDeveloprofthingsKesplBluetoothDiscoveryIV1cScanner_Q_V1C_DEMO_QUALIFER __attribute__((swift_name("_KSP_IoGithubDeveloprofthingsKesplBluetoothDiscoveryIV1cScanner_Q_V1C_DEMO_QUALIFER")));
@property (class, readonly) KESPLKKotlinUnit *_KSP_IoGithubDeveloprofthingsKesplESPFlowController __attribute__((swift_name("_KSP_IoGithubDeveloprofthingsKesplESPFlowController")));
@property (class, readonly) KESPLKKotlinUnit *_KSP_IoGithubDeveloprofthingsKesplMutableESPFlowController __attribute__((swift_name("_KSP_IoGithubDeveloprofthingsKesplMutableESPFlowController")));
@property (class, readonly) KESPLKKotlinUnit *_KSP_IoGithubDeveloprofthingsKesplPreferencesIESPPreferencesManager __attribute__((swift_name("_KSP_IoGithubDeveloprofthingsKesplPreferencesIESPPreferencesManager")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KoinMeta_c10909c2Kt")))
@interface KESPLKKoinMeta_c10909c2Kt : KESPLKBase
@property (class, readonly) KESPLKKotlinUnit *_KSP_IoGithubDeveloprofthingsKesplBluetoothDiscoveryIV1cScanner_Q_V1C_LE_QUALIFER __attribute__((swift_name("_KSP_IoGithubDeveloprofthingsKesplBluetoothDiscoveryIV1cScanner_Q_V1C_LE_QUALIFER")));
@property (class, readonly) KESPLKKotlinUnit *_KSP_IoGithubDeveloprofthingsKesplBluetoothIBluetoothManager __attribute__((swift_name("_KSP_IoGithubDeveloprofthingsKesplBluetoothIBluetoothManager")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Logger_iosKt")))
@interface KESPLKLogger_iosKt : KESPLKBase
+ (id<KESPLKPlatformLogger>)createLoggerEnabled:(BOOL)enabled __attribute__((swift_name("createLogger(enabled:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NotProcessedKt")))
@interface KESPLKNotProcessedKt : KESPLKBase
+ (KESPLKESPPacketId *)notProcessedPacketId:(id)receiver __attribute__((swift_name("notProcessedPacketId(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlatformNativeModuleGenio_github_developrofthings_kespl_diKt")))
@interface KESPLKPlatformNativeModuleGenio_github_developrofthings_kespl_diKt : KESPLKBase
@property (class, readonly) KESPLKKoin_coreModule *io_github_developrofthings_kespl_di_PlatformNativeModule __attribute__((swift_name("io_github_developrofthings_kespl_di_PlatformNativeModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SavvyKt")))
@interface KESPLKSavvyKt : KESPLKBase
+ (KESPLKSAVVYStatus *)status:(id)receiver __attribute__((swift_name("status(_:)")));
+ (int32_t)toKPH:(int32_t)receiver __attribute__((swift_name("toKPH(_:)")));
+ (int32_t)toMPH:(int32_t)receiver __attribute__((swift_name("toMPH(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SerialKt")))
@interface KESPLKSerialKt : KESPLKBase
+ (BOOL)isSerialNumberResponse:(id)receiver __attribute__((swift_name("isSerialNumberResponse(_:)")));
+ (NSString *)serialNumber:(id)receiver __attribute__((swift_name("serialNumber(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SweepDefinitionKt")))
@interface KESPLKSweepDefinitionKt : KESPLKBase
+ (int32_t)maxSweepIndex:(id)receiver __attribute__((swift_name("maxSweepIndex(_:)")));
+ (int32_t)writeResult:(id)receiver __attribute__((swift_name("writeResult(_:)")));
+ (KESPLKSweepDefinition *)sweepDefinition:(id)receiver __attribute__((swift_name("sweepDefinition(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SweepSectionKt")))
@interface KESPLKSweepSectionKt : KESPLKBase
+ (KESPLKSweepSection *)SweepSectionIndex:(int32_t)index count:(int32_t)count lowerEdge:(int32_t)lowerEdge upperEdge:(int32_t)upperEdge __attribute__((swift_name("SweepSection(index:count:lowerEdge:upperEdge:)")));
+ (NSArray<KESPLKSweepSection *> *)sweepSections:(id)receiver __attribute__((swift_name("sweepSections(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserSettingsKt")))
@interface KESPLKUserSettingsKt : KESPLKBase
+ (id<KESPLKUserSettings>)techDisplayUserBytes:(id)receiver version:(double)version __attribute__((swift_name("techDisplayUserBytes(_:version:)")));
+ (id<KESPLKUserSettings>)valentineOneUserBytes:(id)receiver version:(double)version __attribute__((swift_name("valentineOneUserBytes(_:version:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UtilKt")))
@interface KESPLKUtilKt : KESPLKBase
+ (KESPLKKotlinByteArray *)toByteArray:(NSData *)receiver __attribute__((swift_name("toByteArray(_:)")));
+ (KESPLKKotlinUuid *)toUuid:(CBUUID *)receiver __attribute__((swift_name("toUuid(_:)")));
+ (KESPLKKotlinUuid *)toUuid_:(NSUUID *)receiver __attribute__((swift_name("toUuid(__:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("V1ModeKt")))
@interface KESPLKV1ModeKt : KESPLKBase
@property (class, readonly) NSArray<KESPLKV1Mode *> *modes __attribute__((swift_name("modes")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("V1VersionInfoKt")))
@interface KESPLKV1VersionInfoKt : KESPLKBase
@property (class, readonly) double V1_GEN2_AUTO_MUTE_SETTING_VERSION __attribute__((swift_name("V1_GEN2_AUTO_MUTE_SETTING_VERSION")));
@property (class, readonly) double V1_GEN2_PHOTO_RADAR_VERSION __attribute__((swift_name("V1_GEN2_PHOTO_RADAR_VERSION")));
@property (class, readonly) double V1_GEN_2_PLATFORM_BASELINE_VERSION __attribute__((swift_name("V1_GEN_2_PLATFORM_BASELINE_VERSION")));
@property (class, readonly) double V1_GEN_2_PLATFORM_MAX_VERSION __attribute__((swift_name("V1_GEN_2_PLATFORM_MAX_VERSION")));

/**
 * Baseline version of the V1 Gen2 platform
 */

/**
 * Max version of the V1 Gen2 platform
 */
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("V1cTypeKt")))
@interface KESPLKV1cTypeKt : KESPLKBase
+ (NSArray<KESPLKV1cType *> *)supportedTypes __attribute__((swift_name("supportedTypes()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VehicleSpeedKt")))
@interface KESPLKVehicleSpeedKt : KESPLKBase
+ (int32_t)speed:(id)receiver __attribute__((swift_name("speed(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VersionKt")))
@interface KESPLKVersionKt : KESPLKBase
+ (double)asDouble:(NSString *)receiver __attribute__((swift_name("asDouble(_:)")));
+ (NSString *)version:(id)receiver __attribute__((swift_name("version(_:)")));
+ (double)versionDouble:(id)receiver __attribute__((swift_name("versionDouble(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VolumeKt")))
@interface KESPLKVolumeKt : KESPLKBase
+ (KESPLKV1Volumes *)allVolumes:(id)receiver __attribute__((swift_name("allVolumes(_:)")));
+ (KESPLKV1Volume *)currentVolume:(id)receiver __attribute__((swift_name("currentVolume(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("__SkieSuspendWrappersKt")))
@interface KESPLK__SkieSuspendWrappersKt : KESPLKBase
+ (void)Skie_Suspend__0__waitForMatchingInfDisplayDataObserveRequestFeedbackExtensionReceiver:(id<KESPLKKotlinx_coroutines_coreFlow>)extensionReceiver requestDestination:(KESPLKESPDevice *)requestDestination requestPacketId:(KESPLKESPPacketId *)requestPacketId v1:(KESPLKESPDeviceValentineOne *)v1 timeout:(int64_t)timeout maxBusyPackets:(int32_t)maxBusyPackets infDisplayDataPredicate:(KESPLKBoolean *(^)(KESPLKKotlinByteArray *))infDisplayDataPredicate suspendHandler:(KESPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__0__waitForMatchingInfDisplayDataObserveRequestFeedback(extensionReceiver:requestDestination:requestPacketId:v1:timeout:maxBusyPackets:infDisplayDataPredicate:suspendHandler:)")));
+ (void)Skie_Suspend__10__disconnectDispatchReceiver:(id<KESPLKIESPClient>)dispatchReceiver suspendHandler:(KESPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__10__disconnect(dispatchReceiver:suspendHandler:)")));
+ (void)Skie_Suspend__11__displayCurrentVolumeDispatchReceiver:(id<KESPLKIESPClient>)dispatchReceiver timeout:(int64_t)timeout suspendHandler:(KESPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__11__displayCurrentVolume(dispatchReceiver:timeout:suspendHandler:)")));
+ (void)Skie_Suspend__12__enableAlertTableDispatchReceiver:(id<KESPLKIESPClient>)dispatchReceiver enable:(BOOL)enable timeout:(int64_t)timeout suspendHandler:(KESPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__12__enableAlertTable(dispatchReceiver:enable:timeout:suspendHandler:)")));
+ (void)Skie_Suspend__13__hasPreviousV1connectionDispatchReceiver:(id<KESPLKIESPClient>)dispatchReceiver suspendHandler:(KESPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__13__hasPreviousV1connection(dispatchReceiver:suspendHandler:)")));
+ (void)Skie_Suspend__14__muteDispatchReceiver:(id<KESPLKIESPClient>)dispatchReceiver muted:(BOOL)muted timeout:(int64_t)timeout suspendHandler:(KESPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__14__mute(dispatchReceiver:muted:timeout:suspendHandler:)")));
+ (void)Skie_Suspend__15__muteDispatchReceiver:(id<KESPLKIESPClient>)dispatchReceiver timeout:(int64_t)timeout suspendHandler:(KESPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__15__mute(dispatchReceiver:timeout:suspendHandler:)")));
+ (void)Skie_Suspend__16__overrideSAVVYThumbWheelDispatchReceiver:(id<KESPLKIESPClient>)dispatchReceiver speed:(int32_t)speed timeout:(int64_t)timeout suspendHandler:(KESPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__16__overrideSAVVYThumbWheel(dispatchReceiver:speed:timeout:suspendHandler:)")));
+ (void)Skie_Suspend__17__overrideSAVVYThumbWheelDispatchReceiver:(id<KESPLKIESPClient>)dispatchReceiver speed:(int8_t)speed timeout:(int64_t)timeout suspendHandler:(KESPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__17__overrideSAVVYThumbWheel(dispatchReceiver:speed:timeout:suspendHandler:)")));
+ (void)Skie_Suspend__18__overrideSAVVYThumbWheelDispatchReceiver:(id<KESPLKIESPClient>)dispatchReceiver override:(KESPLKSAVVYThumbwheelOverride *)override timeout:(int64_t)timeout suspendHandler:(KESPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__18__overrideSAVVYThumbWheel(dispatchReceiver:override:timeout:suspendHandler:)")));
+ (void)Skie_Suspend__19__requestAllVolumesDispatchReceiver:(id<KESPLKIESPClient>)dispatchReceiver timeout:(int64_t)timeout suspendHandler:(KESPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__19__requestAllVolumes(dispatchReceiver:timeout:suspendHandler:)")));
+ (void)Skie_Suspend__1__hasNextDispatchReceiver:(KESPLKSkieColdFlowIterator<id> *)dispatchReceiver suspendHandler:(KESPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__1__hasNext(dispatchReceiver:suspendHandler:)")));
+ (void)Skie_Suspend__20__requestBatteryVoltageDispatchReceiver:(id<KESPLKIESPClient>)dispatchReceiver timeout:(int64_t)timeout suspendHandler:(KESPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__20__requestBatteryVoltage(dispatchReceiver:timeout:suspendHandler:)")));
+ (void)Skie_Suspend__21__requestCurrentVolumeDispatchReceiver:(id<KESPLKIESPClient>)dispatchReceiver timeout:(int64_t)timeout suspendHandler:(KESPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__21__requestCurrentVolume(dispatchReceiver:timeout:suspendHandler:)")));
+ (void)Skie_Suspend__22__requestDefaultSweepDefinitionsDispatchReceiver:(id<KESPLKIESPClient>)dispatchReceiver timeout:(int64_t)timeout suspendHandler:(KESPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__22__requestDefaultSweepDefinitions(dispatchReceiver:timeout:suspendHandler:)")));
+ (void)Skie_Suspend__23__requestDeviceSerialNumberDispatchReceiver:(id<KESPLKIESPClient>)dispatchReceiver destination:(KESPLKESPDevice *)destination timeout:(int64_t)timeout suspendHandler:(KESPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__23__requestDeviceSerialNumber(dispatchReceiver:destination:timeout:suspendHandler:)")));
+ (void)Skie_Suspend__24__requestDeviceVersionDispatchReceiver:(id<KESPLKIESPClient>)dispatchReceiver destination:(KESPLKESPDevice *)destination timeout:(int64_t)timeout suspendHandler:(KESPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__24__requestDeviceVersion(dispatchReceiver:destination:timeout:suspendHandler:)")));
+ (void)Skie_Suspend__25__requestMaxSweepIndexDispatchReceiver:(id<KESPLKIESPClient>)dispatchReceiver timeout:(int64_t)timeout suspendHandler:(KESPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__25__requestMaxSweepIndex(dispatchReceiver:timeout:suspendHandler:)")));
+ (void)Skie_Suspend__26__requestSAVVYStatusDispatchReceiver:(id<KESPLKIESPClient>)dispatchReceiver timeout:(int64_t)timeout suspendHandler:(KESPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__26__requestSAVVYStatus(dispatchReceiver:timeout:suspendHandler:)")));
+ (void)Skie_Suspend__27__requestSweepDataDispatchReceiver:(id<KESPLKIESPClient>)dispatchReceiver timeout:(int64_t)timeout suspendHandler:(KESPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__27__requestSweepData(dispatchReceiver:timeout:suspendHandler:)")));
+ (void)Skie_Suspend__28__requestSweepDefinitionsDispatchReceiver:(id<KESPLKIESPClient>)dispatchReceiver timeout:(int64_t)timeout suspendHandler:(KESPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__28__requestSweepDefinitions(dispatchReceiver:timeout:suspendHandler:)")));
+ (void)Skie_Suspend__29__requestSweepSectionsDispatchReceiver:(id<KESPLKIESPClient>)dispatchReceiver timeout:(int64_t)timeout suspendHandler:(KESPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__29__requestSweepSections(dispatchReceiver:timeout:suspendHandler:)")));
+ (void)Skie_Suspend__2__collectDispatchReceiver:(id<KESPLKKotlinx_coroutines_coreFlow>)dispatchReceiver collector:(id<KESPLKKotlinx_coroutines_coreFlowCollector>)collector suspendHandler:(KESPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__2__collect(dispatchReceiver:collector:suspendHandler:)")));
+ (void)Skie_Suspend__30__requestUserBytesDispatchReceiver:(id<KESPLKIESPClient>)dispatchReceiver destination:(KESPLKESPDevice *)destination timeout:(int64_t)timeout suspendHandler:(KESPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__30__requestUserBytes(dispatchReceiver:destination:timeout:suspendHandler:)")));
+ (void)Skie_Suspend__31__requestUserSettingsDispatchReceiver:(id<KESPLKIESPClient>)dispatchReceiver destination:(KESPLKESPDevice *)destination forceVersionRequest:(BOOL)forceVersionRequest timeout:(int64_t)timeout suspendHandler:(KESPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__31__requestUserSettings(dispatchReceiver:destination:forceVersionRequest:timeout:suspendHandler:)")));
+ (void)Skie_Suspend__32__requestV1SerialNumberDispatchReceiver:(id<KESPLKIESPClient>)dispatchReceiver timeout:(int64_t)timeout suspendHandler:(KESPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__32__requestV1SerialNumber(dispatchReceiver:timeout:suspendHandler:)")));
+ (void)Skie_Suspend__33__requestV1UserSettingsDispatchReceiver:(id<KESPLKIESPClient>)dispatchReceiver forceVersionRequest:(BOOL)forceVersionRequest timeout:(int64_t)timeout suspendHandler:(KESPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__33__requestV1UserSettings(dispatchReceiver:forceVersionRequest:timeout:suspendHandler:)")));
+ (void)Skie_Suspend__34__requestV1VersionDispatchReceiver:(id<KESPLKIESPClient>)dispatchReceiver timeout:(int64_t)timeout suspendHandler:(KESPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__34__requestV1Version(dispatchReceiver:timeout:suspendHandler:)")));
+ (void)Skie_Suspend__35__requestVehicleSpeedDispatchReceiver:(id<KESPLKIESPClient>)dispatchReceiver timeout:(int64_t)timeout suspendHandler:(KESPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__35__requestVehicleSpeed(dispatchReceiver:timeout:suspendHandler:)")));
+ (void)Skie_Suspend__36__restoreDefaultSweepsDispatchReceiver:(id<KESPLKIESPClient>)dispatchReceiver verify:(BOOL)verify timeout:(int64_t)timeout suspendHandler:(KESPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__36__restoreDefaultSweeps(dispatchReceiver:verify:timeout:suspendHandler:)")));
+ (void)Skie_Suspend__37__restoreFactoryDefaultsDispatchReceiver:(id<KESPLKIESPClient>)dispatchReceiver destination:(KESPLKESPDevice *)destination verify:(BOOL)verify timeout:(int64_t)timeout suspendHandler:(KESPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__37__restoreFactoryDefaults(dispatchReceiver:destination:verify:timeout:suspendHandler:)")));
+ (void)Skie_Suspend__38__setMainDisplayDispatchReceiver:(id<KESPLKIESPClient>)dispatchReceiver on:(BOOL)on timeout:(int64_t)timeout suspendHandler:(KESPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__38__setMainDisplay(dispatchReceiver:on:timeout:suspendHandler:)")));
+ (void)Skie_Suspend__39__turnOffMainDisplayDispatchReceiver:(id<KESPLKIESPClient>)dispatchReceiver timeout:(int64_t)timeout suspendHandler:(KESPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__39__turnOffMainDisplay(dispatchReceiver:timeout:suspendHandler:)")));
+ (void)Skie_Suspend__3__emitDispatchReceiver:(id<KESPLKKotlinx_coroutines_coreFlowCollector>)dispatchReceiver value:(id _Nullable)value suspendHandler:(KESPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__3__emit(dispatchReceiver:value:suspendHandler:)")));
+ (void)Skie_Suspend__40__turnOnMainDisplayDispatchReceiver:(id<KESPLKIESPClient>)dispatchReceiver timeout:(int64_t)timeout suspendHandler:(KESPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__40__turnOnMainDisplay(dispatchReceiver:timeout:suspendHandler:)")));
+ (void)Skie_Suspend__41__unmuteDispatchReceiver:(id<KESPLKIESPClient>)dispatchReceiver timeout:(int64_t)timeout suspendHandler:(KESPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__41__unmute(dispatchReceiver:timeout:suspendHandler:)")));
+ (void)Skie_Suspend__42__unmuteSAVVYDispatchReceiver:(id<KESPLKIESPClient>)dispatchReceiver enableUnmuting:(BOOL)enableUnmuting timeout:(int64_t)timeout suspendHandler:(KESPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__42__unmuteSAVVY(dispatchReceiver:enableUnmuting:timeout:suspendHandler:)")));
+ (void)Skie_Suspend__43__writeSweepDefinitionsDispatchReceiver:(id<KESPLKIESPClient>)dispatchReceiver sweepDefinitions:(NSArray<KESPLKSweepDefinition *> *)sweepDefinitions timeout:(int64_t)timeout suspendHandler:(KESPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__43__writeSweepDefinitions(dispatchReceiver:sweepDefinitions:timeout:suspendHandler:)")));
+ (void)Skie_Suspend__44__writeUserBytesDispatchReceiver:(id<KESPLKIESPClient>)dispatchReceiver destination:(KESPLKESPDevice *)destination userBytes:(KESPLKKotlinByteArray *)userBytes verifyBytes:(BOOL)verifyBytes timeout:(int64_t)timeout suspendHandler:(KESPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__44__writeUserBytes(dispatchReceiver:destination:userBytes:verifyBytes:timeout:suspendHandler:)")));
+ (void)Skie_Suspend__45__writeV1UserBytesDispatchReceiver:(id<KESPLKIESPClient>)dispatchReceiver userBytes:(KESPLKKotlinByteArray *)userBytes verifyBytes:(BOOL)verifyBytes timeout:(int64_t)timeout suspendHandler:(KESPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__45__writeV1UserBytes(dispatchReceiver:userBytes:verifyBytes:timeout:suspendHandler:)")));
+ (void)Skie_Suspend__46__writeVolumeDispatchReceiver:(id<KESPLKIESPClient>)dispatchReceiver volume:(KESPLKV1Volume *)volume provideUserFeedback:(BOOL)provideUserFeedback skipFeedbackWhenNoChange:(BOOL)skipFeedbackWhenNoChange saveVolume:(BOOL)saveVolume timeout:(int64_t)timeout suspendHandler:(KESPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__46__writeVolume(dispatchReceiver:volume:provideUserFeedback:skipFeedbackWhenNoChange:saveVolume:timeout:suspendHandler:)")));
+ (void)Skie_Suspend__47__joinDispatchReceiver:(id<KESPLKKotlinx_coroutines_coreJob>)dispatchReceiver suspendHandler:(KESPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__47__join(dispatchReceiver:suspendHandler:)")));
+ (void)Skie_Suspend__48__awaitDispatchReceiver:(id<KESPLKKotlinx_coroutines_coreDeferred>)dispatchReceiver suspendHandler:(KESPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__48__await(dispatchReceiver:suspendHandler:)")));
+ (void)Skie_Suspend__49__querySystemBluetoothLESupportDispatchReceiver:(KESPLKIESPClientCompanion *)dispatchReceiver suspendHandler:(KESPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__49__querySystemBluetoothLESupport(dispatchReceiver:suspendHandler:)")));
+ (void)Skie_Suspend__4__abortAudioDelayDispatchReceiver:(id<KESPLKIESPClient>)dispatchReceiver timeout:(int64_t)timeout suspendHandler:(KESPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__4__abortAudioDelay(dispatchReceiver:timeout:suspendHandler:)")));
+ (void)Skie_Suspend__50__querySystemBluetoothSupportDispatchReceiver:(KESPLKIESPClientCompanion *)dispatchReceiver suspendHandler:(KESPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__50__querySystemBluetoothSupport(dispatchReceiver:suspendHandler:)")));
+ (void)Skie_Suspend__51__fromInputStreamDispatchReceiver:(KESPLKV1connectionDemoCompanion *)dispatchReceiver is:(id<KESPLKKotlinx_io_coreRawSource>)is suspendHandler:(KESPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__51__fromInputStream(dispatchReceiver:is:suspendHandler:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
+ (void)Skie_Suspend__52__cleanupForDisconnectionDispatchReceiver:(KESPLKBaseConnection *)dispatchReceiver suspendHandler:(KESPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__52__cleanupForDisconnection(dispatchReceiver:suspendHandler:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
+ (void)Skie_Suspend__53__onConnectionLostDispatchReceiver:(KESPLKBaseConnection *)dispatchReceiver suspendHandler:(KESPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__53__onConnectionLost(dispatchReceiver:suspendHandler:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
+ (void)Skie_Suspend__54__onDisconnectedDispatchReceiver:(KESPLKBaseConnection *)dispatchReceiver suspendHandler:(KESPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__54__onDisconnected(dispatchReceiver:suspendHandler:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
+ (void)Skie_Suspend__55__performConnectionDispatchReceiver:(KESPLKBaseConnection *)dispatchReceiver v1c:(id<KESPLKV1connection>)v1c directConnect:(BOOL)directConnect suspendHandler:(KESPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__55__performConnection(dispatchReceiver:v1c:directConnect:suspendHandler:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
+ (void)Skie_Suspend__56__performDisconnectDispatchReceiver:(KESPLKBaseConnection *)dispatchReceiver suspendHandler:(KESPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__56__performDisconnect(dispatchReceiver:suspendHandler:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
+ (void)Skie_Suspend__57__processESPDataDispatchReceiver:(KESPLKBaseConnection *)dispatchReceiver espData:(KESPLKKotlinByteArray *)espData suspendHandler:(KESPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__57__processESPData(dispatchReceiver:espData:suspendHandler:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
+ (void)Skie_Suspend__58__writeBytesDispatchReceiver:(KESPLKBaseConnection *)dispatchReceiver bytes:(KESPLKKotlinByteArray *)bytes suspendHandler:(KESPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__58__writeBytes(dispatchReceiver:bytes:suspendHandler:)")));
+ (void)Skie_Suspend__59__connectDispatchReceiver:(id<KESPLKIConnection>)dispatchReceiver v1c:(id<KESPLKV1connection>)v1c directConnect:(BOOL)directConnect suspendHandler:(KESPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__59__connect(dispatchReceiver:v1c:directConnect:suspendHandler:)")));
+ (void)Skie_Suspend__5__canPersistLastDevicesDispatchReceiver:(id<KESPLKIESPClient>)dispatchReceiver persist:(BOOL)persist suspendHandler:(KESPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__5__canPersistLastDevices(dispatchReceiver:persist:suspendHandler:)")));
+ (void)Skie_Suspend__60__disconnectDispatchReceiver:(id<KESPLKIConnection>)dispatchReceiver suspendHandler:(KESPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__60__disconnect(dispatchReceiver:suspendHandler:)")));
+ (void)Skie_Suspend__61__scanDispatchReceiver:(id<KESPLKIConnection>)dispatchReceiver scanMode:(KESPLKESPScanMode *)scanMode suspendHandler:(KESPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__61__scan(dispatchReceiver:scanMode:suspendHandler:)")));
+ (void)Skie_Suspend__62__writeRequestDispatchReceiver:(id<KESPLKIConnection>)dispatchReceiver request:(KESPLKESPRequest *)request waitForV1TypeDuration:(int64_t)waitForV1TypeDuration suspendHandler:(KESPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__62__writeRequest(dispatchReceiver:request:waitForV1TypeDuration:suspendHandler:)")));
+ (void)Skie_Suspend__6__changeModeDispatchReceiver:(id<KESPLKIESPClient>)dispatchReceiver mode:(KESPLKV1Mode *)mode timeout:(int64_t)timeout suspendHandler:(KESPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__6__changeMode(dispatchReceiver:mode:timeout:suspendHandler:)")));
+ (void)Skie_Suspend__7__clearPersistedLastDevicesDispatchReceiver:(id<KESPLKIESPClient>)dispatchReceiver suspendHandler:(KESPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__7__clearPersistedLastDevices(dispatchReceiver:suspendHandler:)")));
+ (void)Skie_Suspend__8__connectDispatchReceiver:(id<KESPLKIESPClient>)dispatchReceiver connectionStrategy:(KESPLKConnectionStrategy *)connectionStrategy scanDurationMillis:(int64_t)scanDurationMillis suspendHandler:(KESPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__8__connect(dispatchReceiver:connectionStrategy:scanDurationMillis:suspendHandler:)")));
+ (void)Skie_Suspend__9__connectDispatchReceiver:(id<KESPLKIESPClient>)dispatchReceiver v1c:(id<KESPLKV1connection>)v1c directConnect:(BOOL)directConnect suspendHandler:(KESPLKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__9__connect(dispatchReceiver:v1c:directConnect:suspendHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("__SkieTypeExportsKt")))
@interface KESPLK__SkieTypeExportsKt : KESPLKBase
+ (void)skieTypeExports_0P0:(id<KESPLKKotlinx_coroutines_coreSelectClause2>)p0 p1:(KESPLKKotlinx_serialization_corePolymorphicKind *)p1 p2:(KESPLKKotlinx_serialization_corePolymorphicKindOPEN *)p2 p3:(KESPLKKotlinx_serialization_corePolymorphicKindSEALED *)p3 p4:(KESPLKKotlinx_serialization_corePrimitiveKind *)p4 p5:(KESPLKKotlinx_serialization_corePrimitiveKindBOOLEAN *)p5 p6:(KESPLKKotlinx_serialization_corePrimitiveKindBYTE *)p6 p7:(KESPLKKotlinx_serialization_corePrimitiveKindCHAR *)p7 p8:(KESPLKKotlinx_serialization_corePrimitiveKindDOUBLE *)p8 p9:(KESPLKKotlinx_serialization_corePrimitiveKindFLOAT *)p9 p10:(KESPLKKotlinx_serialization_corePrimitiveKindINT *)p10 p11:(KESPLKKotlinx_serialization_corePrimitiveKindLONG *)p11 p12:(KESPLKKotlinx_serialization_corePrimitiveKindSHORT *)p12 p13:(KESPLKKotlinx_serialization_corePrimitiveKindSTRING *)p13 p14:(KESPLKKotlinx_serialization_coreSerialKindCONTEXTUAL *)p14 p15:(KESPLKKotlinx_serialization_coreSerialKindENUM *)p15 p16:(KESPLKKotlinx_serialization_coreStructureKind *)p16 p17:(KESPLKKotlinx_serialization_coreStructureKindCLASS *)p17 p18:(KESPLKKotlinx_serialization_coreStructureKindLIST *)p18 p19:(KESPLKKotlinx_serialization_coreStructureKindMAP *)p19 p20:(KESPLKKotlinx_serialization_coreStructureKindOBJECT *)p20 __attribute__((swift_name("skieTypeExports_0(p0:p1:p2:p3:p4:p5:p6:p7:p8:p9:p10:p11:p12:p13:p14:p15:p16:p17:p18:p19:p20:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreRunnable")))
@protocol KESPLKKotlinx_coroutines_coreRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface KESPLKKotlinArray<T> : KESPLKBase
@property (readonly) int32_t size __attribute__((swift_name("size")));
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(KESPLKInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<KESPLKKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface KESPLKKotlinEnumCompanion : KESPLKBase
@property (class, readonly, getter=shared) KESPLKKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinCoroutineContext")))
@protocol KESPLKKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<KESPLKKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<KESPLKKotlinCoroutineContextElement> _Nullable)getKey:(id<KESPLKKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<KESPLKKotlinCoroutineContext>)minusKeyKey:(id<KESPLKKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<KESPLKKotlinCoroutineContext>)plusContext:(id<KESPLKKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol KESPLKKotlinCoroutineContextElement <KESPLKKotlinCoroutineContext>
@required
@property (readonly) id<KESPLKKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreJob")))
@protocol KESPLKKotlinx_coroutines_coreJob <KESPLKKotlinCoroutineContextElement>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (id<KESPLKKotlinx_coroutines_coreChildHandle>)attachChildChild:(id<KESPLKKotlinx_coroutines_coreChildJob>)child __attribute__((swift_name("attachChild(child:)")));
- (void)cancelCause:(KESPLKKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (KESPLKKotlinCancellationException *)getCancellationException __attribute__((swift_name("getCancellationException()")));
- (id<KESPLKKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionHandler:(void (^)(KESPLKKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(handler:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (id<KESPLKKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionOnCancelling:(BOOL)onCancelling invokeImmediately:(BOOL)invokeImmediately handler:(void (^)(KESPLKKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(onCancelling:invokeImmediately:handler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)joinWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("join(completionHandler:)")));
- (id<KESPLKKotlinx_coroutines_coreJob>)plusOther:(id<KESPLKKotlinx_coroutines_coreJob>)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two Job objects is meaningless. Job is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The job to the right of `+` just replaces the job the left of `+`.")));
- (BOOL)start __attribute__((swift_name("start()")));
@property (readonly) id<KESPLKKotlinSequence> children __attribute__((swift_name("children")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled")));
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted")));
@property (readonly) id<KESPLKKotlinx_coroutines_coreSelectClause0> onJoin __attribute__((swift_name("onJoin")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
@property (readonly) id<KESPLKKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreDeferred")))
@protocol KESPLKKotlinx_coroutines_coreDeferred <KESPLKKotlinx_coroutines_coreJob>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)awaitWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("await(completionHandler:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (id _Nullable)getCompleted __attribute__((swift_name("getCompleted()")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (KESPLKKotlinThrowable * _Nullable)getCompletionExceptionOrNull __attribute__((swift_name("getCompletionExceptionOrNull()")));
@property (readonly) id<KESPLKKotlinx_coroutines_coreSelectClause1> onAwait __attribute__((swift_name("onAwait")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol KESPLKKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<KESPLKKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol KESPLKKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<KESPLKKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<KESPLKKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol KESPLKKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<KESPLKKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<KESPLKKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol KESPLKKotlinx_serialization_coreKSerializer <KESPLKKotlinx_serialization_coreSerializationStrategy, KESPLKKotlinx_serialization_coreDeserializationStrategy>
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="2.0")
*/
__attribute__((swift_name("KotlinAutoCloseable")))
@protocol KESPLKKotlinAutoCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end

__attribute__((swift_name("Kotlinx_io_coreRawSource")))
@protocol KESPLKKotlinx_io_coreRawSource <KESPLKKotlinAutoCloseable>
@required
- (int64_t)readAtMostToSink:(KESPLKKotlinx_io_coreBuffer *)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readAtMostTo(sink:byteCount:)")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="2.1")
 *   kotlin.time.ExperimentalTime
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinInstant")))
@interface KESPLKKotlinInstant : KESPLKBase <KESPLKKotlinComparable>
@property (class, readonly, getter=companion) KESPLKKotlinInstantCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) int64_t epochSeconds __attribute__((swift_name("epochSeconds")));
@property (readonly) int32_t nanosecondsOfSecond __attribute__((swift_name("nanosecondsOfSecond")));
- (int32_t)compareToOther:(KESPLKKotlinInstant *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (KESPLKKotlinInstant *)minusDuration:(int64_t)duration __attribute__((swift_name("minus(duration:)")));
- (int64_t)minusOther:(KESPLKKotlinInstant *)other __attribute__((swift_name("minus(other:)")));
- (KESPLKKotlinInstant *)plusDuration:(int64_t)duration __attribute__((swift_name("plus(duration:)")));
- (int64_t)toEpochMilliseconds __attribute__((swift_name("toEpochMilliseconds()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol KESPLKKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("KotlinByteIterator")))
@interface KESPLKKotlinByteIterator : KESPLKBase <KESPLKKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (KESPLKByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUuid.Companion")))
@interface KESPLKKotlinUuidCompanion : KESPLKBase
@property (class, readonly, getter=shared) KESPLKKotlinUuidCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) id<KESPLKKotlinComparator> LEXICAL_ORDER __attribute__((swift_name("LEXICAL_ORDER"))) __attribute__((deprecated("Use naturalOrder<Uuid>() instead")));
@property (readonly) KESPLKKotlinUuid *NIL __attribute__((swift_name("NIL")));
@property (readonly) int32_t SIZE_BITS __attribute__((swift_name("SIZE_BITS")));
@property (readonly) int32_t SIZE_BYTES __attribute__((swift_name("SIZE_BYTES")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (KESPLKKotlinUuid *)fromByteArrayByteArray:(KESPLKKotlinByteArray *)byteArray __attribute__((swift_name("fromByteArray(byteArray:)")));
- (KESPLKKotlinUuid *)fromLongsMostSignificantBits:(int64_t)mostSignificantBits leastSignificantBits:(int64_t)leastSignificantBits __attribute__((swift_name("fromLongs(mostSignificantBits:leastSignificantBits:)")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="2.1")
 *   kotlin.ExperimentalUnsignedTypes
*/
- (KESPLKKotlinUuid *)fromUByteArrayUbyteArray:(id)ubyteArray __attribute__((swift_name("fromUByteArray(ubyteArray:)")));
- (KESPLKKotlinUuid *)fromULongsMostSignificantBits:(uint64_t)mostSignificantBits leastSignificantBits:(uint64_t)leastSignificantBits __attribute__((swift_name("fromULongs(mostSignificantBits:leastSignificantBits:)")));
- (KESPLKKotlinUuid *)parseUuidString:(NSString *)uuidString __attribute__((swift_name("parse(uuidString:)")));
- (KESPLKKotlinUuid *)parseHexHexString:(NSString *)hexString __attribute__((swift_name("parseHex(hexString:)")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="2.1")
*/
- (KESPLKKotlinUuid *)parseHexDashHexDashString:(NSString *)hexDashString __attribute__((swift_name("parseHexDash(hexDashString:)")));
- (KESPLKKotlinUuid *)random __attribute__((swift_name("random()")));

/**
 * @note annotations
 *   kotlin.DeprecatedSinceKotlin(warningSince="2.1")
*/
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKoinApplication.Companion")))
@interface KESPLKKoin_coreKoinApplicationCompanion : KESPLKBase
@property (class, readonly, getter=shared) KESPLKKoin_coreKoinApplicationCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (KESPLKKoin_coreKoinApplication *)doInit __attribute__((swift_name("doInit()")));
@end

__attribute__((swift_name("Koin_coreLogger")))
@interface KESPLKKoin_coreLogger : KESPLKBase
@property KESPLKKoin_coreLevel *level __attribute__((swift_name("level")));
- (instancetype)initWithLevel:(KESPLKKoin_coreLevel *)level __attribute__((swift_name("init(level:)"))) __attribute__((objc_designated_initializer));
- (void)debugMsg:(NSString *)msg __attribute__((swift_name("debug(msg:)")));
- (void)displayLevel:(KESPLKKoin_coreLevel *)level msg:(NSString *)msg __attribute__((swift_name("display(level:msg:)")));
- (void)errorMsg:(NSString *)msg __attribute__((swift_name("error(msg:)")));
- (void)infoMsg:(NSString *)msg __attribute__((swift_name("info(msg:)")));
- (BOOL)isAtLvl:(KESPLKKoin_coreLevel *)lvl __attribute__((swift_name("isAt(lvl:)")));
- (void)logLvl:(KESPLKKoin_coreLevel *)lvl msg:(NSString *(^)(void))msg __attribute__((swift_name("log(lvl:msg:)")));
- (void)logLvl:(KESPLKKoin_coreLevel *)lvl msg_:(NSString *)msg __attribute__((swift_name("log(lvl:msg_:)")));
- (void)warnMsg:(NSString *)msg __attribute__((swift_name("warn(msg:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKoinOption")))
@interface KESPLKKoin_coreKoinOption : KESPLKKotlinEnum<KESPLKKoin_coreKoinOption *>
@property (class, readonly) KESPLKKoin_coreKoinOption *viewmodelScopeFactory __attribute__((swift_name("viewmodelScopeFactory")));
@property (class, readonly) NSArray<KESPLKKoin_coreKoinOption *> *entries __attribute__((swift_name("entries")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (KESPLKKotlinArray<KESPLKKoin_coreKoinOption *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinPair")))
@interface KESPLKKotlinPair<__covariant A, __covariant B> : KESPLKBase
@property (readonly) A _Nullable first __attribute__((swift_name("first")));
@property (readonly) B _Nullable second __attribute__((swift_name("second")));
- (instancetype)initWithFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("init(first:second:)"))) __attribute__((objc_designated_initializer));
- (KESPLKKotlinPair<A, B> *)doCopyFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("doCopy(first:second:)")));
- (BOOL)equalsOther:(id _Nullable)other __attribute__((swift_name("equals(other:)")));
- (int32_t)hashCode __attribute__((swift_name("hashCode()")));
- (NSString *)toString __attribute__((swift_name("toString()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreLevel")))
@interface KESPLKKoin_coreLevel : KESPLKKotlinEnum<KESPLKKoin_coreLevel *>
@property (class, readonly) KESPLKKoin_coreLevel *debug __attribute__((swift_name("debug")));
@property (class, readonly) KESPLKKoin_coreLevel *info __attribute__((swift_name("info")));
@property (class, readonly) KESPLKKoin_coreLevel *warning __attribute__((swift_name("warning")));
@property (class, readonly) KESPLKKoin_coreLevel *error __attribute__((swift_name("error")));
@property (class, readonly) KESPLKKoin_coreLevel *none __attribute__((swift_name("none")));
@property (class, readonly) NSArray<KESPLKKoin_coreLevel *> *entries __attribute__((swift_name("entries")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (KESPLKKotlinArray<KESPLKKoin_coreLevel *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKoin")))
@interface KESPLKKoin_coreKoin : KESPLKBase
@property (readonly) KESPLKKoin_coreExtensionManager *extensionManager __attribute__((swift_name("extensionManager")));
@property (readonly) KESPLKKoin_coreInstanceRegistry *instanceRegistry __attribute__((swift_name("instanceRegistry")));
@property (readonly) KESPLKKoin_coreLogger *logger __attribute__((swift_name("logger")));
@property (readonly) KESPLKKoin_coreOptionRegistry *optionRegistry __attribute__((swift_name("optionRegistry")));
@property (readonly) KESPLKKoin_corePropertyRegistry *propertyRegistry __attribute__((swift_name("propertyRegistry")));
@property (readonly) KESPLKKoin_coreCoreResolver *resolver __attribute__((swift_name("resolver")));
@property (readonly) KESPLKKoin_coreScopeRegistry *scopeRegistry __attribute__((swift_name("scopeRegistry")));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)close __attribute__((swift_name("close()")));
- (void)createEagerInstances __attribute__((swift_name("createEagerInstances()")));
- (KESPLKKoin_coreScope *)createScopeT:(id<KESPLKKoin_coreKoinScopeComponent>)t __attribute__((swift_name("createScope(t:)")));
- (KESPLKKoin_coreScope *)createScopeScopeId:(NSString *)scopeId __attribute__((swift_name("createScope(scopeId:)")));
- (KESPLKKoin_coreScope *)createScopeScopeId:(NSString *)scopeId source:(id _Nullable)source scopeArchetype:(KESPLKKoin_coreTypeQualifier * _Nullable)scopeArchetype __attribute__((swift_name("createScope(scopeId:source:scopeArchetype:)")));
- (KESPLKKoin_coreScope *)createScopeScopeId:(NSString *)scopeId qualifier:(id<KESPLKKoin_coreQualifier>)qualifier source:(id _Nullable)source scopeArchetype:(KESPLKKoin_coreTypeQualifier * _Nullable)scopeArchetype __attribute__((swift_name("createScope(scopeId:qualifier:source:scopeArchetype:)")));
- (void)declareInstance:(id _Nullable)instance qualifier:(id<KESPLKKoin_coreQualifier> _Nullable)qualifier secondaryTypes:(NSArray<id<KESPLKKotlinKClass>> *)secondaryTypes allowOverride:(BOOL)allowOverride __attribute__((swift_name("declare(instance:qualifier:secondaryTypes:allowOverride:)")));
- (void)deletePropertyKey:(NSString *)key __attribute__((swift_name("deleteProperty(key:)")));
- (void)deleteScopeScopeId:(NSString *)scopeId __attribute__((swift_name("deleteScope(scopeId:)")));
- (id)getQualifier:(id<KESPLKKoin_coreQualifier> _Nullable)qualifier parameters:(KESPLKKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(qualifier:parameters:)")));
- (id _Nullable)getClazz:(id<KESPLKKotlinKClass>)clazz qualifier:(id<KESPLKKoin_coreQualifier> _Nullable)qualifier parameters:(KESPLKKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(clazz:qualifier:parameters:)")));
- (NSArray<id> *)getAll __attribute__((swift_name("getAll()")));
- (KESPLKKoin_coreScope *)getOrCreateScopeScopeId:(NSString *)scopeId __attribute__((swift_name("getOrCreateScope(scopeId:)")));
- (KESPLKKoin_coreScope *)getOrCreateScopeScopeId:(NSString *)scopeId qualifier:(id<KESPLKKoin_coreQualifier>)qualifier source:(id _Nullable)source __attribute__((swift_name("getOrCreateScope(scopeId:qualifier:source:)")));
- (id _Nullable)getOrNullQualifier:(id<KESPLKKoin_coreQualifier> _Nullable)qualifier parameters:(KESPLKKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(qualifier:parameters:)")));
- (id _Nullable)getOrNullClazz:(id<KESPLKKotlinKClass>)clazz qualifier:(id<KESPLKKoin_coreQualifier> _Nullable)qualifier parameters:(KESPLKKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(clazz:qualifier:parameters:)")));
- (id _Nullable)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
- (id)getPropertyKey:(NSString *)key defaultValue:(id)defaultValue __attribute__((swift_name("getProperty(key:defaultValue:)")));
- (KESPLKKoin_coreScope *)getScopeScopeId:(NSString *)scopeId __attribute__((swift_name("getScope(scopeId:)")));
- (KESPLKKoin_coreScope * _Nullable)getScopeOrNullScopeId:(NSString *)scopeId __attribute__((swift_name("getScopeOrNull(scopeId:)")));
- (id<KESPLKKotlinLazy>)injectQualifier:(id<KESPLKKoin_coreQualifier> _Nullable)qualifier mode:(KESPLKKotlinLazyThreadSafetyMode *)mode parameters:(KESPLKKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("inject(qualifier:mode:parameters:)")));
- (id<KESPLKKotlinLazy>)injectOrNullQualifier:(id<KESPLKKoin_coreQualifier> _Nullable)qualifier mode:(KESPLKKotlinLazyThreadSafetyMode *)mode parameters:(KESPLKKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("injectOrNull(qualifier:mode:parameters:)")));
- (void)loadModulesModules:(NSArray<KESPLKKoin_coreModule *> *)modules allowOverride:(BOOL)allowOverride createEagerInstances:(BOOL)createEagerInstances __attribute__((swift_name("loadModules(modules:allowOverride:createEagerInstances:)")));
- (void)setPropertyKey:(NSString *)key value:(id)value __attribute__((swift_name("setProperty(key:value:)")));
- (void)setupLoggerLogger:(KESPLKKoin_coreLogger *)logger __attribute__((swift_name("setupLogger(logger:)")));
- (void)unloadModulesModules:(NSArray<KESPLKKoin_coreModule *> *)modules __attribute__((swift_name("unloadModules(modules:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKoinDefinition")))
@interface KESPLKKoin_coreKoinDefinition<R> : KESPLKBase
@property (readonly) KESPLKKoin_coreInstanceFactory<R> *factory __attribute__((swift_name("factory")));
@property (readonly) KESPLKKoin_coreModule *module __attribute__((swift_name("module")));
- (instancetype)initWithModule:(KESPLKKoin_coreModule *)module factory:(KESPLKKoin_coreInstanceFactory<R> *)factory __attribute__((swift_name("init(module:factory:)"))) __attribute__((objc_designated_initializer));
- (KESPLKKoin_coreKoinDefinition<R> *)doCopyModule:(KESPLKKoin_coreModule *)module factory:(KESPLKKoin_coreInstanceFactory<R> *)factory __attribute__((swift_name("doCopy(module:factory:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Koin_coreQualifier")))
@protocol KESPLKKoin_coreQualifier
@required
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("Koin_coreLockable")))
@interface KESPLKKoin_coreLockable : KESPLKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScope")))
@interface KESPLKKoin_coreScope : KESPLKKoin_coreLockable
@property (readonly) BOOL closed __attribute__((swift_name("closed")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) BOOL isRoot __attribute__((swift_name("isRoot")));
@property (readonly) KESPLKKoin_coreLogger *logger __attribute__((swift_name("logger")));
@property (readonly) KESPLKKoin_coreTypeQualifier * _Nullable scopeArchetype __attribute__((swift_name("scopeArchetype")));
@property (readonly) id<KESPLKKoin_coreQualifier> scopeQualifier __attribute__((swift_name("scopeQualifier")));
@property id _Nullable sourceValue __attribute__((swift_name("sourceValue")));
- (instancetype)initWithScopeQualifier:(id<KESPLKKoin_coreQualifier>)scopeQualifier id:(NSString *)id isRoot:(BOOL)isRoot scopeArchetype:(KESPLKKoin_coreTypeQualifier * _Nullable)scopeArchetype _koin:(KESPLKKoin_coreKoin *)_koin __attribute__((swift_name("init(scopeQualifier:id:isRoot:scopeArchetype:_koin:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)close __attribute__((swift_name("close()")));
- (void)declareInstance:(id _Nullable)instance qualifier:(id<KESPLKKoin_coreQualifier> _Nullable)qualifier secondaryTypes:(NSArray<id<KESPLKKotlinKClass>> *)secondaryTypes allowOverride:(BOOL)allowOverride holdInstance:(BOOL)holdInstance __attribute__((swift_name("declare(instance:qualifier:secondaryTypes:allowOverride:holdInstance:)")));
- (id)getQualifier:(id<KESPLKKoin_coreQualifier> _Nullable)qualifier parameters:(KESPLKKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(qualifier:parameters:)")));
- (id _Nullable)getClazz:(id<KESPLKKotlinKClass>)clazz qualifier:(id<KESPLKKoin_coreQualifier> _Nullable)qualifier parameters:(KESPLKKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(clazz:qualifier:parameters:)")));
- (NSArray<id> *)getAll __attribute__((swift_name("getAll()")));
- (NSArray<id> *)getAllClazz:(id<KESPLKKotlinKClass>)clazz __attribute__((swift_name("getAll(clazz:)")));
- (KESPLKKoin_coreKoin *)getKoin __attribute__((swift_name("getKoin()")));
- (NSArray<NSString *> *)getLinkedScopeIds __attribute__((swift_name("getLinkedScopeIds()")));
- (id _Nullable)getOrNullQualifier:(id<KESPLKKoin_coreQualifier> _Nullable)qualifier parameters:(KESPLKKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(qualifier:parameters:)")));
- (id _Nullable)getOrNullClazz:(id<KESPLKKotlinKClass>)clazz qualifier:(id<KESPLKKoin_coreQualifier> _Nullable)qualifier parameters:(KESPLKKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(clazz:qualifier:parameters:)")));
- (id)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
- (id)getPropertyKey:(NSString *)key defaultValue:(id)defaultValue __attribute__((swift_name("getProperty(key:defaultValue:)")));
- (id _Nullable)getPropertyOrNullKey:(NSString *)key __attribute__((swift_name("getPropertyOrNull(key:)")));
- (KESPLKKoin_coreScope *)getScopeScopeID:(NSString *)scopeID __attribute__((swift_name("getScope(scopeID:)")));
- (id _Nullable)getSource __attribute__((swift_name("getSource()")));
- (id _Nullable)getWithParametersClazz:(id<KESPLKKotlinKClass>)clazz qualifier:(id<KESPLKKoin_coreQualifier> _Nullable)qualifier parameters:(KESPLKKoin_coreParametersHolder * _Nullable)parameters __attribute__((swift_name("getWithParameters(clazz:qualifier:parameters:)")));
- (id<KESPLKKotlinLazy>)injectQualifier:(id<KESPLKKoin_coreQualifier> _Nullable)qualifier mode:(KESPLKKotlinLazyThreadSafetyMode *)mode parameters:(KESPLKKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("inject(qualifier:mode:parameters:)")));
- (id<KESPLKKotlinLazy>)injectOrNullQualifier:(id<KESPLKKoin_coreQualifier> _Nullable)qualifier mode:(KESPLKKotlinLazyThreadSafetyMode *)mode parameters:(KESPLKKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("injectOrNull(qualifier:mode:parameters:)")));
- (BOOL)isNotClosed __attribute__((swift_name("isNotClosed()")));
- (void)linkToScopes:(KESPLKKotlinArray<KESPLKKoin_coreScope *> *)scopes __attribute__((swift_name("linkTo(scopes:)")));
- (void)registerCallbackCallback:(id<KESPLKKoin_coreScopeCallback>)callback __attribute__((swift_name("registerCallback(callback:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (void)unlinkScopes:(KESPLKKotlinArray<KESPLKKoin_coreScope *> *)scopes __attribute__((swift_name("unlink(scopes:)")));
@end

__attribute__((swift_name("Koin_coreParametersHolder")))
@interface KESPLKKoin_coreParametersHolder : KESPLKBase
@property int32_t index __attribute__((swift_name("index")));
@property (readonly) KESPLKBoolean * _Nullable useIndexedValues __attribute__((swift_name("useIndexedValues")));
@property (readonly) NSArray<id> *values __attribute__((swift_name("values")));
- (instancetype)initWith_values:(NSMutableArray<id> *)_values useIndexedValues:(KESPLKBoolean * _Nullable)useIndexedValues __attribute__((swift_name("init(_values:useIndexedValues:)"))) __attribute__((objc_designated_initializer));
- (KESPLKKoin_coreParametersHolder *)addValue:(id)value __attribute__((swift_name("add(value:)")));
- (id _Nullable)component1 __attribute__((swift_name("component1()")));
- (id _Nullable)component2 __attribute__((swift_name("component2()")));
- (id _Nullable)component3 __attribute__((swift_name("component3()")));
- (id _Nullable)component4 __attribute__((swift_name("component4()")));
- (id _Nullable)component5 __attribute__((swift_name("component5()")));
- (id _Nullable)elementAtI:(int32_t)i clazz:(id<KESPLKKotlinKClass>)clazz __attribute__((swift_name("elementAt(i:clazz:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (id)get __attribute__((swift_name("get()")));
- (id _Nullable)getI:(int32_t)i __attribute__((swift_name("get(i:)")));
- (id _Nullable)getOrNull __attribute__((swift_name("getOrNull()")));
- (id _Nullable)getOrNullClazz:(id<KESPLKKotlinKClass>)clazz __attribute__((swift_name("getOrNull(clazz:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (KESPLKKoin_coreParametersHolder *)insertIndex:(int32_t)index value:(id)value __attribute__((swift_name("insert(index:value:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (BOOL)isNotEmpty __attribute__((swift_name("isNotEmpty()")));
- (void)setI:(int32_t)i t:(id _Nullable)t __attribute__((swift_name("set(i:t:)")));
- (int32_t)size __attribute__((swift_name("size()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Koin_coreInstanceFactory")))
@interface KESPLKKoin_coreInstanceFactory<T> : KESPLKKoin_coreLockable
@property (class, readonly, getter=companion) KESPLKKoin_coreInstanceFactoryCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) KESPLKKoin_coreBeanDefinition<T> *beanDefinition __attribute__((swift_name("beanDefinition")));
- (instancetype)initWithBeanDefinition:(KESPLKKoin_coreBeanDefinition<T> *)beanDefinition __attribute__((swift_name("init(beanDefinition:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (T _Nullable)createContext:(KESPLKKoin_coreResolutionContext *)context __attribute__((swift_name("create(context:)")));
- (void)dropScope:(KESPLKKoin_coreScope * _Nullable)scope __attribute__((swift_name("drop(scope:)")));
- (void)dropAll __attribute__((swift_name("dropAll()")));
- (T _Nullable)getContext:(KESPLKKoin_coreResolutionContext *)context __attribute__((swift_name("get(context:)")));
- (BOOL)isCreatedContext:(KESPLKKoin_coreResolutionContext * _Nullable)context __attribute__((swift_name("isCreated(context:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreSingleInstanceFactory")))
@interface KESPLKKoin_coreSingleInstanceFactory<T> : KESPLKKoin_coreInstanceFactory<T>
- (instancetype)initWithBeanDefinition:(KESPLKKoin_coreBeanDefinition<T> *)beanDefinition __attribute__((swift_name("init(beanDefinition:)"))) __attribute__((objc_designated_initializer));
- (T _Nullable)createContext:(KESPLKKoin_coreResolutionContext *)context __attribute__((swift_name("create(context:)")));
- (void)dropScope:(KESPLKKoin_coreScope * _Nullable)scope __attribute__((swift_name("drop(scope:)")));
- (void)dropAll __attribute__((swift_name("dropAll()")));
- (T _Nullable)getContext:(KESPLKKoin_coreResolutionContext *)context __attribute__((swift_name("get(context:)")));
- (BOOL)isCreatedContext:(KESPLKKoin_coreResolutionContext * _Nullable)context __attribute__((swift_name("isCreated(context:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScopeDSL")))
@interface KESPLKKoin_coreScopeDSL : KESPLKBase
@property (readonly) KESPLKKoin_coreModule *module __attribute__((swift_name("module")));
@property (readonly) id<KESPLKKoin_coreQualifier> scopeQualifier __attribute__((swift_name("scopeQualifier")));
- (instancetype)initWithScopeQualifier:(id<KESPLKKoin_coreQualifier>)scopeQualifier module:(KESPLKKoin_coreModule *)module __attribute__((swift_name("init(scopeQualifier:module:)"))) __attribute__((objc_designated_initializer));
- (KESPLKKoin_coreKoinDefinition<id> *)factoryQualifier:(id<KESPLKKoin_coreQualifier> _Nullable)qualifier definition:(id _Nullable (^)(KESPLKKoin_coreScope *, KESPLKKoin_coreParametersHolder *))definition __attribute__((swift_name("factory(qualifier:definition:)")));
- (KESPLKKoin_coreKoinDefinition<id> *)scopedQualifier:(id<KESPLKKoin_coreQualifier> _Nullable)qualifier definition:(id _Nullable (^)(KESPLKKoin_coreScope *, KESPLKKoin_coreParametersHolder *))definition __attribute__((swift_name("scoped(qualifier:definition:)")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextElement")))
@interface KESPLKKotlinAbstractCoroutineContextElement : KESPLKBase <KESPLKKotlinCoroutineContextElement>
@property (readonly) id<KESPLKKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
- (instancetype)initWithKey:(id<KESPLKKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuationInterceptor")))
@protocol KESPLKKotlinContinuationInterceptor <KESPLKKotlinCoroutineContextElement>
@required
- (id<KESPLKKotlinContinuation>)interceptContinuationContinuation:(id<KESPLKKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (void)releaseInterceptedContinuationContinuation:(id<KESPLKKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher")))
@interface KESPLKKotlinx_coroutines_coreCoroutineDispatcher : KESPLKKotlinAbstractCoroutineContextElement <KESPLKKotlinContinuationInterceptor>
@property (class, readonly, getter=companion) KESPLKKotlinx_coroutines_coreCoroutineDispatcherKey *companion __attribute__((swift_name("companion")));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(id<KESPLKKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (void)dispatchContext:(id<KESPLKKotlinCoroutineContext>)context block:(id<KESPLKKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (void)dispatchYieldContext:(id<KESPLKKotlinCoroutineContext>)context block:(id<KESPLKKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatchYield(context:block:)")));
- (id<KESPLKKotlinContinuation>)interceptContinuationContinuation:(id<KESPLKKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (BOOL)isDispatchNeededContext:(id<KESPLKKotlinCoroutineContext>)context __attribute__((swift_name("isDispatchNeeded(context:)")));
- (KESPLKKotlinx_coroutines_coreCoroutineDispatcher *)limitedParallelismParallelism:(int32_t)parallelism name:(NSString * _Nullable)name __attribute__((swift_name("limitedParallelism(parallelism:name:)")));
- (KESPLKKotlinx_coroutines_coreCoroutineDispatcher *)plusOther_:(KESPLKKotlinx_coroutines_coreCoroutineDispatcher *)other __attribute__((swift_name("plus(other_:)"))) __attribute__((unavailable("Operator '+' on two CoroutineDispatcher objects is meaningless. CoroutineDispatcher is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The dispatcher to the right of `+` just replaces the dispatcher to the left.")));
- (void)releaseInterceptedContinuationContinuation:(id<KESPLKKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface KESPLKKotlinUnit : KESPLKBase
@property (class, readonly, getter=shared) KESPLKKotlinUnit *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause")))
@protocol KESPLKKotlinx_coroutines_coreSelectClause
@required
@property (readonly) id clauseObject __attribute__((swift_name("clauseObject")));
@property (readonly) KESPLKKotlinUnit *(^(^ _Nullable onCancellationConstructor)(id<KESPLKKotlinx_coroutines_coreSelectInstance>, id _Nullable, id _Nullable))(KESPLKKotlinThrowable *, id _Nullable, id<KESPLKKotlinCoroutineContext>) __attribute__((swift_name("onCancellationConstructor")));
@property (readonly) id _Nullable (^processResFunc)(id, id _Nullable, id _Nullable) __attribute__((swift_name("processResFunc")));
@property (readonly) void (^regFunc)(id, id<KESPLKKotlinx_coroutines_coreSelectInstance>, id _Nullable) __attribute__((swift_name("regFunc")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause2")))
@protocol KESPLKKotlinx_coroutines_coreSelectClause2 <KESPLKKotlinx_coroutines_coreSelectClause>
@required
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface KESPLKKotlinx_serialization_coreSerialKind : KESPLKBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_corePolymorphicKind")))
@interface KESPLKKotlinx_serialization_corePolymorphicKind : KESPLKKotlinx_serialization_coreSerialKind
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_corePolymorphicKind.OPEN")))
@interface KESPLKKotlinx_serialization_corePolymorphicKindOPEN : KESPLKKotlinx_serialization_corePolymorphicKind
@property (class, readonly, getter=shared) KESPLKKotlinx_serialization_corePolymorphicKindOPEN *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)oPEN __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_corePolymorphicKind.SEALED")))
@interface KESPLKKotlinx_serialization_corePolymorphicKindSEALED : KESPLKKotlinx_serialization_corePolymorphicKind
@property (class, readonly, getter=shared) KESPLKKotlinx_serialization_corePolymorphicKindSEALED *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sEALED __attribute__((swift_name("init()")));
@end

__attribute__((swift_name("Kotlinx_serialization_corePrimitiveKind")))
@interface KESPLKKotlinx_serialization_corePrimitiveKind : KESPLKKotlinx_serialization_coreSerialKind
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_corePrimitiveKind.BOOLEAN")))
@interface KESPLKKotlinx_serialization_corePrimitiveKindBOOLEAN : KESPLKKotlinx_serialization_corePrimitiveKind
@property (class, readonly, getter=shared) KESPLKKotlinx_serialization_corePrimitiveKindBOOLEAN *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)bOOLEAN __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_corePrimitiveKind.BYTE")))
@interface KESPLKKotlinx_serialization_corePrimitiveKindBYTE : KESPLKKotlinx_serialization_corePrimitiveKind
@property (class, readonly, getter=shared) KESPLKKotlinx_serialization_corePrimitiveKindBYTE *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)bYTE __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_corePrimitiveKind.CHAR")))
@interface KESPLKKotlinx_serialization_corePrimitiveKindCHAR : KESPLKKotlinx_serialization_corePrimitiveKind
@property (class, readonly, getter=shared) KESPLKKotlinx_serialization_corePrimitiveKindCHAR *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)cHAR __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_corePrimitiveKind.DOUBLE")))
@interface KESPLKKotlinx_serialization_corePrimitiveKindDOUBLE : KESPLKKotlinx_serialization_corePrimitiveKind
@property (class, readonly, getter=shared) KESPLKKotlinx_serialization_corePrimitiveKindDOUBLE *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)dOUBLE __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_corePrimitiveKind.FLOAT")))
@interface KESPLKKotlinx_serialization_corePrimitiveKindFLOAT : KESPLKKotlinx_serialization_corePrimitiveKind
@property (class, readonly, getter=shared) KESPLKKotlinx_serialization_corePrimitiveKindFLOAT *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)fLOAT __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_corePrimitiveKind.INT")))
@interface KESPLKKotlinx_serialization_corePrimitiveKindINT : KESPLKKotlinx_serialization_corePrimitiveKind
@property (class, readonly, getter=shared) KESPLKKotlinx_serialization_corePrimitiveKindINT *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)iNT __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_corePrimitiveKind.LONG")))
@interface KESPLKKotlinx_serialization_corePrimitiveKindLONG : KESPLKKotlinx_serialization_corePrimitiveKind
@property (class, readonly, getter=shared) KESPLKKotlinx_serialization_corePrimitiveKindLONG *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)lONG __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_corePrimitiveKind.SHORT")))
@interface KESPLKKotlinx_serialization_corePrimitiveKindSHORT : KESPLKKotlinx_serialization_corePrimitiveKind
@property (class, readonly, getter=shared) KESPLKKotlinx_serialization_corePrimitiveKindSHORT *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sHORT __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_corePrimitiveKind.STRING")))
@interface KESPLKKotlinx_serialization_corePrimitiveKindSTRING : KESPLKKotlinx_serialization_corePrimitiveKind
@property (class, readonly, getter=shared) KESPLKKotlinx_serialization_corePrimitiveKindSTRING *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sTRING __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind.CONTEXTUAL")))
@interface KESPLKKotlinx_serialization_coreSerialKindCONTEXTUAL : KESPLKKotlinx_serialization_coreSerialKind
@property (class, readonly, getter=shared) KESPLKKotlinx_serialization_coreSerialKindCONTEXTUAL *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)cONTEXTUAL __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind.ENUM")))
@interface KESPLKKotlinx_serialization_coreSerialKindENUM : KESPLKKotlinx_serialization_coreSerialKind
@property (class, readonly, getter=shared) KESPLKKotlinx_serialization_coreSerialKindENUM *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)eNUM __attribute__((swift_name("init()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreStructureKind")))
@interface KESPLKKotlinx_serialization_coreStructureKind : KESPLKKotlinx_serialization_coreSerialKind
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_coreStructureKind.CLASS")))
@interface KESPLKKotlinx_serialization_coreStructureKindCLASS : KESPLKKotlinx_serialization_coreStructureKind
@property (class, readonly, getter=shared) KESPLKKotlinx_serialization_coreStructureKindCLASS *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)cLASS __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_coreStructureKind.LIST")))
@interface KESPLKKotlinx_serialization_coreStructureKindLIST : KESPLKKotlinx_serialization_coreStructureKind
@property (class, readonly, getter=shared) KESPLKKotlinx_serialization_coreStructureKindLIST *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)lIST __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_coreStructureKind.MAP")))
@interface KESPLKKotlinx_serialization_coreStructureKindMAP : KESPLKKotlinx_serialization_coreStructureKind
@property (class, readonly, getter=shared) KESPLKKotlinx_serialization_coreStructureKindMAP *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)mAP __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_coreStructureKind.OBJECT")))
@interface KESPLKKotlinx_serialization_coreStructureKindOBJECT : KESPLKKotlinx_serialization_coreStructureKind
@property (class, readonly, getter=shared) KESPLKKotlinx_serialization_coreStructureKindOBJECT *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)oBJECT __attribute__((swift_name("init()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreDisposableHandle")))
@protocol KESPLKKotlinx_coroutines_coreDisposableHandle
@required
- (void)dispose __attribute__((swift_name("dispose()")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreChildHandle")))
@protocol KESPLKKotlinx_coroutines_coreChildHandle <KESPLKKotlinx_coroutines_coreDisposableHandle>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (BOOL)childCancelledCause:(KESPLKKotlinThrowable *)cause __attribute__((swift_name("childCancelled(cause:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
@property (readonly) id<KESPLKKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreChildJob")))
@protocol KESPLKKotlinx_coroutines_coreChildJob <KESPLKKotlinx_coroutines_coreJob>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (void)parentCancelledParentJob:(id<KESPLKKotlinx_coroutines_coreParentJob>)parentJob __attribute__((swift_name("parentCancelled(parentJob:)")));
@end

__attribute__((swift_name("KotlinSequence")))
@protocol KESPLKKotlinSequence
@required
- (id<KESPLKKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause0")))
@protocol KESPLKKotlinx_coroutines_coreSelectClause0 <KESPLKKotlinx_coroutines_coreSelectClause>
@required
@end

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol KESPLKKotlinCoroutineContextKey
@required
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause1")))
@protocol KESPLKKotlinx_coroutines_coreSelectClause1 <KESPLKKotlinx_coroutines_coreSelectClause>
@required
@end

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol KESPLKKotlinx_serialization_coreEncoder
@required
- (id<KESPLKKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<KESPLKKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<KESPLKKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<KESPLKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<KESPLKKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<KESPLKKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<KESPLKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<KESPLKKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<KESPLKKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) KESPLKKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol KESPLKKotlinx_serialization_coreSerialDescriptor
@required
- (NSArray<id<KESPLKKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<KESPLKKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) NSArray<id<KESPLKKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) KESPLKKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol KESPLKKotlinx_serialization_coreDecoder
@required
- (id<KESPLKKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<KESPLKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<KESPLKKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<KESPLKKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<KESPLKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (KESPLKKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<KESPLKKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<KESPLKKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) KESPLKKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_io_coreSource")))
@protocol KESPLKKotlinx_io_coreSource <KESPLKKotlinx_io_coreRawSource>
@required
- (BOOL)exhausted __attribute__((swift_name("exhausted()")));
- (id<KESPLKKotlinx_io_coreSource>)peek __attribute__((swift_name("peek()")));
- (int32_t)readAtMostToSink:(KESPLKKotlinByteArray *)sink startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("readAtMostTo(sink:startIndex:endIndex:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (int32_t)readInt __attribute__((swift_name("readInt()")));
- (int64_t)readLong __attribute__((swift_name("readLong()")));
- (int16_t)readShort __attribute__((swift_name("readShort()")));
- (void)readToSink:(id<KESPLKKotlinx_io_coreRawSink>)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readTo(sink:byteCount:)")));
- (BOOL)requestByteCount:(int64_t)byteCount __attribute__((swift_name("request(byteCount:)")));
- (void)requireByteCount:(int64_t)byteCount __attribute__((swift_name("require(byteCount:)")));
- (void)skipByteCount:(int64_t)byteCount __attribute__((swift_name("skip(byteCount:)")));
- (int64_t)transferToSink:(id<KESPLKKotlinx_io_coreRawSink>)sink __attribute__((swift_name("transferTo(sink:)")));

/**
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
@property (readonly) KESPLKKotlinx_io_coreBuffer *buffer __attribute__((swift_name("buffer")));
@end

__attribute__((swift_name("Kotlinx_io_coreRawSink")))
@protocol KESPLKKotlinx_io_coreRawSink <KESPLKKotlinAutoCloseable>
@required
- (void)flush __attribute__((swift_name("flush()")));
- (void)writeSource:(KESPLKKotlinx_io_coreBuffer *)source byteCount_:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount_:)")));
@end

__attribute__((swift_name("Kotlinx_io_coreSink")))
@protocol KESPLKKotlinx_io_coreSink <KESPLKKotlinx_io_coreRawSink>
@required
- (void)emit __attribute__((swift_name("emit()")));

/**
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
- (void)hintEmit __attribute__((swift_name("hintEmit()")));
- (int64_t)transferFromSource:(id<KESPLKKotlinx_io_coreRawSource>)source __attribute__((swift_name("transferFrom(source:)")));
- (void)writeSource:(id<KESPLKKotlinx_io_coreRawSource>)source byteCount:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount:)")));
- (void)writeSource:(KESPLKKotlinByteArray *)source startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("write(source:startIndex:endIndex:)")));
- (void)writeByteByte:(int8_t)byte __attribute__((swift_name("writeByte(byte:)")));
- (void)writeIntInt:(int32_t)int_ __attribute__((swift_name("writeInt(int:)")));
- (void)writeLongLong:(int64_t)long_ __attribute__((swift_name("writeLong(long:)")));
- (void)writeShortShort:(int16_t)short_ __attribute__((swift_name("writeShort(short:)")));

/**
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
@property (readonly) KESPLKKotlinx_io_coreBuffer *buffer __attribute__((swift_name("buffer")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_io_coreBuffer")))
@interface KESPLKKotlinx_io_coreBuffer : KESPLKBase <KESPLKKotlinx_io_coreSource, KESPLKKotlinx_io_coreSink>
@property (readonly) KESPLKKotlinx_io_coreBuffer *buffer __attribute__((swift_name("buffer")));
@property (readonly) int64_t size __attribute__((swift_name("size")));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)clear __attribute__((swift_name("clear()")));
- (void)close __attribute__((swift_name("close()")));
- (KESPLKKotlinx_io_coreBuffer *)doCopy __attribute__((swift_name("doCopy()")));
- (void)doCopyToOut:(KESPLKKotlinx_io_coreBuffer *)out startIndex:(int64_t)startIndex endIndex:(int64_t)endIndex __attribute__((swift_name("doCopyTo(out:startIndex:endIndex:)")));
- (void)emit __attribute__((swift_name("emit()")));
- (BOOL)exhausted __attribute__((swift_name("exhausted()")));
- (void)flush __attribute__((swift_name("flush()")));
- (int8_t)getPosition:(int64_t)position __attribute__((swift_name("get(position:)")));

/**
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
- (void)hintEmit __attribute__((swift_name("hintEmit()")));
- (id<KESPLKKotlinx_io_coreSource>)peek __attribute__((swift_name("peek()")));
- (int64_t)readAtMostToSink:(KESPLKKotlinx_io_coreBuffer *)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readAtMostTo(sink:byteCount:)")));
- (int32_t)readAtMostToSink:(KESPLKKotlinByteArray *)sink startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("readAtMostTo(sink:startIndex:endIndex:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (int32_t)readInt __attribute__((swift_name("readInt()")));
- (int64_t)readLong __attribute__((swift_name("readLong()")));
- (int16_t)readShort __attribute__((swift_name("readShort()")));
- (void)readToSink:(id<KESPLKKotlinx_io_coreRawSink>)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readTo(sink:byteCount:)")));
- (BOOL)requestByteCount:(int64_t)byteCount __attribute__((swift_name("request(byteCount:)")));
- (void)requireByteCount:(int64_t)byteCount __attribute__((swift_name("require(byteCount:)")));
- (void)skipByteCount:(int64_t)byteCount __attribute__((swift_name("skip(byteCount:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (int64_t)transferFromSource:(id<KESPLKKotlinx_io_coreRawSource>)source __attribute__((swift_name("transferFrom(source:)")));
- (int64_t)transferToSink:(id<KESPLKKotlinx_io_coreRawSink>)sink __attribute__((swift_name("transferTo(sink:)")));
- (void)writeSource:(KESPLKKotlinx_io_coreBuffer *)source byteCount_:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount_:)")));
- (void)writeSource:(id<KESPLKKotlinx_io_coreRawSource>)source byteCount:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount:)")));
- (void)writeSource:(KESPLKKotlinByteArray *)source startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("write(source:startIndex:endIndex:)")));
- (void)writeByteByte:(int8_t)byte __attribute__((swift_name("writeByte(byte:)")));
- (void)writeIntInt:(int32_t)int_ __attribute__((swift_name("writeInt(int:)")));
- (void)writeLongLong:(int64_t)long_ __attribute__((swift_name("writeLong(long:)")));
- (void)writeShortShort:(int16_t)short_ __attribute__((swift_name("writeShort(short:)")));

/**
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinInstant.Companion")))
@interface KESPLKKotlinInstantCompanion : KESPLKBase
@property (class, readonly, getter=shared) KESPLKKotlinInstantCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) KESPLKKotlinInstant *DISTANT_FUTURE __attribute__((swift_name("DISTANT_FUTURE")));
@property (readonly) KESPLKKotlinInstant *DISTANT_PAST __attribute__((swift_name("DISTANT_PAST")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (KESPLKKotlinInstant *)fromEpochMillisecondsEpochMilliseconds:(int64_t)epochMilliseconds __attribute__((swift_name("fromEpochMilliseconds(epochMilliseconds:)")));
- (KESPLKKotlinInstant *)fromEpochSecondsEpochSeconds:(int64_t)epochSeconds nanosecondAdjustment:(int32_t)nanosecondAdjustment __attribute__((swift_name("fromEpochSeconds(epochSeconds:nanosecondAdjustment:)")));
- (KESPLKKotlinInstant *)fromEpochSecondsEpochSeconds:(int64_t)epochSeconds nanosecondAdjustment_:(int64_t)nanosecondAdjustment __attribute__((swift_name("fromEpochSeconds(epochSeconds:nanosecondAdjustment_:)")));
- (KESPLKKotlinInstant *)now __attribute__((swift_name("now()"))) __attribute__((unavailable("Use Clock.System.now() instead")));
- (KESPLKKotlinInstant *)parseInput:(id)input __attribute__((swift_name("parse(input:)")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="2.2")
*/
- (KESPLKKotlinInstant * _Nullable)parseOrNullInput:(id)input __attribute__((swift_name("parseOrNull(input:)")));
@end

__attribute__((swift_name("KotlinComparator")))
@protocol KESPLKKotlinComparator
@required
- (int32_t)compareA:(id _Nullable)a b:(id _Nullable)b __attribute__((swift_name("compare(a:b:)")));
@end

__attribute__((swift_name("Koin_coreKoinComponent")))
@protocol KESPLKKoin_coreKoinComponent
@required
- (KESPLKKoin_coreKoin *)getKoin __attribute__((swift_name("getKoin()")));
@end

__attribute__((swift_name("Koin_coreKoinScopeComponent")))
@protocol KESPLKKoin_coreKoinScopeComponent <KESPLKKoin_coreKoinComponent>
@required
@property (readonly) KESPLKKoin_coreScope *scope __attribute__((swift_name("scope")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreTypeQualifier")))
@interface KESPLKKoin_coreTypeQualifier : KESPLKBase <KESPLKKoin_coreQualifier>
@property (readonly) id<KESPLKKotlinKClass> type __attribute__((swift_name("type")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
- (instancetype)initWithType:(id<KESPLKKotlinKClass>)type __attribute__((swift_name("init(type:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol KESPLKKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol KESPLKKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol KESPLKKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol KESPLKKotlinKClass <KESPLKKotlinKDeclarationContainer, KESPLKKotlinKAnnotatedElement, KESPLKKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

__attribute__((swift_name("KotlinLazy")))
@protocol KESPLKKotlinLazy
@required
- (BOOL)isInitialized __attribute__((swift_name("isInitialized()")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinLazyThreadSafetyMode")))
@interface KESPLKKotlinLazyThreadSafetyMode : KESPLKKotlinEnum<KESPLKKotlinLazyThreadSafetyMode *>
@property (class, readonly) KESPLKKotlinLazyThreadSafetyMode *synchronized __attribute__((swift_name("synchronized")));
@property (class, readonly) KESPLKKotlinLazyThreadSafetyMode *publication __attribute__((swift_name("publication")));
@property (class, readonly) KESPLKKotlinLazyThreadSafetyMode *none __attribute__((swift_name("none")));
@property (class, readonly) NSArray<KESPLKKotlinLazyThreadSafetyMode *> *entries __attribute__((swift_name("entries")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (KESPLKKotlinArray<KESPLKKotlinLazyThreadSafetyMode *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreExtensionManager")))
@interface KESPLKKoin_coreExtensionManager : KESPLKBase
- (instancetype)initWith_koin:(KESPLKKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (id<KESPLKKoin_coreKoinExtension>)getExtensionId:(NSString *)id __attribute__((swift_name("getExtension(id:)")));
- (id<KESPLKKoin_coreKoinExtension> _Nullable)getExtensionOrNullId:(NSString *)id __attribute__((swift_name("getExtensionOrNull(id:)")));
- (void)registerExtensionId:(NSString *)id extension:(id<KESPLKKoin_coreKoinExtension>)extension __attribute__((swift_name("registerExtension(id:extension:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreInstanceRegistry")))
@interface KESPLKKoin_coreInstanceRegistry : KESPLKBase
@property (readonly) KESPLKKoin_coreKoin *_koin __attribute__((swift_name("_koin")));
@property (readonly) NSDictionary<NSString *, KESPLKKoin_coreInstanceFactory<id> *> *instances __attribute__((swift_name("instances")));
- (instancetype)initWith_koin:(KESPLKKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
- (void)saveMappingAllowOverride:(BOOL)allowOverride mapping:(NSString *)mapping factory:(KESPLKKoin_coreInstanceFactory<id> *)factory logWarning:(BOOL)logWarning __attribute__((swift_name("saveMapping(allowOverride:mapping:factory:logWarning:)")));
- (int32_t)size __attribute__((swift_name("size()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreOptionRegistry")))
@interface KESPLKKoin_coreOptionRegistry : KESPLKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_corePropertyRegistry")))
@interface KESPLKKoin_corePropertyRegistry : KESPLKBase
- (instancetype)initWith_koin:(KESPLKKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (void)deletePropertyKey:(NSString *)key __attribute__((swift_name("deleteProperty(key:)")));
- (id _Nullable)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
- (void)savePropertiesProperties:(NSDictionary<NSString *, id> *)properties __attribute__((swift_name("saveProperties(properties:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreCoreResolver")))
@interface KESPLKKoin_coreCoreResolver : KESPLKBase
- (instancetype)initWith_koin:(KESPLKKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
- (void)addResolutionExtensionResolutionExtension:(id<KESPLKKoin_coreResolutionExtension>)resolutionExtension __attribute__((swift_name("addResolutionExtension(resolutionExtension:)")));
- (id _Nullable)resolveFromContextScope:(KESPLKKoin_coreScope *)scope instanceContext:(KESPLKKoin_coreResolutionContext *)instanceContext __attribute__((swift_name("resolveFromContext(scope:instanceContext:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScopeRegistry")))
@interface KESPLKKoin_coreScopeRegistry : KESPLKBase
@property (class, readonly, getter=companion) KESPLKKoin_coreScopeRegistryCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) KESPLKKoin_coreScope *rootScope __attribute__((swift_name("rootScope")));
@property (readonly) NSSet<id<KESPLKKoin_coreQualifier>> *scopeDefinitions __attribute__((swift_name("scopeDefinitions")));
- (instancetype)initWith_koin:(KESPLKKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
- (void)loadScopesModules:(NSSet<KESPLKKoin_coreModule *> *)modules __attribute__((swift_name("loadScopes(modules:)")));
@end

__attribute__((swift_name("Koin_coreScopeCallback")))
@protocol KESPLKKoin_coreScopeCallback
@required
- (void)onScopeCloseScope:(KESPLKKoin_coreScope *)scope __attribute__((swift_name("onScopeClose(scope:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreBeanDefinition")))
@interface KESPLKKoin_coreBeanDefinition<T> : KESPLKBase
@property KESPLKKoin_coreCallbacks<T> *callbacks __attribute__((swift_name("callbacks")));
@property (readonly) T _Nullable (^definition)(KESPLKKoin_coreScope *, KESPLKKoin_coreParametersHolder *) __attribute__((swift_name("definition")));
@property (readonly) KESPLKKoin_coreKind *kind __attribute__((swift_name("kind")));
@property (readonly) id<KESPLKKotlinKClass> primaryType __attribute__((swift_name("primaryType")));
@property id<KESPLKKoin_coreQualifier> _Nullable qualifier __attribute__((swift_name("qualifier")));
@property (readonly) id<KESPLKKoin_coreQualifier> scopeQualifier __attribute__((swift_name("scopeQualifier")));
@property NSArray<id<KESPLKKotlinKClass>> *secondaryTypes __attribute__((swift_name("secondaryTypes")));
- (instancetype)initWithScopeQualifier:(id<KESPLKKoin_coreQualifier>)scopeQualifier primaryType:(id<KESPLKKotlinKClass>)primaryType qualifier:(id<KESPLKKoin_coreQualifier> _Nullable)qualifier definition:(T _Nullable (^)(KESPLKKoin_coreScope *, KESPLKKoin_coreParametersHolder *))definition kind:(KESPLKKoin_coreKind *)kind secondaryTypes:(NSArray<id<KESPLKKotlinKClass>> *)secondaryTypes __attribute__((swift_name("init(scopeQualifier:primaryType:qualifier:definition:kind:secondaryTypes:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (BOOL)hasTypeClazz:(id<KESPLKKotlinKClass>)clazz __attribute__((swift_name("hasType(clazz:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isClazz:(id<KESPLKKotlinKClass>)clazz qualifier:(id<KESPLKKoin_coreQualifier> _Nullable)qualifier scopeDefinition:(id<KESPLKKoin_coreQualifier>)scopeDefinition __attribute__((swift_name("is(clazz:qualifier:scopeDefinition:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreInstanceFactoryCompanion")))
@interface KESPLKKoin_coreInstanceFactoryCompanion : KESPLKBase
@property (class, readonly, getter=shared) KESPLKKoin_coreInstanceFactoryCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *ERROR_SEPARATOR __attribute__((swift_name("ERROR_SEPARATOR")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreResolutionContext")))
@interface KESPLKKoin_coreResolutionContext : KESPLKBase
@property (readonly) id<KESPLKKotlinKClass> clazz __attribute__((swift_name("clazz")));
@property (readonly) NSString *debugTag __attribute__((swift_name("debugTag")));
@property (readonly) KESPLKKoin_coreLogger *logger __attribute__((swift_name("logger")));
@property (readonly) KESPLKKoin_coreParametersHolder * _Nullable parameters __attribute__((swift_name("parameters")));
@property (readonly) id<KESPLKKoin_coreQualifier> _Nullable qualifier __attribute__((swift_name("qualifier")));
@property (readonly) KESPLKKoin_coreScope *scope __attribute__((swift_name("scope")));
@property KESPLKKoin_coreTypeQualifier * _Nullable scopeArchetype __attribute__((swift_name("scopeArchetype")));
- (instancetype)initWithLogger:(KESPLKKoin_coreLogger *)logger scope:(KESPLKKoin_coreScope *)scope clazz:(id<KESPLKKotlinKClass>)clazz qualifier:(id<KESPLKKoin_coreQualifier> _Nullable)qualifier parameters:(KESPLKKoin_coreParametersHolder * _Nullable)parameters __attribute__((swift_name("init(logger:scope:clazz:qualifier:parameters:)"))) __attribute__((objc_designated_initializer));
- (KESPLKKoin_coreResolutionContext *)doNewContextForScopeS:(KESPLKKoin_coreScope *)s __attribute__((swift_name("doNewContextForScope(s:)")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuation")))
@protocol KESPLKKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<KESPLKKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextKey")))
@interface KESPLKKotlinAbstractCoroutineContextKey<B, E> : KESPLKBase <KESPLKKotlinCoroutineContextKey>
- (instancetype)initWithBaseKey:(id<KESPLKKotlinCoroutineContextKey>)baseKey safeCast:(E _Nullable (^)(id<KESPLKKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher.Key")))
@interface KESPLKKotlinx_coroutines_coreCoroutineDispatcherKey : KESPLKKotlinAbstractCoroutineContextKey<id<KESPLKKotlinContinuationInterceptor>, KESPLKKotlinx_coroutines_coreCoroutineDispatcher *>
@property (class, readonly, getter=shared) KESPLKKotlinx_coroutines_coreCoroutineDispatcherKey *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithBaseKey:(id<KESPLKKotlinCoroutineContextKey>)baseKey safeCast:(id<KESPLKKotlinCoroutineContextElement> _Nullable (^)(id<KESPLKKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)key __attribute__((swift_name("init()")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreSelectInstance")))
@protocol KESPLKKotlinx_coroutines_coreSelectInstance
@required
- (void)disposeOnCompletionDisposableHandle:(id<KESPLKKotlinx_coroutines_coreDisposableHandle>)disposableHandle __attribute__((swift_name("disposeOnCompletion(disposableHandle:)")));
- (void)selectInRegistrationPhaseInternalResult:(id _Nullable)internalResult __attribute__((swift_name("selectInRegistrationPhase(internalResult:)")));
- (BOOL)trySelectClauseObject:(id)clauseObject result:(id _Nullable)result __attribute__((swift_name("trySelect(clauseObject:result:)")));
@property (readonly) id<KESPLKKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreParentJob")))
@protocol KESPLKKotlinx_coroutines_coreParentJob <KESPLKKotlinx_coroutines_coreJob>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (KESPLKKotlinCancellationException *)getChildJobCancellationCause __attribute__((swift_name("getChildJobCancellationCause()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol KESPLKKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<KESPLKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<KESPLKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<KESPLKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<KESPLKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<KESPLKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<KESPLKKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<KESPLKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<KESPLKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<KESPLKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<KESPLKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<KESPLKKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<KESPLKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<KESPLKKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<KESPLKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<KESPLKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<KESPLKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<KESPLKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) KESPLKKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface KESPLKKotlinx_serialization_coreSerializersModule : KESPLKBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<KESPLKKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<KESPLKKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<KESPLKKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<KESPLKKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<KESPLKKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<KESPLKKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<KESPLKKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<KESPLKKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol KESPLKKotlinAnnotation
@required
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol KESPLKKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<KESPLKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<KESPLKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<KESPLKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<KESPLKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<KESPLKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<KESPLKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<KESPLKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<KESPLKKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<KESPLKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<KESPLKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<KESPLKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<KESPLKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<KESPLKKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<KESPLKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<KESPLKKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<KESPLKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<KESPLKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<KESPLKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) KESPLKKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface KESPLKKotlinNothing : KESPLKBase
@end

__attribute__((swift_name("Koin_coreKoinExtension")))
@protocol KESPLKKoin_coreKoinExtension
@required
- (void)onClose __attribute__((swift_name("onClose()")));
- (void)onRegisterKoin:(KESPLKKoin_coreKoin *)koin __attribute__((swift_name("onRegister(koin:)")));
@end

__attribute__((swift_name("Koin_coreResolutionExtension")))
@protocol KESPLKKoin_coreResolutionExtension
@required
- (id _Nullable)resolveScope:(KESPLKKoin_coreScope *)scope instanceContext:(KESPLKKoin_coreResolutionContext *)instanceContext __attribute__((swift_name("resolve(scope:instanceContext:)")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScopeRegistry.Companion")))
@interface KESPLKKoin_coreScopeRegistryCompanion : KESPLKBase
@property (class, readonly, getter=shared) KESPLKKoin_coreScopeRegistryCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKind")))
@interface KESPLKKoin_coreKind : KESPLKKotlinEnum<KESPLKKoin_coreKind *>
@property (class, readonly) KESPLKKoin_coreKind *singleton __attribute__((swift_name("singleton")));
@property (class, readonly) KESPLKKoin_coreKind *factory __attribute__((swift_name("factory")));
@property (class, readonly) KESPLKKoin_coreKind *scoped __attribute__((swift_name("scoped")));
@property (class, readonly) NSArray<KESPLKKoin_coreKind *> *entries __attribute__((swift_name("entries")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (KESPLKKotlinArray<KESPLKKoin_coreKind *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreCallbacks")))
@interface KESPLKKoin_coreCallbacks<T> : KESPLKBase
@property (readonly) void (^ _Nullable onClose)(T _Nullable) __attribute__((swift_name("onClose")));
- (instancetype)initWithOnClose:(void (^ _Nullable)(T _Nullable))onClose __attribute__((swift_name("init(onClose:)"))) __attribute__((objc_designated_initializer));
- (KESPLKKoin_coreCallbacks<T> *)doCopyOnClose:(void (^ _Nullable)(T _Nullable))onClose __attribute__((swift_name("doCopy(onClose:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol KESPLKKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<KESPLKKotlinKClass>)kClass provider:(id<KESPLKKotlinx_serialization_coreKSerializer> (^)(NSArray<id<KESPLKKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<KESPLKKotlinKClass>)kClass serializer:(id<KESPLKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<KESPLKKotlinKClass>)baseClass actualClass:(id<KESPLKKotlinKClass>)actualClass actualSerializer:(id<KESPLKKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<KESPLKKotlinKClass>)baseClass defaultDeserializerProvider:(id<KESPLKKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: polymorphicDefaultDeserializer")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<KESPLKKotlinKClass>)baseClass defaultDeserializerProvider:(id<KESPLKKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<KESPLKKotlinKClass>)baseClass defaultSerializerProvider:(id<KESPLKKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
