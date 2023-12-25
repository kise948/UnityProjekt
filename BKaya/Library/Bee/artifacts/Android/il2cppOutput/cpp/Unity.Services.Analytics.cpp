#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtualFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InterfaceActionInvoker6
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB;
// System.Action`1<System.Int64>
struct Action_1_tBB5A52E9AEFBC4F0C8D94D39CAD16BCB6B8B5929;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2CA7720C7ADCCDECD3B02E45878B4478619D5347;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int32>
struct KeyCollection_tCC15D033281A6593E2488FAF5B205812A152AC03;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int32>
struct ValueCollection_tCE6BD704B9571C131E2D8C8CED569DDEC4AE042B;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Int32>[]
struct EntryU5BU5D_tEA0133B78B9FF7045128C508FA50247E525A94D6;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// Unity.Services.Analytics.AnalyticsContainer
struct AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1;
// Unity.Services.Analytics.Internal.AnalyticsForgetter
struct AnalyticsForgetter_tA1B9D1F48FB306C80BE60C9858646BC1368948C0;
// Unity.Services.Analytics.AnalyticsServiceInstance
struct AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62;
// Unity.Services.Analytics.AnalyticsServiceSystemCalls
struct AnalyticsServiceSystemCalls_tA75EFB9A19C30CBFEABF5BF0578E1636083AC745;
// Unity.Services.Analytics.Internal.AnalyticsUserIdServiceComponent
struct AnalyticsUserIdServiceComponent_t2A2B82EF9FBA795836189A3A0A3274A87D4E1B9B;
// Unity.Services.Analytics.Internal.AnalyticsWebRequest
struct AnalyticsWebRequest_t2851A3E58826329B4D5AE9A1898AD98EF26DEEFA;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// System.IO.BinaryWriter
struct BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E;
// Unity.Services.Analytics.Internal.BufferSystemCalls
struct BufferSystemCalls_t30CA07BE3DD2F29E9F7036ED838F0C92A50480F1;
// Unity.Services.Analytics.Internal.BufferX
struct BufferX_t61043C3179F78166341D64689A662C738496055C;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// Unity.Services.Analytics.ConsentCheckException
struct ConsentCheckException_t96E7054ECB013548EA92EEFFFACAB143D5A86B7D;
// Unity.Services.Analytics.Internal.ConsentTracker
struct ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// Unity.Services.Core.Internal.CoreRegistry
struct CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA;
// Unity.Services.Analytics.CoreStatsHelper
struct CoreStatsHelper_tBF3F119096A7ABBDDC9F22ACBF13FA25FCD166E6;
// System.CultureAwareComparer
struct CultureAwareComparer_t5822A6535A6EB4C448D1B7736067D1188BAEE8CD;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// Unity.Services.Analytics.Data.DataGenerator
struct DataGenerator_t25BC607B3B6D456EAA5DC9C3F600C4B560800183;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Unity.Services.Analytics.Internal.DiskCache
struct DiskCache_tE19D214B0538F2CC9D59D4F827B480AEBCEF368D;
// Unity.Services.Analytics.Internal.Dispatcher
struct Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB;
// System.Text.Encoder
struct Encoder_tAF9067231A76315584BDF4CD27990E2F485A78FA;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// System.Exception
struct Exception_t;
// System.IO.FileStream
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8;
// Unity.Services.Analytics.Internal.FileSystemCalls
struct FileSystemCalls_t1A2213109FA10AFB80C343E28A45F13F053970A3;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// Unity.Services.Analytics.Internal.GeoAPI
struct GeoAPI_tDEC43B93D320DC5B81A4BD9F45491DD2E5D30287;
// Unity.Services.Analytics.Internal.GeoIPResponse
struct GeoIPResponse_tADA05745323DD2374411BCB8CEC9EC086B4FE150;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
// Unity.Services.Analytics.IAnalyticsContainer
struct IAnalyticsContainer_t742F8268D801129AAF7F2486A8B4CE95B73985A1;
// Unity.Services.Analytics.Internal.IAnalyticsForgetter
struct IAnalyticsForgetter_t824BE286D40D7A4B73BE27A5BF50FE8DB4C0AE18;
// Unity.Services.Analytics.IAnalyticsService
struct IAnalyticsService_t131A8925CF4FBBB151AB85D6BE6D07785E210DC0;
// Unity.Services.Analytics.IAnalyticsServiceSystemCalls
struct IAnalyticsServiceSystemCalls_t664990CD0F77E7F6877EE28442B73A589D3C9454;
// Unity.Services.Core.Analytics.Internal.IAnalyticsStandardEventComponent
struct IAnalyticsStandardEventComponent_tF6FA10DAAE59FC2DD9C6441D6B2E8BDA6EDDA807;
// Unity.Services.Core.Analytics.Internal.IAnalyticsUserId
struct IAnalyticsUserId_t8C2078BBFD0D5C5EB8C45126592632FAAA1F2455;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// Unity.Services.Analytics.Internal.IBuffer
struct IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82;
// Unity.Services.Analytics.Internal.IBufferIds
struct IBufferIds_t5556EC4467FE5D9FFE7719945D46679BB747155F;
// Unity.Services.Analytics.Internal.IBufferSystemCalls
struct IBufferSystemCalls_t9CA55BD1B80E3DB50B62AC3E1F54839D2A105C41;
// Unity.Services.Core.Configuration.Internal.ICloudProjectId
struct ICloudProjectId_t366B66869ECC734B15C1F60633D2B998CD9231FE;
// Unity.Services.Core.Internal.IComponentRegistry
struct IComponentRegistry_t139D898B2B7C9D1FF36A573E8DC25415053883B7;
// Unity.Services.Analytics.Internal.IConsentTracker
struct IConsentTracker_t93AFBEAEA2AE9AC2A012EEBFA4344E527FD92550;
// Unity.Services.Analytics.ICoreStatsHelper
struct ICoreStatsHelper_t436ACDCFB0D414BD45F5EAC4C05281101F24E6FD;
// Unity.Services.Analytics.Data.IDataGenerator
struct IDataGenerator_t3CD09958BA210D4EE5B68AE79A6936634EE801E4;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// Unity.Services.Analytics.Internal.IDiskCache
struct IDiskCache_t878F3F39893FAF5AC4CC46B81A7DCB069DFBE822;
// Unity.Services.Analytics.Internal.IDispatcher
struct IDispatcher_t4DE02B283A563837EE126BBB7BA0C5E903D3357C;
// Unity.Services.Core.Environments.Internal.IEnvironments
struct IEnvironments_t9DCAF0398EB856DBE771A9C2D7B120661D628CB7;
// Unity.Services.Core.Configuration.Internal.IExternalUserId
struct IExternalUserId_t50A07D7165D254D971AA529FFE55B4A595A75F25;
// Unity.Services.Analytics.Internal.IFileSystemCalls
struct IFileSystemCalls_t125D92A716C627D4E8C9F59CBE44831033779D05;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// Unity.Services.Analytics.Internal.IGeoAPI
struct IGeoAPI_tC74F141E9C8F842B21B297651037711D955CA5CD;
// Unity.Services.Core.Device.Internal.IInstallationId
struct IInstallationId_tCE6DEEEBAFABEB9EC621BD1646D82BC9D82BFB0C;
// Unity.Services.Core.Internal.IPackageRegistry
struct IPackageRegistry_t598A337CA30E50021BB139EF5CF3C3867139CFA2;
// Unity.Services.Analytics.Internal.IPersistence
struct IPersistence_t5D94C166A344C917BA55528232490C69B12CBED9;
// Unity.Services.Authentication.Internal.IPlayerId
struct IPlayerId_t6A7BAE55B4D78E87B15B9261828E897BAACBF913;
// Unity.Services.Core.Configuration.Internal.IProjectConfiguration
struct IProjectConfiguration_tB5A7516DEB869AD005431EC83C6E02221D2B60D2;
// Unity.Services.Analytics.IUnstructuredEventRecorder
struct IUnstructuredEventRecorder_t1E4A1497C03F65D306116017A5B0B3DFCEC537FE;
// Unity.Services.Analytics.Internal.IWebRequest
struct IWebRequest_t8FAADA0ED58F096C28998EB5AFE9E79FD05F4DFE;
// Unity.Services.Analytics.Internal.IWebRequestHelper
struct IWebRequestHelper_tCCD82817C71896176475384430BB0D9BEF732858;
// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.OrdinalCaseSensitiveComparer
struct OrdinalCaseSensitiveComparer_t581CA7CB51DCF00B6012A697A4B4B3067144521A;
// System.OrdinalIgnoreCaseComparer
struct OrdinalIgnoreCaseComparer_t8BAE11990A4C855D3BCBBFB42F4EF8D45088FBB0;
// Unity.Services.Analytics.Internal.PlayerPrefsPersistence
struct PlayerPrefsPersistence_tA41639170405D0B663305EBE5D18CD5E27583DEF;
// Unity.Services.Core.RequestFailedException
struct RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00;
// Microsoft.Win32.SafeHandles.SafeFileHandle
struct SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// Unity.Services.Analytics.Internal.StandardEventServiceComponent
struct StandardEventServiceComponent_t587EC5F02461A7AD305539BAB07A2B93FD56E2BB;
// Unity.Services.Analytics.Data.StdCommonParams
struct StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// System.StringComparer
struct StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// Unity.Services.Analytics.TransactionCurrencyConverter
struct TransactionCurrencyConverter_t3296A312BAFE7A8FC56182C3D53BEFD1D9474133;
// Ua2CoreInitializeCallback
struct Ua2CoreInitializeCallback_t20D7CCCEDAF24D8AD75CBE5991731A72C70418BD;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F;
// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6;
// UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Unity.Services.Analytics.Internal.WebRequestHelper
struct WebRequestHelper_t90785D95A7FBCCA284192A9CB95D1DA845D57E71;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;
// Ua2CoreInitializeCallback/<Initialize>d__2
struct U3CInitializeU3Ed__2_tE70F0976A2CAD0E2F0A8E8462D49D2EFA9AB281F;
// Unity.Services.Analytics.Internal.WebRequestHelper/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_tC549DEE19D3A36FBBE1510B664CF1CB349E507F5;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tBB5A52E9AEFBC4F0C8D94D39CAD16BCB6B8B5929_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnalyticsForgetter_tA1B9D1F48FB306C80BE60C9858646BC1368948C0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnalyticsServiceSystemCalls_tA75EFB9A19C30CBFEABF5BF0578E1636083AC745_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnalyticsService_t995B7CE25709A192F70345B0335516F282C0CE7B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnalyticsUserIdServiceComponent_t2A2B82EF9FBA795836189A3A0A3274A87D4E1B9B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnalyticsWebRequest_t2851A3E58826329B4D5AE9A1898AD98EF26DEEFA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BufferSystemCalls_t30CA07BE3DD2F29E9F7036ED838F0C92A50480F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BufferX_t61043C3179F78166341D64689A662C738496055C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConsentCheckException_t96E7054ECB013548EA92EEFFFACAB143D5A86B7D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CoreStatsHelper_tBF3F119096A7ABBDDC9F22ACBF13FA25FCD166E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DataGenerator_t25BC607B3B6D456EAA5DC9C3F600C4B560800183_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DiskCache_tE19D214B0538F2CC9D59D4F827B480AEBCEF368D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileSystemCalls_t1A2213109FA10AFB80C343E28A45F13F053970A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GeoAPI_tDEC43B93D320DC5B81A4BD9F45491DD2E5D30287_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAnalyticsContainer_t742F8268D801129AAF7F2486A8B4CE95B73985A1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAnalyticsForgetter_t824BE286D40D7A4B73BE27A5BF50FE8DB4C0AE18_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAnalyticsServiceSystemCalls_t664990CD0F77E7F6877EE28442B73A589D3C9454_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IBufferIds_t5556EC4467FE5D9FFE7719945D46679BB747155F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IBufferSystemCalls_t9CA55BD1B80E3DB50B62AC3E1F54839D2A105C41_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICloudProjectId_t366B66869ECC734B15C1F60633D2B998CD9231FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IConsentTracker_t93AFBEAEA2AE9AC2A012EEBFA4344E527FD92550_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICoreStatsHelper_t436ACDCFB0D414BD45F5EAC4C05281101F24E6FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDataGenerator_t3CD09958BA210D4EE5B68AE79A6936634EE801E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDiskCache_t878F3F39893FAF5AC4CC46B81A7DCB069DFBE822_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDispatcher_t4DE02B283A563837EE126BBB7BA0C5E903D3357C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnvironments_t9DCAF0398EB856DBE771A9C2D7B120661D628CB7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IExternalUserId_t50A07D7165D254D971AA529FFE55B4A595A75F25_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IFileSystemCalls_t125D92A716C627D4E8C9F59CBE44831033779D05_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IInstallationId_tCE6DEEEBAFABEB9EC621BD1646D82BC9D82BFB0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPersistence_t5D94C166A344C917BA55528232490C69B12CBED9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPlayerId_t6A7BAE55B4D78E87B15B9261828E897BAACBF913_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IWebRequestHelper_tCCD82817C71896176475384430BB0D9BEF732858_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IWebRequest_t8FAADA0ED58F096C28998EB5AFE9E79FD05F4DFE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerPrefsPersistence_tA41639170405D0B663305EBE5D18CD5E27583DEF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SdkVersion_t0BDC7D3E9F8175012EACBDB69FD9394AC2679BB8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SessionEndState_t2CCED7EB4774D5B9C8E77DD6365BD147EC8C9BA1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StandardEventServiceComponent_t587EC5F02461A7AD305539BAB07A2B93FD56E2BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TransactionCurrencyConverter_t3296A312BAFE7A8FC56182C3D53BEFD1D9474133_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CInitializeU3Ed__2_tE70F0976A2CAD0E2F0A8E8462D49D2EFA9AB281F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass2_0_tC549DEE19D3A36FBBE1510B664CF1CB349E507F5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UA2PlatformCode_t169515A6E124BCE234B36176D037F6E09BC3BAC6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Ua2CoreInitializeCallback_t20D7CCCEDAF24D8AD75CBE5991731A72C70418BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebRequestHelper_t90785D95A7FBCCA284192A9CB95D1DA845D57E71_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00736996BFF6E813FFC831E7963AB11A4647B861;
IL2CPP_EXTERN_C String_t* _stringLiteral02F274D8EFE8DBE0F707B65BA93140F8C1EC83B4;
IL2CPP_EXTERN_C String_t* _stringLiteral054C61CC7E92B92D00405F3DBD04C8C90DD763B8;
IL2CPP_EXTERN_C String_t* _stringLiteral0621EA2B36667C33F4A1FEDA6E1CA3FB3D1C840C;
IL2CPP_EXTERN_C String_t* _stringLiteral079410AFDF8A8290DC264F4D755700D4DAAF91F4;
IL2CPP_EXTERN_C String_t* _stringLiteral082894E5DCF8D93E2AF9B1A38C5CF0152077D9D4;
IL2CPP_EXTERN_C String_t* _stringLiteral085CDCD5D693B72C213039A773937050DE20839E;
IL2CPP_EXTERN_C String_t* _stringLiteral09ACAF0EC6B5F6E7799AC236F0CA186A2E1F4239;
IL2CPP_EXTERN_C String_t* _stringLiteral0B6D138D8454083A41D1C936D8DFA8099F161DA8;
IL2CPP_EXTERN_C String_t* _stringLiteral0BC237184924820231BE4541A9E248A9768C7DEC;
IL2CPP_EXTERN_C String_t* _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A;
IL2CPP_EXTERN_C String_t* _stringLiteral0CF567A3CC7E346F2BEAB620A73CFB5CDAF3ADBA;
IL2CPP_EXTERN_C String_t* _stringLiteral0DD749240B9F1DE9E3434C626FF5489F68F6D860;
IL2CPP_EXTERN_C String_t* _stringLiteral0FCC06A6BCFD070BA5599CB641AC176D77B980AB;
IL2CPP_EXTERN_C String_t* _stringLiteral104C3D8C85D4DBCE20024956C2628C437C629A83;
IL2CPP_EXTERN_C String_t* _stringLiteral10E47B045BE29B1A8AFA0F7B2441CB47CA3A67E8;
IL2CPP_EXTERN_C String_t* _stringLiteral10E9B34B3B2D094B461A54880E4F462117AC5B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral12AF1BC26072634DC2AE0ECE0471600FE074A13E;
IL2CPP_EXTERN_C String_t* _stringLiteral13E0C4D575EF4CFA208688FF6CE58789AF02BBA0;
IL2CPP_EXTERN_C String_t* _stringLiteral1478BC45A3EF425780ADB183A6419907115E223E;
IL2CPP_EXTERN_C String_t* _stringLiteral148824F010ADAC4C3C4CE066B0DFDB5C2654FB2B;
IL2CPP_EXTERN_C String_t* _stringLiteral14A086C4277601C8D35634B59AC6F886CFD855F2;
IL2CPP_EXTERN_C String_t* _stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D;
IL2CPP_EXTERN_C String_t* _stringLiteral16303F63CAFE3259A012582C0D4DFDD43952E56F;
IL2CPP_EXTERN_C String_t* _stringLiteral16366EFF1098954CA719C6CFBEBD951926CFD64E;
IL2CPP_EXTERN_C String_t* _stringLiteral16FA815CB43FA0EEE13AD6B16952C4364F2D2E08;
IL2CPP_EXTERN_C String_t* _stringLiteral170AD99AD2A9FB6605C713D5E03E562C7D968B69;
IL2CPP_EXTERN_C String_t* _stringLiteral17C932391CAC9098F30A5137100A8A293752446C;
IL2CPP_EXTERN_C String_t* _stringLiteral1A99A8C8398B221DA18F963F7662BAF65F57BBBE;
IL2CPP_EXTERN_C String_t* _stringLiteral1D9C903F2CFE60C87D084257D816121914ED5CD7;
IL2CPP_EXTERN_C String_t* _stringLiteral1E862A707621E680436D3EE5A45C11B8B8019F39;
IL2CPP_EXTERN_C String_t* _stringLiteral2028A2611FF494355F4C886D11936814AB305050;
IL2CPP_EXTERN_C String_t* _stringLiteral2048D52CF5B85C0065BA74F03F29D189F49A817F;
IL2CPP_EXTERN_C String_t* _stringLiteral22707A051BA71652A76B65CD3B1CF3D57FCECCDF;
IL2CPP_EXTERN_C String_t* _stringLiteral22DC889BC972FCD09DEFF7641E6B361E1A814826;
IL2CPP_EXTERN_C String_t* _stringLiteral2309FB9CC1600C4642826BA92EB5C43EA0970693;
IL2CPP_EXTERN_C String_t* _stringLiteral236273A920037342C6BF764C26035460AC1B4BCB;
IL2CPP_EXTERN_C String_t* _stringLiteral244F217EFEE741CEA827D278453DDB6453729BB6;
IL2CPP_EXTERN_C String_t* _stringLiteral2539188F4D764C792605E272835EC14F18624058;
IL2CPP_EXTERN_C String_t* _stringLiteral258EBBFB914390B152C3C49D597D34EB4015FF16;
IL2CPP_EXTERN_C String_t* _stringLiteral25BB8D65B0F3964EA0D799145078C16FEF52341C;
IL2CPP_EXTERN_C String_t* _stringLiteral276C84DEB214873D13A4AF836CA95F4BADB36FE8;
IL2CPP_EXTERN_C String_t* _stringLiteral299D329E6EA983CC4221A704937359840D3B696D;
IL2CPP_EXTERN_C String_t* _stringLiteral29B2AAE0149A885123E7F21B7247D1EA4BADF148;
IL2CPP_EXTERN_C String_t* _stringLiteral2A5B4A683A4FF348D7FBA286A40B146642302E8C;
IL2CPP_EXTERN_C String_t* _stringLiteral2AF7BC4852F23D16CF2079B71E5991F15A61E81E;
IL2CPP_EXTERN_C String_t* _stringLiteral2D674CA6A1CCD2F2B3D17EE3094E3EA43AAB743D;
IL2CPP_EXTERN_C String_t* _stringLiteral308495485824FFEF8CDA6443346A3605E719A75A;
IL2CPP_EXTERN_C String_t* _stringLiteral30DE4318B8AF0C3D59547CEE589746F6DBAB89C3;
IL2CPP_EXTERN_C String_t* _stringLiteral30F6F02FEDC0164A519004DC0D974D5F5C495693;
IL2CPP_EXTERN_C String_t* _stringLiteral32DAD11A2DA98D2FBFC3098BCA6A6AE59BB54A31;
IL2CPP_EXTERN_C String_t* _stringLiteral3595F061260FF16E7FACFE48B48E71066E9ABA1C;
IL2CPP_EXTERN_C String_t* _stringLiteral35B5ADC96410AC9E0FBD60CD4B98AF30C7FF77A1;
IL2CPP_EXTERN_C String_t* _stringLiteral36149BCD2C8B864CB90F75A17A96F5A6BE03F3E5;
IL2CPP_EXTERN_C String_t* _stringLiteral36938B39E43FFBE00F46140DCB7313C97E180908;
IL2CPP_EXTERN_C String_t* _stringLiteral36CA84885A92E739ED9A94802681AD6C4E3C8852;
IL2CPP_EXTERN_C String_t* _stringLiteral385A64F0FE2CF8945475789AF05D5D5E4346EFAE;
IL2CPP_EXTERN_C String_t* _stringLiteral38611C47421E5420D169305A4C4482AD6300720E;
IL2CPP_EXTERN_C String_t* _stringLiteral395F121121D3A37B7F22ACEB4CC8C0A2E785CFFA;
IL2CPP_EXTERN_C String_t* _stringLiteral3A1B4473844D23854218F673A809ABA161F75BBA;
IL2CPP_EXTERN_C String_t* _stringLiteral3AA260D90D3BE72AF9AF17CC353F3D97B1FF35AB;
IL2CPP_EXTERN_C String_t* _stringLiteral3AAADB400CC4093A2B8D65DADF92560E65DFF664;
IL2CPP_EXTERN_C String_t* _stringLiteral3ACB307F5B0B7C4C5E5C31870371EB8B5D752F5C;
IL2CPP_EXTERN_C String_t* _stringLiteral3C1DFC84C89C48D8E83EB3C98D58E22F70F5E9F4;
IL2CPP_EXTERN_C String_t* _stringLiteral3CF09EA528F2B59A7130F83612C8F6DC4419E135;
IL2CPP_EXTERN_C String_t* _stringLiteral3E26B4BE8E1A4D1123D396C9945610AFBF71BF3A;
IL2CPP_EXTERN_C String_t* _stringLiteral3EB2BDB70C070A2908F3250D1D9C142B29AFFCB5;
IL2CPP_EXTERN_C String_t* _stringLiteral405C5C8AEC9362A04D5A32008B0D8CE6143B6613;
IL2CPP_EXTERN_C String_t* _stringLiteral40A375960271895A6C9D6E67832DFF850E7818FB;
IL2CPP_EXTERN_C String_t* _stringLiteral4184C304972D6C880108F08C499280157EBAC151;
IL2CPP_EXTERN_C String_t* _stringLiteral42D40175FF539DDF928B1E987A977BBF3CB544BF;
IL2CPP_EXTERN_C String_t* _stringLiteral4370344BF391C9775674F57F65AB43157A70FFA8;
IL2CPP_EXTERN_C String_t* _stringLiteral447A985D020E70B4D77B0701303D8F511295B32D;
IL2CPP_EXTERN_C String_t* _stringLiteral4554697696DB334C4A69857E431F5359A5652C33;
IL2CPP_EXTERN_C String_t* _stringLiteral45A2803629897DBB2C206F364A3099B875FAF04F;
IL2CPP_EXTERN_C String_t* _stringLiteral45EAEB6C152AA99EE22D7FA976D69BBA364F6F30;
IL2CPP_EXTERN_C String_t* _stringLiteral46CC0A1237AF8D2AD7B8E32EE022F0AFF27543D2;
IL2CPP_EXTERN_C String_t* _stringLiteral4824A3B2B566BA0E0F228A35F400EB362238E8C8;
IL2CPP_EXTERN_C String_t* _stringLiteral48F54E824E0E6AF56C862FF6251F25E5CB152BF9;
IL2CPP_EXTERN_C String_t* _stringLiteral4AA3716D19976DD411ABCF0909A0E4D4B8EA09AF;
IL2CPP_EXTERN_C String_t* _stringLiteral4BBBF6E7834C24AA4FAD59D546872FA503C6084B;
IL2CPP_EXTERN_C String_t* _stringLiteral4BD7FDE208E0373B221810962DA9C6C57339E364;
IL2CPP_EXTERN_C String_t* _stringLiteral4C978FAA91BFFCF3641BC0ACD796F4EE993AB4A0;
IL2CPP_EXTERN_C String_t* _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078;
IL2CPP_EXTERN_C String_t* _stringLiteral4D88DC602EB6FBBEF4C8649C1866B4FE2D18A73D;
IL2CPP_EXTERN_C String_t* _stringLiteral505DC7B5F7B5E5FDCEE2CD01C9B83BB38C328A1B;
IL2CPP_EXTERN_C String_t* _stringLiteral51026120A929AEFCA7209B235ACE529BEC6FD7B1;
IL2CPP_EXTERN_C String_t* _stringLiteral5119119D395301AF26F5E33DACA5C4C27048BFA4;
IL2CPP_EXTERN_C String_t* _stringLiteral51B4E0C1F65B55DD8FC1BD84F7C7155D019682F2;
IL2CPP_EXTERN_C String_t* _stringLiteral5290C04F55FD997B854A58817AA740D4304231E4;
IL2CPP_EXTERN_C String_t* _stringLiteral536E5B84A146D6EAEB5D74C24E27D67FD4C0B1E7;
IL2CPP_EXTERN_C String_t* _stringLiteral54456F7D5F661596CBB77379CB87A2F212C937AB;
IL2CPP_EXTERN_C String_t* _stringLiteral57122A04C3596A72887F65B738601418476678E7;
IL2CPP_EXTERN_C String_t* _stringLiteral577425CD87D93CE29BD73B7A610A2AA16814173F;
IL2CPP_EXTERN_C String_t* _stringLiteral58B90608C76E395C05539701FDF64C831A43673D;
IL2CPP_EXTERN_C String_t* _stringLiteral58BBB4EDBFDCD31C75C2E9DBF82FB0D890F3FDA3;
IL2CPP_EXTERN_C String_t* _stringLiteral5A3268A7F7F8F2CACA1449DEE6DBD287E1EE537B;
IL2CPP_EXTERN_C String_t* _stringLiteral5AACB58D619B294B5EE03B0837F285087DE605AA;
IL2CPP_EXTERN_C String_t* _stringLiteral5B6BE14C87C0E466C1EFBE237A318884BD2F7F0D;
IL2CPP_EXTERN_C String_t* _stringLiteral5CDEC3D17C0672B2895D89FD7D65350996F6895B;
IL2CPP_EXTERN_C String_t* _stringLiteral5D38B6C4C25F92A9ADD95A1A5C8F80EAA4D3AE14;
IL2CPP_EXTERN_C String_t* _stringLiteral5D7E10FB1136637DF3EEA7E332D50E75ECCFAE35;
IL2CPP_EXTERN_C String_t* _stringLiteral5DAAFC13D028473227945C221C31A63A94B85D6B;
IL2CPP_EXTERN_C String_t* _stringLiteral5F1E01DA43AD1DD21A227DBD58072E59026AA796;
IL2CPP_EXTERN_C String_t* _stringLiteral5F9A84D290654E9508A7E5B24B2A31F01448DF3C;
IL2CPP_EXTERN_C String_t* _stringLiteral60550E25F59BAA9CF9F90B89F084315A0E7E7590;
IL2CPP_EXTERN_C String_t* _stringLiteral632B8C247B430215FA82D909105BE257B7D7B524;
IL2CPP_EXTERN_C String_t* _stringLiteral63727CA6C805007DCD3A3067D90A70432562D6EF;
IL2CPP_EXTERN_C String_t* _stringLiteral638248CC966A586E8F21C2DB6F7D3AEA250E81C1;
IL2CPP_EXTERN_C String_t* _stringLiteral63A5CD74B260DC0F1665E1409A22C48AC811DF41;
IL2CPP_EXTERN_C String_t* _stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E;
IL2CPP_EXTERN_C String_t* _stringLiteral640EF4B5A6EEA63697869DA2BA9DFCA36FBB1AF3;
IL2CPP_EXTERN_C String_t* _stringLiteral6418250E3BBBB638BAAE36C63372B4E5258CABD4;
IL2CPP_EXTERN_C String_t* _stringLiteral6592F2A54D864C0F2DADC704BDDAB476278DF50F;
IL2CPP_EXTERN_C String_t* _stringLiteral66B0C5DCF501F8727C24052B01FF06C451E7070E;
IL2CPP_EXTERN_C String_t* _stringLiteral689C6A4E0E10858B33315ABF7B58B47BF427CAB7;
IL2CPP_EXTERN_C String_t* _stringLiteral6A78A58188D774704931BAD9BEED28758B7E213F;
IL2CPP_EXTERN_C String_t* _stringLiteral6B072065FA7EE3F58209725EEEBF4B1044C4573C;
IL2CPP_EXTERN_C String_t* _stringLiteral6D33BA5F8204B4ABECBBF61716B9AF4C90BEFEF1;
IL2CPP_EXTERN_C String_t* _stringLiteral6F296BCA0F675C0368B3ACDE08DD6C152E56621D;
IL2CPP_EXTERN_C String_t* _stringLiteral6F8E4A8EEE6F2F75A808EB9CA38D23A216EB7356;
IL2CPP_EXTERN_C String_t* _stringLiteral6FB7C2CCAED8A0EBB4E9AB8515D8155C6A95D26B;
IL2CPP_EXTERN_C String_t* _stringLiteral713D58DAA282E557C1FB99B563A33819B5DAB47D;
IL2CPP_EXTERN_C String_t* _stringLiteral71EF8EB7B9B3D3F7D8D889E7EAA085850B47E14D;
IL2CPP_EXTERN_C String_t* _stringLiteral75FC36F3249DA4CE5C93558EF4747F7E0B205470;
IL2CPP_EXTERN_C String_t* _stringLiteral7646BCA86620BEB0AC49BAFC74ADE2D236A06D5F;
IL2CPP_EXTERN_C String_t* _stringLiteral76BABA91F33047678737B893F72821F1FE7CEFA4;
IL2CPP_EXTERN_C String_t* _stringLiteral76F26756BFE13A4CF3DAB4864254FB3F09DA993E;
IL2CPP_EXTERN_C String_t* _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
IL2CPP_EXTERN_C String_t* _stringLiteral78117315CB3E34E846CD26F5627994F837AFCACD;
IL2CPP_EXTERN_C String_t* _stringLiteral782091A124984DB669E8C38AF8E8C05E76873F5A;
IL2CPP_EXTERN_C String_t* _stringLiteral7A535E4F4CDF4AED9782CE43763768AB6DB185C7;
IL2CPP_EXTERN_C String_t* _stringLiteral7A71B86AFF784DE82443E14289760F1D91D8EFAD;
IL2CPP_EXTERN_C String_t* _stringLiteral7E74442815CA2E9768302210B2AEC00F3BE80413;
IL2CPP_EXTERN_C String_t* _stringLiteral7EA97C35880A0D4465D17DDE1F8241D28978C117;
IL2CPP_EXTERN_C String_t* _stringLiteral7F43C6AFB1C84128718F10F14E8CC804822717EC;
IL2CPP_EXTERN_C String_t* _stringLiteral7F64C019F9920BB9DBA8494E22F5F5627CC63913;
IL2CPP_EXTERN_C String_t* _stringLiteral80120090265549DE9FE973E46443BFA74E325435;
IL2CPP_EXTERN_C String_t* _stringLiteral83921E76DB37F79389DD6DCF44C1E78295D9BE50;
IL2CPP_EXTERN_C String_t* _stringLiteral83BB4AF414511BF4A0E273F515A8A4933C296E52;
IL2CPP_EXTERN_C String_t* _stringLiteral841EFD6597128A8FD0024BC87FD07F020CBAA1E2;
IL2CPP_EXTERN_C String_t* _stringLiteral843422B942D75E64BB0A2281AB972CE4A7EB3924;
IL2CPP_EXTERN_C String_t* _stringLiteral8905FD38EEA933AC528FF73A57DAC6B13D1127E2;
IL2CPP_EXTERN_C String_t* _stringLiteral8C91977FD80567D0C289B5DD0C60AA24E73CAE76;
IL2CPP_EXTERN_C String_t* _stringLiteral8E6206F0E750B78653F8B621A641B68B9255BF17;
IL2CPP_EXTERN_C String_t* _stringLiteral9367A319824C783BD69583CB2490F67DAF5AC086;
IL2CPP_EXTERN_C String_t* _stringLiteral93998027822B92FA84F9F1CC56BCEA2D9344D1BD;
IL2CPP_EXTERN_C String_t* _stringLiteral93F9C7D2C7E3B3B879344F845BF299AE5A11BFF3;
IL2CPP_EXTERN_C String_t* _stringLiteral94C4A1631484AD24431E32FCAED7AE7426DB402F;
IL2CPP_EXTERN_C String_t* _stringLiteral94F5C0AD2551979F304FD9ABB4C9FBBB9D2047F7;
IL2CPP_EXTERN_C String_t* _stringLiteral95F792E998855EB879C4F33E147F416BFF8350F6;
IL2CPP_EXTERN_C String_t* _stringLiteral98209D2C0B024C19D99DE742E6003B721296652E;
IL2CPP_EXTERN_C String_t* _stringLiteral9A053A49693D46963A63E83B4F75CF40EED8D8FD;
IL2CPP_EXTERN_C String_t* _stringLiteral9A4742276AC86152B04539D6B218622416E5AF2D;
IL2CPP_EXTERN_C String_t* _stringLiteral9AB4AF6C8CCC52DA7CE36D811BADA7F640721296;
IL2CPP_EXTERN_C String_t* _stringLiteral9CEE5507D8A5957082FF9D1BA24E8DF9EE625F7D;
IL2CPP_EXTERN_C String_t* _stringLiteral9EF464966249C19D746E6108CC6B42901A51EB2E;
IL2CPP_EXTERN_C String_t* _stringLiteralA07A3EB9D8DB99C62110B79812663E60297F7619;
IL2CPP_EXTERN_C String_t* _stringLiteralA32AA422B9D45CD4F7920FD6B94EA13BC3F55120;
IL2CPP_EXTERN_C String_t* _stringLiteralA333953DEB7B3F631AE4FEB93E9C3AD7F349F8C0;
IL2CPP_EXTERN_C String_t* _stringLiteralA3DFC4F5246F4B16F322274CCEAC16C6C120A25C;
IL2CPP_EXTERN_C String_t* _stringLiteralA3F56BA8529D7BE456BD480AB16C0ACC7628CF61;
IL2CPP_EXTERN_C String_t* _stringLiteralA517A4F85AAA7EBA705BDB743CD5CDA3F32FB5B2;
IL2CPP_EXTERN_C String_t* _stringLiteralA54E360A25C694D35AC2BC1F6481EF45DFBA8963;
IL2CPP_EXTERN_C String_t* _stringLiteralA57D6FD6545D30BFF1842E92D39CEBD8F94864C6;
IL2CPP_EXTERN_C String_t* _stringLiteralA634693E806EDA103130B07B3733ADA02E7E6FD1;
IL2CPP_EXTERN_C String_t* _stringLiteralAA62FCD77AFB95737483572B0CA74638491BEDB3;
IL2CPP_EXTERN_C String_t* _stringLiteralAC38B21AD0EB9DE4133BFC7F438CDB9B6189495B;
IL2CPP_EXTERN_C String_t* _stringLiteralAED5CB60F87C1BB12D5084E281408448AC106017;
IL2CPP_EXTERN_C String_t* _stringLiteralAF5A525399C027CA652F1F3DF915FE563359FC66;
IL2CPP_EXTERN_C String_t* _stringLiteralB20ED1DE1A061966164B9D5AF6835D402909E3E0;
IL2CPP_EXTERN_C String_t* _stringLiteralB2ECCE4B9B5B5CB24297087DC10EAC9B8D314C55;
IL2CPP_EXTERN_C String_t* _stringLiteralB2F9235F4F063A8609A1E74346AC3F275A7303EE;
IL2CPP_EXTERN_C String_t* _stringLiteralB530856CAC09ED25A4DA236BEA7A8FA5B3538420;
IL2CPP_EXTERN_C String_t* _stringLiteralB5D12D8EBFA73570DFDC58099A34669F0B3B8682;
IL2CPP_EXTERN_C String_t* _stringLiteralB67F8639FB16F6C4841EED07F5641A7B82C815D5;
IL2CPP_EXTERN_C String_t* _stringLiteralB77E31D2A4A06B38E1B7C8FC29C34D00063605FD;
IL2CPP_EXTERN_C String_t* _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
IL2CPP_EXTERN_C String_t* _stringLiteralB89D9E7580D0D17D5EE1189160034601495823D1;
IL2CPP_EXTERN_C String_t* _stringLiteralB91505A7C57926DDC126B93151A049BC213BEC78;
IL2CPP_EXTERN_C String_t* _stringLiteralB97FC8BB8B857BF13978EF739D9F564BCED0EB98;
IL2CPP_EXTERN_C String_t* _stringLiteralB998ED74BBE643EFB1178023AB66097D25232774;
IL2CPP_EXTERN_C String_t* _stringLiteralBB0117465450FC41C80773A51F2125C52C8DA63C;
IL2CPP_EXTERN_C String_t* _stringLiteralBB073CF4C6E067593B42F72480CA2D174D8BE952;
IL2CPP_EXTERN_C String_t* _stringLiteralBD3F71CA82FA3F7797AA9DCFD97CD6262DACD1E1;
IL2CPP_EXTERN_C String_t* _stringLiteralBDCF3FADE7969125498FC2D2DF330D25D1A6EC2D;
IL2CPP_EXTERN_C String_t* _stringLiteralBEEEADECA10709FED3CC67A10B0C61BCA3586135;
IL2CPP_EXTERN_C String_t* _stringLiteralC048C43A99B3C90804EEBA637998A43F953E61B5;
IL2CPP_EXTERN_C String_t* _stringLiteralC04B333D53795815D844A1EAE07C424CF7A388F5;
IL2CPP_EXTERN_C String_t* _stringLiteralC0FB8B944A767E1AACE82F930D95E69ED912ADAD;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralC2055FDF7B20639C9978913DD0AC3D2335F059CD;
IL2CPP_EXTERN_C String_t* _stringLiteralC4373A3F17EF89A19806466941A495CD9AC320C9;
IL2CPP_EXTERN_C String_t* _stringLiteralC60816ED1CF3D79541144B9E0235BB10D437850F;
IL2CPP_EXTERN_C String_t* _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677;
IL2CPP_EXTERN_C String_t* _stringLiteralC8E58DAD4CC2966A3FCCFB3B3578153C051232BA;
IL2CPP_EXTERN_C String_t* _stringLiteralC8FDC00A57780A9EDB4B352514593013802ECB45;
IL2CPP_EXTERN_C String_t* _stringLiteralCA22054A8B87E1C1362994865922E9BE924DD589;
IL2CPP_EXTERN_C String_t* _stringLiteralCACB20C6D3B53D812D60572CB4D519A855167070;
IL2CPP_EXTERN_C String_t* _stringLiteralCE997756AE28DA8CED1FA1160227AA74FACA2C68;
IL2CPP_EXTERN_C String_t* _stringLiteralD0DC72E82E7420768946DB6472FF2FE3E721B0AD;
IL2CPP_EXTERN_C String_t* _stringLiteralD5CBCE94B6B0D32D067FD96ED99B5DEB20FDCFB5;
IL2CPP_EXTERN_C String_t* _stringLiteralD76593C0F3C8C4E871147921AF2AE0A86527FA0F;
IL2CPP_EXTERN_C String_t* _stringLiteralD80A64E0036F8330EADC3705DD59CC6581FE8E99;
IL2CPP_EXTERN_C String_t* _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1;
IL2CPP_EXTERN_C String_t* _stringLiteralD9FCB88E3173981902A4EA573B3AF3CFFA2158B9;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDA667D509F3483FEA9BABF68B23663F189FF7D3D;
IL2CPP_EXTERN_C String_t* _stringLiteralDAD3B004758C6DF500AA2A49CB44733CB7869DBF;
IL2CPP_EXTERN_C String_t* _stringLiteralDAFA078D8B7D7134A49C356BBBF77DB7C1B71689;
IL2CPP_EXTERN_C String_t* _stringLiteralDB4F6E9A963891777D89171877E979F6703604C1;
IL2CPP_EXTERN_C String_t* _stringLiteralDCC2A0E9BB0E18185E2813F45A0FDBAAFE5F6277;
IL2CPP_EXTERN_C String_t* _stringLiteralDE8982A4CBA861107110D88200ED6AE58BDD2D94;
IL2CPP_EXTERN_C String_t* _stringLiteralDFD21CC7508D0779B0B3B400D2B5D651665060A6;
IL2CPP_EXTERN_C String_t* _stringLiteralDFF64ED34F81AC1EEC6761460E897FD781F56A1B;
IL2CPP_EXTERN_C String_t* _stringLiteralE46475A038CE8463CC88A3C7DB6950E45EC6B178;
IL2CPP_EXTERN_C String_t* _stringLiteralE4D0382C63C65326B1CD2014BF02F8DAF87851CB;
IL2CPP_EXTERN_C String_t* _stringLiteralE4EE7A20CB10A02C65E2C09328566DDB52AEB176;
IL2CPP_EXTERN_C String_t* _stringLiteralE5937D651E29A4D90762E4DD3B121B380E293FB7;
IL2CPP_EXTERN_C String_t* _stringLiteralE5F64215B865771BB0C5BB83564A0D46D2F5CB44;
IL2CPP_EXTERN_C String_t* _stringLiteralE62699F68FB3F2AA9BFA8C0E319B57A39F0948E7;
IL2CPP_EXTERN_C String_t* _stringLiteralE6BB1D1C222056044DECBA8E28B892E7C7412208;
IL2CPP_EXTERN_C String_t* _stringLiteralE7071BF332C25311420FA71C8E3385289D87B413;
IL2CPP_EXTERN_C String_t* _stringLiteralE8A2DB968E4D46B21E87FD4121925CEBAEC58125;
IL2CPP_EXTERN_C String_t* _stringLiteralEB0F79A6ABD88DB20E08561FCEEA8E62C21B8875;
IL2CPP_EXTERN_C String_t* _stringLiteralEB1579E337081436208C9033D7D92967BE03DCE0;
IL2CPP_EXTERN_C String_t* _stringLiteralF077AC84D48734DD287D272D536914E05773D01D;
IL2CPP_EXTERN_C String_t* _stringLiteralF25E0841CC395F242DA7A87EE69C457CBB5CF7C2;
IL2CPP_EXTERN_C String_t* _stringLiteralF2F032C35FA7D119E187D44AA3ABC0FACF45EACB;
IL2CPP_EXTERN_C String_t* _stringLiteralF37708F5D3FF7E541148EF1DEFA846BEDDD35A86;
IL2CPP_EXTERN_C String_t* _stringLiteralF44C639257DDD3D541C5E71BAFEB64F9533A03D0;
IL2CPP_EXTERN_C String_t* _stringLiteralF4B564DBD703C27495C5517490A3AA7687F00F50;
IL2CPP_EXTERN_C String_t* _stringLiteralF66420578C2FEC2FACAC16428DDF4EE41540B44C;
IL2CPP_EXTERN_C String_t* _stringLiteralF96C7D830C923517A9B86B465152960A8783DA4F;
IL2CPP_EXTERN_C String_t* _stringLiteralFA00CB7B7D55E48031B91C07E02C363112E00654;
IL2CPP_EXTERN_C String_t* _stringLiteralFA08BA5C9B3EC29729F1767C64749B98B93BDD49;
IL2CPP_EXTERN_C String_t* _stringLiteralFA2B09816AD28D986000563925DD7B8A9F0D4FFF;
IL2CPP_EXTERN_C String_t* _stringLiteralFAA80E9D727A341BE57ECEAEF7A1A4FE28DD806D;
IL2CPP_EXTERN_C String_t* _stringLiteralFB10F3876F878924988BE8256B639BB0869B41B2;
IL2CPP_EXTERN_C String_t* _stringLiteralFB2C4D8828AFC358869C34BB5058A83482A7A021;
IL2CPP_EXTERN_C String_t* _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9;
IL2CPP_EXTERN_C String_t* _stringLiteralFDD06087A1C406B544D206318317F79697ACD5EC;
IL2CPP_EXTERN_C String_t* _stringLiteralFDD66CDD7B97059B506472A40D903EA6616EE5DE;
IL2CPP_EXTERN_C String_t* _stringLiteralFE4E8D2F674A9B8C61B994B4EB2D46018E971583;
IL2CPP_EXTERN_C String_t* _stringLiteralFFBF433B627DA76F2B3F8F9137C40070252A3B18;
IL2CPP_EXTERN_C String_t* _stringLiteralFFEF3DBE279EE1F92E1E2E46F45BC18EBBF55A1A;
IL2CPP_EXTERN_C const RuntimeMethod* AnalyticsForgetter_UploadComplete_mA94023B0D4A918B179EBDFA97BFBD2F9221EE29D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnalyticsServiceInstance_DataDeletionCompleted_m4C4D2F1B9C08AAAD4FCD5DE8F23CD9FFF9CB7C6A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnalyticsServiceInstance_OldForgetMeEventUploaded_mF328362CE747DFFEC071EAD40FA89F7698C3E9B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CInitializeU3Ed__2_tE70F0976A2CAD0E2F0A8E8462D49D2EFA9AB281F_m6CA7288B39A328F23D802B24A3FD2765BA9F11F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CInitializeU3Ed__2_tE70F0976A2CAD0E2F0A8E8462D49D2EFA9AB281F_m4F2966D39E9AA64C6E314B2A63CA169B3F8AFEFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BufferX__ctor_mBBE8167311FE2989DC8174E1DFB53EB59276540C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConsentTracker_ValidateConsentWasChecked_m92986F8E992406A10E6712086DE129EB009935E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistration_DependsOn_TisICloudProjectId_t366B66869ECC734B15C1F60633D2B998CD9231FE_mE5B2A026998399E51D853DF4B3D4F9AA85BF84D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistration_DependsOn_TisIEnvironments_t9DCAF0398EB856DBE771A9C2D7B120661D628CB7_mF32D3AEE8770313EFCC77D92013AF760CBABCD64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistration_DependsOn_TisIExternalUserId_t50A07D7165D254D971AA529FFE55B4A595A75F25_mCABAC7BD58204E9E5B80544CF9D413AEC53772DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistration_DependsOn_TisIInstallationId_tCE6DEEEBAFABEB9EC621BD1646D82BC9D82BFB0C_mA93E2240E092DDA93C08F11936078CD15E581C91_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistration_DependsOn_TisIProjectConfiguration_tB5A7516DEB869AD005431EC83C6E02221D2B60D2_mFE611D2FD196728ACC376EAB06D4F2664D8FDD10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistration_OptionallyDependsOn_TisIPlayerId_t6A7BAE55B4D78E87B15B9261828E897BAACBF913_m5F08ADC17E47CCBEEDC9C48CC64F5A475CCFD286_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistration_ProvidesComponent_TisIAnalyticsStandardEventComponent_tF6FA10DAAE59FC2DD9C6441D6B2E8BDA6EDDA807_m4CCB17ADEC6343A3DE09DC770F1F49B45FFA4942_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistry_GetServiceComponent_TisICloudProjectId_t366B66869ECC734B15C1F60633D2B998CD9231FE_mF7458A4E56377FCF3301F3ECE3A64B8C709EB38F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistry_GetServiceComponent_TisIEnvironments_t9DCAF0398EB856DBE771A9C2D7B120661D628CB7_mB14B4F5C7C715C037C3D0B96AD44CFBC570659AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistry_GetServiceComponent_TisIExternalUserId_t50A07D7165D254D971AA529FFE55B4A595A75F25_m943FC6CF014F0065DD2E93EC1C7830093F6B1918_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistry_GetServiceComponent_TisIInstallationId_tCE6DEEEBAFABEB9EC621BD1646D82BC9D82BFB0C_m154CDEFCDF91B08E20C3D0DAE197A8AD04AAE70F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistry_GetServiceComponent_TisIPlayerId_t6A7BAE55B4D78E87B15B9261828E897BAACBF913_mAA43670CFBC53A1BB132782BB187BE8BF0D90BEC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistry_GetServiceComponent_TisIProjectConfiguration_tB5A7516DEB869AD005431EC83C6E02221D2B60D2_mF70AFB94326EDB167066B7836231B13A52150312_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistry_RegisterPackage_TisUa2CoreInitializeCallback_t20D7CCCEDAF24D8AD75CBE5991731A72C70418BD_m2D03E607E78DEFB5521CD83B02846C48D6EF4F0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistry_RegisterServiceComponent_TisIAnalyticsStandardEventComponent_tF6FA10DAAE59FC2DD9C6441D6B2E8BDA6EDDA807_mBC81DFA289107F2FAEAC53E5B7785A2C65A76905_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistry_RegisterServiceComponent_TisIAnalyticsUserId_t8C2078BBFD0D5C5EB8C45126592632FAAA1F2455_m24033D2421A44776EB156EB848C371BA5EEADBCC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m9804017B0F6F06DE8C8FAA9292240873CB450B2D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dispatcher_UploadCompleted_m1A96D525DB4DE2A378D239C3D11DA427E36B2459_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisAnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_mE4F8B8275039940AFB099EE841C9060ACCFF2A11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveRange_m1E69C4C8438AA5D7E05C2936C79C01D96F89BE68_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_m95629806F31CF369D937590912E0B6A53FF7C587_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_ToString_m04B6938F577DFC70D695A65C381A5ABCBC441248_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass2_0_U3CSendWebRequestU3Eb__0_mAE3230661FB4148BD8285721D5E48F49441B37D6_RuntimeMethod_var;
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com;
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke;
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t489BE72A981513E97FD4A68068F4E6261EFD70D5 
{
};

// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tEA0133B78B9FF7045128C508FA50247E525A94D6* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tCC15D033281A6593E2488FAF5B205812A152AC03* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tCE6BD704B9571C131E2D8C8CED569DDEC4AE042B* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_emptyArray_5;
};

// Unity.Services.Analytics.Internal.AnalyticsForgetter
struct AnalyticsForgetter_tA1B9D1F48FB306C80BE60C9858646BC1368948C0  : public RuntimeObject
{
	// System.String Unity.Services.Analytics.Internal.AnalyticsForgetter::m_CollectUrl
	String_t* ___m_CollectUrl_0;
	// Unity.Services.Analytics.Internal.IPersistence Unity.Services.Analytics.Internal.AnalyticsForgetter::m_Persistence
	RuntimeObject* ___m_Persistence_1;
	// Unity.Services.Analytics.Internal.IWebRequestHelper Unity.Services.Analytics.Internal.AnalyticsForgetter::m_WebRequestHelper
	RuntimeObject* ___m_WebRequestHelper_2;
	// System.Byte[] Unity.Services.Analytics.Internal.AnalyticsForgetter::m_Event
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_Event_3;
	// System.Action Unity.Services.Analytics.Internal.AnalyticsForgetter::m_Callback
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_Callback_4;
	// Unity.Services.Analytics.Internal.AnalyticsForgetter/DataDeletionStatus Unity.Services.Analytics.Internal.AnalyticsForgetter::m_DeletionStatus
	int32_t ___m_DeletionStatus_5;
	// Unity.Services.Analytics.Internal.IWebRequest Unity.Services.Analytics.Internal.AnalyticsForgetter::m_Request
	RuntimeObject* ___m_Request_6;
};

// Unity.Services.Analytics.AnalyticsService
struct AnalyticsService_t995B7CE25709A192F70345B0335516F282C0CE7B  : public RuntimeObject
{
};

struct AnalyticsService_t995B7CE25709A192F70345B0335516F282C0CE7B_StaticFields
{
	// Unity.Services.Analytics.AnalyticsServiceInstance Unity.Services.Analytics.AnalyticsService::internalInstance
	AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* ___internalInstance_0;
};

// Unity.Services.Analytics.AnalyticsServiceSystemCalls
struct AnalyticsServiceSystemCalls_tA75EFB9A19C30CBFEABF5BF0578E1636083AC745  : public RuntimeObject
{
};

// Unity.Services.Analytics.Internal.AnalyticsUserIdServiceComponent
struct AnalyticsUserIdServiceComponent_t2A2B82EF9FBA795836189A3A0A3274A87D4E1B9B  : public RuntimeObject
{
	// Unity.Services.Analytics.IAnalyticsService Unity.Services.Analytics.Internal.AnalyticsUserIdServiceComponent::m_AnalyticsService
	RuntimeObject* ___m_AnalyticsService_0;
};

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0  : public RuntimeObject
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jclass_2;
};

struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_StaticFields
{
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;
};
struct Il2CppArrayBounds;

// System.IO.BinaryWriter
struct BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E  : public RuntimeObject
{
	// System.IO.Stream System.IO.BinaryWriter::OutStream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___OutStream_1;
	// System.Byte[] System.IO.BinaryWriter::_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer_2;
	// System.Text.Encoding System.IO.BinaryWriter::_encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ____encoding_3;
	// System.Text.Encoder System.IO.BinaryWriter::_encoder
	Encoder_tAF9067231A76315584BDF4CD27990E2F485A78FA* ____encoder_4;
	// System.Boolean System.IO.BinaryWriter::_leaveOpen
	bool ____leaveOpen_5;
	// System.Byte[] System.IO.BinaryWriter::_largeByteBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____largeByteBuffer_6;
	// System.Int32 System.IO.BinaryWriter::_maxChars
	int32_t ____maxChars_7;
};

struct BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E_StaticFields
{
	// System.IO.BinaryWriter System.IO.BinaryWriter::Null
	BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___Null_0;
};

// Unity.Services.Analytics.Internal.BufferSystemCalls
struct BufferSystemCalls_t30CA07BE3DD2F29E9F7036ED838F0C92A50480F1  : public RuntimeObject
{
};

// Unity.Services.Analytics.Internal.BufferX
struct BufferX_t61043C3179F78166341D64689A662C738496055C  : public RuntimeObject
{
	// System.Byte[] Unity.Services.Analytics.Internal.BufferX::k_WorkingBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___k_WorkingBuffer_0;
	// System.Char[] Unity.Services.Analytics.Internal.BufferX::k_WorkingCharacterBuffer
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___k_WorkingCharacterBuffer_1;
	// System.Byte[] Unity.Services.Analytics.Internal.BufferX::k_BufferHeader
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___k_BufferHeader_2;
	// System.Byte[] Unity.Services.Analytics.Internal.BufferX::k_HeaderEventName
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___k_HeaderEventName_3;
	// System.Byte[] Unity.Services.Analytics.Internal.BufferX::k_HeaderUserName
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___k_HeaderUserName_4;
	// System.Byte[] Unity.Services.Analytics.Internal.BufferX::k_HeaderSessionID
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___k_HeaderSessionID_5;
	// System.Byte[] Unity.Services.Analytics.Internal.BufferX::k_HeaderEventUUID
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___k_HeaderEventUUID_6;
	// System.Byte[] Unity.Services.Analytics.Internal.BufferX::k_HeaderTimestamp
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___k_HeaderTimestamp_7;
	// System.Byte[] Unity.Services.Analytics.Internal.BufferX::k_HeaderEventVersion
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___k_HeaderEventVersion_8;
	// System.Byte[] Unity.Services.Analytics.Internal.BufferX::k_HeaderInstallationID
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___k_HeaderInstallationID_9;
	// System.Byte[] Unity.Services.Analytics.Internal.BufferX::k_HeaderPlayerID
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___k_HeaderPlayerID_10;
	// System.Byte[] Unity.Services.Analytics.Internal.BufferX::k_HeaderOpenEventParams
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___k_HeaderOpenEventParams_11;
	// System.Byte[] Unity.Services.Analytics.Internal.BufferX::k_CloseEvent
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___k_CloseEvent_12;
	// System.Byte Unity.Services.Analytics.Internal.BufferX::k_Quote
	uint8_t ___k_Quote_13;
	// System.Byte[] Unity.Services.Analytics.Internal.BufferX::k_QuoteColon
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___k_QuoteColon_14;
	// System.Byte[] Unity.Services.Analytics.Internal.BufferX::k_QuoteComma
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___k_QuoteComma_15;
	// System.Byte[] Unity.Services.Analytics.Internal.BufferX::k_Comma
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___k_Comma_16;
	// System.Byte[] Unity.Services.Analytics.Internal.BufferX::k_OpenBrace
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___k_OpenBrace_17;
	// System.Byte[] Unity.Services.Analytics.Internal.BufferX::k_CloseBraceComma
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___k_CloseBraceComma_18;
	// System.Byte[] Unity.Services.Analytics.Internal.BufferX::k_OpenBracket
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___k_OpenBracket_19;
	// System.Byte[] Unity.Services.Analytics.Internal.BufferX::k_CloseBracketComma
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___k_CloseBracketComma_20;
	// System.Byte[] Unity.Services.Analytics.Internal.BufferX::k_True
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___k_True_21;
	// System.Byte[] Unity.Services.Analytics.Internal.BufferX::k_False
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___k_False_22;
	// Unity.Services.Analytics.Internal.IBufferSystemCalls Unity.Services.Analytics.Internal.BufferX::m_SystemCalls
	RuntimeObject* ___m_SystemCalls_23;
	// Unity.Services.Analytics.Internal.IDiskCache Unity.Services.Analytics.Internal.BufferX::m_DiskCache
	RuntimeObject* ___m_DiskCache_24;
	// Unity.Services.Analytics.Internal.IBufferIds Unity.Services.Analytics.Internal.BufferX::m_Ids
	RuntimeObject* ___m_Ids_25;
	// System.Collections.Generic.List`1<System.Int32> Unity.Services.Analytics.Internal.BufferX::m_EventEnds
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___m_EventEnds_26;
	// System.IO.MemoryStream Unity.Services.Analytics.Internal.BufferX::m_SpareBuffer
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* ___m_SpareBuffer_27;
	// System.IO.MemoryStream Unity.Services.Analytics.Internal.BufferX::m_Buffer
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* ___m_Buffer_28;
};

// Unity.Services.Analytics.Internal.Consent
struct Consent_tE59B226A06E74A69A39675158441582B2BBAFE1C  : public RuntimeObject
{
};

// Unity.Services.Analytics.Internal.ConsentTracker
struct ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4  : public RuntimeObject
{
	// Unity.Services.Analytics.Internal.IGeoAPI Unity.Services.Analytics.Internal.ConsentTracker::m_GeoAPI
	RuntimeObject* ___m_GeoAPI_0;
	// Unity.Services.Analytics.ICoreStatsHelper Unity.Services.Analytics.Internal.ConsentTracker::m_CoreStatsHelper
	RuntimeObject* ___m_CoreStatsHelper_1;
	// Unity.Services.Analytics.Internal.ConsentStatus Unity.Services.Analytics.Internal.ConsentTracker::<optInPiplConsentStatus>k__BackingField
	int32_t ___U3CoptInPiplConsentStatusU3Ek__BackingField_2;
	// Unity.Services.Analytics.Internal.ConsentStatus Unity.Services.Analytics.Internal.ConsentTracker::<optOutConsentStatus>k__BackingField
	int32_t ___U3CoptOutConsentStatusU3Ek__BackingField_3;
	// Unity.Services.Analytics.Internal.GeoIPResponse Unity.Services.Analytics.Internal.ConsentTracker::response
	GeoIPResponse_tADA05745323DD2374411BCB8CEC9EC086B4FE150* ___response_4;
};

// Unity.Services.Core.Internal.CoreRegistry
struct CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA  : public RuntimeObject
{
	// Unity.Services.Core.Internal.IPackageRegistry Unity.Services.Core.Internal.CoreRegistry::<PackageRegistry>k__BackingField
	RuntimeObject* ___U3CPackageRegistryU3Ek__BackingField_1;
	// Unity.Services.Core.Internal.IComponentRegistry Unity.Services.Core.Internal.CoreRegistry::<ComponentRegistry>k__BackingField
	RuntimeObject* ___U3CComponentRegistryU3Ek__BackingField_2;
};

struct CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA_StaticFields
{
	// Unity.Services.Core.Internal.CoreRegistry Unity.Services.Core.Internal.CoreRegistry::<Instance>k__BackingField
	CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* ___U3CInstanceU3Ek__BackingField_0;
};

// Unity.Services.Analytics.CoreStatsHelper
struct CoreStatsHelper_tBF3F119096A7ABBDDC9F22ACBF13FA25FCD166E6  : public RuntimeObject
{
};

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;
};

struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject* ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture_34;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name_37;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::s_UserPreferredCultureInfoInAppX
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX_38;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_39;
};
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// Unity.Services.Analytics.Data.DataGenerator
struct DataGenerator_t25BC607B3B6D456EAA5DC9C3F600C4B560800183  : public RuntimeObject
{
	// Unity.Services.Analytics.Internal.IBuffer Unity.Services.Analytics.Data.DataGenerator::m_Buffer
	RuntimeObject* ___m_Buffer_0;
};

// Unity.Services.Analytics.Platform.DeviceVolumeProvider
struct DeviceVolumeProvider_tCD637AE8853864FA7CE8E52A8C94F0336055A591  : public RuntimeObject
{
};

// Unity.Services.Analytics.Internal.DiskCache
struct DiskCache_tE19D214B0538F2CC9D59D4F827B480AEBCEF368D  : public RuntimeObject
{
	// System.String Unity.Services.Analytics.Internal.DiskCache::k_CacheFilePath
	String_t* ___k_CacheFilePath_0;
	// Unity.Services.Analytics.Internal.IFileSystemCalls Unity.Services.Analytics.Internal.DiskCache::k_SystemCalls
	RuntimeObject* ___k_SystemCalls_1;
	// System.Int64 Unity.Services.Analytics.Internal.DiskCache::k_CacheFileMaximumSize
	int64_t ___k_CacheFileMaximumSize_2;
};

// Unity.Services.Analytics.Internal.Dispatcher
struct Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE  : public RuntimeObject
{
	// Unity.Services.Analytics.Internal.IWebRequestHelper Unity.Services.Analytics.Internal.Dispatcher::m_WebRequestHelper
	RuntimeObject* ___m_WebRequestHelper_0;
	// System.String Unity.Services.Analytics.Internal.Dispatcher::m_CollectUrl
	String_t* ___m_CollectUrl_1;
	// Unity.Services.Analytics.Internal.IBuffer Unity.Services.Analytics.Internal.Dispatcher::m_DataBuffer
	RuntimeObject* ___m_DataBuffer_2;
	// Unity.Services.Analytics.Internal.IWebRequest Unity.Services.Analytics.Internal.Dispatcher::m_FlushRequest
	RuntimeObject* ___m_FlushRequest_3;
	// System.Int32 Unity.Services.Analytics.Internal.Dispatcher::<ConsecutiveFailedUploadCount>k__BackingField
	int32_t ___U3CConsecutiveFailedUploadCountU3Ek__BackingField_4;
	// System.Boolean Unity.Services.Analytics.Internal.Dispatcher::<FlushInProgress>k__BackingField
	bool ___U3CFlushInProgressU3Ek__BackingField_5;
	// System.Int32 Unity.Services.Analytics.Internal.Dispatcher::m_FlushBufferIndex
	int32_t ___m_FlushBufferIndex_6;
};

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_14;
};

struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_15;
};

// Unity.Services.Analytics.Internal.FileSystemCalls
struct FileSystemCalls_t1A2213109FA10AFB80C343E28A45F13F053970A3  : public RuntimeObject
{
};

// Unity.Services.Analytics.Internal.GeoAPI
struct GeoAPI_tDEC43B93D320DC5B81A4BD9F45491DD2E5D30287  : public RuntimeObject
{
	// System.String Unity.Services.Analytics.Internal.GeoAPI::m_PrivacyEndpoint
	String_t* ___m_PrivacyEndpoint_0;
};

// Unity.Services.Analytics.Internal.GeoIPResponse
struct GeoIPResponse_tADA05745323DD2374411BCB8CEC9EC086B4FE150  : public RuntimeObject
{
	// System.String Unity.Services.Analytics.Internal.GeoIPResponse::identifier
	String_t* ___identifier_0;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// Unity.Services.Analytics.Internal.PlayerPrefsPersistence
struct PlayerPrefsPersistence_tA41639170405D0B663305EBE5D18CD5E27583DEF  : public RuntimeObject
{
};

// Unity.Services.Analytics.Platform.Runtime
struct Runtime_t3C6559AA91E989CFC20597C28EF3BD73C3CCFB8E  : public RuntimeObject
{
};

// Unity.Services.Analytics.SdkVersion
struct SdkVersion_t0BDC7D3E9F8175012EACBDB69FD9394AC2679BB8  : public RuntimeObject
{
};

struct SdkVersion_t0BDC7D3E9F8175012EACBDB69FD9394AC2679BB8_StaticFields
{
	// System.String Unity.Services.Analytics.SdkVersion::SDK_VERSION
	String_t* ___SDK_VERSION_0;
};

// Unity.Services.Analytics.Internal.StandardEventServiceComponent
struct StandardEventServiceComponent_t587EC5F02461A7AD305539BAB07A2B93FD56E2BB  : public RuntimeObject
{
	// Unity.Services.Core.Configuration.Internal.IProjectConfiguration Unity.Services.Analytics.Internal.StandardEventServiceComponent::m_Configuration
	RuntimeObject* ___m_Configuration_0;
	// Unity.Services.Analytics.IUnstructuredEventRecorder Unity.Services.Analytics.Internal.StandardEventServiceComponent::m_AnalyticsService
	RuntimeObject* ___m_AnalyticsService_1;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.StringComparer
struct StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06  : public RuntimeObject
{
};

struct StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_StaticFields
{
	// System.CultureAwareComparer System.StringComparer::s_invariantCulture
	CultureAwareComparer_t5822A6535A6EB4C448D1B7736067D1188BAEE8CD* ___s_invariantCulture_0;
	// System.CultureAwareComparer System.StringComparer::s_invariantCultureIgnoreCase
	CultureAwareComparer_t5822A6535A6EB4C448D1B7736067D1188BAEE8CD* ___s_invariantCultureIgnoreCase_1;
	// System.OrdinalCaseSensitiveComparer System.StringComparer::s_ordinal
	OrdinalCaseSensitiveComparer_t581CA7CB51DCF00B6012A697A4B4B3067144521A* ___s_ordinal_2;
	// System.OrdinalIgnoreCaseComparer System.StringComparer::s_ordinalIgnoreCase
	OrdinalIgnoreCaseComparer_t8BAE11990A4C855D3BCBBFB42F4EF8D45088FBB0* ___s_ordinalIgnoreCase_3;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_23;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_26;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_24;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_25;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_27;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_30;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_31;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_32;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_33;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_34;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_36;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_37;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_28;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_29;
};

// Unity.Services.Analytics.TransactionCurrencyConverter
struct TransactionCurrencyConverter_t3296A312BAFE7A8FC56182C3D53BEFD1D9474133  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Unity.Services.Analytics.TransactionCurrencyConverter::m_Iso4217CurrencyMinorUnits
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___m_Iso4217CurrencyMinorUnits_0;
};

// Ua2CoreInitializeCallback
struct Ua2CoreInitializeCallback_t20D7CCCEDAF24D8AD75CBE5991731A72C70418BD  : public RuntimeObject
{
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// Unity.Services.Analytics.Internal.WebRequestHelper
struct WebRequestHelper_t90785D95A7FBCCA284192A9CB95D1DA845D57E71  : public RuntimeObject
{
	// System.String Unity.Services.Analytics.Internal.WebRequestHelper::k_ClientIdHeaderValue
	String_t* ___k_ClientIdHeaderValue_0;
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// Unity.Services.Analytics.Internal.WebRequestHelper/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_tC549DEE19D3A36FBBE1510B664CF1CB349E507F5  : public RuntimeObject
{
	// System.Action`1<System.Int64> Unity.Services.Analytics.Internal.WebRequestHelper/<>c__DisplayClass2_0::onCompleted
	Action_1_tBB5A52E9AEFBC4F0C8D94D39CAD16BCB6B8B5929* ___onCompleted_0;
	// UnityEngine.Networking.UnityWebRequestAsyncOperation Unity.Services.Analytics.Internal.WebRequestHelper/<>c__DisplayClass2_0::requestOp
	UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* ___requestOp_1;
};

// Unity.Collections.NativeArray`1<System.Byte>
struct NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// System.Nullable`1<System.Double>
struct Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	double ___value_1;
};

// System.Nullable`1<System.Int64>
struct Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int64_t ___value_1;
};

// System.Nullable`1<System.Single>
struct Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	float ___value_1;
};

// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03  : public AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0
{
};

// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF 
{
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_defaultContextAction_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// Unity.Services.Core.Internal.CoreRegistration
struct CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 
{
	// Unity.Services.Core.Internal.IPackageRegistry Unity.Services.Core.Internal.CoreRegistration::m_Registry
	RuntimeObject* ___m_Registry_0;
	// System.Int32 Unity.Services.Core.Internal.CoreRegistration::m_PackageHash
	int32_t ___m_PackageHash_1;
};
// Native definition for P/Invoke marshalling of Unity.Services.Core.Internal.CoreRegistration
struct CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581_marshaled_pinvoke
{
	RuntimeObject* ___m_Registry_0;
	int32_t ___m_PackageHash_1;
};
// Native definition for COM marshalling of Unity.Services.Core.Internal.CoreRegistration
struct CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581_marshaled_com
{
	RuntimeObject* ___m_Registry_0;
	int32_t ___m_PackageHash_1;
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Guid
struct Guid_t 
{
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;
};

struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.OrdinalComparer
struct OrdinalComparer_tBB06915E213A5D4C8C617ED5478E8BF30C2B2170  : public StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06
{
	// System.Boolean System.OrdinalComparer::_ignoreCase
	bool ____ignoreCase_4;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_3;
};

struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 
{
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.TaskAwaiter::m_task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshaled_pinvoke
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshaled_com
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>
struct AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* ___s_defaultResultTask_0;
};

// Unity.Services.Analytics.AnalyticsServiceInstance
struct AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62  : public RuntimeObject
{
	// System.TimeSpan Unity.Services.Analytics.AnalyticsServiceInstance::k_BackgroundSessionRefreshPeriod
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___k_BackgroundSessionRefreshPeriod_2;
	// Unity.Services.Analytics.Data.StdCommonParams Unity.Services.Analytics.AnalyticsServiceInstance::m_CommonParams
	StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* ___m_CommonParams_3;
	// Unity.Services.Authentication.Internal.IPlayerId Unity.Services.Analytics.AnalyticsServiceInstance::m_PlayerId
	RuntimeObject* ___m_PlayerId_4;
	// Unity.Services.Core.Device.Internal.IInstallationId Unity.Services.Analytics.AnalyticsServiceInstance::m_InstallId
	RuntimeObject* ___m_InstallId_5;
	// Unity.Services.Analytics.Data.IDataGenerator Unity.Services.Analytics.AnalyticsServiceInstance::m_DataGenerator
	RuntimeObject* ___m_DataGenerator_6;
	// Unity.Services.Analytics.ICoreStatsHelper Unity.Services.Analytics.AnalyticsServiceInstance::m_CoreStatsHelper
	RuntimeObject* ___m_CoreStatsHelper_7;
	// Unity.Services.Analytics.Internal.IConsentTracker Unity.Services.Analytics.AnalyticsServiceInstance::m_ConsentTracker
	RuntimeObject* ___m_ConsentTracker_8;
	// Unity.Services.Analytics.Internal.IDispatcher Unity.Services.Analytics.AnalyticsServiceInstance::m_DataDispatcher
	RuntimeObject* ___m_DataDispatcher_9;
	// Unity.Services.Analytics.Internal.IAnalyticsForgetter Unity.Services.Analytics.AnalyticsServiceInstance::m_AnalyticsForgetter
	RuntimeObject* ___m_AnalyticsForgetter_10;
	// Unity.Services.Core.Configuration.Internal.IExternalUserId Unity.Services.Analytics.AnalyticsServiceInstance::m_CustomUserId
	RuntimeObject* ___m_CustomUserId_11;
	// Unity.Services.Analytics.IAnalyticsServiceSystemCalls Unity.Services.Analytics.AnalyticsServiceInstance::m_SystemCalls
	RuntimeObject* ___m_SystemCalls_12;
	// Unity.Services.Analytics.IAnalyticsContainer Unity.Services.Analytics.AnalyticsServiceInstance::m_Container
	RuntimeObject* ___m_Container_13;
	// Unity.Services.Analytics.Internal.IBuffer Unity.Services.Analytics.AnalyticsServiceInstance::m_DataBuffer
	RuntimeObject* ___m_DataBuffer_14;
	// System.String Unity.Services.Analytics.AnalyticsServiceInstance::<SessionID>k__BackingField
	String_t* ___U3CSessionIDU3Ek__BackingField_15;
	// System.Int32 Unity.Services.Analytics.AnalyticsServiceInstance::m_BufferLengthAtLastGameRunning
	int32_t ___m_BufferLengthAtLastGameRunning_16;
	// System.DateTime Unity.Services.Analytics.AnalyticsServiceInstance::m_ApplicationPauseTime
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___m_ApplicationPauseTime_17;
	// System.Boolean Unity.Services.Analytics.AnalyticsServiceInstance::m_IsActive
	bool ___m_IsActive_18;
	// Unity.Services.Analytics.AnalyticsServiceInstance/ConsentFlow Unity.Services.Analytics.AnalyticsServiceInstance::m_ConsentFlow
	int32_t ___m_ConsentFlow_19;
	// System.Boolean Unity.Services.Analytics.AnalyticsServiceInstance::m_StartUpEventsRecorded
	bool ___m_StartUpEventsRecorded_20;
	// Unity.Services.Analytics.TransactionCurrencyConverter Unity.Services.Analytics.AnalyticsServiceInstance::converter
	TransactionCurrencyConverter_t3296A312BAFE7A8FC56182C3D53BEFD1D9474133* ___converter_21;
};

// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* ___m_completeCallback_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.IO.FileStream
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Byte[] System.IO.FileStream::buf
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_6;
	// System.String System.IO.FileStream::name
	String_t* ___name_7;
	// Microsoft.Win32.SafeHandles.SafeFileHandle System.IO.FileStream::safeHandle
	SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E* ___safeHandle_8;
	// System.Boolean System.IO.FileStream::isExposed
	bool ___isExposed_9;
	// System.Int64 System.IO.FileStream::append_startpos
	int64_t ___append_startpos_10;
	// System.IO.FileAccess System.IO.FileStream::access
	int32_t ___access_11;
	// System.Boolean System.IO.FileStream::owner
	bool ___owner_12;
	// System.Boolean System.IO.FileStream::async
	bool ___async_13;
	// System.Boolean System.IO.FileStream::canseek
	bool ___canseek_14;
	// System.Boolean System.IO.FileStream::anonymous
	bool ___anonymous_15;
	// System.Boolean System.IO.FileStream::buf_dirty
	bool ___buf_dirty_16;
	// System.Int32 System.IO.FileStream::buf_size
	int32_t ___buf_size_17;
	// System.Int32 System.IO.FileStream::buf_length
	int32_t ___buf_length_18;
	// System.Int32 System.IO.FileStream::buf_offset
	int32_t ___buf_offset_19;
	// System.Int64 System.IO.FileStream::buf_start
	int64_t ___buf_start_20;
};

struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_StaticFields
{
	// System.Byte[] System.IO.FileStream::buf_recycle
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_recycle_4;
	// System.Object System.IO.FileStream::buf_recycle_lock
	RuntimeObject* ___buf_recycle_lock_5;
};

// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer_4;
	// System.Int32 System.IO.MemoryStream::_origin
	int32_t ____origin_5;
	// System.Int32 System.IO.MemoryStream::_position
	int32_t ____position_6;
	// System.Int32 System.IO.MemoryStream::_length
	int32_t ____length_7;
	// System.Int32 System.IO.MemoryStream::_capacity
	int32_t ____capacity_8;
	// System.Boolean System.IO.MemoryStream::_expandable
	bool ____expandable_9;
	// System.Boolean System.IO.MemoryStream::_writable
	bool ____writable_10;
	// System.Boolean System.IO.MemoryStream::_exposable
	bool ____exposable_11;
	// System.Boolean System.IO.MemoryStream::_isOpen
	bool ____isOpen_12;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.MemoryStream::_lastReadTask
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ____lastReadTask_13;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.OrdinalCaseSensitiveComparer
struct OrdinalCaseSensitiveComparer_t581CA7CB51DCF00B6012A697A4B4B3067144521A  : public OrdinalComparer_tBB06915E213A5D4C8C617ED5478E8BF30C2B2170
{
};

// Unity.Services.Analytics.Data.StdCommonParams
struct StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701  : public RuntimeObject
{
	// System.String Unity.Services.Analytics.Data.StdCommonParams::<GameStoreID>k__BackingField
	String_t* ___U3CGameStoreIDU3Ek__BackingField_0;
	// System.String Unity.Services.Analytics.Data.StdCommonParams::<GameBundleID>k__BackingField
	String_t* ___U3CGameBundleIDU3Ek__BackingField_1;
	// System.String Unity.Services.Analytics.Data.StdCommonParams::<Platform>k__BackingField
	String_t* ___U3CPlatformU3Ek__BackingField_2;
	// System.String Unity.Services.Analytics.Data.StdCommonParams::<UasUserID>k__BackingField
	String_t* ___U3CUasUserIDU3Ek__BackingField_3;
	// System.String Unity.Services.Analytics.Data.StdCommonParams::<Idfv>k__BackingField
	String_t* ___U3CIdfvU3Ek__BackingField_4;
	// System.Nullable`1<System.Double> Unity.Services.Analytics.Data.StdCommonParams::<DeviceVolume>k__BackingField
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___U3CDeviceVolumeU3Ek__BackingField_5;
	// System.Nullable`1<System.Double> Unity.Services.Analytics.Data.StdCommonParams::<BatteryLoad>k__BackingField
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___U3CBatteryLoadU3Ek__BackingField_6;
	// System.String Unity.Services.Analytics.Data.StdCommonParams::<BuildGuuid>k__BackingField
	String_t* ___U3CBuildGuuidU3Ek__BackingField_7;
	// System.String Unity.Services.Analytics.Data.StdCommonParams::<ClientVersion>k__BackingField
	String_t* ___U3CClientVersionU3Ek__BackingField_8;
	// System.String Unity.Services.Analytics.Data.StdCommonParams::<UserCountry>k__BackingField
	String_t* ___U3CUserCountryU3Ek__BackingField_9;
	// System.String Unity.Services.Analytics.Data.StdCommonParams::<ProjectID>k__BackingField
	String_t* ___U3CProjectIDU3Ek__BackingField_10;
};

// UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.UploadHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 
{
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::m_builder
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder_1;
};

struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_StaticFields
{
	// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::s_cachedCompleted
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* ___s_cachedCompleted_0;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_marshaled_pinvoke
{
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_marshaled_com
{
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder_1;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// Unity.Services.Core.RequestFailedException
struct RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00  : public Exception_t
{
	// System.Int32 Unity.Services.Core.RequestFailedException::<ErrorCode>k__BackingField
	int32_t ___U3CErrorCodeU3Ek__BackingField_18;
};

// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.UnityWebRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::m_DownloadHandler
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* ___m_DownloadHandler_1;
	// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::m_UploadHandler
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* ___m_UploadHandler_2;
	// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::m_CertificateHandler
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804* ___m_CertificateHandler_3;
	// System.Uri UnityEngine.Networking.UnityWebRequest::m_Uri
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeCertificateHandlerOnDispose>k__BackingField
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke ___m_DownloadHandler_1;
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke ___m_UploadHandler_2;
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke ___m_CertificateHandler_3;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com* ___m_DownloadHandler_1;
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com* ___m_UploadHandler_2;
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com* ___m_CertificateHandler_3;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};

// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C  : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C
{
	// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAsyncOperation::<webRequest>k__BackingField
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshaled_pinvoke : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke
{
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshaled_com : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com
{
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com* ___U3CwebRequestU3Ek__BackingField_2;
};

// UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A  : public UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6
{
	// Unity.Collections.NativeArray`1<System.Byte> UnityEngine.Networking.UploadHandlerRaw::m_Payload
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_Payload_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_marshaled_pinvoke : public UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke
{
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_Payload_1;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_marshaled_com : public UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com
{
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_Payload_1;
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB  : public MulticastDelegate_t
{
};

// System.Action`1<System.Int64>
struct Action_1_tBB5A52E9AEFBC4F0C8D94D39CAD16BCB6B8B5929  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// Unity.Services.Analytics.Internal.AnalyticsWebRequest
struct AnalyticsWebRequest_t2851A3E58826329B4D5AE9A1898AD98EF26DEEFA  : public UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Unity.Services.Analytics.ConsentCheckException
struct ConsentCheckException_t96E7054ECB013548EA92EEFFFACAB143D5A86B7D  : public RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00
{
	// Unity.Services.Analytics.ConsentCheckExceptionReason Unity.Services.Analytics.ConsentCheckException::<Reason>k__BackingField
	int32_t ___U3CReasonU3Ek__BackingField_19;
};

// Ua2CoreInitializeCallback/<Initialize>d__2
struct U3CInitializeU3Ed__2_tE70F0976A2CAD0E2F0A8E8462D49D2EFA9AB281F  : public RuntimeObject
{
	// System.Int32 Ua2CoreInitializeCallback/<Initialize>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Ua2CoreInitializeCallback/<Initialize>d__2::<>t__builder
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder_1;
	// Unity.Services.Core.Internal.CoreRegistry Ua2CoreInitializeCallback/<Initialize>d__2::registry
	CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* ___registry_2;
	// Ua2CoreInitializeCallback Ua2CoreInitializeCallback/<Initialize>d__2::<>4__this
	Ua2CoreInitializeCallback_t20D7CCCEDAF24D8AD75CBE5991731A72C70418BD* ___U3CU3E4__this_3;
	// Unity.Services.Core.Configuration.Internal.ICloudProjectId Ua2CoreInitializeCallback/<Initialize>d__2::<cloudProjectId>5__1
	RuntimeObject* ___U3CcloudProjectIdU3E5__1_4;
	// Unity.Services.Core.Device.Internal.IInstallationId Ua2CoreInitializeCallback/<Initialize>d__2::<installationId>5__2
	RuntimeObject* ___U3CinstallationIdU3E5__2_5;
	// Unity.Services.Authentication.Internal.IPlayerId Ua2CoreInitializeCallback/<Initialize>d__2::<playerId>5__3
	RuntimeObject* ___U3CplayerIdU3E5__3_6;
	// Unity.Services.Core.Environments.Internal.IEnvironments Ua2CoreInitializeCallback/<Initialize>d__2::<environments>5__4
	RuntimeObject* ___U3CenvironmentsU3E5__4_7;
	// Unity.Services.Core.Configuration.Internal.IExternalUserId Ua2CoreInitializeCallback/<Initialize>d__2::<customUserId>5__5
	RuntimeObject* ___U3CcustomUserIdU3E5__5_8;
	// Unity.Services.Analytics.CoreStatsHelper Ua2CoreInitializeCallback/<Initialize>d__2::<coreStatsHelper>5__6
	CoreStatsHelper_tBF3F119096A7ABBDDC9F22ACBF13FA25FCD166E6* ___U3CcoreStatsHelperU3E5__6_9;
	// Unity.Services.Analytics.Internal.ConsentTracker Ua2CoreInitializeCallback/<Initialize>d__2::<consentTracker>5__7
	ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* ___U3CconsentTrackerU3E5__7_10;
	// System.String Ua2CoreInitializeCallback/<Initialize>d__2::<projectId>5__8
	String_t* ___U3CprojectIdU3E5__8_11;
	// System.String Ua2CoreInitializeCallback/<Initialize>d__2::<collectUrl>5__9
	String_t* ___U3CcollectUrlU3E5__9_12;
	// Unity.Services.Analytics.Internal.BufferX Ua2CoreInitializeCallback/<Initialize>d__2::<buffer>5__10
	BufferX_t61043C3179F78166341D64689A662C738496055C* ___U3CbufferU3E5__10_13;
	// Unity.Services.Analytics.AnalyticsContainer Ua2CoreInitializeCallback/<Initialize>d__2::<containerObject>5__11
	AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1* ___U3CcontainerObjectU3E5__11_14;
	// Unity.Services.Analytics.Internal.WebRequestHelper Ua2CoreInitializeCallback/<Initialize>d__2::<webRequestHelper>5__12
	WebRequestHelper_t90785D95A7FBCCA284192A9CB95D1DA845D57E71* ___U3CwebRequestHelperU3E5__12_15;
	// Unity.Services.Analytics.Internal.Dispatcher Ua2CoreInitializeCallback/<Initialize>d__2::<dispatcher>5__13
	Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE* ___U3CdispatcherU3E5__13_16;
	// Unity.Services.Analytics.Internal.StandardEventServiceComponent Ua2CoreInitializeCallback/<Initialize>d__2::<standardEventComponent>5__14
	StandardEventServiceComponent_t587EC5F02461A7AD305539BAB07A2B93FD56E2BB* ___U3CstandardEventComponentU3E5__14_17;
	// Unity.Services.Analytics.Internal.AnalyticsUserIdServiceComponent Ua2CoreInitializeCallback/<Initialize>d__2::<userIdComponent>5__15
	AnalyticsUserIdServiceComponent_t2A2B82EF9FBA795836189A3A0A3274A87D4E1B9B* ___U3CuserIdComponentU3E5__15_18;
	// System.Runtime.CompilerServices.TaskAwaiter Ua2CoreInitializeCallback/<Initialize>d__2::<>u__1
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__1_19;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Unity.Services.Analytics.AnalyticsContainer
struct AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Unity.Services.Analytics.AnalyticsContainer::m_AutoFlushTime
	float ___m_AutoFlushTime_8;
	// System.Single Unity.Services.Analytics.AnalyticsContainer::m_GameRunningTime
	float ___m_GameRunningTime_9;
	// Unity.Services.Analytics.AnalyticsServiceInstance Unity.Services.Analytics.AnalyticsContainer::m_Service
	AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* ___m_Service_10;
};

struct AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_StaticFields
{
	// System.Boolean Unity.Services.Analytics.AnalyticsContainer::s_Created
	bool ___s_Created_6;
	// UnityEngine.GameObject Unity.Services.Analytics.AnalyticsContainer::s_Container
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___s_Container_7;
	// Unity.Services.Analytics.AnalyticsContainer Unity.Services.Analytics.AnalyticsContainer::<Instance>k__BackingField
	AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1* ___U3CInstanceU3Ek__BackingField_11;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};


// Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CoreRegistry::RegisterPackage<System.Object>(TPackage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 CoreRegistry_RegisterPackage_TisRuntimeObject_m5DF8BA5ABD5476A91872308A910C81D92F1FC6DD_gshared (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* __this, RuntimeObject* ___package0, const RuntimeMethod* method) ;
// Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CoreRegistration::DependsOn<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 CoreRegistration_DependsOn_TisRuntimeObject_m3400ECC31E4225994DD0AEDDC45B11A61E95559C_gshared (CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581* __this, const RuntimeMethod* method) ;
// Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CoreRegistration::OptionallyDependsOn<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 CoreRegistration_OptionallyDependsOn_TisRuntimeObject_m665878F2DB1DB7696E4B4AB9F508D27F40DCBFE5_gshared (CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581* __this, const RuntimeMethod* method) ;
// Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CoreRegistration::ProvidesComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 CoreRegistration_ProvidesComponent_TisRuntimeObject_mBB6FDBE4AAE276784D193AB900F392199F177650_gshared (CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<System.Object>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisRuntimeObject_mEFE065A20533413CD8BB8FAEAF761102588337FB_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, RuntimeObject** ___stateMachine0, const RuntimeMethod* method) ;
// TComponent Unity.Services.Core.Internal.CoreRegistry::GetServiceComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CoreRegistry_GetServiceComponent_TisRuntimeObject_m6C2601CB56CD9AE5154E543B9AA87E10AFCA875C_gshared (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.CoreRegistry::RegisterServiceComponent<System.Object>(TComponent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreRegistry_RegisterServiceComponent_TisRuntimeObject_m619D1536EFA7133E95AF878679EFDA3A9CFBC67F_gshared (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* __this, RuntimeObject* ___component0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,System.Object>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisRuntimeObject_mA57D17CC22941935FA487582A05C7D7807AC9DCF_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, RuntimeObject** ___stateMachine1, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Single>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_gshared_inline (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Single>::GetValueOrDefault()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_gshared_inline (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Double>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF_gshared (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, double ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m89AC42CD88BC0ED965D36B7028EF3DE23D290E1D_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___comparer0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m63897227AFA7035F1772315ABBBE7FD0A250E10C_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___key0, int32_t ___value1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_Call_TisRuntimeObject_mA5AF1A9E0463CE91F0ACB6AC2FE0C1922B579EF7_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Int32>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Single>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420_gshared (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, float ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Double>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_gshared_inline (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Double>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1_gshared (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Int64>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_gshared (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, int64_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Int64>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mC0FC430617EB8A9B54D1632C5BD95979ED5C2C2A_gshared (Action_1_tBB5A52E9AEFBC4F0C8D94D39CAD16BCB6B8B5929* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Int64>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_gshared_inline (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, const RuntimeMethod* method) ;
// System.String System.Nullable`1<System.Int64>::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Nullable_1_ToString_m04B6938F577DFC70D695A65C381A5ABCBC441248_gshared (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m95629806F31CF369D937590912E0B6A53FF7C587_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___index0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::RemoveRange(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_m1E69C4C8438AA5D7E05C2936C79C01D96F89BE68_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___index0, int32_t ___count1, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Int64>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mE4800C6D733A4CDE721FD3D8B4E95319B5C64E9E_gshared_inline (Action_1_tBB5A52E9AEFBC4F0C8D94D39CAD16BCB6B8B5929* __this, int64_t ___obj0, const RuntimeMethod* method) ;

// Unity.Services.Core.Internal.CoreRegistry Unity.Services.Core.Internal.CoreRegistry::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* CoreRegistry_get_Instance_m3837829F955A1E5F79A3B6A5023C1E8DEFB22FB2_inline (const RuntimeMethod* method) ;
// System.Void Ua2CoreInitializeCallback::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ua2CoreInitializeCallback__ctor_m096A57E67DE0D5E40E7AB84CF3935A5D7DD898CE (Ua2CoreInitializeCallback_t20D7CCCEDAF24D8AD75CBE5991731A72C70418BD* __this, const RuntimeMethod* method) ;
// Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CoreRegistry::RegisterPackage<Ua2CoreInitializeCallback>(TPackage)
inline CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 CoreRegistry_RegisterPackage_TisUa2CoreInitializeCallback_t20D7CCCEDAF24D8AD75CBE5991731A72C70418BD_m2D03E607E78DEFB5521CD83B02846C48D6EF4F0E (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* __this, Ua2CoreInitializeCallback_t20D7CCCEDAF24D8AD75CBE5991731A72C70418BD* ___package0, const RuntimeMethod* method)
{
	return ((  CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 (*) (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA*, Ua2CoreInitializeCallback_t20D7CCCEDAF24D8AD75CBE5991731A72C70418BD*, const RuntimeMethod*))CoreRegistry_RegisterPackage_TisRuntimeObject_m5DF8BA5ABD5476A91872308A910C81D92F1FC6DD_gshared)(__this, ___package0, method);
}
// Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CoreRegistration::DependsOn<Unity.Services.Core.Device.Internal.IInstallationId>()
inline CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 CoreRegistration_DependsOn_TisIInstallationId_tCE6DEEEBAFABEB9EC621BD1646D82BC9D82BFB0C_mA93E2240E092DDA93C08F11936078CD15E581C91 (CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581* __this, const RuntimeMethod* method)
{
	return ((  CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 (*) (CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581*, const RuntimeMethod*))CoreRegistration_DependsOn_TisRuntimeObject_m3400ECC31E4225994DD0AEDDC45B11A61E95559C_gshared)(__this, method);
}
// Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CoreRegistration::DependsOn<Unity.Services.Core.Configuration.Internal.ICloudProjectId>()
inline CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 CoreRegistration_DependsOn_TisICloudProjectId_t366B66869ECC734B15C1F60633D2B998CD9231FE_mE5B2A026998399E51D853DF4B3D4F9AA85BF84D4 (CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581* __this, const RuntimeMethod* method)
{
	return ((  CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 (*) (CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581*, const RuntimeMethod*))CoreRegistration_DependsOn_TisRuntimeObject_m3400ECC31E4225994DD0AEDDC45B11A61E95559C_gshared)(__this, method);
}
// Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CoreRegistration::DependsOn<Unity.Services.Core.Environments.Internal.IEnvironments>()
inline CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 CoreRegistration_DependsOn_TisIEnvironments_t9DCAF0398EB856DBE771A9C2D7B120661D628CB7_mF32D3AEE8770313EFCC77D92013AF760CBABCD64 (CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581* __this, const RuntimeMethod* method)
{
	return ((  CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 (*) (CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581*, const RuntimeMethod*))CoreRegistration_DependsOn_TisRuntimeObject_m3400ECC31E4225994DD0AEDDC45B11A61E95559C_gshared)(__this, method);
}
// Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CoreRegistration::DependsOn<Unity.Services.Core.Configuration.Internal.IExternalUserId>()
inline CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 CoreRegistration_DependsOn_TisIExternalUserId_t50A07D7165D254D971AA529FFE55B4A595A75F25_mCABAC7BD58204E9E5B80544CF9D413AEC53772DD (CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581* __this, const RuntimeMethod* method)
{
	return ((  CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 (*) (CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581*, const RuntimeMethod*))CoreRegistration_DependsOn_TisRuntimeObject_m3400ECC31E4225994DD0AEDDC45B11A61E95559C_gshared)(__this, method);
}
// Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CoreRegistration::DependsOn<Unity.Services.Core.Configuration.Internal.IProjectConfiguration>()
inline CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 CoreRegistration_DependsOn_TisIProjectConfiguration_tB5A7516DEB869AD005431EC83C6E02221D2B60D2_mFE611D2FD196728ACC376EAB06D4F2664D8FDD10 (CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581* __this, const RuntimeMethod* method)
{
	return ((  CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 (*) (CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581*, const RuntimeMethod*))CoreRegistration_DependsOn_TisRuntimeObject_m3400ECC31E4225994DD0AEDDC45B11A61E95559C_gshared)(__this, method);
}
// Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CoreRegistration::OptionallyDependsOn<Unity.Services.Authentication.Internal.IPlayerId>()
inline CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 CoreRegistration_OptionallyDependsOn_TisIPlayerId_t6A7BAE55B4D78E87B15B9261828E897BAACBF913_m5F08ADC17E47CCBEEDC9C48CC64F5A475CCFD286 (CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581* __this, const RuntimeMethod* method)
{
	return ((  CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 (*) (CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581*, const RuntimeMethod*))CoreRegistration_OptionallyDependsOn_TisRuntimeObject_m665878F2DB1DB7696E4B4AB9F508D27F40DCBFE5_gshared)(__this, method);
}
// Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CoreRegistration::ProvidesComponent<Unity.Services.Core.Analytics.Internal.IAnalyticsStandardEventComponent>()
inline CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 CoreRegistration_ProvidesComponent_TisIAnalyticsStandardEventComponent_tF6FA10DAAE59FC2DD9C6441D6B2E8BDA6EDDA807_m4CCB17ADEC6343A3DE09DC770F1F49B45FFA4942 (CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581* __this, const RuntimeMethod* method)
{
	return ((  CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 (*) (CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581*, const RuntimeMethod*))CoreRegistration_ProvidesComponent_TisRuntimeObject_mBB6FDBE4AAE276784D193AB900F392199F177650_gshared)(__this, method);
}
// System.Void Ua2CoreInitializeCallback/<Initialize>d__2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeU3Ed__2__ctor_mF80996278CF224A8E8BCBA671EC37C34EC3BC9F1 (U3CInitializeU3Ed__2_tE70F0976A2CAD0E2F0A8E8462D49D2EFA9AB281F* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 AsyncTaskMethodBuilder_Create_m84CBB9FB50A2D132B0A549652557CBE01867A82B (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Ua2CoreInitializeCallback/<Initialize>d__2>(TStateMachine&)
inline void AsyncTaskMethodBuilder_Start_TisU3CInitializeU3Ed__2_tE70F0976A2CAD0E2F0A8E8462D49D2EFA9AB281F_m4F2966D39E9AA64C6E314B2A63CA169B3F8AFEFD (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CInitializeU3Ed__2_tE70F0976A2CAD0E2F0A8E8462D49D2EFA9AB281F** ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, U3CInitializeU3Ed__2_tE70F0976A2CAD0E2F0A8E8462D49D2EFA9AB281F**, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisRuntimeObject_mEFE065A20533413CD8BB8FAEAF761102588337FB_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncTaskMethodBuilder::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// TComponent Unity.Services.Core.Internal.CoreRegistry::GetServiceComponent<Unity.Services.Core.Configuration.Internal.ICloudProjectId>()
inline RuntimeObject* CoreRegistry_GetServiceComponent_TisICloudProjectId_t366B66869ECC734B15C1F60633D2B998CD9231FE_mF7458A4E56377FCF3301F3ECE3A64B8C709EB38F (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA*, const RuntimeMethod*))CoreRegistry_GetServiceComponent_TisRuntimeObject_m6C2601CB56CD9AE5154E543B9AA87E10AFCA875C_gshared)(__this, method);
}
// TComponent Unity.Services.Core.Internal.CoreRegistry::GetServiceComponent<Unity.Services.Core.Device.Internal.IInstallationId>()
inline RuntimeObject* CoreRegistry_GetServiceComponent_TisIInstallationId_tCE6DEEEBAFABEB9EC621BD1646D82BC9D82BFB0C_m154CDEFCDF91B08E20C3D0DAE197A8AD04AAE70F (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA*, const RuntimeMethod*))CoreRegistry_GetServiceComponent_TisRuntimeObject_m6C2601CB56CD9AE5154E543B9AA87E10AFCA875C_gshared)(__this, method);
}
// TComponent Unity.Services.Core.Internal.CoreRegistry::GetServiceComponent<Unity.Services.Authentication.Internal.IPlayerId>()
inline RuntimeObject* CoreRegistry_GetServiceComponent_TisIPlayerId_t6A7BAE55B4D78E87B15B9261828E897BAACBF913_mAA43670CFBC53A1BB132782BB187BE8BF0D90BEC (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA*, const RuntimeMethod*))CoreRegistry_GetServiceComponent_TisRuntimeObject_m6C2601CB56CD9AE5154E543B9AA87E10AFCA875C_gshared)(__this, method);
}
// TComponent Unity.Services.Core.Internal.CoreRegistry::GetServiceComponent<Unity.Services.Core.Environments.Internal.IEnvironments>()
inline RuntimeObject* CoreRegistry_GetServiceComponent_TisIEnvironments_t9DCAF0398EB856DBE771A9C2D7B120661D628CB7_mB14B4F5C7C715C037C3D0B96AD44CFBC570659AF (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA*, const RuntimeMethod*))CoreRegistry_GetServiceComponent_TisRuntimeObject_m6C2601CB56CD9AE5154E543B9AA87E10AFCA875C_gshared)(__this, method);
}
// TComponent Unity.Services.Core.Internal.CoreRegistry::GetServiceComponent<Unity.Services.Core.Configuration.Internal.IExternalUserId>()
inline RuntimeObject* CoreRegistry_GetServiceComponent_TisIExternalUserId_t50A07D7165D254D971AA529FFE55B4A595A75F25_m943FC6CF014F0065DD2E93EC1C7830093F6B1918 (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA*, const RuntimeMethod*))CoreRegistry_GetServiceComponent_TisRuntimeObject_m6C2601CB56CD9AE5154E543B9AA87E10AFCA875C_gshared)(__this, method);
}
// System.Void Unity.Services.Analytics.CoreStatsHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreStatsHelper__ctor_mD543DD28C5F258FC9B9BDD30D0192F8A7ECF9DF4 (CoreStatsHelper_tBF3F119096A7ABBDDC9F22ACBF13FA25FCD166E6* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Internal.ConsentTracker::.ctor(Unity.Services.Analytics.ICoreStatsHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentTracker__ctor_m478B76472BE051496CB2D8EE77D91DED3D332E5A (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, RuntimeObject* ___coreStatsHelper0, const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_cloudProjectId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_cloudProjectId_mC4A9551019BB135B39D816F55A912CC2E9858F84 (const RuntimeMethod* method) ;
// System.String System.String::ToLowerInvariant()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLowerInvariant_mBE32C93DE27C5353FEA3FA654FC1DDBE3D0EB0F2 (String_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Internal.BufferSystemCalls::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferSystemCalls__ctor_m11A81CCB33E4BA6C679E191AB344CC3277C57B8C (BufferSystemCalls_t30CA07BE3DD2F29E9F7036ED838F0C92A50480F1* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Internal.FileSystemCalls::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileSystemCalls__ctor_mED48303E0E5ADE100ED297D2F82072B5162F3E2A (FileSystemCalls_t1A2213109FA10AFB80C343E28A45F13F053970A3* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Internal.DiskCache::.ctor(Unity.Services.Analytics.Internal.IFileSystemCalls)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiskCache__ctor_mBA8B9A9ECF83506913BC62A4782F490C2D300263 (DiskCache_tE19D214B0538F2CC9D59D4F827B480AEBCEF368D* __this, RuntimeObject* ___systemCalls0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Internal.BufferX::.ctor(Unity.Services.Analytics.Internal.IBufferSystemCalls,Unity.Services.Analytics.Internal.IDiskCache)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferX__ctor_mBBE8167311FE2989DC8174E1DFB53EB59276540C (BufferX_t61043C3179F78166341D64689A662C738496055C* __this, RuntimeObject* ___eventIdGenerator0, RuntimeObject* ___diskCache1, const RuntimeMethod* method) ;
// Unity.Services.Analytics.AnalyticsContainer Unity.Services.Analytics.AnalyticsContainer::CreateContainer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1* AnalyticsContainer_CreateContainer_m56826B5BF923F5DEE9B8A6CE1B935A191D0805B3 (const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Internal.WebRequestHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRequestHelper__ctor_m5F76E493A0C15311928DCCCCE293752DF3DA0CC9 (WebRequestHelper_t90785D95A7FBCCA284192A9CB95D1DA845D57E71* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Internal.Dispatcher::.ctor(Unity.Services.Analytics.Internal.IWebRequestHelper,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dispatcher__ctor_mDBB513D6B226DB1B13C536AE8FF0A531340D7208 (Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE* __this, RuntimeObject* ___webRequestHelper0, String_t* ___collectUrl1, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Data.DataGenerator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataGenerator__ctor_m659FA5FD00306B47B1A9D7461343C53EBCC0E85C (DataGenerator_t25BC607B3B6D456EAA5DC9C3F600C4B560800183* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Internal.PlayerPrefsPersistence::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefsPersistence__ctor_m3F310A297230AB1ED4FD0884D4AAC45082E3DD77 (PlayerPrefsPersistence_tA41639170405D0B663305EBE5D18CD5E27583DEF* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Internal.AnalyticsForgetter::.ctor(System.String,Unity.Services.Analytics.Internal.IPersistence,Unity.Services.Analytics.Internal.IWebRequestHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsForgetter__ctor_mB7EFEF4ADE978A9CAD976324BCC6BE797558DB0E (AnalyticsForgetter_tA1B9D1F48FB306C80BE60C9858646BC1368948C0* __this, String_t* ___collectUrl0, RuntimeObject* ___persistence1, RuntimeObject* ___webRequestHelper2, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.AnalyticsServiceSystemCalls::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsServiceSystemCalls__ctor_m0CE98AA41596DAEC3FE38B2657205368207C45D0 (AnalyticsServiceSystemCalls_tA75EFB9A19C30CBFEABF5BF0578E1636083AC745* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance::.ctor(Unity.Services.Analytics.Data.IDataGenerator,Unity.Services.Analytics.Internal.IBuffer,Unity.Services.Analytics.ICoreStatsHelper,Unity.Services.Analytics.Internal.IConsentTracker,Unity.Services.Analytics.Internal.IDispatcher,Unity.Services.Analytics.Internal.IAnalyticsForgetter,Unity.Services.Core.Device.Internal.IInstallationId,Unity.Services.Authentication.Internal.IPlayerId,System.String,Unity.Services.Core.Configuration.Internal.IExternalUserId,Unity.Services.Analytics.IAnalyticsServiceSystemCalls,Unity.Services.Analytics.IAnalyticsContainer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsServiceInstance__ctor_m5CC64E3971825C835A1EC42BC84478BD7E76758A (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, RuntimeObject* ___dataGenerator0, RuntimeObject* ___realBuffer1, RuntimeObject* ___coreStatsHelper2, RuntimeObject* ___consentTracker3, RuntimeObject* ___dispatcher4, RuntimeObject* ___forgetter5, RuntimeObject* ___installId6, RuntimeObject* ___playerId7, String_t* ___environment8, RuntimeObject* ___customAnalyticsId9, RuntimeObject* ___systemCalls10, RuntimeObject* ___container11, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Internal.BufferX::InjectIds(Unity.Services.Analytics.Internal.IBufferIds)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferX_InjectIds_m7ABB2F8A2226B6A8C1D36AA1BCC305C3B928717D (BufferX_t61043C3179F78166341D64689A662C738496055C* __this, RuntimeObject* ___ids0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.AnalyticsContainer::Initialize(Unity.Services.Analytics.AnalyticsServiceInstance)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsContainer_Initialize_m57C0D3C612C0DD90A98563A788EC6BE852555111 (AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1* __this, AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* ___service0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance::ResumeDataDeletionIfNecessary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsServiceInstance_ResumeDataDeletionIfNecessary_mA71BC424BAB3BDCA709948E63934C16562EA5AE6 (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) ;
// TComponent Unity.Services.Core.Internal.CoreRegistry::GetServiceComponent<Unity.Services.Core.Configuration.Internal.IProjectConfiguration>()
inline RuntimeObject* CoreRegistry_GetServiceComponent_TisIProjectConfiguration_tB5A7516DEB869AD005431EC83C6E02221D2B60D2_mF70AFB94326EDB167066B7836231B13A52150312 (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA*, const RuntimeMethod*))CoreRegistry_GetServiceComponent_TisRuntimeObject_m6C2601CB56CD9AE5154E543B9AA87E10AFCA875C_gshared)(__this, method);
}
// System.Void Unity.Services.Analytics.Internal.StandardEventServiceComponent::.ctor(Unity.Services.Core.Configuration.Internal.IProjectConfiguration,Unity.Services.Analytics.IUnstructuredEventRecorder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandardEventServiceComponent__ctor_mED8BAC8D2E1D561A6DCB4A1F35D4E7A60553CB87 (StandardEventServiceComponent_t587EC5F02461A7AD305539BAB07A2B93FD56E2BB* __this, RuntimeObject* ___configuration0, RuntimeObject* ___analyticsService1, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.CoreRegistry::RegisterServiceComponent<Unity.Services.Core.Analytics.Internal.IAnalyticsStandardEventComponent>(TComponent)
inline void CoreRegistry_RegisterServiceComponent_TisIAnalyticsStandardEventComponent_tF6FA10DAAE59FC2DD9C6441D6B2E8BDA6EDDA807_mBC81DFA289107F2FAEAC53E5B7785A2C65A76905 (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* __this, RuntimeObject* ___component0, const RuntimeMethod* method)
{
	((  void (*) (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA*, RuntimeObject*, const RuntimeMethod*))CoreRegistry_RegisterServiceComponent_TisRuntimeObject_m619D1536EFA7133E95AF878679EFDA3A9CFBC67F_gshared)(__this, ___component0, method);
}
// System.Void Unity.Services.Analytics.Internal.AnalyticsUserIdServiceComponent::.ctor(Unity.Services.Analytics.IAnalyticsService)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsUserIdServiceComponent__ctor_mC4D9557B2E49D4883E699F5F8034FE65740D334E (AnalyticsUserIdServiceComponent_t2A2B82EF9FBA795836189A3A0A3274A87D4E1B9B* __this, RuntimeObject* ___analyticsService0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.CoreRegistry::RegisterServiceComponent<Unity.Services.Core.Analytics.Internal.IAnalyticsUserId>(TComponent)
inline void CoreRegistry_RegisterServiceComponent_TisIAnalyticsUserId_t8C2078BBFD0D5C5EB8C45126592632FAAA1F2455_m24033D2421A44776EB156EB848C371BA5EEADBCC (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* __this, RuntimeObject* ___component0, const RuntimeMethod* method)
{
	((  void (*) (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA*, RuntimeObject*, const RuntimeMethod*))CoreRegistry_RegisterServiceComponent_TisRuntimeObject_m619D1536EFA7133E95AF878679EFDA3A9CFBC67F_gshared)(__this, ___component0, method);
}
// System.Threading.Tasks.Task System.Threading.Tasks.Task::get_CompletedTask()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_get_CompletedTask_mA35969BCF3240B8BA63918BA0C527F809C477E27_inline (const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter System.Threading.Tasks.Task::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8 (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Ua2CoreInitializeCallback/<Initialize>d__2>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CInitializeU3Ed__2_tE70F0976A2CAD0E2F0A8E8462D49D2EFA9AB281F_m6CA7288B39A328F23D802B24A3FD2765BA9F11F0 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3CInitializeU3Ed__2_tE70F0976A2CAD0E2F0A8E8462D49D2EFA9AB281F** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*, U3CInitializeU3Ed__2_tE70F0976A2CAD0E2F0A8E8462D49D2EFA9AB281F**, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisRuntimeObject_mA57D17CC22941935FA487582A05C7D7807AC9DCF_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, const RuntimeMethod* method) ;
// System.String Unity.Services.Analytics.AnalyticsServiceInstance::GetAnalyticsUserID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AnalyticsServiceInstance_GetAnalyticsUserID_m765E15065C72B9B1F8687C1129FD703048851A27 (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) ;
// System.String Unity.Services.Analytics.AnalyticsServiceInstance::get_SessionID()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AnalyticsServiceInstance_get_SessionID_m0BE34B73BEC292E51E9721811451EC359D9837F0_inline (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) ;
// System.TimeSpan System.TimeSpan::FromMinutes(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A TimeSpan_FromMinutes_m6A205525E41E41D13637359BA49AC7F3B23F714E (double ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.TransactionCurrencyConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransactionCurrencyConverter__ctor_m5ACA84E75A13698EAF50E70DF0FA9FA1EC7DBFFD (TransactionCurrencyConverter_t3296A312BAFE7A8FC56182C3D53BEFD1D9474133* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Data.StdCommonParams::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StdCommonParams__ctor_m973A163478DDB4C6DC21AF142FF5CF7E46D254CA (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_version()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_version_mD6AC9813ABCAD4D2A1F764F99E26068CA5B830F2 (const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Data.StdCommonParams::set_ClientVersion(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StdCommonParams_set_ClientVersion_m97C2B0A6328C2D38BF31BED3F628D0902F36A3D0_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Data.StdCommonParams::set_ProjectID(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StdCommonParams_set_ProjectID_m3119C391E989366B60D3A7FC4B4516A0ED285653_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_identifier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_identifier_m26B38D49FA10A46D61C1309769A59E9CF7460006 (const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Data.StdCommonParams::set_GameBundleID(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StdCommonParams_set_GameBundleID_m01625DC8750160BEF86073C96048B910A23B8FE6_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String Unity.Services.Analytics.Platform.Runtime::Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Runtime_Name_mDE4DDAB3FD997A5634ED6A04960C48513D939C29 (const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Data.StdCommonParams::set_Platform(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StdCommonParams_set_Platform_m6270CCD19D8CB881BC5668613C041C5E5BD0996C_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_buildGUID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_buildGUID_m856823980B16F20EF62FA3212E1A584428C49F08 (const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Data.StdCommonParams::set_BuildGuuid(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StdCommonParams_set_BuildGuuid_m0DB0779599C5BE31C7A1B76C2AF77E9EF9A3AC0C_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String UnityEngine.SystemInfo::get_deviceUniqueIdentifier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SystemInfo_get_deviceUniqueIdentifier_mCA336E71D49E8B830EAFBC13E46FA22A628D0E17 (const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Data.StdCommonParams::set_Idfv(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StdCommonParams_set_Idfv_mC903A6BEA3F5145D959C36D123D084D211085EF9_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance::RefreshSessionID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsServiceInstance_RefreshSessionID_m944E2F59E889E550C781E3710BFB5F4B95AE5125 (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance::DeactivateWithDataDeletionRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsServiceInstance_DeactivateWithDataDeletionRequest_m109EDCF2D98B8AE461BAB4B72859E30E380FC63B (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) ;
// System.String Unity.Services.Analytics.AnalyticsServiceInstance::get_UserId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AnalyticsServiceInstance_get_UserId_mBBDD58C51A590919EB9FBB7322A18C0D9AA11F71 (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) ;
// System.String Unity.Services.Analytics.AnalyticsServiceInstance::get_InstallId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AnalyticsServiceInstance_get_InstallId_m7ADCF67CCEF349567B8EBE9EF432D41CB397AAE7 (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) ;
// System.String Unity.Services.Analytics.AnalyticsServiceInstance::get_PlayerId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AnalyticsServiceInstance_get_PlayerId_m4F995ADCD4B6BEFF337CC44244B64A14CA6EF08C (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_Now_mC336498972C48439ADCD5C50D35FAE0F2A48B0F0 (const RuntimeMethod* method) ;
// System.String Unity.Services.Analytics.Internal.BufferX::SerializeDateTime(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BufferX_SerializeDateTime_m48F637B8166FD1F214B29050444AA725CB8AF9FB (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___dateTime0, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance::Deactivate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsServiceInstance_Deactivate_m780C639B6454A3D839452F787FBD904B6D055FEE (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) ;
// System.String Unity.Services.Analytics.AnalyticsServiceInstance::get_CustomAnalyticsId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AnalyticsServiceInstance_get_CustomAnalyticsId_mEB3038CA04D336E4EF0C1A6D6E0D6A94E025CF60 (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A (String_t* ___value0, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::op_Addition(System.DateTime,System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_op_Addition_m23FACB2D207CB24BE0E9C06AB4CF8CE0C4F0CAD8 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___d0, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___t1, const RuntimeMethod* method) ;
// System.Boolean System.DateTime::op_GreaterThan(System.DateTime,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTime_op_GreaterThan_mA9021939CEE6D93308C1CFB63C7E6D5CA58F7B92 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___t10, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___t21, const RuntimeMethod* method) ;
// System.Guid System.Guid::NewGuid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t Guid_NewGuid_m1827D92D71326C3F3C263F057F6E90F907617903 (const RuntimeMethod* method) ;
// System.String System.Guid::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C (Guid_t* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance::set_SessionID(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AnalyticsServiceInstance_set_SessionID_m48AF420DBE356BD2F73DF27848664B9117B1CA52_inline (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_mA48718D9A20D8972EDD41714CEF6BBF864F442EA_inline (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsServiceInstance_Flush_mB8F0ED919FB47026C5CB61DD3562FAA09009C21E (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance::SetVariableCommonParams()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsServiceInstance_SetVariableCommonParams_mAE82C6CB3D7D7DCC5337FB51A360457D5EB7844C (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) ;
// System.Nullable`1<System.Single> Unity.Services.Analytics.Platform.DeviceVolumeProvider::GetDeviceVolume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 DeviceVolumeProvider_GetDeviceVolume_mE8D3153764DEAED94CC7D598C33759BC25685946 (const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Single>::get_HasValue()
inline bool Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*, const RuntimeMethod*))Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_gshared_inline)(__this, method);
}
// T System.Nullable`1<System.Single>::GetValueOrDefault()
inline float Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_inline (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method)
{
	return ((  float (*) (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*, const RuntimeMethod*))Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_gshared_inline)(__this, method);
}
// System.Void System.Nullable`1<System.Double>::.ctor(T)
inline void Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, double ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*, double, const RuntimeMethod*))Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF_gshared)(__this, ___value0, method);
}
// System.Void Unity.Services.Analytics.Data.StdCommonParams::set_DeviceVolume(System.Nullable`1<System.Double>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StdCommonParams_set_DeviceVolume_mBC014F9E6144D31B7A21082F4F17CADA8B8B8DB8_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.SystemInfo::get_batteryLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SystemInfo_get_batteryLevel_m46D68F5A85125FBD389BEF455AF23999FD9E3D22 (const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Data.StdCommonParams::set_BatteryLoad(System.Nullable`1<System.Double>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StdCommonParams_set_BatteryLoad_mC06087861B7DD6C288823A7DDB4A7085B168743E_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Data.StdCommonParams::set_UasUserID(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StdCommonParams_set_UasUserID_m5079F59137ED8AA3D25BBDFBF10E536812D8ABB7_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::get_UtcNow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_UtcNow_m5D776FFEBC81592B361E4C7AF373297C5DFB46FD (const RuntimeMethod* method) ;
// System.StringComparer System.StringComparer::get_Ordinal()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* StringComparer_get_Ordinal_m96B6DCC0BE70F655E0C41ED4EBCA30D5BA9F6D1A_inline (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
inline void Dictionary_2__ctor_m9804017B0F6F06DE8C8FAA9292240873CB450B2D (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m89AC42CD88BC0ED965D36B7028EF3DE23D290E1D_gshared)(__this, ___comparer0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue)
inline void Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883 (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* __this, String_t* ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588*, String_t*, int32_t, const RuntimeMethod*))Dictionary_2_Add_m63897227AFA7035F1772315ABBBE7FD0A250E10C_gshared)(__this, ___key0, ___value1, method);
}
// System.Int32 Unity.Services.Analytics.AnalyticsServiceInstance::get_AutoflushPeriodMultiplier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnalyticsServiceInstance_get_AutoflushPeriodMultiplier_m306D10F0B29C2FBE941D7607D61C7AE5702AC3AE (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) ;
// System.Single Unity.Services.Analytics.AnalyticsContainer::get_AutoFlushPeriod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnalyticsContainer_get_AutoFlushPeriod_mD89D49225FE7E3A9BAA505AAE9642EE42A9FE49A (AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___name0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<Unity.Services.Analytics.AnalyticsContainer>()
inline AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1* GameObject_AddComponent_TisAnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_mE4F8B8275039940AFB099EE841C9060ACCFF2A11 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void Unity.Services.Analytics.AnalyticsContainer::set_Instance(Unity.Services.Analytics.AnalyticsContainer)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AnalyticsContainer_set_Instance_mCE629230958D49CD99B20F0E39559F5184930161_inline (AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, int32_t ___value0, const RuntimeMethod* method) ;
// UnityEngine.HideFlags UnityEngine.Object::get_hideFlags()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Object_get_hideFlags_mA08F5E41671B8C6B5073C6B9E2799BCE6E0DF7F3 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___target0, const RuntimeMethod* method) ;
// Unity.Services.Analytics.AnalyticsContainer Unity.Services.Analytics.AnalyticsContainer::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1* AnalyticsContainer_get_Instance_m5DE0306D86F033D52B086F0592AEB27E0D7E5510_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_unscaledDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_unscaledDeltaTime_m89252D23CC5AA295CFA4EB2BCB417A831AC51652 (const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance::RecordGameRunningIfNecessary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsServiceInstance_RecordGameRunningIfNecessary_mDC174CE67E36436A206DDC321308853A727484C3 (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance::ApplicationPaused(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsServiceInstance_ApplicationPaused_mB64F8B2FF25B824FA074668EF917FC684828893C (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, bool ___paused0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance::ApplicationQuit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsServiceInstance_ApplicationQuit_mC6358CE4734C9A39DA8A1AAE1F529EB5D5A17E03 (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.RequestFailedException::.ctor(System.Int32,System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestFailedException__ctor_m5F2BC9B778764EF58CA947E789CAEEAD27341C7A (RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00* __this, int32_t ___errorCode0, String_t* ___message1, Exception_t* ___innerException2, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.ConsentCheckException::set_Reason(Unity.Services.Analytics.ConsentCheckExceptionReason)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConsentCheckException_set_Reason_mB9551C34C6B6C76DAAD9DF12EFF1B0E385CEE968_inline (ConsentCheckException_t96E7054ECB013548EA92EEFFFACAB143D5A86B7D* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389 (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* __this, String_t* ___className0, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<UnityEngine.AndroidJavaObject>(System.String)
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared)(__this, ___fieldName0, method);
}
// ReturnType UnityEngine.AndroidJavaObject::Call<UnityEngine.AndroidJavaObject>(System.String,System.Object[])
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisRuntimeObject_mA5AF1A9E0463CE91F0ACB6AC2FE0C1922B579EF7_gshared)(__this, ___methodName0, ___args1, method);
}
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Int32>(System.String,System.Object[])
inline int32_t AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Void System.Nullable`1<System.Single>::.ctor(T)
inline void Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420 (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, float ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*, float, const RuntimeMethod*))Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420_gshared)(__this, ___value0, method);
}
// Unity.Services.Analytics.Platform.UA2PlatformCode Unity.Services.Analytics.Platform.Runtime::GetPlatform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Runtime_GetPlatform_m728053062B818EEA0392E6B8AD6D8C137CF76810 (const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D (const RuntimeMethod* method) ;
// UnityEngine.DeviceType UnityEngine.SystemInfo::get_deviceType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_deviceType_mB67B9AC09C2BE8A8B0AED6765AD70719D15C889F (const RuntimeMethod* method) ;
// System.String Unity.Services.Analytics.Data.StdCommonParams::get_GameStoreID()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* StdCommonParams_get_GameStoreID_m84117F13E7CB919145EC3EF0480411695B7B7B69_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) ;
// System.String Unity.Services.Analytics.Data.StdCommonParams::get_GameBundleID()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* StdCommonParams_get_GameBundleID_m614C916F3CBA18D60161DDFD84B4C9D5C2E99531_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) ;
// System.String Unity.Services.Analytics.Data.StdCommonParams::get_Platform()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* StdCommonParams_get_Platform_m997C2F5D078131853762DCFBA238288F8EFA191E_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) ;
// System.String Unity.Services.Analytics.Data.StdCommonParams::get_Idfv()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* StdCommonParams_get_Idfv_m0CB0676EB45E77DE51316B204FFAE5437CEFA6DD_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) ;
// System.String Unity.Services.Analytics.Data.StdCommonParams::get_UasUserID()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* StdCommonParams_get_UasUserID_m6A4DE2B299022D7DBCEA6EE055C717E59BE2B32C_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) ;
// System.String Unity.Services.Analytics.Data.StdCommonParams::get_BuildGuuid()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* StdCommonParams_get_BuildGuuid_m706EB59064FA0D40D1C244514B2EA2995AE5706D_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) ;
// System.String Unity.Services.Analytics.Data.StdCommonParams::get_ClientVersion()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* StdCommonParams_get_ClientVersion_mA3D1574F4D14E5355C23D39AA130AB106960491D_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) ;
// System.String Unity.Services.Analytics.Data.StdCommonParams::get_UserCountry()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* StdCommonParams_get_UserCountry_mDDDF84AB7FC6D62ECBB642C7C7814D3143DAF0F9_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) ;
// System.Nullable`1<System.Double> Unity.Services.Analytics.Data.StdCommonParams::get_DeviceVolume()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 StdCommonParams_get_DeviceVolume_mD4CB9275283492DA050B8BDA949E1E38C35EB76C_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Double>::get_HasValue()
inline bool Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_inline (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*, const RuntimeMethod*))Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_gshared_inline)(__this, method);
}
// T System.Nullable`1<System.Double>::get_Value()
inline double Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1 (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, const RuntimeMethod* method)
{
	return ((  double (*) (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*, const RuntimeMethod*))Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1_gshared)(__this, method);
}
// System.Nullable`1<System.Double> Unity.Services.Analytics.Data.StdCommonParams::get_BatteryLoad()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 StdCommonParams_get_BatteryLoad_mE5C6A63115E33A0FB67BA3BA7FF4CD98021A584A_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) ;
// System.String Unity.Services.Analytics.Data.StdCommonParams::get_ProjectID()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* StdCommonParams_get_ProjectID_m48D1D967587EF2BB877AB287B6FD03531D3E3658_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Int64>::.ctor(T)
inline void Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1 (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, int64_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*, int64_t, const RuntimeMethod*))Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_gshared)(__this, ___value0, method);
}
// System.Void Unity.Services.Analytics.Data.StdCommonParams::SerializeCommonEventParams(Unity.Services.Analytics.Internal.IBuffer&,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StdCommonParams_SerializeCommonEventParams_m174FE65D4790275038F1E89B2D2DD862DB5FCC0B (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, RuntimeObject** ___buf0, String_t* ___callingMethodIdentifier1, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Internal.AnalyticsForgetter::SetForgettingStatus(Unity.Services.Analytics.Internal.AnalyticsForgetter/DataDeletionStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsForgetter_SetForgettingStatus_m92EBCCB1DCCE80F80D6C0051B95C638A521B0111 (AnalyticsForgetter_tA1B9D1F48FB306C80BE60C9858646BC1368948C0* __this, int32_t ___state0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336 (const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Int64>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mC0FC430617EB8A9B54D1632C5BD95979ED5C2C2A (Action_1_tBB5A52E9AEFBC4F0C8D94D39CAD16BCB6B8B5929* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tBB5A52E9AEFBC4F0C8D94D39CAD16BCB6B8B5929*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_mC0FC430617EB8A9B54D1632C5BD95979ED5C2C2A_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Void System.IO.MemoryStream::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m9E93692A2BB0E34119603FF6A5D44F6A132052E8 (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
inline void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared)(__this, method);
}
// System.Void Unity.Services.Analytics.Internal.BufferX::ClearBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferX_ClearBuffer_mA8B0BBF389EA44EFE0CA85B2EF94A3B51153FEE8 (BufferX_t61043C3179F78166341D64689A662C738496055C* __this, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Min(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Min_mFEAD72DF4C4708B86BF464AB4F5F1468FAD8E784_inline (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Internal.BufferX::WriteByte(System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferX_WriteByte_m12C49B76B743F83835010F50B8BDD99680AD6B14 (BufferX_t61043C3179F78166341D64689A662C738496055C* __this, uint8_t* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Internal.BufferX::WriteString(System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferX_WriteString_m6D00B4EC23DF37876EA6155C243345D9ABD997A6 (BufferX_t61043C3179F78166341D64689A662C738496055C* __this, String_t** ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Internal.BufferX::WriteBytes(System.Byte[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferX_WriteBytes_mAB875F9E3ABB56B16A350123FA3983F967C3BA79 (BufferX_t61043C3179F78166341D64689A662C738496055C* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** ___bytes0, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Int64>::get_HasValue()
inline bool Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_inline (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*, const RuntimeMethod*))Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_gshared_inline)(__this, method);
}
// System.String System.Nullable`1<System.Int64>::ToString()
inline String_t* Nullable_1_ToString_m04B6938F577DFC70D695A65C381A5ABCBC441248 (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*, const RuntimeMethod*))Nullable_1_ToString_m04B6938F577DFC70D695A65C381A5ABCBC441248_gshared)(__this, method);
}
// System.Void Unity.Services.Analytics.Internal.BufferX::StripTrailingCommaIfNecessary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferX_StripTrailingCommaIfNecessary_m835DF3D14DFBEB8486A8044A72C15F64C9CEA937 (BufferX_t61043C3179F78166341D64689A662C738496055C* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
inline int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
inline int32_t List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_gshared)(__this, ___index0, method);
}
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
inline void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline)(__this, ___item0, method);
}
// System.Void Unity.Services.Analytics.Internal.BufferX::WriteName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferX_WriteName_m8833F39525C5ECD5DBBF33168F5FEFC630EA2A7D (BufferX_t61043C3179F78166341D64689A662C738496055C* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425 (const RuntimeMethod* method) ;
// System.String System.Double::ToString(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Double_ToString_m4318830D9F771852FDCF21C14CF9E8ABC7E77357 (double* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Boolean System.Char::IsControl(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_IsControl_m7B006691A34165B76DF65393181827D62104F6EC (Il2CppChar ___c0, const RuntimeMethod* method) ;
// System.Int32 System.Convert::ToInt32(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m7B23BC2572EEB2B03EDAA26D2D9232C4A00DA00C (Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
inline void List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Item(System.Int32,T)
inline void List_1_set_Item_m95629806F31CF369D937590912E0B6A53FF7C587 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___index0, int32_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, int32_t, const RuntimeMethod*))List_1_set_Item_m95629806F31CF369D937590912E0B6A53FF7C587_gshared)(__this, ___index0, ___value1, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::RemoveRange(System.Int32,System.Int32)
inline void List_1_RemoveRange_m1E69C4C8438AA5D7E05C2936C79C01D96F89BE68 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___index0, int32_t ___count1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, int32_t, const RuntimeMethod*))List_1_RemoveRange_m1E69C4C8438AA5D7E05C2936C79C01D96F89BE68_gshared)(__this, ___index0, ___count1, method);
}
// System.String System.DateTime::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTime_ToString_m27637E1131A10BED8A95639D64339023D5EBBF00 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Internal.GeoAPI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeoAPI__ctor_m0C73E78C464E961E626A7D252140E6E2A60C148D (GeoAPI_tDEC43B93D320DC5B81A4BD9F45491DD2E5D30287* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Internal.ConsentTracker::.ctor(Unity.Services.Analytics.Internal.IGeoAPI,Unity.Services.Analytics.ICoreStatsHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentTracker__ctor_m9C23286CCF2BC6690013071ECD56F7FC0B5B745C (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, RuntimeObject* ___geoApi0, RuntimeObject* ___coreStatsHelper1, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Internal.ConsentTracker::set_optOutConsentStatus(Unity.Services.Analytics.Internal.ConsentStatus)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConsentTracker_set_optOutConsentStatus_m4BAAF67518F147B7203463AD1557E2E14A795657_inline (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Internal.ConsentTracker::set_optInPiplConsentStatus(Unity.Services.Analytics.Internal.ConsentStatus)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConsentTracker_set_optInPiplConsentStatus_m7121DEA6C7203C39DD740E00262387EF06B1C732_inline (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Internal.ConsentTracker::ReadOptInPiplConsentStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentTracker_ReadOptInPiplConsentStatus_m1BBCAFF95811454222E9A78CCBC1DB4331CF5127 (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Internal.ConsentTracker::ReadOptOutConsentStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentTracker_ReadOptOutConsentStatus_m231368E1ECC2A7BBB5ADD724CB7BCB6BFA0D6E80 (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Internal.ConsentTracker::ValidateConsentWasChecked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentTracker_ValidateConsentWasChecked_m92986F8E992406A10E6712086DE129EB009935E6 (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Services.Analytics.Internal.ConsentTracker::IsConsentGiven(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConsentTracker_IsConsentGiven_m45BA5C4604FBACCB87933A7D812EEA65633F8338 (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, String_t* ___identifier0, const RuntimeMethod* method) ;
// System.String Unity.Services.Analytics.Internal.Consent::get_Pipl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Consent_get_Pipl_m1706E91033F1862EB1860203165D73D2FC48569C (const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// Unity.Services.Analytics.Internal.ConsentStatus Unity.Services.Analytics.Internal.ConsentTracker::get_optInPiplConsentStatus()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ConsentTracker_get_optInPiplConsentStatus_m1F91E59567043A5429228EFBA83709725EB53A34_inline (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, const RuntimeMethod* method) ;
// Unity.Services.Analytics.Internal.ConsentStatus Unity.Services.Analytics.Internal.ConsentTracker::get_optOutConsentStatus()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ConsentTracker_get_optOutConsentStatus_mA1EB68620CB4A25DD2739C48F607DFE18924D415_inline (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::Save()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_Save_mCC9D4FCE00EA315AC967771D5D993E04CB742DFB (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.PlayerPrefs::HasKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerPrefs_HasKey_m9EB15A18BE611107251F2E2F6CE70636F88CAB5F (String_t* ___key0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m35C13A87BBC7907554CE5405EB5D00CF85E7457B (String_t* ___key0, const RuntimeMethod* method) ;
// System.Boolean Unity.Services.Analytics.Internal.ConsentTracker::IsGeoIpChecked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConsentTracker_IsGeoIpChecked_m59099E930C861F18CAF7D68E0546C5D05663E50E (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.ConsentCheckException::.ctor(Unity.Services.Analytics.ConsentCheckExceptionReason,System.Int32,System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentCheckException__ctor_m0F6DC7108E11524A5BBBE85F07DD082873FE95B3 (ConsentCheckException_t96E7054ECB013548EA92EEFFFACAB143D5A86B7D* __this, int32_t ___reason0, int32_t ___errorCode1, String_t* ___message2, Exception_t* ___innerException3, const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_persistentDataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_m787EBC9B0862E7617DCD6CABD2147E61717EAC17 (const RuntimeMethod* method) ;
// System.Boolean System.IO.File::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool File_Exists_mD7E7A84A6B9E9A9BADBDA7C46AAE0624EF106D85 (String_t* ___path0, const RuntimeMethod* method) ;
// System.Void System.IO.File::Delete(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_Delete_mB5CB249F5370D49747243BCA9C56CCC48D3E6A08 (String_t* ___path0, const RuntimeMethod* method) ;
// System.Void System.IO.FileStream::.ctor(System.String,System.IO.FileMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileStream__ctor_m78499F9BE2BE31DA34F123B4399AA457716BD6E6 (FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* __this, String_t* ___path0, int32_t ___mode1, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void System.IO.BinaryWriter::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryWriter__ctor_mF2F1235E378C3EC493A8C816597BCEB4205A9CA0 (BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___output0, const RuntimeMethod* method) ;
// System.Boolean Unity.Services.Analytics.Internal.Dispatcher::get_FlushInProgress()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Dispatcher_get_FlushInProgress_mCC5DAEE29D9E97D753FE7B2C876FC7B9E3F50E28_inline (Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Internal.Dispatcher::FlushBufferToService()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dispatcher_FlushBufferToService_m55AC50B02B30BD4ED1E554D794AA5DEE9FB77C39 (Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Internal.Dispatcher::set_FlushInProgress(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Dispatcher_set_FlushInProgress_mE7F87C33DBBF7012A706047DC2336D3B6EF9391E_inline (Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Internal.Dispatcher::set_ConsecutiveFailedUploadCount(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Dispatcher_set_ConsecutiveFailedUploadCount_m9EECD2DEB2695DBCF973D907662ED7D6140C9469_inline (Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Int32 Unity.Services.Analytics.Internal.Dispatcher::get_ConsecutiveFailedUploadCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Dispatcher_get_ConsecutiveFailedUploadCount_m58D2668BE9E8194349A99CA67BB8583F09DE7C07_inline (Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest__ctor_mD4739B0BF1C4937479A83B24B531C6B819712A3E (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, String_t* ___url0, String_t* ___method1, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequest/Result UnityEngine.Networking.UnityWebRequest::get_result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::SendWebRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::SetRequestHeader(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_SetRequestHeader_m099734EB787B7269B62AB2236A5A4F7D35AF8BC5 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, String_t* ___name0, String_t* ___value1, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Internal.AnalyticsWebRequest::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsWebRequest__ctor_m8CA36BAF33C32134D350FC88E7BF795AFFDFD77D (AnalyticsWebRequest_t2851A3E58826329B4D5AE9A1898AD98EF26DEEFA* __this, String_t* ___url0, String_t* ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UploadHandlerRaw::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UploadHandlerRaw__ctor_m168C957B67E29CB3072E3542044D37E2F16C42B7 (UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UploadHandler::set_contentType(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UploadHandler_set_contentType_mEFF2D2512996DFFF2BFC013388B702078BDC73F3 (UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::set_uploadHandler(UnityEngine.Networking.UploadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_uploadHandler_m68F346550136DE178C79238944985892196027FE (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Internal.WebRequestHelper/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m0F6A2DDF4EF21C3B648EA299191EB2D006DB68F9 (U3CU3Ec__DisplayClass2_0_tC549DEE19D3A36FBBE1510B664CF1CB349E507F5* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.AsyncOperation>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m33ABB7530487276910BEFB499A97D33FB2E06D7D (Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.AsyncOperation::add_completed(System.Action`1<UnityEngine.AsyncOperation>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation_add_completed_mD6F21BA8127D6D4B7ABDEFAA995A7A347A20A793 (AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* __this, Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAsyncOperation::get_webRequest()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* UnityWebRequestAsyncOperation_get_webRequest_mF67D15420C7C1C4DCA1BD6F839048A0542998BC3_inline (UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* __this, const RuntimeMethod* method) ;
// System.Int64 UnityEngine.Networking.UnityWebRequest::get_responseCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnityWebRequest_get_responseCode_m012C177F61435D5D120A21D7A03FFF7B0F8B904B (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Int64>::Invoke(T)
inline void Action_1_Invoke_mE4800C6D733A4CDE721FD3D8B4E95319B5C64E9E_inline (Action_1_tBB5A52E9AEFBC4F0C8D94D39CAD16BCB6B8B5929* __this, int64_t ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tBB5A52E9AEFBC4F0C8D94D39CAD16BCB6B8B5929*, int64_t, const RuntimeMethod*))Action_1_Invoke_mE4800C6D733A4CDE721FD3D8B4E95319B5C64E9E_gshared_inline)(__this, ___obj0, method);
}
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Ua2CoreInitializeCallback::Register()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ua2CoreInitializeCallback_Register_m1D32AFA73659CBDD49DADB25800E23D180EFD883 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistration_DependsOn_TisICloudProjectId_t366B66869ECC734B15C1F60633D2B998CD9231FE_mE5B2A026998399E51D853DF4B3D4F9AA85BF84D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistration_DependsOn_TisIEnvironments_t9DCAF0398EB856DBE771A9C2D7B120661D628CB7_mF32D3AEE8770313EFCC77D92013AF760CBABCD64_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistration_DependsOn_TisIExternalUserId_t50A07D7165D254D971AA529FFE55B4A595A75F25_mCABAC7BD58204E9E5B80544CF9D413AEC53772DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistration_DependsOn_TisIInstallationId_tCE6DEEEBAFABEB9EC621BD1646D82BC9D82BFB0C_mA93E2240E092DDA93C08F11936078CD15E581C91_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistration_DependsOn_TisIProjectConfiguration_tB5A7516DEB869AD005431EC83C6E02221D2B60D2_mFE611D2FD196728ACC376EAB06D4F2664D8FDD10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistration_OptionallyDependsOn_TisIPlayerId_t6A7BAE55B4D78E87B15B9261828E897BAACBF913_m5F08ADC17E47CCBEEDC9C48CC64F5A475CCFD286_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistration_ProvidesComponent_TisIAnalyticsStandardEventComponent_tF6FA10DAAE59FC2DD9C6441D6B2E8BDA6EDDA807_m4CCB17ADEC6343A3DE09DC770F1F49B45FFA4942_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistry_RegisterPackage_TisUa2CoreInitializeCallback_t20D7CCCEDAF24D8AD75CBE5991731A72C70418BD_m2D03E607E78DEFB5521CD83B02846C48D6EF4F0E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ua2CoreInitializeCallback_t20D7CCCEDAF24D8AD75CBE5991731A72C70418BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// CoreRegistry.Instance.RegisterPackage(new Ua2CoreInitializeCallback())
		//     .DependsOn<IInstallationId>()
		//     .DependsOn<ICloudProjectId>()
		//     .DependsOn<IEnvironments>()
		//     .DependsOn<IExternalUserId>()
		//     .DependsOn<IProjectConfiguration>()
		//     .OptionallyDependsOn<IPlayerId>()
		//     .ProvidesComponent<IAnalyticsStandardEventComponent>();
		CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* L_0;
		L_0 = CoreRegistry_get_Instance_m3837829F955A1E5F79A3B6A5023C1E8DEFB22FB2_inline(NULL);
		Ua2CoreInitializeCallback_t20D7CCCEDAF24D8AD75CBE5991731A72C70418BD* L_1 = (Ua2CoreInitializeCallback_t20D7CCCEDAF24D8AD75CBE5991731A72C70418BD*)il2cpp_codegen_object_new(Ua2CoreInitializeCallback_t20D7CCCEDAF24D8AD75CBE5991731A72C70418BD_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Ua2CoreInitializeCallback__ctor_m096A57E67DE0D5E40E7AB84CF3935A5D7DD898CE(L_1, NULL);
		NullCheck(L_0);
		CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 L_2;
		L_2 = CoreRegistry_RegisterPackage_TisUa2CoreInitializeCallback_t20D7CCCEDAF24D8AD75CBE5991731A72C70418BD_m2D03E607E78DEFB5521CD83B02846C48D6EF4F0E(L_0, L_1, CoreRegistry_RegisterPackage_TisUa2CoreInitializeCallback_t20D7CCCEDAF24D8AD75CBE5991731A72C70418BD_m2D03E607E78DEFB5521CD83B02846C48D6EF4F0E_RuntimeMethod_var);
		V_0 = L_2;
		CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 L_3;
		L_3 = CoreRegistration_DependsOn_TisIInstallationId_tCE6DEEEBAFABEB9EC621BD1646D82BC9D82BFB0C_mA93E2240E092DDA93C08F11936078CD15E581C91((&V_0), CoreRegistration_DependsOn_TisIInstallationId_tCE6DEEEBAFABEB9EC621BD1646D82BC9D82BFB0C_mA93E2240E092DDA93C08F11936078CD15E581C91_RuntimeMethod_var);
		V_0 = L_3;
		CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 L_4;
		L_4 = CoreRegistration_DependsOn_TisICloudProjectId_t366B66869ECC734B15C1F60633D2B998CD9231FE_mE5B2A026998399E51D853DF4B3D4F9AA85BF84D4((&V_0), CoreRegistration_DependsOn_TisICloudProjectId_t366B66869ECC734B15C1F60633D2B998CD9231FE_mE5B2A026998399E51D853DF4B3D4F9AA85BF84D4_RuntimeMethod_var);
		V_0 = L_4;
		CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 L_5;
		L_5 = CoreRegistration_DependsOn_TisIEnvironments_t9DCAF0398EB856DBE771A9C2D7B120661D628CB7_mF32D3AEE8770313EFCC77D92013AF760CBABCD64((&V_0), CoreRegistration_DependsOn_TisIEnvironments_t9DCAF0398EB856DBE771A9C2D7B120661D628CB7_mF32D3AEE8770313EFCC77D92013AF760CBABCD64_RuntimeMethod_var);
		V_0 = L_5;
		CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 L_6;
		L_6 = CoreRegistration_DependsOn_TisIExternalUserId_t50A07D7165D254D971AA529FFE55B4A595A75F25_mCABAC7BD58204E9E5B80544CF9D413AEC53772DD((&V_0), CoreRegistration_DependsOn_TisIExternalUserId_t50A07D7165D254D971AA529FFE55B4A595A75F25_mCABAC7BD58204E9E5B80544CF9D413AEC53772DD_RuntimeMethod_var);
		V_0 = L_6;
		CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 L_7;
		L_7 = CoreRegistration_DependsOn_TisIProjectConfiguration_tB5A7516DEB869AD005431EC83C6E02221D2B60D2_mFE611D2FD196728ACC376EAB06D4F2664D8FDD10((&V_0), CoreRegistration_DependsOn_TisIProjectConfiguration_tB5A7516DEB869AD005431EC83C6E02221D2B60D2_mFE611D2FD196728ACC376EAB06D4F2664D8FDD10_RuntimeMethod_var);
		V_0 = L_7;
		CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 L_8;
		L_8 = CoreRegistration_OptionallyDependsOn_TisIPlayerId_t6A7BAE55B4D78E87B15B9261828E897BAACBF913_m5F08ADC17E47CCBEEDC9C48CC64F5A475CCFD286((&V_0), CoreRegistration_OptionallyDependsOn_TisIPlayerId_t6A7BAE55B4D78E87B15B9261828E897BAACBF913_m5F08ADC17E47CCBEEDC9C48CC64F5A475CCFD286_RuntimeMethod_var);
		V_0 = L_8;
		CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 L_9;
		L_9 = CoreRegistration_ProvidesComponent_TisIAnalyticsStandardEventComponent_tF6FA10DAAE59FC2DD9C6441D6B2E8BDA6EDDA807_m4CCB17ADEC6343A3DE09DC770F1F49B45FFA4942((&V_0), CoreRegistration_ProvidesComponent_TisIAnalyticsStandardEventComponent_tF6FA10DAAE59FC2DD9C6441D6B2E8BDA6EDDA807_m4CCB17ADEC6343A3DE09DC770F1F49B45FFA4942_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Threading.Tasks.Task Ua2CoreInitializeCallback::Initialize(Unity.Services.Core.Internal.CoreRegistry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Ua2CoreInitializeCallback_Initialize_mE8CA1840C20490FD250B30B6789619403DDE5748 (Ua2CoreInitializeCallback_t20D7CCCEDAF24D8AD75CBE5991731A72C70418BD* __this, CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* ___registry0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CInitializeU3Ed__2_tE70F0976A2CAD0E2F0A8E8462D49D2EFA9AB281F_m4F2966D39E9AA64C6E314B2A63CA169B3F8AFEFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CInitializeU3Ed__2_tE70F0976A2CAD0E2F0A8E8462D49D2EFA9AB281F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CInitializeU3Ed__2_tE70F0976A2CAD0E2F0A8E8462D49D2EFA9AB281F* V_0 = NULL;
	{
		U3CInitializeU3Ed__2_tE70F0976A2CAD0E2F0A8E8462D49D2EFA9AB281F* L_0 = (U3CInitializeU3Ed__2_tE70F0976A2CAD0E2F0A8E8462D49D2EFA9AB281F*)il2cpp_codegen_object_new(U3CInitializeU3Ed__2_tE70F0976A2CAD0E2F0A8E8462D49D2EFA9AB281F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CInitializeU3Ed__2__ctor_mF80996278CF224A8E8BCBA671EC37C34EC3BC9F1(L_0, NULL);
		V_0 = L_0;
		U3CInitializeU3Ed__2_tE70F0976A2CAD0E2F0A8E8462D49D2EFA9AB281F* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 L_2;
		L_2 = AsyncTaskMethodBuilder_Create_m84CBB9FB50A2D132B0A549652557CBE01867A82B(NULL);
		NullCheck(L_1);
		L_1->___U3CU3Et__builder_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&L_1->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&L_1->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&L_1->___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
		U3CInitializeU3Ed__2_tE70F0976A2CAD0E2F0A8E8462D49D2EFA9AB281F* L_3 = V_0;
		NullCheck(L_3);
		L_3->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___U3CU3E4__this_3), (void*)__this);
		U3CInitializeU3Ed__2_tE70F0976A2CAD0E2F0A8E8462D49D2EFA9AB281F* L_4 = V_0;
		CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* L_5 = ___registry0;
		NullCheck(L_4);
		L_4->___registry_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___registry_2), (void*)L_5);
		U3CInitializeU3Ed__2_tE70F0976A2CAD0E2F0A8E8462D49D2EFA9AB281F* L_6 = V_0;
		NullCheck(L_6);
		L_6->___U3CU3E1__state_0 = (-1);
		U3CInitializeU3Ed__2_tE70F0976A2CAD0E2F0A8E8462D49D2EFA9AB281F* L_7 = V_0;
		NullCheck(L_7);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_8 = (&L_7->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_Start_TisU3CInitializeU3Ed__2_tE70F0976A2CAD0E2F0A8E8462D49D2EFA9AB281F_m4F2966D39E9AA64C6E314B2A63CA169B3F8AFEFD(L_8, (&V_0), AsyncTaskMethodBuilder_Start_TisU3CInitializeU3Ed__2_tE70F0976A2CAD0E2F0A8E8462D49D2EFA9AB281F_m4F2966D39E9AA64C6E314B2A63CA169B3F8AFEFD_RuntimeMethod_var);
		U3CInitializeU3Ed__2_tE70F0976A2CAD0E2F0A8E8462D49D2EFA9AB281F* L_9 = V_0;
		NullCheck(L_9);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_10 = (&L_9->___U3CU3Et__builder_1);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_11;
		L_11 = AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E(L_10, NULL);
		return L_11;
	}
}
// System.Void Ua2CoreInitializeCallback::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ua2CoreInitializeCallback__ctor_m096A57E67DE0D5E40E7AB84CF3935A5D7DD898CE (Ua2CoreInitializeCallback_t20D7CCCEDAF24D8AD75CBE5991731A72C70418BD* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Ua2CoreInitializeCallback/<Initialize>d__2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeU3Ed__2__ctor_mF80996278CF224A8E8BCBA671EC37C34EC3BC9F1 (U3CInitializeU3Ed__2_tE70F0976A2CAD0E2F0A8E8462D49D2EFA9AB281F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Ua2CoreInitializeCallback/<Initialize>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeU3Ed__2_MoveNext_m363B0E235E88596349D1E9CE8CE635CA67A17DD9 (U3CInitializeU3Ed__2_tE70F0976A2CAD0E2F0A8E8462D49D2EFA9AB281F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnalyticsForgetter_tA1B9D1F48FB306C80BE60C9858646BC1368948C0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnalyticsServiceSystemCalls_tA75EFB9A19C30CBFEABF5BF0578E1636083AC745_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnalyticsService_t995B7CE25709A192F70345B0335516F282C0CE7B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnalyticsUserIdServiceComponent_t2A2B82EF9FBA795836189A3A0A3274A87D4E1B9B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CInitializeU3Ed__2_tE70F0976A2CAD0E2F0A8E8462D49D2EFA9AB281F_m6CA7288B39A328F23D802B24A3FD2765BA9F11F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BufferSystemCalls_t30CA07BE3DD2F29E9F7036ED838F0C92A50480F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BufferX_t61043C3179F78166341D64689A662C738496055C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistry_GetServiceComponent_TisICloudProjectId_t366B66869ECC734B15C1F60633D2B998CD9231FE_mF7458A4E56377FCF3301F3ECE3A64B8C709EB38F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistry_GetServiceComponent_TisIEnvironments_t9DCAF0398EB856DBE771A9C2D7B120661D628CB7_mB14B4F5C7C715C037C3D0B96AD44CFBC570659AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistry_GetServiceComponent_TisIExternalUserId_t50A07D7165D254D971AA529FFE55B4A595A75F25_m943FC6CF014F0065DD2E93EC1C7830093F6B1918_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistry_GetServiceComponent_TisIInstallationId_tCE6DEEEBAFABEB9EC621BD1646D82BC9D82BFB0C_m154CDEFCDF91B08E20C3D0DAE197A8AD04AAE70F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistry_GetServiceComponent_TisIPlayerId_t6A7BAE55B4D78E87B15B9261828E897BAACBF913_mAA43670CFBC53A1BB132782BB187BE8BF0D90BEC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistry_GetServiceComponent_TisIProjectConfiguration_tB5A7516DEB869AD005431EC83C6E02221D2B60D2_mF70AFB94326EDB167066B7836231B13A52150312_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistry_RegisterServiceComponent_TisIAnalyticsStandardEventComponent_tF6FA10DAAE59FC2DD9C6441D6B2E8BDA6EDDA807_mBC81DFA289107F2FAEAC53E5B7785A2C65A76905_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistry_RegisterServiceComponent_TisIAnalyticsUserId_t8C2078BBFD0D5C5EB8C45126592632FAAA1F2455_m24033D2421A44776EB156EB848C371BA5EEADBCC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreStatsHelper_tBF3F119096A7ABBDDC9F22ACBF13FA25FCD166E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataGenerator_t25BC607B3B6D456EAA5DC9C3F600C4B560800183_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DiskCache_tE19D214B0538F2CC9D59D4F827B480AEBCEF368D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileSystemCalls_t1A2213109FA10AFB80C343E28A45F13F053970A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICloudProjectId_t366B66869ECC734B15C1F60633D2B998CD9231FE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnvironments_t9DCAF0398EB856DBE771A9C2D7B120661D628CB7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerPrefsPersistence_tA41639170405D0B663305EBE5D18CD5E27583DEF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StandardEventServiceComponent_t587EC5F02461A7AD305539BAB07A2B93FD56E2BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequestHelper_t90785D95A7FBCCA284192A9CB95D1DA845D57E71_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5F64215B865771BB0C5BB83564A0D46D2F5CB44);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_1;
	memset((&V_1), 0, sizeof(V_1));
	U3CInitializeU3Ed__2_tE70F0976A2CAD0E2F0A8E8462D49D2EFA9AB281F* V_2 = NULL;
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	RuntimeObject* G_B6_0 = NULL;
	U3CInitializeU3Ed__2_tE70F0976A2CAD0E2F0A8E8462D49D2EFA9AB281F* G_B6_1 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	U3CInitializeU3Ed__2_tE70F0976A2CAD0E2F0A8E8462D49D2EFA9AB281F* G_B5_1 = NULL;
	String_t* G_B7_0 = NULL;
	U3CInitializeU3Ed__2_tE70F0976A2CAD0E2F0A8E8462D49D2EFA9AB281F* G_B7_1 = NULL;
	String_t* G_B9_0 = NULL;
	U3CInitializeU3Ed__2_tE70F0976A2CAD0E2F0A8E8462D49D2EFA9AB281F* G_B9_1 = NULL;
	String_t* G_B8_0 = NULL;
	U3CInitializeU3Ed__2_tE70F0976A2CAD0E2F0A8E8462D49D2EFA9AB281F* G_B8_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_000c_1;
			}
		}
		{
			goto IL_0011_1;
		}

IL_000c_1:
		{
			goto IL_022d_1;
		}

IL_0011_1:
		{
			// var cloudProjectId = registry.GetServiceComponent<ICloudProjectId>();
			CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* L_2 = __this->___registry_2;
			NullCheck(L_2);
			RuntimeObject* L_3;
			L_3 = CoreRegistry_GetServiceComponent_TisICloudProjectId_t366B66869ECC734B15C1F60633D2B998CD9231FE_mF7458A4E56377FCF3301F3ECE3A64B8C709EB38F(L_2, CoreRegistry_GetServiceComponent_TisICloudProjectId_t366B66869ECC734B15C1F60633D2B998CD9231FE_mF7458A4E56377FCF3301F3ECE3A64B8C709EB38F_RuntimeMethod_var);
			__this->___U3CcloudProjectIdU3E5__1_4 = L_3;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcloudProjectIdU3E5__1_4), (void*)L_3);
			// var installationId = registry.GetServiceComponent<IInstallationId>();
			CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* L_4 = __this->___registry_2;
			NullCheck(L_4);
			RuntimeObject* L_5;
			L_5 = CoreRegistry_GetServiceComponent_TisIInstallationId_tCE6DEEEBAFABEB9EC621BD1646D82BC9D82BFB0C_m154CDEFCDF91B08E20C3D0DAE197A8AD04AAE70F(L_4, CoreRegistry_GetServiceComponent_TisIInstallationId_tCE6DEEEBAFABEB9EC621BD1646D82BC9D82BFB0C_m154CDEFCDF91B08E20C3D0DAE197A8AD04AAE70F_RuntimeMethod_var);
			__this->___U3CinstallationIdU3E5__2_5 = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CinstallationIdU3E5__2_5), (void*)L_5);
			// var playerId = registry.GetServiceComponent<IPlayerId>();
			CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* L_6 = __this->___registry_2;
			NullCheck(L_6);
			RuntimeObject* L_7;
			L_7 = CoreRegistry_GetServiceComponent_TisIPlayerId_t6A7BAE55B4D78E87B15B9261828E897BAACBF913_mAA43670CFBC53A1BB132782BB187BE8BF0D90BEC(L_6, CoreRegistry_GetServiceComponent_TisIPlayerId_t6A7BAE55B4D78E87B15B9261828E897BAACBF913_mAA43670CFBC53A1BB132782BB187BE8BF0D90BEC_RuntimeMethod_var);
			__this->___U3CplayerIdU3E5__3_6 = L_7;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CplayerIdU3E5__3_6), (void*)L_7);
			// var environments = registry.GetServiceComponent<IEnvironments>();
			CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* L_8 = __this->___registry_2;
			NullCheck(L_8);
			RuntimeObject* L_9;
			L_9 = CoreRegistry_GetServiceComponent_TisIEnvironments_t9DCAF0398EB856DBE771A9C2D7B120661D628CB7_mB14B4F5C7C715C037C3D0B96AD44CFBC570659AF(L_8, CoreRegistry_GetServiceComponent_TisIEnvironments_t9DCAF0398EB856DBE771A9C2D7B120661D628CB7_mB14B4F5C7C715C037C3D0B96AD44CFBC570659AF_RuntimeMethod_var);
			__this->___U3CenvironmentsU3E5__4_7 = L_9;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CenvironmentsU3E5__4_7), (void*)L_9);
			// var customUserId = registry.GetServiceComponent<IExternalUserId>();
			CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* L_10 = __this->___registry_2;
			NullCheck(L_10);
			RuntimeObject* L_11;
			L_11 = CoreRegistry_GetServiceComponent_TisIExternalUserId_t50A07D7165D254D971AA529FFE55B4A595A75F25_m943FC6CF014F0065DD2E93EC1C7830093F6B1918(L_10, CoreRegistry_GetServiceComponent_TisIExternalUserId_t50A07D7165D254D971AA529FFE55B4A595A75F25_m943FC6CF014F0065DD2E93EC1C7830093F6B1918_RuntimeMethod_var);
			__this->___U3CcustomUserIdU3E5__5_8 = L_11;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcustomUserIdU3E5__5_8), (void*)L_11);
			// var coreStatsHelper = new CoreStatsHelper();
			CoreStatsHelper_tBF3F119096A7ABBDDC9F22ACBF13FA25FCD166E6* L_12 = (CoreStatsHelper_tBF3F119096A7ABBDDC9F22ACBF13FA25FCD166E6*)il2cpp_codegen_object_new(CoreStatsHelper_tBF3F119096A7ABBDDC9F22ACBF13FA25FCD166E6_il2cpp_TypeInfo_var);
			NullCheck(L_12);
			CoreStatsHelper__ctor_mD543DD28C5F258FC9B9BDD30D0192F8A7ECF9DF4(L_12, NULL);
			__this->___U3CcoreStatsHelperU3E5__6_9 = L_12;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcoreStatsHelperU3E5__6_9), (void*)L_12);
			// var consentTracker = new ConsentTracker(coreStatsHelper);
			CoreStatsHelper_tBF3F119096A7ABBDDC9F22ACBF13FA25FCD166E6* L_13 = __this->___U3CcoreStatsHelperU3E5__6_9;
			ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* L_14 = (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4*)il2cpp_codegen_object_new(ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4_il2cpp_TypeInfo_var);
			NullCheck(L_14);
			ConsentTracker__ctor_m478B76472BE051496CB2D8EE77D91DED3D332E5A(L_14, L_13, NULL);
			__this->___U3CconsentTrackerU3E5__7_10 = L_14;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CconsentTrackerU3E5__7_10), (void*)L_14);
			// string projectId = cloudProjectId?.GetCloudProjectId() ?? Application.cloudProjectId;
			RuntimeObject* L_15 = __this->___U3CcloudProjectIdU3E5__1_4;
			RuntimeObject* L_16 = L_15;
			G_B5_0 = L_16;
			G_B5_1 = __this;
			if (L_16)
			{
				G_B6_0 = L_16;
				G_B6_1 = __this;
				goto IL_0091_1;
			}
		}
		{
			G_B7_0 = ((String_t*)(NULL));
			G_B7_1 = G_B5_1;
			goto IL_0096_1;
		}

IL_0091_1:
		{
			NullCheck(G_B6_0);
			String_t* L_17;
			L_17 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Unity.Services.Core.Configuration.Internal.ICloudProjectId::GetCloudProjectId() */, ICloudProjectId_t366B66869ECC734B15C1F60633D2B998CD9231FE_il2cpp_TypeInfo_var, G_B6_0);
			G_B7_0 = L_17;
			G_B7_1 = G_B6_1;
		}

IL_0096_1:
		{
			String_t* L_18 = G_B7_0;
			G_B8_0 = L_18;
			G_B8_1 = G_B7_1;
			if (L_18)
			{
				G_B9_0 = L_18;
				G_B9_1 = G_B7_1;
				goto IL_009f_1;
			}
		}
		{
			String_t* L_19;
			L_19 = Application_get_cloudProjectId_mC4A9551019BB135B39D816F55A912CC2E9858F84(NULL);
			G_B9_0 = L_19;
			G_B9_1 = G_B8_1;
		}

IL_009f_1:
		{
			NullCheck(G_B9_1);
			G_B9_1->___U3CprojectIdU3E5__8_11 = G_B9_0;
			Il2CppCodeGenWriteBarrier((void**)(&G_B9_1->___U3CprojectIdU3E5__8_11), (void*)G_B9_0);
			// string collectUrl = String.Format(k_CollectUrlPattern, projectId, environments.Current.ToLowerInvariant());
			String_t* L_20 = __this->___U3CprojectIdU3E5__8_11;
			RuntimeObject* L_21 = __this->___U3CenvironmentsU3E5__4_7;
			NullCheck(L_21);
			String_t* L_22;
			L_22 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Unity.Services.Core.Environments.Internal.IEnvironments::get_Current() */, IEnvironments_t9DCAF0398EB856DBE771A9C2D7B120661D628CB7_il2cpp_TypeInfo_var, L_21);
			NullCheck(L_22);
			String_t* L_23;
			L_23 = String_ToLowerInvariant_mBE32C93DE27C5353FEA3FA654FC1DDBE3D0EB0F2(L_22, NULL);
			String_t* L_24;
			L_24 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteralE5F64215B865771BB0C5BB83564A0D46D2F5CB44, L_20, L_23, NULL);
			__this->___U3CcollectUrlU3E5__9_12 = L_24;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcollectUrlU3E5__9_12), (void*)L_24);
			// var buffer = new BufferX(new BufferSystemCalls(), new DiskCache(new FileSystemCalls()));
			BufferSystemCalls_t30CA07BE3DD2F29E9F7036ED838F0C92A50480F1* L_25 = (BufferSystemCalls_t30CA07BE3DD2F29E9F7036ED838F0C92A50480F1*)il2cpp_codegen_object_new(BufferSystemCalls_t30CA07BE3DD2F29E9F7036ED838F0C92A50480F1_il2cpp_TypeInfo_var);
			NullCheck(L_25);
			BufferSystemCalls__ctor_m11A81CCB33E4BA6C679E191AB344CC3277C57B8C(L_25, NULL);
			FileSystemCalls_t1A2213109FA10AFB80C343E28A45F13F053970A3* L_26 = (FileSystemCalls_t1A2213109FA10AFB80C343E28A45F13F053970A3*)il2cpp_codegen_object_new(FileSystemCalls_t1A2213109FA10AFB80C343E28A45F13F053970A3_il2cpp_TypeInfo_var);
			NullCheck(L_26);
			FileSystemCalls__ctor_mED48303E0E5ADE100ED297D2F82072B5162F3E2A(L_26, NULL);
			DiskCache_tE19D214B0538F2CC9D59D4F827B480AEBCEF368D* L_27 = (DiskCache_tE19D214B0538F2CC9D59D4F827B480AEBCEF368D*)il2cpp_codegen_object_new(DiskCache_tE19D214B0538F2CC9D59D4F827B480AEBCEF368D_il2cpp_TypeInfo_var);
			NullCheck(L_27);
			DiskCache__ctor_mBA8B9A9ECF83506913BC62A4782F490C2D300263(L_27, L_26, NULL);
			BufferX_t61043C3179F78166341D64689A662C738496055C* L_28 = (BufferX_t61043C3179F78166341D64689A662C738496055C*)il2cpp_codegen_object_new(BufferX_t61043C3179F78166341D64689A662C738496055C_il2cpp_TypeInfo_var);
			NullCheck(L_28);
			BufferX__ctor_mBBE8167311FE2989DC8174E1DFB53EB59276540C(L_28, L_25, L_27, NULL);
			__this->___U3CbufferU3E5__10_13 = L_28;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CbufferU3E5__10_13), (void*)L_28);
			// var containerObject = AnalyticsContainer.CreateContainer();
			AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1* L_29;
			L_29 = AnalyticsContainer_CreateContainer_m56826B5BF923F5DEE9B8A6CE1B935A191D0805B3(NULL);
			__this->___U3CcontainerObjectU3E5__11_14 = L_29;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcontainerObjectU3E5__11_14), (void*)L_29);
			// var webRequestHelper = new WebRequestHelper();
			WebRequestHelper_t90785D95A7FBCCA284192A9CB95D1DA845D57E71* L_30 = (WebRequestHelper_t90785D95A7FBCCA284192A9CB95D1DA845D57E71*)il2cpp_codegen_object_new(WebRequestHelper_t90785D95A7FBCCA284192A9CB95D1DA845D57E71_il2cpp_TypeInfo_var);
			NullCheck(L_30);
			WebRequestHelper__ctor_m5F76E493A0C15311928DCCCCE293752DF3DA0CC9(L_30, NULL);
			__this->___U3CwebRequestHelperU3E5__12_15 = L_30;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CwebRequestHelperU3E5__12_15), (void*)L_30);
			// var dispatcher = new Dispatcher(webRequestHelper, collectUrl);
			WebRequestHelper_t90785D95A7FBCCA284192A9CB95D1DA845D57E71* L_31 = __this->___U3CwebRequestHelperU3E5__12_15;
			String_t* L_32 = __this->___U3CcollectUrlU3E5__9_12;
			Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE* L_33 = (Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE*)il2cpp_codegen_object_new(Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE_il2cpp_TypeInfo_var);
			NullCheck(L_33);
			Dispatcher__ctor_mDBB513D6B226DB1B13C536AE8FF0A531340D7208(L_33, L_31, L_32, NULL);
			__this->___U3CdispatcherU3E5__13_16 = L_33;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CdispatcherU3E5__13_16), (void*)L_33);
			// AnalyticsService.internalInstance = new AnalyticsServiceInstance(
			//     new DataGenerator(),
			//     buffer,
			//     coreStatsHelper,
			//     consentTracker,
			//     dispatcher,
			//     new AnalyticsForgetter(collectUrl, new PlayerPrefsPersistence(), webRequestHelper),
			//     installationId,
			//     playerId,
			//     environments.Current,
			//     customUserId,
			//     new AnalyticsServiceSystemCalls(),
			//     containerObject);
			DataGenerator_t25BC607B3B6D456EAA5DC9C3F600C4B560800183* L_34 = (DataGenerator_t25BC607B3B6D456EAA5DC9C3F600C4B560800183*)il2cpp_codegen_object_new(DataGenerator_t25BC607B3B6D456EAA5DC9C3F600C4B560800183_il2cpp_TypeInfo_var);
			NullCheck(L_34);
			DataGenerator__ctor_m659FA5FD00306B47B1A9D7461343C53EBCC0E85C(L_34, NULL);
			BufferX_t61043C3179F78166341D64689A662C738496055C* L_35 = __this->___U3CbufferU3E5__10_13;
			CoreStatsHelper_tBF3F119096A7ABBDDC9F22ACBF13FA25FCD166E6* L_36 = __this->___U3CcoreStatsHelperU3E5__6_9;
			ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* L_37 = __this->___U3CconsentTrackerU3E5__7_10;
			Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE* L_38 = __this->___U3CdispatcherU3E5__13_16;
			String_t* L_39 = __this->___U3CcollectUrlU3E5__9_12;
			PlayerPrefsPersistence_tA41639170405D0B663305EBE5D18CD5E27583DEF* L_40 = (PlayerPrefsPersistence_tA41639170405D0B663305EBE5D18CD5E27583DEF*)il2cpp_codegen_object_new(PlayerPrefsPersistence_tA41639170405D0B663305EBE5D18CD5E27583DEF_il2cpp_TypeInfo_var);
			NullCheck(L_40);
			PlayerPrefsPersistence__ctor_m3F310A297230AB1ED4FD0884D4AAC45082E3DD77(L_40, NULL);
			WebRequestHelper_t90785D95A7FBCCA284192A9CB95D1DA845D57E71* L_41 = __this->___U3CwebRequestHelperU3E5__12_15;
			AnalyticsForgetter_tA1B9D1F48FB306C80BE60C9858646BC1368948C0* L_42 = (AnalyticsForgetter_tA1B9D1F48FB306C80BE60C9858646BC1368948C0*)il2cpp_codegen_object_new(AnalyticsForgetter_tA1B9D1F48FB306C80BE60C9858646BC1368948C0_il2cpp_TypeInfo_var);
			NullCheck(L_42);
			AnalyticsForgetter__ctor_mB7EFEF4ADE978A9CAD976324BCC6BE797558DB0E(L_42, L_39, L_40, L_41, NULL);
			RuntimeObject* L_43 = __this->___U3CinstallationIdU3E5__2_5;
			RuntimeObject* L_44 = __this->___U3CplayerIdU3E5__3_6;
			RuntimeObject* L_45 = __this->___U3CenvironmentsU3E5__4_7;
			NullCheck(L_45);
			String_t* L_46;
			L_46 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Unity.Services.Core.Environments.Internal.IEnvironments::get_Current() */, IEnvironments_t9DCAF0398EB856DBE771A9C2D7B120661D628CB7_il2cpp_TypeInfo_var, L_45);
			RuntimeObject* L_47 = __this->___U3CcustomUserIdU3E5__5_8;
			AnalyticsServiceSystemCalls_tA75EFB9A19C30CBFEABF5BF0578E1636083AC745* L_48 = (AnalyticsServiceSystemCalls_tA75EFB9A19C30CBFEABF5BF0578E1636083AC745*)il2cpp_codegen_object_new(AnalyticsServiceSystemCalls_tA75EFB9A19C30CBFEABF5BF0578E1636083AC745_il2cpp_TypeInfo_var);
			NullCheck(L_48);
			AnalyticsServiceSystemCalls__ctor_m0CE98AA41596DAEC3FE38B2657205368207C45D0(L_48, NULL);
			AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1* L_49 = __this->___U3CcontainerObjectU3E5__11_14;
			AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* L_50 = (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62*)il2cpp_codegen_object_new(AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62_il2cpp_TypeInfo_var);
			NullCheck(L_50);
			AnalyticsServiceInstance__ctor_m5CC64E3971825C835A1EC42BC84478BD7E76758A(L_50, L_34, L_35, L_36, L_37, L_38, L_42, L_43, L_44, L_46, L_47, L_48, L_49, NULL);
			((AnalyticsService_t995B7CE25709A192F70345B0335516F282C0CE7B_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsService_t995B7CE25709A192F70345B0335516F282C0CE7B_il2cpp_TypeInfo_var))->___internalInstance_0 = L_50;
			Il2CppCodeGenWriteBarrier((void**)(&((AnalyticsService_t995B7CE25709A192F70345B0335516F282C0CE7B_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsService_t995B7CE25709A192F70345B0335516F282C0CE7B_il2cpp_TypeInfo_var))->___internalInstance_0), (void*)L_50);
			// buffer.InjectIds(AnalyticsService.internalInstance);
			BufferX_t61043C3179F78166341D64689A662C738496055C* L_51 = __this->___U3CbufferU3E5__10_13;
			AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* L_52 = ((AnalyticsService_t995B7CE25709A192F70345B0335516F282C0CE7B_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsService_t995B7CE25709A192F70345B0335516F282C0CE7B_il2cpp_TypeInfo_var))->___internalInstance_0;
			NullCheck(L_51);
			BufferX_InjectIds_m7ABB2F8A2226B6A8C1D36AA1BCC305C3B928717D(L_51, L_52, NULL);
			// containerObject.Initialize(AnalyticsService.internalInstance);
			AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1* L_53 = __this->___U3CcontainerObjectU3E5__11_14;
			AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* L_54 = ((AnalyticsService_t995B7CE25709A192F70345B0335516F282C0CE7B_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsService_t995B7CE25709A192F70345B0335516F282C0CE7B_il2cpp_TypeInfo_var))->___internalInstance_0;
			NullCheck(L_53);
			AnalyticsContainer_Initialize_m57C0D3C612C0DD90A98563A788EC6BE852555111(L_53, L_54, NULL);
			// AnalyticsService.internalInstance.ResumeDataDeletionIfNecessary();
			AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* L_55 = ((AnalyticsService_t995B7CE25709A192F70345B0335516F282C0CE7B_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsService_t995B7CE25709A192F70345B0335516F282C0CE7B_il2cpp_TypeInfo_var))->___internalInstance_0;
			NullCheck(L_55);
			AnalyticsServiceInstance_ResumeDataDeletionIfNecessary_mA71BC424BAB3BDCA709948E63934C16562EA5AE6(L_55, NULL);
			// StandardEventServiceComponent standardEventComponent = new StandardEventServiceComponent(
			//     registry.GetServiceComponent<IProjectConfiguration>(),
			//     AnalyticsService.internalInstance);
			CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* L_56 = __this->___registry_2;
			NullCheck(L_56);
			RuntimeObject* L_57;
			L_57 = CoreRegistry_GetServiceComponent_TisIProjectConfiguration_tB5A7516DEB869AD005431EC83C6E02221D2B60D2_mF70AFB94326EDB167066B7836231B13A52150312(L_56, CoreRegistry_GetServiceComponent_TisIProjectConfiguration_tB5A7516DEB869AD005431EC83C6E02221D2B60D2_mF70AFB94326EDB167066B7836231B13A52150312_RuntimeMethod_var);
			AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* L_58 = ((AnalyticsService_t995B7CE25709A192F70345B0335516F282C0CE7B_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsService_t995B7CE25709A192F70345B0335516F282C0CE7B_il2cpp_TypeInfo_var))->___internalInstance_0;
			StandardEventServiceComponent_t587EC5F02461A7AD305539BAB07A2B93FD56E2BB* L_59 = (StandardEventServiceComponent_t587EC5F02461A7AD305539BAB07A2B93FD56E2BB*)il2cpp_codegen_object_new(StandardEventServiceComponent_t587EC5F02461A7AD305539BAB07A2B93FD56E2BB_il2cpp_TypeInfo_var);
			NullCheck(L_59);
			StandardEventServiceComponent__ctor_mED8BAC8D2E1D561A6DCB4A1F35D4E7A60553CB87(L_59, L_57, L_58, NULL);
			__this->___U3CstandardEventComponentU3E5__14_17 = L_59;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CstandardEventComponentU3E5__14_17), (void*)L_59);
			// registry.RegisterServiceComponent<IAnalyticsStandardEventComponent>(standardEventComponent);
			CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* L_60 = __this->___registry_2;
			StandardEventServiceComponent_t587EC5F02461A7AD305539BAB07A2B93FD56E2BB* L_61 = __this->___U3CstandardEventComponentU3E5__14_17;
			NullCheck(L_60);
			CoreRegistry_RegisterServiceComponent_TisIAnalyticsStandardEventComponent_tF6FA10DAAE59FC2DD9C6441D6B2E8BDA6EDDA807_mBC81DFA289107F2FAEAC53E5B7785A2C65A76905(L_60, L_61, CoreRegistry_RegisterServiceComponent_TisIAnalyticsStandardEventComponent_tF6FA10DAAE59FC2DD9C6441D6B2E8BDA6EDDA807_mBC81DFA289107F2FAEAC53E5B7785A2C65A76905_RuntimeMethod_var);
			// AnalyticsUserIdServiceComponent userIdComponent = new AnalyticsUserIdServiceComponent(AnalyticsService.internalInstance);
			AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* L_62 = ((AnalyticsService_t995B7CE25709A192F70345B0335516F282C0CE7B_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsService_t995B7CE25709A192F70345B0335516F282C0CE7B_il2cpp_TypeInfo_var))->___internalInstance_0;
			AnalyticsUserIdServiceComponent_t2A2B82EF9FBA795836189A3A0A3274A87D4E1B9B* L_63 = (AnalyticsUserIdServiceComponent_t2A2B82EF9FBA795836189A3A0A3274A87D4E1B9B*)il2cpp_codegen_object_new(AnalyticsUserIdServiceComponent_t2A2B82EF9FBA795836189A3A0A3274A87D4E1B9B_il2cpp_TypeInfo_var);
			NullCheck(L_63);
			AnalyticsUserIdServiceComponent__ctor_mC4D9557B2E49D4883E699F5F8034FE65740D334E(L_63, L_62, NULL);
			__this->___U3CuserIdComponentU3E5__15_18 = L_63;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CuserIdComponentU3E5__15_18), (void*)L_63);
			// registry.RegisterServiceComponent<IAnalyticsUserId>(userIdComponent);
			CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* L_64 = __this->___registry_2;
			AnalyticsUserIdServiceComponent_t2A2B82EF9FBA795836189A3A0A3274A87D4E1B9B* L_65 = __this->___U3CuserIdComponentU3E5__15_18;
			NullCheck(L_64);
			CoreRegistry_RegisterServiceComponent_TisIAnalyticsUserId_t8C2078BBFD0D5C5EB8C45126592632FAAA1F2455_m24033D2421A44776EB156EB848C371BA5EEADBCC(L_64, L_65, CoreRegistry_RegisterServiceComponent_TisIAnalyticsUserId_t8C2078BBFD0D5C5EB8C45126592632FAAA1F2455_m24033D2421A44776EB156EB848C371BA5EEADBCC_RuntimeMethod_var);
			// await Task.CompletedTask;
			il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_66;
			L_66 = Task_get_CompletedTask_mA35969BCF3240B8BA63918BA0C527F809C477E27_inline(NULL);
			NullCheck(L_66);
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_67;
			L_67 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_66, NULL);
			V_1 = L_67;
			bool L_68;
			L_68 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_1), NULL);
			if (L_68)
			{
				goto IL_0249_1;
			}
		}
		{
			int32_t L_69 = 0;
			V_0 = L_69;
			__this->___U3CU3E1__state_0 = L_69;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_70 = V_1;
			__this->___U3CU3Eu__1_19 = L_70;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_19))->___m_task_0), (void*)NULL);
			V_2 = __this;
			AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_71 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CInitializeU3Ed__2_tE70F0976A2CAD0E2F0A8E8462D49D2EFA9AB281F_m6CA7288B39A328F23D802B24A3FD2765BA9F11F0(L_71, (&V_1), (&V_2), AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CInitializeU3Ed__2_tE70F0976A2CAD0E2F0A8E8462D49D2EFA9AB281F_m6CA7288B39A328F23D802B24A3FD2765BA9F11F0_RuntimeMethod_var);
			goto IL_0354;
		}

IL_022d_1:
		{
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_72 = __this->___U3CU3Eu__1_19;
			V_1 = L_72;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_73 = (&__this->___U3CU3Eu__1_19);
			il2cpp_codegen_initobj(L_73, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
			int32_t L_74 = (-1);
			V_0 = L_74;
			__this->___U3CU3E1__state_0 = L_74;
		}

IL_0249_1:
		{
			TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_1), NULL);
			goto IL_02d7;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0256;
		}
		throw e;
	}

CATCH_0256:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CcloudProjectIdU3E5__1_4 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcloudProjectIdU3E5__1_4), (void*)(RuntimeObject*)NULL);
		__this->___U3CinstallationIdU3E5__2_5 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CinstallationIdU3E5__2_5), (void*)(RuntimeObject*)NULL);
		__this->___U3CplayerIdU3E5__3_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CplayerIdU3E5__3_6), (void*)(RuntimeObject*)NULL);
		__this->___U3CenvironmentsU3E5__4_7 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CenvironmentsU3E5__4_7), (void*)(RuntimeObject*)NULL);
		__this->___U3CcustomUserIdU3E5__5_8 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcustomUserIdU3E5__5_8), (void*)(RuntimeObject*)NULL);
		__this->___U3CcoreStatsHelperU3E5__6_9 = (CoreStatsHelper_tBF3F119096A7ABBDDC9F22ACBF13FA25FCD166E6*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcoreStatsHelperU3E5__6_9), (void*)(CoreStatsHelper_tBF3F119096A7ABBDDC9F22ACBF13FA25FCD166E6*)NULL);
		__this->___U3CconsentTrackerU3E5__7_10 = (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CconsentTrackerU3E5__7_10), (void*)(ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4*)NULL);
		__this->___U3CprojectIdU3E5__8_11 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CprojectIdU3E5__8_11), (void*)(String_t*)NULL);
		__this->___U3CcollectUrlU3E5__9_12 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcollectUrlU3E5__9_12), (void*)(String_t*)NULL);
		__this->___U3CbufferU3E5__10_13 = (BufferX_t61043C3179F78166341D64689A662C738496055C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CbufferU3E5__10_13), (void*)(BufferX_t61043C3179F78166341D64689A662C738496055C*)NULL);
		__this->___U3CcontainerObjectU3E5__11_14 = (AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcontainerObjectU3E5__11_14), (void*)(AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1*)NULL);
		__this->___U3CwebRequestHelperU3E5__12_15 = (WebRequestHelper_t90785D95A7FBCCA284192A9CB95D1DA845D57E71*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CwebRequestHelperU3E5__12_15), (void*)(WebRequestHelper_t90785D95A7FBCCA284192A9CB95D1DA845D57E71*)NULL);
		__this->___U3CdispatcherU3E5__13_16 = (Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CdispatcherU3E5__13_16), (void*)(Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE*)NULL);
		__this->___U3CstandardEventComponentU3E5__14_17 = (StandardEventServiceComponent_t587EC5F02461A7AD305539BAB07A2B93FD56E2BB*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CstandardEventComponentU3E5__14_17), (void*)(StandardEventServiceComponent_t587EC5F02461A7AD305539BAB07A2B93FD56E2BB*)NULL);
		__this->___U3CuserIdComponentU3E5__15_18 = (AnalyticsUserIdServiceComponent_t2A2B82EF9FBA795836189A3A0A3274A87D4E1B9B*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CuserIdComponentU3E5__15_18), (void*)(AnalyticsUserIdServiceComponent_t2A2B82EF9FBA795836189A3A0A3274A87D4E1B9B*)NULL);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_75 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_76 = V_3;
		AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B(L_75, L_76, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0354;
	}// end catch (depth: 1)

IL_02d7:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CcloudProjectIdU3E5__1_4 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcloudProjectIdU3E5__1_4), (void*)(RuntimeObject*)NULL);
		__this->___U3CinstallationIdU3E5__2_5 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CinstallationIdU3E5__2_5), (void*)(RuntimeObject*)NULL);
		__this->___U3CplayerIdU3E5__3_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CplayerIdU3E5__3_6), (void*)(RuntimeObject*)NULL);
		__this->___U3CenvironmentsU3E5__4_7 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CenvironmentsU3E5__4_7), (void*)(RuntimeObject*)NULL);
		__this->___U3CcustomUserIdU3E5__5_8 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcustomUserIdU3E5__5_8), (void*)(RuntimeObject*)NULL);
		__this->___U3CcoreStatsHelperU3E5__6_9 = (CoreStatsHelper_tBF3F119096A7ABBDDC9F22ACBF13FA25FCD166E6*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcoreStatsHelperU3E5__6_9), (void*)(CoreStatsHelper_tBF3F119096A7ABBDDC9F22ACBF13FA25FCD166E6*)NULL);
		__this->___U3CconsentTrackerU3E5__7_10 = (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CconsentTrackerU3E5__7_10), (void*)(ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4*)NULL);
		__this->___U3CprojectIdU3E5__8_11 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CprojectIdU3E5__8_11), (void*)(String_t*)NULL);
		__this->___U3CcollectUrlU3E5__9_12 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcollectUrlU3E5__9_12), (void*)(String_t*)NULL);
		__this->___U3CbufferU3E5__10_13 = (BufferX_t61043C3179F78166341D64689A662C738496055C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CbufferU3E5__10_13), (void*)(BufferX_t61043C3179F78166341D64689A662C738496055C*)NULL);
		__this->___U3CcontainerObjectU3E5__11_14 = (AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcontainerObjectU3E5__11_14), (void*)(AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1*)NULL);
		__this->___U3CwebRequestHelperU3E5__12_15 = (WebRequestHelper_t90785D95A7FBCCA284192A9CB95D1DA845D57E71*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CwebRequestHelperU3E5__12_15), (void*)(WebRequestHelper_t90785D95A7FBCCA284192A9CB95D1DA845D57E71*)NULL);
		__this->___U3CdispatcherU3E5__13_16 = (Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CdispatcherU3E5__13_16), (void*)(Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE*)NULL);
		__this->___U3CstandardEventComponentU3E5__14_17 = (StandardEventServiceComponent_t587EC5F02461A7AD305539BAB07A2B93FD56E2BB*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CstandardEventComponentU3E5__14_17), (void*)(StandardEventServiceComponent_t587EC5F02461A7AD305539BAB07A2B93FD56E2BB*)NULL);
		__this->___U3CuserIdComponentU3E5__15_18 = (AnalyticsUserIdServiceComponent_t2A2B82EF9FBA795836189A3A0A3274A87D4E1B9B*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CuserIdComponentU3E5__15_18), (void*)(AnalyticsUserIdServiceComponent_t2A2B82EF9FBA795836189A3A0A3274A87D4E1B9B*)NULL);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_77 = (&__this->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE(L_77, NULL);
	}

IL_0354:
	{
		return;
	}
}
// System.Void Ua2CoreInitializeCallback/<Initialize>d__2::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeU3Ed__2_SetStateMachine_m90B148F8797C14917EEA2A2E6D30FB4562499A8B (U3CInitializeU3Ed__2_tE70F0976A2CAD0E2F0A8E8462D49D2EFA9AB281F* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance::OldForgetMeEventUploaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsServiceInstance_OldForgetMeEventUploaded_mF328362CE747DFFEC071EAD40FA89F7698C3E9B2 (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAnalyticsContainer_t742F8268D801129AAF7F2486A8B4CE95B73985A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConsentTracker_t93AFBEAEA2AE9AC2A012EEBFA4344E527FD92550_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// m_ConsentTracker.FinishOptOutProcess();
		RuntimeObject* L_0 = __this->___m_ConsentTracker_8;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(0 /* System.Void Unity.Services.Analytics.Internal.IConsentTracker::FinishOptOutProcess() */, IConsentTracker_t93AFBEAEA2AE9AC2A012EEBFA4344E527FD92550_il2cpp_TypeInfo_var, L_0);
		// if (!m_IsActive)
		bool L_1 = __this->___m_IsActive_18;
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		// m_Container.Disable();
		RuntimeObject* L_3 = __this->___m_Container_13;
		NullCheck(L_3);
		InterfaceActionInvoker0::Invoke(1 /* System.Void Unity.Services.Analytics.IAnalyticsContainer::Disable() */, IAnalyticsContainer_t742F8268D801129AAF7F2486A8B4CE95B73985A1_il2cpp_TypeInfo_var, L_3);
	}

IL_0028:
	{
		// }
		return;
	}
}
// System.String Unity.Services.Analytics.AnalyticsServiceInstance::get_CustomAnalyticsId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AnalyticsServiceInstance_get_CustomAnalyticsId_mEB3038CA04D336E4EF0C1A6D6E0D6A94E025CF60 (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IExternalUserId_t50A07D7165D254D971AA529FFE55B4A595A75F25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// internal string CustomAnalyticsId { get { return m_CustomUserId.UserId; } }
		RuntimeObject* L_0 = __this->___m_CustomUserId_11;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Unity.Services.Core.Configuration.Internal.IExternalUserId::get_UserId() */, IExternalUserId_t50A07D7165D254D971AA529FFE55B4A595A75F25_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// internal string CustomAnalyticsId { get { return m_CustomUserId.UserId; } }
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.String Unity.Services.Analytics.AnalyticsServiceInstance::get_SessionID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AnalyticsServiceInstance_get_SessionID_m0BE34B73BEC292E51E9721811451EC359D9837F0 (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) 
{
	{
		// public string SessionID { get; private set; }
		String_t* L_0 = __this->___U3CSessionIDU3Ek__BackingField_15;
		return L_0;
	}
}
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance::set_SessionID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsServiceInstance_set_SessionID_m48AF420DBE356BD2F73DF27848664B9117B1CA52 (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string SessionID { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CSessionIDU3Ek__BackingField_15 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSessionIDU3Ek__BackingField_15), (void*)L_0);
		return;
	}
}
// System.String Unity.Services.Analytics.AnalyticsServiceInstance::get_UserId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AnalyticsServiceInstance_get_UserId_mBBDD58C51A590919EB9FBB7322A18C0D9AA11F71 (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// public string UserId { get { return GetAnalyticsUserID(); } }
		String_t* L_0;
		L_0 = AnalyticsServiceInstance_GetAnalyticsUserID_m765E15065C72B9B1F8687C1129FD703048851A27(__this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public string UserId { get { return GetAnalyticsUserID(); } }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.String Unity.Services.Analytics.AnalyticsServiceInstance::get_InstallId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AnalyticsServiceInstance_get_InstallId_m7ADCF67CCEF349567B8EBE9EF432D41CB397AAE7 (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInstallationId_tCE6DEEEBAFABEB9EC621BD1646D82BC9D82BFB0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// public string InstallId { get { return m_InstallId.GetOrCreateIdentifier(); } }
		RuntimeObject* L_0 = __this->___m_InstallId_5;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Unity.Services.Core.Device.Internal.IInstallationId::GetOrCreateIdentifier() */, IInstallationId_tCE6DEEEBAFABEB9EC621BD1646D82BC9D82BFB0C_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// public string InstallId { get { return m_InstallId.GetOrCreateIdentifier(); } }
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.String Unity.Services.Analytics.AnalyticsServiceInstance::get_PlayerId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AnalyticsServiceInstance_get_PlayerId_m4F995ADCD4B6BEFF337CC44244B64A14CA6EF08C (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlayerId_t6A7BAE55B4D78E87B15B9261828E897BAACBF913_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	{
		// public string PlayerId { get { return m_PlayerId?.PlayerId; } }
		RuntimeObject* L_0 = __this->___m_PlayerId_4;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000e;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		goto IL_0013;
	}

IL_000e:
	{
		NullCheck(G_B2_0);
		String_t* L_2;
		L_2 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Unity.Services.Authentication.Internal.IPlayerId::get_PlayerId() */, IPlayerId_t6A7BAE55B4D78E87B15B9261828E897BAACBF913_il2cpp_TypeInfo_var, G_B2_0);
		G_B3_0 = L_2;
	}

IL_0013:
	{
		V_0 = G_B3_0;
		goto IL_0016;
	}

IL_0016:
	{
		// public string PlayerId { get { return m_PlayerId?.PlayerId; } }
		String_t* L_3 = V_0;
		return L_3;
	}
}
// System.String Unity.Services.Analytics.AnalyticsServiceInstance::get_SessionId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AnalyticsServiceInstance_get_SessionId_m64B6D38C0DCEE56C650025D476B3E30DE57AF509 (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// public string SessionId { get { return SessionID; } }
		String_t* L_0;
		L_0 = AnalyticsServiceInstance_get_SessionID_m0BE34B73BEC292E51E9721811451EC359D9837F0_inline(__this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public string SessionId { get { return SessionID; } }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance::.ctor(Unity.Services.Analytics.Data.IDataGenerator,Unity.Services.Analytics.Internal.IBuffer,Unity.Services.Analytics.ICoreStatsHelper,Unity.Services.Analytics.Internal.IConsentTracker,Unity.Services.Analytics.Internal.IDispatcher,Unity.Services.Analytics.Internal.IAnalyticsForgetter,Unity.Services.Core.Device.Internal.IInstallationId,Unity.Services.Authentication.Internal.IPlayerId,System.String,Unity.Services.Core.Configuration.Internal.IExternalUserId,Unity.Services.Analytics.IAnalyticsServiceSystemCalls,Unity.Services.Analytics.IAnalyticsContainer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsServiceInstance__ctor_m5CC64E3971825C835A1EC42BC84478BD7E76758A (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, RuntimeObject* ___dataGenerator0, RuntimeObject* ___realBuffer1, RuntimeObject* ___coreStatsHelper2, RuntimeObject* ___consentTracker3, RuntimeObject* ___dispatcher4, RuntimeObject* ___forgetter5, RuntimeObject* ___installId6, RuntimeObject* ___playerId7, String_t* ___environment8, RuntimeObject* ___customAnalyticsId9, RuntimeObject* ___systemCalls10, RuntimeObject* ___container11, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDataGenerator_t3CD09958BA210D4EE5B68AE79A6936634EE801E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDispatcher_t4DE02B283A563837EE126BBB7BA0C5E903D3357C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransactionCurrencyConverter_t3296A312BAFE7A8FC56182C3D53BEFD1D9474133_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly TimeSpan k_BackgroundSessionRefreshPeriod = TimeSpan.FromMinutes(5);
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_0;
		L_0 = TimeSpan_FromMinutes_m6A205525E41E41D13637359BA49AC7F3B23F714E((5.0), NULL);
		__this->___k_BackgroundSessionRefreshPeriod_2 = L_0;
		// bool m_StartUpEventsRecorded = false;
		__this->___m_StartUpEventsRecorded_20 = (bool)0;
		// readonly TransactionCurrencyConverter converter = new TransactionCurrencyConverter();
		TransactionCurrencyConverter_t3296A312BAFE7A8FC56182C3D53BEFD1D9474133* L_1 = (TransactionCurrencyConverter_t3296A312BAFE7A8FC56182C3D53BEFD1D9474133*)il2cpp_codegen_object_new(TransactionCurrencyConverter_t3296A312BAFE7A8FC56182C3D53BEFD1D9474133_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		TransactionCurrencyConverter__ctor_m5ACA84E75A13698EAF50E70DF0FA9FA1EC7DBFFD(L_1, NULL);
		__this->___converter_21 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___converter_21), (void*)L_1);
		// internal AnalyticsServiceInstance(IDataGenerator dataGenerator,
		//                                   IBuffer realBuffer,
		//                                   ICoreStatsHelper coreStatsHelper,
		//                                   IConsentTracker consentTracker,
		//                                   IDispatcher dispatcher,
		//                                   IAnalyticsForgetter forgetter,
		//                                   IInstallationId installId,
		//                                   IPlayerId playerId,
		//                                   string environment,
		//                                   IExternalUserId customAnalyticsId,
		//                                   IAnalyticsServiceSystemCalls systemCalls,
		//                                   IAnalyticsContainer container)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// m_CustomUserId = customAnalyticsId;
		RuntimeObject* L_2 = ___customAnalyticsId9;
		__this->___m_CustomUserId_11 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CustomUserId_11), (void*)L_2);
		// m_DataGenerator = dataGenerator;
		RuntimeObject* L_3 = ___dataGenerator0;
		__this->___m_DataGenerator_6 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_DataGenerator_6), (void*)L_3);
		// m_SystemCalls = systemCalls;
		RuntimeObject* L_4 = ___systemCalls10;
		__this->___m_SystemCalls_12 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_SystemCalls_12), (void*)L_4);
		// m_CoreStatsHelper = coreStatsHelper;
		RuntimeObject* L_5 = ___coreStatsHelper2;
		__this->___m_CoreStatsHelper_7 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CoreStatsHelper_7), (void*)L_5);
		// m_ConsentTracker = consentTracker;
		RuntimeObject* L_6 = ___consentTracker3;
		__this->___m_ConsentTracker_8 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ConsentTracker_8), (void*)L_6);
		// m_DataDispatcher = dispatcher;
		RuntimeObject* L_7 = ___dispatcher4;
		__this->___m_DataDispatcher_9 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_DataDispatcher_9), (void*)L_7);
		// m_Container = container;
		RuntimeObject* L_8 = ___container11;
		__this->___m_Container_13 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Container_13), (void*)L_8);
		// m_DataBuffer = realBuffer;
		RuntimeObject* L_9 = ___realBuffer1;
		__this->___m_DataBuffer_14 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_DataBuffer_14), (void*)L_9);
		// m_DataDispatcher.SetBuffer(realBuffer);
		RuntimeObject* L_10 = __this->___m_DataDispatcher_9;
		RuntimeObject* L_11 = ___realBuffer1;
		NullCheck(L_10);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1 /* System.Void Unity.Services.Analytics.Internal.IDispatcher::SetBuffer(Unity.Services.Analytics.Internal.IBuffer) */, IDispatcher_t4DE02B283A563837EE126BBB7BA0C5E903D3357C_il2cpp_TypeInfo_var, L_10, L_11);
		// m_DataGenerator.SetBuffer(realBuffer);
		RuntimeObject* L_12 = __this->___m_DataGenerator_6;
		RuntimeObject* L_13 = ___realBuffer1;
		NullCheck(L_12);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(0 /* System.Void Unity.Services.Analytics.Data.IDataGenerator::SetBuffer(Unity.Services.Analytics.Internal.IBuffer) */, IDataGenerator_t3CD09958BA210D4EE5B68AE79A6936634EE801E4_il2cpp_TypeInfo_var, L_12, L_13);
		// m_IsActive = false;
		__this->___m_IsActive_18 = (bool)0;
		// m_AnalyticsForgetter = forgetter;
		RuntimeObject* L_14 = ___forgetter5;
		__this->___m_AnalyticsForgetter_10 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_AnalyticsForgetter_10), (void*)L_14);
		// m_CommonParams = new StdCommonParams
		// {
		//     ClientVersion = Application.version,
		//     ProjectID = Application.cloudProjectId,
		//     GameBundleID = Application.identifier,
		//     Platform = Runtime.Name(),
		//     BuildGuuid = Application.buildGUID,
		//     Idfv = SystemInfo.deviceUniqueIdentifier
		// };
		StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* L_15 = (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701*)il2cpp_codegen_object_new(StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		StdCommonParams__ctor_m973A163478DDB4C6DC21AF142FF5CF7E46D254CA(L_15, NULL);
		StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* L_16 = L_15;
		String_t* L_17;
		L_17 = Application_get_version_mD6AC9813ABCAD4D2A1F764F99E26068CA5B830F2(NULL);
		NullCheck(L_16);
		StdCommonParams_set_ClientVersion_m97C2B0A6328C2D38BF31BED3F628D0902F36A3D0_inline(L_16, L_17, NULL);
		StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* L_18 = L_16;
		String_t* L_19;
		L_19 = Application_get_cloudProjectId_mC4A9551019BB135B39D816F55A912CC2E9858F84(NULL);
		NullCheck(L_18);
		StdCommonParams_set_ProjectID_m3119C391E989366B60D3A7FC4B4516A0ED285653_inline(L_18, L_19, NULL);
		StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* L_20 = L_18;
		String_t* L_21;
		L_21 = Application_get_identifier_m26B38D49FA10A46D61C1309769A59E9CF7460006(NULL);
		NullCheck(L_20);
		StdCommonParams_set_GameBundleID_m01625DC8750160BEF86073C96048B910A23B8FE6_inline(L_20, L_21, NULL);
		StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* L_22 = L_20;
		String_t* L_23;
		L_23 = Runtime_Name_mDE4DDAB3FD997A5634ED6A04960C48513D939C29(NULL);
		NullCheck(L_22);
		StdCommonParams_set_Platform_m6270CCD19D8CB881BC5668613C041C5E5BD0996C_inline(L_22, L_23, NULL);
		StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* L_24 = L_22;
		String_t* L_25;
		L_25 = Application_get_buildGUID_m856823980B16F20EF62FA3212E1A584428C49F08(NULL);
		NullCheck(L_24);
		StdCommonParams_set_BuildGuuid_m0DB0779599C5BE31C7A1B76C2AF77E9EF9A3AC0C_inline(L_24, L_25, NULL);
		StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* L_26 = L_24;
		String_t* L_27;
		L_27 = SystemInfo_get_deviceUniqueIdentifier_mCA336E71D49E8B830EAFBC13E46FA22A628D0E17(NULL);
		NullCheck(L_26);
		StdCommonParams_set_Idfv_mC903A6BEA3F5145D959C36D123D084D211085EF9_inline(L_26, L_27, NULL);
		__this->___m_CommonParams_3 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CommonParams_3), (void*)L_26);
		// m_InstallId = installId;
		RuntimeObject* L_28 = ___installId6;
		__this->___m_InstallId_5 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_InstallId_5), (void*)L_28);
		// m_PlayerId = playerId;
		RuntimeObject* L_29 = ___playerId7;
		__this->___m_PlayerId_4 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PlayerId_4), (void*)L_29);
		// RefreshSessionID();
		AnalyticsServiceInstance_RefreshSessionID_m944E2F59E889E550C781E3710BFB5F4B95AE5125(__this, NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance::ResumeDataDeletionIfNecessary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsServiceInstance_ResumeDataDeletionIfNecessary_mA71BC424BAB3BDCA709948E63934C16562EA5AE6 (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAnalyticsForgetter_t824BE286D40D7A4B73BE27A5BF50FE8DB4C0AE18_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (m_AnalyticsForgetter.DeletionInProgress)
		RuntimeObject* L_0 = __this->___m_AnalyticsForgetter_10;
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Unity.Services.Analytics.Internal.IAnalyticsForgetter::get_DeletionInProgress() */, IAnalyticsForgetter_t824BE286D40D7A4B73BE27A5BF50FE8DB4C0AE18_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		// DeactivateWithDataDeletionRequest();
		AnalyticsServiceInstance_DeactivateWithDataDeletionRequest_m109EDCF2D98B8AE461BAB4B72859E30E380FC63B(__this, NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance::DeactivateWithDataDeletionRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsServiceInstance_DeactivateWithDataDeletionRequest_m109EDCF2D98B8AE461BAB4B72859E30E380FC63B (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnalyticsServiceInstance_DataDeletionCompleted_m4C4D2F1B9C08AAAD4FCD5DE8F23CD9FFF9CB7C6A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAnalyticsContainer_t742F8268D801129AAF7F2486A8B4CE95B73985A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAnalyticsForgetter_t824BE286D40D7A4B73BE27A5BF50FE8DB4C0AE18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0BC237184924820231BE4541A9E248A9768C7DEC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_DataBuffer.ClearBuffer();
		RuntimeObject* L_0 = __this->___m_DataBuffer_14;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(8 /* System.Void Unity.Services.Analytics.Internal.IBuffer::ClearBuffer() */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_0);
		// m_DataBuffer.ClearDiskCache();
		RuntimeObject* L_1 = __this->___m_DataBuffer_14;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(7 /* System.Void Unity.Services.Analytics.Internal.IBuffer::ClearDiskCache() */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_1);
		// m_Container.Enable();
		RuntimeObject* L_2 = __this->___m_Container_13;
		NullCheck(L_2);
		InterfaceActionInvoker0::Invoke(0 /* System.Void Unity.Services.Analytics.IAnalyticsContainer::Enable() */, IAnalyticsContainer_t742F8268D801129AAF7F2486A8B4CE95B73985A1_il2cpp_TypeInfo_var, L_2);
		// m_AnalyticsForgetter.AttemptToForget(UserId, InstallId, PlayerId, BufferX.SerializeDateTime(DateTime.Now), k_ForgetCallingId, DataDeletionCompleted);
		RuntimeObject* L_3 = __this->___m_AnalyticsForgetter_10;
		String_t* L_4;
		L_4 = AnalyticsServiceInstance_get_UserId_mBBDD58C51A590919EB9FBB7322A18C0D9AA11F71(__this, NULL);
		String_t* L_5;
		L_5 = AnalyticsServiceInstance_get_InstallId_m7ADCF67CCEF349567B8EBE9EF432D41CB397AAE7(__this, NULL);
		String_t* L_6;
		L_6 = AnalyticsServiceInstance_get_PlayerId_m4F995ADCD4B6BEFF337CC44244B64A14CA6EF08C(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_7;
		L_7 = DateTime_get_Now_mC336498972C48439ADCD5C50D35FAE0F2A48B0F0(NULL);
		String_t* L_8;
		L_8 = BufferX_SerializeDateTime_m48F637B8166FD1F214B29050444AA725CB8AF9FB(L_7, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_9, __this, (intptr_t)((void*)AnalyticsServiceInstance_DataDeletionCompleted_m4C4D2F1B9C08AAAD4FCD5DE8F23CD9FFF9CB7C6A_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		InterfaceActionInvoker6< String_t*, String_t*, String_t*, String_t*, String_t*, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(1 /* System.Void Unity.Services.Analytics.Internal.IAnalyticsForgetter::AttemptToForget(System.String,System.String,System.String,System.String,System.String,System.Action) */, IAnalyticsForgetter_t824BE286D40D7A4B73BE27A5BF50FE8DB4C0AE18_il2cpp_TypeInfo_var, L_3, L_4, L_5, L_6, L_8, _stringLiteral0BC237184924820231BE4541A9E248A9768C7DEC, L_9);
		// Deactivate();
		AnalyticsServiceInstance_Deactivate_m780C639B6454A3D839452F787FBD904B6D055FEE(__this, NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance::DataDeletionCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsServiceInstance_DataDeletionCompleted_m4C4D2F1B9C08AAAD4FCD5DE8F23CD9FFF9CB7C6A (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAnalyticsContainer_t742F8268D801129AAF7F2486A8B4CE95B73985A1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (!m_IsActive)
		bool L_0 = __this->___m_IsActive_18;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// m_Container.Disable();
		RuntimeObject* L_2 = __this->___m_Container_13;
		NullCheck(L_2);
		InterfaceActionInvoker0::Invoke(1 /* System.Void Unity.Services.Analytics.IAnalyticsContainer::Disable() */, IAnalyticsContainer_t742F8268D801129AAF7F2486A8B4CE95B73985A1_il2cpp_TypeInfo_var, L_2);
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance::Deactivate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsServiceInstance_Deactivate_m780C639B6454A3D839452F787FBD904B6D055FEE (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAnalyticsContainer_t742F8268D801129AAF7F2486A8B4CE95B73985A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAnalyticsForgetter_t824BE286D40D7A4B73BE27A5BF50FE8DB4C0AE18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConsentTracker_t93AFBEAEA2AE9AC2A012EEBFA4344E527FD92550_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICoreStatsHelper_t436ACDCFB0D414BD45F5EAC4C05281101F24E6FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B6_0 = 0;
	int32_t G_B8_0 = 0;
	{
		// if (m_IsActive)
		bool L_0 = __this->___m_IsActive_18;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0059;
		}
	}
	{
		// m_IsActive = false;
		__this->___m_IsActive_18 = (bool)0;
		// if ((m_ConsentFlow == ConsentFlow.New && !m_AnalyticsForgetter.DeletionInProgress) ||
		//     (m_ConsentFlow == ConsentFlow.Old && !m_ConsentTracker.IsOptingOutInProgress()))
		int32_t L_2 = __this->___m_ConsentFlow_19;
		if ((!(((uint32_t)L_2) == ((uint32_t)2))))
		{
			goto IL_0029;
		}
	}
	{
		RuntimeObject* L_3 = __this->___m_AnalyticsForgetter_10;
		NullCheck(L_3);
		bool L_4;
		L_4 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Unity.Services.Analytics.Internal.IAnalyticsForgetter::get_DeletionInProgress() */, IAnalyticsForgetter_t824BE286D40D7A4B73BE27A5BF50FE8DB4C0AE18_il2cpp_TypeInfo_var, L_3);
		if (!L_4)
		{
			goto IL_0045;
		}
	}

IL_0029:
	{
		int32_t L_5 = __this->___m_ConsentFlow_19;
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_0042;
		}
	}
	{
		RuntimeObject* L_6 = __this->___m_ConsentTracker_8;
		NullCheck(L_6);
		bool L_7;
		L_7 = InterfaceFuncInvoker0< bool >::Invoke(3 /* System.Boolean Unity.Services.Analytics.Internal.IConsentTracker::IsOptingOutInProgress() */, IConsentTracker_t93AFBEAEA2AE9AC2A012EEBFA4344E527FD92550_il2cpp_TypeInfo_var, L_6);
		G_B6_0 = ((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		goto IL_0043;
	}

IL_0042:
	{
		G_B6_0 = 0;
	}

IL_0043:
	{
		G_B8_0 = G_B6_0;
		goto IL_0046;
	}

IL_0045:
	{
		G_B8_0 = 1;
	}

IL_0046:
	{
		V_1 = (bool)G_B8_0;
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0058;
		}
	}
	{
		// m_Container.Disable();
		RuntimeObject* L_9 = __this->___m_Container_13;
		NullCheck(L_9);
		InterfaceActionInvoker0::Invoke(1 /* System.Void Unity.Services.Analytics.IAnalyticsContainer::Disable() */, IAnalyticsContainer_t742F8268D801129AAF7F2486A8B4CE95B73985A1_il2cpp_TypeInfo_var, L_9);
	}

IL_0058:
	{
	}

IL_0059:
	{
		// m_CoreStatsHelper.SetCoreStatsConsent(false);
		RuntimeObject* L_10 = __this->___m_CoreStatsHelper_7;
		NullCheck(L_10);
		InterfaceActionInvoker1< bool >::Invoke(0 /* System.Void Unity.Services.Analytics.ICoreStatsHelper::SetCoreStatsConsent(System.Boolean) */, ICoreStatsHelper_t436ACDCFB0D414BD45F5EAC4C05281101F24E6FD_il2cpp_TypeInfo_var, L_10, (bool)0);
		// }
		return;
	}
}
// System.String Unity.Services.Analytics.AnalyticsServiceInstance::GetAnalyticsUserID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AnalyticsServiceInstance_GetAnalyticsUserID_m765E15065C72B9B1F8687C1129FD703048851A27 (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInstallationId_tCE6DEEEBAFABEB9EC621BD1646D82BC9D82BFB0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* G_B3_0 = NULL;
	{
		// return !String.IsNullOrEmpty(CustomAnalyticsId) ? CustomAnalyticsId : m_InstallId.GetOrCreateIdentifier();
		String_t* L_0;
		L_0 = AnalyticsServiceInstance_get_CustomAnalyticsId_mEB3038CA04D336E4EF0C1A6D6E0D6A94E025CF60(__this, NULL);
		bool L_1;
		L_1 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_0, NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		RuntimeObject* L_2 = __this->___m_InstallId_5;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Unity.Services.Core.Device.Internal.IInstallationId::GetOrCreateIdentifier() */, IInstallationId_tCE6DEEEBAFABEB9EC621BD1646D82BC9D82BFB0C_il2cpp_TypeInfo_var, L_2);
		G_B3_0 = L_3;
		goto IL_0021;
	}

IL_001b:
	{
		String_t* L_4;
		L_4 = AnalyticsServiceInstance_get_CustomAnalyticsId_mEB3038CA04D336E4EF0C1A6D6E0D6A94E025CF60(__this, NULL);
		G_B3_0 = L_4;
	}

IL_0021:
	{
		V_0 = G_B3_0;
		goto IL_0024;
	}

IL_0024:
	{
		// }
		String_t* L_5 = V_0;
		return L_5;
	}
}
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance::ApplicationPaused(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsServiceInstance_ApplicationPaused_mB64F8B2FF25B824FA074668EF917FC684828893C (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, bool ___paused0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAnalyticsServiceSystemCalls_t664990CD0F77E7F6877EE28442B73A589D3C9454_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	{
		// if (paused)
		bool L_0 = ___paused0;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		// m_ApplicationPauseTime = m_SystemCalls.UtcNow;
		RuntimeObject* L_2 = __this->___m_SystemCalls_12;
		NullCheck(L_2);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_3;
		L_3 = InterfaceFuncInvoker0< DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D >::Invoke(0 /* System.DateTime Unity.Services.Analytics.IAnalyticsServiceSystemCalls::get_UtcNow() */, IAnalyticsServiceSystemCalls_t664990CD0F77E7F6877EE28442B73A589D3C9454_il2cpp_TypeInfo_var, L_2);
		__this->___m_ApplicationPauseTime_17 = L_3;
		goto IL_004d;
	}

IL_001b:
	{
		// DateTime now = m_SystemCalls.UtcNow;
		RuntimeObject* L_4 = __this->___m_SystemCalls_12;
		NullCheck(L_4);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_5;
		L_5 = InterfaceFuncInvoker0< DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D >::Invoke(0 /* System.DateTime Unity.Services.Analytics.IAnalyticsServiceSystemCalls::get_UtcNow() */, IAnalyticsServiceSystemCalls_t664990CD0F77E7F6877EE28442B73A589D3C9454_il2cpp_TypeInfo_var, L_4);
		V_1 = L_5;
		// if (now > m_ApplicationPauseTime + k_BackgroundSessionRefreshPeriod)
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_6 = V_1;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_7 = __this->___m_ApplicationPauseTime_17;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_8 = __this->___k_BackgroundSessionRefreshPeriod_2;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_9;
		L_9 = DateTime_op_Addition_m23FACB2D207CB24BE0E9C06AB4CF8CE0C4F0CAD8(L_7, L_8, NULL);
		bool L_10;
		L_10 = DateTime_op_GreaterThan_mA9021939CEE6D93308C1CFB63C7E6D5CA58F7B92(L_6, L_9, NULL);
		V_2 = L_10;
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_004c;
		}
	}
	{
		// RefreshSessionID();
		AnalyticsServiceInstance_RefreshSessionID_m944E2F59E889E550C781E3710BFB5F4B95AE5125(__this, NULL);
	}

IL_004c:
	{
	}

IL_004d:
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance::RefreshSessionID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsServiceInstance_RefreshSessionID_m944E2F59E889E550C781E3710BFB5F4B95AE5125 (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) 
{
	Guid_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// SessionID = Guid.NewGuid().ToString();
		Guid_t L_0;
		L_0 = Guid_NewGuid_m1827D92D71326C3F3C263F057F6E90F907617903(NULL);
		V_0 = L_0;
		String_t* L_1;
		L_1 = Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C((&V_0), NULL);
		AnalyticsServiceInstance_set_SessionID_m48AF420DBE356BD2F73DF27848664B9117B1CA52_inline(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Int32 Unity.Services.Analytics.AnalyticsServiceInstance::get_AutoflushPeriodMultiplier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnalyticsServiceInstance_get_AutoflushPeriodMultiplier_m306D10F0B29C2FBE941D7607D61C7AE5702AC3AE (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDispatcher_t4DE02B283A563837EE126BBB7BA0C5E903D3357C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// get { return Mathf.Clamp(1 + m_DataDispatcher.ConsecutiveFailedUploadCount, 1, 8); }
		RuntimeObject* L_0 = __this->___m_DataDispatcher_9;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 Unity.Services.Analytics.Internal.IDispatcher::get_ConsecutiveFailedUploadCount() */, IDispatcher_t4DE02B283A563837EE126BBB7BA0C5E903D3357C_il2cpp_TypeInfo_var, L_0);
		int32_t L_2;
		L_2 = Mathf_Clamp_mA48718D9A20D8972EDD41714CEF6BBF864F442EA_inline(((int32_t)il2cpp_codegen_add(1, L_1)), 1, 8, NULL);
		V_0 = L_2;
		goto IL_0018;
	}

IL_0018:
	{
		// get { return Mathf.Clamp(1 + m_DataDispatcher.ConsecutiveFailedUploadCount, 1, 8); }
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsServiceInstance_Flush_mB8F0ED919FB47026C5CB61DD3562FAA09009C21E (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnalyticsServiceInstance_OldForgetMeEventUploaded_mF328362CE747DFFEC071EAD40FA89F7698C3E9B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAnalyticsForgetter_t824BE286D40D7A4B73BE27A5BF50FE8DB4C0AE18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConsentTracker_t93AFBEAEA2AE9AC2A012EEBFA4344E527FD92550_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDispatcher_t4DE02B283A563837EE126BBB7BA0C5E903D3357C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0BC237184924820231BE4541A9E248A9768C7DEC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8905FD38EEA933AC528FF73A57DAC6B13D1127E2);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	int32_t G_B8_0 = 0;
	{
		// if (m_IsActive)
		bool L_0 = __this->___m_IsActive_18;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_00c5;
		}
	}
	{
		// switch (m_ConsentFlow)
		int32_t L_2 = __this->___m_ConsentFlow_19;
		V_2 = L_2;
		int32_t L_3 = V_2;
		V_1 = L_3;
		int32_t L_4 = V_1;
		if ((((int32_t)L_4) == ((int32_t)1)))
		{
			goto IL_002a;
		}
	}
	{
		goto IL_001e;
	}

IL_001e:
	{
		int32_t L_5 = V_1;
		if ((((int32_t)L_5) == ((int32_t)2)))
		{
			goto IL_00b4;
		}
	}
	{
		goto IL_00c2;
	}

IL_002a:
	{
		// if (m_ConsentTracker.IsGeoIpChecked() && m_ConsentTracker.IsConsentGiven())
		RuntimeObject* L_6 = __this->___m_ConsentTracker_8;
		NullCheck(L_6);
		bool L_7;
		L_7 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean Unity.Services.Analytics.Internal.IConsentTracker::IsGeoIpChecked() */, IConsentTracker_t93AFBEAEA2AE9AC2A012EEBFA4344E527FD92550_il2cpp_TypeInfo_var, L_6);
		if (!L_7)
		{
			goto IL_0044;
		}
	}
	{
		RuntimeObject* L_8 = __this->___m_ConsentTracker_8;
		NullCheck(L_8);
		bool L_9;
		L_9 = InterfaceFuncInvoker0< bool >::Invoke(2 /* System.Boolean Unity.Services.Analytics.Internal.IConsentTracker::IsConsentGiven() */, IConsentTracker_t93AFBEAEA2AE9AC2A012EEBFA4344E527FD92550_il2cpp_TypeInfo_var, L_8);
		G_B8_0 = ((int32_t)(L_9));
		goto IL_0045;
	}

IL_0044:
	{
		G_B8_0 = 0;
	}

IL_0045:
	{
		V_3 = (bool)G_B8_0;
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_0059;
		}
	}
	{
		// m_DataDispatcher.Flush();
		RuntimeObject* L_11 = __this->___m_DataDispatcher_9;
		NullCheck(L_11);
		InterfaceActionInvoker0::Invoke(2 /* System.Void Unity.Services.Analytics.Internal.IDispatcher::Flush() */, IDispatcher_t4DE02B283A563837EE126BBB7BA0C5E903D3357C_il2cpp_TypeInfo_var, L_11);
		goto IL_0066;
	}

IL_0059:
	{
		// Debug.LogWarning("Required consent wasn't checked and given when trying to dispatch events, the events cannot be sent.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteral8905FD38EEA933AC528FF73A57DAC6B13D1127E2, NULL);
	}

IL_0066:
	{
		// if (m_ConsentTracker.IsOptingOutInProgress())
		RuntimeObject* L_12 = __this->___m_ConsentTracker_8;
		NullCheck(L_12);
		bool L_13;
		L_13 = InterfaceFuncInvoker0< bool >::Invoke(3 /* System.Boolean Unity.Services.Analytics.Internal.IConsentTracker::IsOptingOutInProgress() */, IConsentTracker_t93AFBEAEA2AE9AC2A012EEBFA4344E527FD92550_il2cpp_TypeInfo_var, L_12);
		V_4 = L_13;
		bool L_14 = V_4;
		if (!L_14)
		{
			goto IL_00b2;
		}
	}
	{
		// m_AnalyticsForgetter.AttemptToForget(UserId, InstallId, PlayerId, BufferX.SerializeDateTime(DateTime.Now), k_ForgetCallingId, OldForgetMeEventUploaded);
		RuntimeObject* L_15 = __this->___m_AnalyticsForgetter_10;
		String_t* L_16;
		L_16 = AnalyticsServiceInstance_get_UserId_mBBDD58C51A590919EB9FBB7322A18C0D9AA11F71(__this, NULL);
		String_t* L_17;
		L_17 = AnalyticsServiceInstance_get_InstallId_m7ADCF67CCEF349567B8EBE9EF432D41CB397AAE7(__this, NULL);
		String_t* L_18;
		L_18 = AnalyticsServiceInstance_get_PlayerId_m4F995ADCD4B6BEFF337CC44244B64A14CA6EF08C(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_19;
		L_19 = DateTime_get_Now_mC336498972C48439ADCD5C50D35FAE0F2A48B0F0(NULL);
		String_t* L_20;
		L_20 = BufferX_SerializeDateTime_m48F637B8166FD1F214B29050444AA725CB8AF9FB(L_19, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_21 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_21, __this, (intptr_t)((void*)AnalyticsServiceInstance_OldForgetMeEventUploaded_mF328362CE747DFFEC071EAD40FA89F7698C3E9B2_RuntimeMethod_var), NULL);
		NullCheck(L_15);
		InterfaceActionInvoker6< String_t*, String_t*, String_t*, String_t*, String_t*, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(1 /* System.Void Unity.Services.Analytics.Internal.IAnalyticsForgetter::AttemptToForget(System.String,System.String,System.String,System.String,System.String,System.Action) */, IAnalyticsForgetter_t824BE286D40D7A4B73BE27A5BF50FE8DB4C0AE18_il2cpp_TypeInfo_var, L_15, L_16, L_17, L_18, L_20, _stringLiteral0BC237184924820231BE4541A9E248A9768C7DEC, L_21);
	}

IL_00b2:
	{
		// break;
		goto IL_00c2;
	}

IL_00b4:
	{
		// m_DataDispatcher.Flush();
		RuntimeObject* L_22 = __this->___m_DataDispatcher_9;
		NullCheck(L_22);
		InterfaceActionInvoker0::Invoke(2 /* System.Void Unity.Services.Analytics.Internal.IDispatcher::Flush() */, IDispatcher_t4DE02B283A563837EE126BBB7BA0C5E903D3357C_il2cpp_TypeInfo_var, L_22);
		// break;
		goto IL_00c2;
	}

IL_00c2:
	{
		goto IL_00df;
	}

IL_00c5:
	{
		// else if (m_AnalyticsForgetter.DeletionInProgress)
		RuntimeObject* L_23 = __this->___m_AnalyticsForgetter_10;
		NullCheck(L_23);
		bool L_24;
		L_24 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Unity.Services.Analytics.Internal.IAnalyticsForgetter::get_DeletionInProgress() */, IAnalyticsForgetter_t824BE286D40D7A4B73BE27A5BF50FE8DB4C0AE18_il2cpp_TypeInfo_var, L_23);
		V_5 = L_24;
		bool L_25 = V_5;
		if (!L_25)
		{
			goto IL_00df;
		}
	}
	{
		// DeactivateWithDataDeletionRequest();
		AnalyticsServiceInstance_DeactivateWithDataDeletionRequest_m109EDCF2D98B8AE461BAB4B72859E30E380FC63B(__this, NULL);
	}

IL_00df:
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance::ApplicationQuit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsServiceInstance_ApplicationQuit_mC6358CE4734C9A39DA8A1AAE1F529EB5D5A17E03 (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDataGenerator_t3CD09958BA210D4EE5B68AE79A6936634EE801E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6592F2A54D864C0F2DADC704BDDAB476278DF50F);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (m_IsActive)
		bool L_0 = __this->___m_IsActive_18;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_003d;
		}
	}
	{
		// m_DataGenerator.GameEnded(DateTime.Now, m_CommonParams, "com.unity.services.analytics.Events.Shutdown", DataGenerator.SessionEndState.QUIT);
		RuntimeObject* L_2 = __this->___m_DataGenerator_6;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_3;
		L_3 = DateTime_get_Now_mC336498972C48439ADCD5C50D35FAE0F2A48B0F0(NULL);
		StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* L_4 = __this->___m_CommonParams_3;
		NullCheck(L_2);
		InterfaceActionInvoker4< DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D, StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701*, String_t*, int32_t >::Invoke(2 /* System.Void Unity.Services.Analytics.Data.IDataGenerator::GameEnded(System.DateTime,Unity.Services.Analytics.Data.StdCommonParams,System.String,Unity.Services.Analytics.Data.DataGenerator/SessionEndState) */, IDataGenerator_t3CD09958BA210D4EE5B68AE79A6936634EE801E4_il2cpp_TypeInfo_var, L_2, L_3, L_4, _stringLiteral6592F2A54D864C0F2DADC704BDDAB476278DF50F, 3);
		// m_DataBuffer.FlushToDisk();
		RuntimeObject* L_5 = __this->___m_DataBuffer_14;
		NullCheck(L_5);
		InterfaceActionInvoker0::Invoke(6 /* System.Void Unity.Services.Analytics.Internal.IBuffer::FlushToDisk() */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_5);
		// Flush();
		AnalyticsServiceInstance_Flush_mB8F0ED919FB47026C5CB61DD3562FAA09009C21E(__this, NULL);
	}

IL_003d:
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance::RecordGameRunningIfNecessary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsServiceInstance_RecordGameRunningIfNecessary_mDC174CE67E36436A206DDC321308853A727484C3 (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDataGenerator_t3CD09958BA210D4EE5B68AE79A6936634EE801E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4AA3716D19976DD411ABCF0909A0E4D4B8EA09AF);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B4_0 = 0;
	{
		// if (m_IsActive)
		bool L_0 = __this->___m_IsActive_18;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_007f;
		}
	}
	{
		// if (m_DataBuffer.Length == 0 || m_DataBuffer.Length == m_BufferLengthAtLastGameRunning)
		RuntimeObject* L_2 = __this->___m_DataBuffer_14;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 Unity.Services.Analytics.Internal.IBuffer::get_Length() */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_2);
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		RuntimeObject* L_4 = __this->___m_DataBuffer_14;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 Unity.Services.Analytics.Internal.IBuffer::get_Length() */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_4);
		int32_t L_6 = __this->___m_BufferLengthAtLastGameRunning_16;
		G_B4_0 = ((((int32_t)L_5) == ((int32_t)L_6))? 1 : 0);
		goto IL_002f;
	}

IL_002e:
	{
		G_B4_0 = 1;
	}

IL_002f:
	{
		V_1 = (bool)G_B4_0;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_006b;
		}
	}
	{
		// SetVariableCommonParams();
		AnalyticsServiceInstance_SetVariableCommonParams_mAE82C6CB3D7D7DCC5337FB51A360457D5EB7844C(__this, NULL);
		// m_DataGenerator.GameRunning(DateTime.Now, m_CommonParams, "com.unity.services.analytics.AnalyticsServiceInstance.RecordGameRunningIfNecessary");
		RuntimeObject* L_8 = __this->___m_DataGenerator_6;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_9;
		L_9 = DateTime_get_Now_mC336498972C48439ADCD5C50D35FAE0F2A48B0F0(NULL);
		StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* L_10 = __this->___m_CommonParams_3;
		NullCheck(L_8);
		InterfaceActionInvoker3< DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D, StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701*, String_t* >::Invoke(1 /* System.Void Unity.Services.Analytics.Data.IDataGenerator::GameRunning(System.DateTime,Unity.Services.Analytics.Data.StdCommonParams,System.String) */, IDataGenerator_t3CD09958BA210D4EE5B68AE79A6936634EE801E4_il2cpp_TypeInfo_var, L_8, L_9, L_10, _stringLiteral4AA3716D19976DD411ABCF0909A0E4D4B8EA09AF);
		// m_BufferLengthAtLastGameRunning = m_DataBuffer.Length;
		RuntimeObject* L_11 = __this->___m_DataBuffer_14;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 Unity.Services.Analytics.Internal.IBuffer::get_Length() */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_11);
		__this->___m_BufferLengthAtLastGameRunning_16 = L_12;
		goto IL_007e;
	}

IL_006b:
	{
		// m_BufferLengthAtLastGameRunning = m_DataBuffer.Length;
		RuntimeObject* L_13 = __this->___m_DataBuffer_14;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 Unity.Services.Analytics.Internal.IBuffer::get_Length() */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_13);
		__this->___m_BufferLengthAtLastGameRunning_16 = L_14;
	}

IL_007e:
	{
	}

IL_007f:
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance::SetVariableCommonParams()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsServiceInstance_SetVariableCommonParams_mAE82C6CB3D7D7DCC5337FB51A360457D5EB7844C (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlayerId_t6A7BAE55B4D78E87B15B9261828E897BAACBF913_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 V_1;
	memset((&V_1), 0, sizeof(V_1));
	StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* G_B2_0 = NULL;
	StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* G_B1_0 = NULL;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* G_B3_1 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* G_B5_1 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* G_B4_1 = NULL;
	String_t* G_B6_0 = NULL;
	StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* G_B6_1 = NULL;
	{
		// m_CommonParams.DeviceVolume = DeviceVolumeProvider.GetDeviceVolume();
		StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* L_0 = __this->___m_CommonParams_3;
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_1;
		L_1 = DeviceVolumeProvider_GetDeviceVolume_mE8D3153764DEAED94CC7D598C33759BC25685946(NULL);
		V_0 = L_1;
		bool L_2;
		L_2 = Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline((&V_0), Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
		G_B1_0 = L_0;
		if (L_2)
		{
			G_B2_0 = L_0;
			goto IL_0021;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165));
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_3 = V_1;
		G_B3_0 = L_3;
		G_B3_1 = G_B1_0;
		goto IL_002e;
	}

IL_0021:
	{
		float L_4;
		L_4 = Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_inline((&V_0), Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_RuntimeMethod_var);
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF((&L_5), ((double)L_4), /*hidden argument*/Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF_RuntimeMethod_var);
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
	}

IL_002e:
	{
		NullCheck(G_B3_1);
		StdCommonParams_set_DeviceVolume_mBC014F9E6144D31B7A21082F4F17CADA8B8B8DB8_inline(G_B3_1, G_B3_0, NULL);
		// m_CommonParams.BatteryLoad = SystemInfo.batteryLevel;
		StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* L_6 = __this->___m_CommonParams_3;
		float L_7;
		L_7 = SystemInfo_get_batteryLevel_m46D68F5A85125FBD389BEF455AF23999FD9E3D22(NULL);
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF((&L_8), ((double)L_7), /*hidden argument*/Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF_RuntimeMethod_var);
		NullCheck(L_6);
		StdCommonParams_set_BatteryLoad_mC06087861B7DD6C288823A7DDB4A7085B168743E_inline(L_6, L_8, NULL);
		// m_CommonParams.UasUserID = m_PlayerId?.PlayerId;
		StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* L_9 = __this->___m_CommonParams_3;
		RuntimeObject* L_10 = __this->___m_PlayerId_4;
		RuntimeObject* L_11 = L_10;
		G_B4_0 = L_11;
		G_B4_1 = L_9;
		if (L_11)
		{
			G_B5_0 = L_11;
			G_B5_1 = L_9;
			goto IL_005e;
		}
	}
	{
		G_B6_0 = ((String_t*)(NULL));
		G_B6_1 = G_B4_1;
		goto IL_0063;
	}

IL_005e:
	{
		NullCheck(G_B5_0);
		String_t* L_12;
		L_12 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Unity.Services.Authentication.Internal.IPlayerId::get_PlayerId() */, IPlayerId_t6A7BAE55B4D78E87B15B9261828E897BAACBF913_il2cpp_TypeInfo_var, G_B5_0);
		G_B6_0 = L_12;
		G_B6_1 = G_B5_1;
	}

IL_0063:
	{
		NullCheck(G_B6_1);
		StdCommonParams_set_UasUserID_m5079F59137ED8AA3D25BBDFBF10E536812D8ABB7_inline(G_B6_1, G_B6_0, NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.DateTime Unity.Services.Analytics.AnalyticsServiceSystemCalls::get_UtcNow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D AnalyticsServiceSystemCalls_get_UtcNow_m2E57E69EE63CCEA016E8AB2AE4691CE106C59D7C (AnalyticsServiceSystemCalls_tA75EFB9A19C30CBFEABF5BF0578E1636083AC745* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get { return DateTime.UtcNow; }
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0;
		L_0 = DateTime_get_UtcNow_m5D776FFEBC81592B361E4C7AF373297C5DFB46FD(NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		// get { return DateTime.UtcNow; }
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1 = V_0;
		return L_1;
	}
}
// System.Void Unity.Services.Analytics.AnalyticsServiceSystemCalls::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsServiceSystemCalls__ctor_m0CE98AA41596DAEC3FE38B2657205368207C45D0 (AnalyticsServiceSystemCalls_tA75EFB9A19C30CBFEABF5BF0578E1636083AC745* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Analytics.TransactionCurrencyConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransactionCurrencyConverter__ctor_m5ACA84E75A13698EAF50E70DF0FA9FA1EC7DBFFD (TransactionCurrencyConverter_t3296A312BAFE7A8FC56182C3D53BEFD1D9474133* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m9804017B0F6F06DE8C8FAA9292240873CB450B2D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00736996BFF6E813FFC831E7963AB11A4647B861);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral02F274D8EFE8DBE0F707B65BA93140F8C1EC83B4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral054C61CC7E92B92D00405F3DBD04C8C90DD763B8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0621EA2B36667C33F4A1FEDA6E1CA3FB3D1C840C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral079410AFDF8A8290DC264F4D755700D4DAAF91F4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral082894E5DCF8D93E2AF9B1A38C5CF0152077D9D4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral085CDCD5D693B72C213039A773937050DE20839E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09ACAF0EC6B5F6E7799AC236F0CA186A2E1F4239);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0CF567A3CC7E346F2BEAB620A73CFB5CDAF3ADBA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DD749240B9F1DE9E3434C626FF5489F68F6D860);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral104C3D8C85D4DBCE20024956C2628C437C629A83);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral10E47B045BE29B1A8AFA0F7B2441CB47CA3A67E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral10E9B34B3B2D094B461A54880E4F462117AC5B1E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral12AF1BC26072634DC2AE0ECE0471600FE074A13E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13E0C4D575EF4CFA208688FF6CE58789AF02BBA0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14A086C4277601C8D35634B59AC6F886CFD855F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16303F63CAFE3259A012582C0D4DFDD43952E56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16366EFF1098954CA719C6CFBEBD951926CFD64E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A99A8C8398B221DA18F963F7662BAF65F57BBBE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2028A2611FF494355F4C886D11936814AB305050);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2048D52CF5B85C0065BA74F03F29D189F49A817F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22707A051BA71652A76B65CD3B1CF3D57FCECCDF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22DC889BC972FCD09DEFF7641E6B361E1A814826);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral244F217EFEE741CEA827D278453DDB6453729BB6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2539188F4D764C792605E272835EC14F18624058);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral258EBBFB914390B152C3C49D597D34EB4015FF16);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral25BB8D65B0F3964EA0D799145078C16FEF52341C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AF7BC4852F23D16CF2079B71E5991F15A61E81E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D674CA6A1CCD2F2B3D17EE3094E3EA43AAB743D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral308495485824FFEF8CDA6443346A3605E719A75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral30DE4318B8AF0C3D59547CEE589746F6DBAB89C3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral30F6F02FEDC0164A519004DC0D974D5F5C495693);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3595F061260FF16E7FACFE48B48E71066E9ABA1C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36149BCD2C8B864CB90F75A17A96F5A6BE03F3E5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36938B39E43FFBE00F46140DCB7313C97E180908);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral385A64F0FE2CF8945475789AF05D5D5E4346EFAE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38611C47421E5420D169305A4C4482AD6300720E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral395F121121D3A37B7F22ACEB4CC8C0A2E785CFFA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A1B4473844D23854218F673A809ABA161F75BBA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3AA260D90D3BE72AF9AF17CC353F3D97B1FF35AB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3ACB307F5B0B7C4C5E5C31870371EB8B5D752F5C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3CF09EA528F2B59A7130F83612C8F6DC4419E135);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E26B4BE8E1A4D1123D396C9945610AFBF71BF3A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EB2BDB70C070A2908F3250D1D9C142B29AFFCB5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral405C5C8AEC9362A04D5A32008B0D8CE6143B6613);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40A375960271895A6C9D6E67832DFF850E7818FB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4184C304972D6C880108F08C499280157EBAC151);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42D40175FF539DDF928B1E987A977BBF3CB544BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4370344BF391C9775674F57F65AB43157A70FFA8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral447A985D020E70B4D77B0701303D8F511295B32D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4554697696DB334C4A69857E431F5359A5652C33);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral45A2803629897DBB2C206F364A3099B875FAF04F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral45EAEB6C152AA99EE22D7FA976D69BBA364F6F30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4824A3B2B566BA0E0F228A35F400EB362238E8C8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral48F54E824E0E6AF56C862FF6251F25E5CB152BF9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4BBBF6E7834C24AA4FAD59D546872FA503C6084B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4BD7FDE208E0373B221810962DA9C6C57339E364);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C978FAA91BFFCF3641BC0ACD796F4EE993AB4A0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral505DC7B5F7B5E5FDCEE2CD01C9B83BB38C328A1B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51B4E0C1F65B55DD8FC1BD84F7C7155D019682F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5290C04F55FD997B854A58817AA740D4304231E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral57122A04C3596A72887F65B738601418476678E7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral58B90608C76E395C05539701FDF64C831A43673D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral58BBB4EDBFDCD31C75C2E9DBF82FB0D890F3FDA3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A3268A7F7F8F2CACA1449DEE6DBD287E1EE537B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5AACB58D619B294B5EE03B0837F285087DE605AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B6BE14C87C0E466C1EFBE237A318884BD2F7F0D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D38B6C4C25F92A9ADD95A1A5C8F80EAA4D3AE14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D7E10FB1136637DF3EEA7E332D50E75ECCFAE35);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5DAAFC13D028473227945C221C31A63A94B85D6B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5F1E01DA43AD1DD21A227DBD58072E59026AA796);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5F9A84D290654E9508A7E5B24B2A31F01448DF3C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60550E25F59BAA9CF9F90B89F084315A0E7E7590);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral632B8C247B430215FA82D909105BE257B7D7B524);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral63A5CD74B260DC0F1665E1409A22C48AC811DF41);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6418250E3BBBB638BAAE36C63372B4E5258CABD4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66B0C5DCF501F8727C24052B01FF06C451E7070E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A78A58188D774704931BAD9BEED28758B7E213F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B072065FA7EE3F58209725EEEBF4B1044C4573C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D33BA5F8204B4ABECBBF61716B9AF4C90BEFEF1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F296BCA0F675C0368B3ACDE08DD6C152E56621D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F8E4A8EEE6F2F75A808EB9CA38D23A216EB7356);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral713D58DAA282E557C1FB99B563A33819B5DAB47D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral71EF8EB7B9B3D3F7D8D889E7EAA085850B47E14D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75FC36F3249DA4CE5C93558EF4747F7E0B205470);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral76F26756BFE13A4CF3DAB4864254FB3F09DA993E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral78117315CB3E34E846CD26F5627994F837AFCACD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A535E4F4CDF4AED9782CE43763768AB6DB185C7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A71B86AFF784DE82443E14289760F1D91D8EFAD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E74442815CA2E9768302210B2AEC00F3BE80413);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7EA97C35880A0D4465D17DDE1F8241D28978C117);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F43C6AFB1C84128718F10F14E8CC804822717EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F64C019F9920BB9DBA8494E22F5F5627CC63913);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral80120090265549DE9FE973E46443BFA74E325435);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83BB4AF414511BF4A0E273F515A8A4933C296E52);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C91977FD80567D0C289B5DD0C60AA24E73CAE76);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E6206F0E750B78653F8B621A641B68B9255BF17);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9367A319824C783BD69583CB2490F67DAF5AC086);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93F9C7D2C7E3B3B879344F845BF299AE5A11BFF3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral94C4A1631484AD24431E32FCAED7AE7426DB402F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral94F5C0AD2551979F304FD9ABB4C9FBBB9D2047F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95F792E998855EB879C4F33E147F416BFF8350F6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral98209D2C0B024C19D99DE742E6003B721296652E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9A4742276AC86152B04539D6B218622416E5AF2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9AB4AF6C8CCC52DA7CE36D811BADA7F640721296);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9EF464966249C19D746E6108CC6B42901A51EB2E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA32AA422B9D45CD4F7920FD6B94EA13BC3F55120);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3F56BA8529D7BE456BD480AB16C0ACC7628CF61);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA54E360A25C694D35AC2BC1F6481EF45DFBA8963);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA57D6FD6545D30BFF1842E92D39CEBD8F94864C6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA634693E806EDA103130B07B3733ADA02E7E6FD1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA62FCD77AFB95737483572B0CA74638491BEDB3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAC38B21AD0EB9DE4133BFC7F438CDB9B6189495B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAED5CB60F87C1BB12D5084E281408448AC106017);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF5A525399C027CA652F1F3DF915FE563359FC66);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB20ED1DE1A061966164B9D5AF6835D402909E3E0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB2ECCE4B9B5B5CB24297087DC10EAC9B8D314C55);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB530856CAC09ED25A4DA236BEA7A8FA5B3538420);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5D12D8EBFA73570DFDC58099A34669F0B3B8682);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB67F8639FB16F6C4841EED07F5641A7B82C815D5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB97FC8BB8B857BF13978EF739D9F564BCED0EB98);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBB0117465450FC41C80773A51F2125C52C8DA63C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBB073CF4C6E067593B42F72480CA2D174D8BE952);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD3F71CA82FA3F7797AA9DCFD97CD6262DACD1E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDCF3FADE7969125498FC2D2DF330D25D1A6EC2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBEEEADECA10709FED3CC67A10B0C61BCA3586135);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC048C43A99B3C90804EEBA637998A43F953E61B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC04B333D53795815D844A1EAE07C424CF7A388F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC0FB8B944A767E1AACE82F930D95E69ED912ADAD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2055FDF7B20639C9978913DD0AC3D2335F059CD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC4373A3F17EF89A19806466941A495CD9AC320C9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8E58DAD4CC2966A3FCCFB3B3578153C051232BA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA22054A8B87E1C1362994865922E9BE924DD589);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCACB20C6D3B53D812D60572CB4D519A855167070);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD0DC72E82E7420768946DB6472FF2FE3E721B0AD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5CBCE94B6B0D32D067FD96ED99B5DEB20FDCFB5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD76593C0F3C8C4E871147921AF2AE0A86527FA0F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9FCB88E3173981902A4EA573B3AF3CFFA2158B9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA667D509F3483FEA9BABF68B23663F189FF7D3D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDAD3B004758C6DF500AA2A49CB44733CB7869DBF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDAFA078D8B7D7134A49C356BBBF77DB7C1B71689);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB4F6E9A963891777D89171877E979F6703604C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE8982A4CBA861107110D88200ED6AE58BDD2D94);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDFD21CC7508D0779B0B3B400D2B5D651665060A6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDFF64ED34F81AC1EEC6761460E897FD781F56A1B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE4D0382C63C65326B1CD2014BF02F8DAF87851CB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE4EE7A20CB10A02C65E2C09328566DDB52AEB176);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5937D651E29A4D90762E4DD3B121B380E293FB7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE62699F68FB3F2AA9BFA8C0E319B57A39F0948E7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE7071BF332C25311420FA71C8E3385289D87B413);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8A2DB968E4D46B21E87FD4121925CEBAEC58125);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB1579E337081436208C9033D7D92967BE03DCE0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF077AC84D48734DD287D272D536914E05773D01D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF25E0841CC395F242DA7A87EE69C457CBB5CF7C2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF2F032C35FA7D119E187D44AA3ABC0FACF45EACB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF37708F5D3FF7E541148EF1DEFA846BEDDD35A86);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF44C639257DDD3D541C5E71BAFEB64F9533A03D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF4B564DBD703C27495C5517490A3AA7687F00F50);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF66420578C2FEC2FACAC16428DDF4EE41540B44C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF96C7D830C923517A9B86B465152960A8783DA4F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA00CB7B7D55E48031B91C07E02C363112E00654);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA2B09816AD28D986000563925DD7B8A9F0D4FFF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFAA80E9D727A341BE57ECEAEF7A1A4FE28DD806D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB10F3876F878924988BE8256B639BB0869B41B2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB2C4D8828AFC358869C34BB5058A83482A7A021);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFDD06087A1C406B544D206318317F79697ACD5EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFDD66CDD7B97059B506472A40D903EA6616EE5DE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly Dictionary<string, int> m_Iso4217CurrencyMinorUnits = new Dictionary<string, int>(StringComparer.Ordinal)
		// {
		//     { "AFN", 2 }, { "EUR", 2 }, { "ALL", 2 }, { "DZD", 2 }, { "USD", 2 }, { "AOA", 2 }, { "XCD", 2 }, { "ARS", 2 }, { "AMD", 2 },
		//     { "AWG", 2 }, { "AUD", 2 }, { "AZN", 2 }, { "BSD", 2 }, { "BHD", 3 }, { "BDT", 2 }, { "BBD", 2 }, { "BYN", 2 }, { "BZD", 2 },
		//     { "XOF", 0 }, { "BMD", 2 }, { "INR", 2 }, { "BTN", 2 }, { "BOB", 2 }, { "BOV", 2 }, { "BAM", 2 }, { "BWP", 2 }, { "NOK", 2 },
		//     { "BRL", 2 }, { "BND", 2 }, { "BGN", 2 }, { "BIF", 0 }, { "CVE", 2 }, { "KHR", 2 }, { "XAF", 0 }, { "CAD", 2 }, { "KYD", 2 },
		//     { "CLP", 0 }, { "CLF", 4 }, { "CNY", 2 }, { "COP", 2 }, { "COU", 2 }, { "KMF", 0 }, { "CDF", 2 }, { "NZD", 2 }, { "CRC", 2 },
		//     { "HRK", 2 }, { "CUP", 2 }, { "CUC", 2 }, { "ANG", 2 }, { "CZK", 2 }, { "DKK", 2 }, { "DJF", 0 }, { "DOP", 2 }, { "EGP", 2 },
		//     { "SVC", 2 }, { "ERN", 2 }, { "SZL", 2 }, { "ETB", 2 }, { "FKP", 2 }, { "FJD", 2 }, { "XPF", 0 }, { "GMD", 2 }, { "GEL", 2 },
		//     { "GHS", 2 }, { "GIP", 2 }, { "GTQ", 2 }, { "GBP", 2 }, { "GNF", 0 }, { "GYD", 2 }, { "HTG", 2 }, { "HNL", 2 }, { "HKD", 2 },
		//     { "HUF", 2 }, { "ISK", 0 }, { "IDR", 2 }, { "IRR", 2 }, { "IQD", 3 }, { "ILS", 2 }, { "JMD", 2 }, { "JPY", 0 }, { "JOD", 3 },
		//     { "KZT", 2 }, { "KES", 2 }, { "KPW", 2 }, { "KRW", 0 }, { "KWD", 3 }, { "KGS", 2 }, { "LAK", 2 }, { "LBP", 2 }, { "LSL", 2 },
		//     { "ZAR", 2 }, { "LRD", 2 }, { "LYD", 3 }, { "CHF", 2 }, { "MOP", 2 }, { "MKD", 2 }, { "MGA", 2 }, { "MWK", 2 }, { "MYR", 2 },
		//     { "MVR", 2 }, { "MRU", 2 }, { "MUR", 2 }, { "MXN", 2 }, { "MXV", 2 }, { "MDL", 2 }, { "MNT", 2 }, { "MAD", 2 }, { "MZN", 2 },
		//     { "MMK", 2 }, { "NAD", 2 }, { "NPR", 2 }, { "NIO", 2 }, { "NGN", 2 }, { "OMR", 3 }, { "PKR", 2 }, { "PAB", 2 }, { "PGK", 2 },
		//     { "PYG", 0 }, { "PEN", 2 }, { "PHP", 2 }, { "PLN", 2 }, { "QAR", 2 }, { "RON", 2 }, { "RUB", 2 }, { "RWF", 0 }, { "SHP", 2 },
		//     { "WST", 2 }, { "STN", 2 }, { "SAR", 2 }, { "RSD", 2 }, { "SCR", 2 }, { "SLL", 2 }, { "SGD", 2 }, { "SBD", 2 }, { "SOS", 2 },
		//     { "SSP", 2 }, { "LKR", 2 }, { "SDG", 2 }, { "SRD", 2 }, { "SEK", 2 }, { "CHE", 2 }, { "CHW", 2 }, { "SYP", 2 }, { "TWD", 2 },
		//     { "TJS", 2 }, { "TZS", 2 }, { "THB", 2 }, { "TOP", 2 }, { "TTD", 2 }, { "TND", 3 }, { "TRY", 2 }, { "TMT", 2 }, { "UGX", 0 },
		//     { "UAH", 2 }, { "AED", 2 }, { "USN", 2 }, { "UYU", 2 }, { "UYI", 0 }, { "UYW", 4 }, { "UZS", 2 }, { "VUV", 0 }, { "VES", 2 },
		//     { "VED", 2 }, { "VND", 0 }, { "YER", 2 }, { "ZMW", 2 }, { "ZWL", 2 }
		// };
		il2cpp_codegen_runtime_class_init_inline(StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* L_0;
		L_0 = StringComparer_get_Ordinal_m96B6DCC0BE70F655E0C41ED4EBCA30D5BA9F6D1A_inline(NULL);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_1 = (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588*)il2cpp_codegen_object_new(Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_m9804017B0F6F06DE8C8FAA9292240873CB450B2D(L_1, L_0, Dictionary_2__ctor_m9804017B0F6F06DE8C8FAA9292240873CB450B2D_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_2 = L_1;
		NullCheck(L_2);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_2, _stringLiteralC4373A3F17EF89A19806466941A495CD9AC320C9, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_3 = L_2;
		NullCheck(L_3);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_3, _stringLiteralE4EE7A20CB10A02C65E2C09328566DDB52AEB176, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_4 = L_3;
		NullCheck(L_4);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_4, _stringLiteral45EAEB6C152AA99EE22D7FA976D69BBA364F6F30, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_5 = L_4;
		NullCheck(L_5);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_5, _stringLiteral2048D52CF5B85C0065BA74F03F29D189F49A817F, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_6 = L_5;
		NullCheck(L_6);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_6, _stringLiteralC0FB8B944A767E1AACE82F930D95E69ED912ADAD, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_7 = L_6;
		NullCheck(L_7);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_7, _stringLiteral7E74442815CA2E9768302210B2AEC00F3BE80413, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_8 = L_7;
		NullCheck(L_8);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_8, _stringLiteralF96C7D830C923517A9B86B465152960A8783DA4F, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_9 = L_8;
		NullCheck(L_9);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_9, _stringLiteral3ACB307F5B0B7C4C5E5C31870371EB8B5D752F5C, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_10 = L_9;
		NullCheck(L_10);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_10, _stringLiteralFA2B09816AD28D986000563925DD7B8A9F0D4FFF, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_11 = L_10;
		NullCheck(L_11);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_11, _stringLiteralDFF64ED34F81AC1EEC6761460E897FD781F56A1B, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_12 = L_11;
		NullCheck(L_12);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_12, _stringLiteralAF5A525399C027CA652F1F3DF915FE563359FC66, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_13 = L_12;
		NullCheck(L_13);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_13, _stringLiteral7EA97C35880A0D4465D17DDE1F8241D28978C117, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_14 = L_13;
		NullCheck(L_14);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_14, _stringLiteral5DAAFC13D028473227945C221C31A63A94B85D6B, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_15 = L_14;
		NullCheck(L_15);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_15, _stringLiteral085CDCD5D693B72C213039A773937050DE20839E, 3, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_16 = L_15;
		NullCheck(L_16);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_16, _stringLiteral10E9B34B3B2D094B461A54880E4F462117AC5B1E, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_17 = L_16;
		NullCheck(L_17);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_17, _stringLiteralD76593C0F3C8C4E871147921AF2AE0A86527FA0F, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_18 = L_17;
		NullCheck(L_18);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_18, _stringLiteral95F792E998855EB879C4F33E147F416BFF8350F6, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_19 = L_18;
		NullCheck(L_19);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_19, _stringLiteral4BD7FDE208E0373B221810962DA9C6C57339E364, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_20 = L_19;
		NullCheck(L_20);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_20, _stringLiteral4BBBF6E7834C24AA4FAD59D546872FA503C6084B, 0, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_21 = L_20;
		NullCheck(L_21);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_21, _stringLiteral079410AFDF8A8290DC264F4D755700D4DAAF91F4, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_22 = L_21;
		NullCheck(L_22);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_22, _stringLiteral57122A04C3596A72887F65B738601418476678E7, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_23 = L_22;
		NullCheck(L_23);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_23, _stringLiteralDFD21CC7508D0779B0B3B400D2B5D651665060A6, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_24 = L_23;
		NullCheck(L_24);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_24, _stringLiteralFDD66CDD7B97059B506472A40D903EA6616EE5DE, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_25 = L_24;
		NullCheck(L_25);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_25, _stringLiteral3A1B4473844D23854218F673A809ABA161F75BBA, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_26 = L_25;
		NullCheck(L_26);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_26, _stringLiteral395F121121D3A37B7F22ACEB4CC8C0A2E785CFFA, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_27 = L_26;
		NullCheck(L_27);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_27, _stringLiteralB5D12D8EBFA73570DFDC58099A34669F0B3B8682, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_28 = L_27;
		NullCheck(L_28);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_28, _stringLiteral8E6206F0E750B78653F8B621A641B68B9255BF17, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_29 = L_28;
		NullCheck(L_29);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_29, _stringLiteral13E0C4D575EF4CFA208688FF6CE58789AF02BBA0, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_30 = L_29;
		NullCheck(L_30);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_30, _stringLiteral405C5C8AEC9362A04D5A32008B0D8CE6143B6613, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_31 = L_30;
		NullCheck(L_31);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_31, _stringLiteralB530856CAC09ED25A4DA236BEA7A8FA5B3538420, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_32 = L_31;
		NullCheck(L_32);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_32, _stringLiteralAC38B21AD0EB9DE4133BFC7F438CDB9B6189495B, 0, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_33 = L_32;
		NullCheck(L_33);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_33, _stringLiteral75FC36F3249DA4CE5C93558EF4747F7E0B205470, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_34 = L_33;
		NullCheck(L_34);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_34, _stringLiteralC048C43A99B3C90804EEBA637998A43F953E61B5, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_35 = L_34;
		NullCheck(L_35);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_35, _stringLiteral38611C47421E5420D169305A4C4482AD6300720E, 0, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_36 = L_35;
		NullCheck(L_36);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_36, _stringLiteral58BBB4EDBFDCD31C75C2E9DBF82FB0D890F3FDA3, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_37 = L_36;
		NullCheck(L_37);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_37, _stringLiteral447A985D020E70B4D77B0701303D8F511295B32D, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_38 = L_37;
		NullCheck(L_38);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_38, _stringLiteral48F54E824E0E6AF56C862FF6251F25E5CB152BF9, 0, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_39 = L_38;
		NullCheck(L_39);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_39, _stringLiteral258EBBFB914390B152C3C49D597D34EB4015FF16, 4, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_40 = L_39;
		NullCheck(L_40);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_40, _stringLiteral9AB4AF6C8CCC52DA7CE36D811BADA7F640721296, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_41 = L_40;
		NullCheck(L_41);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_41, _stringLiteral22DC889BC972FCD09DEFF7641E6B361E1A814826, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_42 = L_41;
		NullCheck(L_42);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_42, _stringLiteral09ACAF0EC6B5F6E7799AC236F0CA186A2E1F4239, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_43 = L_42;
		NullCheck(L_43);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_43, _stringLiteralA3F56BA8529D7BE456BD480AB16C0ACC7628CF61, 0, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_44 = L_43;
		NullCheck(L_44);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_44, _stringLiteralBB073CF4C6E067593B42F72480CA2D174D8BE952, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_45 = L_44;
		NullCheck(L_45);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_45, _stringLiteral93F9C7D2C7E3B3B879344F845BF299AE5A11BFF3, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_46 = L_45;
		NullCheck(L_46);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_46, _stringLiteral45A2803629897DBB2C206F364A3099B875FAF04F, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_47 = L_46;
		NullCheck(L_47);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_47, _stringLiteral5AACB58D619B294B5EE03B0837F285087DE605AA, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_48 = L_47;
		NullCheck(L_48);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_48, _stringLiteralF2F032C35FA7D119E187D44AA3ABC0FACF45EACB, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_49 = L_48;
		NullCheck(L_49);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_49, _stringLiteralE7071BF332C25311420FA71C8E3385289D87B413, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_50 = L_49;
		NullCheck(L_50);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_50, _stringLiteral104C3D8C85D4DBCE20024956C2628C437C629A83, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_51 = L_50;
		NullCheck(L_51);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_51, _stringLiteral16303F63CAFE3259A012582C0D4DFDD43952E56F, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_52 = L_51;
		NullCheck(L_52);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_52, _stringLiteral36938B39E43FFBE00F46140DCB7313C97E180908, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_53 = L_52;
		NullCheck(L_53);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_53, _stringLiteralBDCF3FADE7969125498FC2D2DF330D25D1A6EC2D, 0, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_54 = L_53;
		NullCheck(L_54);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_54, _stringLiteralDAD3B004758C6DF500AA2A49CB44733CB7869DBF, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_55 = L_54;
		NullCheck(L_55);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_55, _stringLiteral505DC7B5F7B5E5FDCEE2CD01C9B83BB38C328A1B, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_56 = L_55;
		NullCheck(L_56);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_56, _stringLiteral082894E5DCF8D93E2AF9B1A38C5CF0152077D9D4, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_57 = L_56;
		NullCheck(L_57);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_57, _stringLiteralA32AA422B9D45CD4F7920FD6B94EA13BC3F55120, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_58 = L_57;
		NullCheck(L_58);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_58, _stringLiteral5B6BE14C87C0E466C1EFBE237A318884BD2F7F0D, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_59 = L_58;
		NullCheck(L_59);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_59, _stringLiteralFB10F3876F878924988BE8256B639BB0869B41B2, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_60 = L_59;
		NullCheck(L_60);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_60, _stringLiteralCA22054A8B87E1C1362994865922E9BE924DD589, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_61 = L_60;
		NullCheck(L_61);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_61, _stringLiteral6A78A58188D774704931BAD9BEED28758B7E213F, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_62 = L_61;
		NullCheck(L_62);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_62, _stringLiteralD0DC72E82E7420768946DB6472FF2FE3E721B0AD, 0, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_63 = L_62;
		NullCheck(L_63);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_63, _stringLiteral16366EFF1098954CA719C6CFBEBD951926CFD64E, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_64 = L_63;
		NullCheck(L_64);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_64, _stringLiteral76F26756BFE13A4CF3DAB4864254FB3F09DA993E, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_65 = L_64;
		NullCheck(L_65);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_65, _stringLiteral40A375960271895A6C9D6E67832DFF850E7818FB, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_66 = L_65;
		NullCheck(L_66);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_66, _stringLiteral4184C304972D6C880108F08C499280157EBAC151, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_67 = L_66;
		NullCheck(L_67);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_67, _stringLiteral6D33BA5F8204B4ABECBBF61716B9AF4C90BEFEF1, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_68 = L_67;
		NullCheck(L_68);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_68, _stringLiteral30F6F02FEDC0164A519004DC0D974D5F5C495693, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_69 = L_68;
		NullCheck(L_69);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_69, _stringLiteral2AF7BC4852F23D16CF2079B71E5991F15A61E81E, 0, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_70 = L_69;
		NullCheck(L_70);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_70, _stringLiteral713D58DAA282E557C1FB99B563A33819B5DAB47D, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_71 = L_70;
		NullCheck(L_71);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_71, _stringLiteral3E26B4BE8E1A4D1123D396C9945610AFBF71BF3A, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_72 = L_71;
		NullCheck(L_72);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_72, _stringLiteral6F296BCA0F675C0368B3ACDE08DD6C152E56621D, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_73 = L_72;
		NullCheck(L_73);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_73, _stringLiteral0CF567A3CC7E346F2BEAB620A73CFB5CDAF3ADBA, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_74 = L_73;
		NullCheck(L_74);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_74, _stringLiteral02F274D8EFE8DBE0F707B65BA93140F8C1EC83B4, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_75 = L_74;
		NullCheck(L_75);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_75, _stringLiteral054C61CC7E92B92D00405F3DBD04C8C90DD763B8, 0, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_76 = L_75;
		NullCheck(L_76);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_76, _stringLiteral8C91977FD80567D0C289B5DD0C60AA24E73CAE76, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_77 = L_76;
		NullCheck(L_77);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_77, _stringLiteral5D7E10FB1136637DF3EEA7E332D50E75ECCFAE35, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_78 = L_77;
		NullCheck(L_78);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_78, _stringLiteral5F1E01DA43AD1DD21A227DBD58072E59026AA796, 3, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_79 = L_78;
		NullCheck(L_79);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_79, _stringLiteral98209D2C0B024C19D99DE742E6003B721296652E, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_80 = L_79;
		NullCheck(L_80);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_80, _stringLiteralF077AC84D48734DD287D272D536914E05773D01D, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_81 = L_80;
		NullCheck(L_81);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_81, _stringLiteral7F43C6AFB1C84128718F10F14E8CC804822717EC, 0, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_82 = L_81;
		NullCheck(L_82);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_82, _stringLiteral4554697696DB334C4A69857E431F5359A5652C33, 3, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_83 = L_82;
		NullCheck(L_83);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_83, _stringLiteral00736996BFF6E813FFC831E7963AB11A4647B861, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_84 = L_83;
		NullCheck(L_84);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_84, _stringLiteralE5937D651E29A4D90762E4DD3B121B380E293FB7, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_85 = L_84;
		NullCheck(L_85);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_85, _stringLiteral58B90608C76E395C05539701FDF64C831A43673D, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_86 = L_85;
		NullCheck(L_86);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_86, _stringLiteralB20ED1DE1A061966164B9D5AF6835D402909E3E0, 0, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_87 = L_86;
		NullCheck(L_87);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_87, _stringLiteralFB2C4D8828AFC358869C34BB5058A83482A7A021, 3, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_88 = L_87;
		NullCheck(L_88);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_88, _stringLiteralE8A2DB968E4D46B21E87FD4121925CEBAEC58125, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_89 = L_88;
		NullCheck(L_89);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_89, _stringLiteral36149BCD2C8B864CB90F75A17A96F5A6BE03F3E5, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_90 = L_89;
		NullCheck(L_90);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_90, _stringLiteral0DD749240B9F1DE9E3434C626FF5489F68F6D860, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_91 = L_90;
		NullCheck(L_91);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_91, _stringLiteralBB0117465450FC41C80773A51F2125C52C8DA63C, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_92 = L_91;
		NullCheck(L_92);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_92, _stringLiteralB67F8639FB16F6C4841EED07F5641A7B82C815D5, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_93 = L_92;
		NullCheck(L_93);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_93, _stringLiteral5F9A84D290654E9508A7E5B24B2A31F01448DF3C, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_94 = L_93;
		NullCheck(L_94);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_94, _stringLiteral6B072065FA7EE3F58209725EEEBF4B1044C4573C, 3, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_95 = L_94;
		NullCheck(L_95);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_95, _stringLiteralFAA80E9D727A341BE57ECEAEF7A1A4FE28DD806D, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_96 = L_95;
		NullCheck(L_96);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_96, _stringLiteralEB1579E337081436208C9033D7D92967BE03DCE0, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_97 = L_96;
		NullCheck(L_97);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_97, _stringLiteral3CF09EA528F2B59A7130F83612C8F6DC4419E135, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_98 = L_97;
		NullCheck(L_98);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_98, _stringLiteral12AF1BC26072634DC2AE0ECE0471600FE074A13E, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_99 = L_98;
		NullCheck(L_99);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_99, _stringLiteral0621EA2B36667C33F4A1FEDA6E1CA3FB3D1C840C, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_100 = L_99;
		NullCheck(L_100);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_100, _stringLiteral5A3268A7F7F8F2CACA1449DEE6DBD287E1EE537B, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_101 = L_100;
		NullCheck(L_101);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_101, _stringLiteral7F64C019F9920BB9DBA8494E22F5F5627CC63913, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_102 = L_101;
		NullCheck(L_102);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_102, _stringLiteral7A71B86AFF784DE82443E14289760F1D91D8EFAD, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_103 = L_102;
		NullCheck(L_103);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_103, _stringLiteral4C978FAA91BFFCF3641BC0ACD796F4EE993AB4A0, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_104 = L_103;
		NullCheck(L_104);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_104, _stringLiteral83BB4AF414511BF4A0E273F515A8A4933C296E52, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_105 = L_104;
		NullCheck(L_105);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_105, _stringLiteralC2055FDF7B20639C9978913DD0AC3D2335F059CD, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_106 = L_105;
		NullCheck(L_106);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_106, _stringLiteralF44C639257DDD3D541C5E71BAFEB64F9533A03D0, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_107 = L_106;
		NullCheck(L_107);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_107, _stringLiteralBEEEADECA10709FED3CC67A10B0C61BCA3586135, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_108 = L_107;
		NullCheck(L_108);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_108, _stringLiteral22707A051BA71652A76B65CD3B1CF3D57FCECCDF, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_109 = L_108;
		NullCheck(L_109);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_109, _stringLiteralC04B333D53795815D844A1EAE07C424CF7A388F5, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_110 = L_109;
		NullCheck(L_110);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_110, _stringLiteral632B8C247B430215FA82D909105BE257B7D7B524, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_111 = L_110;
		NullCheck(L_111);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_111, _stringLiteralDE8982A4CBA861107110D88200ED6AE58BDD2D94, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_112 = L_111;
		NullCheck(L_112);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_112, _stringLiteral71EF8EB7B9B3D3F7D8D889E7EAA085850B47E14D, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_113 = L_112;
		NullCheck(L_113);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_113, _stringLiteralC8E58DAD4CC2966A3FCCFB3B3578153C051232BA, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_114 = L_113;
		NullCheck(L_114);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_114, _stringLiteral3595F061260FF16E7FACFE48B48E71066E9ABA1C, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_115 = L_114;
		NullCheck(L_115);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_115, _stringLiteralD9FCB88E3173981902A4EA573B3AF3CFFA2158B9, 3, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_116 = L_115;
		NullCheck(L_116);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_116, _stringLiteral5D38B6C4C25F92A9ADD95A1A5C8F80EAA4D3AE14, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_117 = L_116;
		NullCheck(L_117);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_117, _stringLiteralBD3F71CA82FA3F7797AA9DCFD97CD6262DACD1E1, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_118 = L_117;
		NullCheck(L_118);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_118, _stringLiteral42D40175FF539DDF928B1E987A977BBF3CB544BF, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_119 = L_118;
		NullCheck(L_119);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_119, _stringLiteralE62699F68FB3F2AA9BFA8C0E319B57A39F0948E7, 0, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_120 = L_119;
		NullCheck(L_120);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_120, _stringLiteral385A64F0FE2CF8945475789AF05D5D5E4346EFAE, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_121 = L_120;
		NullCheck(L_121);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_121, _stringLiteralE4D0382C63C65326B1CD2014BF02F8DAF87851CB, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_122 = L_121;
		NullCheck(L_122);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_122, _stringLiteralAA62FCD77AFB95737483572B0CA74638491BEDB3, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_123 = L_122;
		NullCheck(L_123);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_123, _stringLiteral308495485824FFEF8CDA6443346A3605E719A75A, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_124 = L_123;
		NullCheck(L_124);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_124, _stringLiteral9A4742276AC86152B04539D6B218622416E5AF2D, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_125 = L_124;
		NullCheck(L_125);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_125, _stringLiteralFA00CB7B7D55E48031B91C07E02C363112E00654, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_126 = L_125;
		NullCheck(L_126);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_126, _stringLiteral25BB8D65B0F3964EA0D799145078C16FEF52341C, 0, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_127 = L_126;
		NullCheck(L_127);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_127, _stringLiteral244F217EFEE741CEA827D278453DDB6453729BB6, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_128 = L_127;
		NullCheck(L_128);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_128, _stringLiteralF4B564DBD703C27495C5517490A3AA7687F00F50, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_129 = L_128;
		NullCheck(L_129);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_129, _stringLiteral14A086C4277601C8D35634B59AC6F886CFD855F2, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_130 = L_129;
		NullCheck(L_130);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_130, _stringLiteral10E47B045BE29B1A8AFA0F7B2441CB47CA3A67E8, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_131 = L_130;
		NullCheck(L_131);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_131, _stringLiteral2D674CA6A1CCD2F2B3D17EE3094E3EA43AAB743D, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_132 = L_131;
		NullCheck(L_132);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_132, _stringLiteral6F8E4A8EEE6F2F75A808EB9CA38D23A216EB7356, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_133 = L_132;
		NullCheck(L_133);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_133, _stringLiteral30DE4318B8AF0C3D59547CEE589746F6DBAB89C3, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_134 = L_133;
		NullCheck(L_134);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_134, _stringLiteralAED5CB60F87C1BB12D5084E281408448AC106017, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_135 = L_134;
		NullCheck(L_135);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_135, _stringLiteralF37708F5D3FF7E541148EF1DEFA846BEDDD35A86, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_136 = L_135;
		NullCheck(L_136);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_136, _stringLiteral2028A2611FF494355F4C886D11936814AB305050, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_137 = L_136;
		NullCheck(L_137);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_137, _stringLiteralD5CBCE94B6B0D32D067FD96ED99B5DEB20FDCFB5, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_138 = L_137;
		NullCheck(L_138);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_138, _stringLiteralF66420578C2FEC2FACAC16428DDF4EE41540B44C, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_139 = L_138;
		NullCheck(L_139);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_139, _stringLiteral6418250E3BBBB638BAAE36C63372B4E5258CABD4, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_140 = L_139;
		NullCheck(L_140);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_140, _stringLiteralB2ECCE4B9B5B5CB24297087DC10EAC9B8D314C55, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_141 = L_140;
		NullCheck(L_141);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_141, _stringLiteral9EF464966249C19D746E6108CC6B42901A51EB2E, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_142 = L_141;
		NullCheck(L_142);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_142, _stringLiteral2539188F4D764C792605E272835EC14F18624058, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_143 = L_142;
		NullCheck(L_143);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_143, _stringLiteral60550E25F59BAA9CF9F90B89F084315A0E7E7590, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_144 = L_143;
		NullCheck(L_144);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_144, _stringLiteral9367A319824C783BD69583CB2490F67DAF5AC086, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_145 = L_144;
		NullCheck(L_145);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_145, _stringLiteralA54E360A25C694D35AC2BC1F6481EF45DFBA8963, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_146 = L_145;
		NullCheck(L_146);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_146, _stringLiteral80120090265549DE9FE973E46443BFA74E325435, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_147 = L_146;
		NullCheck(L_147);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_147, _stringLiteral7A535E4F4CDF4AED9782CE43763768AB6DB185C7, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_148 = L_147;
		NullCheck(L_148);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_148, _stringLiteralDB4F6E9A963891777D89171877E979F6703604C1, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_149 = L_148;
		NullCheck(L_149);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_149, _stringLiteral4370344BF391C9775674F57F65AB43157A70FFA8, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_150 = L_149;
		NullCheck(L_150);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_150, _stringLiteralA634693E806EDA103130B07B3733ADA02E7E6FD1, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_151 = L_150;
		NullCheck(L_151);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_151, _stringLiteralFDD06087A1C406B544D206318317F79697ACD5EC, 3, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_152 = L_151;
		NullCheck(L_152);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_152, _stringLiteralDA667D509F3483FEA9BABF68B23663F189FF7D3D, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_153 = L_152;
		NullCheck(L_153);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_153, _stringLiteralA57D6FD6545D30BFF1842E92D39CEBD8F94864C6, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_154 = L_153;
		NullCheck(L_154);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_154, _stringLiteralDAFA078D8B7D7134A49C356BBBF77DB7C1B71689, 0, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_155 = L_154;
		NullCheck(L_155);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_155, _stringLiteral1A99A8C8398B221DA18F963F7662BAF65F57BBBE, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_156 = L_155;
		NullCheck(L_156);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_156, _stringLiteral66B0C5DCF501F8727C24052B01FF06C451E7070E, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_157 = L_156;
		NullCheck(L_157);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_157, _stringLiteralB97FC8BB8B857BF13978EF739D9F564BCED0EB98, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_158 = L_157;
		NullCheck(L_158);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_158, _stringLiteral94F5C0AD2551979F304FD9ABB4C9FBBB9D2047F7, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_159 = L_158;
		NullCheck(L_159);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_159, _stringLiteral4824A3B2B566BA0E0F228A35F400EB362238E8C8, 0, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_160 = L_159;
		NullCheck(L_160);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_160, _stringLiteral78117315CB3E34E846CD26F5627994F837AFCACD, 4, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_161 = L_160;
		NullCheck(L_161);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_161, _stringLiteralCACB20C6D3B53D812D60572CB4D519A855167070, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_162 = L_161;
		NullCheck(L_162);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_162, _stringLiteral3EB2BDB70C070A2908F3250D1D9C142B29AFFCB5, 0, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_163 = L_162;
		NullCheck(L_163);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_163, _stringLiteral5290C04F55FD997B854A58817AA740D4304231E4, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_164 = L_163;
		NullCheck(L_164);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_164, _stringLiteral51B4E0C1F65B55DD8FC1BD84F7C7155D019682F2, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_165 = L_164;
		NullCheck(L_165);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_165, _stringLiteral94C4A1631484AD24431E32FCAED7AE7426DB402F, 0, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_166 = L_165;
		NullCheck(L_166);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_166, _stringLiteralF25E0841CC395F242DA7A87EE69C457CBB5CF7C2, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_167 = L_166;
		NullCheck(L_167);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_167, _stringLiteral3AA260D90D3BE72AF9AF17CC353F3D97B1FF35AB, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_168 = L_167;
		NullCheck(L_168);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_168, _stringLiteral63A5CD74B260DC0F1665E1409A22C48AC811DF41, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		__this->___m_Iso4217CurrencyMinorUnits_0 = L_168;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Iso4217CurrencyMinorUnits_0), (void*)L_168);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single Unity.Services.Analytics.AnalyticsContainer::get_AutoFlushPeriod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnalyticsContainer_get_AutoFlushPeriod_mD89D49225FE7E3A9BAA505AAE9642EE42A9FE49A (AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// return k_AutoFlushPeriod * m_Service.AutoflushPeriodMultiplier;
		AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* L_0 = __this->___m_Service_10;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = AnalyticsServiceInstance_get_AutoflushPeriodMultiplier_m306D10F0B29C2FBE941D7607D61C7AE5702AC3AE(L_0, NULL);
		V_0 = ((float)il2cpp_codegen_multiply((60.0f), ((float)L_1)));
		goto IL_0016;
	}

IL_0016:
	{
		// }
		float L_2 = V_0;
		return L_2;
	}
}
// Unity.Services.Analytics.AnalyticsContainer Unity.Services.Analytics.AnalyticsContainer::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1* AnalyticsContainer_get_Instance_m5DE0306D86F033D52B086F0592AEB27E0D7E5510 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static AnalyticsContainer Instance { get; private set; }
		AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1* L_0 = ((AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_11;
		return L_0;
	}
}
// System.Void Unity.Services.Analytics.AnalyticsContainer::set_Instance(Unity.Services.Analytics.AnalyticsContainer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsContainer_set_Instance_mCE629230958D49CD99B20F0E39559F5184930161 (AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static AnalyticsContainer Instance { get; private set; }
		AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1* L_0 = ___value0;
		((AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_11), (void*)L_0);
		return;
	}
}
// System.Single Unity.Services.Analytics.AnalyticsContainer::get_TimeUntilHeartbeat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnalyticsContainer_get_TimeUntilHeartbeat_m4C6BCF4F210E2F00553BEEC0F4AC8F1756FB9371 (AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1* __this, const RuntimeMethod* method) 
{
	{
		// internal float TimeUntilHeartbeat => AutoFlushPeriod - m_AutoFlushTime;
		float L_0;
		L_0 = AnalyticsContainer_get_AutoFlushPeriod_mD89D49225FE7E3A9BAA505AAE9642EE42A9FE49A(__this, NULL);
		float L_1 = __this->___m_AutoFlushTime_8;
		return ((float)il2cpp_codegen_subtract(L_0, L_1));
	}
}
// Unity.Services.Analytics.AnalyticsContainer Unity.Services.Analytics.AnalyticsContainer::CreateContainer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1* AnalyticsContainer_CreateContainer_m56826B5BF923F5DEE9B8A6CE1B935A191D0805B3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisAnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_mE4F8B8275039940AFB099EE841C9060ACCFF2A11_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD80A64E0036F8330EADC3705DD59CC6581FE8E99);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1* V_1 = NULL;
	{
		// if (!s_Created)
		bool L_0 = ((AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_il2cpp_TypeInfo_var))->___s_Created_6;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_005f;
		}
	}
	{
		// s_Container = new GameObject("AnalyticsContainer");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_2, _stringLiteralD80A64E0036F8330EADC3705DD59CC6581FE8E99, NULL);
		((AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_il2cpp_TypeInfo_var))->___s_Container_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_il2cpp_TypeInfo_var))->___s_Container_7), (void*)L_2);
		// Instance = s_Container.AddComponent<AnalyticsContainer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = ((AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_il2cpp_TypeInfo_var))->___s_Container_7;
		NullCheck(L_3);
		AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1* L_4;
		L_4 = GameObject_AddComponent_TisAnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_mE4F8B8275039940AFB099EE841C9060ACCFF2A11(L_3, GameObject_AddComponent_TisAnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_mE4F8B8275039940AFB099EE841C9060ACCFF2A11_RuntimeMethod_var);
		AnalyticsContainer_set_Instance_mCE629230958D49CD99B20F0E39559F5184930161_inline(L_4, NULL);
		// s_Container.hideFlags = HideFlags.DontSaveInBuild | HideFlags.NotEditable;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = ((AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_il2cpp_TypeInfo_var))->___s_Container_7;
		NullCheck(L_5);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_5, ((int32_t)24), NULL);
		// s_Container.hideFlags |= HideFlags.HideInInspector;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = ((AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_il2cpp_TypeInfo_var))->___s_Container_7;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = L_6;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = Object_get_hideFlags_mA08F5E41671B8C6B5073C6B9E2799BCE6E0DF7F3(L_7, NULL);
		NullCheck(L_7);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_7, ((int32_t)((int32_t)L_8|2)), NULL);
		// DontDestroyOnLoad(s_Container);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = ((AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_il2cpp_TypeInfo_var))->___s_Container_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9(L_9, NULL);
		// s_Created = true;
		((AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_il2cpp_TypeInfo_var))->___s_Created_6 = (bool)1;
	}

IL_005f:
	{
		// return Instance;
		AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1* L_10;
		L_10 = AnalyticsContainer_get_Instance_m5DE0306D86F033D52B086F0592AEB27E0D7E5510_inline(NULL);
		V_1 = L_10;
		goto IL_0067;
	}

IL_0067:
	{
		// }
		AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1* L_11 = V_1;
		return L_11;
	}
}
// System.Void Unity.Services.Analytics.AnalyticsContainer::Initialize(Unity.Services.Analytics.AnalyticsServiceInstance)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsContainer_Initialize_m57C0D3C612C0DD90A98563A788EC6BE852555111 (AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1* __this, AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* ___service0, const RuntimeMethod* method) 
{
	{
		// m_Service = service;
		AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* L_0 = ___service0;
		__this->___m_Service_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Service_10), (void*)L_0);
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.AnalyticsContainer::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsContainer_Enable_m7B1F481F487CB453A944765C5CF96E8AFE416219 (AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1* __this, const RuntimeMethod* method) 
{
	{
		// enabled = true;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.AnalyticsContainer::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsContainer_Disable_m9373F843C8BB6828BF3D709D6366CD1151A4B243 (AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1* __this, const RuntimeMethod* method) 
{
	{
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		// m_AutoFlushTime = 0.0f;
		__this->___m_AutoFlushTime_8 = (0.0f);
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.AnalyticsContainer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsContainer_Update_m077BEBF391B2FFFBA1892069B942D1C31C3038CD (AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// m_GameRunningTime += Time.unscaledDeltaTime;
		float L_0 = __this->___m_GameRunningTime_9;
		float L_1;
		L_1 = Time_get_unscaledDeltaTime_m89252D23CC5AA295CFA4EB2BCB417A831AC51652(NULL);
		__this->___m_GameRunningTime_9 = ((float)il2cpp_codegen_add(L_0, L_1));
		// if (m_GameRunningTime >= k_GameRunningPeriod)
		float L_2 = __this->___m_GameRunningTime_9;
		V_0 = (bool)((((int32_t)((!(((float)L_2) >= ((float)(60.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0040;
		}
	}
	{
		// m_Service.RecordGameRunningIfNecessary();
		AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* L_4 = __this->___m_Service_10;
		NullCheck(L_4);
		AnalyticsServiceInstance_RecordGameRunningIfNecessary_mDC174CE67E36436A206DDC321308853A727484C3(L_4, NULL);
		// m_GameRunningTime = 0.0f;
		__this->___m_GameRunningTime_9 = (0.0f);
	}

IL_0040:
	{
		// m_AutoFlushTime += Time.unscaledDeltaTime;
		float L_5 = __this->___m_AutoFlushTime_8;
		float L_6;
		L_6 = Time_get_unscaledDeltaTime_m89252D23CC5AA295CFA4EB2BCB417A831AC51652(NULL);
		__this->___m_AutoFlushTime_8 = ((float)il2cpp_codegen_add(L_5, L_6));
		// if (m_AutoFlushTime >= AutoFlushPeriod)
		float L_7 = __this->___m_AutoFlushTime_8;
		float L_8;
		L_8 = AnalyticsContainer_get_AutoFlushPeriod_mD89D49225FE7E3A9BAA505AAE9642EE42A9FE49A(__this, NULL);
		V_1 = (bool)((((int32_t)((!(((float)L_7) >= ((float)L_8)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_0080;
		}
	}
	{
		// m_Service.Flush();
		AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* L_10 = __this->___m_Service_10;
		NullCheck(L_10);
		AnalyticsServiceInstance_Flush_mB8F0ED919FB47026C5CB61DD3562FAA09009C21E(L_10, NULL);
		// m_AutoFlushTime = 0.0f;
		__this->___m_AutoFlushTime_8 = (0.0f);
	}

IL_0080:
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.AnalyticsContainer::OnApplicationPause(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsContainer_OnApplicationPause_m0D7562975A5F9A1B1DD292A6EC115CB0E345FA8B (AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1* __this, bool ___paused0, const RuntimeMethod* method) 
{
	{
		// m_Service.ApplicationPaused(paused);
		AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* L_0 = __this->___m_Service_10;
		bool L_1 = ___paused0;
		NullCheck(L_0);
		AnalyticsServiceInstance_ApplicationPaused_mB64F8B2FF25B824FA074668EF917FC684828893C(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.AnalyticsContainer::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsContainer_OnDestroy_m27C97541D5D0E67B2F4FA9D110EFDD12C88866DD (AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Service.ApplicationQuit();
		AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* L_0 = __this->___m_Service_10;
		NullCheck(L_0);
		AnalyticsServiceInstance_ApplicationQuit_mC6358CE4734C9A39DA8A1AAE1F529EB5D5A17E03(L_0, NULL);
		// s_Container = null;
		((AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_il2cpp_TypeInfo_var))->___s_Container_7 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_il2cpp_TypeInfo_var))->___s_Container_7), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		// s_Created = false;
		((AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_il2cpp_TypeInfo_var))->___s_Created_6 = (bool)0;
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.AnalyticsContainer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsContainer__ctor_m181248237969AF6A721DE089E172681F92EE9A04 (AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1* __this, const RuntimeMethod* method) 
{
	{
		// float m_AutoFlushTime = 0.0f;
		__this->___m_AutoFlushTime_8 = (0.0f);
		// float m_GameRunningTime = 0.0f;
		__this->___m_GameRunningTime_9 = (0.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.Services.Analytics.ConsentCheckExceptionReason Unity.Services.Analytics.ConsentCheckException::get_Reason()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConsentCheckException_get_Reason_m9D28EC501EAD29F3D4EF76D73A63F619CE75E631 (ConsentCheckException_t96E7054ECB013548EA92EEFFFACAB143D5A86B7D* __this, const RuntimeMethod* method) 
{
	{
		// [Preserve] public ConsentCheckExceptionReason Reason { get; private set; }
		int32_t L_0 = __this->___U3CReasonU3Ek__BackingField_19;
		return L_0;
	}
}
// System.Void Unity.Services.Analytics.ConsentCheckException::set_Reason(Unity.Services.Analytics.ConsentCheckExceptionReason)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentCheckException_set_Reason_mB9551C34C6B6C76DAAD9DF12EFF1B0E385CEE968 (ConsentCheckException_t96E7054ECB013548EA92EEFFFACAB143D5A86B7D* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// [Preserve] public ConsentCheckExceptionReason Reason { get; private set; }
		int32_t L_0 = ___value0;
		__this->___U3CReasonU3Ek__BackingField_19 = L_0;
		return;
	}
}
// System.Void Unity.Services.Analytics.ConsentCheckException::.ctor(Unity.Services.Analytics.ConsentCheckExceptionReason,System.Int32,System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentCheckException__ctor_m0F6DC7108E11524A5BBBE85F07DD082873FE95B3 (ConsentCheckException_t96E7054ECB013548EA92EEFFFACAB143D5A86B7D* __this, int32_t ___reason0, int32_t ___errorCode1, String_t* ___message2, Exception_t* ___innerException3, const RuntimeMethod* method) 
{
	{
		// : base(errorCode, message, innerException)
		int32_t L_0 = ___errorCode1;
		String_t* L_1 = ___message2;
		Exception_t* L_2 = ___innerException3;
		RequestFailedException__ctor_m5F2BC9B778764EF58CA947E789CAEEAD27341C7A(__this, L_0, L_1, L_2, NULL);
		// Reason = reason;
		int32_t L_3 = ___reason0;
		ConsentCheckException_set_Reason_mB9551C34C6B6C76DAAD9DF12EFF1B0E385CEE968_inline(__this, L_3, NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Analytics.CoreStatsHelper::SetCoreStatsConsent(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreStatsHelper_SetCoreStatsConsent_mF5D6EDE2380AF3DA289C217CD505940D76D9877E (CoreStatsHelper_tBF3F119096A7ABBDDC9F22ACBF13FA25FCD166E6* __this, bool ___userProvidedConsent0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.CoreStatsHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreStatsHelper__ctor_mD543DD28C5F258FC9B9BDD30D0192F8A7ECF9DF4 (CoreStatsHelper_tBF3F119096A7ABBDDC9F22ACBF13FA25FCD166E6* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Analytics.SdkVersion::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SdkVersion__cctor_mE2ACB892A9290C497A2A8D3AF9C69E0AE16A963B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SdkVersion_t0BDC7D3E9F8175012EACBDB69FD9394AC2679BB8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral638248CC966A586E8F21C2DB6F7D3AEA250E81C1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly string SDK_VERSION = "5.0.0";
		((SdkVersion_t0BDC7D3E9F8175012EACBDB69FD9394AC2679BB8_StaticFields*)il2cpp_codegen_static_fields_for(SdkVersion_t0BDC7D3E9F8175012EACBDB69FD9394AC2679BB8_il2cpp_TypeInfo_var))->___SDK_VERSION_0 = _stringLiteral638248CC966A586E8F21C2DB6F7D3AEA250E81C1;
		Il2CppCodeGenWriteBarrier((void**)(&((SdkVersion_t0BDC7D3E9F8175012EACBDB69FD9394AC2679BB8_StaticFields*)il2cpp_codegen_static_fields_for(SdkVersion_t0BDC7D3E9F8175012EACBDB69FD9394AC2679BB8_il2cpp_TypeInfo_var))->___SDK_VERSION_0), (void*)_stringLiteral638248CC966A586E8F21C2DB6F7D3AEA250E81C1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Nullable`1<System.Single> Unity.Services.Analytics.Platform.DeviceVolumeProvider::GetDeviceVolume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 DeviceVolumeProvider_GetDeviceVolume_mE8D3153764DEAED94CC7D598C33759BC25685946 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral17C932391CAC9098F30A5137100A8A293752446C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9A053A49693D46963A63E83B4F75CF40EED8D8FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CEE5507D8A5957082FF9D1BA24E8DF9EE625F7D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE997756AE28DA8CED1FA1160227AA74FACA2C68);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* V_0 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_1 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// AndroidJavaClass jc = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_0, _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078, NULL);
		V_0 = L_0;
		// AndroidJavaObject activity = jc.GetStatic<AndroidJavaObject>("currentActivity");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1 = V_0;
		NullCheck(L_1);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2;
		L_2 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_1, _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		V_1 = L_2;
		// AndroidJavaObject audioManager = activity.Call<AndroidJavaObject>("getSystemService", "audio");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteralCE997756AE28DA8CED1FA1160227AA74FACA2C68);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteralCE997756AE28DA8CED1FA1160227AA74FACA2C68);
		NullCheck(L_3);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6;
		L_6 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_3, _stringLiteral9A053A49693D46963A63E83B4F75CF40EED8D8FD, L_5, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		V_2 = L_6;
		// int STREAM_MUSIC_rawValue = 3; // See android docs for STREAM_MUSIC constant on AudioManager
		V_3 = 3;
		// int volume = audioManager.Call<int>("getStreamVolume", STREAM_MUSIC_rawValue);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_7 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_8;
		int32_t L_10 = V_3;
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_12);
		NullCheck(L_7);
		int32_t L_13;
		L_13 = AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC(L_7, _stringLiteral17C932391CAC9098F30A5137100A8A293752446C, L_9, AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		V_4 = L_13;
		// int maxVolume = audioManager.Call<int>("getStreamMaxVolume", STREAM_MUSIC_rawValue);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_14 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = L_15;
		int32_t L_17 = V_3;
		int32_t L_18 = L_17;
		RuntimeObject* L_19 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_18);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_19);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_19);
		NullCheck(L_14);
		int32_t L_20;
		L_20 = AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC(L_14, _stringLiteral9CEE5507D8A5957082FF9D1BA24E8DF9EE625F7D, L_16, AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		V_5 = L_20;
		// return (float) volume / (float) maxVolume;
		int32_t L_21 = V_4;
		int32_t L_22 = V_5;
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420((&L_23), ((float)(((float)L_21)/((float)L_22))), /*hidden argument*/Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420_RuntimeMethod_var);
		V_6 = L_23;
		goto IL_007c;
	}

IL_007c:
	{
		// }
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_24 = V_6;
		return L_24;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Unity.Services.Analytics.Platform.Runtime::Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Runtime_Name_mDE4DDAB3FD997A5634ED6A04960C48513D939C29 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UA2PlatformCode_t169515A6E124BCE234B36176D037F6E09BC3BAC6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	{
		// return GetPlatform().ToString();
		int32_t L_0;
		L_0 = Runtime_GetPlatform_m728053062B818EEA0392E6B8AD6D8C137CF76810(NULL);
		V_0 = L_0;
		Il2CppFakeBox<int32_t> L_1(UA2PlatformCode_t169515A6E124BCE234B36176D037F6E09BC3BAC6_il2cpp_TypeInfo_var, (&V_0));
		String_t* L_2;
		L_2 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_1), NULL);
		V_1 = L_2;
		goto IL_0017;
	}

IL_0017:
	{
		// }
		String_t* L_3 = V_1;
		return L_3;
	}
}
// Unity.Services.Analytics.Platform.UA2PlatformCode Unity.Services.Analytics.Platform.Runtime::GetPlatform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Runtime_GetPlatform_m728053062B818EEA0392E6B8AD6D8C137CF76810 (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t G_B19_0 = 0;
	{
		// switch (Application.platform)
		int32_t L_0;
		L_0 = Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D(NULL);
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) > ((int32_t)((int32_t)25))))
		{
			goto IL_0071;
		}
	}
	{
		int32_t L_3 = V_0;
		switch (L_3)
		{
			case 0:
			{
				goto IL_0086;
			}
			case 1:
			{
				goto IL_0086;
			}
			case 2:
			{
				goto IL_008b;
			}
			case 3:
			{
				goto IL_00c0;
			}
			case 4:
			{
				goto IL_00c0;
			}
			case 5:
			{
				goto IL_00c0;
			}
			case 6:
			{
				goto IL_00c0;
			}
			case 7:
			{
				goto IL_008b;
			}
			case 8:
			{
				goto IL_0090;
			}
			case 9:
			{
				goto IL_00c0;
			}
			case 10:
			{
				goto IL_00c0;
			}
			case 11:
			{
				goto IL_0094;
			}
			case 12:
			{
				goto IL_00c0;
			}
			case 13:
			{
				goto IL_008b;
			}
			case 14:
			{
				goto IL_00c0;
			}
			case 15:
			{
				goto IL_00c0;
			}
			case 16:
			{
				goto IL_008b;
			}
			case 17:
			{
				goto IL_0098;
			}
			case 18:
			{
				goto IL_009d;
			}
			case 19:
			{
				goto IL_009d;
			}
			case 20:
			{
				goto IL_009d;
			}
		}
	}
	{
		goto IL_006a;
	}

IL_006a:
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)25))))
		{
			goto IL_00ad;
		}
	}
	{
		goto IL_00c0;
	}

IL_0071:
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)27))))
		{
			goto IL_00b2;
		}
	}
	{
		goto IL_0078;
	}

IL_0078:
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)31))))
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_007f;
	}

IL_007f:
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)32))))
		{
			goto IL_00bb;
		}
	}
	{
		goto IL_00c0;
	}

IL_0086:
	{
		// return UA2PlatformCode.MAC_CLIENT;
		V_2 = ((int32_t)16);
		goto IL_00c4;
	}

IL_008b:
	{
		// return UA2PlatformCode.PC_CLIENT;
		V_2 = ((int32_t)15);
		goto IL_00c4;
	}

IL_0090:
	{
		// return UA2PlatformCode.IOS;
		V_2 = 1;
		goto IL_00c4;
	}

IL_0094:
	{
		// return UA2PlatformCode.ANDROID;
		V_2 = 5;
		goto IL_00c4;
	}

IL_0098:
	{
		// return UA2PlatformCode.WEB;
		V_2 = ((int32_t)14);
		goto IL_00c4;
	}

IL_009d:
	{
		// return (SystemInfo.deviceType == DeviceType.Handheld)
		//     ? UA2PlatformCode.WINDOWS_MOBILE
		//     : UA2PlatformCode.PC_CLIENT;
		int32_t L_8;
		L_8 = SystemInfo_get_deviceType_mB67B9AC09C2BE8A8B0AED6765AD70719D15C889F(NULL);
		if ((((int32_t)L_8) == ((int32_t)1)))
		{
			goto IL_00a9;
		}
	}
	{
		G_B19_0 = ((int32_t)15);
		goto IL_00aa;
	}

IL_00a9:
	{
		G_B19_0 = 8;
	}

IL_00aa:
	{
		V_2 = G_B19_0;
		goto IL_00c4;
	}

IL_00ad:
	{
		// return UA2PlatformCode.PS4;
		V_2 = ((int32_t)18);
		goto IL_00c4;
	}

IL_00b2:
	{
		// return UA2PlatformCode.XBOXONE;
		V_2 = ((int32_t)21);
		goto IL_00c4;
	}

IL_00b7:
	{
		// return UA2PlatformCode.IOS_TV;
		V_2 = 4;
		goto IL_00c4;
	}

IL_00bb:
	{
		// return UA2PlatformCode.SWITCH;
		V_2 = ((int32_t)23);
		goto IL_00c4;
	}

IL_00c0:
	{
		// return UA2PlatformCode.UNKNOWN;
		V_2 = 0;
		goto IL_00c4;
	}

IL_00c4:
	{
		// }
		int32_t L_9 = V_2;
		return L_9;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Unity.Services.Analytics.Data.StdCommonParams::get_GameStoreID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StdCommonParams_get_GameStoreID_m84117F13E7CB919145EC3EF0480411695B7B7B69 (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) 
{
	{
		// internal string GameStoreID { get; set; }
		String_t* L_0 = __this->___U3CGameStoreIDU3Ek__BackingField_0;
		return L_0;
	}
}
// System.String Unity.Services.Analytics.Data.StdCommonParams::get_GameBundleID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StdCommonParams_get_GameBundleID_m614C916F3CBA18D60161DDFD84B4C9D5C2E99531 (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) 
{
	{
		// internal string GameBundleID { get; set; }
		String_t* L_0 = __this->___U3CGameBundleIDU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Unity.Services.Analytics.Data.StdCommonParams::set_GameBundleID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StdCommonParams_set_GameBundleID_m01625DC8750160BEF86073C96048B910A23B8FE6 (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// internal string GameBundleID { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CGameBundleIDU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CGameBundleIDU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.String Unity.Services.Analytics.Data.StdCommonParams::get_Platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StdCommonParams_get_Platform_m997C2F5D078131853762DCFBA238288F8EFA191E (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) 
{
	{
		// internal string Platform { get; set; }
		String_t* L_0 = __this->___U3CPlatformU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Unity.Services.Analytics.Data.StdCommonParams::set_Platform(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StdCommonParams_set_Platform_m6270CCD19D8CB881BC5668613C041C5E5BD0996C (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// internal string Platform { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CPlatformU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPlatformU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.String Unity.Services.Analytics.Data.StdCommonParams::get_UasUserID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StdCommonParams_get_UasUserID_m6A4DE2B299022D7DBCEA6EE055C717E59BE2B32C (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) 
{
	{
		// internal string UasUserID { get; set; }
		String_t* L_0 = __this->___U3CUasUserIDU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Unity.Services.Analytics.Data.StdCommonParams::set_UasUserID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StdCommonParams_set_UasUserID_m5079F59137ED8AA3D25BBDFBF10E536812D8ABB7 (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// internal string UasUserID { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CUasUserIDU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CUasUserIDU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.String Unity.Services.Analytics.Data.StdCommonParams::get_Idfv()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StdCommonParams_get_Idfv_m0CB0676EB45E77DE51316B204FFAE5437CEFA6DD (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) 
{
	{
		// internal string Idfv { get; set; }
		String_t* L_0 = __this->___U3CIdfvU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Unity.Services.Analytics.Data.StdCommonParams::set_Idfv(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StdCommonParams_set_Idfv_mC903A6BEA3F5145D959C36D123D084D211085EF9 (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// internal string Idfv { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CIdfvU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIdfvU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Nullable`1<System.Double> Unity.Services.Analytics.Data.StdCommonParams::get_DeviceVolume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 StdCommonParams_get_DeviceVolume_mD4CB9275283492DA050B8BDA949E1E38C35EB76C (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) 
{
	{
		// internal double? DeviceVolume { get; set; }
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_0 = __this->___U3CDeviceVolumeU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Unity.Services.Analytics.Data.StdCommonParams::set_DeviceVolume(System.Nullable`1<System.Double>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StdCommonParams_set_DeviceVolume_mBC014F9E6144D31B7A21082F4F17CADA8B8B8DB8 (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___value0, const RuntimeMethod* method) 
{
	{
		// internal double? DeviceVolume { get; set; }
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_0 = ___value0;
		__this->___U3CDeviceVolumeU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.Nullable`1<System.Double> Unity.Services.Analytics.Data.StdCommonParams::get_BatteryLoad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 StdCommonParams_get_BatteryLoad_mE5C6A63115E33A0FB67BA3BA7FF4CD98021A584A (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) 
{
	{
		// internal double? BatteryLoad { get; set; }
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_0 = __this->___U3CBatteryLoadU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void Unity.Services.Analytics.Data.StdCommonParams::set_BatteryLoad(System.Nullable`1<System.Double>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StdCommonParams_set_BatteryLoad_mC06087861B7DD6C288823A7DDB4A7085B168743E (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___value0, const RuntimeMethod* method) 
{
	{
		// internal double? BatteryLoad { get; set; }
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_0 = ___value0;
		__this->___U3CBatteryLoadU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.String Unity.Services.Analytics.Data.StdCommonParams::get_BuildGuuid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StdCommonParams_get_BuildGuuid_m706EB59064FA0D40D1C244514B2EA2995AE5706D (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) 
{
	{
		// internal string BuildGuuid { get; set; }
		String_t* L_0 = __this->___U3CBuildGuuidU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void Unity.Services.Analytics.Data.StdCommonParams::set_BuildGuuid(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StdCommonParams_set_BuildGuuid_m0DB0779599C5BE31C7A1B76C2AF77E9EF9A3AC0C (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// internal string BuildGuuid { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CBuildGuuidU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CBuildGuuidU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
// System.String Unity.Services.Analytics.Data.StdCommonParams::get_ClientVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StdCommonParams_get_ClientVersion_mA3D1574F4D14E5355C23D39AA130AB106960491D (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) 
{
	{
		// internal string ClientVersion { get; set; }
		String_t* L_0 = __this->___U3CClientVersionU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void Unity.Services.Analytics.Data.StdCommonParams::set_ClientVersion(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StdCommonParams_set_ClientVersion_m97C2B0A6328C2D38BF31BED3F628D0902F36A3D0 (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// internal string ClientVersion { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CClientVersionU3Ek__BackingField_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CClientVersionU3Ek__BackingField_8), (void*)L_0);
		return;
	}
}
// System.String Unity.Services.Analytics.Data.StdCommonParams::get_UserCountry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StdCommonParams_get_UserCountry_mDDDF84AB7FC6D62ECBB642C7C7814D3143DAF0F9 (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) 
{
	{
		// internal string UserCountry { get; set; }
		String_t* L_0 = __this->___U3CUserCountryU3Ek__BackingField_9;
		return L_0;
	}
}
// System.String Unity.Services.Analytics.Data.StdCommonParams::get_ProjectID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StdCommonParams_get_ProjectID_m48D1D967587EF2BB877AB287B6FD03531D3E3658 (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) 
{
	{
		// internal string ProjectID { get; set; }
		String_t* L_0 = __this->___U3CProjectIDU3Ek__BackingField_10;
		return L_0;
	}
}
// System.Void Unity.Services.Analytics.Data.StdCommonParams::set_ProjectID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StdCommonParams_set_ProjectID_m3119C391E989366B60D3A7FC4B4516A0ED285653 (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// internal string ProjectID { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CProjectIDU3Ek__BackingField_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CProjectIDU3Ek__BackingField_10), (void*)L_0);
		return;
	}
}
// System.Void Unity.Services.Analytics.Data.StdCommonParams::SerializeCommonEventParams(Unity.Services.Analytics.Internal.IBuffer&,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StdCommonParams_SerializeCommonEventParams_m174FE65D4790275038F1E89B2D2DD862DB5FCC0B (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, RuntimeObject** ___buf0, String_t* ___callingMethodIdentifier1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral148824F010ADAC4C3C4CE066B0DFDB5C2654FB2B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral170AD99AD2A9FB6605C713D5E03E562C7D968B69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral35B5ADC96410AC9E0FBD60CD4B98AF30C7FF77A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral536E5B84A146D6EAEB5D74C24E27D67FD4C0B1E7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54456F7D5F661596CBB77379CB87A2F212C937AB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA517A4F85AAA7EBA705BDB743CD5CDA3F32FB5B2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB2F9235F4F063A8609A1E74346AC3F275A7303EE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB77E31D2A4A06B38E1B7C8FC29C34D00063605FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB998ED74BBE643EFB1178023AB66097D25232774);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDCC2A0E9BB0E18185E2813F45A0FDBAAFE5F6277);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE6BB1D1C222056044DECBA8E28B892E7C7412208);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE4E8D2F674A9B8C61B994B4EB2D46018E971583);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 V_9;
	memset((&V_9), 0, sizeof(V_9));
	bool V_10 = false;
	bool V_11 = false;
	{
		// if (!string.IsNullOrEmpty(GameStoreID))
		String_t* L_0;
		L_0 = StdCommonParams_get_GameStoreID_m84117F13E7CB919145EC3EF0480411695B7B7B69_inline(__this, NULL);
		bool L_1;
		L_1 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		// buf.PushString(GameStoreID, "gameStoreID");
		RuntimeObject** L_3 = ___buf0;
		RuntimeObject* L_4 = *((RuntimeObject**)L_3);
		String_t* L_5;
		L_5 = StdCommonParams_get_GameStoreID_m84117F13E7CB919145EC3EF0480411695B7B7B69_inline(__this, NULL);
		NullCheck(L_4);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(5 /* System.Void Unity.Services.Analytics.Internal.IBuffer::PushString(System.String,System.String) */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_4, L_5, _stringLiteralDCC2A0E9BB0E18185E2813F45A0FDBAAFE5F6277);
	}

IL_0028:
	{
		// if (!string.IsNullOrEmpty(GameBundleID))
		String_t* L_6;
		L_6 = StdCommonParams_get_GameBundleID_m614C916F3CBA18D60161DDFD84B4C9D5C2E99531_inline(__this, NULL);
		bool L_7;
		L_7 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_6, NULL);
		V_1 = (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_004f;
		}
	}
	{
		// buf.PushString(GameBundleID, "gameBundleID");
		RuntimeObject** L_9 = ___buf0;
		RuntimeObject* L_10 = *((RuntimeObject**)L_9);
		String_t* L_11;
		L_11 = StdCommonParams_get_GameBundleID_m614C916F3CBA18D60161DDFD84B4C9D5C2E99531_inline(__this, NULL);
		NullCheck(L_10);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(5 /* System.Void Unity.Services.Analytics.Internal.IBuffer::PushString(System.String,System.String) */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_10, L_11, _stringLiteral148824F010ADAC4C3C4CE066B0DFDB5C2654FB2B);
	}

IL_004f:
	{
		// if (!string.IsNullOrEmpty(Platform))
		String_t* L_12;
		L_12 = StdCommonParams_get_Platform_m997C2F5D078131853762DCFBA238288F8EFA191E_inline(__this, NULL);
		bool L_13;
		L_13 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_12, NULL);
		V_2 = (bool)((((int32_t)L_13) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_2;
		if (!L_14)
		{
			goto IL_0076;
		}
	}
	{
		// buf.PushString(Platform, "platform");
		RuntimeObject** L_15 = ___buf0;
		RuntimeObject* L_16 = *((RuntimeObject**)L_15);
		String_t* L_17;
		L_17 = StdCommonParams_get_Platform_m997C2F5D078131853762DCFBA238288F8EFA191E_inline(__this, NULL);
		NullCheck(L_16);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(5 /* System.Void Unity.Services.Analytics.Internal.IBuffer::PushString(System.String,System.String) */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_16, L_17, _stringLiteralB2F9235F4F063A8609A1E74346AC3F275A7303EE);
	}

IL_0076:
	{
		// if (!string.IsNullOrEmpty(Idfv))
		String_t* L_18;
		L_18 = StdCommonParams_get_Idfv_m0CB0676EB45E77DE51316B204FFAE5437CEFA6DD_inline(__this, NULL);
		bool L_19;
		L_19 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_18, NULL);
		V_3 = (bool)((((int32_t)L_19) == ((int32_t)0))? 1 : 0);
		bool L_20 = V_3;
		if (!L_20)
		{
			goto IL_009d;
		}
	}
	{
		// buf.PushString(Idfv, "idfv");
		RuntimeObject** L_21 = ___buf0;
		RuntimeObject* L_22 = *((RuntimeObject**)L_21);
		String_t* L_23;
		L_23 = StdCommonParams_get_Idfv_m0CB0676EB45E77DE51316B204FFAE5437CEFA6DD_inline(__this, NULL);
		NullCheck(L_22);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(5 /* System.Void Unity.Services.Analytics.Internal.IBuffer::PushString(System.String,System.String) */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_22, L_23, _stringLiteral170AD99AD2A9FB6605C713D5E03E562C7D968B69);
	}

IL_009d:
	{
		// if (!string.IsNullOrEmpty(UasUserID))
		String_t* L_24;
		L_24 = StdCommonParams_get_UasUserID_m6A4DE2B299022D7DBCEA6EE055C717E59BE2B32C_inline(__this, NULL);
		bool L_25;
		L_25 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_24, NULL);
		V_4 = (bool)((((int32_t)L_25) == ((int32_t)0))? 1 : 0);
		bool L_26 = V_4;
		if (!L_26)
		{
			goto IL_00c6;
		}
	}
	{
		// buf.PushString(UasUserID, "uasUserID");
		RuntimeObject** L_27 = ___buf0;
		RuntimeObject* L_28 = *((RuntimeObject**)L_27);
		String_t* L_29;
		L_29 = StdCommonParams_get_UasUserID_m6A4DE2B299022D7DBCEA6EE055C717E59BE2B32C_inline(__this, NULL);
		NullCheck(L_28);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(5 /* System.Void Unity.Services.Analytics.Internal.IBuffer::PushString(System.String,System.String) */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_28, L_29, _stringLiteral54456F7D5F661596CBB77379CB87A2F212C937AB);
	}

IL_00c6:
	{
		// if (!string.IsNullOrEmpty(BuildGuuid))
		String_t* L_30;
		L_30 = StdCommonParams_get_BuildGuuid_m706EB59064FA0D40D1C244514B2EA2995AE5706D_inline(__this, NULL);
		bool L_31;
		L_31 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_30, NULL);
		V_5 = (bool)((((int32_t)L_31) == ((int32_t)0))? 1 : 0);
		bool L_32 = V_5;
		if (!L_32)
		{
			goto IL_00ef;
		}
	}
	{
		// buf.PushString(BuildGuuid, "buildGUUID");
		RuntimeObject** L_33 = ___buf0;
		RuntimeObject* L_34 = *((RuntimeObject**)L_33);
		String_t* L_35;
		L_35 = StdCommonParams_get_BuildGuuid_m706EB59064FA0D40D1C244514B2EA2995AE5706D_inline(__this, NULL);
		NullCheck(L_34);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(5 /* System.Void Unity.Services.Analytics.Internal.IBuffer::PushString(System.String,System.String) */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_34, L_35, _stringLiteralE6BB1D1C222056044DECBA8E28B892E7C7412208);
	}

IL_00ef:
	{
		// if (!string.IsNullOrEmpty(ClientVersion))
		String_t* L_36;
		L_36 = StdCommonParams_get_ClientVersion_mA3D1574F4D14E5355C23D39AA130AB106960491D_inline(__this, NULL);
		bool L_37;
		L_37 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_36, NULL);
		V_6 = (bool)((((int32_t)L_37) == ((int32_t)0))? 1 : 0);
		bool L_38 = V_6;
		if (!L_38)
		{
			goto IL_0118;
		}
	}
	{
		// buf.PushString(ClientVersion, "clientVersion");
		RuntimeObject** L_39 = ___buf0;
		RuntimeObject* L_40 = *((RuntimeObject**)L_39);
		String_t* L_41;
		L_41 = StdCommonParams_get_ClientVersion_mA3D1574F4D14E5355C23D39AA130AB106960491D_inline(__this, NULL);
		NullCheck(L_40);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(5 /* System.Void Unity.Services.Analytics.Internal.IBuffer::PushString(System.String,System.String) */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_40, L_41, _stringLiteralB998ED74BBE643EFB1178023AB66097D25232774);
	}

IL_0118:
	{
		// if (!string.IsNullOrEmpty(UserCountry))
		String_t* L_42;
		L_42 = StdCommonParams_get_UserCountry_mDDDF84AB7FC6D62ECBB642C7C7814D3143DAF0F9_inline(__this, NULL);
		bool L_43;
		L_43 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_42, NULL);
		V_7 = (bool)((((int32_t)L_43) == ((int32_t)0))? 1 : 0);
		bool L_44 = V_7;
		if (!L_44)
		{
			goto IL_0141;
		}
	}
	{
		// buf.PushString(UserCountry, "userCountry");
		RuntimeObject** L_45 = ___buf0;
		RuntimeObject* L_46 = *((RuntimeObject**)L_45);
		String_t* L_47;
		L_47 = StdCommonParams_get_UserCountry_mDDDF84AB7FC6D62ECBB642C7C7814D3143DAF0F9_inline(__this, NULL);
		NullCheck(L_46);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(5 /* System.Void Unity.Services.Analytics.Internal.IBuffer::PushString(System.String,System.String) */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_46, L_47, _stringLiteral536E5B84A146D6EAEB5D74C24E27D67FD4C0B1E7);
	}

IL_0141:
	{
		// if (DeviceVolume != null)
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_48;
		L_48 = StdCommonParams_get_DeviceVolume_mD4CB9275283492DA050B8BDA949E1E38C35EB76C_inline(__this, NULL);
		V_9 = L_48;
		bool L_49;
		L_49 = Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_inline((&V_9), Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var);
		V_8 = L_49;
		bool L_50 = V_8;
		if (!L_50)
		{
			goto IL_0174;
		}
	}
	{
		// buf.PushDouble(DeviceVolume.Value, "deviceVolume"); // Schema: Optional
		RuntimeObject** L_51 = ___buf0;
		RuntimeObject* L_52 = *((RuntimeObject**)L_51);
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_53;
		L_53 = StdCommonParams_get_DeviceVolume_mD4CB9275283492DA050B8BDA949E1E38C35EB76C_inline(__this, NULL);
		V_9 = L_53;
		double L_54;
		L_54 = Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1((&V_9), Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1_RuntimeMethod_var);
		NullCheck(L_52);
		InterfaceActionInvoker2< double, String_t* >::Invoke(4 /* System.Void Unity.Services.Analytics.Internal.IBuffer::PushDouble(System.Double,System.String) */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_52, L_54, _stringLiteral35B5ADC96410AC9E0FBD60CD4B98AF30C7FF77A1);
	}

IL_0174:
	{
		// if (BatteryLoad != null)
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_55;
		L_55 = StdCommonParams_get_BatteryLoad_mE5C6A63115E33A0FB67BA3BA7FF4CD98021A584A_inline(__this, NULL);
		V_9 = L_55;
		bool L_56;
		L_56 = Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_inline((&V_9), Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var);
		V_10 = L_56;
		bool L_57 = V_10;
		if (!L_57)
		{
			goto IL_01a7;
		}
	}
	{
		// buf.PushDouble(BatteryLoad.Value, "batteryLoad"); // Schema: Optional
		RuntimeObject** L_58 = ___buf0;
		RuntimeObject* L_59 = *((RuntimeObject**)L_58);
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_60;
		L_60 = StdCommonParams_get_BatteryLoad_mE5C6A63115E33A0FB67BA3BA7FF4CD98021A584A_inline(__this, NULL);
		V_9 = L_60;
		double L_61;
		L_61 = Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1((&V_9), Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1_RuntimeMethod_var);
		NullCheck(L_59);
		InterfaceActionInvoker2< double, String_t* >::Invoke(4 /* System.Void Unity.Services.Analytics.Internal.IBuffer::PushDouble(System.Double,System.String) */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_59, L_61, _stringLiteralFE4E8D2F674A9B8C61B994B4EB2D46018E971583);
	}

IL_01a7:
	{
		// if (!string.IsNullOrEmpty(ProjectID))
		String_t* L_62;
		L_62 = StdCommonParams_get_ProjectID_m48D1D967587EF2BB877AB287B6FD03531D3E3658_inline(__this, NULL);
		bool L_63;
		L_63 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_62, NULL);
		V_11 = (bool)((((int32_t)L_63) == ((int32_t)0))? 1 : 0);
		bool L_64 = V_11;
		if (!L_64)
		{
			goto IL_01d0;
		}
	}
	{
		// buf.PushString(ProjectID, "projectID");
		RuntimeObject** L_65 = ___buf0;
		RuntimeObject* L_66 = *((RuntimeObject**)L_65);
		String_t* L_67;
		L_67 = StdCommonParams_get_ProjectID_m48D1D967587EF2BB877AB287B6FD03531D3E3658_inline(__this, NULL);
		NullCheck(L_66);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(5 /* System.Void Unity.Services.Analytics.Internal.IBuffer::PushString(System.String,System.String) */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_66, L_67, _stringLiteralA517A4F85AAA7EBA705BDB743CD5CDA3F32FB5B2);
	}

IL_01d0:
	{
		// buf.PushString(callingMethodIdentifier, "sdkMethod");
		RuntimeObject** L_68 = ___buf0;
		RuntimeObject* L_69 = *((RuntimeObject**)L_68);
		String_t* L_70 = ___callingMethodIdentifier1;
		NullCheck(L_69);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(5 /* System.Void Unity.Services.Analytics.Internal.IBuffer::PushString(System.String,System.String) */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_69, L_70, _stringLiteralB77E31D2A4A06B38E1B7C8FC29C34D00063605FD);
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Data.StdCommonParams::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StdCommonParams__ctor_m973A163478DDB4C6DC21AF142FF5CF7E46D254CA (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Analytics.Data.DataGenerator::SetBuffer(Unity.Services.Analytics.Internal.IBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataGenerator_SetBuffer_m5FB97A0416B33E499DCE49028A3F0532FEADEC95 (DataGenerator_t25BC607B3B6D456EAA5DC9C3F600C4B560800183* __this, RuntimeObject* ___buffer0, const RuntimeMethod* method) 
{
	{
		// m_Buffer = buffer;
		RuntimeObject* L_0 = ___buffer0;
		__this->___m_Buffer_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Buffer_0), (void*)L_0);
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Data.DataGenerator::GameRunning(System.DateTime,Unity.Services.Analytics.Data.StdCommonParams,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataGenerator_GameRunning_mB0796E55CC005D533797AE69A0169216B8B57724 (DataGenerator_t25BC607B3B6D456EAA5DC9C3F600C4B560800183* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___datetime0, StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* ___commonParams1, String_t* ___callingMethodIdentifier2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3AAADB400CC4093A2B8D65DADF92560E65DFF664);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Buffer.PushStartEvent("gameRunning", datetime, 1, true);
		RuntimeObject* L_0 = __this->___m_Buffer_0;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1 = ___datetime0;
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1((&L_2), ((int64_t)1), /*hidden argument*/Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_RuntimeMethod_var);
		NullCheck(L_0);
		InterfaceActionInvoker4< String_t*, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D, Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17, bool >::Invoke(2 /* System.Void Unity.Services.Analytics.Internal.IBuffer::PushStartEvent(System.String,System.DateTime,System.Nullable`1<System.Int64>,System.Boolean) */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_0, _stringLiteral3AAADB400CC4093A2B8D65DADF92560E65DFF664, L_1, L_2, (bool)1);
		// commonParams.SerializeCommonEventParams(ref m_Buffer, callingMethodIdentifier);
		StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* L_3 = ___commonParams1;
		RuntimeObject** L_4 = (&__this->___m_Buffer_0);
		String_t* L_5 = ___callingMethodIdentifier2;
		NullCheck(L_3);
		StdCommonParams_SerializeCommonEventParams_m174FE65D4790275038F1E89B2D2DD862DB5FCC0B(L_3, L_4, L_5, NULL);
		// m_Buffer.PushEndEvent();
		RuntimeObject* L_6 = __this->___m_Buffer_0;
		NullCheck(L_6);
		InterfaceActionInvoker0::Invoke(3 /* System.Void Unity.Services.Analytics.Internal.IBuffer::PushEndEvent() */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_6);
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Data.DataGenerator::GameEnded(System.DateTime,Unity.Services.Analytics.Data.StdCommonParams,System.String,Unity.Services.Analytics.Data.DataGenerator/SessionEndState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataGenerator_GameEnded_m76B75B3DDAD676D4C58E63D291CDBB7E7985641E (DataGenerator_t25BC607B3B6D456EAA5DC9C3F600C4B560800183* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___datetime0, StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* ___commonParams1, String_t* ___callingMethodIdentifier2, int32_t ___quitState3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SessionEndState_t2CCED7EB4774D5B9C8E77DD6365BD147EC8C9BA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E862A707621E680436D3EE5A45C11B8B8019F39);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral76BABA91F33047678737B893F72821F1FE7CEFA4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Buffer.PushStartEvent("gameEnded", datetime, 1, true);
		RuntimeObject* L_0 = __this->___m_Buffer_0;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1 = ___datetime0;
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1((&L_2), ((int64_t)1), /*hidden argument*/Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_RuntimeMethod_var);
		NullCheck(L_0);
		InterfaceActionInvoker4< String_t*, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D, Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17, bool >::Invoke(2 /* System.Void Unity.Services.Analytics.Internal.IBuffer::PushStartEvent(System.String,System.DateTime,System.Nullable`1<System.Int64>,System.Boolean) */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_0, _stringLiteral1E862A707621E680436D3EE5A45C11B8B8019F39, L_1, L_2, (bool)1);
		// commonParams.SerializeCommonEventParams(ref m_Buffer, callingMethodIdentifier);
		StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* L_3 = ___commonParams1;
		RuntimeObject** L_4 = (&__this->___m_Buffer_0);
		String_t* L_5 = ___callingMethodIdentifier2;
		NullCheck(L_3);
		StdCommonParams_SerializeCommonEventParams_m174FE65D4790275038F1E89B2D2DD862DB5FCC0B(L_3, L_4, L_5, NULL);
		// m_Buffer.PushString(quitState.ToString(), "sessionEndState"); // Schema: Required
		RuntimeObject* L_6 = __this->___m_Buffer_0;
		Il2CppFakeBox<int32_t> L_7(SessionEndState_t2CCED7EB4774D5B9C8E77DD6365BD147EC8C9BA1_il2cpp_TypeInfo_var, (&___quitState3));
		String_t* L_8;
		L_8 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_7), NULL);
		NullCheck(L_6);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(5 /* System.Void Unity.Services.Analytics.Internal.IBuffer::PushString(System.String,System.String) */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_6, L_8, _stringLiteral76BABA91F33047678737B893F72821F1FE7CEFA4);
		// m_Buffer.PushEndEvent();
		RuntimeObject* L_9 = __this->___m_Buffer_0;
		NullCheck(L_9);
		InterfaceActionInvoker0::Invoke(3 /* System.Void Unity.Services.Analytics.Internal.IBuffer::PushEndEvent() */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_9);
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Data.DataGenerator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataGenerator__ctor_m659FA5FD00306B47B1A9D7461343C53EBCC0E85C (DataGenerator_t25BC607B3B6D456EAA5DC9C3F600C4B560800183* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Analytics.Internal.AnalyticsUserIdServiceComponent::.ctor(Unity.Services.Analytics.IAnalyticsService)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsUserIdServiceComponent__ctor_mC4D9557B2E49D4883E699F5F8034FE65740D334E (AnalyticsUserIdServiceComponent_t2A2B82EF9FBA795836189A3A0A3274A87D4E1B9B* __this, RuntimeObject* ___analyticsService0, const RuntimeMethod* method) 
{
	{
		// public AnalyticsUserIdServiceComponent(IAnalyticsService analyticsService)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// m_AnalyticsService = analyticsService;
		RuntimeObject* L_0 = ___analyticsService0;
		__this->___m_AnalyticsService_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_AnalyticsService_0), (void*)L_0);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Unity.Services.Analytics.Internal.AnalyticsForgetter::get_DeletionInProgress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnalyticsForgetter_get_DeletionInProgress_mA2E85FC9A479A7CC90486397F7FC4098BA01EA98 (AnalyticsForgetter_tA1B9D1F48FB306C80BE60C9858646BC1368948C0* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return m_DeletionStatus == DataDeletionStatus.DeletionInProgress; }
		int32_t L_0 = __this->___m_DeletionStatus_5;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		// get { return m_DeletionStatus == DataDeletionStatus.DeletionInProgress; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Unity.Services.Analytics.Internal.AnalyticsForgetter::.ctor(System.String,Unity.Services.Analytics.Internal.IPersistence,Unity.Services.Analytics.Internal.IWebRequestHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsForgetter__ctor_mB7EFEF4ADE978A9CAD976324BCC6BE797558DB0E (AnalyticsForgetter_tA1B9D1F48FB306C80BE60C9858646BC1368948C0* __this, String_t* ___collectUrl0, RuntimeObject* ___persistence1, RuntimeObject* ___webRequestHelper2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPersistence_t5D94C166A344C917BA55528232490C69B12CBED9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16FA815CB43FA0EEE13AD6B16952C4364F2D2E08);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal AnalyticsForgetter(string collectUrl, IPersistence persistence, IWebRequestHelper webRequestHelper)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// m_CollectUrl = collectUrl;
		String_t* L_0 = ___collectUrl0;
		__this->___m_CollectUrl_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CollectUrl_0), (void*)L_0);
		// m_Persistence = persistence;
		RuntimeObject* L_1 = ___persistence1;
		__this->___m_Persistence_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Persistence_1), (void*)L_1);
		// m_WebRequestHelper = webRequestHelper;
		RuntimeObject* L_2 = ___webRequestHelper2;
		__this->___m_WebRequestHelper_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_WebRequestHelper_2), (void*)L_2);
		// m_DeletionStatus = (DataDeletionStatus)persistence.LoadValue(k_ForgottenStatusKey);
		RuntimeObject* L_3 = ___persistence1;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker1< int32_t, String_t* >::Invoke(1 /* System.Int32 Unity.Services.Analytics.Internal.IPersistence::LoadValue(System.String) */, IPersistence_t5D94C166A344C917BA55528232490C69B12CBED9_il2cpp_TypeInfo_var, L_3, _stringLiteral16FA815CB43FA0EEE13AD6B16952C4364F2D2E08);
		__this->___m_DeletionStatus_5 = L_4;
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.AnalyticsForgetter::SetForgettingStatus(Unity.Services.Analytics.Internal.AnalyticsForgetter/DataDeletionStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsForgetter_SetForgettingStatus_m92EBCCB1DCCE80F80D6C0051B95C638A521B0111 (AnalyticsForgetter_tA1B9D1F48FB306C80BE60C9858646BC1368948C0* __this, int32_t ___state0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPersistence_t5D94C166A344C917BA55528232490C69B12CBED9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16FA815CB43FA0EEE13AD6B16952C4364F2D2E08);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_DeletionStatus = state;
		int32_t L_0 = ___state0;
		__this->___m_DeletionStatus_5 = L_0;
		// m_Persistence.SaveValue(k_ForgottenStatusKey, (int)state);
		RuntimeObject* L_1 = __this->___m_Persistence_1;
		int32_t L_2 = ___state0;
		NullCheck(L_1);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(0 /* System.Void Unity.Services.Analytics.Internal.IPersistence::SaveValue(System.String,System.Int32) */, IPersistence_t5D94C166A344C917BA55528232490C69B12CBED9_il2cpp_TypeInfo_var, L_1, _stringLiteral16FA815CB43FA0EEE13AD6B16952C4364F2D2E08, L_2);
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.AnalyticsForgetter::AttemptToForget(System.String,System.String,System.String,System.String,System.String,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsForgetter_AttemptToForget_mC21B8E3EEBBD5F0B16A087EE44DA79C1467CA687 (AnalyticsForgetter_tA1B9D1F48FB306C80BE60C9858646BC1368948C0* __this, String_t* ___userId0, String_t* ___installationId1, String_t* ___playerId2, String_t* ___timestamp3, String_t* ___callingMethod4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___successfulUploadCallback5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tBB5A52E9AEFBC4F0C8D94D39CAD16BCB6B8B5929_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnalyticsForgetter_UploadComplete_mA94023B0D4A918B179EBDFA97BFBD2F9221EE29D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWebRequestHelper_tCCD82817C71896176475384430BB0D9BEF732858_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWebRequest_t8FAADA0ED58F096C28998EB5AFE9E79FD05F4DFE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B6D138D8454083A41D1C936D8DFA8099F161DA8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D9C903F2CFE60C87D084257D816121914ED5CD7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2309FB9CC1600C4642826BA92EB5C43EA0970693);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral276C84DEB214873D13A4AF836CA95F4BADB36FE8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A5B4A683A4FF348D7FBA286A40B146642302E8C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46CC0A1237AF8D2AD7B8E32EE022F0AFF27543D2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral577425CD87D93CE29BD73B7A610A2AA16814173F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral640EF4B5A6EEA63697869DA2BA9DFCA36FBB1AF3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral782091A124984DB669E8C38AF8E8C05E76873F5A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB91505A7C57926DDC126B93151A049BC213BEC78);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE46475A038CE8463CC88A3C7DB6950E45EC6B178);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	Guid_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t G_B3_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_2 = NULL;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B2_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B2_2 = NULL;
	String_t* G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_3 = NULL;
	{
		// if (m_Request == null)
		RuntimeObject* L_0 = __this->___m_Request_6;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0145;
		}
	}
	{
		// SetForgettingStatus(DataDeletionStatus.DeletionInProgress);
		AnalyticsForgetter_SetForgettingStatus_m92EBCCB1DCCE80F80D6C0051B95C638A521B0111(__this, 1, NULL);
		// m_Callback = successfulUploadCallback;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = ___successfulUploadCallback5;
		__this->___m_Callback_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Callback_4), (void*)L_2);
		// var eventJson =
		//     "{\"eventList\":[{" +
		//     "\"eventName\":\"ddnaForgetMe\"," +
		//     "\"userID\":\"" + userId + "\"," +
		//     "\"eventUUID\":\"" + Guid.NewGuid().ToString() + "\"," +
		//     "\"eventTimestamp\":\"" + timestamp + "\"," +
		//     "\"eventVersion\":1," +
		//     "\"unityInstallationID\":\"" + installationId + "\"," +
		//     (String.IsNullOrEmpty(playerId) ? "" : "\"unityPlayerID\":\"" + playerId + "\",") +
		//     "\"eventParams\":{" +
		//     "\"clientVersion\":\"" + Application.version + "\"," +
		//     "\"sdkMethod\":\"" + callingMethod + "\"" +
		//     "}}]}";
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)15));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral577425CD87D93CE29BD73B7A610A2AA16814173F);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral577425CD87D93CE29BD73B7A610A2AA16814173F);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		String_t* L_6 = ___userId0;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_5;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteralB91505A7C57926DDC126B93151A049BC213BEC78);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralB91505A7C57926DDC126B93151A049BC213BEC78);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
		Guid_t L_9;
		L_9 = Guid_NewGuid_m1827D92D71326C3F3C263F057F6E90F907617903(NULL);
		V_2 = L_9;
		String_t* L_10;
		L_10 = Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C((&V_2), NULL);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_10);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_10);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_8;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral782091A124984DB669E8C38AF8E8C05E76873F5A);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral782091A124984DB669E8C38AF8E8C05E76873F5A);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_11;
		String_t* L_13 = ___timestamp3;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_13);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_13);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_12;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteral640EF4B5A6EEA63697869DA2BA9DFCA36FBB1AF3);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral640EF4B5A6EEA63697869DA2BA9DFCA36FBB1AF3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_14;
		String_t* L_16 = ___installationId1;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)L_16);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = L_15;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, _stringLiteral0B6D138D8454083A41D1C936D8DFA8099F161DA8);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral0B6D138D8454083A41D1C936D8DFA8099F161DA8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = L_17;
		String_t* L_19 = ___playerId2;
		bool L_20;
		L_20 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_19, NULL);
		G_B2_0 = ((int32_t)9);
		G_B2_1 = L_18;
		G_B2_2 = L_18;
		if (L_20)
		{
			G_B3_0 = ((int32_t)9);
			G_B3_1 = L_18;
			G_B3_2 = L_18;
			goto IL_0091;
		}
	}
	{
		String_t* L_21 = ___playerId2;
		String_t* L_22;
		L_22 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral46CC0A1237AF8D2AD7B8E32EE022F0AFF27543D2, L_21, _stringLiteral0B6D138D8454083A41D1C936D8DFA8099F161DA8, NULL);
		G_B4_0 = L_22;
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		G_B4_3 = G_B2_2;
		goto IL_0096;
	}

IL_0091:
	{
		G_B4_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
		G_B4_3 = G_B3_2;
	}

IL_0096:
	{
		NullCheck(G_B4_2);
		ArrayElementTypeCheck (G_B4_2, G_B4_0);
		(G_B4_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B4_1), (String_t*)G_B4_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = G_B4_3;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, _stringLiteral276C84DEB214873D13A4AF836CA95F4BADB36FE8);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteral276C84DEB214873D13A4AF836CA95F4BADB36FE8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = L_23;
		String_t* L_25;
		L_25 = Application_get_version_mD6AC9813ABCAD4D2A1F764F99E26068CA5B830F2(NULL);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_25);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (String_t*)L_25);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = L_24;
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, _stringLiteral1D9C903F2CFE60C87D084257D816121914ED5CD7);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (String_t*)_stringLiteral1D9C903F2CFE60C87D084257D816121914ED5CD7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_27 = L_26;
		String_t* L_28 = ___callingMethod4;
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_28);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (String_t*)L_28);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_29 = L_27;
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, _stringLiteralE46475A038CE8463CC88A3C7DB6950E45EC6B178);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (String_t*)_stringLiteralE46475A038CE8463CC88A3C7DB6950E45EC6B178);
		String_t* L_30;
		L_30 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_29, NULL);
		V_1 = L_30;
		// m_Event = Encoding.UTF8.GetBytes(eventJson);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_31;
		L_31 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
		String_t* L_32 = V_1;
		NullCheck(L_31);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33;
		L_33 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_31, L_32);
		__this->___m_Event_3 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Event_3), (void*)L_33);
		// m_Request = m_WebRequestHelper.CreateWebRequest(m_CollectUrl, UnityWebRequest.kHttpVerbPOST, m_Event);
		RuntimeObject* L_34 = __this->___m_WebRequestHelper_2;
		String_t* L_35 = __this->___m_CollectUrl_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = __this->___m_Event_3;
		NullCheck(L_34);
		RuntimeObject* L_37;
		L_37 = InterfaceFuncInvoker3< RuntimeObject*, String_t*, String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(0 /* Unity.Services.Analytics.Internal.IWebRequest Unity.Services.Analytics.Internal.IWebRequestHelper::CreateWebRequest(System.String,System.String,System.Byte[]) */, IWebRequestHelper_tCCD82817C71896176475384430BB0D9BEF732858_il2cpp_TypeInfo_var, L_34, L_35, _stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D, L_36);
		__this->___m_Request_6 = L_37;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Request_6), (void*)L_37);
		// m_Request.SetRequestHeader(Dispatcher.k_PiplExportHeaderKey, Dispatcher.k_HeaderTrueValue);
		RuntimeObject* L_38 = __this->___m_Request_6;
		NullCheck(L_38);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(1 /* System.Void Unity.Services.Analytics.Internal.IWebRequest::SetRequestHeader(System.String,System.String) */, IWebRequest_t8FAADA0ED58F096C28998EB5AFE9E79FD05F4DFE_il2cpp_TypeInfo_var, L_38, _stringLiteral2309FB9CC1600C4642826BA92EB5C43EA0970693, _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		// m_Request.SetRequestHeader(Dispatcher.k_PiplConsentHeaderKey, Dispatcher.k_HeaderTrueValue);
		RuntimeObject* L_39 = __this->___m_Request_6;
		NullCheck(L_39);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(1 /* System.Void Unity.Services.Analytics.Internal.IWebRequest::SetRequestHeader(System.String,System.String) */, IWebRequest_t8FAADA0ED58F096C28998EB5AFE9E79FD05F4DFE_il2cpp_TypeInfo_var, L_39, _stringLiteral2A5B4A683A4FF348D7FBA286A40B146642302E8C, _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		// m_WebRequestHelper.SendWebRequest(m_Request, UploadComplete);
		RuntimeObject* L_40 = __this->___m_WebRequestHelper_2;
		RuntimeObject* L_41 = __this->___m_Request_6;
		Action_1_tBB5A52E9AEFBC4F0C8D94D39CAD16BCB6B8B5929* L_42 = (Action_1_tBB5A52E9AEFBC4F0C8D94D39CAD16BCB6B8B5929*)il2cpp_codegen_object_new(Action_1_tBB5A52E9AEFBC4F0C8D94D39CAD16BCB6B8B5929_il2cpp_TypeInfo_var);
		NullCheck(L_42);
		Action_1__ctor_mC0FC430617EB8A9B54D1632C5BD95979ED5C2C2A(L_42, __this, (intptr_t)((void*)AnalyticsForgetter_UploadComplete_mA94023B0D4A918B179EBDFA97BFBD2F9221EE29D_RuntimeMethod_var), NULL);
		NullCheck(L_40);
		InterfaceActionInvoker2< RuntimeObject*, Action_1_tBB5A52E9AEFBC4F0C8D94D39CAD16BCB6B8B5929* >::Invoke(1 /* System.Void Unity.Services.Analytics.Internal.IWebRequestHelper::SendWebRequest(Unity.Services.Analytics.Internal.IWebRequest,System.Action`1<System.Int64>) */, IWebRequestHelper_tCCD82817C71896176475384430BB0D9BEF732858_il2cpp_TypeInfo_var, L_40, L_41, L_42);
	}

IL_0145:
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.AnalyticsForgetter::UploadComplete(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsForgetter_UploadComplete_mA94023B0D4A918B179EBDFA97BFBD2F9221EE29D (AnalyticsForgetter_tA1B9D1F48FB306C80BE60C9858646BC1368948C0* __this, int64_t ___code0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWebRequest_t8FAADA0ED58F096C28998EB5AFE9E79FD05F4DFE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		// bool success = code >= 200 && code <= 299;
		int64_t L_0 = ___code0;
		if ((((int64_t)L_0) < ((int64_t)((int64_t)((int32_t)200)))))
		{
			goto IL_0018;
		}
	}
	{
		int64_t L_1 = ___code0;
		G_B3_0 = ((((int32_t)((((int64_t)L_1) > ((int64_t)((int64_t)((int32_t)299))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = 0;
	}

IL_0019:
	{
		V_0 = (bool)G_B3_0;
		// if (!m_Request.IsNetworkError && success)
		RuntimeObject* L_2 = __this->___m_Request_6;
		NullCheck(L_2);
		bool L_3;
		L_3 = InterfaceFuncInvoker0< bool >::Invoke(2 /* System.Boolean Unity.Services.Analytics.Internal.IWebRequest::get_IsNetworkError() */, IWebRequest_t8FAADA0ED58F096C28998EB5AFE9E79FD05F4DFE_il2cpp_TypeInfo_var, L_2);
		bool L_4 = V_0;
		V_1 = (bool)((int32_t)(((((int32_t)L_3) == ((int32_t)0))? 1 : 0)&(int32_t)L_4));
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0044;
		}
	}
	{
		// SetForgettingStatus(DataDeletionStatus.SuccessfullyDeleted);
		AnalyticsForgetter_SetForgettingStatus_m92EBCCB1DCCE80F80D6C0051B95C638A521B0111(__this, 2, NULL);
		// m_Callback();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = __this->___m_Callback_4;
		NullCheck(L_6);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_6, NULL);
	}

IL_0044:
	{
		// m_Request.Dispose();
		RuntimeObject* L_7 = __this->___m_Request_6;
		NullCheck(L_7);
		InterfaceActionInvoker0::Invoke(3 /* System.Void Unity.Services.Analytics.Internal.IWebRequest::Dispose() */, IWebRequest_t8FAADA0ED58F096C28998EB5AFE9E79FD05F4DFE_il2cpp_TypeInfo_var, L_7);
		// m_Request = null;
		__this->___m_Request_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Request_6), (void*)(RuntimeObject*)NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Unity.Services.Analytics.Internal.BufferSystemCalls::GenerateGuid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BufferSystemCalls_GenerateGuid_m61F3E2FF777BFA46961A04C2ADED85F198272DED (BufferSystemCalls_t30CA07BE3DD2F29E9F7036ED838F0C92A50480F1* __this, const RuntimeMethod* method) 
{
	Guid_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// return Guid.NewGuid().ToString();
		Guid_t L_0;
		L_0 = Guid_NewGuid_m1827D92D71326C3F3C263F057F6E90F907617903(NULL);
		V_0 = L_0;
		String_t* L_1;
		L_1 = Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C((&V_0), NULL);
		V_1 = L_1;
		goto IL_0017;
	}

IL_0017:
	{
		// }
		String_t* L_2 = V_1;
		return L_2;
	}
}
// System.Void Unity.Services.Analytics.Internal.BufferSystemCalls::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferSystemCalls__ctor_m11A81CCB33E4BA6C679E191AB344CC3277C57B8C (BufferSystemCalls_t30CA07BE3DD2F29E9F7036ED838F0C92A50480F1* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 Unity.Services.Analytics.Internal.BufferX::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BufferX_get_Length_mAC86149425B8A65EBF678D67A191EBCD975BCC6C (BufferX_t61043C3179F78166341D64689A662C738496055C* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// public int Length { get { return (int)m_Buffer.Length; } }
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_0 = __this->___m_Buffer_28;
		NullCheck(L_0);
		int64_t L_1;
		L_1 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Length() */, L_0);
		V_0 = ((int32_t)L_1);
		goto IL_0010;
	}

IL_0010:
	{
		// public int Length { get { return (int)m_Buffer.Length; } }
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Void Unity.Services.Analytics.Internal.BufferX::.ctor(Unity.Services.Analytics.Internal.IBufferSystemCalls,Unity.Services.Analytics.Internal.IDiskCache)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferX__ctor_mBBE8167311FE2989DC8174E1DFB53EB59276540C (BufferX_t61043C3179F78166341D64689A662C738496055C* __this, RuntimeObject* ___eventIdGenerator0, RuntimeObject* ___diskCache1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BufferX__ctor_mBBE8167311FE2989DC8174E1DFB53EB59276540C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B6D138D8454083A41D1C936D8DFA8099F161DA8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FCC06A6BCFD070BA5599CB641AC176D77B980AB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46CC0A1237AF8D2AD7B8E32EE022F0AFF27543D2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51026120A929AEFCA7209B235ACE529BEC6FD7B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5119119D395301AF26F5E33DACA5C4C27048BFA4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5CDEC3D17C0672B2895D89FD7D65350996F6895B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6FB7C2CCAED8A0EBB4E9AB8515D8155C6A95D26B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7646BCA86620BEB0AC49BAFC74ADE2D236A06D5F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral782091A124984DB669E8C38AF8E8C05E76873F5A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral841EFD6597128A8FD0024BC87FD07F020CBAA1E2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93998027822B92FA84F9F1CC56BCEA2D9344D1BD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA333953DEB7B3F631AE4FEB93E9C3AD7F349F8C0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB89D9E7580D0D17D5EE1189160034601495823D1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB91505A7C57926DDC126B93151A049BC213BEC78);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC60816ED1CF3D79541144B9E0235BB10D437850F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public BufferX(IBufferSystemCalls eventIdGenerator, IDiskCache diskCache)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// m_Buffer = new MemoryStream((int)k_UploadBatchMaximumSizeInBytes);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_0 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		MemoryStream__ctor_m9E93692A2BB0E34119603FF6A5D44F6A132052E8(L_0, ((int32_t)4194304), NULL);
		__this->___m_Buffer_28 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Buffer_28), (void*)L_0);
		// m_SpareBuffer = new MemoryStream((int)k_UploadBatchMaximumSizeInBytes);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_1 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		MemoryStream__ctor_m9E93692A2BB0E34119603FF6A5D44F6A132052E8(L_1, ((int32_t)4194304), NULL);
		__this->___m_SpareBuffer_27 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_SpareBuffer_27), (void*)L_1);
		// m_EventEnds = new List<int>();
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_2 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8(L_2, List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		__this->___m_EventEnds_26 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_EventEnds_26), (void*)L_2);
		// m_SystemCalls = eventIdGenerator;
		RuntimeObject* L_3 = ___eventIdGenerator0;
		__this->___m_SystemCalls_23 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_SystemCalls_23), (void*)L_3);
		// m_DiskCache = diskCache;
		RuntimeObject* L_4 = ___diskCache1;
		__this->___m_DiskCache_24 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_DiskCache_24), (void*)L_4);
		// k_WorkingBuffer = new byte[k_UploadBatchMaximumSizeInBytes];
		if ((int64_t)(((int64_t)((int32_t)4194304))) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), BufferX__ctor_mBBE8167311FE2989DC8174E1DFB53EB59276540C_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((intptr_t)((int64_t)((int32_t)4194304))));
		__this->___k_WorkingBuffer_0 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___k_WorkingBuffer_0), (void*)L_5);
		// k_WorkingCharacterBuffer = new char[k_UploadBatchMaximumSizeInBytes];
		if ((int64_t)(((int64_t)((int32_t)4194304))) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), BufferX__ctor_mBBE8167311FE2989DC8174E1DFB53EB59276540C_RuntimeMethod_var);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_6 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)((intptr_t)((int64_t)((int32_t)4194304))));
		__this->___k_WorkingCharacterBuffer_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___k_WorkingCharacterBuffer_1), (void*)L_6);
		// k_BufferHeader = Encoding.UTF8.GetBytes("{\"eventList\":[");
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_7;
		L_7 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
		NullCheck(L_7);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
		L_8 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_7, _stringLiteral5CDEC3D17C0672B2895D89FD7D65350996F6895B);
		__this->___k_BufferHeader_2 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___k_BufferHeader_2), (void*)L_8);
		// k_HeaderEventName = Encoding.UTF8.GetBytes("{\"eventName\":\"");
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_9;
		L_9 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
		NullCheck(L_9);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10;
		L_10 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_9, _stringLiteral6FB7C2CCAED8A0EBB4E9AB8515D8155C6A95D26B);
		__this->___k_HeaderEventName_3 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___k_HeaderEventName_3), (void*)L_10);
		// k_HeaderUserName = Encoding.UTF8.GetBytes("\",\"userID\":\"");
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_11;
		L_11 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
		NullCheck(L_11);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12;
		L_12 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_11, _stringLiteral841EFD6597128A8FD0024BC87FD07F020CBAA1E2);
		__this->___k_HeaderUserName_4 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___k_HeaderUserName_4), (void*)L_12);
		// k_HeaderSessionID = Encoding.UTF8.GetBytes("\",\"sessionID\":\"");
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_13;
		L_13 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
		NullCheck(L_13);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14;
		L_14 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_13, _stringLiteral0FCC06A6BCFD070BA5599CB641AC176D77B980AB);
		__this->___k_HeaderSessionID_5 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___k_HeaderSessionID_5), (void*)L_14);
		// k_HeaderEventUUID = Encoding.UTF8.GetBytes("\",\"eventUUID\":\"");
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_15;
		L_15 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
		NullCheck(L_15);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16;
		L_16 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_15, _stringLiteralB91505A7C57926DDC126B93151A049BC213BEC78);
		__this->___k_HeaderEventUUID_6 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___k_HeaderEventUUID_6), (void*)L_16);
		// k_HeaderTimestamp = Encoding.UTF8.GetBytes("\",\"eventTimestamp\":\"");
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_17;
		L_17 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
		NullCheck(L_17);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18;
		L_18 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_17, _stringLiteral782091A124984DB669E8C38AF8E8C05E76873F5A);
		__this->___k_HeaderTimestamp_7 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___k_HeaderTimestamp_7), (void*)L_18);
		// k_HeaderEventVersion = Encoding.UTF8.GetBytes("\"eventVersion\":");
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_19;
		L_19 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
		NullCheck(L_19);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20;
		L_20 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_19, _stringLiteral93998027822B92FA84F9F1CC56BCEA2D9344D1BD);
		__this->___k_HeaderEventVersion_8 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___k_HeaderEventVersion_8), (void*)L_20);
		// k_HeaderInstallationID = Encoding.UTF8.GetBytes("\"unityInstallationID\":\"");
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_21;
		L_21 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
		NullCheck(L_21);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22;
		L_22 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_21, _stringLiteral5119119D395301AF26F5E33DACA5C4C27048BFA4);
		__this->___k_HeaderInstallationID_9 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___k_HeaderInstallationID_9), (void*)L_22);
		// k_HeaderPlayerID = Encoding.UTF8.GetBytes("\"unityPlayerID\":\"");
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_23;
		L_23 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
		NullCheck(L_23);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24;
		L_24 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_23, _stringLiteral46CC0A1237AF8D2AD7B8E32EE022F0AFF27543D2);
		__this->___k_HeaderPlayerID_10 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___k_HeaderPlayerID_10), (void*)L_24);
		// k_HeaderOpenEventParams = Encoding.UTF8.GetBytes("\"eventParams\":{");
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_25;
		L_25 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
		NullCheck(L_25);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26;
		L_26 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_25, _stringLiteral51026120A929AEFCA7209B235ACE529BEC6FD7B1);
		__this->___k_HeaderOpenEventParams_11 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___k_HeaderOpenEventParams_11), (void*)L_26);
		// k_CloseEvent = Encoding.UTF8.GetBytes("}},");
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_27;
		L_27 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
		NullCheck(L_27);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28;
		L_28 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_27, _stringLiteralC60816ED1CF3D79541144B9E0235BB10D437850F);
		__this->___k_CloseEvent_12 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___k_CloseEvent_12), (void*)L_28);
		// k_Quote = Encoding.UTF8.GetBytes("\"")[0];
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_29;
		L_29 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
		NullCheck(L_29);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30;
		L_30 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_29, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		NullCheck(L_30);
		int32_t L_31 = 0;
		uint8_t L_32 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		__this->___k_Quote_13 = L_32;
		// k_QuoteColon = Encoding.UTF8.GetBytes("\":");
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_33;
		L_33 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
		NullCheck(L_33);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34;
		L_34 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_33, _stringLiteralA333953DEB7B3F631AE4FEB93E9C3AD7F349F8C0);
		__this->___k_QuoteColon_14 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___k_QuoteColon_14), (void*)L_34);
		// k_QuoteComma = Encoding.UTF8.GetBytes("\",");
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_35;
		L_35 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
		NullCheck(L_35);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36;
		L_36 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_35, _stringLiteral0B6D138D8454083A41D1C936D8DFA8099F161DA8);
		__this->___k_QuoteComma_15 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___k_QuoteComma_15), (void*)L_36);
		// k_Comma = Encoding.UTF8.GetBytes(",");
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_37;
		L_37 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
		NullCheck(L_37);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38;
		L_38 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_37, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		__this->___k_Comma_16 = L_38;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___k_Comma_16), (void*)L_38);
		// k_OpenBrace = Encoding.UTF8.GetBytes("{");
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_39;
		L_39 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
		NullCheck(L_39);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40;
		L_40 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_39, _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A);
		__this->___k_OpenBrace_17 = L_40;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___k_OpenBrace_17), (void*)L_40);
		// k_CloseBraceComma = Encoding.UTF8.GetBytes("},");
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_41;
		L_41 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
		NullCheck(L_41);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42;
		L_42 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_41, _stringLiteral7646BCA86620BEB0AC49BAFC74ADE2D236A06D5F);
		__this->___k_CloseBraceComma_18 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___k_CloseBraceComma_18), (void*)L_42);
		// k_OpenBracket = Encoding.UTF8.GetBytes("[");
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_43;
		L_43 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
		NullCheck(L_43);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_44;
		L_44 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_43, _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1);
		__this->___k_OpenBracket_19 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___k_OpenBracket_19), (void*)L_44);
		// k_CloseBracketComma = Encoding.UTF8.GetBytes("],");
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_45;
		L_45 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
		NullCheck(L_45);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46;
		L_46 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_45, _stringLiteralB89D9E7580D0D17D5EE1189160034601495823D1);
		__this->___k_CloseBracketComma_20 = L_46;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___k_CloseBracketComma_20), (void*)L_46);
		// k_True = Encoding.UTF8.GetBytes("true");
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_47;
		L_47 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
		NullCheck(L_47);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_48;
		L_48 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_47, _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		__this->___k_True_21 = L_48;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___k_True_21), (void*)L_48);
		// k_False = Encoding.UTF8.GetBytes("false");
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_49;
		L_49 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
		NullCheck(L_49);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_50;
		L_50 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_49, _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB);
		__this->___k_False_22 = L_50;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___k_False_22), (void*)L_50);
		// ClearBuffer();
		BufferX_ClearBuffer_mA8B0BBF389EA44EFE0CA85B2EF94A3B51153FEE8(__this, NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.BufferX::InjectIds(Unity.Services.Analytics.Internal.IBufferIds)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferX_InjectIds_m7ABB2F8A2226B6A8C1D36AA1BCC305C3B928717D (BufferX_t61043C3179F78166341D64689A662C738496055C* __this, RuntimeObject* ___ids0, const RuntimeMethod* method) 
{
	{
		// m_Ids = ids;
		RuntimeObject* L_0 = ___ids0;
		__this->___m_Ids_25 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Ids_25), (void*)L_0);
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.BufferX::WriteString(System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferX_WriteString_m6D00B4EC23DF37876EA6155C243345D9ABD997A6 (BufferX_t61043C3179F78166341D64689A662C738496055C* __this, String_t** ___value0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// int length = Encoding.UTF8.GetBytes(value, 0, Mathf.Min(value.Length, k_WorkingBuffer.Length), k_WorkingBuffer, 0);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0;
		L_0 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
		String_t** L_1 = ___value0;
		String_t* L_2 = *((String_t**)L_1);
		String_t** L_3 = ___value0;
		String_t* L_4 = *((String_t**)L_3);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_4, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___k_WorkingBuffer_0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Mathf_Min_mFEAD72DF4C4708B86BF464AB4F5F1468FAD8E784_inline(L_5, ((int32_t)(((RuntimeArray*)L_6)->max_length)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = __this->___k_WorkingBuffer_0;
		NullCheck(L_0);
		int32_t L_9;
		L_9 = VirtualFuncInvoker5< int32_t, String_t*, int32_t, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(18 /* System.Int32 System.Text.Encoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32) */, L_0, L_2, 0, L_7, L_8, 0);
		V_0 = L_9;
		// m_Buffer.Write(k_WorkingBuffer, 0, length);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_10 = __this->___m_Buffer_28;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->___k_WorkingBuffer_0;
		int32_t L_12 = V_0;
		NullCheck(L_10);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(34 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_10, L_11, 0, L_12);
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.BufferX::WriteByte(System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferX_WriteByte_m12C49B76B743F83835010F50B8BDD99680AD6B14 (BufferX_t61043C3179F78166341D64689A662C738496055C* __this, uint8_t* ___value0, const RuntimeMethod* method) 
{
	{
		// m_Buffer.WriteByte(value);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_0 = __this->___m_Buffer_28;
		uint8_t* L_1 = ___value0;
		int32_t L_2 = *((uint8_t*)L_1);
		NullCheck(L_0);
		VirtualActionInvoker1< uint8_t >::Invoke(36 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_0, (uint8_t)L_2);
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.BufferX::WriteBytes(System.Byte[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferX_WriteBytes_mAB875F9E3ABB56B16A350123FA3983F967C3BA79 (BufferX_t61043C3179F78166341D64689A662C738496055C* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** ___bytes0, const RuntimeMethod* method) 
{
	{
		// m_Buffer.Write(bytes, 0, bytes.Length);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_0 = __this->___m_Buffer_28;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_1 = ___bytes0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = *((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031**)L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_3 = ___bytes0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = *((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031**)L_3);
		NullCheck(L_4);
		NullCheck(L_0);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(34 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_0, L_2, 0, ((int32_t)(((RuntimeArray*)L_4)->max_length)));
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.BufferX::WriteName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferX_WriteName_m8833F39525C5ECD5DBBF33168F5FEFC630EA2A7D (BufferX_t61043C3179F78166341D64689A662C738496055C* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (name != null)
		String_t* L_0 = ___name0;
		V_0 = (bool)((!(((RuntimeObject*)(String_t*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002e;
		}
	}
	{
		// WriteByte(k_Quote);
		uint8_t* L_2 = (&__this->___k_Quote_13);
		BufferX_WriteByte_m12C49B76B743F83835010F50B8BDD99680AD6B14(__this, L_2, NULL);
		// WriteString(name);
		BufferX_WriteString_m6D00B4EC23DF37876EA6155C243345D9ABD997A6(__this, (&___name0), NULL);
		// WriteBytes(k_QuoteColon);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_3 = (&__this->___k_QuoteColon_14);
		BufferX_WriteBytes_mAB875F9E3ABB56B16A350123FA3983F967C3BA79(__this, L_3, NULL);
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.BufferX::PushStartEvent(System.String,System.DateTime,System.Nullable`1<System.Int64>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferX_PushStartEvent_mD4066506862999C763C973E3055FB11396BD2CF7 (BufferX_t61043C3179F78166341D64689A662C738496055C* __this, String_t* ___name0, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___datetime1, Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___eventVersion2, bool ___addPlayerIdsToEventBody3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBufferIds_t5556EC4467FE5D9FFE7719945D46679BB747155F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBufferSystemCalls_t9CA55BD1B80E3DB50B62AC3E1F54839D2A105C41_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_ToString_m04B6938F577DFC70D695A65C381A5ABCBC441248_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		// WriteBytes(k_HeaderEventName);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_0 = (&__this->___k_HeaderEventName_3);
		BufferX_WriteBytes_mAB875F9E3ABB56B16A350123FA3983F967C3BA79(__this, L_0, NULL);
		// WriteString(name);
		BufferX_WriteString_m6D00B4EC23DF37876EA6155C243345D9ABD997A6(__this, (&___name0), NULL);
		// WriteBytes(k_HeaderUserName);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_1 = (&__this->___k_HeaderUserName_4);
		BufferX_WriteBytes_mAB875F9E3ABB56B16A350123FA3983F967C3BA79(__this, L_1, NULL);
		// WriteString(m_Ids.UserId);
		RuntimeObject* L_2 = __this->___m_Ids_25;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Unity.Services.Analytics.Internal.IBufferIds::get_UserId() */, IBufferIds_t5556EC4467FE5D9FFE7719945D46679BB747155F_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		BufferX_WriteString_m6D00B4EC23DF37876EA6155C243345D9ABD997A6(__this, (&V_0), NULL);
		// WriteBytes(k_HeaderSessionID);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_4 = (&__this->___k_HeaderSessionID_5);
		BufferX_WriteBytes_mAB875F9E3ABB56B16A350123FA3983F967C3BA79(__this, L_4, NULL);
		// WriteString(m_Ids.SessionId);
		RuntimeObject* L_5 = __this->___m_Ids_25;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = InterfaceFuncInvoker0< String_t* >::Invoke(3 /* System.String Unity.Services.Analytics.Internal.IBufferIds::get_SessionId() */, IBufferIds_t5556EC4467FE5D9FFE7719945D46679BB747155F_il2cpp_TypeInfo_var, L_5);
		V_0 = L_6;
		BufferX_WriteString_m6D00B4EC23DF37876EA6155C243345D9ABD997A6(__this, (&V_0), NULL);
		// WriteBytes(k_HeaderEventUUID);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_7 = (&__this->___k_HeaderEventUUID_6);
		BufferX_WriteBytes_mAB875F9E3ABB56B16A350123FA3983F967C3BA79(__this, L_7, NULL);
		// WriteString(m_SystemCalls.GenerateGuid());
		RuntimeObject* L_8 = __this->___m_SystemCalls_23;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Unity.Services.Analytics.Internal.IBufferSystemCalls::GenerateGuid() */, IBufferSystemCalls_t9CA55BD1B80E3DB50B62AC3E1F54839D2A105C41_il2cpp_TypeInfo_var, L_8);
		V_0 = L_9;
		BufferX_WriteString_m6D00B4EC23DF37876EA6155C243345D9ABD997A6(__this, (&V_0), NULL);
		// WriteBytes(k_HeaderTimestamp);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_10 = (&__this->___k_HeaderTimestamp_7);
		BufferX_WriteBytes_mAB875F9E3ABB56B16A350123FA3983F967C3BA79(__this, L_10, NULL);
		// WriteString(SerializeDateTime(datetime));
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_11 = ___datetime1;
		String_t* L_12;
		L_12 = BufferX_SerializeDateTime_m48F637B8166FD1F214B29050444AA725CB8AF9FB(L_11, NULL);
		V_0 = L_12;
		BufferX_WriteString_m6D00B4EC23DF37876EA6155C243345D9ABD997A6(__this, (&V_0), NULL);
		// WriteBytes(k_QuoteComma);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_13 = (&__this->___k_QuoteComma_15);
		BufferX_WriteBytes_mAB875F9E3ABB56B16A350123FA3983F967C3BA79(__this, L_13, NULL);
		// if (eventVersion != null)
		bool L_14;
		L_14 = Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_inline((&___eventVersion2), Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_RuntimeMethod_var);
		V_1 = L_14;
		bool L_15 = V_1;
		if (!L_15)
		{
			goto IL_00e5;
		}
	}
	{
		// WriteBytes(k_HeaderEventVersion);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_16 = (&__this->___k_HeaderEventVersion_8);
		BufferX_WriteBytes_mAB875F9E3ABB56B16A350123FA3983F967C3BA79(__this, L_16, NULL);
		// WriteString(eventVersion.ToString());
		String_t* L_17;
		L_17 = Nullable_1_ToString_m04B6938F577DFC70D695A65C381A5ABCBC441248((&___eventVersion2), Nullable_1_ToString_m04B6938F577DFC70D695A65C381A5ABCBC441248_RuntimeMethod_var);
		V_0 = L_17;
		BufferX_WriteString_m6D00B4EC23DF37876EA6155C243345D9ABD997A6(__this, (&V_0), NULL);
		// WriteBytes(k_Comma);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_18 = (&__this->___k_Comma_16);
		BufferX_WriteBytes_mAB875F9E3ABB56B16A350123FA3983F967C3BA79(__this, L_18, NULL);
	}

IL_00e5:
	{
		// if (addPlayerIdsToEventBody)
		bool L_19 = ___addPlayerIdsToEventBody3;
		V_2 = L_19;
		bool L_20 = V_2;
		if (!L_20)
		{
			goto IL_0164;
		}
	}
	{
		// WriteBytes(k_HeaderInstallationID);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_21 = (&__this->___k_HeaderInstallationID_9);
		BufferX_WriteBytes_mAB875F9E3ABB56B16A350123FA3983F967C3BA79(__this, L_21, NULL);
		// WriteString(m_Ids.InstallId);
		RuntimeObject* L_22 = __this->___m_Ids_25;
		NullCheck(L_22);
		String_t* L_23;
		L_23 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String Unity.Services.Analytics.Internal.IBufferIds::get_InstallId() */, IBufferIds_t5556EC4467FE5D9FFE7719945D46679BB747155F_il2cpp_TypeInfo_var, L_22);
		V_0 = L_23;
		BufferX_WriteString_m6D00B4EC23DF37876EA6155C243345D9ABD997A6(__this, (&V_0), NULL);
		// WriteBytes(k_QuoteComma);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_24 = (&__this->___k_QuoteComma_15);
		BufferX_WriteBytes_mAB875F9E3ABB56B16A350123FA3983F967C3BA79(__this, L_24, NULL);
		// if (!String.IsNullOrEmpty(m_Ids.PlayerId))
		RuntimeObject* L_25 = __this->___m_Ids_25;
		NullCheck(L_25);
		String_t* L_26;
		L_26 = InterfaceFuncInvoker0< String_t* >::Invoke(2 /* System.String Unity.Services.Analytics.Internal.IBufferIds::get_PlayerId() */, IBufferIds_t5556EC4467FE5D9FFE7719945D46679BB747155F_il2cpp_TypeInfo_var, L_25);
		bool L_27;
		L_27 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_26, NULL);
		V_3 = (bool)((((int32_t)L_27) == ((int32_t)0))? 1 : 0);
		bool L_28 = V_3;
		if (!L_28)
		{
			goto IL_0163;
		}
	}
	{
		// WriteBytes(k_HeaderPlayerID);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_29 = (&__this->___k_HeaderPlayerID_10);
		BufferX_WriteBytes_mAB875F9E3ABB56B16A350123FA3983F967C3BA79(__this, L_29, NULL);
		// WriteString(m_Ids.PlayerId);
		RuntimeObject* L_30 = __this->___m_Ids_25;
		NullCheck(L_30);
		String_t* L_31;
		L_31 = InterfaceFuncInvoker0< String_t* >::Invoke(2 /* System.String Unity.Services.Analytics.Internal.IBufferIds::get_PlayerId() */, IBufferIds_t5556EC4467FE5D9FFE7719945D46679BB747155F_il2cpp_TypeInfo_var, L_30);
		V_0 = L_31;
		BufferX_WriteString_m6D00B4EC23DF37876EA6155C243345D9ABD997A6(__this, (&V_0), NULL);
		// WriteBytes(k_QuoteComma);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_32 = (&__this->___k_QuoteComma_15);
		BufferX_WriteBytes_mAB875F9E3ABB56B16A350123FA3983F967C3BA79(__this, L_32, NULL);
	}

IL_0163:
	{
	}

IL_0164:
	{
		// WriteBytes(k_HeaderOpenEventParams);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_33 = (&__this->___k_HeaderOpenEventParams_11);
		BufferX_WriteBytes_mAB875F9E3ABB56B16A350123FA3983F967C3BA79(__this, L_33, NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.BufferX::StripTrailingCommaIfNecessary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferX_StripTrailingCommaIfNecessary_m835DF3D14DFBEB8486A8044A72C15F64C9CEA937 (BufferX_t61043C3179F78166341D64689A662C738496055C* __this, const RuntimeMethod* method) 
{
	Il2CppChar V_0 = 0x0;
	bool V_1 = false;
	{
		// m_Buffer.Seek(-1, SeekOrigin.End);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_0 = __this->___m_Buffer_28;
		NullCheck(L_0);
		int64_t L_1;
		L_1 = VirtualFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(29 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_0, ((int64_t)(-1)), 2);
		// char precedingChar = (char)m_Buffer.ReadByte();
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_2 = __this->___m_Buffer_28;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(33 /* System.Int32 System.IO.Stream::ReadByte() */, L_2);
		V_0 = ((int32_t)(uint16_t)L_3);
		// if (precedingChar == ',')
		Il2CppChar L_4 = V_0;
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)((int32_t)44)))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0051;
		}
	}
	{
		// m_Buffer.Seek(-1, SeekOrigin.Current);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_6 = __this->___m_Buffer_28;
		NullCheck(L_6);
		int64_t L_7;
		L_7 = VirtualFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(29 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_6, ((int64_t)(-1)), 1);
		// m_Buffer.SetLength(m_Buffer.Length - 1);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_8 = __this->___m_Buffer_28;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_9 = __this->___m_Buffer_28;
		NullCheck(L_9);
		int64_t L_10;
		L_10 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Length() */, L_9);
		NullCheck(L_8);
		VirtualActionInvoker1< int64_t >::Invoke(30 /* System.Void System.IO.Stream::SetLength(System.Int64) */, L_8, ((int64_t)il2cpp_codegen_subtract(L_10, ((int64_t)1))));
	}

IL_0051:
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.BufferX::PushEndEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferX_PushEndEvent_m06F34FD5EB0FF8E4743902FBEDD52D2013A6DE23 (BufferX_t61043C3179F78166341D64689A662C738496055C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29B2AAE0149A885123E7F21B7247D1EA4BADF148);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B7_0 = 0;
	{
		// StripTrailingCommaIfNecessary();
		BufferX_StripTrailingCommaIfNecessary_m835DF3D14DFBEB8486A8044A72C15F64C9CEA937(__this, NULL);
		// WriteBytes(k_CloseEvent);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_0 = (&__this->___k_CloseEvent_12);
		BufferX_WriteBytes_mAB875F9E3ABB56B16A350123FA3983F967C3BA79(__this, L_0, NULL);
		// int bufferLength = (int)m_Buffer.Length;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_1 = __this->___m_Buffer_28;
		NullCheck(L_1);
		int64_t L_2;
		L_2 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Length() */, L_1);
		V_0 = ((int32_t)L_2);
		// int eventSize = m_EventEnds.Count > 0 ? bufferLength - m_EventEnds[m_EventEnds.Count - 1] : bufferLength;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_3 = __this->___m_EventEnds_26;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_3, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		if ((((int32_t)L_4) > ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_5 = V_0;
		G_B3_0 = L_5;
		goto IL_004d;
	}

IL_0033:
	{
		int32_t L_6 = V_0;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_7 = __this->___m_EventEnds_26;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_8 = __this->___m_EventEnds_26;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_8, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		NullCheck(L_7);
		int32_t L_10;
		L_10 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_7, ((int32_t)il2cpp_codegen_subtract(L_9, 1)), List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		G_B3_0 = ((int32_t)il2cpp_codegen_subtract(L_6, L_10));
	}

IL_004d:
	{
		V_1 = G_B3_0;
		// if (eventSize > k_UploadBatchMaximumSizeInBytes)
		int32_t L_11 = V_1;
		V_2 = (bool)((((int64_t)((int64_t)L_11)) > ((int64_t)((int64_t)((int32_t)4194304))))? 1 : 0);
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_00c8;
		}
	}
	{
		// Debug.LogWarning($"Detected event that would be too big to upload (greater than {k_UploadBatchMaximumSizeInBytes / 1024}KB in size), discarding it to prevent blockage.");
		int64_t L_13 = ((int64_t)((int32_t)4096));
		RuntimeObject* L_14 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_13);
		String_t* L_15;
		L_15 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral29B2AAE0149A885123E7F21B7247D1EA4BADF148, L_14, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(L_15, NULL);
		// int previousBufferLength = m_EventEnds.Count > 0 ? m_EventEnds[m_EventEnds.Count - 1] : k_BufferHeader.Length;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_16 = __this->___m_EventEnds_26;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_16, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		if ((((int32_t)L_17) > ((int32_t)0)))
		{
			goto IL_0090;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = __this->___k_BufferHeader_2;
		NullCheck(L_18);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_18)->max_length));
		goto IL_00a8;
	}

IL_0090:
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_19 = __this->___m_EventEnds_26;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_20 = __this->___m_EventEnds_26;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_20, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		NullCheck(L_19);
		int32_t L_22;
		L_22 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_19, ((int32_t)il2cpp_codegen_subtract(L_21, 1)), List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		G_B7_0 = L_22;
	}

IL_00a8:
	{
		V_3 = G_B7_0;
		// m_Buffer.SetLength(previousBufferLength);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_23 = __this->___m_Buffer_28;
		int32_t L_24 = V_3;
		NullCheck(L_23);
		VirtualActionInvoker1< int64_t >::Invoke(30 /* System.Void System.IO.Stream::SetLength(System.Int64) */, L_23, ((int64_t)L_24));
		// m_Buffer.Position = previousBufferLength;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_25 = __this->___m_Buffer_28;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		VirtualActionInvoker1< int64_t >::Invoke(13 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_25, ((int64_t)L_26));
		goto IL_00d7;
	}

IL_00c8:
	{
		// m_EventEnds.Add(bufferLength);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_27 = __this->___m_EventEnds_26;
		int32_t L_28 = V_0;
		NullCheck(L_27);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_27, L_28, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
	}

IL_00d7:
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.BufferX::PushDouble(System.Double,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferX_PushDouble_m18518061BA74E73DADFAE1567C8910AC981EEDBB (BufferX_t61043C3179F78166341D64689A662C738496055C* __this, double ___val0, String_t* ___name1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// WriteName(name);
		String_t* L_0 = ___name1;
		BufferX_WriteName_m8833F39525C5ECD5DBBF33168F5FEFC630EA2A7D(__this, L_0, NULL);
		// var formatted = val.ToString(CultureInfo.InvariantCulture);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_1;
		L_1 = CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425(NULL);
		String_t* L_2;
		L_2 = Double_ToString_m4318830D9F771852FDCF21C14CF9E8ABC7E77357((&___val0), L_1, NULL);
		V_0 = L_2;
		// WriteString(formatted);
		BufferX_WriteString_m6D00B4EC23DF37876EA6155C243345D9ABD997A6(__this, (&V_0), NULL);
		// WriteBytes(k_Comma);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_3 = (&__this->___k_Comma_16);
		BufferX_WriteBytes_mAB875F9E3ABB56B16A350123FA3983F967C3BA79(__this, L_3, NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.BufferX::PushString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferX_PushString_m2786331DB2F4AA7F21C9FA1B6C6599E3233DE393 (BufferX_t61043C3179F78166341D64689A662C738496055C* __this, String_t* ___value0, String_t* ___name1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral236273A920037342C6BF764C26035460AC1B4BCB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral299D329E6EA983CC4221A704937359840D3B696D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36CA84885A92E739ED9A94802681AD6C4E3C8852);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83921E76DB37F79389DD6DCF44C1E78295D9BE50);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA08BA5C9B3EC29729F1767C64749B98B93BDD49);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFFEF3DBE279EE1F92E1E2E46F45BC18EBBF55A1A);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Il2CppChar V_3 = 0x0;
	bool V_4 = false;
	int32_t V_5 = 0;
	String_t* V_6 = NULL;
	int32_t V_7 = 0;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	int32_t G_B10_0 = 0;
	{
		// if (Encoding.UTF8.GetByteCount(value) < k_WorkingBuffer.Length)
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0;
		L_0 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
		String_t* L_1 = ___value0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = VirtualFuncInvoker1< int32_t, String_t* >::Invoke(11 /* System.Int32 System.Text.Encoding::GetByteCount(System.String) */, L_0, L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___k_WorkingBuffer_0;
		NullCheck(L_3);
		V_0 = (bool)((((int32_t)L_2) < ((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_01a5;
		}
	}
	{
		// int c = 0;
		V_1 = 0;
		// for (int i = 0; i < value.Length; i++)
		V_2 = 0;
		goto IL_012b;
	}

IL_0027:
	{
		// char character = value[i];
		String_t* L_5 = ___value0;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		Il2CppChar L_7;
		L_7 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_5, L_6, NULL);
		V_3 = L_7;
		// if (Char.IsControl(character))
		Il2CppChar L_8 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Char_IsControl_m7B006691A34165B76DF65393181827D62104F6EC(L_8, NULL);
		V_4 = L_9;
		bool L_10 = V_4;
		if (!L_10)
		{
			goto IL_008e;
		}
	}
	{
		// int codepoint = Convert.ToInt32(character);
		Il2CppChar L_11 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int32_t L_12;
		L_12 = Convert_ToInt32_m7B23BC2572EEB2B03EDAA26D2D9232C4A00DA00C(L_11, NULL);
		V_5 = L_12;
		// string control = $"\\U{codepoint:X4}";
		int32_t L_13 = V_5;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_14);
		String_t* L_16;
		L_16 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral236273A920037342C6BF764C26035460AC1B4BCB, L_15, NULL);
		V_6 = L_16;
		// for (int j = 0; j < control.Length; j++)
		V_7 = 0;
		goto IL_007a;
	}

IL_005d:
	{
		// k_WorkingCharacterBuffer[c] = control[j];
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_17 = __this->___k_WorkingCharacterBuffer_1;
		int32_t L_18 = V_1;
		String_t* L_19 = V_6;
		int32_t L_20 = V_7;
		NullCheck(L_19);
		Il2CppChar L_21;
		L_21 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_19, L_20, NULL);
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(L_18), (Il2CppChar)L_21);
		// c++;
		int32_t L_22 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		// for (int j = 0; j < control.Length; j++)
		int32_t L_23 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007a:
	{
		// for (int j = 0; j < control.Length; j++)
		int32_t L_24 = V_7;
		String_t* L_25 = V_6;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_25, NULL);
		V_8 = (bool)((((int32_t)L_24) < ((int32_t)L_26))? 1 : 0);
		bool L_27 = V_8;
		if (L_27)
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00d3;
	}

IL_008e:
	{
		// else if (character == '"' || character == '\\')
		Il2CppChar L_28 = V_3;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)34))))
		{
			goto IL_009a;
		}
	}
	{
		Il2CppChar L_29 = V_3;
		G_B10_0 = ((((int32_t)L_29) == ((int32_t)((int32_t)92)))? 1 : 0);
		goto IL_009b;
	}

IL_009a:
	{
		G_B10_0 = 1;
	}

IL_009b:
	{
		V_9 = (bool)G_B10_0;
		bool L_30 = V_9;
		if (!L_30)
		{
			goto IL_00be;
		}
	}
	{
		// k_WorkingCharacterBuffer[c] = '\\';
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_31 = __this->___k_WorkingCharacterBuffer_1;
		int32_t L_32 = V_1;
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (Il2CppChar)((int32_t)92));
		// k_WorkingCharacterBuffer[c + 1] = character;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_33 = __this->___k_WorkingCharacterBuffer_1;
		int32_t L_34 = V_1;
		Il2CppChar L_35 = V_3;
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_34, 1))), (Il2CppChar)L_35);
		// c += 2;
		int32_t L_36 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_36, 2));
		goto IL_00d3;
	}

IL_00be:
	{
		// k_WorkingCharacterBuffer[c] = value[i];
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_37 = __this->___k_WorkingCharacterBuffer_1;
		int32_t L_38 = V_1;
		String_t* L_39 = ___value0;
		int32_t L_40 = V_2;
		NullCheck(L_39);
		Il2CppChar L_41;
		L_41 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_39, L_40, NULL);
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (Il2CppChar)L_41);
		// c++;
		int32_t L_42 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_42, 1));
	}

IL_00d3:
	{
		// if (c >= k_WorkingCharacterBuffer.Length)
		int32_t L_43 = V_1;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_44 = __this->___k_WorkingCharacterBuffer_1;
		NullCheck(L_44);
		V_10 = (bool)((((int32_t)((((int32_t)L_43) < ((int32_t)((int32_t)(((RuntimeArray*)L_44)->max_length))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_45 = V_10;
		if (!L_45)
		{
			goto IL_0126;
		}
	}
	{
		// Debug.LogWarning($"String value for field {name} is too long, it will not be recorded.\nValue:\n{value.Substring(0, 128)}...");
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_46 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_47 = L_46;
		NullCheck(L_47);
		ArrayElementTypeCheck (L_47, _stringLiteralFA08BA5C9B3EC29729F1767C64749B98B93BDD49);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralFA08BA5C9B3EC29729F1767C64749B98B93BDD49);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_48 = L_47;
		String_t* L_49 = ___name1;
		NullCheck(L_48);
		ArrayElementTypeCheck (L_48, L_49);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_49);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_50 = L_48;
		NullCheck(L_50);
		ArrayElementTypeCheck (L_50, _stringLiteral299D329E6EA983CC4221A704937359840D3B696D);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral299D329E6EA983CC4221A704937359840D3B696D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_51 = L_50;
		String_t* L_52 = ___value0;
		NullCheck(L_52);
		String_t* L_53;
		L_53 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_52, 0, ((int32_t)128), NULL);
		NullCheck(L_51);
		ArrayElementTypeCheck (L_51, L_53);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_53);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_54 = L_51;
		NullCheck(L_54);
		ArrayElementTypeCheck (L_54, _stringLiteralFFEF3DBE279EE1F92E1E2E46F45BC18EBBF55A1A);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralFFEF3DBE279EE1F92E1E2E46F45BC18EBBF55A1A);
		String_t* L_55;
		L_55 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_54, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(L_55, NULL);
		// break;
		goto IL_013d;
	}

IL_0126:
	{
		// for (int i = 0; i < value.Length; i++)
		int32_t L_56 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_56, 1));
	}

IL_012b:
	{
		// for (int i = 0; i < value.Length; i++)
		int32_t L_57 = V_2;
		String_t* L_58 = ___value0;
		NullCheck(L_58);
		int32_t L_59;
		L_59 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_58, NULL);
		V_11 = (bool)((((int32_t)L_57) < ((int32_t)L_59))? 1 : 0);
		bool L_60 = V_11;
		if (L_60)
		{
			goto IL_0027;
		}
	}

IL_013d:
	{
		// if (c < k_WorkingCharacterBuffer.Length)
		int32_t L_61 = V_1;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_62 = __this->___k_WorkingCharacterBuffer_1;
		NullCheck(L_62);
		V_12 = (bool)((((int32_t)L_61) < ((int32_t)((int32_t)(((RuntimeArray*)L_62)->max_length))))? 1 : 0);
		bool L_63 = V_12;
		if (!L_63)
		{
			goto IL_01a2;
		}
	}
	{
		// WriteName(name);
		String_t* L_64 = ___name1;
		BufferX_WriteName_m8833F39525C5ECD5DBBF33168F5FEFC630EA2A7D(__this, L_64, NULL);
		// WriteByte(k_Quote);
		uint8_t* L_65 = (&__this->___k_Quote_13);
		BufferX_WriteByte_m12C49B76B743F83835010F50B8BDD99680AD6B14(__this, L_65, NULL);
		// int valueLength = Encoding.UTF8.GetBytes(k_WorkingCharacterBuffer, 0, c, k_WorkingBuffer, 0);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_66;
		L_66 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_67 = __this->___k_WorkingCharacterBuffer_1;
		int32_t L_68 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_69 = __this->___k_WorkingBuffer_0;
		NullCheck(L_66);
		int32_t L_70;
		L_70 = VirtualFuncInvoker5< int32_t, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, int32_t, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(16 /* System.Int32 System.Text.Encoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32) */, L_66, L_67, 0, L_68, L_69, 0);
		V_13 = L_70;
		// m_Buffer.Write(k_WorkingBuffer, 0, valueLength);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_71 = __this->___m_Buffer_28;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_72 = __this->___k_WorkingBuffer_0;
		int32_t L_73 = V_13;
		NullCheck(L_71);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(34 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_71, L_72, 0, L_73);
		// WriteBytes(k_QuoteComma);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_74 = (&__this->___k_QuoteComma_15);
		BufferX_WriteBytes_mAB875F9E3ABB56B16A350123FA3983F967C3BA79(__this, L_74, NULL);
	}

IL_01a2:
	{
		goto IL_01e3;
	}

IL_01a5:
	{
		// Debug.LogWarning($"String value for field \"{name}\" is too long, it will not be recorded.\nValue:\n{value.Substring(0, 128)}...");
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_75 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_76 = L_75;
		NullCheck(L_76);
		ArrayElementTypeCheck (L_76, _stringLiteral83921E76DB37F79389DD6DCF44C1E78295D9BE50);
		(L_76)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral83921E76DB37F79389DD6DCF44C1E78295D9BE50);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_77 = L_76;
		String_t* L_78 = ___name1;
		NullCheck(L_77);
		ArrayElementTypeCheck (L_77, L_78);
		(L_77)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_78);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_79 = L_77;
		NullCheck(L_79);
		ArrayElementTypeCheck (L_79, _stringLiteral36CA84885A92E739ED9A94802681AD6C4E3C8852);
		(L_79)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral36CA84885A92E739ED9A94802681AD6C4E3C8852);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_80 = L_79;
		String_t* L_81 = ___value0;
		NullCheck(L_81);
		String_t* L_82;
		L_82 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_81, 0, ((int32_t)128), NULL);
		NullCheck(L_80);
		ArrayElementTypeCheck (L_80, L_82);
		(L_80)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_82);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_83 = L_80;
		NullCheck(L_83);
		ArrayElementTypeCheck (L_83, _stringLiteralFFEF3DBE279EE1F92E1E2E46F45BC18EBBF55A1A);
		(L_83)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralFFEF3DBE279EE1F92E1E2E46F45BC18EBBF55A1A);
		String_t* L_84;
		L_84 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_83, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(L_84, NULL);
	}

IL_01e3:
	{
		// }
		return;
	}
}
// System.Byte[] Unity.Services.Analytics.Internal.BufferX::Serialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BufferX_Serialize_m4CA698F0ECE4218D3227187027C1A754651B85D9 (BufferX_t61043C3179F78166341D64689A662C738496055C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB0F79A6ABD88DB20E08561FCEEA8E62C21B8875);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int64_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	bool V_6 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_7 = NULL;
	int32_t G_B6_0 = 0;
	{
		// if (m_EventEnds.Count > 0)
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = __this->___m_EventEnds_26;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_0, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		V_0 = (bool)((((int32_t)L_1) > ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_00d1;
		}
	}
	{
		// long originalBufferPosition = m_Buffer.Position;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_3 = __this->___m_Buffer_28;
		NullCheck(L_3);
		int64_t L_4;
		L_4 = VirtualFuncInvoker0< int64_t >::Invoke(12 /* System.Int64 System.IO.Stream::get_Position() */, L_3);
		V_1 = L_4;
		// int end = m_EventEnds[0];
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_5 = __this->___m_EventEnds_26;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_5, 0, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		V_2 = L_6;
		// int nextEnd = 0;
		V_3 = 0;
		goto IL_0047;
	}

IL_0034:
	{
		// end = m_EventEnds[nextEnd];
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_7 = __this->___m_EventEnds_26;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_7, L_8, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		V_2 = L_9;
		// nextEnd++;
		int32_t L_10 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0047:
	{
		// while (nextEnd < m_EventEnds.Count &&
		//        m_EventEnds[nextEnd] < k_UploadBatchMaximumSizeInBytes)
		int32_t L_11 = V_3;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_12 = __this->___m_EventEnds_26;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_12, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		if ((((int32_t)L_11) >= ((int32_t)L_13)))
		{
			goto IL_006c;
		}
	}
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_14 = __this->___m_EventEnds_26;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		int32_t L_16;
		L_16 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_14, L_15, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		G_B6_0 = ((((int64_t)((int64_t)L_16)) < ((int64_t)((int64_t)((int32_t)4194304))))? 1 : 0);
		goto IL_006d;
	}

IL_006c:
	{
		G_B6_0 = 0;
	}

IL_006d:
	{
		V_6 = (bool)G_B6_0;
		bool L_17 = V_6;
		if (L_17)
		{
			goto IL_0034;
		}
	}
	{
		// byte[] payload = new byte[end + 1];
		int32_t L_18 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(L_18, 1)));
		V_4 = L_19;
		// m_Buffer.Position = 0;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_20 = __this->___m_Buffer_28;
		NullCheck(L_20);
		VirtualActionInvoker1< int64_t >::Invoke(13 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_20, ((int64_t)0));
		// m_Buffer.Read(payload, 0, end);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_21 = __this->___m_Buffer_28;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = V_4;
		int32_t L_23 = V_2;
		NullCheck(L_21);
		int32_t L_24;
		L_24 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(31 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_21, L_22, 0, L_23);
		// byte[] suffix = Encoding.UTF8.GetBytes("]}");
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_25;
		L_25 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
		NullCheck(L_25);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26;
		L_26 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_25, _stringLiteralEB0F79A6ABD88DB20E08561FCEEA8E62C21B8875);
		V_5 = L_26;
		// payload[end - 1] = suffix[0];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = V_4;
		int32_t L_28 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = V_5;
		NullCheck(L_29);
		int32_t L_30 = 0;
		uint8_t L_31 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_28, 1))), (uint8_t)L_31);
		// payload[end] = suffix[1];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = V_4;
		int32_t L_33 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = V_5;
		NullCheck(L_34);
		int32_t L_35 = 1;
		uint8_t L_36 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(L_33), (uint8_t)L_36);
		// m_Buffer.Position = originalBufferPosition;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_37 = __this->___m_Buffer_28;
		int64_t L_38 = V_1;
		NullCheck(L_37);
		VirtualActionInvoker1< int64_t >::Invoke(13 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_37, L_38);
		// return payload;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = V_4;
		V_7 = L_39;
		goto IL_00d7;
	}

IL_00d1:
	{
		// return null;
		V_7 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		goto IL_00d7;
	}

IL_00d7:
	{
		// }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = V_7;
		return L_40;
	}
}
// System.Void Unity.Services.Analytics.Internal.BufferX::ClearBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferX_ClearBuffer_mA8B0BBF389EA44EFE0CA85B2EF94A3B51153FEE8 (BufferX_t61043C3179F78166341D64689A662C738496055C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Buffer.SetLength(0);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_0 = __this->___m_Buffer_28;
		NullCheck(L_0);
		VirtualActionInvoker1< int64_t >::Invoke(30 /* System.Void System.IO.Stream::SetLength(System.Int64) */, L_0, ((int64_t)0));
		// m_Buffer.Position = 0;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_1 = __this->___m_Buffer_28;
		NullCheck(L_1);
		VirtualActionInvoker1< int64_t >::Invoke(13 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_1, ((int64_t)0));
		// WriteBytes(k_BufferHeader);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_2 = (&__this->___k_BufferHeader_2);
		BufferX_WriteBytes_mAB875F9E3ABB56B16A350123FA3983F967C3BA79(__this, L_2, NULL);
		// m_EventEnds.Clear();
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_3 = __this->___m_EventEnds_26;
		NullCheck(L_3);
		List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_inline(L_3, List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.BufferX::ClearBuffer(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferX_ClearBuffer_m33260625C009242974AAD0747DDF14D2EF1BB726 (BufferX_t61043C3179F78166341D64689A662C738496055C* __this, int64_t ___upTo0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveRange_m1E69C4C8438AA5D7E05C2936C79C01D96F89BE68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m95629806F31CF369D937590912E0B6A53FF7C587_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	int64_t V_5 = 0;
	uint8_t V_6 = 0x0;
	bool V_7 = false;
	{
		// MemoryStream oldBuffer = m_Buffer;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_0 = __this->___m_Buffer_28;
		V_0 = L_0;
		// m_Buffer = m_SpareBuffer;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_1 = __this->___m_SpareBuffer_27;
		__this->___m_Buffer_28 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Buffer_28), (void*)L_1);
		// m_SpareBuffer = oldBuffer;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_2 = V_0;
		__this->___m_SpareBuffer_27 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_SpareBuffer_27), (void*)L_2);
		// int lastClearedEventIndex = 0;
		V_1 = 0;
		// for (int i = 0; i < m_EventEnds.Count; i++)
		V_2 = 0;
		goto IL_006d;
	}

IL_0021:
	{
		// m_EventEnds[i] = m_EventEnds[i] - (int)upTo + k_BufferHeader.Length;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_3 = __this->___m_EventEnds_26;
		int32_t L_4 = V_2;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_5 = __this->___m_EventEnds_26;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		int32_t L_7;
		L_7 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_5, L_6, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		int64_t L_8 = ___upTo0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->___k_BufferHeader_2;
		NullCheck(L_9);
		NullCheck(L_3);
		List_1_set_Item_m95629806F31CF369D937590912E0B6A53FF7C587(L_3, L_4, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_7, ((int32_t)L_8))), ((int32_t)(((RuntimeArray*)L_9)->max_length)))), List_1_set_Item_m95629806F31CF369D937590912E0B6A53FF7C587_RuntimeMethod_var);
		// if (m_EventEnds[i] <= k_BufferHeader.Length)
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_10 = __this->___m_EventEnds_26;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12;
		L_12 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_10, L_11, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = __this->___k_BufferHeader_2;
		NullCheck(L_13);
		V_3 = (bool)((((int32_t)((((int32_t)L_12) > ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_3;
		if (!L_14)
		{
			goto IL_0068;
		}
	}
	{
		// lastClearedEventIndex = i;
		int32_t L_15 = V_2;
		V_1 = L_15;
	}

IL_0068:
	{
		// for (int i = 0; i < m_EventEnds.Count; i++)
		int32_t L_16 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_006d:
	{
		// for (int i = 0; i < m_EventEnds.Count; i++)
		int32_t L_17 = V_2;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_18 = __this->___m_EventEnds_26;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_18, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		V_4 = (bool)((((int32_t)L_17) < ((int32_t)L_19))? 1 : 0);
		bool L_20 = V_4;
		if (L_20)
		{
			goto IL_0021;
		}
	}
	{
		// m_EventEnds.RemoveRange(0, lastClearedEventIndex + 1);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_21 = __this->___m_EventEnds_26;
		int32_t L_22 = V_1;
		NullCheck(L_21);
		List_1_RemoveRange_m1E69C4C8438AA5D7E05C2936C79C01D96F89BE68(L_21, 0, ((int32_t)il2cpp_codegen_add(L_22, 1)), List_1_RemoveRange_m1E69C4C8438AA5D7E05C2936C79C01D96F89BE68_RuntimeMethod_var);
		// m_Buffer.SetLength(0);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_23 = __this->___m_Buffer_28;
		NullCheck(L_23);
		VirtualActionInvoker1< int64_t >::Invoke(30 /* System.Void System.IO.Stream::SetLength(System.Int64) */, L_23, ((int64_t)0));
		// m_Buffer.Position = 0;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_24 = __this->___m_Buffer_28;
		NullCheck(L_24);
		VirtualActionInvoker1< int64_t >::Invoke(13 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_24, ((int64_t)0));
		// WriteBytes(k_BufferHeader);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_25 = (&__this->___k_BufferHeader_2);
		BufferX_WriteBytes_mAB875F9E3ABB56B16A350123FA3983F967C3BA79(__this, L_25, NULL);
		// m_SpareBuffer.Position = upTo;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_26 = __this->___m_SpareBuffer_27;
		int64_t L_27 = ___upTo0;
		NullCheck(L_26);
		VirtualActionInvoker1< int64_t >::Invoke(13 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_26, L_27);
		// for (long i = upTo; i < m_SpareBuffer.Length; i++)
		int64_t L_28 = ___upTo0;
		V_5 = L_28;
		goto IL_00f1;
	}

IL_00cc:
	{
		// byte b = (byte)m_SpareBuffer.ReadByte();
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_29 = __this->___m_SpareBuffer_27;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = VirtualFuncInvoker0< int32_t >::Invoke(33 /* System.Int32 System.IO.Stream::ReadByte() */, L_29);
		V_6 = (uint8_t)((int32_t)(uint8_t)L_30);
		// m_Buffer.WriteByte(b);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_31 = __this->___m_Buffer_28;
		uint8_t L_32 = V_6;
		NullCheck(L_31);
		VirtualActionInvoker1< uint8_t >::Invoke(36 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_31, L_32);
		// for (long i = upTo; i < m_SpareBuffer.Length; i++)
		int64_t L_33 = V_5;
		V_5 = ((int64_t)il2cpp_codegen_add(L_33, ((int64_t)1)));
	}

IL_00f1:
	{
		// for (long i = upTo; i < m_SpareBuffer.Length; i++)
		int64_t L_34 = V_5;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_35 = __this->___m_SpareBuffer_27;
		NullCheck(L_35);
		int64_t L_36;
		L_36 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Length() */, L_35);
		V_7 = (bool)((((int64_t)L_34) < ((int64_t)L_36))? 1 : 0);
		bool L_37 = V_7;
		if (L_37)
		{
			goto IL_00cc;
		}
	}
	{
		// m_SpareBuffer.SetLength(0);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_38 = __this->___m_SpareBuffer_27;
		NullCheck(L_38);
		VirtualActionInvoker1< int64_t >::Invoke(30 /* System.Void System.IO.Stream::SetLength(System.Int64) */, L_38, ((int64_t)0));
		// m_SpareBuffer.Position = 0;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_39 = __this->___m_SpareBuffer_27;
		NullCheck(L_39);
		VirtualActionInvoker1< int64_t >::Invoke(13 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_39, ((int64_t)0));
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.BufferX::FlushToDisk()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferX_FlushToDisk_m55BF963B573FD854740103B13825AACBD73C78E9 (BufferX_t61043C3179F78166341D64689A662C738496055C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDiskCache_t878F3F39893FAF5AC4CC46B81A7DCB069DFBE822_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_DiskCache.Write(m_EventEnds, m_Buffer);
		RuntimeObject* L_0 = __this->___m_DiskCache_24;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_1 = __this->___m_EventEnds_26;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_2 = __this->___m_Buffer_28;
		NullCheck(L_0);
		InterfaceActionInvoker2< List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(1 /* System.Void Unity.Services.Analytics.Internal.IDiskCache::Write(System.Collections.Generic.List`1<System.Int32>,System.IO.Stream) */, IDiskCache_t878F3F39893FAF5AC4CC46B81A7DCB069DFBE822_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.BufferX::ClearDiskCache()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferX_ClearDiskCache_mD54CC30E7AD92D94FC57DF95A3E4A4A1BEAEB1C6 (BufferX_t61043C3179F78166341D64689A662C738496055C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDiskCache_t878F3F39893FAF5AC4CC46B81A7DCB069DFBE822_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_DiskCache.Clear();
		RuntimeObject* L_0 = __this->___m_DiskCache_24;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(0 /* System.Void Unity.Services.Analytics.Internal.IDiskCache::Clear() */, IDiskCache_t878F3F39893FAF5AC4CC46B81A7DCB069DFBE822_il2cpp_TypeInfo_var, L_0);
		// }
		return;
	}
}
// System.String Unity.Services.Analytics.Internal.BufferX::SerializeDateTime(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BufferX_SerializeDateTime_m48F637B8166FD1F214B29050444AA725CB8AF9FB (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___dateTime0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C1DFC84C89C48D8E83EB3C98D58E22F70F5E9F4);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return dateTime.ToString(k_MillisecondDateFormat, CultureInfo.InvariantCulture);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425(NULL);
		String_t* L_1;
		L_1 = DateTime_ToString_m27637E1131A10BED8A95639D64339023D5EBBF00((&___dateTime0), _stringLiteral3C1DFC84C89C48D8E83EB3C98D58E22F70F5E9F4, L_0, NULL);
		V_0 = L_1;
		goto IL_0015;
	}

IL_0015:
	{
		// }
		String_t* L_2 = V_0;
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Unity.Services.Analytics.Internal.Consent::get_Pipl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Consent_get_Pipl_m1706E91033F1862EB1860203165D73D2FC48569C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFFBF433B627DA76F2B3F8F9137C40070252A3B18);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static String Pipl => "pipl";
		return _stringLiteralFFBF433B627DA76F2B3F8F9137C40070252A3B18;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.Services.Analytics.Internal.ConsentStatus Unity.Services.Analytics.Internal.ConsentTracker::get_optInPiplConsentStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConsentTracker_get_optInPiplConsentStatus_m1F91E59567043A5429228EFBA83709725EB53A34 (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, const RuntimeMethod* method) 
{
	{
		// internal ConsentStatus optInPiplConsentStatus { get; set; }
		int32_t L_0 = __this->___U3CoptInPiplConsentStatusU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Unity.Services.Analytics.Internal.ConsentTracker::set_optInPiplConsentStatus(Unity.Services.Analytics.Internal.ConsentStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentTracker_set_optInPiplConsentStatus_m7121DEA6C7203C39DD740E00262387EF06B1C732 (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// internal ConsentStatus optInPiplConsentStatus { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CoptInPiplConsentStatusU3Ek__BackingField_2 = L_0;
		return;
	}
}
// Unity.Services.Analytics.Internal.ConsentStatus Unity.Services.Analytics.Internal.ConsentTracker::get_optOutConsentStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConsentTracker_get_optOutConsentStatus_mA1EB68620CB4A25DD2739C48F607DFE18924D415 (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, const RuntimeMethod* method) 
{
	{
		// internal ConsentStatus optOutConsentStatus { get; set; }
		int32_t L_0 = __this->___U3CoptOutConsentStatusU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Unity.Services.Analytics.Internal.ConsentTracker::set_optOutConsentStatus(Unity.Services.Analytics.Internal.ConsentStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentTracker_set_optOutConsentStatus_m4BAAF67518F147B7203463AD1557E2E14A795657 (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// internal ConsentStatus optOutConsentStatus { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CoptOutConsentStatusU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.ConsentTracker::.ctor(Unity.Services.Analytics.ICoreStatsHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentTracker__ctor_m478B76472BE051496CB2D8EE77D91DED3D332E5A (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, RuntimeObject* ___coreStatsHelper0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeoAPI_tDEC43B93D320DC5B81A4BD9F45491DD2E5D30287_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : this(new GeoAPI(), coreStatsHelper) {}
		GeoAPI_tDEC43B93D320DC5B81A4BD9F45491DD2E5D30287* L_0 = (GeoAPI_tDEC43B93D320DC5B81A4BD9F45491DD2E5D30287*)il2cpp_codegen_object_new(GeoAPI_tDEC43B93D320DC5B81A4BD9F45491DD2E5D30287_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		GeoAPI__ctor_m0C73E78C464E961E626A7D252140E6E2A60C148D(L_0, NULL);
		RuntimeObject* L_1 = ___coreStatsHelper0;
		ConsentTracker__ctor_m9C23286CCF2BC6690013071ECD56F7FC0B5B745C(__this, L_0, L_1, NULL);
		// : this(new GeoAPI(), coreStatsHelper) {}
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.ConsentTracker::.ctor(Unity.Services.Analytics.Internal.IGeoAPI,Unity.Services.Analytics.ICoreStatsHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentTracker__ctor_m9C23286CCF2BC6690013071ECD56F7FC0B5B745C (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, RuntimeObject* ___geoApi0, RuntimeObject* ___coreStatsHelper1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeoAPI_tDEC43B93D320DC5B81A4BD9F45491DD2E5D30287_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICoreStatsHelper_t436ACDCFB0D414BD45F5EAC4C05281101F24E6FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* G_B2_1 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* G_B1_1 = NULL;
	{
		// internal ConsentTracker(IGeoAPI geoApi, ICoreStatsHelper coreStatsHelper)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// m_GeoAPI = geoApi ?? new GeoAPI();
		RuntimeObject* L_0 = ___geoApi0;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0013;
		}
	}
	{
		GeoAPI_tDEC43B93D320DC5B81A4BD9F45491DD2E5D30287* L_2 = (GeoAPI_tDEC43B93D320DC5B81A4BD9F45491DD2E5D30287*)il2cpp_codegen_object_new(GeoAPI_tDEC43B93D320DC5B81A4BD9F45491DD2E5D30287_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		GeoAPI__ctor_m0C73E78C464E961E626A7D252140E6E2A60C148D(L_2, NULL);
		G_B2_0 = ((RuntimeObject*)(L_2));
		G_B2_1 = G_B1_1;
	}

IL_0013:
	{
		NullCheck(G_B2_1);
		G_B2_1->___m_GeoAPI_0 = G_B2_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_1->___m_GeoAPI_0), (void*)G_B2_0);
		// m_CoreStatsHelper = coreStatsHelper;
		RuntimeObject* L_3 = ___coreStatsHelper1;
		__this->___m_CoreStatsHelper_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CoreStatsHelper_1), (void*)L_3);
		// optOutConsentStatus = ConsentStatus.Unknown;
		ConsentTracker_set_optOutConsentStatus_m4BAAF67518F147B7203463AD1557E2E14A795657_inline(__this, 0, NULL);
		// optInPiplConsentStatus = ConsentStatus.Unknown;
		ConsentTracker_set_optInPiplConsentStatus_m7121DEA6C7203C39DD740E00262387EF06B1C732_inline(__this, 0, NULL);
		// ReadOptInPiplConsentStatus();
		ConsentTracker_ReadOptInPiplConsentStatus_m1BBCAFF95811454222E9A78CCBC1DB4331CF5127(__this, NULL);
		// ReadOptOutConsentStatus();
		ConsentTracker_ReadOptOutConsentStatus_m231368E1ECC2A7BBB5ADD724CB7BCB6BFA0D6E80(__this, NULL);
		// m_CoreStatsHelper.SetCoreStatsConsent(false);
		RuntimeObject* L_4 = __this->___m_CoreStatsHelper_1;
		NullCheck(L_4);
		InterfaceActionInvoker1< bool >::Invoke(0 /* System.Void Unity.Services.Analytics.ICoreStatsHelper::SetCoreStatsConsent(System.Boolean) */, ICoreStatsHelper_t436ACDCFB0D414BD45F5EAC4C05281101F24E6FD_il2cpp_TypeInfo_var, L_4, (bool)0);
		// }
		return;
	}
}
// System.Boolean Unity.Services.Analytics.Internal.ConsentTracker::IsGeoIpChecked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConsentTracker_IsGeoIpChecked_m59099E930C861F18CAF7D68E0546C5D05663E50E (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return response != null;
		GeoIPResponse_tADA05745323DD2374411BCB8CEC9EC086B4FE150* L_0 = __this->___response_4;
		V_0 = (bool)((!(((RuntimeObject*)(GeoIPResponse_tADA05745323DD2374411BCB8CEC9EC086B4FE150*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean Unity.Services.Analytics.Internal.ConsentTracker::IsConsentGiven()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConsentTracker_IsConsentGiven_m73AE70CC46CC8C736C47BE464B484132C9F1581A (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// ValidateConsentWasChecked();
		ConsentTracker_ValidateConsentWasChecked_m92986F8E992406A10E6712086DE129EB009935E6(__this, NULL);
		// return IsConsentGiven(response.identifier);
		GeoIPResponse_tADA05745323DD2374411BCB8CEC9EC086B4FE150* L_0 = __this->___response_4;
		NullCheck(L_0);
		String_t* L_1 = L_0->___identifier_0;
		bool L_2;
		L_2 = ConsentTracker_IsConsentGiven_m45BA5C4604FBACCB87933A7D812EEA65633F8338(__this, L_1, NULL);
		V_0 = L_2;
		goto IL_001c;
	}

IL_001c:
	{
		// }
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean Unity.Services.Analytics.Internal.ConsentTracker::IsConsentGiven(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConsentTracker_IsConsentGiven_m45BA5C4604FBACCB87933A7D812EEA65633F8338 (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, String_t* ___identifier0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (identifier == Consent.Pipl)
		String_t* L_0 = ___identifier0;
		String_t* L_1;
		L_1 = Consent_get_Pipl_m1706E91033F1862EB1860203165D73D2FC48569C(NULL);
		bool L_2;
		L_2 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		// return optInPiplConsentStatus == ConsentStatus.ConsentGiven;
		int32_t L_4;
		L_4 = ConsentTracker_get_optInPiplConsentStatus_m1F91E59567043A5429228EFBA83709725EB53A34_inline(__this, NULL);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)5))? 1 : 0);
		goto IL_0029;
	}

IL_001d:
	{
		// return optOutConsentStatus == ConsentStatus.Unknown;
		int32_t L_5;
		L_5 = ConsentTracker_get_optOutConsentStatus_mA1EB68620CB4A25DD2739C48F607DFE18924D415_inline(__this, NULL);
		V_1 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		goto IL_0029;
	}

IL_0029:
	{
		// }
		bool L_6 = V_1;
		return L_6;
	}
}
// System.Boolean Unity.Services.Analytics.Internal.ConsentTracker::IsOptingOutInProgress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConsentTracker_IsOptingOutInProgress_m6969440734089DAFF92A792F7CD7B90DB929AB4B (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// ValidateConsentWasChecked();
		ConsentTracker_ValidateConsentWasChecked_m92986F8E992406A10E6712086DE129EB009935E6(__this, NULL);
		// return (response.identifier == Consent.Pipl)
		//     ? optInPiplConsentStatus == ConsentStatus.Forgetting
		//     : optOutConsentStatus == ConsentStatus.Forgetting;
		GeoIPResponse_tADA05745323DD2374411BCB8CEC9EC086B4FE150* L_0 = __this->___response_4;
		NullCheck(L_0);
		String_t* L_1 = L_0->___identifier_0;
		String_t* L_2;
		L_2 = Consent_get_Pipl_m1706E91033F1862EB1860203165D73D2FC48569C(NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, L_2, NULL);
		if (L_3)
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_4;
		L_4 = ConsentTracker_get_optOutConsentStatus_mA1EB68620CB4A25DD2739C48F607DFE18924D415_inline(__this, NULL);
		G_B3_0 = ((((int32_t)L_4) == ((int32_t)1))? 1 : 0);
		goto IL_0033;
	}

IL_002a:
	{
		int32_t L_5;
		L_5 = ConsentTracker_get_optInPiplConsentStatus_m1F91E59567043A5429228EFBA83709725EB53A34_inline(__this, NULL);
		G_B3_0 = ((((int32_t)L_5) == ((int32_t)1))? 1 : 0);
	}

IL_0033:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0036;
	}

IL_0036:
	{
		// }
		bool L_6 = V_0;
		return L_6;
	}
}
// System.Void Unity.Services.Analytics.Internal.ConsentTracker::FinishOptOutProcess()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentTracker_FinishOptOutProcess_mAD86F4E87DB74A31387B0D964A6F9F51BEA23165 (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral63727CA6C805007DCD3A3067D90A70432562D6EF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral843422B942D75E64BB0A2281AB972CE4A7EB3924);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (optInPiplConsentStatus == ConsentStatus.Forgetting)
		int32_t L_0;
		L_0 = ConsentTracker_get_optInPiplConsentStatus_m1F91E59567043A5429228EFBA83709725EB53A34_inline(__this, NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		// optInPiplConsentStatus = ConsentStatus.OptedOut;
		ConsentTracker_set_optInPiplConsentStatus_m7121DEA6C7203C39DD740E00262387EF06B1C732_inline(__this, 2, NULL);
		// PlayerPrefs.SetInt(optInPiplConsentStatusPrefKey, (int)optInPiplConsentStatus);
		int32_t L_2;
		L_2 = ConsentTracker_get_optInPiplConsentStatus_m1F91E59567043A5429228EFBA83709725EB53A34_inline(__this, NULL);
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(_stringLiteral843422B942D75E64BB0A2281AB972CE4A7EB3924, L_2, NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_mCC9D4FCE00EA315AC967771D5D993E04CB742DFB(NULL);
	}

IL_002f:
	{
		// if (optOutConsentStatus == ConsentStatus.Forgetting)
		int32_t L_3;
		L_3 = ConsentTracker_get_optOutConsentStatus_mA1EB68620CB4A25DD2739C48F607DFE18924D415_inline(__this, NULL);
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)1))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_005d;
		}
	}
	{
		// optOutConsentStatus = ConsentStatus.OptedOut;
		ConsentTracker_set_optOutConsentStatus_m4BAAF67518F147B7203463AD1557E2E14A795657_inline(__this, 2, NULL);
		// PlayerPrefs.SetInt(optOutConsentStatusPrefKey, (int)optOutConsentStatus);
		int32_t L_5;
		L_5 = ConsentTracker_get_optOutConsentStatus_mA1EB68620CB4A25DD2739C48F607DFE18924D415_inline(__this, NULL);
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(_stringLiteral63727CA6C805007DCD3A3067D90A70432562D6EF, L_5, NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_mCC9D4FCE00EA315AC967771D5D993E04CB742DFB(NULL);
	}

IL_005d:
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.ConsentTracker::ReadOptInPiplConsentStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentTracker_ReadOptInPiplConsentStatus_m1BBCAFF95811454222E9A78CCBC1DB4331CF5127 (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral843422B942D75E64BB0A2281AB972CE4A7EB3924);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (PlayerPrefs.HasKey(optInPiplConsentStatusPrefKey))
		bool L_0;
		L_0 = PlayerPrefs_HasKey_m9EB15A18BE611107251F2E2F6CE70636F88CAB5F(_stringLiteral843422B942D75E64BB0A2281AB972CE4A7EB3924, NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		// optInPiplConsentStatus = (ConsentStatus)PlayerPrefs.GetInt(optInPiplConsentStatusPrefKey);
		int32_t L_2;
		L_2 = PlayerPrefs_GetInt_m35C13A87BBC7907554CE5405EB5D00CF85E7457B(_stringLiteral843422B942D75E64BB0A2281AB972CE4A7EB3924, NULL);
		ConsentTracker_set_optInPiplConsentStatus_m7121DEA6C7203C39DD740E00262387EF06B1C732_inline(__this, L_2, NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.ConsentTracker::ReadOptOutConsentStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentTracker_ReadOptOutConsentStatus_m231368E1ECC2A7BBB5ADD724CB7BCB6BFA0D6E80 (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral63727CA6C805007DCD3A3067D90A70432562D6EF);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (PlayerPrefs.HasKey(optOutConsentStatusPrefKey))
		bool L_0;
		L_0 = PlayerPrefs_HasKey_m9EB15A18BE611107251F2E2F6CE70636F88CAB5F(_stringLiteral63727CA6C805007DCD3A3067D90A70432562D6EF, NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		// optOutConsentStatus = (ConsentStatus)PlayerPrefs.GetInt(optOutConsentStatusPrefKey);
		int32_t L_2;
		L_2 = PlayerPrefs_GetInt_m35C13A87BBC7907554CE5405EB5D00CF85E7457B(_stringLiteral63727CA6C805007DCD3A3067D90A70432562D6EF, NULL);
		ConsentTracker_set_optOutConsentStatus_m4BAAF67518F147B7203463AD1557E2E14A795657_inline(__this, L_2, NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.ConsentTracker::ValidateConsentWasChecked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentTracker_ValidateConsentWasChecked_m92986F8E992406A10E6712086DE129EB009935E6 (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (!IsGeoIpChecked())
		bool L_0;
		L_0 = ConsentTracker_IsGeoIpChecked_m59099E930C861F18CAF7D68E0546C5D05663E50E(__this, NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// throw new ConsentCheckException(ConsentCheckExceptionReason.ConsentFlowNotKnown,
		//     CommonErrorCodes.Unknown,
		//     "The required consent flow cannot be determined. Make sure GeoIP was successfully called.",
		//     null);
		ConsentCheckException_t96E7054ECB013548EA92EEFFFACAB143D5A86B7D* L_2 = (ConsentCheckException_t96E7054ECB013548EA92EEFFFACAB143D5A86B7D*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ConsentCheckException_t96E7054ECB013548EA92EEFFFACAB143D5A86B7D_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ConsentCheckException__ctor_m0F6DC7108E11524A5BBBE85F07DD082873FE95B3(L_2, 4, 0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1478BC45A3EF425780ADB183A6419907115E223E)), (Exception_t*)NULL, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ConsentTracker_ValidateConsentWasChecked_m92986F8E992406A10E6712086DE129EB009935E6_RuntimeMethod_var)));
	}

IL_001d:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Analytics.Internal.GeoAPI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeoAPI__ctor_m0C73E78C464E961E626A7D252140E6E2A60C148D (GeoAPI_tDEC43B93D320DC5B81A4BD9F45491DD2E5D30287* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA07A3EB9D8DB99C62110B79812663E60297F7619);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly string m_PrivacyEndpoint = "https://pls.prd.mz.internal.unity3d.com/api/v1/user-lookup";
		__this->___m_PrivacyEndpoint_0 = _stringLiteralA07A3EB9D8DB99C62110B79812663E60297F7619;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PrivacyEndpoint_0), (void*)_stringLiteralA07A3EB9D8DB99C62110B79812663E60297F7619);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Analytics.Internal.GeoIPResponse::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeoIPResponse__ctor_m859CD30853C62FA484459EB2A61DD81E99F95BA6 (GeoIPResponse_tADA05745323DD2374411BCB8CEC9EC086B4FE150* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Unity.Services.Analytics.Internal.FileSystemCalls::CanAccessFileSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FileSystemCalls_CanAccessFileSystem_m664852625AD86DA0EAAADEF43EB28D979294738F (FileSystemCalls_t1A2213109FA10AFB80C343E28A45F13F053970A3* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B7_0 = 0;
	{
		//             return
		//                 Application.platform != RuntimePlatform.Switch &&
		// #if !UNITY_2021_1_OR_NEWER
		//                 Application.platform != RuntimePlatform.XboxOne &&
		// #endif
		// #if UNITY_2019 || UNITY_2020_2_OR_NEWER
		//                 Application.platform != RuntimePlatform.GameCoreXboxOne &&
		//                 Application.platform != RuntimePlatform.GameCoreXboxSeries &&
		//                 Application.platform != RuntimePlatform.PS5 &&
		// #endif
		//                 Application.platform != RuntimePlatform.PS4 &&
		//                 !String.IsNullOrEmpty(Application.persistentDataPath);
		int32_t L_0;
		L_0 = Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D(NULL);
		if ((((int32_t)L_0) == ((int32_t)((int32_t)32))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_1;
		L_1 = Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D(NULL);
		if ((((int32_t)L_1) == ((int32_t)((int32_t)37))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_2;
		L_2 = Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D(NULL);
		if ((((int32_t)L_2) == ((int32_t)((int32_t)36))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_3;
		L_3 = Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D(NULL);
		if ((((int32_t)L_3) == ((int32_t)((int32_t)38))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4;
		L_4 = Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D(NULL);
		if ((((int32_t)L_4) == ((int32_t)((int32_t)25))))
		{
			goto IL_003d;
		}
	}
	{
		String_t* L_5;
		L_5 = Application_get_persistentDataPath_m787EBC9B0862E7617DCD6CABD2147E61717EAC17(NULL);
		bool L_6;
		L_6 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_5, NULL);
		G_B7_0 = ((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B7_0 = 0;
	}

IL_003e:
	{
		V_0 = (bool)G_B7_0;
		goto IL_0041;
	}

IL_0041:
	{
		// }
		bool L_7 = V_0;
		return L_7;
	}
}
// System.Boolean Unity.Services.Analytics.Internal.FileSystemCalls::FileExists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FileSystemCalls_FileExists_m73217509E8CEDB625FAFD2AA3E008153D7F84513 (FileSystemCalls_t1A2213109FA10AFB80C343E28A45F13F053970A3* __this, String_t* ___path0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return File.Exists(path);
		String_t* L_0 = ___path0;
		bool L_1;
		L_1 = File_Exists_mD7E7A84A6B9E9A9BADBDA7C46AAE0624EF106D85(L_0, NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void Unity.Services.Analytics.Internal.FileSystemCalls::DeleteFile(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileSystemCalls_DeleteFile_mC18864152DCA840D1FDD2DBD6287F4DADE4A59CC (FileSystemCalls_t1A2213109FA10AFB80C343E28A45F13F053970A3* __this, String_t* ___path0, const RuntimeMethod* method) 
{
	{
		// File.Delete(path);
		String_t* L_0 = ___path0;
		File_Delete_mB5CB249F5370D49747243BCA9C56CCC48D3E6A08(L_0, NULL);
		// }
		return;
	}
}
// System.IO.Stream Unity.Services.Analytics.Internal.FileSystemCalls::OpenFileForWriting(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* FileSystemCalls_OpenFileForWriting_m5D2064955D6E16BA0EA7FC046A30096A06799A0D (FileSystemCalls_t1A2213109FA10AFB80C343E28A45F13F053970A3* __this, String_t* ___path0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* V_0 = NULL;
	{
		// return new FileStream(path, FileMode.Create);
		String_t* L_0 = ___path0;
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_1 = (FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8*)il2cpp_codegen_object_new(FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		FileStream__ctor_m78499F9BE2BE31DA34F123B4399AA457716BD6E6(L_1, L_0, 2, NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		// }
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = V_0;
		return L_2;
	}
}
// System.Void Unity.Services.Analytics.Internal.FileSystemCalls::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileSystemCalls__ctor_mED48303E0E5ADE100ED297D2F82072B5162F3E2A (FileSystemCalls_t1A2213109FA10AFB80C343E28A45F13F053970A3* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Analytics.Internal.DiskCache::.ctor(Unity.Services.Analytics.Internal.IFileSystemCalls)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiskCache__ctor_mBA8B9A9ECF83506913BC62A4782F490C2D300263 (DiskCache_tE19D214B0538F2CC9D59D4F827B480AEBCEF368D* __this, RuntimeObject* ___systemCalls0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFileSystemCalls_t125D92A716C627D4E8C9F59CBE44831033779D05_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D88DC602EB6FBBEF4C8649C1866B4FE2D18A73D);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// internal DiskCache(IFileSystemCalls systemCalls)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// if (systemCalls.CanAccessFileSystem())
		RuntimeObject* L_0 = ___systemCalls0;
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Unity.Services.Analytics.Internal.IFileSystemCalls::CanAccessFileSystem() */, IFileSystemCalls_t125D92A716C627D4E8C9F59CBE44831033779D05_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		// k_CacheFilePath = $"{Application.persistentDataPath}/eventcache";
		String_t* L_3;
		L_3 = Application_get_persistentDataPath_m787EBC9B0862E7617DCD6CABD2147E61717EAC17(NULL);
		String_t* L_4;
		L_4 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_3, _stringLiteral4D88DC602EB6FBBEF4C8649C1866B4FE2D18A73D, NULL);
		__this->___k_CacheFilePath_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___k_CacheFilePath_0), (void*)L_4);
	}

IL_0029:
	{
		// k_SystemCalls = systemCalls;
		RuntimeObject* L_5 = ___systemCalls0;
		__this->___k_SystemCalls_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___k_SystemCalls_1), (void*)L_5);
		// k_CacheFileMaximumSize = 5 * 1024 * 1024; // 5MB, 1024B * 1024KB * 5
		__this->___k_CacheFileMaximumSize_2 = ((int64_t)((int32_t)5242880));
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.DiskCache::Write(System.Collections.Generic.List`1<System.Int32>,System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiskCache_Write_m2C651810FDAC3F17B733AB0B05FDEE1E9F55E90C (DiskCache_tE19D214B0538F2CC9D59D4F827B480AEBCEF368D* __this, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___eventEndIndices0, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___payload1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFileSystemCalls_t125D92A716C627D4E8C9F59CBE44831033779D05_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3DFC4F5246F4B16F322274CCEAC16C6C120A25C);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* V_6 = NULL;
	BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* V_7 = NULL;
	int64_t V_8 = 0;
	int32_t V_9 = 0;
	bool V_10 = false;
	int32_t V_11 = 0;
	bool V_12 = false;
	int32_t G_B3_0 = 0;
	{
		// if (eventEndIndices.Count > 0 &&
		//     k_SystemCalls.CanAccessFileSystem())
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = ___eventEndIndices0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_0, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_2 = __this->___k_SystemCalls_1;
		NullCheck(L_2);
		bool L_3;
		L_3 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Unity.Services.Analytics.Internal.IFileSystemCalls::CanAccessFileSystem() */, IFileSystemCalls_t125D92A716C627D4E8C9F59CBE44831033779D05_il2cpp_TypeInfo_var, L_2);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 0;
	}

IL_0018:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0128;
		}
	}
	{
		// int cacheEnd = 0;
		V_1 = 0;
		// int cacheEventCount = 0;
		V_2 = 0;
		// for (int e = 0; e < eventEndIndices.Count; e++)
		V_3 = 0;
		goto IL_0052;
	}

IL_0028:
	{
		// if (eventEndIndices[e] < k_CacheFileMaximumSize)
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_5 = ___eventEndIndices0;
		int32_t L_6 = V_3;
		NullCheck(L_5);
		int32_t L_7;
		L_7 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_5, L_6, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		int64_t L_8 = __this->___k_CacheFileMaximumSize_2;
		V_4 = (bool)((((int64_t)((int64_t)L_7)) < ((int64_t)L_8))? 1 : 0);
		bool L_9 = V_4;
		if (!L_9)
		{
			goto IL_004d;
		}
	}
	{
		// cacheEnd = eventEndIndices[e];
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_10 = ___eventEndIndices0;
		int32_t L_11 = V_3;
		NullCheck(L_10);
		int32_t L_12;
		L_12 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_10, L_11, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		V_1 = L_12;
		// cacheEventCount = e + 1;
		int32_t L_13 = V_3;
		V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_004d:
	{
		// for (int e = 0; e < eventEndIndices.Count; e++)
		int32_t L_14 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0052:
	{
		// for (int e = 0; e < eventEndIndices.Count; e++)
		int32_t L_15 = V_3;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_16 = ___eventEndIndices0;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_16, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		V_5 = (bool)((((int32_t)L_15) < ((int32_t)L_17))? 1 : 0);
		bool L_18 = V_5;
		if (L_18)
		{
			goto IL_0028;
		}
	}
	{
		// using (Stream file = k_SystemCalls.OpenFileForWriting(k_CacheFilePath))
		RuntimeObject* L_19 = __this->___k_SystemCalls_1;
		String_t* L_20 = __this->___k_CacheFilePath_0;
		NullCheck(L_19);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_21;
		L_21 = InterfaceFuncInvoker1< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*, String_t* >::Invoke(3 /* System.IO.Stream Unity.Services.Analytics.Internal.IFileSystemCalls::OpenFileForWriting(System.String) */, IFileSystemCalls_t125D92A716C627D4E8C9F59CBE44831033779D05_il2cpp_TypeInfo_var, L_19, L_20);
		V_6 = L_21;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_011a:
			{// begin finally (depth: 1)
				{
					Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_22 = V_6;
					if (!L_22)
					{
						goto IL_0126;
					}
				}
				{
					Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_23 = V_6;
					NullCheck(L_23);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_23);
				}

IL_0126:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// using (var writer = new BinaryWriter(file))
				Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_24 = V_6;
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_25 = (BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E*)il2cpp_codegen_object_new(BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E_il2cpp_TypeInfo_var);
				NullCheck(L_25);
				BinaryWriter__ctor_mF2F1235E378C3EC493A8C816597BCEB4205A9CA0(L_25, L_24, NULL);
				V_7 = L_25;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_010a_1:
					{// begin finally (depth: 2)
						{
							BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_26 = V_7;
							if (!L_26)
							{
								goto IL_0116_1;
							}
						}
						{
							BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_27 = V_7;
							NullCheck(L_27);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_27);
						}

IL_0116_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						// writer.Write(k_FileHeaderString);       // a specific string to signal file format validity
						BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_28 = V_7;
						NullCheck(L_28);
						VirtualActionInvoker1< String_t* >::Invoke(22 /* System.Void System.IO.BinaryWriter::Write(System.String) */, L_28, _stringLiteralA3DFC4F5246F4B16F322274CCEAC16C6C120A25C);
						// writer.Write(k_CacheFileVersionOne);    // int version specifier
						BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_29 = V_7;
						NullCheck(L_29);
						VirtualActionInvoker1< int32_t >::Invoke(17 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_29, 1);
						// writer.Write(cacheEventCount);          // int event count (cropped to maximum file size)
						BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_30 = V_7;
						int32_t L_31 = V_2;
						NullCheck(L_30);
						VirtualActionInvoker1< int32_t >::Invoke(17 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_30, L_31);
						// for (int i = 0; i < cacheEventCount; i++)
						V_9 = 0;
						goto IL_00bb_2;
					}

IL_00a3_2:
					{
						// writer.Write(eventEndIndices[i]);   // int event end index
						BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_32 = V_7;
						List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_33 = ___eventEndIndices0;
						int32_t L_34 = V_9;
						NullCheck(L_33);
						int32_t L_35;
						L_35 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_33, L_34, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
						NullCheck(L_32);
						VirtualActionInvoker1< int32_t >::Invoke(17 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_32, L_35);
						// for (int i = 0; i < cacheEventCount; i++)
						int32_t L_36 = V_9;
						V_9 = ((int32_t)il2cpp_codegen_add(L_36, 1));
					}

IL_00bb_2:
					{
						// for (int i = 0; i < cacheEventCount; i++)
						int32_t L_37 = V_9;
						int32_t L_38 = V_2;
						V_10 = (bool)((((int32_t)L_37) < ((int32_t)L_38))? 1 : 0);
						bool L_39 = V_10;
						if (L_39)
						{
							goto IL_00a3_2;
						}
					}
					{
						// long payloadOriginalPosition = payload.Position;
						Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_40 = ___payload1;
						NullCheck(L_40);
						int64_t L_41;
						L_41 = VirtualFuncInvoker0< int64_t >::Invoke(12 /* System.Int64 System.IO.Stream::get_Position() */, L_40);
						V_8 = L_41;
						// payload.Position = 0;
						Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_42 = ___payload1;
						NullCheck(L_42);
						VirtualActionInvoker1< int64_t >::Invoke(13 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_42, ((int64_t)0));
						// for (int i = 0; i < cacheEnd; i++)
						V_11 = 0;
						goto IL_00f3_2;
					}

IL_00dc_2:
					{
						// writer.Write((byte)payload.ReadByte());   // byte[] event data
						BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_43 = V_7;
						Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_44 = ___payload1;
						NullCheck(L_44);
						int32_t L_45;
						L_45 = VirtualFuncInvoker0< int32_t >::Invoke(33 /* System.Int32 System.IO.Stream::ReadByte() */, L_44);
						NullCheck(L_43);
						VirtualActionInvoker1< uint8_t >::Invoke(8 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_43, (uint8_t)((int32_t)(uint8_t)L_45));
						// for (int i = 0; i < cacheEnd; i++)
						int32_t L_46 = V_11;
						V_11 = ((int32_t)il2cpp_codegen_add(L_46, 1));
					}

IL_00f3_2:
					{
						// for (int i = 0; i < cacheEnd; i++)
						int32_t L_47 = V_11;
						int32_t L_48 = V_1;
						V_12 = (bool)((((int32_t)L_47) < ((int32_t)L_48))? 1 : 0);
						bool L_49 = V_12;
						if (L_49)
						{
							goto IL_00dc_2;
						}
					}
					{
						// payload.Position = payloadOriginalPosition;
						Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_50 = ___payload1;
						int64_t L_51 = V_8;
						NullCheck(L_50);
						VirtualActionInvoker1< int64_t >::Invoke(13 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_50, L_51);
						goto IL_0117_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_0117_1:
			{
				goto IL_0127;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0127:
	{
	}

IL_0128:
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.DiskCache::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiskCache_Clear_m3C6A5E5104B8CF7998D637099B86428D08E6003D (DiskCache_tE19D214B0538F2CC9D59D4F827B480AEBCEF368D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFileSystemCalls_t125D92A716C627D4E8C9F59CBE44831033779D05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// if (k_SystemCalls.CanAccessFileSystem() &&
		//     k_SystemCalls.FileExists(k_CacheFilePath))
		RuntimeObject* L_0 = __this->___k_SystemCalls_1;
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Unity.Services.Analytics.Internal.IFileSystemCalls::CanAccessFileSystem() */, IFileSystemCalls_t125D92A716C627D4E8C9F59CBE44831033779D05_il2cpp_TypeInfo_var, L_0);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		RuntimeObject* L_2 = __this->___k_SystemCalls_1;
		String_t* L_3 = __this->___k_CacheFilePath_0;
		NullCheck(L_2);
		bool L_4;
		L_4 = InterfaceFuncInvoker1< bool, String_t* >::Invoke(1 /* System.Boolean Unity.Services.Analytics.Internal.IFileSystemCalls::FileExists(System.String) */, IFileSystemCalls_t125D92A716C627D4E8C9F59CBE44831033779D05_il2cpp_TypeInfo_var, L_2, L_3);
		G_B3_0 = ((int32_t)(L_4));
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		V_0 = (bool)G_B3_0;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_003a;
		}
	}
	{
		// k_SystemCalls.DeleteFile(k_CacheFilePath);
		RuntimeObject* L_6 = __this->___k_SystemCalls_1;
		String_t* L_7 = __this->___k_CacheFilePath_0;
		NullCheck(L_6);
		InterfaceActionInvoker1< String_t* >::Invoke(2 /* System.Void Unity.Services.Analytics.Internal.IFileSystemCalls::DeleteFile(System.String) */, IFileSystemCalls_t125D92A716C627D4E8C9F59CBE44831033779D05_il2cpp_TypeInfo_var, L_6, L_7);
	}

IL_003a:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 Unity.Services.Analytics.Internal.Dispatcher::get_ConsecutiveFailedUploadCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dispatcher_get_ConsecutiveFailedUploadCount_m58D2668BE9E8194349A99CA67BB8583F09DE7C07 (Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE* __this, const RuntimeMethod* method) 
{
	{
		// public int ConsecutiveFailedUploadCount { get; private set; }
		int32_t L_0 = __this->___U3CConsecutiveFailedUploadCountU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Unity.Services.Analytics.Internal.Dispatcher::set_ConsecutiveFailedUploadCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dispatcher_set_ConsecutiveFailedUploadCount_m9EECD2DEB2695DBCF973D907662ED7D6140C9469 (Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int ConsecutiveFailedUploadCount { get; private set; }
		int32_t L_0 = ___value0;
		__this->___U3CConsecutiveFailedUploadCountU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Boolean Unity.Services.Analytics.Internal.Dispatcher::get_FlushInProgress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dispatcher_get_FlushInProgress_mCC5DAEE29D9E97D753FE7B2C876FC7B9E3F50E28 (Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE* __this, const RuntimeMethod* method) 
{
	{
		// internal bool FlushInProgress { get; private set; }
		bool L_0 = __this->___U3CFlushInProgressU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Unity.Services.Analytics.Internal.Dispatcher::set_FlushInProgress(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dispatcher_set_FlushInProgress_mE7F87C33DBBF7012A706047DC2336D3B6EF9391E (Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// internal bool FlushInProgress { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CFlushInProgressU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.Dispatcher::.ctor(Unity.Services.Analytics.Internal.IWebRequestHelper,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dispatcher__ctor_mDBB513D6B226DB1B13C536AE8FF0A531340D7208 (Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE* __this, RuntimeObject* ___webRequestHelper0, String_t* ___collectUrl1, const RuntimeMethod* method) 
{
	{
		// public Dispatcher(IWebRequestHelper webRequestHelper, string collectUrl)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// m_WebRequestHelper = webRequestHelper;
		RuntimeObject* L_0 = ___webRequestHelper0;
		__this->___m_WebRequestHelper_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_WebRequestHelper_0), (void*)L_0);
		// m_CollectUrl = collectUrl;
		String_t* L_1 = ___collectUrl1;
		__this->___m_CollectUrl_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CollectUrl_1), (void*)L_1);
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.Dispatcher::SetBuffer(Unity.Services.Analytics.Internal.IBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dispatcher_SetBuffer_m37334C4FDDB8C2DBA98A12432E896F1D3B45BE29 (Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE* __this, RuntimeObject* ___buffer0, const RuntimeMethod* method) 
{
	{
		// m_DataBuffer = buffer;
		RuntimeObject* L_0 = ___buffer0;
		__this->___m_DataBuffer_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_DataBuffer_2), (void*)L_0);
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.Dispatcher::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dispatcher_Flush_m6167D29547BACF3E42364A0E384EDA58FA8D5247 (Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral689C6A4E0E10858B33315ABF7B58B47BF427CAB7);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (FlushInProgress)
		bool L_0;
		L_0 = Dispatcher_get_FlushInProgress_mCC5DAEE29D9E97D753FE7B2C876FC7B9E3F50E28_inline(__this, NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// Debug.LogWarning("Analytics Dispatcher is already flushing.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteral689C6A4E0E10858B33315ABF7B58B47BF427CAB7, NULL);
		goto IL_0023;
	}

IL_001a:
	{
		// FlushBufferToService();
		Dispatcher_FlushBufferToService_m55AC50B02B30BD4ED1E554D794AA5DEE9FB77C39(__this, NULL);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.Dispatcher::FlushBufferToService()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dispatcher_FlushBufferToService_m55AC50B02B30BD4ED1E554D794AA5DEE9FB77C39 (Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tBB5A52E9AEFBC4F0C8D94D39CAD16BCB6B8B5929_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dispatcher_UploadCompleted_m1A96D525DB4DE2A378D239C3D11DA427E36B2459_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWebRequestHelper_tCCD82817C71896176475384430BB0D9BEF732858_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWebRequest_t8FAADA0ED58F096C28998EB5AFE9E79FD05F4DFE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2309FB9CC1600C4642826BA92EB5C43EA0970693);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A5B4A683A4FF348D7FBA286A40B146642302E8C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		// FlushInProgress = true;
		Dispatcher_set_FlushInProgress_mE7F87C33DBBF7012A706047DC2336D3B6EF9391E_inline(__this, (bool)1, NULL);
		// var postBytes = m_DataBuffer.Serialize();
		RuntimeObject* L_0 = __this->___m_DataBuffer_2;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = InterfaceFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(1 /* System.Byte[] Unity.Services.Analytics.Internal.IBuffer::Serialize() */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		// m_FlushBufferIndex = m_DataBuffer.Length;
		RuntimeObject* L_2 = __this->___m_DataBuffer_2;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 Unity.Services.Analytics.Internal.IBuffer::get_Length() */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_2);
		__this->___m_FlushBufferIndex_6 = L_3;
		// if (postBytes == null || postBytes.Length == 0)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		NullCheck(L_5);
		G_B3_0 = ((((int32_t)(((RuntimeArray*)L_5)->max_length)) == ((int32_t)0))? 1 : 0);
		goto IL_0031;
	}

IL_0030:
	{
		G_B3_0 = 1;
	}

IL_0031:
	{
		V_1 = (bool)G_B3_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0048;
		}
	}
	{
		// FlushInProgress = false;
		Dispatcher_set_FlushInProgress_mE7F87C33DBBF7012A706047DC2336D3B6EF9391E_inline(__this, (bool)0, NULL);
		// m_FlushBufferIndex = 0;
		__this->___m_FlushBufferIndex_6 = 0;
		goto IL_00b1;
	}

IL_0048:
	{
		// m_FlushRequest = m_WebRequestHelper.CreateWebRequest(m_CollectUrl, UnityWebRequest.kHttpVerbPOST, postBytes);
		RuntimeObject* L_7 = __this->___m_WebRequestHelper_0;
		String_t* L_8 = __this->___m_CollectUrl_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_0;
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker3< RuntimeObject*, String_t*, String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(0 /* Unity.Services.Analytics.Internal.IWebRequest Unity.Services.Analytics.Internal.IWebRequestHelper::CreateWebRequest(System.String,System.String,System.Byte[]) */, IWebRequestHelper_tCCD82817C71896176475384430BB0D9BEF732858_il2cpp_TypeInfo_var, L_7, L_8, _stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D, L_9);
		__this->___m_FlushRequest_3 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_FlushRequest_3), (void*)L_10);
		// m_FlushRequest.SetRequestHeader(k_PiplExportHeaderKey, k_HeaderTrueValue);
		RuntimeObject* L_11 = __this->___m_FlushRequest_3;
		NullCheck(L_11);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(1 /* System.Void Unity.Services.Analytics.Internal.IWebRequest::SetRequestHeader(System.String,System.String) */, IWebRequest_t8FAADA0ED58F096C28998EB5AFE9E79FD05F4DFE_il2cpp_TypeInfo_var, L_11, _stringLiteral2309FB9CC1600C4642826BA92EB5C43EA0970693, _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		// m_FlushRequest.SetRequestHeader(k_PiplConsentHeaderKey, k_HeaderTrueValue);
		RuntimeObject* L_12 = __this->___m_FlushRequest_3;
		NullCheck(L_12);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(1 /* System.Void Unity.Services.Analytics.Internal.IWebRequest::SetRequestHeader(System.String,System.String) */, IWebRequest_t8FAADA0ED58F096C28998EB5AFE9E79FD05F4DFE_il2cpp_TypeInfo_var, L_12, _stringLiteral2A5B4A683A4FF348D7FBA286A40B146642302E8C, _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		// m_WebRequestHelper.SendWebRequest(m_FlushRequest, UploadCompleted);
		RuntimeObject* L_13 = __this->___m_WebRequestHelper_0;
		RuntimeObject* L_14 = __this->___m_FlushRequest_3;
		Action_1_tBB5A52E9AEFBC4F0C8D94D39CAD16BCB6B8B5929* L_15 = (Action_1_tBB5A52E9AEFBC4F0C8D94D39CAD16BCB6B8B5929*)il2cpp_codegen_object_new(Action_1_tBB5A52E9AEFBC4F0C8D94D39CAD16BCB6B8B5929_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		Action_1__ctor_mC0FC430617EB8A9B54D1632C5BD95979ED5C2C2A(L_15, __this, (intptr_t)((void*)Dispatcher_UploadCompleted_m1A96D525DB4DE2A378D239C3D11DA427E36B2459_RuntimeMethod_var), NULL);
		NullCheck(L_13);
		InterfaceActionInvoker2< RuntimeObject*, Action_1_tBB5A52E9AEFBC4F0C8D94D39CAD16BCB6B8B5929* >::Invoke(1 /* System.Void Unity.Services.Analytics.Internal.IWebRequestHelper::SendWebRequest(Unity.Services.Analytics.Internal.IWebRequest,System.Action`1<System.Int64>) */, IWebRequestHelper_tCCD82817C71896176475384430BB0D9BEF732858_il2cpp_TypeInfo_var, L_13, L_14, L_15);
	}

IL_00b1:
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.Dispatcher::UploadCompleted(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dispatcher_UploadCompleted_m1A96D525DB4DE2A378D239C3D11DA427E36B2459 (Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE* __this, int64_t ___responseCode0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWebRequest_t8FAADA0ED58F096C28998EB5AFE9E79FD05F4DFE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t V_5 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B10_0 = 0;
	{
		// bool success = responseCode >= 200 && responseCode <= 299;
		int64_t L_0 = ___responseCode0;
		if ((((int64_t)L_0) < ((int64_t)((int64_t)((int32_t)200)))))
		{
			goto IL_0018;
		}
	}
	{
		int64_t L_1 = ___responseCode0;
		G_B3_0 = ((((int32_t)((((int64_t)L_1) > ((int64_t)((int64_t)((int32_t)299))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = 0;
	}

IL_0019:
	{
		V_0 = (bool)G_B3_0;
		// bool badRequest = responseCode >= 400 && responseCode <= 499;
		int64_t L_2 = ___responseCode0;
		if ((((int64_t)L_2) < ((int64_t)((int64_t)((int32_t)400)))))
		{
			goto IL_0031;
		}
	}
	{
		int64_t L_3 = ___responseCode0;
		G_B6_0 = ((((int32_t)((((int64_t)L_3) > ((int64_t)((int64_t)((int32_t)499))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0032;
	}

IL_0031:
	{
		G_B6_0 = 0;
	}

IL_0032:
	{
		V_1 = (bool)G_B6_0;
		// bool intermittentError = responseCode >= 500 && responseCode <= 599 || m_FlushRequest.IsNetworkError;
		int64_t L_4 = ___responseCode0;
		if ((((int64_t)L_4) < ((int64_t)((int64_t)((int32_t)500)))))
		{
			goto IL_0045;
		}
	}
	{
		int64_t L_5 = ___responseCode0;
		if ((((int64_t)L_5) <= ((int64_t)((int64_t)((int32_t)599)))))
		{
			goto IL_0052;
		}
	}

IL_0045:
	{
		RuntimeObject* L_6 = __this->___m_FlushRequest_3;
		NullCheck(L_6);
		bool L_7;
		L_7 = InterfaceFuncInvoker0< bool >::Invoke(2 /* System.Boolean Unity.Services.Analytics.Internal.IWebRequest::get_IsNetworkError() */, IWebRequest_t8FAADA0ED58F096C28998EB5AFE9E79FD05F4DFE_il2cpp_TypeInfo_var, L_6);
		G_B10_0 = ((int32_t)(L_7));
		goto IL_0053;
	}

IL_0052:
	{
		G_B10_0 = 1;
	}

IL_0053:
	{
		V_2 = (bool)G_B10_0;
		// if (success || badRequest)
		bool L_8 = V_0;
		bool L_9 = V_1;
		V_3 = (bool)((int32_t)((int32_t)L_8|(int32_t)L_9));
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_0086;
		}
	}
	{
		// ConsecutiveFailedUploadCount = 0;
		Dispatcher_set_ConsecutiveFailedUploadCount_m9EECD2DEB2695DBCF973D907662ED7D6140C9469_inline(__this, 0, NULL);
		// m_DataBuffer.ClearBuffer(m_FlushBufferIndex);
		RuntimeObject* L_11 = __this->___m_DataBuffer_2;
		int32_t L_12 = __this->___m_FlushBufferIndex_6;
		NullCheck(L_11);
		InterfaceActionInvoker1< int64_t >::Invoke(9 /* System.Void Unity.Services.Analytics.Internal.IBuffer::ClearBuffer(System.Int64) */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_11, ((int64_t)L_12));
		// m_DataBuffer.ClearDiskCache();
		RuntimeObject* L_13 = __this->___m_DataBuffer_2;
		NullCheck(L_13);
		InterfaceActionInvoker0::Invoke(7 /* System.Void Unity.Services.Analytics.Internal.IBuffer::ClearDiskCache() */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_13);
		goto IL_00ae;
	}

IL_0086:
	{
		// else if (intermittentError)
		bool L_14 = V_2;
		V_4 = L_14;
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_00ae;
		}
	}
	{
		// ConsecutiveFailedUploadCount++;
		int32_t L_16;
		L_16 = Dispatcher_get_ConsecutiveFailedUploadCount_m58D2668BE9E8194349A99CA67BB8583F09DE7C07_inline(__this, NULL);
		V_5 = L_16;
		int32_t L_17 = V_5;
		Dispatcher_set_ConsecutiveFailedUploadCount_m9EECD2DEB2695DBCF973D907662ED7D6140C9469_inline(__this, ((int32_t)il2cpp_codegen_add(L_17, 1)), NULL);
		// m_DataBuffer.FlushToDisk();
		RuntimeObject* L_18 = __this->___m_DataBuffer_2;
		NullCheck(L_18);
		InterfaceActionInvoker0::Invoke(6 /* System.Void Unity.Services.Analytics.Internal.IBuffer::FlushToDisk() */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_18);
	}

IL_00ae:
	{
		// FlushInProgress = false;
		Dispatcher_set_FlushInProgress_mE7F87C33DBBF7012A706047DC2336D3B6EF9391E_inline(__this, (bool)0, NULL);
		// m_FlushBufferIndex = 0;
		__this->___m_FlushBufferIndex_6 = 0;
		// m_FlushRequest.Dispose();
		RuntimeObject* L_19 = __this->___m_FlushRequest_3;
		NullCheck(L_19);
		InterfaceActionInvoker0::Invoke(3 /* System.Void Unity.Services.Analytics.Internal.IWebRequest::Dispose() */, IWebRequest_t8FAADA0ED58F096C28998EB5AFE9E79FD05F4DFE_il2cpp_TypeInfo_var, L_19);
		// m_FlushRequest = null;
		__this->___m_FlushRequest_3 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_FlushRequest_3), (void*)(RuntimeObject*)NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Analytics.Internal.PlayerPrefsPersistence::SaveValue(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefsPersistence_SaveValue_mCBFD5D1492C195081BD0D2EC4283AD260938C900 (PlayerPrefsPersistence_tA41639170405D0B663305EBE5D18CD5E27583DEF* __this, String_t* ___key0, int32_t ___value1, const RuntimeMethod* method) 
{
	{
		// PlayerPrefs.SetInt(key, value);
		String_t* L_0 = ___key0;
		int32_t L_1 = ___value1;
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(L_0, L_1, NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_mCC9D4FCE00EA315AC967771D5D993E04CB742DFB(NULL);
		// }
		return;
	}
}
// System.Int32 Unity.Services.Analytics.Internal.PlayerPrefsPersistence::LoadValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefsPersistence_LoadValue_m6207685CA622A5707F5C40209FC47A9E12FF543A (PlayerPrefsPersistence_tA41639170405D0B663305EBE5D18CD5E27583DEF* __this, String_t* ___key0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		// if (PlayerPrefs.HasKey(key))
		String_t* L_0 = ___key0;
		bool L_1;
		L_1 = PlayerPrefs_HasKey_m9EB15A18BE611107251F2E2F6CE70636F88CAB5F(L_0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		// return PlayerPrefs.GetInt(key);
		String_t* L_3 = ___key0;
		int32_t L_4;
		L_4 = PlayerPrefs_GetInt_m35C13A87BBC7907554CE5405EB5D00CF85E7457B(L_3, NULL);
		V_1 = L_4;
		goto IL_001a;
	}

IL_0015:
	{
		// return 0;
		V_1 = 0;
		goto IL_001a;
	}

IL_001a:
	{
		// }
		int32_t L_5 = V_1;
		return L_5;
	}
}
// System.Void Unity.Services.Analytics.Internal.PlayerPrefsPersistence::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefsPersistence__ctor_m3F310A297230AB1ED4FD0884D4AAC45082E3DD77 (PlayerPrefsPersistence_tA41639170405D0B663305EBE5D18CD5E27583DEF* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Analytics.Internal.AnalyticsWebRequest::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsWebRequest__ctor_m8CA36BAF33C32134D350FC88E7BF795AFFDFD77D (AnalyticsWebRequest_t2851A3E58826329B4D5AE9A1898AD98EF26DEEFA* __this, String_t* ___url0, String_t* ___method1, const RuntimeMethod* method) 
{
	{
		// internal AnalyticsWebRequest(string url, string method) : base(url, method) {}
		String_t* L_0 = ___url0;
		String_t* L_1 = ___method1;
		UnityWebRequest__ctor_mD4739B0BF1C4937479A83B24B531C6B819712A3E(__this, L_0, L_1, NULL);
		// internal AnalyticsWebRequest(string url, string method) : base(url, method) {}
		return;
	}
}
// System.Boolean Unity.Services.Analytics.Internal.AnalyticsWebRequest::get_IsNetworkError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnalyticsWebRequest_get_IsNetworkError_m36FEA587B02163F41F9FD2E20CBD2E2D71144BC2 (AnalyticsWebRequest_t2851A3E58826329B4D5AE9A1898AD98EF26DEEFA* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return result == UnityWebRequest.Result.ConnectionError;
		int32_t L_0;
		L_0 = UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449(__this, NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Networking.UnityWebRequestAsyncOperation Unity.Services.Analytics.Internal.AnalyticsWebRequest::Unity.Services.Analytics.Internal.IWebRequest.SendWebRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* AnalyticsWebRequest_Unity_Services_Analytics_Internal_IWebRequest_SendWebRequest_m415458FF981E6B3BC598B67AD580DA8443D35502 (AnalyticsWebRequest_t2851A3E58826329B4D5AE9A1898AD98EF26DEEFA* __this, const RuntimeMethod* method) 
{
	{
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_0;
		L_0 = UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13(__this, NULL);
		return L_0;
	}
}
// System.Void Unity.Services.Analytics.Internal.AnalyticsWebRequest::Unity.Services.Analytics.Internal.IWebRequest.SetRequestHeader(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsWebRequest_Unity_Services_Analytics_Internal_IWebRequest_SetRequestHeader_m150D2DC1E3957BC6F3C6052A03693C70F095B3BC (AnalyticsWebRequest_t2851A3E58826329B4D5AE9A1898AD98EF26DEEFA* __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___key0;
		String_t* L_1 = ___value1;
		UnityWebRequest_SetRequestHeader_m099734EB787B7269B62AB2236A5A4F7D35AF8BC5(__this, L_0, L_1, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.Services.Analytics.Internal.IWebRequest Unity.Services.Analytics.Internal.WebRequestHelper::CreateWebRequest(System.String,System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WebRequestHelper_CreateWebRequest_m06C697E4C704BADC84F815F3F84A4144708DDFFA (WebRequestHelper_t90785D95A7FBCCA284192A9CB95D1DA845D57E71* __this, String_t* ___url0, String_t* ___method1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___postBytes2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnalyticsWebRequest_t2851A3E58826329B4D5AE9A1898AD98EF26DEEFA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8FDC00A57780A9EDB4B352514593013802ECB45);
		s_Il2CppMethodInitialized = true;
	}
	AnalyticsWebRequest_t2851A3E58826329B4D5AE9A1898AD98EF26DEEFA* V_0 = NULL;
	UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		// var request = new AnalyticsWebRequest(url, method);
		String_t* L_0 = ___url0;
		String_t* L_1 = ___method1;
		AnalyticsWebRequest_t2851A3E58826329B4D5AE9A1898AD98EF26DEEFA* L_2 = (AnalyticsWebRequest_t2851A3E58826329B4D5AE9A1898AD98EF26DEEFA*)il2cpp_codegen_object_new(AnalyticsWebRequest_t2851A3E58826329B4D5AE9A1898AD98EF26DEEFA_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		AnalyticsWebRequest__ctor_m8CA36BAF33C32134D350FC88E7BF795AFFDFD77D(L_2, L_0, L_1, NULL);
		V_0 = L_2;
		// var upload = new UploadHandlerRaw(postBytes)
		// {
		//     contentType = "application/json"
		// };
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___postBytes2;
		UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A* L_4 = (UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A*)il2cpp_codegen_object_new(UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		UploadHandlerRaw__ctor_m168C957B67E29CB3072E3542044D37E2F16C42B7(L_4, L_3, NULL);
		UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A* L_5 = L_4;
		NullCheck(L_5);
		UploadHandler_set_contentType_mEFF2D2512996DFFF2BFC013388B702078BDC73F3(L_5, _stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E, NULL);
		V_1 = L_5;
		// request.uploadHandler = upload;
		AnalyticsWebRequest_t2851A3E58826329B4D5AE9A1898AD98EF26DEEFA* L_6 = V_0;
		UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A* L_7 = V_1;
		NullCheck(L_6);
		UnityWebRequest_set_uploadHandler_m68F346550136DE178C79238944985892196027FE(L_6, L_7, NULL);
		// request.SetRequestHeader("x-client-id", k_ClientIdHeaderValue);
		AnalyticsWebRequest_t2851A3E58826329B4D5AE9A1898AD98EF26DEEFA* L_8 = V_0;
		String_t* L_9 = __this->___k_ClientIdHeaderValue_0;
		NullCheck(L_8);
		UnityWebRequest_SetRequestHeader_m099734EB787B7269B62AB2236A5A4F7D35AF8BC5(L_8, _stringLiteralC8FDC00A57780A9EDB4B352514593013802ECB45, L_9, NULL);
		// return request;
		AnalyticsWebRequest_t2851A3E58826329B4D5AE9A1898AD98EF26DEEFA* L_10 = V_0;
		V_2 = L_10;
		goto IL_003a;
	}

IL_003a:
	{
		// }
		RuntimeObject* L_11 = V_2;
		return L_11;
	}
}
// System.Void Unity.Services.Analytics.Internal.WebRequestHelper::SendWebRequest(Unity.Services.Analytics.Internal.IWebRequest,System.Action`1<System.Int64>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRequestHelper_SendWebRequest_mF1D98192E9EBDB286BC094900284220080FF9F5D (WebRequestHelper_t90785D95A7FBCCA284192A9CB95D1DA845D57E71* __this, RuntimeObject* ___request0, Action_1_tBB5A52E9AEFBC4F0C8D94D39CAD16BCB6B8B5929* ___onCompleted1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWebRequest_t8FAADA0ED58F096C28998EB5AFE9E79FD05F4DFE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_U3CSendWebRequestU3Eb__0_mAE3230661FB4148BD8285721D5E48F49441B37D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_tC549DEE19D3A36FBBE1510B664CF1CB349E507F5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass2_0_tC549DEE19D3A36FBBE1510B664CF1CB349E507F5* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass2_0_tC549DEE19D3A36FBBE1510B664CF1CB349E507F5* L_0 = (U3CU3Ec__DisplayClass2_0_tC549DEE19D3A36FBBE1510B664CF1CB349E507F5*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass2_0_tC549DEE19D3A36FBBE1510B664CF1CB349E507F5_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass2_0__ctor_m0F6A2DDF4EF21C3B648EA299191EB2D006DB68F9(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass2_0_tC549DEE19D3A36FBBE1510B664CF1CB349E507F5* L_1 = V_0;
		Action_1_tBB5A52E9AEFBC4F0C8D94D39CAD16BCB6B8B5929* L_2 = ___onCompleted1;
		NullCheck(L_1);
		L_1->___onCompleted_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___onCompleted_0), (void*)L_2);
		// var requestOp = request.SendWebRequest();
		U3CU3Ec__DisplayClass2_0_tC549DEE19D3A36FBBE1510B664CF1CB349E507F5* L_3 = V_0;
		RuntimeObject* L_4 = ___request0;
		NullCheck(L_4);
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_5;
		L_5 = InterfaceFuncInvoker0< UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* >::Invoke(0 /* UnityEngine.Networking.UnityWebRequestAsyncOperation Unity.Services.Analytics.Internal.IWebRequest::SendWebRequest() */, IWebRequest_t8FAADA0ED58F096C28998EB5AFE9E79FD05F4DFE_il2cpp_TypeInfo_var, L_4);
		NullCheck(L_3);
		L_3->___requestOp_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___requestOp_1), (void*)L_5);
		// requestOp.completed += delegate
		// {
		//     onCompleted(requestOp.webRequest.responseCode);
		// };
		U3CU3Ec__DisplayClass2_0_tC549DEE19D3A36FBBE1510B664CF1CB349E507F5* L_6 = V_0;
		NullCheck(L_6);
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_7 = L_6->___requestOp_1;
		U3CU3Ec__DisplayClass2_0_tC549DEE19D3A36FBBE1510B664CF1CB349E507F5* L_8 = V_0;
		Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* L_9 = (Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB*)il2cpp_codegen_object_new(Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Action_1__ctor_m33ABB7530487276910BEFB499A97D33FB2E06D7D(L_9, L_8, (intptr_t)((void*)U3CU3Ec__DisplayClass2_0_U3CSendWebRequestU3Eb__0_mAE3230661FB4148BD8285721D5E48F49441B37D6_RuntimeMethod_var), NULL);
		NullCheck(L_7);
		AsyncOperation_add_completed_mD6F21BA8127D6D4B7ABDEFAA995A7A347A20A793(L_7, L_9, NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.WebRequestHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRequestHelper__ctor_m5F76E493A0C15311928DCCCCE293752DF3DA0CC9 (WebRequestHelper_t90785D95A7FBCCA284192A9CB95D1DA845D57E71* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SdkVersion_t0BDC7D3E9F8175012EACBDB69FD9394AC2679BB8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral32DAD11A2DA98D2FBFC3098BCA6A6AE59BB54A31);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly string k_ClientIdHeaderValue = "com.unity.services.analytics@" + SdkVersion.SDK_VERSION;
		il2cpp_codegen_runtime_class_init_inline(SdkVersion_t0BDC7D3E9F8175012EACBDB69FD9394AC2679BB8_il2cpp_TypeInfo_var);
		String_t* L_0 = ((SdkVersion_t0BDC7D3E9F8175012EACBDB69FD9394AC2679BB8_StaticFields*)il2cpp_codegen_static_fields_for(SdkVersion_t0BDC7D3E9F8175012EACBDB69FD9394AC2679BB8_il2cpp_TypeInfo_var))->___SDK_VERSION_0;
		String_t* L_1;
		L_1 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral32DAD11A2DA98D2FBFC3098BCA6A6AE59BB54A31, L_0, NULL);
		__this->___k_ClientIdHeaderValue_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___k_ClientIdHeaderValue_0), (void*)L_1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Analytics.Internal.WebRequestHelper/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m0F6A2DDF4EF21C3B648EA299191EB2D006DB68F9 (U3CU3Ec__DisplayClass2_0_tC549DEE19D3A36FBBE1510B664CF1CB349E507F5* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.WebRequestHelper/<>c__DisplayClass2_0::<SendWebRequest>b__0(UnityEngine.AsyncOperation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0_U3CSendWebRequestU3Eb__0_mAE3230661FB4148BD8285721D5E48F49441B37D6 (U3CU3Ec__DisplayClass2_0_tC549DEE19D3A36FBBE1510B664CF1CB349E507F5* __this, AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* ___U3Cp0U3E0, const RuntimeMethod* method) 
{
	{
		// onCompleted(requestOp.webRequest.responseCode);
		Action_1_tBB5A52E9AEFBC4F0C8D94D39CAD16BCB6B8B5929* L_0 = __this->___onCompleted_0;
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_1 = __this->___requestOp_1;
		NullCheck(L_1);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_2;
		L_2 = UnityWebRequestAsyncOperation_get_webRequest_mF67D15420C7C1C4DCA1BD6F839048A0542998BC3_inline(L_1, NULL);
		NullCheck(L_2);
		int64_t L_3;
		L_3 = UnityWebRequest_get_responseCode_m012C177F61435D5D120A21D7A03FFF7B0F8B904B(L_2, NULL);
		NullCheck(L_0);
		Action_1_Invoke_mE4800C6D733A4CDE721FD3D8B4E95319B5C64E9E_inline(L_0, L_3, NULL);
		// };
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Analytics.Internal.StandardEventServiceComponent::.ctor(Unity.Services.Core.Configuration.Internal.IProjectConfiguration,Unity.Services.Analytics.IUnstructuredEventRecorder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandardEventServiceComponent__ctor_mED8BAC8D2E1D561A6DCB4A1F35D4E7A60553CB87 (StandardEventServiceComponent_t587EC5F02461A7AD305539BAB07A2B93FD56E2BB* __this, RuntimeObject* ___configuration0, RuntimeObject* ___analyticsService1, const RuntimeMethod* method) 
{
	{
		// public StandardEventServiceComponent(IProjectConfiguration configuration, IUnstructuredEventRecorder analyticsService)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// m_Configuration = configuration;
		RuntimeObject* L_0 = ___configuration0;
		__this->___m_Configuration_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Configuration_0), (void*)L_0);
		// m_AnalyticsService = analyticsService;
		RuntimeObject* L_1 = ___analyticsService1;
		__this->___m_AnalyticsService_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_AnalyticsService_1), (void*)L_1);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* CoreRegistry_get_Instance_m3837829F955A1E5F79A3B6A5023C1E8DEFB22FB2_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static CoreRegistry Instance { get; internal set; }
		CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* L_0 = ((CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA_StaticFields*)il2cpp_codegen_static_fields_for(CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_get_CompletedTask_mA35969BCF3240B8BA63918BA0C527F809C477E27_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_0 = ((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields*)il2cpp_codegen_static_fields_for(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var))->___U3CCompletedTaskU3Ek__BackingField_32;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AnalyticsServiceInstance_get_SessionID_m0BE34B73BEC292E51E9721811451EC359D9837F0_inline (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) 
{
	{
		// public string SessionID { get; private set; }
		String_t* L_0 = __this->___U3CSessionIDU3Ek__BackingField_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StdCommonParams_set_ClientVersion_m97C2B0A6328C2D38BF31BED3F628D0902F36A3D0_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// internal string ClientVersion { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CClientVersionU3Ek__BackingField_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CClientVersionU3Ek__BackingField_8), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StdCommonParams_set_ProjectID_m3119C391E989366B60D3A7FC4B4516A0ED285653_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// internal string ProjectID { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CProjectIDU3Ek__BackingField_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CProjectIDU3Ek__BackingField_10), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StdCommonParams_set_GameBundleID_m01625DC8750160BEF86073C96048B910A23B8FE6_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// internal string GameBundleID { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CGameBundleIDU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CGameBundleIDU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StdCommonParams_set_Platform_m6270CCD19D8CB881BC5668613C041C5E5BD0996C_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// internal string Platform { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CPlatformU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPlatformU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StdCommonParams_set_BuildGuuid_m0DB0779599C5BE31C7A1B76C2AF77E9EF9A3AC0C_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// internal string BuildGuuid { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CBuildGuuidU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CBuildGuuidU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StdCommonParams_set_Idfv_mC903A6BEA3F5145D959C36D123D084D211085EF9_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// internal string Idfv { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CIdfvU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIdfvU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AnalyticsServiceInstance_set_SessionID_m48AF420DBE356BD2F73DF27848664B9117B1CA52_inline (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string SessionID { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CSessionIDU3Ek__BackingField_15 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSessionIDU3Ek__BackingField_15), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_mA48718D9A20D8972EDD41714CEF6BBF864F442EA_inline (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___value0;
		int32_t L_1 = ___min1;
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		int32_t L_4 = ___value0;
		int32_t L_5 = ___max2;
		V_1 = (bool)((((int32_t)L_4) > ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		int32_t L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		int32_t L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StdCommonParams_set_DeviceVolume_mBC014F9E6144D31B7A21082F4F17CADA8B8B8DB8_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___value0, const RuntimeMethod* method) 
{
	{
		// internal double? DeviceVolume { get; set; }
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_0 = ___value0;
		__this->___U3CDeviceVolumeU3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StdCommonParams_set_BatteryLoad_mC06087861B7DD6C288823A7DDB4A7085B168743E_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___value0, const RuntimeMethod* method) 
{
	{
		// internal double? BatteryLoad { get; set; }
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_0 = ___value0;
		__this->___U3CBatteryLoadU3Ek__BackingField_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StdCommonParams_set_UasUserID_m5079F59137ED8AA3D25BBDFBF10E536812D8ABB7_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// internal string UasUserID { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CUasUserIDU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CUasUserIDU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* StringComparer_get_Ordinal_m96B6DCC0BE70F655E0C41ED4EBCA30D5BA9F6D1A_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		OrdinalCaseSensitiveComparer_t581CA7CB51DCF00B6012A697A4B4B3067144521A* L_0 = ((StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_StaticFields*)il2cpp_codegen_static_fields_for(StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var))->___s_ordinal_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AnalyticsContainer_set_Instance_mCE629230958D49CD99B20F0E39559F5184930161_inline (AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static AnalyticsContainer Instance { get; private set; }
		AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1* L_0 = ___value0;
		((AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_11), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1* AnalyticsContainer_get_Instance_m5DE0306D86F033D52B086F0592AEB27E0D7E5510_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static AnalyticsContainer Instance { get; private set; }
		AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1* L_0 = ((AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConsentCheckException_set_Reason_mB9551C34C6B6C76DAAD9DF12EFF1B0E385CEE968_inline (ConsentCheckException_t96E7054ECB013548EA92EEFFFACAB143D5A86B7D* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// [Preserve] public ConsentCheckExceptionReason Reason { get; private set; }
		int32_t L_0 = ___value0;
		__this->___U3CReasonU3Ek__BackingField_19 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* StdCommonParams_get_GameStoreID_m84117F13E7CB919145EC3EF0480411695B7B7B69_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) 
{
	{
		// internal string GameStoreID { get; set; }
		String_t* L_0 = __this->___U3CGameStoreIDU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* StdCommonParams_get_GameBundleID_m614C916F3CBA18D60161DDFD84B4C9D5C2E99531_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) 
{
	{
		// internal string GameBundleID { get; set; }
		String_t* L_0 = __this->___U3CGameBundleIDU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* StdCommonParams_get_Platform_m997C2F5D078131853762DCFBA238288F8EFA191E_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) 
{
	{
		// internal string Platform { get; set; }
		String_t* L_0 = __this->___U3CPlatformU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* StdCommonParams_get_Idfv_m0CB0676EB45E77DE51316B204FFAE5437CEFA6DD_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) 
{
	{
		// internal string Idfv { get; set; }
		String_t* L_0 = __this->___U3CIdfvU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* StdCommonParams_get_UasUserID_m6A4DE2B299022D7DBCEA6EE055C717E59BE2B32C_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) 
{
	{
		// internal string UasUserID { get; set; }
		String_t* L_0 = __this->___U3CUasUserIDU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* StdCommonParams_get_BuildGuuid_m706EB59064FA0D40D1C244514B2EA2995AE5706D_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) 
{
	{
		// internal string BuildGuuid { get; set; }
		String_t* L_0 = __this->___U3CBuildGuuidU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* StdCommonParams_get_ClientVersion_mA3D1574F4D14E5355C23D39AA130AB106960491D_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) 
{
	{
		// internal string ClientVersion { get; set; }
		String_t* L_0 = __this->___U3CClientVersionU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* StdCommonParams_get_UserCountry_mDDDF84AB7FC6D62ECBB642C7C7814D3143DAF0F9_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) 
{
	{
		// internal string UserCountry { get; set; }
		String_t* L_0 = __this->___U3CUserCountryU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 StdCommonParams_get_DeviceVolume_mD4CB9275283492DA050B8BDA949E1E38C35EB76C_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) 
{
	{
		// internal double? DeviceVolume { get; set; }
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_0 = __this->___U3CDeviceVolumeU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 StdCommonParams_get_BatteryLoad_mE5C6A63115E33A0FB67BA3BA7FF4CD98021A584A_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) 
{
	{
		// internal double? BatteryLoad { get; set; }
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_0 = __this->___U3CBatteryLoadU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* StdCommonParams_get_ProjectID_m48D1D967587EF2BB877AB287B6FD03531D3E3658_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) 
{
	{
		// internal string ProjectID { get; set; }
		String_t* L_0 = __this->___U3CProjectIDU3Ek__BackingField_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Min_mFEAD72DF4C4708B86BF464AB4F5F1468FAD8E784_inline (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___a0;
		int32_t L_1 = ___b1;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		int32_t L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConsentTracker_set_optOutConsentStatus_m4BAAF67518F147B7203463AD1557E2E14A795657_inline (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// internal ConsentStatus optOutConsentStatus { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CoptOutConsentStatusU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConsentTracker_set_optInPiplConsentStatus_m7121DEA6C7203C39DD740E00262387EF06B1C732_inline (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// internal ConsentStatus optInPiplConsentStatus { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CoptInPiplConsentStatusU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ConsentTracker_get_optInPiplConsentStatus_m1F91E59567043A5429228EFBA83709725EB53A34_inline (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, const RuntimeMethod* method) 
{
	{
		// internal ConsentStatus optInPiplConsentStatus { get; set; }
		int32_t L_0 = __this->___U3CoptInPiplConsentStatusU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ConsentTracker_get_optOutConsentStatus_mA1EB68620CB4A25DD2739C48F607DFE18924D415_inline (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, const RuntimeMethod* method) 
{
	{
		// internal ConsentStatus optOutConsentStatus { get; set; }
		int32_t L_0 = __this->___U3CoptOutConsentStatusU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Dispatcher_get_FlushInProgress_mCC5DAEE29D9E97D753FE7B2C876FC7B9E3F50E28_inline (Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE* __this, const RuntimeMethod* method) 
{
	{
		// internal bool FlushInProgress { get; private set; }
		bool L_0 = __this->___U3CFlushInProgressU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Dispatcher_set_FlushInProgress_mE7F87C33DBBF7012A706047DC2336D3B6EF9391E_inline (Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// internal bool FlushInProgress { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CFlushInProgressU3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Dispatcher_set_ConsecutiveFailedUploadCount_m9EECD2DEB2695DBCF973D907662ED7D6140C9469_inline (Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int ConsecutiveFailedUploadCount { get; private set; }
		int32_t L_0 = ___value0;
		__this->___U3CConsecutiveFailedUploadCountU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Dispatcher_get_ConsecutiveFailedUploadCount_m58D2668BE9E8194349A99CA67BB8583F09DE7C07_inline (Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE* __this, const RuntimeMethod* method) 
{
	{
		// public int ConsecutiveFailedUploadCount { get; private set; }
		int32_t L_0 = __this->___U3CConsecutiveFailedUploadCountU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* UnityWebRequestAsyncOperation_get_webRequest_mF67D15420C7C1C4DCA1BD6F839048A0542998BC3_inline (UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* __this, const RuntimeMethod* method) 
{
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0 = __this->___U3CwebRequestU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_gshared_inline (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_gshared_inline (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = (float)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_gshared_inline (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_gshared_inline (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___item0, const RuntimeMethod* method) 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (int32_t)L_8);
		return;
	}

IL_0034:
	{
		int32_t L_9 = ___item0;
		((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!false)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mE4800C6D733A4CDE721FD3D8B4E95319B5C64E9E_gshared_inline (Action_1_tBB5A52E9AEFBC4F0C8D94D39CAD16BCB6B8B5929* __this, int64_t ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int64_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
