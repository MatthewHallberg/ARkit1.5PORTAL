#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// Utils.serializableUnityARFaceAnchor
struct serializableUnityARFaceAnchor_t2162490026;
// Utils.serializableUnityARMatrix4x4
struct serializableUnityARMatrix4x4_t78255337;
// Utils.serializableFaceGeometry
struct serializableFaceGeometry_t157334219;
// System.Collections.Generic.Dictionary`2<System.String,System.Single>
struct Dictionary_2_t1182523073;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// UnityEngine.XR.iOS.ARFaceAnchor
struct ARFaceAnchor_t1844206636;
// UnityEngine.XR.iOS.ARFaceGeometry
struct ARFaceGeometry_t5139606;
// System.Text.Encoding
struct Encoding_t1523322056;
// System.String
struct String_t;
// Utils.serializableUnityARLightData
struct serializableUnityARLightData_t3935513283;
// Utils.serializableSHC
struct serializableSHC_t2667429767;
// System.Single[]
struct SingleU5BU5D_t1444911251;
// Utils.SerializableVector4
struct SerializableVector4_t1862640084;
// UnityEngine.XR.iOS.UnityARDirectionalLightEstimate
struct UnityARDirectionalLightEstimate_t2924556994;
// Utils.serializableUnityARPlaneAnchor
struct serializableUnityARPlaneAnchor_t1446774435;
// Utils.serializablePlaneGeometry
struct serializablePlaneGeometry_t3680333341;
// UnityEngine.XR.iOS.ARPlaneAnchor
struct ARPlaneAnchor_t2049372221;
// UnityEngine.XR.iOS.ARPlaneGeometry
struct ARPlaneGeometry_t1169415986;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// VideoFormatButton
struct VideoFormatButton_t1937817916;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// VideoFormatButton/VideoFormatButtonPressed
struct VideoFormatButtonPressed_t1187798507;
// System.Delegate
struct Delegate_t1188392813;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// VideoFormatsExample
struct VideoFormatsExample_t2303262312;
// System.Collections.Generic.List`1<UnityEngine.XR.iOS.UnityARVideoFormat>
struct List_1_t3416529523;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.Transform
struct Transform_t3600365921;
// UnityEngine.Object
struct Object_t631007953;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface
struct UnityARSessionNativeInterface_t3929719369;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Text.DecoderFallback
struct DecoderFallback_t3123823036;
// System.Text.EncoderFallback
struct EncoderFallback_t1188251036;
// System.Reflection.Assembly
struct Assembly_t;
// UnityEngine.XR.iOS.UnityARVideoFormat[]
struct UnityARVideoFormatU5BU5D_t3086264048;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t964245573;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t3954782707;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Single,System.Collections.DictionaryEntry>
struct Transform_1_t295322967;
// System.Void
struct Void_t1185182177;
// UnityEngine.XR.iOS.VideoFormatEnumerator
struct VideoFormatEnumerator_t3131638505;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761;
// UnityEngine.XR.iOS.ARFaceAnchor/DictionaryVisitorHandler
struct DictionaryVisitorHandler_t414487210;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFrameUpdate
struct ARFrameUpdate_t1157215840;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorAdded
struct ARAnchorAdded_t1608557165;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorUpdated
struct ARAnchorUpdated_t3113222537;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorRemoved
struct ARAnchorRemoved_t4030593004;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorAdded
struct ARUserAnchorAdded_t1851120876;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorUpdated
struct ARUserAnchorUpdated_t4007601678;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorRemoved
struct ARUserAnchorRemoved_t23344545;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFaceAnchorAdded
struct ARFaceAnchorAdded_t3526051790;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFaceAnchorUpdated
struct ARFaceAnchorUpdated_t3258688950;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFaceAnchorRemoved
struct ARFaceAnchorRemoved_t2550278937;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARImageAnchorAdded
struct ARImageAnchorAdded_t763367172;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARImageAnchorUpdated
struct ARImageAnchorUpdated_t1988379239;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARImageAnchorRemoved
struct ARImageAnchorRemoved_t841752569;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionFailed
struct ARSessionFailed_t2125002991;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionCallback
struct ARSessionCallback_t3772093212;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionTrackingChanged
struct ARSessionTrackingChanged_t923029411;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFrameUpdate
struct internal_ARFrameUpdate_t3254989823;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionLocalizeCallback
struct ARSessionLocalizeCallback_t3284060032;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARSessionTrackingChanged
struct internal_ARSessionTrackingChanged_t1988849735;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorAdded
struct internal_ARAnchorAdded_t1565083332;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorUpdated
struct internal_ARAnchorUpdated_t2645242205;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorRemoved
struct internal_ARAnchorRemoved_t3371657877;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorAdded
struct internal_ARUserAnchorAdded_t3285282493;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorUpdated
struct internal_ARUserAnchorUpdated_t3964727538;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorRemoved
struct internal_ARUserAnchorRemoved_t386858594;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFaceAnchorAdded
struct internal_ARFaceAnchorAdded_t1021040265;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFaceAnchorUpdated
struct internal_ARFaceAnchorUpdated_t3423900432;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFaceAnchorRemoved
struct internal_ARFaceAnchorRemoved_t2563439402;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARImageAnchorAdded
struct internal_ARImageAnchorAdded_t958088978;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARImageAnchorUpdated
struct internal_ARImageAnchorUpdated_t294417830;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARImageAnchorRemoved
struct internal_ARImageAnchorRemoved_t1751104571;
// UnityEngine.UI.Text
struct Text_t1901882714;
// UnityEngine.Material
struct Material_t340375123;
// UnityEngine.Texture2D
struct Texture2D_t3840446185;
// UnityEngine.RectTransform
struct RectTransform_t3704657025;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_t2598313366;
// UnityEngine.Canvas
struct Canvas_t3310196443;
// UnityEngine.Events.UnityAction
struct UnityAction_t3245792599;
// UnityEngine.Mesh
struct Mesh_t3648964284;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t2453304189;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t3055525458;
// UnityEngine.UI.RectMask2D
struct RectMask2D_t3474889437;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t3661388177;
// UnityEngine.UI.FontData
struct FontData_t746620069;
// UnityEngine.TextGenerator
struct TextGenerator_t3211863866;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t1981460040;

extern RuntimeClass* Encoding_t1523322056_il2cpp_TypeInfo_var;
extern RuntimeClass* serializableUnityARFaceAnchor_t2162490026_il2cpp_TypeInfo_var;
extern const uint32_t serializableUnityARFaceAnchor_op_Implicit_m725494585_MetadataUsageId;
extern RuntimeClass* SerializableVector4_t1862640084_il2cpp_TypeInfo_var;
extern const uint32_t serializableUnityARLightData__ctor_m2554290283_MetadataUsageId;
extern RuntimeClass* serializableUnityARLightData_t3935513283_il2cpp_TypeInfo_var;
extern const uint32_t serializableUnityARLightData_op_Implicit_m1050232524_MetadataUsageId;
extern RuntimeClass* UnityARDirectionalLightEstimate_t2924556994_il2cpp_TypeInfo_var;
extern const uint32_t serializableUnityARLightData_op_Implicit_m3789143495_MetadataUsageId;
extern RuntimeClass* serializableUnityARMatrix4x4_t78255337_il2cpp_TypeInfo_var;
extern const uint32_t serializableUnityARMatrix4x4_op_Implicit_m3630501456_MetadataUsageId;
extern const uint32_t serializableUnityARMatrix4x4_op_Implicit_m3556108972_MetadataUsageId;
extern RuntimeClass* serializableUnityARPlaneAnchor_t1446774435_il2cpp_TypeInfo_var;
extern const uint32_t serializableUnityARPlaneAnchor_op_Implicit_m57666075_MetadataUsageId;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern RuntimeClass* Single_t1397266774_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1432570861;
extern const uint32_t SerializableVector4_ToString_m70901593_MetadataUsageId;
extern const uint32_t SerializableVector4_op_Implicit_m14360340_MetadataUsageId;
extern RuntimeClass* VideoFormatButton_t1937817916_il2cpp_TypeInfo_var;
extern RuntimeClass* VideoFormatButtonPressed_t1187798507_il2cpp_TypeInfo_var;
extern const uint32_t VideoFormatButton_add_FormatButtonPressedEvent_m1863116585_MetadataUsageId;
extern const uint32_t VideoFormatButton_remove_FormatButtonPressedEvent_m3255418780_MetadataUsageId;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral51204818;
extern String_t* _stringLiteral3452614616;
extern String_t* _stringLiteral1652116954;
extern const uint32_t VideoFormatButton_Populate_m915370135_MetadataUsageId;
extern const uint32_t VideoFormatButton_ButtonPressed_m1715857364_MetadataUsageId;
extern RuntimeClass* UnityARVideoFormat_t1944454781_il2cpp_TypeInfo_var;
extern const uint32_t VideoFormatButtonPressed_BeginInvoke_m3331672980_MetadataUsageId;
extern const RuntimeMethod* VideoFormatsExample_ExampletButtonPressed_m2588664126_RuntimeMethod_var;
extern const uint32_t VideoFormatsExample_Start_m1615238214_MetadataUsageId;
extern const uint32_t VideoFormatsExample_OnDestroy_m541603283_MetadataUsageId;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1_GetEnumerator_m3413760873_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m3655906576_RuntimeMethod_var;
extern const RuntimeMethod* Object_Instantiate_TisGameObject_t1113636619_m3215236302_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisVideoFormatButton_t1937817916_m1994409976_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m2987439075_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m510309855_RuntimeMethod_var;
extern const uint32_t VideoFormatsExample_PopulateVideoFormatButtons_m595526008_MetadataUsageId;
extern RuntimeClass* UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var;
extern const uint32_t VideoFormatsExample_ExampletButtonPressed_m2588664126_MetadataUsageId;
struct Vector3_t3722313464 ;

struct ByteU5BU5D_t4116647657;
struct SingleU5BU5D_t1444911251;
struct ObjectU5BU5D_t2843939325;


#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef SERIALIZABLEVECTOR4_T1862640084_H
#define SERIALIZABLEVECTOR4_T1862640084_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Utils.SerializableVector4
struct  SerializableVector4_t1862640084  : public RuntimeObject
{
public:
	// System.Single Utils.SerializableVector4::x
	float ___x_0;
	// System.Single Utils.SerializableVector4::y
	float ___y_1;
	// System.Single Utils.SerializableVector4::z
	float ___z_2;
	// System.Single Utils.SerializableVector4::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(SerializableVector4_t1862640084, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(SerializableVector4_t1862640084, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(SerializableVector4_t1862640084, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(SerializableVector4_t1862640084, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLEVECTOR4_T1862640084_H
#ifndef SERIALIZABLEPLANEGEOMETRY_T3680333341_H
#define SERIALIZABLEPLANEGEOMETRY_T3680333341_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Utils.serializablePlaneGeometry
struct  serializablePlaneGeometry_t3680333341  : public RuntimeObject
{
public:
	// System.Byte[] Utils.serializablePlaneGeometry::vertices
	ByteU5BU5D_t4116647657* ___vertices_0;
	// System.Byte[] Utils.serializablePlaneGeometry::texCoords
	ByteU5BU5D_t4116647657* ___texCoords_1;
	// System.Byte[] Utils.serializablePlaneGeometry::triIndices
	ByteU5BU5D_t4116647657* ___triIndices_2;
	// System.Byte[] Utils.serializablePlaneGeometry::boundaryVertices
	ByteU5BU5D_t4116647657* ___boundaryVertices_3;

public:
	inline static int32_t get_offset_of_vertices_0() { return static_cast<int32_t>(offsetof(serializablePlaneGeometry_t3680333341, ___vertices_0)); }
	inline ByteU5BU5D_t4116647657* get_vertices_0() const { return ___vertices_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_vertices_0() { return &___vertices_0; }
	inline void set_vertices_0(ByteU5BU5D_t4116647657* value)
	{
		___vertices_0 = value;
		Il2CppCodeGenWriteBarrier((&___vertices_0), value);
	}

	inline static int32_t get_offset_of_texCoords_1() { return static_cast<int32_t>(offsetof(serializablePlaneGeometry_t3680333341, ___texCoords_1)); }
	inline ByteU5BU5D_t4116647657* get_texCoords_1() const { return ___texCoords_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_texCoords_1() { return &___texCoords_1; }
	inline void set_texCoords_1(ByteU5BU5D_t4116647657* value)
	{
		___texCoords_1 = value;
		Il2CppCodeGenWriteBarrier((&___texCoords_1), value);
	}

	inline static int32_t get_offset_of_triIndices_2() { return static_cast<int32_t>(offsetof(serializablePlaneGeometry_t3680333341, ___triIndices_2)); }
	inline ByteU5BU5D_t4116647657* get_triIndices_2() const { return ___triIndices_2; }
	inline ByteU5BU5D_t4116647657** get_address_of_triIndices_2() { return &___triIndices_2; }
	inline void set_triIndices_2(ByteU5BU5D_t4116647657* value)
	{
		___triIndices_2 = value;
		Il2CppCodeGenWriteBarrier((&___triIndices_2), value);
	}

	inline static int32_t get_offset_of_boundaryVertices_3() { return static_cast<int32_t>(offsetof(serializablePlaneGeometry_t3680333341, ___boundaryVertices_3)); }
	inline ByteU5BU5D_t4116647657* get_boundaryVertices_3() const { return ___boundaryVertices_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_boundaryVertices_3() { return &___boundaryVertices_3; }
	inline void set_boundaryVertices_3(ByteU5BU5D_t4116647657* value)
	{
		___boundaryVertices_3 = value;
		Il2CppCodeGenWriteBarrier((&___boundaryVertices_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLEPLANEGEOMETRY_T3680333341_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef ENCODING_T1523322056_H
#define ENCODING_T1523322056_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Encoding
struct  Encoding_t1523322056  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::codePage
	int32_t ___codePage_0;
	// System.Int32 System.Text.Encoding::windows_code_page
	int32_t ___windows_code_page_1;
	// System.Boolean System.Text.Encoding::is_readonly
	bool ___is_readonly_2;
	// System.Text.DecoderFallback System.Text.Encoding::decoder_fallback
	DecoderFallback_t3123823036 * ___decoder_fallback_3;
	// System.Text.EncoderFallback System.Text.Encoding::encoder_fallback
	EncoderFallback_t1188251036 * ___encoder_fallback_4;
	// System.String System.Text.Encoding::body_name
	String_t* ___body_name_8;
	// System.String System.Text.Encoding::encoding_name
	String_t* ___encoding_name_9;
	// System.String System.Text.Encoding::header_name
	String_t* ___header_name_10;
	// System.Boolean System.Text.Encoding::is_mail_news_display
	bool ___is_mail_news_display_11;
	// System.Boolean System.Text.Encoding::is_mail_news_save
	bool ___is_mail_news_save_12;
	// System.Boolean System.Text.Encoding::is_browser_save
	bool ___is_browser_save_13;
	// System.Boolean System.Text.Encoding::is_browser_display
	bool ___is_browser_display_14;
	// System.String System.Text.Encoding::web_name
	String_t* ___web_name_15;

public:
	inline static int32_t get_offset_of_codePage_0() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___codePage_0)); }
	inline int32_t get_codePage_0() const { return ___codePage_0; }
	inline int32_t* get_address_of_codePage_0() { return &___codePage_0; }
	inline void set_codePage_0(int32_t value)
	{
		___codePage_0 = value;
	}

	inline static int32_t get_offset_of_windows_code_page_1() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___windows_code_page_1)); }
	inline int32_t get_windows_code_page_1() const { return ___windows_code_page_1; }
	inline int32_t* get_address_of_windows_code_page_1() { return &___windows_code_page_1; }
	inline void set_windows_code_page_1(int32_t value)
	{
		___windows_code_page_1 = value;
	}

	inline static int32_t get_offset_of_is_readonly_2() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_readonly_2)); }
	inline bool get_is_readonly_2() const { return ___is_readonly_2; }
	inline bool* get_address_of_is_readonly_2() { return &___is_readonly_2; }
	inline void set_is_readonly_2(bool value)
	{
		___is_readonly_2 = value;
	}

	inline static int32_t get_offset_of_decoder_fallback_3() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___decoder_fallback_3)); }
	inline DecoderFallback_t3123823036 * get_decoder_fallback_3() const { return ___decoder_fallback_3; }
	inline DecoderFallback_t3123823036 ** get_address_of_decoder_fallback_3() { return &___decoder_fallback_3; }
	inline void set_decoder_fallback_3(DecoderFallback_t3123823036 * value)
	{
		___decoder_fallback_3 = value;
		Il2CppCodeGenWriteBarrier((&___decoder_fallback_3), value);
	}

	inline static int32_t get_offset_of_encoder_fallback_4() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___encoder_fallback_4)); }
	inline EncoderFallback_t1188251036 * get_encoder_fallback_4() const { return ___encoder_fallback_4; }
	inline EncoderFallback_t1188251036 ** get_address_of_encoder_fallback_4() { return &___encoder_fallback_4; }
	inline void set_encoder_fallback_4(EncoderFallback_t1188251036 * value)
	{
		___encoder_fallback_4 = value;
		Il2CppCodeGenWriteBarrier((&___encoder_fallback_4), value);
	}

	inline static int32_t get_offset_of_body_name_8() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___body_name_8)); }
	inline String_t* get_body_name_8() const { return ___body_name_8; }
	inline String_t** get_address_of_body_name_8() { return &___body_name_8; }
	inline void set_body_name_8(String_t* value)
	{
		___body_name_8 = value;
		Il2CppCodeGenWriteBarrier((&___body_name_8), value);
	}

	inline static int32_t get_offset_of_encoding_name_9() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___encoding_name_9)); }
	inline String_t* get_encoding_name_9() const { return ___encoding_name_9; }
	inline String_t** get_address_of_encoding_name_9() { return &___encoding_name_9; }
	inline void set_encoding_name_9(String_t* value)
	{
		___encoding_name_9 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_name_9), value);
	}

	inline static int32_t get_offset_of_header_name_10() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___header_name_10)); }
	inline String_t* get_header_name_10() const { return ___header_name_10; }
	inline String_t** get_address_of_header_name_10() { return &___header_name_10; }
	inline void set_header_name_10(String_t* value)
	{
		___header_name_10 = value;
		Il2CppCodeGenWriteBarrier((&___header_name_10), value);
	}

	inline static int32_t get_offset_of_is_mail_news_display_11() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_mail_news_display_11)); }
	inline bool get_is_mail_news_display_11() const { return ___is_mail_news_display_11; }
	inline bool* get_address_of_is_mail_news_display_11() { return &___is_mail_news_display_11; }
	inline void set_is_mail_news_display_11(bool value)
	{
		___is_mail_news_display_11 = value;
	}

	inline static int32_t get_offset_of_is_mail_news_save_12() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_mail_news_save_12)); }
	inline bool get_is_mail_news_save_12() const { return ___is_mail_news_save_12; }
	inline bool* get_address_of_is_mail_news_save_12() { return &___is_mail_news_save_12; }
	inline void set_is_mail_news_save_12(bool value)
	{
		___is_mail_news_save_12 = value;
	}

	inline static int32_t get_offset_of_is_browser_save_13() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_browser_save_13)); }
	inline bool get_is_browser_save_13() const { return ___is_browser_save_13; }
	inline bool* get_address_of_is_browser_save_13() { return &___is_browser_save_13; }
	inline void set_is_browser_save_13(bool value)
	{
		___is_browser_save_13 = value;
	}

	inline static int32_t get_offset_of_is_browser_display_14() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_browser_display_14)); }
	inline bool get_is_browser_display_14() const { return ___is_browser_display_14; }
	inline bool* get_address_of_is_browser_display_14() { return &___is_browser_display_14; }
	inline void set_is_browser_display_14(bool value)
	{
		___is_browser_display_14 = value;
	}

	inline static int32_t get_offset_of_web_name_15() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___web_name_15)); }
	inline String_t* get_web_name_15() const { return ___web_name_15; }
	inline String_t** get_address_of_web_name_15() { return &___web_name_15; }
	inline void set_web_name_15(String_t* value)
	{
		___web_name_15 = value;
		Il2CppCodeGenWriteBarrier((&___web_name_15), value);
	}
};

struct Encoding_t1523322056_StaticFields
{
public:
	// System.Reflection.Assembly System.Text.Encoding::i18nAssembly
	Assembly_t * ___i18nAssembly_5;
	// System.Boolean System.Text.Encoding::i18nDisabled
	bool ___i18nDisabled_6;
	// System.Object[] System.Text.Encoding::encodings
	ObjectU5BU5D_t2843939325* ___encodings_7;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t1523322056 * ___asciiEncoding_16;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianEncoding
	Encoding_t1523322056 * ___bigEndianEncoding_17;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t1523322056 * ___defaultEncoding_18;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t1523322056 * ___utf7Encoding_19;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingWithMarkers
	Encoding_t1523322056 * ___utf8EncodingWithMarkers_20;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingWithoutMarkers
	Encoding_t1523322056 * ___utf8EncodingWithoutMarkers_21;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t1523322056 * ___unicodeEncoding_22;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::isoLatin1Encoding
	Encoding_t1523322056 * ___isoLatin1Encoding_23;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingUnsafe
	Encoding_t1523322056 * ___utf8EncodingUnsafe_24;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t1523322056 * ___utf32Encoding_25;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUTF32Encoding
	Encoding_t1523322056 * ___bigEndianUTF32Encoding_26;
	// System.Object System.Text.Encoding::lockobj
	RuntimeObject * ___lockobj_27;

public:
	inline static int32_t get_offset_of_i18nAssembly_5() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___i18nAssembly_5)); }
	inline Assembly_t * get_i18nAssembly_5() const { return ___i18nAssembly_5; }
	inline Assembly_t ** get_address_of_i18nAssembly_5() { return &___i18nAssembly_5; }
	inline void set_i18nAssembly_5(Assembly_t * value)
	{
		___i18nAssembly_5 = value;
		Il2CppCodeGenWriteBarrier((&___i18nAssembly_5), value);
	}

	inline static int32_t get_offset_of_i18nDisabled_6() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___i18nDisabled_6)); }
	inline bool get_i18nDisabled_6() const { return ___i18nDisabled_6; }
	inline bool* get_address_of_i18nDisabled_6() { return &___i18nDisabled_6; }
	inline void set_i18nDisabled_6(bool value)
	{
		___i18nDisabled_6 = value;
	}

	inline static int32_t get_offset_of_encodings_7() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___encodings_7)); }
	inline ObjectU5BU5D_t2843939325* get_encodings_7() const { return ___encodings_7; }
	inline ObjectU5BU5D_t2843939325** get_address_of_encodings_7() { return &___encodings_7; }
	inline void set_encodings_7(ObjectU5BU5D_t2843939325* value)
	{
		___encodings_7 = value;
		Il2CppCodeGenWriteBarrier((&___encodings_7), value);
	}

	inline static int32_t get_offset_of_asciiEncoding_16() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___asciiEncoding_16)); }
	inline Encoding_t1523322056 * get_asciiEncoding_16() const { return ___asciiEncoding_16; }
	inline Encoding_t1523322056 ** get_address_of_asciiEncoding_16() { return &___asciiEncoding_16; }
	inline void set_asciiEncoding_16(Encoding_t1523322056 * value)
	{
		___asciiEncoding_16 = value;
		Il2CppCodeGenWriteBarrier((&___asciiEncoding_16), value);
	}

	inline static int32_t get_offset_of_bigEndianEncoding_17() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___bigEndianEncoding_17)); }
	inline Encoding_t1523322056 * get_bigEndianEncoding_17() const { return ___bigEndianEncoding_17; }
	inline Encoding_t1523322056 ** get_address_of_bigEndianEncoding_17() { return &___bigEndianEncoding_17; }
	inline void set_bigEndianEncoding_17(Encoding_t1523322056 * value)
	{
		___bigEndianEncoding_17 = value;
		Il2CppCodeGenWriteBarrier((&___bigEndianEncoding_17), value);
	}

	inline static int32_t get_offset_of_defaultEncoding_18() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___defaultEncoding_18)); }
	inline Encoding_t1523322056 * get_defaultEncoding_18() const { return ___defaultEncoding_18; }
	inline Encoding_t1523322056 ** get_address_of_defaultEncoding_18() { return &___defaultEncoding_18; }
	inline void set_defaultEncoding_18(Encoding_t1523322056 * value)
	{
		___defaultEncoding_18 = value;
		Il2CppCodeGenWriteBarrier((&___defaultEncoding_18), value);
	}

	inline static int32_t get_offset_of_utf7Encoding_19() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf7Encoding_19)); }
	inline Encoding_t1523322056 * get_utf7Encoding_19() const { return ___utf7Encoding_19; }
	inline Encoding_t1523322056 ** get_address_of_utf7Encoding_19() { return &___utf7Encoding_19; }
	inline void set_utf7Encoding_19(Encoding_t1523322056 * value)
	{
		___utf7Encoding_19 = value;
		Il2CppCodeGenWriteBarrier((&___utf7Encoding_19), value);
	}

	inline static int32_t get_offset_of_utf8EncodingWithMarkers_20() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf8EncodingWithMarkers_20)); }
	inline Encoding_t1523322056 * get_utf8EncodingWithMarkers_20() const { return ___utf8EncodingWithMarkers_20; }
	inline Encoding_t1523322056 ** get_address_of_utf8EncodingWithMarkers_20() { return &___utf8EncodingWithMarkers_20; }
	inline void set_utf8EncodingWithMarkers_20(Encoding_t1523322056 * value)
	{
		___utf8EncodingWithMarkers_20 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingWithMarkers_20), value);
	}

	inline static int32_t get_offset_of_utf8EncodingWithoutMarkers_21() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf8EncodingWithoutMarkers_21)); }
	inline Encoding_t1523322056 * get_utf8EncodingWithoutMarkers_21() const { return ___utf8EncodingWithoutMarkers_21; }
	inline Encoding_t1523322056 ** get_address_of_utf8EncodingWithoutMarkers_21() { return &___utf8EncodingWithoutMarkers_21; }
	inline void set_utf8EncodingWithoutMarkers_21(Encoding_t1523322056 * value)
	{
		___utf8EncodingWithoutMarkers_21 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingWithoutMarkers_21), value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_22() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___unicodeEncoding_22)); }
	inline Encoding_t1523322056 * get_unicodeEncoding_22() const { return ___unicodeEncoding_22; }
	inline Encoding_t1523322056 ** get_address_of_unicodeEncoding_22() { return &___unicodeEncoding_22; }
	inline void set_unicodeEncoding_22(Encoding_t1523322056 * value)
	{
		___unicodeEncoding_22 = value;
		Il2CppCodeGenWriteBarrier((&___unicodeEncoding_22), value);
	}

	inline static int32_t get_offset_of_isoLatin1Encoding_23() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___isoLatin1Encoding_23)); }
	inline Encoding_t1523322056 * get_isoLatin1Encoding_23() const { return ___isoLatin1Encoding_23; }
	inline Encoding_t1523322056 ** get_address_of_isoLatin1Encoding_23() { return &___isoLatin1Encoding_23; }
	inline void set_isoLatin1Encoding_23(Encoding_t1523322056 * value)
	{
		___isoLatin1Encoding_23 = value;
		Il2CppCodeGenWriteBarrier((&___isoLatin1Encoding_23), value);
	}

	inline static int32_t get_offset_of_utf8EncodingUnsafe_24() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf8EncodingUnsafe_24)); }
	inline Encoding_t1523322056 * get_utf8EncodingUnsafe_24() const { return ___utf8EncodingUnsafe_24; }
	inline Encoding_t1523322056 ** get_address_of_utf8EncodingUnsafe_24() { return &___utf8EncodingUnsafe_24; }
	inline void set_utf8EncodingUnsafe_24(Encoding_t1523322056 * value)
	{
		___utf8EncodingUnsafe_24 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingUnsafe_24), value);
	}

	inline static int32_t get_offset_of_utf32Encoding_25() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf32Encoding_25)); }
	inline Encoding_t1523322056 * get_utf32Encoding_25() const { return ___utf32Encoding_25; }
	inline Encoding_t1523322056 ** get_address_of_utf32Encoding_25() { return &___utf32Encoding_25; }
	inline void set_utf32Encoding_25(Encoding_t1523322056 * value)
	{
		___utf32Encoding_25 = value;
		Il2CppCodeGenWriteBarrier((&___utf32Encoding_25), value);
	}

	inline static int32_t get_offset_of_bigEndianUTF32Encoding_26() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___bigEndianUTF32Encoding_26)); }
	inline Encoding_t1523322056 * get_bigEndianUTF32Encoding_26() const { return ___bigEndianUTF32Encoding_26; }
	inline Encoding_t1523322056 ** get_address_of_bigEndianUTF32Encoding_26() { return &___bigEndianUTF32Encoding_26; }
	inline void set_bigEndianUTF32Encoding_26(Encoding_t1523322056 * value)
	{
		___bigEndianUTF32Encoding_26 = value;
		Il2CppCodeGenWriteBarrier((&___bigEndianUTF32Encoding_26), value);
	}

	inline static int32_t get_offset_of_lockobj_27() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___lockobj_27)); }
	inline RuntimeObject * get_lockobj_27() const { return ___lockobj_27; }
	inline RuntimeObject ** get_address_of_lockobj_27() { return &___lockobj_27; }
	inline void set_lockobj_27(RuntimeObject * value)
	{
		___lockobj_27 = value;
		Il2CppCodeGenWriteBarrier((&___lockobj_27), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODING_T1523322056_H
#ifndef LIST_1_T3416529523_H
#define LIST_1_T3416529523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.XR.iOS.UnityARVideoFormat>
struct  List_1_t3416529523  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	UnityARVideoFormatU5BU5D_t3086264048* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3416529523, ____items_1)); }
	inline UnityARVideoFormatU5BU5D_t3086264048* get__items_1() const { return ____items_1; }
	inline UnityARVideoFormatU5BU5D_t3086264048** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(UnityARVideoFormatU5BU5D_t3086264048* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3416529523, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3416529523, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t3416529523_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	UnityARVideoFormatU5BU5D_t3086264048* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3416529523_StaticFields, ___EmptyArray_4)); }
	inline UnityARVideoFormatU5BU5D_t3086264048* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline UnityARVideoFormatU5BU5D_t3086264048** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(UnityARVideoFormatU5BU5D_t3086264048* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3416529523_H
#ifndef SERIALIZABLEUNITYARFACEANCHOR_T2162490026_H
#define SERIALIZABLEUNITYARFACEANCHOR_T2162490026_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Utils.serializableUnityARFaceAnchor
struct  serializableUnityARFaceAnchor_t2162490026  : public RuntimeObject
{
public:
	// Utils.serializableUnityARMatrix4x4 Utils.serializableUnityARFaceAnchor::worldTransform
	serializableUnityARMatrix4x4_t78255337 * ___worldTransform_0;
	// Utils.serializableFaceGeometry Utils.serializableUnityARFaceAnchor::faceGeometry
	serializableFaceGeometry_t157334219 * ___faceGeometry_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.Single> Utils.serializableUnityARFaceAnchor::arBlendShapes
	Dictionary_2_t1182523073 * ___arBlendShapes_2;
	// System.Byte[] Utils.serializableUnityARFaceAnchor::identifierStr
	ByteU5BU5D_t4116647657* ___identifierStr_3;

public:
	inline static int32_t get_offset_of_worldTransform_0() { return static_cast<int32_t>(offsetof(serializableUnityARFaceAnchor_t2162490026, ___worldTransform_0)); }
	inline serializableUnityARMatrix4x4_t78255337 * get_worldTransform_0() const { return ___worldTransform_0; }
	inline serializableUnityARMatrix4x4_t78255337 ** get_address_of_worldTransform_0() { return &___worldTransform_0; }
	inline void set_worldTransform_0(serializableUnityARMatrix4x4_t78255337 * value)
	{
		___worldTransform_0 = value;
		Il2CppCodeGenWriteBarrier((&___worldTransform_0), value);
	}

	inline static int32_t get_offset_of_faceGeometry_1() { return static_cast<int32_t>(offsetof(serializableUnityARFaceAnchor_t2162490026, ___faceGeometry_1)); }
	inline serializableFaceGeometry_t157334219 * get_faceGeometry_1() const { return ___faceGeometry_1; }
	inline serializableFaceGeometry_t157334219 ** get_address_of_faceGeometry_1() { return &___faceGeometry_1; }
	inline void set_faceGeometry_1(serializableFaceGeometry_t157334219 * value)
	{
		___faceGeometry_1 = value;
		Il2CppCodeGenWriteBarrier((&___faceGeometry_1), value);
	}

	inline static int32_t get_offset_of_arBlendShapes_2() { return static_cast<int32_t>(offsetof(serializableUnityARFaceAnchor_t2162490026, ___arBlendShapes_2)); }
	inline Dictionary_2_t1182523073 * get_arBlendShapes_2() const { return ___arBlendShapes_2; }
	inline Dictionary_2_t1182523073 ** get_address_of_arBlendShapes_2() { return &___arBlendShapes_2; }
	inline void set_arBlendShapes_2(Dictionary_2_t1182523073 * value)
	{
		___arBlendShapes_2 = value;
		Il2CppCodeGenWriteBarrier((&___arBlendShapes_2), value);
	}

	inline static int32_t get_offset_of_identifierStr_3() { return static_cast<int32_t>(offsetof(serializableUnityARFaceAnchor_t2162490026, ___identifierStr_3)); }
	inline ByteU5BU5D_t4116647657* get_identifierStr_3() const { return ___identifierStr_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_identifierStr_3() { return &___identifierStr_3; }
	inline void set_identifierStr_3(ByteU5BU5D_t4116647657* value)
	{
		___identifierStr_3 = value;
		Il2CppCodeGenWriteBarrier((&___identifierStr_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLEUNITYARFACEANCHOR_T2162490026_H
#ifndef SERIALIZABLEUNITYARMATRIX4X4_T78255337_H
#define SERIALIZABLEUNITYARMATRIX4X4_T78255337_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Utils.serializableUnityARMatrix4x4
struct  serializableUnityARMatrix4x4_t78255337  : public RuntimeObject
{
public:
	// Utils.SerializableVector4 Utils.serializableUnityARMatrix4x4::column0
	SerializableVector4_t1862640084 * ___column0_0;
	// Utils.SerializableVector4 Utils.serializableUnityARMatrix4x4::column1
	SerializableVector4_t1862640084 * ___column1_1;
	// Utils.SerializableVector4 Utils.serializableUnityARMatrix4x4::column2
	SerializableVector4_t1862640084 * ___column2_2;
	// Utils.SerializableVector4 Utils.serializableUnityARMatrix4x4::column3
	SerializableVector4_t1862640084 * ___column3_3;

public:
	inline static int32_t get_offset_of_column0_0() { return static_cast<int32_t>(offsetof(serializableUnityARMatrix4x4_t78255337, ___column0_0)); }
	inline SerializableVector4_t1862640084 * get_column0_0() const { return ___column0_0; }
	inline SerializableVector4_t1862640084 ** get_address_of_column0_0() { return &___column0_0; }
	inline void set_column0_0(SerializableVector4_t1862640084 * value)
	{
		___column0_0 = value;
		Il2CppCodeGenWriteBarrier((&___column0_0), value);
	}

	inline static int32_t get_offset_of_column1_1() { return static_cast<int32_t>(offsetof(serializableUnityARMatrix4x4_t78255337, ___column1_1)); }
	inline SerializableVector4_t1862640084 * get_column1_1() const { return ___column1_1; }
	inline SerializableVector4_t1862640084 ** get_address_of_column1_1() { return &___column1_1; }
	inline void set_column1_1(SerializableVector4_t1862640084 * value)
	{
		___column1_1 = value;
		Il2CppCodeGenWriteBarrier((&___column1_1), value);
	}

	inline static int32_t get_offset_of_column2_2() { return static_cast<int32_t>(offsetof(serializableUnityARMatrix4x4_t78255337, ___column2_2)); }
	inline SerializableVector4_t1862640084 * get_column2_2() const { return ___column2_2; }
	inline SerializableVector4_t1862640084 ** get_address_of_column2_2() { return &___column2_2; }
	inline void set_column2_2(SerializableVector4_t1862640084 * value)
	{
		___column2_2 = value;
		Il2CppCodeGenWriteBarrier((&___column2_2), value);
	}

	inline static int32_t get_offset_of_column3_3() { return static_cast<int32_t>(offsetof(serializableUnityARMatrix4x4_t78255337, ___column3_3)); }
	inline SerializableVector4_t1862640084 * get_column3_3() const { return ___column3_3; }
	inline SerializableVector4_t1862640084 ** get_address_of_column3_3() { return &___column3_3; }
	inline void set_column3_3(SerializableVector4_t1862640084 * value)
	{
		___column3_3 = value;
		Il2CppCodeGenWriteBarrier((&___column3_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLEUNITYARMATRIX4X4_T78255337_H
#ifndef SERIALIZABLEFACEGEOMETRY_T157334219_H
#define SERIALIZABLEFACEGEOMETRY_T157334219_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Utils.serializableFaceGeometry
struct  serializableFaceGeometry_t157334219  : public RuntimeObject
{
public:
	// System.Byte[] Utils.serializableFaceGeometry::vertices
	ByteU5BU5D_t4116647657* ___vertices_0;
	// System.Byte[] Utils.serializableFaceGeometry::texCoords
	ByteU5BU5D_t4116647657* ___texCoords_1;
	// System.Byte[] Utils.serializableFaceGeometry::triIndices
	ByteU5BU5D_t4116647657* ___triIndices_2;

public:
	inline static int32_t get_offset_of_vertices_0() { return static_cast<int32_t>(offsetof(serializableFaceGeometry_t157334219, ___vertices_0)); }
	inline ByteU5BU5D_t4116647657* get_vertices_0() const { return ___vertices_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_vertices_0() { return &___vertices_0; }
	inline void set_vertices_0(ByteU5BU5D_t4116647657* value)
	{
		___vertices_0 = value;
		Il2CppCodeGenWriteBarrier((&___vertices_0), value);
	}

	inline static int32_t get_offset_of_texCoords_1() { return static_cast<int32_t>(offsetof(serializableFaceGeometry_t157334219, ___texCoords_1)); }
	inline ByteU5BU5D_t4116647657* get_texCoords_1() const { return ___texCoords_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_texCoords_1() { return &___texCoords_1; }
	inline void set_texCoords_1(ByteU5BU5D_t4116647657* value)
	{
		___texCoords_1 = value;
		Il2CppCodeGenWriteBarrier((&___texCoords_1), value);
	}

	inline static int32_t get_offset_of_triIndices_2() { return static_cast<int32_t>(offsetof(serializableFaceGeometry_t157334219, ___triIndices_2)); }
	inline ByteU5BU5D_t4116647657* get_triIndices_2() const { return ___triIndices_2; }
	inline ByteU5BU5D_t4116647657** get_address_of_triIndices_2() { return &___triIndices_2; }
	inline void set_triIndices_2(ByteU5BU5D_t4116647657* value)
	{
		___triIndices_2 = value;
		Il2CppCodeGenWriteBarrier((&___triIndices_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLEFACEGEOMETRY_T157334219_H
#ifndef SERIALIZABLESHC_T2667429767_H
#define SERIALIZABLESHC_T2667429767_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Utils.serializableSHC
struct  serializableSHC_t2667429767  : public RuntimeObject
{
public:
	// System.Byte[] Utils.serializableSHC::shcData
	ByteU5BU5D_t4116647657* ___shcData_0;

public:
	inline static int32_t get_offset_of_shcData_0() { return static_cast<int32_t>(offsetof(serializableSHC_t2667429767, ___shcData_0)); }
	inline ByteU5BU5D_t4116647657* get_shcData_0() const { return ___shcData_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_shcData_0() { return &___shcData_0; }
	inline void set_shcData_0(ByteU5BU5D_t4116647657* value)
	{
		___shcData_0 = value;
		Il2CppCodeGenWriteBarrier((&___shcData_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLESHC_T2667429767_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef DICTIONARY_2_T1182523073_H
#define DICTIONARY_2_T1182523073_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.Single>
struct  Dictionary_2_t1182523073  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t1281789340* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	SingleU5BU5D_t1444911251* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t1182523073, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t1182523073, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t1182523073, ___keySlots_6)); }
	inline StringU5BU5D_t1281789340* get_keySlots_6() const { return ___keySlots_6; }
	inline StringU5BU5D_t1281789340** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(StringU5BU5D_t1281789340* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t1182523073, ___valueSlots_7)); }
	inline SingleU5BU5D_t1444911251* get_valueSlots_7() const { return ___valueSlots_7; }
	inline SingleU5BU5D_t1444911251** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(SingleU5BU5D_t1444911251* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t1182523073, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t1182523073, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t1182523073, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t1182523073, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t1182523073, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t1182523073, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t1182523073, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t1182523073_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t295322967 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t1182523073_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t295322967 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t295322967 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t295322967 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T1182523073_H
#ifndef UNITYARLIGHTESTIMATE_T1498306117_H
#define UNITYARLIGHTESTIMATE_T1498306117_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARLightEstimate
struct  UnityARLightEstimate_t1498306117 
{
public:
	// System.Single UnityEngine.XR.iOS.UnityARLightEstimate::ambientIntensity
	float ___ambientIntensity_0;
	// System.Single UnityEngine.XR.iOS.UnityARLightEstimate::ambientColorTemperature
	float ___ambientColorTemperature_1;

public:
	inline static int32_t get_offset_of_ambientIntensity_0() { return static_cast<int32_t>(offsetof(UnityARLightEstimate_t1498306117, ___ambientIntensity_0)); }
	inline float get_ambientIntensity_0() const { return ___ambientIntensity_0; }
	inline float* get_address_of_ambientIntensity_0() { return &___ambientIntensity_0; }
	inline void set_ambientIntensity_0(float value)
	{
		___ambientIntensity_0 = value;
	}

	inline static int32_t get_offset_of_ambientColorTemperature_1() { return static_cast<int32_t>(offsetof(UnityARLightEstimate_t1498306117, ___ambientColorTemperature_1)); }
	inline float get_ambientColorTemperature_1() const { return ___ambientColorTemperature_1; }
	inline float* get_address_of_ambientColorTemperature_1() { return &___ambientColorTemperature_1; }
	inline void set_ambientColorTemperature_1(float value)
	{
		___ambientColorTemperature_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARLIGHTESTIMATE_T1498306117_H
#ifndef VECTOR4_T3319028937_H
#define VECTOR4_T3319028937_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector4
struct  Vector4_t3319028937 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_t3319028937_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t3319028937  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t3319028937  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t3319028937  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t3319028937  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___zeroVector_5)); }
	inline Vector4_t3319028937  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_t3319028937 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_t3319028937  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___oneVector_6)); }
	inline Vector4_t3319028937  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_t3319028937 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_t3319028937  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_t3319028937  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_t3319028937 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_t3319028937  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_t3319028937  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_t3319028937 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_t3319028937  value)
	{
		___negativeInfinityVector_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR4_T3319028937_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef COLOR_T2555686324_H
#define COLOR_T2555686324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2555686324 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T2555686324_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef MATRIX4X4_T1817901843_H
#define MATRIX4X4_T1817901843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Matrix4x4
struct  Matrix4x4_t1817901843 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_t1817901843_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_t1817901843  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_t1817901843  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_t1817901843  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_t1817901843 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_t1817901843  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_t1817901843  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_t1817901843 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_t1817901843  value)
	{
		___identityMatrix_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATRIX4X4_T1817901843_H
#ifndef BYTE_T1134296376_H
#define BYTE_T1134296376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Byte
struct  Byte_t1134296376 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Byte_t1134296376, ___m_value_2)); }
	inline uint8_t get_m_value_2() const { return ___m_value_2; }
	inline uint8_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint8_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTE_T1134296376_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_4)); }
	inline Vector3_t3722313464  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t3722313464  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_5)); }
	inline Vector3_t3722313464  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t3722313464 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t3722313464  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_6)); }
	inline Vector3_t3722313464  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t3722313464 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t3722313464  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_7)); }
	inline Vector3_t3722313464  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t3722313464 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t3722313464  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_8)); }
	inline Vector3_t3722313464  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t3722313464 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t3722313464  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_9)); }
	inline Vector3_t3722313464  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t3722313464 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t3722313464  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_10)); }
	inline Vector3_t3722313464  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t3722313464  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_11)); }
	inline Vector3_t3722313464  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t3722313464 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t3722313464  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef UNITYVIDEOPARAMS_T4155354995_H
#define UNITYVIDEOPARAMS_T4155354995_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityVideoParams
struct  UnityVideoParams_t4155354995 
{
public:
	// System.Int32 UnityEngine.XR.iOS.UnityVideoParams::yWidth
	int32_t ___yWidth_0;
	// System.Int32 UnityEngine.XR.iOS.UnityVideoParams::yHeight
	int32_t ___yHeight_1;
	// System.Int32 UnityEngine.XR.iOS.UnityVideoParams::screenOrientation
	int32_t ___screenOrientation_2;
	// System.Single UnityEngine.XR.iOS.UnityVideoParams::texCoordScale
	float ___texCoordScale_3;
	// System.IntPtr UnityEngine.XR.iOS.UnityVideoParams::cvPixelBufferPtr
	intptr_t ___cvPixelBufferPtr_4;

public:
	inline static int32_t get_offset_of_yWidth_0() { return static_cast<int32_t>(offsetof(UnityVideoParams_t4155354995, ___yWidth_0)); }
	inline int32_t get_yWidth_0() const { return ___yWidth_0; }
	inline int32_t* get_address_of_yWidth_0() { return &___yWidth_0; }
	inline void set_yWidth_0(int32_t value)
	{
		___yWidth_0 = value;
	}

	inline static int32_t get_offset_of_yHeight_1() { return static_cast<int32_t>(offsetof(UnityVideoParams_t4155354995, ___yHeight_1)); }
	inline int32_t get_yHeight_1() const { return ___yHeight_1; }
	inline int32_t* get_address_of_yHeight_1() { return &___yHeight_1; }
	inline void set_yHeight_1(int32_t value)
	{
		___yHeight_1 = value;
	}

	inline static int32_t get_offset_of_screenOrientation_2() { return static_cast<int32_t>(offsetof(UnityVideoParams_t4155354995, ___screenOrientation_2)); }
	inline int32_t get_screenOrientation_2() const { return ___screenOrientation_2; }
	inline int32_t* get_address_of_screenOrientation_2() { return &___screenOrientation_2; }
	inline void set_screenOrientation_2(int32_t value)
	{
		___screenOrientation_2 = value;
	}

	inline static int32_t get_offset_of_texCoordScale_3() { return static_cast<int32_t>(offsetof(UnityVideoParams_t4155354995, ___texCoordScale_3)); }
	inline float get_texCoordScale_3() const { return ___texCoordScale_3; }
	inline float* get_address_of_texCoordScale_3() { return &___texCoordScale_3; }
	inline void set_texCoordScale_3(float value)
	{
		___texCoordScale_3 = value;
	}

	inline static int32_t get_offset_of_cvPixelBufferPtr_4() { return static_cast<int32_t>(offsetof(UnityVideoParams_t4155354995, ___cvPixelBufferPtr_4)); }
	inline intptr_t get_cvPixelBufferPtr_4() const { return ___cvPixelBufferPtr_4; }
	inline intptr_t* get_address_of_cvPixelBufferPtr_4() { return &___cvPixelBufferPtr_4; }
	inline void set_cvPixelBufferPtr_4(intptr_t value)
	{
		___cvPixelBufferPtr_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYVIDEOPARAMS_T4155354995_H
#ifndef UNITYARSESSIONRUNOPTION_T942967030_H
#define UNITYARSESSIONRUNOPTION_T942967030_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionRunOption
struct  UnityARSessionRunOption_t942967030 
{
public:
	// System.Int32 UnityEngine.XR.iOS.UnityARSessionRunOption::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UnityARSessionRunOption_t942967030, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARSESSIONRUNOPTION_T942967030_H
#ifndef UNITYARPLANEDETECTION_T1367733575_H
#define UNITYARPLANEDETECTION_T1367733575_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARPlaneDetection
struct  UnityARPlaneDetection_t1367733575 
{
public:
	// System.Int32 UnityEngine.XR.iOS.UnityARPlaneDetection::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UnityARPlaneDetection_t1367733575, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARPLANEDETECTION_T1367733575_H
#ifndef UNITYARALIGNMENT_T3792119710_H
#define UNITYARALIGNMENT_T3792119710_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARAlignment
struct  UnityARAlignment_t3792119710 
{
public:
	// System.Int32 UnityEngine.XR.iOS.UnityARAlignment::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UnityARAlignment_t3792119710, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARALIGNMENT_T3792119710_H
#ifndef ARTRACKINGSTATEREASON_T2348933773_H
#define ARTRACKINGSTATEREASON_T2348933773_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARTrackingStateReason
struct  ARTrackingStateReason_t2348933773 
{
public:
	// System.Int32 UnityEngine.XR.iOS.ARTrackingStateReason::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ARTrackingStateReason_t2348933773, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARTRACKINGSTATEREASON_T2348933773_H
#ifndef UNITYARFACEGEOMETRY_T4178775532_H
#define UNITYARFACEGEOMETRY_T4178775532_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARFaceGeometry
struct  UnityARFaceGeometry_t4178775532 
{
public:
	// System.Int32 UnityEngine.XR.iOS.UnityARFaceGeometry::vertexCount
	int32_t ___vertexCount_0;
	// System.IntPtr UnityEngine.XR.iOS.UnityARFaceGeometry::vertices
	intptr_t ___vertices_1;
	// System.Int32 UnityEngine.XR.iOS.UnityARFaceGeometry::textureCoordinateCount
	int32_t ___textureCoordinateCount_2;
	// System.IntPtr UnityEngine.XR.iOS.UnityARFaceGeometry::textureCoordinates
	intptr_t ___textureCoordinates_3;
	// System.Int32 UnityEngine.XR.iOS.UnityARFaceGeometry::triangleCount
	int32_t ___triangleCount_4;
	// System.IntPtr UnityEngine.XR.iOS.UnityARFaceGeometry::triangleIndices
	intptr_t ___triangleIndices_5;

public:
	inline static int32_t get_offset_of_vertexCount_0() { return static_cast<int32_t>(offsetof(UnityARFaceGeometry_t4178775532, ___vertexCount_0)); }
	inline int32_t get_vertexCount_0() const { return ___vertexCount_0; }
	inline int32_t* get_address_of_vertexCount_0() { return &___vertexCount_0; }
	inline void set_vertexCount_0(int32_t value)
	{
		___vertexCount_0 = value;
	}

	inline static int32_t get_offset_of_vertices_1() { return static_cast<int32_t>(offsetof(UnityARFaceGeometry_t4178775532, ___vertices_1)); }
	inline intptr_t get_vertices_1() const { return ___vertices_1; }
	inline intptr_t* get_address_of_vertices_1() { return &___vertices_1; }
	inline void set_vertices_1(intptr_t value)
	{
		___vertices_1 = value;
	}

	inline static int32_t get_offset_of_textureCoordinateCount_2() { return static_cast<int32_t>(offsetof(UnityARFaceGeometry_t4178775532, ___textureCoordinateCount_2)); }
	inline int32_t get_textureCoordinateCount_2() const { return ___textureCoordinateCount_2; }
	inline int32_t* get_address_of_textureCoordinateCount_2() { return &___textureCoordinateCount_2; }
	inline void set_textureCoordinateCount_2(int32_t value)
	{
		___textureCoordinateCount_2 = value;
	}

	inline static int32_t get_offset_of_textureCoordinates_3() { return static_cast<int32_t>(offsetof(UnityARFaceGeometry_t4178775532, ___textureCoordinates_3)); }
	inline intptr_t get_textureCoordinates_3() const { return ___textureCoordinates_3; }
	inline intptr_t* get_address_of_textureCoordinates_3() { return &___textureCoordinates_3; }
	inline void set_textureCoordinates_3(intptr_t value)
	{
		___textureCoordinates_3 = value;
	}

	inline static int32_t get_offset_of_triangleCount_4() { return static_cast<int32_t>(offsetof(UnityARFaceGeometry_t4178775532, ___triangleCount_4)); }
	inline int32_t get_triangleCount_4() const { return ___triangleCount_4; }
	inline int32_t* get_address_of_triangleCount_4() { return &___triangleCount_4; }
	inline void set_triangleCount_4(int32_t value)
	{
		___triangleCount_4 = value;
	}

	inline static int32_t get_offset_of_triangleIndices_5() { return static_cast<int32_t>(offsetof(UnityARFaceGeometry_t4178775532, ___triangleIndices_5)); }
	inline intptr_t get_triangleIndices_5() const { return ___triangleIndices_5; }
	inline intptr_t* get_address_of_triangleIndices_5() { return &___triangleIndices_5; }
	inline void set_triangleIndices_5(intptr_t value)
	{
		___triangleIndices_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARFACEGEOMETRY_T4178775532_H
#ifndef ARTRACKINGSTATE_T3182235352_H
#define ARTRACKINGSTATE_T3182235352_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARTrackingState
struct  ARTrackingState_t3182235352 
{
public:
	// System.Int32 UnityEngine.XR.iOS.ARTrackingState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ARTrackingState_t3182235352, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARTRACKINGSTATE_T3182235352_H
#ifndef UNITYARPLANEGEOMETRY_T1646881137_H
#define UNITYARPLANEGEOMETRY_T1646881137_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARPlaneGeometry
struct  UnityARPlaneGeometry_t1646881137 
{
public:
	// System.Int32 UnityEngine.XR.iOS.UnityARPlaneGeometry::vertexCount
	int32_t ___vertexCount_0;
	// System.IntPtr UnityEngine.XR.iOS.UnityARPlaneGeometry::vertices
	intptr_t ___vertices_1;
	// System.Int32 UnityEngine.XR.iOS.UnityARPlaneGeometry::textureCoordinateCount
	int32_t ___textureCoordinateCount_2;
	// System.IntPtr UnityEngine.XR.iOS.UnityARPlaneGeometry::textureCoordinates
	intptr_t ___textureCoordinates_3;
	// System.Int32 UnityEngine.XR.iOS.UnityARPlaneGeometry::triangleCount
	int32_t ___triangleCount_4;
	// System.IntPtr UnityEngine.XR.iOS.UnityARPlaneGeometry::triangleIndices
	intptr_t ___triangleIndices_5;
	// System.Int32 UnityEngine.XR.iOS.UnityARPlaneGeometry::boundaryVertexCount
	int32_t ___boundaryVertexCount_6;
	// System.IntPtr UnityEngine.XR.iOS.UnityARPlaneGeometry::boundaryVertices
	intptr_t ___boundaryVertices_7;

public:
	inline static int32_t get_offset_of_vertexCount_0() { return static_cast<int32_t>(offsetof(UnityARPlaneGeometry_t1646881137, ___vertexCount_0)); }
	inline int32_t get_vertexCount_0() const { return ___vertexCount_0; }
	inline int32_t* get_address_of_vertexCount_0() { return &___vertexCount_0; }
	inline void set_vertexCount_0(int32_t value)
	{
		___vertexCount_0 = value;
	}

	inline static int32_t get_offset_of_vertices_1() { return static_cast<int32_t>(offsetof(UnityARPlaneGeometry_t1646881137, ___vertices_1)); }
	inline intptr_t get_vertices_1() const { return ___vertices_1; }
	inline intptr_t* get_address_of_vertices_1() { return &___vertices_1; }
	inline void set_vertices_1(intptr_t value)
	{
		___vertices_1 = value;
	}

	inline static int32_t get_offset_of_textureCoordinateCount_2() { return static_cast<int32_t>(offsetof(UnityARPlaneGeometry_t1646881137, ___textureCoordinateCount_2)); }
	inline int32_t get_textureCoordinateCount_2() const { return ___textureCoordinateCount_2; }
	inline int32_t* get_address_of_textureCoordinateCount_2() { return &___textureCoordinateCount_2; }
	inline void set_textureCoordinateCount_2(int32_t value)
	{
		___textureCoordinateCount_2 = value;
	}

	inline static int32_t get_offset_of_textureCoordinates_3() { return static_cast<int32_t>(offsetof(UnityARPlaneGeometry_t1646881137, ___textureCoordinates_3)); }
	inline intptr_t get_textureCoordinates_3() const { return ___textureCoordinates_3; }
	inline intptr_t* get_address_of_textureCoordinates_3() { return &___textureCoordinates_3; }
	inline void set_textureCoordinates_3(intptr_t value)
	{
		___textureCoordinates_3 = value;
	}

	inline static int32_t get_offset_of_triangleCount_4() { return static_cast<int32_t>(offsetof(UnityARPlaneGeometry_t1646881137, ___triangleCount_4)); }
	inline int32_t get_triangleCount_4() const { return ___triangleCount_4; }
	inline int32_t* get_address_of_triangleCount_4() { return &___triangleCount_4; }
	inline void set_triangleCount_4(int32_t value)
	{
		___triangleCount_4 = value;
	}

	inline static int32_t get_offset_of_triangleIndices_5() { return static_cast<int32_t>(offsetof(UnityARPlaneGeometry_t1646881137, ___triangleIndices_5)); }
	inline intptr_t get_triangleIndices_5() const { return ___triangleIndices_5; }
	inline intptr_t* get_address_of_triangleIndices_5() { return &___triangleIndices_5; }
	inline void set_triangleIndices_5(intptr_t value)
	{
		___triangleIndices_5 = value;
	}

	inline static int32_t get_offset_of_boundaryVertexCount_6() { return static_cast<int32_t>(offsetof(UnityARPlaneGeometry_t1646881137, ___boundaryVertexCount_6)); }
	inline int32_t get_boundaryVertexCount_6() const { return ___boundaryVertexCount_6; }
	inline int32_t* get_address_of_boundaryVertexCount_6() { return &___boundaryVertexCount_6; }
	inline void set_boundaryVertexCount_6(int32_t value)
	{
		___boundaryVertexCount_6 = value;
	}

	inline static int32_t get_offset_of_boundaryVertices_7() { return static_cast<int32_t>(offsetof(UnityARPlaneGeometry_t1646881137, ___boundaryVertices_7)); }
	inline intptr_t get_boundaryVertices_7() const { return ___boundaryVertices_7; }
	inline intptr_t* get_address_of_boundaryVertices_7() { return &___boundaryVertices_7; }
	inline void set_boundaryVertices_7(intptr_t value)
	{
		___boundaryVertices_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARPLANEGEOMETRY_T1646881137_H
#ifndef UNITYARVIDEOFORMAT_T1944454781_H
#define UNITYARVIDEOFORMAT_T1944454781_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARVideoFormat
struct  UnityARVideoFormat_t1944454781 
{
public:
	// System.IntPtr UnityEngine.XR.iOS.UnityARVideoFormat::videoFormatPtr
	intptr_t ___videoFormatPtr_0;
	// System.Single UnityEngine.XR.iOS.UnityARVideoFormat::imageResolutionWidth
	float ___imageResolutionWidth_1;
	// System.Single UnityEngine.XR.iOS.UnityARVideoFormat::imageResolutionHeight
	float ___imageResolutionHeight_2;
	// System.Int32 UnityEngine.XR.iOS.UnityARVideoFormat::framesPerSecond
	int32_t ___framesPerSecond_3;

public:
	inline static int32_t get_offset_of_videoFormatPtr_0() { return static_cast<int32_t>(offsetof(UnityARVideoFormat_t1944454781, ___videoFormatPtr_0)); }
	inline intptr_t get_videoFormatPtr_0() const { return ___videoFormatPtr_0; }
	inline intptr_t* get_address_of_videoFormatPtr_0() { return &___videoFormatPtr_0; }
	inline void set_videoFormatPtr_0(intptr_t value)
	{
		___videoFormatPtr_0 = value;
	}

	inline static int32_t get_offset_of_imageResolutionWidth_1() { return static_cast<int32_t>(offsetof(UnityARVideoFormat_t1944454781, ___imageResolutionWidth_1)); }
	inline float get_imageResolutionWidth_1() const { return ___imageResolutionWidth_1; }
	inline float* get_address_of_imageResolutionWidth_1() { return &___imageResolutionWidth_1; }
	inline void set_imageResolutionWidth_1(float value)
	{
		___imageResolutionWidth_1 = value;
	}

	inline static int32_t get_offset_of_imageResolutionHeight_2() { return static_cast<int32_t>(offsetof(UnityARVideoFormat_t1944454781, ___imageResolutionHeight_2)); }
	inline float get_imageResolutionHeight_2() const { return ___imageResolutionHeight_2; }
	inline float* get_address_of_imageResolutionHeight_2() { return &___imageResolutionHeight_2; }
	inline void set_imageResolutionHeight_2(float value)
	{
		___imageResolutionHeight_2 = value;
	}

	inline static int32_t get_offset_of_framesPerSecond_3() { return static_cast<int32_t>(offsetof(UnityARVideoFormat_t1944454781, ___framesPerSecond_3)); }
	inline int32_t get_framesPerSecond_3() const { return ___framesPerSecond_3; }
	inline int32_t* get_address_of_framesPerSecond_3() { return &___framesPerSecond_3; }
	inline void set_framesPerSecond_3(int32_t value)
	{
		___framesPerSecond_3 = value;
	}
};

struct UnityARVideoFormat_t1944454781_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.XR.iOS.UnityARVideoFormat> UnityEngine.XR.iOS.UnityARVideoFormat::videoFormatsList
	List_1_t3416529523 * ___videoFormatsList_4;
	// UnityEngine.XR.iOS.VideoFormatEnumerator UnityEngine.XR.iOS.UnityARVideoFormat::<>f__mg$cache0
	VideoFormatEnumerator_t3131638505 * ___U3CU3Ef__mgU24cache0_5;

public:
	inline static int32_t get_offset_of_videoFormatsList_4() { return static_cast<int32_t>(offsetof(UnityARVideoFormat_t1944454781_StaticFields, ___videoFormatsList_4)); }
	inline List_1_t3416529523 * get_videoFormatsList_4() const { return ___videoFormatsList_4; }
	inline List_1_t3416529523 ** get_address_of_videoFormatsList_4() { return &___videoFormatsList_4; }
	inline void set_videoFormatsList_4(List_1_t3416529523 * value)
	{
		___videoFormatsList_4 = value;
		Il2CppCodeGenWriteBarrier((&___videoFormatsList_4), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_5() { return static_cast<int32_t>(offsetof(UnityARVideoFormat_t1944454781_StaticFields, ___U3CU3Ef__mgU24cache0_5)); }
	inline VideoFormatEnumerator_t3131638505 * get_U3CU3Ef__mgU24cache0_5() const { return ___U3CU3Ef__mgU24cache0_5; }
	inline VideoFormatEnumerator_t3131638505 ** get_address_of_U3CU3Ef__mgU24cache0_5() { return &___U3CU3Ef__mgU24cache0_5; }
	inline void set_U3CU3Ef__mgU24cache0_5(VideoFormatEnumerator_t3131638505 * value)
	{
		___U3CU3Ef__mgU24cache0_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARVIDEOFORMAT_T1944454781_H
#ifndef UNITYARDIRECTIONALLIGHTESTIMATE_T2924556994_H
#define UNITYARDIRECTIONALLIGHTESTIMATE_T2924556994_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARDirectionalLightEstimate
struct  UnityARDirectionalLightEstimate_t2924556994  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 UnityEngine.XR.iOS.UnityARDirectionalLightEstimate::primaryLightDirection
	Vector3_t3722313464  ___primaryLightDirection_0;
	// System.Single UnityEngine.XR.iOS.UnityARDirectionalLightEstimate::primaryLightIntensity
	float ___primaryLightIntensity_1;
	// System.Single[] UnityEngine.XR.iOS.UnityARDirectionalLightEstimate::sphericalHarmonicsCoefficients
	SingleU5BU5D_t1444911251* ___sphericalHarmonicsCoefficients_2;

public:
	inline static int32_t get_offset_of_primaryLightDirection_0() { return static_cast<int32_t>(offsetof(UnityARDirectionalLightEstimate_t2924556994, ___primaryLightDirection_0)); }
	inline Vector3_t3722313464  get_primaryLightDirection_0() const { return ___primaryLightDirection_0; }
	inline Vector3_t3722313464 * get_address_of_primaryLightDirection_0() { return &___primaryLightDirection_0; }
	inline void set_primaryLightDirection_0(Vector3_t3722313464  value)
	{
		___primaryLightDirection_0 = value;
	}

	inline static int32_t get_offset_of_primaryLightIntensity_1() { return static_cast<int32_t>(offsetof(UnityARDirectionalLightEstimate_t2924556994, ___primaryLightIntensity_1)); }
	inline float get_primaryLightIntensity_1() const { return ___primaryLightIntensity_1; }
	inline float* get_address_of_primaryLightIntensity_1() { return &___primaryLightIntensity_1; }
	inline void set_primaryLightIntensity_1(float value)
	{
		___primaryLightIntensity_1 = value;
	}

	inline static int32_t get_offset_of_sphericalHarmonicsCoefficients_2() { return static_cast<int32_t>(offsetof(UnityARDirectionalLightEstimate_t2924556994, ___sphericalHarmonicsCoefficients_2)); }
	inline SingleU5BU5D_t1444911251* get_sphericalHarmonicsCoefficients_2() const { return ___sphericalHarmonicsCoefficients_2; }
	inline SingleU5BU5D_t1444911251** get_address_of_sphericalHarmonicsCoefficients_2() { return &___sphericalHarmonicsCoefficients_2; }
	inline void set_sphericalHarmonicsCoefficients_2(SingleU5BU5D_t1444911251* value)
	{
		___sphericalHarmonicsCoefficients_2 = value;
		Il2CppCodeGenWriteBarrier((&___sphericalHarmonicsCoefficients_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARDIRECTIONALLIGHTESTIMATE_T2924556994_H
#ifndef LIGHTDATATYPE_T2323651587_H
#define LIGHTDATATYPE_T2323651587_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.LightDataType
struct  LightDataType_t2323651587 
{
public:
	// System.Int32 UnityEngine.XR.iOS.LightDataType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LightDataType_t2323651587, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIGHTDATATYPE_T2323651587_H
#ifndef UNITYARMATRIX4X4_T4073345847_H
#define UNITYARMATRIX4X4_T4073345847_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARMatrix4x4
struct  UnityARMatrix4x4_t4073345847 
{
public:
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARMatrix4x4::column0
	Vector4_t3319028937  ___column0_0;
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARMatrix4x4::column1
	Vector4_t3319028937  ___column1_1;
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARMatrix4x4::column2
	Vector4_t3319028937  ___column2_2;
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARMatrix4x4::column3
	Vector4_t3319028937  ___column3_3;

public:
	inline static int32_t get_offset_of_column0_0() { return static_cast<int32_t>(offsetof(UnityARMatrix4x4_t4073345847, ___column0_0)); }
	inline Vector4_t3319028937  get_column0_0() const { return ___column0_0; }
	inline Vector4_t3319028937 * get_address_of_column0_0() { return &___column0_0; }
	inline void set_column0_0(Vector4_t3319028937  value)
	{
		___column0_0 = value;
	}

	inline static int32_t get_offset_of_column1_1() { return static_cast<int32_t>(offsetof(UnityARMatrix4x4_t4073345847, ___column1_1)); }
	inline Vector4_t3319028937  get_column1_1() const { return ___column1_1; }
	inline Vector4_t3319028937 * get_address_of_column1_1() { return &___column1_1; }
	inline void set_column1_1(Vector4_t3319028937  value)
	{
		___column1_1 = value;
	}

	inline static int32_t get_offset_of_column2_2() { return static_cast<int32_t>(offsetof(UnityARMatrix4x4_t4073345847, ___column2_2)); }
	inline Vector4_t3319028937  get_column2_2() const { return ___column2_2; }
	inline Vector4_t3319028937 * get_address_of_column2_2() { return &___column2_2; }
	inline void set_column2_2(Vector4_t3319028937  value)
	{
		___column2_2 = value;
	}

	inline static int32_t get_offset_of_column3_3() { return static_cast<int32_t>(offsetof(UnityARMatrix4x4_t4073345847, ___column3_3)); }
	inline Vector4_t3319028937  get_column3_3() const { return ___column3_3; }
	inline Vector4_t3319028937 * get_address_of_column3_3() { return &___column3_3; }
	inline void set_column3_3(Vector4_t3319028937  value)
	{
		___column3_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARMATRIX4X4_T4073345847_H
#ifndef ARPLANEANCHORALIGNMENT_T2311256121_H
#define ARPLANEANCHORALIGNMENT_T2311256121_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARPlaneAnchorAlignment
struct  ARPlaneAnchorAlignment_t2311256121 
{
public:
	// System.Int64 UnityEngine.XR.iOS.ARPlaneAnchorAlignment::value__
	int64_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ARPlaneAnchorAlignment_t2311256121, ___value___1)); }
	inline int64_t get_value___1() const { return ___value___1; }
	inline int64_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int64_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARPLANEANCHORALIGNMENT_T2311256121_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_8)); }
	inline DelegateData_t1677132599 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1677132599 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1677132599 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1188392813_H
#ifndef GAMEOBJECT_T1113636619_H
#define GAMEOBJECT_T1113636619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1113636619  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1113636619_H
#ifndef SERIALIZABLEUNITYARPLANEANCHOR_T1446774435_H
#define SERIALIZABLEUNITYARPLANEANCHOR_T1446774435_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Utils.serializableUnityARPlaneAnchor
struct  serializableUnityARPlaneAnchor_t1446774435  : public RuntimeObject
{
public:
	// Utils.serializableUnityARMatrix4x4 Utils.serializableUnityARPlaneAnchor::worldTransform
	serializableUnityARMatrix4x4_t78255337 * ___worldTransform_0;
	// Utils.SerializableVector4 Utils.serializableUnityARPlaneAnchor::center
	SerializableVector4_t1862640084 * ___center_1;
	// Utils.SerializableVector4 Utils.serializableUnityARPlaneAnchor::extent
	SerializableVector4_t1862640084 * ___extent_2;
	// UnityEngine.XR.iOS.ARPlaneAnchorAlignment Utils.serializableUnityARPlaneAnchor::planeAlignment
	int64_t ___planeAlignment_3;
	// Utils.serializablePlaneGeometry Utils.serializableUnityARPlaneAnchor::planeGeometry
	serializablePlaneGeometry_t3680333341 * ___planeGeometry_4;
	// System.Byte[] Utils.serializableUnityARPlaneAnchor::identifierStr
	ByteU5BU5D_t4116647657* ___identifierStr_5;

public:
	inline static int32_t get_offset_of_worldTransform_0() { return static_cast<int32_t>(offsetof(serializableUnityARPlaneAnchor_t1446774435, ___worldTransform_0)); }
	inline serializableUnityARMatrix4x4_t78255337 * get_worldTransform_0() const { return ___worldTransform_0; }
	inline serializableUnityARMatrix4x4_t78255337 ** get_address_of_worldTransform_0() { return &___worldTransform_0; }
	inline void set_worldTransform_0(serializableUnityARMatrix4x4_t78255337 * value)
	{
		___worldTransform_0 = value;
		Il2CppCodeGenWriteBarrier((&___worldTransform_0), value);
	}

	inline static int32_t get_offset_of_center_1() { return static_cast<int32_t>(offsetof(serializableUnityARPlaneAnchor_t1446774435, ___center_1)); }
	inline SerializableVector4_t1862640084 * get_center_1() const { return ___center_1; }
	inline SerializableVector4_t1862640084 ** get_address_of_center_1() { return &___center_1; }
	inline void set_center_1(SerializableVector4_t1862640084 * value)
	{
		___center_1 = value;
		Il2CppCodeGenWriteBarrier((&___center_1), value);
	}

	inline static int32_t get_offset_of_extent_2() { return static_cast<int32_t>(offsetof(serializableUnityARPlaneAnchor_t1446774435, ___extent_2)); }
	inline SerializableVector4_t1862640084 * get_extent_2() const { return ___extent_2; }
	inline SerializableVector4_t1862640084 ** get_address_of_extent_2() { return &___extent_2; }
	inline void set_extent_2(SerializableVector4_t1862640084 * value)
	{
		___extent_2 = value;
		Il2CppCodeGenWriteBarrier((&___extent_2), value);
	}

	inline static int32_t get_offset_of_planeAlignment_3() { return static_cast<int32_t>(offsetof(serializableUnityARPlaneAnchor_t1446774435, ___planeAlignment_3)); }
	inline int64_t get_planeAlignment_3() const { return ___planeAlignment_3; }
	inline int64_t* get_address_of_planeAlignment_3() { return &___planeAlignment_3; }
	inline void set_planeAlignment_3(int64_t value)
	{
		___planeAlignment_3 = value;
	}

	inline static int32_t get_offset_of_planeGeometry_4() { return static_cast<int32_t>(offsetof(serializableUnityARPlaneAnchor_t1446774435, ___planeGeometry_4)); }
	inline serializablePlaneGeometry_t3680333341 * get_planeGeometry_4() const { return ___planeGeometry_4; }
	inline serializablePlaneGeometry_t3680333341 ** get_address_of_planeGeometry_4() { return &___planeGeometry_4; }
	inline void set_planeGeometry_4(serializablePlaneGeometry_t3680333341 * value)
	{
		___planeGeometry_4 = value;
		Il2CppCodeGenWriteBarrier((&___planeGeometry_4), value);
	}

	inline static int32_t get_offset_of_identifierStr_5() { return static_cast<int32_t>(offsetof(serializableUnityARPlaneAnchor_t1446774435, ___identifierStr_5)); }
	inline ByteU5BU5D_t4116647657* get_identifierStr_5() const { return ___identifierStr_5; }
	inline ByteU5BU5D_t4116647657** get_address_of_identifierStr_5() { return &___identifierStr_5; }
	inline void set_identifierStr_5(ByteU5BU5D_t4116647657* value)
	{
		___identifierStr_5 = value;
		Il2CppCodeGenWriteBarrier((&___identifierStr_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLEUNITYARPLANEANCHOR_T1446774435_H
#ifndef UNITYARLIGHTDATA_T2160616730_H
#define UNITYARLIGHTDATA_T2160616730_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARLightData
struct  UnityARLightData_t2160616730 
{
public:
	// UnityEngine.XR.iOS.LightDataType UnityEngine.XR.iOS.UnityARLightData::arLightingType
	int32_t ___arLightingType_0;
	// UnityEngine.XR.iOS.UnityARLightEstimate UnityEngine.XR.iOS.UnityARLightData::arLightEstimate
	UnityARLightEstimate_t1498306117  ___arLightEstimate_1;
	// UnityEngine.XR.iOS.UnityARDirectionalLightEstimate UnityEngine.XR.iOS.UnityARLightData::arDirectonalLightEstimate
	UnityARDirectionalLightEstimate_t2924556994 * ___arDirectonalLightEstimate_2;

public:
	inline static int32_t get_offset_of_arLightingType_0() { return static_cast<int32_t>(offsetof(UnityARLightData_t2160616730, ___arLightingType_0)); }
	inline int32_t get_arLightingType_0() const { return ___arLightingType_0; }
	inline int32_t* get_address_of_arLightingType_0() { return &___arLightingType_0; }
	inline void set_arLightingType_0(int32_t value)
	{
		___arLightingType_0 = value;
	}

	inline static int32_t get_offset_of_arLightEstimate_1() { return static_cast<int32_t>(offsetof(UnityARLightData_t2160616730, ___arLightEstimate_1)); }
	inline UnityARLightEstimate_t1498306117  get_arLightEstimate_1() const { return ___arLightEstimate_1; }
	inline UnityARLightEstimate_t1498306117 * get_address_of_arLightEstimate_1() { return &___arLightEstimate_1; }
	inline void set_arLightEstimate_1(UnityARLightEstimate_t1498306117  value)
	{
		___arLightEstimate_1 = value;
	}

	inline static int32_t get_offset_of_arDirectonalLightEstimate_2() { return static_cast<int32_t>(offsetof(UnityARLightData_t2160616730, ___arDirectonalLightEstimate_2)); }
	inline UnityARDirectionalLightEstimate_t2924556994 * get_arDirectonalLightEstimate_2() const { return ___arDirectonalLightEstimate_2; }
	inline UnityARDirectionalLightEstimate_t2924556994 ** get_address_of_arDirectonalLightEstimate_2() { return &___arDirectonalLightEstimate_2; }
	inline void set_arDirectonalLightEstimate_2(UnityARDirectionalLightEstimate_t2924556994 * value)
	{
		___arDirectonalLightEstimate_2 = value;
		Il2CppCodeGenWriteBarrier((&___arDirectonalLightEstimate_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.iOS.UnityARLightData
struct UnityARLightData_t2160616730_marshaled_pinvoke
{
	int32_t ___arLightingType_0;
	UnityARLightEstimate_t1498306117  ___arLightEstimate_1;
	UnityARDirectionalLightEstimate_t2924556994 * ___arDirectonalLightEstimate_2;
};
// Native definition for COM marshalling of UnityEngine.XR.iOS.UnityARLightData
struct UnityARLightData_t2160616730_marshaled_com
{
	int32_t ___arLightingType_0;
	UnityARLightEstimate_t1498306117  ___arLightEstimate_1;
	UnityARDirectionalLightEstimate_t2924556994 * ___arDirectonalLightEstimate_2;
};
#endif // UNITYARLIGHTDATA_T2160616730_H
#ifndef UNITYARFACEANCHORDATA_T2028622935_H
#define UNITYARFACEANCHORDATA_T2028622935_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARFaceAnchorData
struct  UnityARFaceAnchorData_t2028622935 
{
public:
	// System.IntPtr UnityEngine.XR.iOS.UnityARFaceAnchorData::ptrIdentifier
	intptr_t ___ptrIdentifier_0;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.UnityARFaceAnchorData::transform
	UnityARMatrix4x4_t4073345847  ___transform_1;
	// UnityEngine.XR.iOS.UnityARFaceGeometry UnityEngine.XR.iOS.UnityARFaceAnchorData::faceGeometry
	UnityARFaceGeometry_t4178775532  ___faceGeometry_2;
	// System.IntPtr UnityEngine.XR.iOS.UnityARFaceAnchorData::blendShapes
	intptr_t ___blendShapes_3;

public:
	inline static int32_t get_offset_of_ptrIdentifier_0() { return static_cast<int32_t>(offsetof(UnityARFaceAnchorData_t2028622935, ___ptrIdentifier_0)); }
	inline intptr_t get_ptrIdentifier_0() const { return ___ptrIdentifier_0; }
	inline intptr_t* get_address_of_ptrIdentifier_0() { return &___ptrIdentifier_0; }
	inline void set_ptrIdentifier_0(intptr_t value)
	{
		___ptrIdentifier_0 = value;
	}

	inline static int32_t get_offset_of_transform_1() { return static_cast<int32_t>(offsetof(UnityARFaceAnchorData_t2028622935, ___transform_1)); }
	inline UnityARMatrix4x4_t4073345847  get_transform_1() const { return ___transform_1; }
	inline UnityARMatrix4x4_t4073345847 * get_address_of_transform_1() { return &___transform_1; }
	inline void set_transform_1(UnityARMatrix4x4_t4073345847  value)
	{
		___transform_1 = value;
	}

	inline static int32_t get_offset_of_faceGeometry_2() { return static_cast<int32_t>(offsetof(UnityARFaceAnchorData_t2028622935, ___faceGeometry_2)); }
	inline UnityARFaceGeometry_t4178775532  get_faceGeometry_2() const { return ___faceGeometry_2; }
	inline UnityARFaceGeometry_t4178775532 * get_address_of_faceGeometry_2() { return &___faceGeometry_2; }
	inline void set_faceGeometry_2(UnityARFaceGeometry_t4178775532  value)
	{
		___faceGeometry_2 = value;
	}

	inline static int32_t get_offset_of_blendShapes_3() { return static_cast<int32_t>(offsetof(UnityARFaceAnchorData_t2028622935, ___blendShapes_3)); }
	inline intptr_t get_blendShapes_3() const { return ___blendShapes_3; }
	inline intptr_t* get_address_of_blendShapes_3() { return &___blendShapes_3; }
	inline void set_blendShapes_3(intptr_t value)
	{
		___blendShapes_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARFACEANCHORDATA_T2028622935_H
#ifndef ENUMERATOR_T1010806104_H
#define ENUMERATOR_T1010806104_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.iOS.UnityARVideoFormat>
struct  Enumerator_t1010806104 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t3416529523 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	UnityARVideoFormat_t1944454781  ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t1010806104, ___l_0)); }
	inline List_1_t3416529523 * get_l_0() const { return ___l_0; }
	inline List_1_t3416529523 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t3416529523 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t1010806104, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t1010806104, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t1010806104, ___current_3)); }
	inline UnityARVideoFormat_t1944454781  get_current_3() const { return ___current_3; }
	inline UnityARVideoFormat_t1944454781 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(UnityARVideoFormat_t1944454781  value)
	{
		___current_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T1010806104_H
#ifndef ARPLANEGEOMETRY_T1169415986_H
#define ARPLANEGEOMETRY_T1169415986_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARPlaneGeometry
struct  ARPlaneGeometry_t1169415986  : public RuntimeObject
{
public:
	// UnityEngine.XR.iOS.UnityARPlaneGeometry UnityEngine.XR.iOS.ARPlaneGeometry::uPlaneGeometry
	UnityARPlaneGeometry_t1646881137  ___uPlaneGeometry_0;

public:
	inline static int32_t get_offset_of_uPlaneGeometry_0() { return static_cast<int32_t>(offsetof(ARPlaneGeometry_t1169415986, ___uPlaneGeometry_0)); }
	inline UnityARPlaneGeometry_t1646881137  get_uPlaneGeometry_0() const { return ___uPlaneGeometry_0; }
	inline UnityARPlaneGeometry_t1646881137 * get_address_of_uPlaneGeometry_0() { return &___uPlaneGeometry_0; }
	inline void set_uPlaneGeometry_0(UnityARPlaneGeometry_t1646881137  value)
	{
		___uPlaneGeometry_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARPLANEGEOMETRY_T1169415986_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
#ifndef ARFACEGEOMETRY_T5139606_H
#define ARFACEGEOMETRY_T5139606_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARFaceGeometry
struct  ARFaceGeometry_t5139606  : public RuntimeObject
{
public:
	// UnityEngine.XR.iOS.UnityARFaceGeometry UnityEngine.XR.iOS.ARFaceGeometry::uFaceGeometry
	UnityARFaceGeometry_t4178775532  ___uFaceGeometry_0;

public:
	inline static int32_t get_offset_of_uFaceGeometry_0() { return static_cast<int32_t>(offsetof(ARFaceGeometry_t5139606, ___uFaceGeometry_0)); }
	inline UnityARFaceGeometry_t4178775532  get_uFaceGeometry_0() const { return ___uFaceGeometry_0; }
	inline UnityARFaceGeometry_t4178775532 * get_address_of_uFaceGeometry_0() { return &___uFaceGeometry_0; }
	inline void set_uFaceGeometry_0(UnityARFaceGeometry_t4178775532  value)
	{
		___uFaceGeometry_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARFACEGEOMETRY_T5139606_H
#ifndef SERIALIZABLEUNITYARLIGHTDATA_T3935513283_H
#define SERIALIZABLEUNITYARLIGHTDATA_T3935513283_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Utils.serializableUnityARLightData
struct  serializableUnityARLightData_t3935513283  : public RuntimeObject
{
public:
	// UnityEngine.XR.iOS.LightDataType Utils.serializableUnityARLightData::whichLight
	int32_t ___whichLight_0;
	// Utils.serializableSHC Utils.serializableUnityARLightData::lightSHC
	serializableSHC_t2667429767 * ___lightSHC_1;
	// Utils.SerializableVector4 Utils.serializableUnityARLightData::primaryLightDirAndIntensity
	SerializableVector4_t1862640084 * ___primaryLightDirAndIntensity_2;
	// System.Single Utils.serializableUnityARLightData::ambientIntensity
	float ___ambientIntensity_3;
	// System.Single Utils.serializableUnityARLightData::ambientColorTemperature
	float ___ambientColorTemperature_4;

public:
	inline static int32_t get_offset_of_whichLight_0() { return static_cast<int32_t>(offsetof(serializableUnityARLightData_t3935513283, ___whichLight_0)); }
	inline int32_t get_whichLight_0() const { return ___whichLight_0; }
	inline int32_t* get_address_of_whichLight_0() { return &___whichLight_0; }
	inline void set_whichLight_0(int32_t value)
	{
		___whichLight_0 = value;
	}

	inline static int32_t get_offset_of_lightSHC_1() { return static_cast<int32_t>(offsetof(serializableUnityARLightData_t3935513283, ___lightSHC_1)); }
	inline serializableSHC_t2667429767 * get_lightSHC_1() const { return ___lightSHC_1; }
	inline serializableSHC_t2667429767 ** get_address_of_lightSHC_1() { return &___lightSHC_1; }
	inline void set_lightSHC_1(serializableSHC_t2667429767 * value)
	{
		___lightSHC_1 = value;
		Il2CppCodeGenWriteBarrier((&___lightSHC_1), value);
	}

	inline static int32_t get_offset_of_primaryLightDirAndIntensity_2() { return static_cast<int32_t>(offsetof(serializableUnityARLightData_t3935513283, ___primaryLightDirAndIntensity_2)); }
	inline SerializableVector4_t1862640084 * get_primaryLightDirAndIntensity_2() const { return ___primaryLightDirAndIntensity_2; }
	inline SerializableVector4_t1862640084 ** get_address_of_primaryLightDirAndIntensity_2() { return &___primaryLightDirAndIntensity_2; }
	inline void set_primaryLightDirAndIntensity_2(SerializableVector4_t1862640084 * value)
	{
		___primaryLightDirAndIntensity_2 = value;
		Il2CppCodeGenWriteBarrier((&___primaryLightDirAndIntensity_2), value);
	}

	inline static int32_t get_offset_of_ambientIntensity_3() { return static_cast<int32_t>(offsetof(serializableUnityARLightData_t3935513283, ___ambientIntensity_3)); }
	inline float get_ambientIntensity_3() const { return ___ambientIntensity_3; }
	inline float* get_address_of_ambientIntensity_3() { return &___ambientIntensity_3; }
	inline void set_ambientIntensity_3(float value)
	{
		___ambientIntensity_3 = value;
	}

	inline static int32_t get_offset_of_ambientColorTemperature_4() { return static_cast<int32_t>(offsetof(serializableUnityARLightData_t3935513283, ___ambientColorTemperature_4)); }
	inline float get_ambientColorTemperature_4() const { return ___ambientColorTemperature_4; }
	inline float* get_address_of_ambientColorTemperature_4() { return &___ambientColorTemperature_4; }
	inline void set_ambientColorTemperature_4(float value)
	{
		___ambientColorTemperature_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLEUNITYARLIGHTDATA_T3935513283_H
#ifndef UNITYARANCHORDATA_T1157236668_H
#define UNITYARANCHORDATA_T1157236668_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARAnchorData
struct  UnityARAnchorData_t1157236668 
{
public:
	// System.IntPtr UnityEngine.XR.iOS.UnityARAnchorData::ptrIdentifier
	intptr_t ___ptrIdentifier_0;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.UnityARAnchorData::transform
	UnityARMatrix4x4_t4073345847  ___transform_1;
	// UnityEngine.XR.iOS.ARPlaneAnchorAlignment UnityEngine.XR.iOS.UnityARAnchorData::alignment
	int64_t ___alignment_2;
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARAnchorData::center
	Vector4_t3319028937  ___center_3;
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARAnchorData::extent
	Vector4_t3319028937  ___extent_4;
	// UnityEngine.XR.iOS.UnityARPlaneGeometry UnityEngine.XR.iOS.UnityARAnchorData::planeGeometry
	UnityARPlaneGeometry_t1646881137  ___planeGeometry_5;

public:
	inline static int32_t get_offset_of_ptrIdentifier_0() { return static_cast<int32_t>(offsetof(UnityARAnchorData_t1157236668, ___ptrIdentifier_0)); }
	inline intptr_t get_ptrIdentifier_0() const { return ___ptrIdentifier_0; }
	inline intptr_t* get_address_of_ptrIdentifier_0() { return &___ptrIdentifier_0; }
	inline void set_ptrIdentifier_0(intptr_t value)
	{
		___ptrIdentifier_0 = value;
	}

	inline static int32_t get_offset_of_transform_1() { return static_cast<int32_t>(offsetof(UnityARAnchorData_t1157236668, ___transform_1)); }
	inline UnityARMatrix4x4_t4073345847  get_transform_1() const { return ___transform_1; }
	inline UnityARMatrix4x4_t4073345847 * get_address_of_transform_1() { return &___transform_1; }
	inline void set_transform_1(UnityARMatrix4x4_t4073345847  value)
	{
		___transform_1 = value;
	}

	inline static int32_t get_offset_of_alignment_2() { return static_cast<int32_t>(offsetof(UnityARAnchorData_t1157236668, ___alignment_2)); }
	inline int64_t get_alignment_2() const { return ___alignment_2; }
	inline int64_t* get_address_of_alignment_2() { return &___alignment_2; }
	inline void set_alignment_2(int64_t value)
	{
		___alignment_2 = value;
	}

	inline static int32_t get_offset_of_center_3() { return static_cast<int32_t>(offsetof(UnityARAnchorData_t1157236668, ___center_3)); }
	inline Vector4_t3319028937  get_center_3() const { return ___center_3; }
	inline Vector4_t3319028937 * get_address_of_center_3() { return &___center_3; }
	inline void set_center_3(Vector4_t3319028937  value)
	{
		___center_3 = value;
	}

	inline static int32_t get_offset_of_extent_4() { return static_cast<int32_t>(offsetof(UnityARAnchorData_t1157236668, ___extent_4)); }
	inline Vector4_t3319028937  get_extent_4() const { return ___extent_4; }
	inline Vector4_t3319028937 * get_address_of_extent_4() { return &___extent_4; }
	inline void set_extent_4(Vector4_t3319028937  value)
	{
		___extent_4 = value;
	}

	inline static int32_t get_offset_of_planeGeometry_5() { return static_cast<int32_t>(offsetof(UnityARAnchorData_t1157236668, ___planeGeometry_5)); }
	inline UnityARPlaneGeometry_t1646881137  get_planeGeometry_5() const { return ___planeGeometry_5; }
	inline UnityARPlaneGeometry_t1646881137 * get_address_of_planeGeometry_5() { return &___planeGeometry_5; }
	inline void set_planeGeometry_5(UnityARPlaneGeometry_t1646881137  value)
	{
		___planeGeometry_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARANCHORDATA_T1157236668_H
#ifndef ARKITWORLDTRACKINGSESSIONCONFIGURATION_T273386347_H
#define ARKITWORLDTRACKINGSESSIONCONFIGURATION_T273386347_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration
struct  ARKitWorldTrackingSessionConfiguration_t273386347 
{
public:
	// UnityEngine.XR.iOS.UnityARAlignment UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration::alignment
	int32_t ___alignment_0;
	// UnityEngine.XR.iOS.UnityARPlaneDetection UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration::planeDetection
	int32_t ___planeDetection_1;
	// System.Boolean UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration::getPointCloudData
	bool ___getPointCloudData_2;
	// System.Boolean UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration::enableLightEstimation
	bool ___enableLightEstimation_3;
	// System.Boolean UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration::enableAutoFocus
	bool ___enableAutoFocus_4;
	// System.IntPtr UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration::videoFormat
	intptr_t ___videoFormat_5;
	// System.String UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration::arResourceGroupName
	String_t* ___arResourceGroupName_6;

public:
	inline static int32_t get_offset_of_alignment_0() { return static_cast<int32_t>(offsetof(ARKitWorldTrackingSessionConfiguration_t273386347, ___alignment_0)); }
	inline int32_t get_alignment_0() const { return ___alignment_0; }
	inline int32_t* get_address_of_alignment_0() { return &___alignment_0; }
	inline void set_alignment_0(int32_t value)
	{
		___alignment_0 = value;
	}

	inline static int32_t get_offset_of_planeDetection_1() { return static_cast<int32_t>(offsetof(ARKitWorldTrackingSessionConfiguration_t273386347, ___planeDetection_1)); }
	inline int32_t get_planeDetection_1() const { return ___planeDetection_1; }
	inline int32_t* get_address_of_planeDetection_1() { return &___planeDetection_1; }
	inline void set_planeDetection_1(int32_t value)
	{
		___planeDetection_1 = value;
	}

	inline static int32_t get_offset_of_getPointCloudData_2() { return static_cast<int32_t>(offsetof(ARKitWorldTrackingSessionConfiguration_t273386347, ___getPointCloudData_2)); }
	inline bool get_getPointCloudData_2() const { return ___getPointCloudData_2; }
	inline bool* get_address_of_getPointCloudData_2() { return &___getPointCloudData_2; }
	inline void set_getPointCloudData_2(bool value)
	{
		___getPointCloudData_2 = value;
	}

	inline static int32_t get_offset_of_enableLightEstimation_3() { return static_cast<int32_t>(offsetof(ARKitWorldTrackingSessionConfiguration_t273386347, ___enableLightEstimation_3)); }
	inline bool get_enableLightEstimation_3() const { return ___enableLightEstimation_3; }
	inline bool* get_address_of_enableLightEstimation_3() { return &___enableLightEstimation_3; }
	inline void set_enableLightEstimation_3(bool value)
	{
		___enableLightEstimation_3 = value;
	}

	inline static int32_t get_offset_of_enableAutoFocus_4() { return static_cast<int32_t>(offsetof(ARKitWorldTrackingSessionConfiguration_t273386347, ___enableAutoFocus_4)); }
	inline bool get_enableAutoFocus_4() const { return ___enableAutoFocus_4; }
	inline bool* get_address_of_enableAutoFocus_4() { return &___enableAutoFocus_4; }
	inline void set_enableAutoFocus_4(bool value)
	{
		___enableAutoFocus_4 = value;
	}

	inline static int32_t get_offset_of_videoFormat_5() { return static_cast<int32_t>(offsetof(ARKitWorldTrackingSessionConfiguration_t273386347, ___videoFormat_5)); }
	inline intptr_t get_videoFormat_5() const { return ___videoFormat_5; }
	inline intptr_t* get_address_of_videoFormat_5() { return &___videoFormat_5; }
	inline void set_videoFormat_5(intptr_t value)
	{
		___videoFormat_5 = value;
	}

	inline static int32_t get_offset_of_arResourceGroupName_6() { return static_cast<int32_t>(offsetof(ARKitWorldTrackingSessionConfiguration_t273386347, ___arResourceGroupName_6)); }
	inline String_t* get_arResourceGroupName_6() const { return ___arResourceGroupName_6; }
	inline String_t** get_address_of_arResourceGroupName_6() { return &___arResourceGroupName_6; }
	inline void set_arResourceGroupName_6(String_t* value)
	{
		___arResourceGroupName_6 = value;
		Il2CppCodeGenWriteBarrier((&___arResourceGroupName_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration
struct ARKitWorldTrackingSessionConfiguration_t273386347_marshaled_pinvoke
{
	int32_t ___alignment_0;
	int32_t ___planeDetection_1;
	int32_t ___getPointCloudData_2;
	int32_t ___enableLightEstimation_3;
	int32_t ___enableAutoFocus_4;
	intptr_t ___videoFormat_5;
	char* ___arResourceGroupName_6;
};
// Native definition for COM marshalling of UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration
struct ARKitWorldTrackingSessionConfiguration_t273386347_marshaled_com
{
	int32_t ___alignment_0;
	int32_t ___planeDetection_1;
	int32_t ___getPointCloudData_2;
	int32_t ___enableLightEstimation_3;
	int32_t ___enableAutoFocus_4;
	intptr_t ___videoFormat_5;
	Il2CppChar* ___arResourceGroupName_6;
};
#endif // ARKITWORLDTRACKINGSESSIONCONFIGURATION_T273386347_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef ASYNCCALLBACK_T3962456242_H
#define ASYNCCALLBACK_T3962456242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t3962456242  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T3962456242_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef UNITYARCAMERA_T2069150450_H
#define UNITYARCAMERA_T2069150450_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARCamera
struct  UnityARCamera_t2069150450 
{
public:
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.UnityARCamera::worldTransform
	UnityARMatrix4x4_t4073345847  ___worldTransform_0;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.UnityARCamera::projectionMatrix
	UnityARMatrix4x4_t4073345847  ___projectionMatrix_1;
	// UnityEngine.XR.iOS.ARTrackingState UnityEngine.XR.iOS.UnityARCamera::trackingState
	int32_t ___trackingState_2;
	// UnityEngine.XR.iOS.ARTrackingStateReason UnityEngine.XR.iOS.UnityARCamera::trackingReason
	int32_t ___trackingReason_3;
	// UnityEngine.XR.iOS.UnityVideoParams UnityEngine.XR.iOS.UnityARCamera::videoParams
	UnityVideoParams_t4155354995  ___videoParams_4;
	// UnityEngine.XR.iOS.UnityARLightData UnityEngine.XR.iOS.UnityARCamera::lightData
	UnityARLightData_t2160616730  ___lightData_5;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.UnityARCamera::displayTransform
	UnityARMatrix4x4_t4073345847  ___displayTransform_6;
	// UnityEngine.Vector3[] UnityEngine.XR.iOS.UnityARCamera::pointCloudData
	Vector3U5BU5D_t1718750761* ___pointCloudData_7;

public:
	inline static int32_t get_offset_of_worldTransform_0() { return static_cast<int32_t>(offsetof(UnityARCamera_t2069150450, ___worldTransform_0)); }
	inline UnityARMatrix4x4_t4073345847  get_worldTransform_0() const { return ___worldTransform_0; }
	inline UnityARMatrix4x4_t4073345847 * get_address_of_worldTransform_0() { return &___worldTransform_0; }
	inline void set_worldTransform_0(UnityARMatrix4x4_t4073345847  value)
	{
		___worldTransform_0 = value;
	}

	inline static int32_t get_offset_of_projectionMatrix_1() { return static_cast<int32_t>(offsetof(UnityARCamera_t2069150450, ___projectionMatrix_1)); }
	inline UnityARMatrix4x4_t4073345847  get_projectionMatrix_1() const { return ___projectionMatrix_1; }
	inline UnityARMatrix4x4_t4073345847 * get_address_of_projectionMatrix_1() { return &___projectionMatrix_1; }
	inline void set_projectionMatrix_1(UnityARMatrix4x4_t4073345847  value)
	{
		___projectionMatrix_1 = value;
	}

	inline static int32_t get_offset_of_trackingState_2() { return static_cast<int32_t>(offsetof(UnityARCamera_t2069150450, ___trackingState_2)); }
	inline int32_t get_trackingState_2() const { return ___trackingState_2; }
	inline int32_t* get_address_of_trackingState_2() { return &___trackingState_2; }
	inline void set_trackingState_2(int32_t value)
	{
		___trackingState_2 = value;
	}

	inline static int32_t get_offset_of_trackingReason_3() { return static_cast<int32_t>(offsetof(UnityARCamera_t2069150450, ___trackingReason_3)); }
	inline int32_t get_trackingReason_3() const { return ___trackingReason_3; }
	inline int32_t* get_address_of_trackingReason_3() { return &___trackingReason_3; }
	inline void set_trackingReason_3(int32_t value)
	{
		___trackingReason_3 = value;
	}

	inline static int32_t get_offset_of_videoParams_4() { return static_cast<int32_t>(offsetof(UnityARCamera_t2069150450, ___videoParams_4)); }
	inline UnityVideoParams_t4155354995  get_videoParams_4() const { return ___videoParams_4; }
	inline UnityVideoParams_t4155354995 * get_address_of_videoParams_4() { return &___videoParams_4; }
	inline void set_videoParams_4(UnityVideoParams_t4155354995  value)
	{
		___videoParams_4 = value;
	}

	inline static int32_t get_offset_of_lightData_5() { return static_cast<int32_t>(offsetof(UnityARCamera_t2069150450, ___lightData_5)); }
	inline UnityARLightData_t2160616730  get_lightData_5() const { return ___lightData_5; }
	inline UnityARLightData_t2160616730 * get_address_of_lightData_5() { return &___lightData_5; }
	inline void set_lightData_5(UnityARLightData_t2160616730  value)
	{
		___lightData_5 = value;
	}

	inline static int32_t get_offset_of_displayTransform_6() { return static_cast<int32_t>(offsetof(UnityARCamera_t2069150450, ___displayTransform_6)); }
	inline UnityARMatrix4x4_t4073345847  get_displayTransform_6() const { return ___displayTransform_6; }
	inline UnityARMatrix4x4_t4073345847 * get_address_of_displayTransform_6() { return &___displayTransform_6; }
	inline void set_displayTransform_6(UnityARMatrix4x4_t4073345847  value)
	{
		___displayTransform_6 = value;
	}

	inline static int32_t get_offset_of_pointCloudData_7() { return static_cast<int32_t>(offsetof(UnityARCamera_t2069150450, ___pointCloudData_7)); }
	inline Vector3U5BU5D_t1718750761* get_pointCloudData_7() const { return ___pointCloudData_7; }
	inline Vector3U5BU5D_t1718750761** get_address_of_pointCloudData_7() { return &___pointCloudData_7; }
	inline void set_pointCloudData_7(Vector3U5BU5D_t1718750761* value)
	{
		___pointCloudData_7 = value;
		Il2CppCodeGenWriteBarrier((&___pointCloudData_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.iOS.UnityARCamera
struct UnityARCamera_t2069150450_marshaled_pinvoke
{
	UnityARMatrix4x4_t4073345847  ___worldTransform_0;
	UnityARMatrix4x4_t4073345847  ___projectionMatrix_1;
	int32_t ___trackingState_2;
	int32_t ___trackingReason_3;
	UnityVideoParams_t4155354995  ___videoParams_4;
	UnityARLightData_t2160616730_marshaled_pinvoke ___lightData_5;
	UnityARMatrix4x4_t4073345847  ___displayTransform_6;
	Vector3_t3722313464 * ___pointCloudData_7;
};
// Native definition for COM marshalling of UnityEngine.XR.iOS.UnityARCamera
struct UnityARCamera_t2069150450_marshaled_com
{
	UnityARMatrix4x4_t4073345847  ___worldTransform_0;
	UnityARMatrix4x4_t4073345847  ___projectionMatrix_1;
	int32_t ___trackingState_2;
	int32_t ___trackingReason_3;
	UnityVideoParams_t4155354995  ___videoParams_4;
	UnityARLightData_t2160616730_marshaled_com ___lightData_5;
	UnityARMatrix4x4_t4073345847  ___displayTransform_6;
	Vector3_t3722313464 * ___pointCloudData_7;
};
#endif // UNITYARCAMERA_T2069150450_H
#ifndef TRANSFORM_T3600365921_H
#define TRANSFORM_T3600365921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3600365921  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3600365921_H
#ifndef VIDEOFORMATBUTTONPRESSED_T1187798507_H
#define VIDEOFORMATBUTTONPRESSED_T1187798507_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VideoFormatButton/VideoFormatButtonPressed
struct  VideoFormatButtonPressed_t1187798507  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEOFORMATBUTTONPRESSED_T1187798507_H
#ifndef ARFACEANCHOR_T1844206636_H
#define ARFACEANCHOR_T1844206636_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARFaceAnchor
struct  ARFaceAnchor_t1844206636  : public RuntimeObject
{
public:
	// UnityEngine.XR.iOS.UnityARFaceAnchorData UnityEngine.XR.iOS.ARFaceAnchor::faceAnchorData
	UnityARFaceAnchorData_t2028622935  ___faceAnchorData_0;

public:
	inline static int32_t get_offset_of_faceAnchorData_0() { return static_cast<int32_t>(offsetof(ARFaceAnchor_t1844206636, ___faceAnchorData_0)); }
	inline UnityARFaceAnchorData_t2028622935  get_faceAnchorData_0() const { return ___faceAnchorData_0; }
	inline UnityARFaceAnchorData_t2028622935 * get_address_of_faceAnchorData_0() { return &___faceAnchorData_0; }
	inline void set_faceAnchorData_0(UnityARFaceAnchorData_t2028622935  value)
	{
		___faceAnchorData_0 = value;
	}
};

struct ARFaceAnchor_t1844206636_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Single> UnityEngine.XR.iOS.ARFaceAnchor::blendshapesDictionary
	Dictionary_2_t1182523073 * ___blendshapesDictionary_1;
	// UnityEngine.XR.iOS.ARFaceAnchor/DictionaryVisitorHandler UnityEngine.XR.iOS.ARFaceAnchor::<>f__mg$cache0
	DictionaryVisitorHandler_t414487210 * ___U3CU3Ef__mgU24cache0_2;

public:
	inline static int32_t get_offset_of_blendshapesDictionary_1() { return static_cast<int32_t>(offsetof(ARFaceAnchor_t1844206636_StaticFields, ___blendshapesDictionary_1)); }
	inline Dictionary_2_t1182523073 * get_blendshapesDictionary_1() const { return ___blendshapesDictionary_1; }
	inline Dictionary_2_t1182523073 ** get_address_of_blendshapesDictionary_1() { return &___blendshapesDictionary_1; }
	inline void set_blendshapesDictionary_1(Dictionary_2_t1182523073 * value)
	{
		___blendshapesDictionary_1 = value;
		Il2CppCodeGenWriteBarrier((&___blendshapesDictionary_1), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_2() { return static_cast<int32_t>(offsetof(ARFaceAnchor_t1844206636_StaticFields, ___U3CU3Ef__mgU24cache0_2)); }
	inline DictionaryVisitorHandler_t414487210 * get_U3CU3Ef__mgU24cache0_2() const { return ___U3CU3Ef__mgU24cache0_2; }
	inline DictionaryVisitorHandler_t414487210 ** get_address_of_U3CU3Ef__mgU24cache0_2() { return &___U3CU3Ef__mgU24cache0_2; }
	inline void set_U3CU3Ef__mgU24cache0_2(DictionaryVisitorHandler_t414487210 * value)
	{
		___U3CU3Ef__mgU24cache0_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARFACEANCHOR_T1844206636_H
#ifndef ARPLANEANCHOR_T2049372221_H
#define ARPLANEANCHOR_T2049372221_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARPlaneAnchor
struct  ARPlaneAnchor_t2049372221  : public RuntimeObject
{
public:
	// UnityEngine.XR.iOS.UnityARAnchorData UnityEngine.XR.iOS.ARPlaneAnchor::planeAnchorData
	UnityARAnchorData_t1157236668  ___planeAnchorData_0;

public:
	inline static int32_t get_offset_of_planeAnchorData_0() { return static_cast<int32_t>(offsetof(ARPlaneAnchor_t2049372221, ___planeAnchorData_0)); }
	inline UnityARAnchorData_t1157236668  get_planeAnchorData_0() const { return ___planeAnchorData_0; }
	inline UnityARAnchorData_t1157236668 * get_address_of_planeAnchorData_0() { return &___planeAnchorData_0; }
	inline void set_planeAnchorData_0(UnityARAnchorData_t1157236668  value)
	{
		___planeAnchorData_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARPLANEANCHOR_T2049372221_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef UNITYARSESSIONNATIVEINTERFACE_T3929719369_H
#define UNITYARSESSIONNATIVEINTERFACE_T3929719369_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface
struct  UnityARSessionNativeInterface_t3929719369  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.XR.iOS.UnityARSessionNativeInterface::m_NativeARSession
	intptr_t ___m_NativeARSession_18;

public:
	inline static int32_t get_offset_of_m_NativeARSession_18() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369, ___m_NativeARSession_18)); }
	inline intptr_t get_m_NativeARSession_18() const { return ___m_NativeARSession_18; }
	inline intptr_t* get_address_of_m_NativeARSession_18() { return &___m_NativeARSession_18; }
	inline void set_m_NativeARSession_18(intptr_t value)
	{
		___m_NativeARSession_18 = value;
	}
};

struct UnityARSessionNativeInterface_t3929719369_StaticFields
{
public:
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFrameUpdate UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARFrameUpdatedEvent
	ARFrameUpdate_t1157215840 * ___ARFrameUpdatedEvent_0;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorAdded UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARAnchorAddedEvent
	ARAnchorAdded_t1608557165 * ___ARAnchorAddedEvent_1;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorUpdated UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARAnchorUpdatedEvent
	ARAnchorUpdated_t3113222537 * ___ARAnchorUpdatedEvent_2;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorRemoved UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARAnchorRemovedEvent
	ARAnchorRemoved_t4030593004 * ___ARAnchorRemovedEvent_3;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorAdded UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARUserAnchorAddedEvent
	ARUserAnchorAdded_t1851120876 * ___ARUserAnchorAddedEvent_4;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorUpdated UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARUserAnchorUpdatedEvent
	ARUserAnchorUpdated_t4007601678 * ___ARUserAnchorUpdatedEvent_5;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorRemoved UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARUserAnchorRemovedEvent
	ARUserAnchorRemoved_t23344545 * ___ARUserAnchorRemovedEvent_6;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFaceAnchorAdded UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARFaceAnchorAddedEvent
	ARFaceAnchorAdded_t3526051790 * ___ARFaceAnchorAddedEvent_7;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFaceAnchorUpdated UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARFaceAnchorUpdatedEvent
	ARFaceAnchorUpdated_t3258688950 * ___ARFaceAnchorUpdatedEvent_8;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFaceAnchorRemoved UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARFaceAnchorRemovedEvent
	ARFaceAnchorRemoved_t2550278937 * ___ARFaceAnchorRemovedEvent_9;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARImageAnchorAdded UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARImageAnchorAddedEvent
	ARImageAnchorAdded_t763367172 * ___ARImageAnchorAddedEvent_10;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARImageAnchorUpdated UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARImageAnchorUpdatedEvent
	ARImageAnchorUpdated_t1988379239 * ___ARImageAnchorUpdatedEvent_11;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARImageAnchorRemoved UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARImageAnchorRemovedEvent
	ARImageAnchorRemoved_t841752569 * ___ARImageAnchorRemovedEvent_12;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionFailed UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARSessionFailedEvent
	ARSessionFailed_t2125002991 * ___ARSessionFailedEvent_13;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionCallback UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARSessionInterruptedEvent
	ARSessionCallback_t3772093212 * ___ARSessionInterruptedEvent_14;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionCallback UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARSessioninterruptionEndedEvent
	ARSessionCallback_t3772093212 * ___ARSessioninterruptionEndedEvent_15;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionTrackingChanged UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARSessionTrackingChangedEvent
	ARSessionTrackingChanged_t923029411 * ___ARSessionTrackingChangedEvent_16;
	// System.Boolean UnityEngine.XR.iOS.UnityARSessionNativeInterface::<ARSessionShouldAttemptRelocalization>k__BackingField
	bool ___U3CARSessionShouldAttemptRelocalizationU3Ek__BackingField_17;
	// UnityEngine.XR.iOS.UnityARCamera UnityEngine.XR.iOS.UnityARSessionNativeInterface::s_Camera
	UnityARCamera_t2069150450  ___s_Camera_19;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface UnityEngine.XR.iOS.UnityARSessionNativeInterface::s_UnityARSessionNativeInterface
	UnityARSessionNativeInterface_t3929719369 * ___s_UnityARSessionNativeInterface_20;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFrameUpdate UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache0
	internal_ARFrameUpdate_t3254989823 * ___U3CU3Ef__mgU24cache0_21;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionFailed UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache1
	ARSessionFailed_t2125002991 * ___U3CU3Ef__mgU24cache1_22;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionCallback UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache2
	ARSessionCallback_t3772093212 * ___U3CU3Ef__mgU24cache2_23;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionCallback UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache3
	ARSessionCallback_t3772093212 * ___U3CU3Ef__mgU24cache3_24;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionLocalizeCallback UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache4
	ARSessionLocalizeCallback_t3284060032 * ___U3CU3Ef__mgU24cache4_25;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARSessionTrackingChanged UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache5
	internal_ARSessionTrackingChanged_t1988849735 * ___U3CU3Ef__mgU24cache5_26;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorAdded UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache6
	internal_ARAnchorAdded_t1565083332 * ___U3CU3Ef__mgU24cache6_27;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorUpdated UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache7
	internal_ARAnchorUpdated_t2645242205 * ___U3CU3Ef__mgU24cache7_28;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorRemoved UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache8
	internal_ARAnchorRemoved_t3371657877 * ___U3CU3Ef__mgU24cache8_29;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorAdded UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache9
	internal_ARUserAnchorAdded_t3285282493 * ___U3CU3Ef__mgU24cache9_30;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorUpdated UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cacheA
	internal_ARUserAnchorUpdated_t3964727538 * ___U3CU3Ef__mgU24cacheA_31;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorRemoved UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cacheB
	internal_ARUserAnchorRemoved_t386858594 * ___U3CU3Ef__mgU24cacheB_32;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFaceAnchorAdded UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cacheC
	internal_ARFaceAnchorAdded_t1021040265 * ___U3CU3Ef__mgU24cacheC_33;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFaceAnchorUpdated UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cacheD
	internal_ARFaceAnchorUpdated_t3423900432 * ___U3CU3Ef__mgU24cacheD_34;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFaceAnchorRemoved UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cacheE
	internal_ARFaceAnchorRemoved_t2563439402 * ___U3CU3Ef__mgU24cacheE_35;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARImageAnchorAdded UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cacheF
	internal_ARImageAnchorAdded_t958088978 * ___U3CU3Ef__mgU24cacheF_36;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARImageAnchorUpdated UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache10
	internal_ARImageAnchorUpdated_t294417830 * ___U3CU3Ef__mgU24cache10_37;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARImageAnchorRemoved UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache11
	internal_ARImageAnchorRemoved_t1751104571 * ___U3CU3Ef__mgU24cache11_38;

public:
	inline static int32_t get_offset_of_ARFrameUpdatedEvent_0() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___ARFrameUpdatedEvent_0)); }
	inline ARFrameUpdate_t1157215840 * get_ARFrameUpdatedEvent_0() const { return ___ARFrameUpdatedEvent_0; }
	inline ARFrameUpdate_t1157215840 ** get_address_of_ARFrameUpdatedEvent_0() { return &___ARFrameUpdatedEvent_0; }
	inline void set_ARFrameUpdatedEvent_0(ARFrameUpdate_t1157215840 * value)
	{
		___ARFrameUpdatedEvent_0 = value;
		Il2CppCodeGenWriteBarrier((&___ARFrameUpdatedEvent_0), value);
	}

	inline static int32_t get_offset_of_ARAnchorAddedEvent_1() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___ARAnchorAddedEvent_1)); }
	inline ARAnchorAdded_t1608557165 * get_ARAnchorAddedEvent_1() const { return ___ARAnchorAddedEvent_1; }
	inline ARAnchorAdded_t1608557165 ** get_address_of_ARAnchorAddedEvent_1() { return &___ARAnchorAddedEvent_1; }
	inline void set_ARAnchorAddedEvent_1(ARAnchorAdded_t1608557165 * value)
	{
		___ARAnchorAddedEvent_1 = value;
		Il2CppCodeGenWriteBarrier((&___ARAnchorAddedEvent_1), value);
	}

	inline static int32_t get_offset_of_ARAnchorUpdatedEvent_2() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___ARAnchorUpdatedEvent_2)); }
	inline ARAnchorUpdated_t3113222537 * get_ARAnchorUpdatedEvent_2() const { return ___ARAnchorUpdatedEvent_2; }
	inline ARAnchorUpdated_t3113222537 ** get_address_of_ARAnchorUpdatedEvent_2() { return &___ARAnchorUpdatedEvent_2; }
	inline void set_ARAnchorUpdatedEvent_2(ARAnchorUpdated_t3113222537 * value)
	{
		___ARAnchorUpdatedEvent_2 = value;
		Il2CppCodeGenWriteBarrier((&___ARAnchorUpdatedEvent_2), value);
	}

	inline static int32_t get_offset_of_ARAnchorRemovedEvent_3() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___ARAnchorRemovedEvent_3)); }
	inline ARAnchorRemoved_t4030593004 * get_ARAnchorRemovedEvent_3() const { return ___ARAnchorRemovedEvent_3; }
	inline ARAnchorRemoved_t4030593004 ** get_address_of_ARAnchorRemovedEvent_3() { return &___ARAnchorRemovedEvent_3; }
	inline void set_ARAnchorRemovedEvent_3(ARAnchorRemoved_t4030593004 * value)
	{
		___ARAnchorRemovedEvent_3 = value;
		Il2CppCodeGenWriteBarrier((&___ARAnchorRemovedEvent_3), value);
	}

	inline static int32_t get_offset_of_ARUserAnchorAddedEvent_4() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___ARUserAnchorAddedEvent_4)); }
	inline ARUserAnchorAdded_t1851120876 * get_ARUserAnchorAddedEvent_4() const { return ___ARUserAnchorAddedEvent_4; }
	inline ARUserAnchorAdded_t1851120876 ** get_address_of_ARUserAnchorAddedEvent_4() { return &___ARUserAnchorAddedEvent_4; }
	inline void set_ARUserAnchorAddedEvent_4(ARUserAnchorAdded_t1851120876 * value)
	{
		___ARUserAnchorAddedEvent_4 = value;
		Il2CppCodeGenWriteBarrier((&___ARUserAnchorAddedEvent_4), value);
	}

	inline static int32_t get_offset_of_ARUserAnchorUpdatedEvent_5() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___ARUserAnchorUpdatedEvent_5)); }
	inline ARUserAnchorUpdated_t4007601678 * get_ARUserAnchorUpdatedEvent_5() const { return ___ARUserAnchorUpdatedEvent_5; }
	inline ARUserAnchorUpdated_t4007601678 ** get_address_of_ARUserAnchorUpdatedEvent_5() { return &___ARUserAnchorUpdatedEvent_5; }
	inline void set_ARUserAnchorUpdatedEvent_5(ARUserAnchorUpdated_t4007601678 * value)
	{
		___ARUserAnchorUpdatedEvent_5 = value;
		Il2CppCodeGenWriteBarrier((&___ARUserAnchorUpdatedEvent_5), value);
	}

	inline static int32_t get_offset_of_ARUserAnchorRemovedEvent_6() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___ARUserAnchorRemovedEvent_6)); }
	inline ARUserAnchorRemoved_t23344545 * get_ARUserAnchorRemovedEvent_6() const { return ___ARUserAnchorRemovedEvent_6; }
	inline ARUserAnchorRemoved_t23344545 ** get_address_of_ARUserAnchorRemovedEvent_6() { return &___ARUserAnchorRemovedEvent_6; }
	inline void set_ARUserAnchorRemovedEvent_6(ARUserAnchorRemoved_t23344545 * value)
	{
		___ARUserAnchorRemovedEvent_6 = value;
		Il2CppCodeGenWriteBarrier((&___ARUserAnchorRemovedEvent_6), value);
	}

	inline static int32_t get_offset_of_ARFaceAnchorAddedEvent_7() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___ARFaceAnchorAddedEvent_7)); }
	inline ARFaceAnchorAdded_t3526051790 * get_ARFaceAnchorAddedEvent_7() const { return ___ARFaceAnchorAddedEvent_7; }
	inline ARFaceAnchorAdded_t3526051790 ** get_address_of_ARFaceAnchorAddedEvent_7() { return &___ARFaceAnchorAddedEvent_7; }
	inline void set_ARFaceAnchorAddedEvent_7(ARFaceAnchorAdded_t3526051790 * value)
	{
		___ARFaceAnchorAddedEvent_7 = value;
		Il2CppCodeGenWriteBarrier((&___ARFaceAnchorAddedEvent_7), value);
	}

	inline static int32_t get_offset_of_ARFaceAnchorUpdatedEvent_8() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___ARFaceAnchorUpdatedEvent_8)); }
	inline ARFaceAnchorUpdated_t3258688950 * get_ARFaceAnchorUpdatedEvent_8() const { return ___ARFaceAnchorUpdatedEvent_8; }
	inline ARFaceAnchorUpdated_t3258688950 ** get_address_of_ARFaceAnchorUpdatedEvent_8() { return &___ARFaceAnchorUpdatedEvent_8; }
	inline void set_ARFaceAnchorUpdatedEvent_8(ARFaceAnchorUpdated_t3258688950 * value)
	{
		___ARFaceAnchorUpdatedEvent_8 = value;
		Il2CppCodeGenWriteBarrier((&___ARFaceAnchorUpdatedEvent_8), value);
	}

	inline static int32_t get_offset_of_ARFaceAnchorRemovedEvent_9() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___ARFaceAnchorRemovedEvent_9)); }
	inline ARFaceAnchorRemoved_t2550278937 * get_ARFaceAnchorRemovedEvent_9() const { return ___ARFaceAnchorRemovedEvent_9; }
	inline ARFaceAnchorRemoved_t2550278937 ** get_address_of_ARFaceAnchorRemovedEvent_9() { return &___ARFaceAnchorRemovedEvent_9; }
	inline void set_ARFaceAnchorRemovedEvent_9(ARFaceAnchorRemoved_t2550278937 * value)
	{
		___ARFaceAnchorRemovedEvent_9 = value;
		Il2CppCodeGenWriteBarrier((&___ARFaceAnchorRemovedEvent_9), value);
	}

	inline static int32_t get_offset_of_ARImageAnchorAddedEvent_10() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___ARImageAnchorAddedEvent_10)); }
	inline ARImageAnchorAdded_t763367172 * get_ARImageAnchorAddedEvent_10() const { return ___ARImageAnchorAddedEvent_10; }
	inline ARImageAnchorAdded_t763367172 ** get_address_of_ARImageAnchorAddedEvent_10() { return &___ARImageAnchorAddedEvent_10; }
	inline void set_ARImageAnchorAddedEvent_10(ARImageAnchorAdded_t763367172 * value)
	{
		___ARImageAnchorAddedEvent_10 = value;
		Il2CppCodeGenWriteBarrier((&___ARImageAnchorAddedEvent_10), value);
	}

	inline static int32_t get_offset_of_ARImageAnchorUpdatedEvent_11() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___ARImageAnchorUpdatedEvent_11)); }
	inline ARImageAnchorUpdated_t1988379239 * get_ARImageAnchorUpdatedEvent_11() const { return ___ARImageAnchorUpdatedEvent_11; }
	inline ARImageAnchorUpdated_t1988379239 ** get_address_of_ARImageAnchorUpdatedEvent_11() { return &___ARImageAnchorUpdatedEvent_11; }
	inline void set_ARImageAnchorUpdatedEvent_11(ARImageAnchorUpdated_t1988379239 * value)
	{
		___ARImageAnchorUpdatedEvent_11 = value;
		Il2CppCodeGenWriteBarrier((&___ARImageAnchorUpdatedEvent_11), value);
	}

	inline static int32_t get_offset_of_ARImageAnchorRemovedEvent_12() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___ARImageAnchorRemovedEvent_12)); }
	inline ARImageAnchorRemoved_t841752569 * get_ARImageAnchorRemovedEvent_12() const { return ___ARImageAnchorRemovedEvent_12; }
	inline ARImageAnchorRemoved_t841752569 ** get_address_of_ARImageAnchorRemovedEvent_12() { return &___ARImageAnchorRemovedEvent_12; }
	inline void set_ARImageAnchorRemovedEvent_12(ARImageAnchorRemoved_t841752569 * value)
	{
		___ARImageAnchorRemovedEvent_12 = value;
		Il2CppCodeGenWriteBarrier((&___ARImageAnchorRemovedEvent_12), value);
	}

	inline static int32_t get_offset_of_ARSessionFailedEvent_13() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___ARSessionFailedEvent_13)); }
	inline ARSessionFailed_t2125002991 * get_ARSessionFailedEvent_13() const { return ___ARSessionFailedEvent_13; }
	inline ARSessionFailed_t2125002991 ** get_address_of_ARSessionFailedEvent_13() { return &___ARSessionFailedEvent_13; }
	inline void set_ARSessionFailedEvent_13(ARSessionFailed_t2125002991 * value)
	{
		___ARSessionFailedEvent_13 = value;
		Il2CppCodeGenWriteBarrier((&___ARSessionFailedEvent_13), value);
	}

	inline static int32_t get_offset_of_ARSessionInterruptedEvent_14() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___ARSessionInterruptedEvent_14)); }
	inline ARSessionCallback_t3772093212 * get_ARSessionInterruptedEvent_14() const { return ___ARSessionInterruptedEvent_14; }
	inline ARSessionCallback_t3772093212 ** get_address_of_ARSessionInterruptedEvent_14() { return &___ARSessionInterruptedEvent_14; }
	inline void set_ARSessionInterruptedEvent_14(ARSessionCallback_t3772093212 * value)
	{
		___ARSessionInterruptedEvent_14 = value;
		Il2CppCodeGenWriteBarrier((&___ARSessionInterruptedEvent_14), value);
	}

	inline static int32_t get_offset_of_ARSessioninterruptionEndedEvent_15() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___ARSessioninterruptionEndedEvent_15)); }
	inline ARSessionCallback_t3772093212 * get_ARSessioninterruptionEndedEvent_15() const { return ___ARSessioninterruptionEndedEvent_15; }
	inline ARSessionCallback_t3772093212 ** get_address_of_ARSessioninterruptionEndedEvent_15() { return &___ARSessioninterruptionEndedEvent_15; }
	inline void set_ARSessioninterruptionEndedEvent_15(ARSessionCallback_t3772093212 * value)
	{
		___ARSessioninterruptionEndedEvent_15 = value;
		Il2CppCodeGenWriteBarrier((&___ARSessioninterruptionEndedEvent_15), value);
	}

	inline static int32_t get_offset_of_ARSessionTrackingChangedEvent_16() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___ARSessionTrackingChangedEvent_16)); }
	inline ARSessionTrackingChanged_t923029411 * get_ARSessionTrackingChangedEvent_16() const { return ___ARSessionTrackingChangedEvent_16; }
	inline ARSessionTrackingChanged_t923029411 ** get_address_of_ARSessionTrackingChangedEvent_16() { return &___ARSessionTrackingChangedEvent_16; }
	inline void set_ARSessionTrackingChangedEvent_16(ARSessionTrackingChanged_t923029411 * value)
	{
		___ARSessionTrackingChangedEvent_16 = value;
		Il2CppCodeGenWriteBarrier((&___ARSessionTrackingChangedEvent_16), value);
	}

	inline static int32_t get_offset_of_U3CARSessionShouldAttemptRelocalizationU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___U3CARSessionShouldAttemptRelocalizationU3Ek__BackingField_17)); }
	inline bool get_U3CARSessionShouldAttemptRelocalizationU3Ek__BackingField_17() const { return ___U3CARSessionShouldAttemptRelocalizationU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CARSessionShouldAttemptRelocalizationU3Ek__BackingField_17() { return &___U3CARSessionShouldAttemptRelocalizationU3Ek__BackingField_17; }
	inline void set_U3CARSessionShouldAttemptRelocalizationU3Ek__BackingField_17(bool value)
	{
		___U3CARSessionShouldAttemptRelocalizationU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_s_Camera_19() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___s_Camera_19)); }
	inline UnityARCamera_t2069150450  get_s_Camera_19() const { return ___s_Camera_19; }
	inline UnityARCamera_t2069150450 * get_address_of_s_Camera_19() { return &___s_Camera_19; }
	inline void set_s_Camera_19(UnityARCamera_t2069150450  value)
	{
		___s_Camera_19 = value;
	}

	inline static int32_t get_offset_of_s_UnityARSessionNativeInterface_20() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___s_UnityARSessionNativeInterface_20)); }
	inline UnityARSessionNativeInterface_t3929719369 * get_s_UnityARSessionNativeInterface_20() const { return ___s_UnityARSessionNativeInterface_20; }
	inline UnityARSessionNativeInterface_t3929719369 ** get_address_of_s_UnityARSessionNativeInterface_20() { return &___s_UnityARSessionNativeInterface_20; }
	inline void set_s_UnityARSessionNativeInterface_20(UnityARSessionNativeInterface_t3929719369 * value)
	{
		___s_UnityARSessionNativeInterface_20 = value;
		Il2CppCodeGenWriteBarrier((&___s_UnityARSessionNativeInterface_20), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_21() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___U3CU3Ef__mgU24cache0_21)); }
	inline internal_ARFrameUpdate_t3254989823 * get_U3CU3Ef__mgU24cache0_21() const { return ___U3CU3Ef__mgU24cache0_21; }
	inline internal_ARFrameUpdate_t3254989823 ** get_address_of_U3CU3Ef__mgU24cache0_21() { return &___U3CU3Ef__mgU24cache0_21; }
	inline void set_U3CU3Ef__mgU24cache0_21(internal_ARFrameUpdate_t3254989823 * value)
	{
		___U3CU3Ef__mgU24cache0_21 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_21), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_22() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___U3CU3Ef__mgU24cache1_22)); }
	inline ARSessionFailed_t2125002991 * get_U3CU3Ef__mgU24cache1_22() const { return ___U3CU3Ef__mgU24cache1_22; }
	inline ARSessionFailed_t2125002991 ** get_address_of_U3CU3Ef__mgU24cache1_22() { return &___U3CU3Ef__mgU24cache1_22; }
	inline void set_U3CU3Ef__mgU24cache1_22(ARSessionFailed_t2125002991 * value)
	{
		___U3CU3Ef__mgU24cache1_22 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache1_22), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache2_23() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___U3CU3Ef__mgU24cache2_23)); }
	inline ARSessionCallback_t3772093212 * get_U3CU3Ef__mgU24cache2_23() const { return ___U3CU3Ef__mgU24cache2_23; }
	inline ARSessionCallback_t3772093212 ** get_address_of_U3CU3Ef__mgU24cache2_23() { return &___U3CU3Ef__mgU24cache2_23; }
	inline void set_U3CU3Ef__mgU24cache2_23(ARSessionCallback_t3772093212 * value)
	{
		___U3CU3Ef__mgU24cache2_23 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache2_23), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache3_24() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___U3CU3Ef__mgU24cache3_24)); }
	inline ARSessionCallback_t3772093212 * get_U3CU3Ef__mgU24cache3_24() const { return ___U3CU3Ef__mgU24cache3_24; }
	inline ARSessionCallback_t3772093212 ** get_address_of_U3CU3Ef__mgU24cache3_24() { return &___U3CU3Ef__mgU24cache3_24; }
	inline void set_U3CU3Ef__mgU24cache3_24(ARSessionCallback_t3772093212 * value)
	{
		___U3CU3Ef__mgU24cache3_24 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache3_24), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache4_25() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___U3CU3Ef__mgU24cache4_25)); }
	inline ARSessionLocalizeCallback_t3284060032 * get_U3CU3Ef__mgU24cache4_25() const { return ___U3CU3Ef__mgU24cache4_25; }
	inline ARSessionLocalizeCallback_t3284060032 ** get_address_of_U3CU3Ef__mgU24cache4_25() { return &___U3CU3Ef__mgU24cache4_25; }
	inline void set_U3CU3Ef__mgU24cache4_25(ARSessionLocalizeCallback_t3284060032 * value)
	{
		___U3CU3Ef__mgU24cache4_25 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache4_25), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache5_26() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___U3CU3Ef__mgU24cache5_26)); }
	inline internal_ARSessionTrackingChanged_t1988849735 * get_U3CU3Ef__mgU24cache5_26() const { return ___U3CU3Ef__mgU24cache5_26; }
	inline internal_ARSessionTrackingChanged_t1988849735 ** get_address_of_U3CU3Ef__mgU24cache5_26() { return &___U3CU3Ef__mgU24cache5_26; }
	inline void set_U3CU3Ef__mgU24cache5_26(internal_ARSessionTrackingChanged_t1988849735 * value)
	{
		___U3CU3Ef__mgU24cache5_26 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache5_26), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache6_27() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___U3CU3Ef__mgU24cache6_27)); }
	inline internal_ARAnchorAdded_t1565083332 * get_U3CU3Ef__mgU24cache6_27() const { return ___U3CU3Ef__mgU24cache6_27; }
	inline internal_ARAnchorAdded_t1565083332 ** get_address_of_U3CU3Ef__mgU24cache6_27() { return &___U3CU3Ef__mgU24cache6_27; }
	inline void set_U3CU3Ef__mgU24cache6_27(internal_ARAnchorAdded_t1565083332 * value)
	{
		___U3CU3Ef__mgU24cache6_27 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache6_27), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache7_28() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___U3CU3Ef__mgU24cache7_28)); }
	inline internal_ARAnchorUpdated_t2645242205 * get_U3CU3Ef__mgU24cache7_28() const { return ___U3CU3Ef__mgU24cache7_28; }
	inline internal_ARAnchorUpdated_t2645242205 ** get_address_of_U3CU3Ef__mgU24cache7_28() { return &___U3CU3Ef__mgU24cache7_28; }
	inline void set_U3CU3Ef__mgU24cache7_28(internal_ARAnchorUpdated_t2645242205 * value)
	{
		___U3CU3Ef__mgU24cache7_28 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache7_28), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache8_29() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___U3CU3Ef__mgU24cache8_29)); }
	inline internal_ARAnchorRemoved_t3371657877 * get_U3CU3Ef__mgU24cache8_29() const { return ___U3CU3Ef__mgU24cache8_29; }
	inline internal_ARAnchorRemoved_t3371657877 ** get_address_of_U3CU3Ef__mgU24cache8_29() { return &___U3CU3Ef__mgU24cache8_29; }
	inline void set_U3CU3Ef__mgU24cache8_29(internal_ARAnchorRemoved_t3371657877 * value)
	{
		___U3CU3Ef__mgU24cache8_29 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache8_29), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache9_30() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___U3CU3Ef__mgU24cache9_30)); }
	inline internal_ARUserAnchorAdded_t3285282493 * get_U3CU3Ef__mgU24cache9_30() const { return ___U3CU3Ef__mgU24cache9_30; }
	inline internal_ARUserAnchorAdded_t3285282493 ** get_address_of_U3CU3Ef__mgU24cache9_30() { return &___U3CU3Ef__mgU24cache9_30; }
	inline void set_U3CU3Ef__mgU24cache9_30(internal_ARUserAnchorAdded_t3285282493 * value)
	{
		___U3CU3Ef__mgU24cache9_30 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache9_30), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheA_31() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___U3CU3Ef__mgU24cacheA_31)); }
	inline internal_ARUserAnchorUpdated_t3964727538 * get_U3CU3Ef__mgU24cacheA_31() const { return ___U3CU3Ef__mgU24cacheA_31; }
	inline internal_ARUserAnchorUpdated_t3964727538 ** get_address_of_U3CU3Ef__mgU24cacheA_31() { return &___U3CU3Ef__mgU24cacheA_31; }
	inline void set_U3CU3Ef__mgU24cacheA_31(internal_ARUserAnchorUpdated_t3964727538 * value)
	{
		___U3CU3Ef__mgU24cacheA_31 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheA_31), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheB_32() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___U3CU3Ef__mgU24cacheB_32)); }
	inline internal_ARUserAnchorRemoved_t386858594 * get_U3CU3Ef__mgU24cacheB_32() const { return ___U3CU3Ef__mgU24cacheB_32; }
	inline internal_ARUserAnchorRemoved_t386858594 ** get_address_of_U3CU3Ef__mgU24cacheB_32() { return &___U3CU3Ef__mgU24cacheB_32; }
	inline void set_U3CU3Ef__mgU24cacheB_32(internal_ARUserAnchorRemoved_t386858594 * value)
	{
		___U3CU3Ef__mgU24cacheB_32 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheB_32), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheC_33() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___U3CU3Ef__mgU24cacheC_33)); }
	inline internal_ARFaceAnchorAdded_t1021040265 * get_U3CU3Ef__mgU24cacheC_33() const { return ___U3CU3Ef__mgU24cacheC_33; }
	inline internal_ARFaceAnchorAdded_t1021040265 ** get_address_of_U3CU3Ef__mgU24cacheC_33() { return &___U3CU3Ef__mgU24cacheC_33; }
	inline void set_U3CU3Ef__mgU24cacheC_33(internal_ARFaceAnchorAdded_t1021040265 * value)
	{
		___U3CU3Ef__mgU24cacheC_33 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheC_33), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheD_34() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___U3CU3Ef__mgU24cacheD_34)); }
	inline internal_ARFaceAnchorUpdated_t3423900432 * get_U3CU3Ef__mgU24cacheD_34() const { return ___U3CU3Ef__mgU24cacheD_34; }
	inline internal_ARFaceAnchorUpdated_t3423900432 ** get_address_of_U3CU3Ef__mgU24cacheD_34() { return &___U3CU3Ef__mgU24cacheD_34; }
	inline void set_U3CU3Ef__mgU24cacheD_34(internal_ARFaceAnchorUpdated_t3423900432 * value)
	{
		___U3CU3Ef__mgU24cacheD_34 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheD_34), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheE_35() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___U3CU3Ef__mgU24cacheE_35)); }
	inline internal_ARFaceAnchorRemoved_t2563439402 * get_U3CU3Ef__mgU24cacheE_35() const { return ___U3CU3Ef__mgU24cacheE_35; }
	inline internal_ARFaceAnchorRemoved_t2563439402 ** get_address_of_U3CU3Ef__mgU24cacheE_35() { return &___U3CU3Ef__mgU24cacheE_35; }
	inline void set_U3CU3Ef__mgU24cacheE_35(internal_ARFaceAnchorRemoved_t2563439402 * value)
	{
		___U3CU3Ef__mgU24cacheE_35 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheE_35), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheF_36() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___U3CU3Ef__mgU24cacheF_36)); }
	inline internal_ARImageAnchorAdded_t958088978 * get_U3CU3Ef__mgU24cacheF_36() const { return ___U3CU3Ef__mgU24cacheF_36; }
	inline internal_ARImageAnchorAdded_t958088978 ** get_address_of_U3CU3Ef__mgU24cacheF_36() { return &___U3CU3Ef__mgU24cacheF_36; }
	inline void set_U3CU3Ef__mgU24cacheF_36(internal_ARImageAnchorAdded_t958088978 * value)
	{
		___U3CU3Ef__mgU24cacheF_36 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheF_36), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache10_37() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___U3CU3Ef__mgU24cache10_37)); }
	inline internal_ARImageAnchorUpdated_t294417830 * get_U3CU3Ef__mgU24cache10_37() const { return ___U3CU3Ef__mgU24cache10_37; }
	inline internal_ARImageAnchorUpdated_t294417830 ** get_address_of_U3CU3Ef__mgU24cache10_37() { return &___U3CU3Ef__mgU24cache10_37; }
	inline void set_U3CU3Ef__mgU24cache10_37(internal_ARImageAnchorUpdated_t294417830 * value)
	{
		___U3CU3Ef__mgU24cache10_37 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache10_37), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache11_38() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___U3CU3Ef__mgU24cache11_38)); }
	inline internal_ARImageAnchorRemoved_t1751104571 * get_U3CU3Ef__mgU24cache11_38() const { return ___U3CU3Ef__mgU24cache11_38; }
	inline internal_ARImageAnchorRemoved_t1751104571 ** get_address_of_U3CU3Ef__mgU24cache11_38() { return &___U3CU3Ef__mgU24cache11_38; }
	inline void set_U3CU3Ef__mgU24cache11_38(internal_ARImageAnchorRemoved_t1751104571 * value)
	{
		___U3CU3Ef__mgU24cache11_38 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache11_38), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARSESSIONNATIVEINTERFACE_T3929719369_H
#ifndef VIDEOFORMATBUTTON_T1937817916_H
#define VIDEOFORMATBUTTON_T1937817916_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VideoFormatButton
struct  VideoFormatButton_t1937817916  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.Text VideoFormatButton::videoFormatDescription
	Text_t1901882714 * ___videoFormatDescription_2;
	// UnityEngine.XR.iOS.UnityARVideoFormat VideoFormatButton::arVideoFormat
	UnityARVideoFormat_t1944454781  ___arVideoFormat_3;

public:
	inline static int32_t get_offset_of_videoFormatDescription_2() { return static_cast<int32_t>(offsetof(VideoFormatButton_t1937817916, ___videoFormatDescription_2)); }
	inline Text_t1901882714 * get_videoFormatDescription_2() const { return ___videoFormatDescription_2; }
	inline Text_t1901882714 ** get_address_of_videoFormatDescription_2() { return &___videoFormatDescription_2; }
	inline void set_videoFormatDescription_2(Text_t1901882714 * value)
	{
		___videoFormatDescription_2 = value;
		Il2CppCodeGenWriteBarrier((&___videoFormatDescription_2), value);
	}

	inline static int32_t get_offset_of_arVideoFormat_3() { return static_cast<int32_t>(offsetof(VideoFormatButton_t1937817916, ___arVideoFormat_3)); }
	inline UnityARVideoFormat_t1944454781  get_arVideoFormat_3() const { return ___arVideoFormat_3; }
	inline UnityARVideoFormat_t1944454781 * get_address_of_arVideoFormat_3() { return &___arVideoFormat_3; }
	inline void set_arVideoFormat_3(UnityARVideoFormat_t1944454781  value)
	{
		___arVideoFormat_3 = value;
	}
};

struct VideoFormatButton_t1937817916_StaticFields
{
public:
	// VideoFormatButton/VideoFormatButtonPressed VideoFormatButton::FormatButtonPressedEvent
	VideoFormatButtonPressed_t1187798507 * ___FormatButtonPressedEvent_4;

public:
	inline static int32_t get_offset_of_FormatButtonPressedEvent_4() { return static_cast<int32_t>(offsetof(VideoFormatButton_t1937817916_StaticFields, ___FormatButtonPressedEvent_4)); }
	inline VideoFormatButtonPressed_t1187798507 * get_FormatButtonPressedEvent_4() const { return ___FormatButtonPressedEvent_4; }
	inline VideoFormatButtonPressed_t1187798507 ** get_address_of_FormatButtonPressedEvent_4() { return &___FormatButtonPressedEvent_4; }
	inline void set_FormatButtonPressedEvent_4(VideoFormatButtonPressed_t1187798507 * value)
	{
		___FormatButtonPressedEvent_4 = value;
		Il2CppCodeGenWriteBarrier((&___FormatButtonPressedEvent_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEOFORMATBUTTON_T1937817916_H
#ifndef UIBEHAVIOUR_T3495933518_H
#define UIBEHAVIOUR_T3495933518_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3495933518  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIBEHAVIOUR_T3495933518_H
#ifndef VIDEOFORMATSEXAMPLE_T2303262312_H
#define VIDEOFORMATSEXAMPLE_T2303262312_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VideoFormatsExample
struct  VideoFormatsExample_t2303262312  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Transform VideoFormatsExample::formatsParent
	Transform_t3600365921 * ___formatsParent_2;
	// UnityEngine.GameObject VideoFormatsExample::videoFormatButtonPrefab
	GameObject_t1113636619 * ___videoFormatButtonPrefab_3;

public:
	inline static int32_t get_offset_of_formatsParent_2() { return static_cast<int32_t>(offsetof(VideoFormatsExample_t2303262312, ___formatsParent_2)); }
	inline Transform_t3600365921 * get_formatsParent_2() const { return ___formatsParent_2; }
	inline Transform_t3600365921 ** get_address_of_formatsParent_2() { return &___formatsParent_2; }
	inline void set_formatsParent_2(Transform_t3600365921 * value)
	{
		___formatsParent_2 = value;
		Il2CppCodeGenWriteBarrier((&___formatsParent_2), value);
	}

	inline static int32_t get_offset_of_videoFormatButtonPrefab_3() { return static_cast<int32_t>(offsetof(VideoFormatsExample_t2303262312, ___videoFormatButtonPrefab_3)); }
	inline GameObject_t1113636619 * get_videoFormatButtonPrefab_3() const { return ___videoFormatButtonPrefab_3; }
	inline GameObject_t1113636619 ** get_address_of_videoFormatButtonPrefab_3() { return &___videoFormatButtonPrefab_3; }
	inline void set_videoFormatButtonPrefab_3(GameObject_t1113636619 * value)
	{
		___videoFormatButtonPrefab_3 = value;
		Il2CppCodeGenWriteBarrier((&___videoFormatButtonPrefab_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEOFORMATSEXAMPLE_T2303262312_H
#ifndef GRAPHIC_T1660335611_H
#define GRAPHIC_T1660335611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Graphic
struct  Graphic_t1660335611  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t340375123 * ___m_Material_4;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t2555686324  ___m_Color_5;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_6;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t3704657025 * ___m_RectTransform_7;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRender
	CanvasRenderer_t2598313366 * ___m_CanvasRender_8;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t3310196443 * ___m_Canvas_9;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_10;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_11;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t3245792599 * ___m_OnDirtyLayoutCallback_12;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t3245792599 * ___m_OnDirtyVertsCallback_13;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t3245792599 * ___m_OnDirtyMaterialCallback_14;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t3055525458 * ___m_ColorTweenRunner_17;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18;

public:
	inline static int32_t get_offset_of_m_Material_4() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Material_4)); }
	inline Material_t340375123 * get_m_Material_4() const { return ___m_Material_4; }
	inline Material_t340375123 ** get_address_of_m_Material_4() { return &___m_Material_4; }
	inline void set_m_Material_4(Material_t340375123 * value)
	{
		___m_Material_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Material_4), value);
	}

	inline static int32_t get_offset_of_m_Color_5() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Color_5)); }
	inline Color_t2555686324  get_m_Color_5() const { return ___m_Color_5; }
	inline Color_t2555686324 * get_address_of_m_Color_5() { return &___m_Color_5; }
	inline void set_m_Color_5(Color_t2555686324  value)
	{
		___m_Color_5 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_6() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RaycastTarget_6)); }
	inline bool get_m_RaycastTarget_6() const { return ___m_RaycastTarget_6; }
	inline bool* get_address_of_m_RaycastTarget_6() { return &___m_RaycastTarget_6; }
	inline void set_m_RaycastTarget_6(bool value)
	{
		___m_RaycastTarget_6 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_7() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RectTransform_7)); }
	inline RectTransform_t3704657025 * get_m_RectTransform_7() const { return ___m_RectTransform_7; }
	inline RectTransform_t3704657025 ** get_address_of_m_RectTransform_7() { return &___m_RectTransform_7; }
	inline void set_m_RectTransform_7(RectTransform_t3704657025 * value)
	{
		___m_RectTransform_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_RectTransform_7), value);
	}

	inline static int32_t get_offset_of_m_CanvasRender_8() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_CanvasRender_8)); }
	inline CanvasRenderer_t2598313366 * get_m_CanvasRender_8() const { return ___m_CanvasRender_8; }
	inline CanvasRenderer_t2598313366 ** get_address_of_m_CanvasRender_8() { return &___m_CanvasRender_8; }
	inline void set_m_CanvasRender_8(CanvasRenderer_t2598313366 * value)
	{
		___m_CanvasRender_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasRender_8), value);
	}

	inline static int32_t get_offset_of_m_Canvas_9() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Canvas_9)); }
	inline Canvas_t3310196443 * get_m_Canvas_9() const { return ___m_Canvas_9; }
	inline Canvas_t3310196443 ** get_address_of_m_Canvas_9() { return &___m_Canvas_9; }
	inline void set_m_Canvas_9(Canvas_t3310196443 * value)
	{
		___m_Canvas_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_Canvas_9), value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_10() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_VertsDirty_10)); }
	inline bool get_m_VertsDirty_10() const { return ___m_VertsDirty_10; }
	inline bool* get_address_of_m_VertsDirty_10() { return &___m_VertsDirty_10; }
	inline void set_m_VertsDirty_10(bool value)
	{
		___m_VertsDirty_10 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_11() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_MaterialDirty_11)); }
	inline bool get_m_MaterialDirty_11() const { return ___m_MaterialDirty_11; }
	inline bool* get_address_of_m_MaterialDirty_11() { return &___m_MaterialDirty_11; }
	inline void set_m_MaterialDirty_11(bool value)
	{
		___m_MaterialDirty_11 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_12() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyLayoutCallback_12)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyLayoutCallback_12() const { return ___m_OnDirtyLayoutCallback_12; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyLayoutCallback_12() { return &___m_OnDirtyLayoutCallback_12; }
	inline void set_m_OnDirtyLayoutCallback_12(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyLayoutCallback_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyLayoutCallback_12), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_13() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyVertsCallback_13)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyVertsCallback_13() const { return ___m_OnDirtyVertsCallback_13; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyVertsCallback_13() { return &___m_OnDirtyVertsCallback_13; }
	inline void set_m_OnDirtyVertsCallback_13(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyVertsCallback_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyVertsCallback_13), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_14() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyMaterialCallback_14)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyMaterialCallback_14() const { return ___m_OnDirtyMaterialCallback_14; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyMaterialCallback_14() { return &___m_OnDirtyMaterialCallback_14; }
	inline void set_m_OnDirtyMaterialCallback_14(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyMaterialCallback_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyMaterialCallback_14), value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_17() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_ColorTweenRunner_17)); }
	inline TweenRunner_1_t3055525458 * get_m_ColorTweenRunner_17() const { return ___m_ColorTweenRunner_17; }
	inline TweenRunner_1_t3055525458 ** get_address_of_m_ColorTweenRunner_17() { return &___m_ColorTweenRunner_17; }
	inline void set_m_ColorTweenRunner_17(TweenRunner_1_t3055525458 * value)
	{
		___m_ColorTweenRunner_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_ColorTweenRunner_17), value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_18; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_18(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_18 = value;
	}
};

struct Graphic_t1660335611_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t340375123 * ___s_DefaultUI_2;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t3840446185 * ___s_WhiteTexture_3;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t3648964284 * ___s_Mesh_15;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t2453304189 * ___s_VertexHelper_16;

public:
	inline static int32_t get_offset_of_s_DefaultUI_2() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_DefaultUI_2)); }
	inline Material_t340375123 * get_s_DefaultUI_2() const { return ___s_DefaultUI_2; }
	inline Material_t340375123 ** get_address_of_s_DefaultUI_2() { return &___s_DefaultUI_2; }
	inline void set_s_DefaultUI_2(Material_t340375123 * value)
	{
		___s_DefaultUI_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultUI_2), value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_3() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_WhiteTexture_3)); }
	inline Texture2D_t3840446185 * get_s_WhiteTexture_3() const { return ___s_WhiteTexture_3; }
	inline Texture2D_t3840446185 ** get_address_of_s_WhiteTexture_3() { return &___s_WhiteTexture_3; }
	inline void set_s_WhiteTexture_3(Texture2D_t3840446185 * value)
	{
		___s_WhiteTexture_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_WhiteTexture_3), value);
	}

	inline static int32_t get_offset_of_s_Mesh_15() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_Mesh_15)); }
	inline Mesh_t3648964284 * get_s_Mesh_15() const { return ___s_Mesh_15; }
	inline Mesh_t3648964284 ** get_address_of_s_Mesh_15() { return &___s_Mesh_15; }
	inline void set_s_Mesh_15(Mesh_t3648964284 * value)
	{
		___s_Mesh_15 = value;
		Il2CppCodeGenWriteBarrier((&___s_Mesh_15), value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_16() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_VertexHelper_16)); }
	inline VertexHelper_t2453304189 * get_s_VertexHelper_16() const { return ___s_VertexHelper_16; }
	inline VertexHelper_t2453304189 ** get_address_of_s_VertexHelper_16() { return &___s_VertexHelper_16; }
	inline void set_s_VertexHelper_16(VertexHelper_t2453304189 * value)
	{
		___s_VertexHelper_16 = value;
		Il2CppCodeGenWriteBarrier((&___s_VertexHelper_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRAPHIC_T1660335611_H
#ifndef MASKABLEGRAPHIC_T3839221559_H
#define MASKABLEGRAPHIC_T3839221559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_t3839221559  : public Graphic_t1660335611
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_19;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t340375123 * ___m_MaskMaterial_20;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_t3474889437 * ___m_ParentMask_21;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_22;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_23;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t3661388177 * ___m_OnCullStateChanged_24;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_25;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_26;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t1718750761* ___m_Corners_27;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_19() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculateStencil_19)); }
	inline bool get_m_ShouldRecalculateStencil_19() const { return ___m_ShouldRecalculateStencil_19; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_19() { return &___m_ShouldRecalculateStencil_19; }
	inline void set_m_ShouldRecalculateStencil_19(bool value)
	{
		___m_ShouldRecalculateStencil_19 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_20() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_MaskMaterial_20)); }
	inline Material_t340375123 * get_m_MaskMaterial_20() const { return ___m_MaskMaterial_20; }
	inline Material_t340375123 ** get_address_of_m_MaskMaterial_20() { return &___m_MaskMaterial_20; }
	inline void set_m_MaskMaterial_20(Material_t340375123 * value)
	{
		___m_MaskMaterial_20 = value;
		Il2CppCodeGenWriteBarrier((&___m_MaskMaterial_20), value);
	}

	inline static int32_t get_offset_of_m_ParentMask_21() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ParentMask_21)); }
	inline RectMask2D_t3474889437 * get_m_ParentMask_21() const { return ___m_ParentMask_21; }
	inline RectMask2D_t3474889437 ** get_address_of_m_ParentMask_21() { return &___m_ParentMask_21; }
	inline void set_m_ParentMask_21(RectMask2D_t3474889437 * value)
	{
		___m_ParentMask_21 = value;
		Il2CppCodeGenWriteBarrier((&___m_ParentMask_21), value);
	}

	inline static int32_t get_offset_of_m_Maskable_22() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Maskable_22)); }
	inline bool get_m_Maskable_22() const { return ___m_Maskable_22; }
	inline bool* get_address_of_m_Maskable_22() { return &___m_Maskable_22; }
	inline void set_m_Maskable_22(bool value)
	{
		___m_Maskable_22 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_23() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_IncludeForMasking_23)); }
	inline bool get_m_IncludeForMasking_23() const { return ___m_IncludeForMasking_23; }
	inline bool* get_address_of_m_IncludeForMasking_23() { return &___m_IncludeForMasking_23; }
	inline void set_m_IncludeForMasking_23(bool value)
	{
		___m_IncludeForMasking_23 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_24() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_OnCullStateChanged_24)); }
	inline CullStateChangedEvent_t3661388177 * get_m_OnCullStateChanged_24() const { return ___m_OnCullStateChanged_24; }
	inline CullStateChangedEvent_t3661388177 ** get_address_of_m_OnCullStateChanged_24() { return &___m_OnCullStateChanged_24; }
	inline void set_m_OnCullStateChanged_24(CullStateChangedEvent_t3661388177 * value)
	{
		___m_OnCullStateChanged_24 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnCullStateChanged_24), value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculate_25)); }
	inline bool get_m_ShouldRecalculate_25() const { return ___m_ShouldRecalculate_25; }
	inline bool* get_address_of_m_ShouldRecalculate_25() { return &___m_ShouldRecalculate_25; }
	inline void set_m_ShouldRecalculate_25(bool value)
	{
		___m_ShouldRecalculate_25 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_StencilValue_26)); }
	inline int32_t get_m_StencilValue_26() const { return ___m_StencilValue_26; }
	inline int32_t* get_address_of_m_StencilValue_26() { return &___m_StencilValue_26; }
	inline void set_m_StencilValue_26(int32_t value)
	{
		___m_StencilValue_26 = value;
	}

	inline static int32_t get_offset_of_m_Corners_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Corners_27)); }
	inline Vector3U5BU5D_t1718750761* get_m_Corners_27() const { return ___m_Corners_27; }
	inline Vector3U5BU5D_t1718750761** get_address_of_m_Corners_27() { return &___m_Corners_27; }
	inline void set_m_Corners_27(Vector3U5BU5D_t1718750761* value)
	{
		___m_Corners_27 = value;
		Il2CppCodeGenWriteBarrier((&___m_Corners_27), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MASKABLEGRAPHIC_T3839221559_H
#ifndef TEXT_T1901882714_H
#define TEXT_T1901882714_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Text
struct  Text_t1901882714  : public MaskableGraphic_t3839221559
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t746620069 * ___m_FontData_28;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_29;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t3211863866 * ___m_TextCache_30;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t3211863866 * ___m_TextCacheForLayout_31;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_33;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_t1981460040* ___m_TempVerts_34;

public:
	inline static int32_t get_offset_of_m_FontData_28() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_FontData_28)); }
	inline FontData_t746620069 * get_m_FontData_28() const { return ___m_FontData_28; }
	inline FontData_t746620069 ** get_address_of_m_FontData_28() { return &___m_FontData_28; }
	inline void set_m_FontData_28(FontData_t746620069 * value)
	{
		___m_FontData_28 = value;
		Il2CppCodeGenWriteBarrier((&___m_FontData_28), value);
	}

	inline static int32_t get_offset_of_m_Text_29() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_Text_29)); }
	inline String_t* get_m_Text_29() const { return ___m_Text_29; }
	inline String_t** get_address_of_m_Text_29() { return &___m_Text_29; }
	inline void set_m_Text_29(String_t* value)
	{
		___m_Text_29 = value;
		Il2CppCodeGenWriteBarrier((&___m_Text_29), value);
	}

	inline static int32_t get_offset_of_m_TextCache_30() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TextCache_30)); }
	inline TextGenerator_t3211863866 * get_m_TextCache_30() const { return ___m_TextCache_30; }
	inline TextGenerator_t3211863866 ** get_address_of_m_TextCache_30() { return &___m_TextCache_30; }
	inline void set_m_TextCache_30(TextGenerator_t3211863866 * value)
	{
		___m_TextCache_30 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCache_30), value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_31() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TextCacheForLayout_31)); }
	inline TextGenerator_t3211863866 * get_m_TextCacheForLayout_31() const { return ___m_TextCacheForLayout_31; }
	inline TextGenerator_t3211863866 ** get_address_of_m_TextCacheForLayout_31() { return &___m_TextCacheForLayout_31; }
	inline void set_m_TextCacheForLayout_31(TextGenerator_t3211863866 * value)
	{
		___m_TextCacheForLayout_31 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCacheForLayout_31), value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_33() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_DisableFontTextureRebuiltCallback_33)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_33() const { return ___m_DisableFontTextureRebuiltCallback_33; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_33() { return &___m_DisableFontTextureRebuiltCallback_33; }
	inline void set_m_DisableFontTextureRebuiltCallback_33(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_33 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_34() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TempVerts_34)); }
	inline UIVertexU5BU5D_t1981460040* get_m_TempVerts_34() const { return ___m_TempVerts_34; }
	inline UIVertexU5BU5D_t1981460040** get_address_of_m_TempVerts_34() { return &___m_TempVerts_34; }
	inline void set_m_TempVerts_34(UIVertexU5BU5D_t1981460040* value)
	{
		___m_TempVerts_34 = value;
		Il2CppCodeGenWriteBarrier((&___m_TempVerts_34), value);
	}
};

struct Text_t1901882714_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t340375123 * ___s_DefaultText_32;

public:
	inline static int32_t get_offset_of_s_DefaultText_32() { return static_cast<int32_t>(offsetof(Text_t1901882714_StaticFields, ___s_DefaultText_32)); }
	inline Material_t340375123 * get_s_DefaultText_32() const { return ___s_DefaultText_32; }
	inline Material_t340375123 ** get_address_of_s_DefaultText_32() { return &___s_DefaultText_32; }
	inline void set_s_DefaultText_32(Material_t340375123 * value)
	{
		___s_DefaultText_32 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultText_32), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXT_T1901882714_H
// System.Byte[]
struct ByteU5BU5D_t4116647657  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
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
// System.Single[]
struct SingleU5BU5D_t1444911251  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t2843939325  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.XR.iOS.UnityARVideoFormat>::GetEnumerator()
extern "C"  Enumerator_t1010806104  List_1_GetEnumerator_m3413760873_gshared (List_1_t3416529523 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.iOS.UnityARVideoFormat>::get_Current()
extern "C"  UnityARVideoFormat_t1944454781  Enumerator_get_Current_m3655906576_gshared (Enumerator_t1010806104 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Transform)
extern "C"  RuntimeObject * Object_Instantiate_TisRuntimeObject_m1061214600_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, Transform_t3600365921 * p1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C"  RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.iOS.UnityARVideoFormat>::MoveNext()
extern "C"  bool Enumerator_MoveNext_m2987439075_gshared (Enumerator_t1010806104 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.iOS.UnityARVideoFormat>::Dispose()
extern "C"  void Enumerator_Dispose_m510309855_gshared (Enumerator_t1010806104 * __this, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.XR.iOS.ARFaceAnchor::get_transform()
extern "C"  Matrix4x4_t1817901843  ARFaceAnchor_get_transform_m2525862755 (ARFaceAnchor_t1844206636 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Utils.serializableUnityARMatrix4x4 Utils.serializableUnityARMatrix4x4::op_Implicit(UnityEngine.Matrix4x4)
extern "C"  serializableUnityARMatrix4x4_t78255337 * serializableUnityARMatrix4x4_op_Implicit_m3556108972 (RuntimeObject * __this /* static, unused */, Matrix4x4_t1817901843  ___rValue0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.XR.iOS.ARFaceGeometry UnityEngine.XR.iOS.ARFaceAnchor::get_faceGeometry()
extern "C"  ARFaceGeometry_t5139606 * ARFaceAnchor_get_faceGeometry_m1319421082 (ARFaceAnchor_t1844206636 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Utils.serializableFaceGeometry Utils.serializableFaceGeometry::op_Implicit(UnityEngine.XR.iOS.ARFaceGeometry)
extern "C"  serializableFaceGeometry_t157334219 * serializableFaceGeometry_op_Implicit_m2001456219 (RuntimeObject * __this /* static, unused */, ARFaceGeometry_t5139606 * ___faceGeom0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
extern "C"  Encoding_t1523322056 * Encoding_get_UTF8_m1008486739 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.XR.iOS.ARFaceAnchor::get_identifierStr()
extern "C"  String_t* ARFaceAnchor_get_identifierStr_m1822207425 (ARFaceAnchor_t1844206636 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Single> UnityEngine.XR.iOS.ARFaceAnchor::get_blendShapes()
extern "C"  Dictionary_2_t1182523073 * ARFaceAnchor_get_blendShapes_m335066950 (ARFaceAnchor_t1844206636 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Utils.serializableUnityARFaceAnchor::.ctor(Utils.serializableUnityARMatrix4x4,Utils.serializableFaceGeometry,System.Collections.Generic.Dictionary`2<System.String,System.Single>,System.Byte[])
extern "C"  void serializableUnityARFaceAnchor__ctor_m3712562376 (serializableUnityARFaceAnchor_t2162490026 * __this, serializableUnityARMatrix4x4_t78255337 * ___wt0, serializableFaceGeometry_t157334219 * ___fg1, Dictionary_2_t1182523073 * ___bs2, ByteU5BU5D_t4116647657* ___idstr3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Utils.serializableSHC Utils.serializableSHC::op_Implicit(System.Single[])
extern "C"  serializableSHC_t2667429767 * serializableSHC_op_Implicit_m2638304907 (RuntimeObject * __this /* static, unused */, SingleU5BU5D_t1444911251* ___floatsSHC0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Utils.SerializableVector4::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void SerializableVector4__ctor_m3231681896 (SerializableVector4_t1862640084 * __this, float ___rX0, float ___rY1, float ___rZ2, float ___rW3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Utils.serializableUnityARLightData::.ctor(UnityEngine.XR.iOS.UnityARLightData)
extern "C"  void serializableUnityARLightData__ctor_m2554290283 (serializableUnityARLightData_t3935513283 * __this, UnityARLightData_t2160616730  ___lightData0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.XR.iOS.UnityARLightEstimate::.ctor(System.Single,System.Single)
extern "C"  void UnityARLightEstimate__ctor_m1412967459 (UnityARLightEstimate_t1498306117 * __this, float ___intensity0, float ___temperature1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Vector3__ctor_m3353183577 (Vector3_t3722313464 * __this, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single[] Utils.serializableSHC::op_Implicit(Utils.serializableSHC)
extern "C"  SingleU5BU5D_t1444911251* serializableSHC_op_Implicit_m465874179 (RuntimeObject * __this /* static, unused */, serializableSHC_t2667429767 * ___spc0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.XR.iOS.UnityARDirectionalLightEstimate::.ctor(System.Single[],UnityEngine.Vector3,System.Single)
extern "C"  void UnityARDirectionalLightEstimate__ctor_m3248127264 (UnityARDirectionalLightEstimate_t2924556994 * __this, SingleU5BU5D_t1444911251* ___SHC0, Vector3_t3722313464  ___direction1, float ___intensity2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.XR.iOS.UnityARLightData::.ctor(UnityEngine.XR.iOS.LightDataType,UnityEngine.XR.iOS.UnityARLightEstimate,UnityEngine.XR.iOS.UnityARDirectionalLightEstimate)
extern "C"  void UnityARLightData__ctor_m4238079321 (UnityARLightData_t2160616730 * __this, int32_t ___ldt0, UnityARLightEstimate_t1498306117  ___ule1, UnityARDirectionalLightEstimate_t2924556994 * ___udle2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Utils.SerializableVector4 Utils.SerializableVector4::op_Implicit(UnityEngine.Vector4)
extern "C"  SerializableVector4_t1862640084 * SerializableVector4_op_Implicit_m14360340 (RuntimeObject * __this /* static, unused */, Vector4_t3319028937  ___rValue0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Utils.serializableUnityARMatrix4x4::.ctor(Utils.SerializableVector4,Utils.SerializableVector4,Utils.SerializableVector4,Utils.SerializableVector4)
extern "C"  void serializableUnityARMatrix4x4__ctor_m3496280910 (serializableUnityARMatrix4x4_t78255337 * __this, SerializableVector4_t1862640084 * ___v00, SerializableVector4_t1862640084 * ___v11, SerializableVector4_t1862640084 * ___v22, SerializableVector4_t1862640084 * ___v33, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 Utils.SerializableVector4::op_Implicit(Utils.SerializableVector4)
extern "C"  Vector4_t3319028937  SerializableVector4_op_Implicit_m3519692110 (RuntimeObject * __this /* static, unused */, SerializableVector4_t1862640084 * ___rValue0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.XR.iOS.UnityARMatrix4x4::.ctor(UnityEngine.Vector4,UnityEngine.Vector4,UnityEngine.Vector4,UnityEngine.Vector4)
extern "C"  void UnityARMatrix4x4__ctor_m3835909947 (UnityARMatrix4x4_t4073345847 * __this, Vector4_t3319028937  ___c00, Vector4_t3319028937  ___c11, Vector4_t3319028937  ___c22, Vector4_t3319028937  ___c33, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Matrix4x4::GetColumn(System.Int32)
extern "C"  Vector4_t3319028937  Matrix4x4_GetColumn_m461504848 (Matrix4x4_t1817901843 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Matrix4x4::.ctor(UnityEngine.Vector4,UnityEngine.Vector4,UnityEngine.Vector4,UnityEngine.Vector4)
extern "C"  void Matrix4x4__ctor_m53065545 (Matrix4x4_t1817901843 * __this, Vector4_t3319028937  p0, Vector4_t3319028937  p1, Vector4_t3319028937  p2, Vector4_t3319028937  p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.XR.iOS.ARPlaneAnchor::get_transform()
extern "C"  Matrix4x4_t1817901843  ARPlaneAnchor_get_transform_m1915241100 (ARPlaneAnchor_t2049372221 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.XR.iOS.ARPlaneAnchor::get_center()
extern "C"  Vector3_t3722313464  ARPlaneAnchor_get_center_m3271753266 (ARPlaneAnchor_t2049372221 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.XR.iOS.ARPlaneAnchor::get_extent()
extern "C"  Vector3_t3722313464  ARPlaneAnchor_get_extent_m687688995 (ARPlaneAnchor_t2049372221 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.XR.iOS.ARPlaneAnchor::get_identifier()
extern "C"  String_t* ARPlaneAnchor_get_identifier_m3202847065 (ARPlaneAnchor_t2049372221 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.XR.iOS.ARPlaneGeometry UnityEngine.XR.iOS.ARPlaneAnchor::get_planeGeometry()
extern "C"  ARPlaneGeometry_t1169415986 * ARPlaneAnchor_get_planeGeometry_m4284775768 (ARPlaneAnchor_t2049372221 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Utils.serializablePlaneGeometry Utils.serializablePlaneGeometry::op_Implicit(UnityEngine.XR.iOS.ARPlaneGeometry)
extern "C"  serializablePlaneGeometry_t3680333341 * serializablePlaneGeometry_op_Implicit_m703366758 (RuntimeObject * __this /* static, unused */, ARPlaneGeometry_t1169415986 * ___planeGeom0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.XR.iOS.ARPlaneAnchorAlignment UnityEngine.XR.iOS.ARPlaneAnchor::get_alignment()
extern "C"  int64_t ARPlaneAnchor_get_alignment_m2029387076 (ARPlaneAnchor_t2049372221 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Utils.serializableUnityARPlaneAnchor::.ctor(Utils.serializableUnityARMatrix4x4,Utils.SerializableVector4,Utils.SerializableVector4,UnityEngine.XR.iOS.ARPlaneAnchorAlignment,Utils.serializablePlaneGeometry,System.Byte[])
extern "C"  void serializableUnityARPlaneAnchor__ctor_m311212769 (serializableUnityARPlaneAnchor_t1446774435 * __this, serializableUnityARMatrix4x4_t78255337 * ___wt0, SerializableVector4_t1862640084 * ___ctr1, SerializableVector4_t1862640084 * ___ext2, int64_t ___apaa3, serializablePlaneGeometry_t3680333341 * ___spg4, ByteU5BU5D_t4116647657* ___idstr5, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.String,System.Object[])
extern "C"  String_t* String_Format_m630303134 (RuntimeObject * __this /* static, unused */, String_t* p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void Vector4__ctor_m2498754347 (Vector4_t3319028937 * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
extern "C"  Delegate_t1188392813 * Delegate_Combine_m1859655160 (RuntimeObject * __this /* static, unused */, Delegate_t1188392813 * p0, Delegate_t1188392813 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
extern "C"  Delegate_t1188392813 * Delegate_Remove_m334097152 (RuntimeObject * __this /* static, unused */, Delegate_t1188392813 * p0, Delegate_t1188392813 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object[])
extern "C"  String_t* String_Concat_m2971454694 (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2843939325* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void VideoFormatButton/VideoFormatButtonPressed::Invoke(UnityEngine.XR.iOS.UnityARVideoFormat)
extern "C"  void VideoFormatButtonPressed_Invoke_m3826882959 (VideoFormatButtonPressed_t1187798507 * __this, UnityARVideoFormat_t1944454781  ___videoFormat0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void VideoFormatButton/VideoFormatButtonPressed::.ctor(System.Object,System.IntPtr)
extern "C"  void VideoFormatButtonPressed__ctor_m1152072860 (VideoFormatButtonPressed_t1187798507 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void VideoFormatButton::add_FormatButtonPressedEvent(VideoFormatButton/VideoFormatButtonPressed)
extern "C"  void VideoFormatButton_add_FormatButtonPressedEvent_m1863116585 (RuntimeObject * __this /* static, unused */, VideoFormatButtonPressed_t1187798507 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void VideoFormatsExample::PopulateVideoFormatButtons()
extern "C"  void VideoFormatsExample_PopulateVideoFormatButtons_m595526008 (VideoFormatsExample_t2303262312 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void VideoFormatButton::remove_FormatButtonPressedEvent(VideoFormatButton/VideoFormatButtonPressed)
extern "C"  void VideoFormatButton_remove_FormatButtonPressedEvent_m3255418780 (RuntimeObject * __this /* static, unused */, VideoFormatButtonPressed_t1187798507 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.XR.iOS.UnityARVideoFormat> UnityEngine.XR.iOS.UnityARVideoFormat::SupportedVideoFormats()
extern "C"  List_1_t3416529523 * UnityARVideoFormat_SupportedVideoFormats_m1522157695 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.XR.iOS.UnityARVideoFormat>::GetEnumerator()
#define List_1_GetEnumerator_m3413760873(__this, method) ((  Enumerator_t1010806104  (*) (List_1_t3416529523 *, const RuntimeMethod*))List_1_GetEnumerator_m3413760873_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.iOS.UnityARVideoFormat>::get_Current()
#define Enumerator_get_Current_m3655906576(__this, method) ((  UnityARVideoFormat_t1944454781  (*) (Enumerator_t1010806104 *, const RuntimeMethod*))Enumerator_get_Current_m3655906576_gshared)(__this, method)
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Transform)
#define Object_Instantiate_TisGameObject_t1113636619_m3215236302(__this /* static, unused */, p0, p1, method) ((  GameObject_t1113636619 * (*) (RuntimeObject * /* static, unused */, GameObject_t1113636619 *, Transform_t3600365921 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m1061214600_gshared)(__this /* static, unused */, p0, p1, method)
// !!0 UnityEngine.GameObject::GetComponent<VideoFormatButton>()
#define GameObject_GetComponent_TisVideoFormatButton_t1937817916_m1994409976(__this, method) ((  VideoFormatButton_t1937817916 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Inequality_m4071470834 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void VideoFormatButton::Populate(UnityEngine.XR.iOS.UnityARVideoFormat)
extern "C"  void VideoFormatButton_Populate_m915370135 (VideoFormatButton_t1937817916 * __this, UnityARVideoFormat_t1944454781  ___videoFormat0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.iOS.UnityARVideoFormat>::MoveNext()
#define Enumerator_MoveNext_m2987439075(__this, method) ((  bool (*) (Enumerator_t1010806104 *, const RuntimeMethod*))Enumerator_MoveNext_m2987439075_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.iOS.UnityARVideoFormat>::Dispose()
#define Enumerator_Dispose_m510309855(__this, method) ((  void (*) (Enumerator_t1010806104 *, const RuntimeMethod*))Enumerator_Dispose_m510309855_gshared)(__this, method)
// UnityEngine.XR.iOS.UnityARSessionNativeInterface UnityEngine.XR.iOS.UnityARSessionNativeInterface::GetARSessionNativeInterface()
extern "C"  UnityARSessionNativeInterface_t3929719369 * UnityARSessionNativeInterface_GetARSessionNativeInterface_m1118592565 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration::get_IsSupported()
extern "C"  bool ARKitWorldTrackingSessionConfiguration_get_IsSupported_m4234602811 (ARKitWorldTrackingSessionConfiguration_t273386347 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::set_targetFrameRate(System.Int32)
extern "C"  void Application_set_targetFrameRate_m3682352535 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::RunWithConfigAndOptions(UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration,UnityEngine.XR.iOS.UnityARSessionRunOption)
extern "C"  void UnityARSessionNativeInterface_RunWithConfigAndOptions_m2136170177 (UnityARSessionNativeInterface_t3929719369 * __this, ARKitWorldTrackingSessionConfiguration_t273386347  ___config0, int32_t ___runOptions1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Utils.serializableUnityARFaceAnchor::.ctor(Utils.serializableUnityARMatrix4x4,Utils.serializableFaceGeometry,System.Collections.Generic.Dictionary`2<System.String,System.Single>,System.Byte[])
extern "C"  void serializableUnityARFaceAnchor__ctor_m3712562376 (serializableUnityARFaceAnchor_t2162490026 * __this, serializableUnityARMatrix4x4_t78255337 * ___wt0, serializableFaceGeometry_t157334219 * ___fg1, Dictionary_2_t1182523073 * ___bs2, ByteU5BU5D_t4116647657* ___idstr3, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		serializableUnityARMatrix4x4_t78255337 * L_0 = ___wt0;
		__this->set_worldTransform_0(L_0);
		serializableFaceGeometry_t157334219 * L_1 = ___fg1;
		__this->set_faceGeometry_1(L_1);
		Dictionary_2_t1182523073 * L_2 = ___bs2;
		__this->set_arBlendShapes_2(L_2);
		ByteU5BU5D_t4116647657* L_3 = ___idstr3;
		__this->set_identifierStr_3(L_3);
		return;
	}
}
// Utils.serializableUnityARFaceAnchor Utils.serializableUnityARFaceAnchor::op_Implicit(UnityEngine.XR.iOS.ARFaceAnchor)
extern "C"  serializableUnityARFaceAnchor_t2162490026 * serializableUnityARFaceAnchor_op_Implicit_m725494585 (RuntimeObject * __this /* static, unused */, ARFaceAnchor_t1844206636 * ___rValue0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializableUnityARFaceAnchor_op_Implicit_m725494585_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	serializableUnityARMatrix4x4_t78255337 * V_0 = NULL;
	serializableFaceGeometry_t157334219 * V_1 = NULL;
	ByteU5BU5D_t4116647657* V_2 = NULL;
	{
		ARFaceAnchor_t1844206636 * L_0 = ___rValue0;
		NullCheck(L_0);
		Matrix4x4_t1817901843  L_1 = ARFaceAnchor_get_transform_m2525862755(L_0, /*hidden argument*/NULL);
		serializableUnityARMatrix4x4_t78255337 * L_2 = serializableUnityARMatrix4x4_op_Implicit_m3556108972(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		ARFaceAnchor_t1844206636 * L_3 = ___rValue0;
		NullCheck(L_3);
		ARFaceGeometry_t5139606 * L_4 = ARFaceAnchor_get_faceGeometry_m1319421082(L_3, /*hidden argument*/NULL);
		serializableFaceGeometry_t157334219 * L_5 = serializableFaceGeometry_op_Implicit_m2001456219(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t1523322056_il2cpp_TypeInfo_var);
		Encoding_t1523322056 * L_6 = Encoding_get_UTF8_m1008486739(NULL /*static, unused*/, /*hidden argument*/NULL);
		ARFaceAnchor_t1844206636 * L_7 = ___rValue0;
		NullCheck(L_7);
		String_t* L_8 = ARFaceAnchor_get_identifierStr_m1822207425(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		ByteU5BU5D_t4116647657* L_9 = VirtFuncInvoker1< ByteU5BU5D_t4116647657*, String_t* >::Invoke(10 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_6, L_8);
		V_2 = L_9;
		serializableUnityARMatrix4x4_t78255337 * L_10 = V_0;
		serializableFaceGeometry_t157334219 * L_11 = V_1;
		ARFaceAnchor_t1844206636 * L_12 = ___rValue0;
		NullCheck(L_12);
		Dictionary_2_t1182523073 * L_13 = ARFaceAnchor_get_blendShapes_m335066950(L_12, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_14 = V_2;
		serializableUnityARFaceAnchor_t2162490026 * L_15 = (serializableUnityARFaceAnchor_t2162490026 *)il2cpp_codegen_object_new(serializableUnityARFaceAnchor_t2162490026_il2cpp_TypeInfo_var);
		serializableUnityARFaceAnchor__ctor_m3712562376(L_15, L_10, L_11, L_13, L_14, /*hidden argument*/NULL);
		return L_15;
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
// System.Void Utils.serializableUnityARLightData::.ctor(UnityEngine.XR.iOS.UnityARLightData)
extern "C"  void serializableUnityARLightData__ctor_m2554290283 (serializableUnityARLightData_t3935513283 * __this, UnityARLightData_t2160616730  ___lightData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializableUnityARLightData__ctor_m2554290283_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	float V_1 = 0.0f;
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		int32_t L_0 = (&___lightData0)->get_arLightingType_0();
		__this->set_whichLight_0(L_0);
		int32_t L_1 = __this->get_whichLight_0();
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0076;
		}
	}
	{
		UnityARDirectionalLightEstimate_t2924556994 * L_2 = (&___lightData0)->get_arDirectonalLightEstimate_2();
		NullCheck(L_2);
		SingleU5BU5D_t1444911251* L_3 = L_2->get_sphericalHarmonicsCoefficients_2();
		serializableSHC_t2667429767 * L_4 = serializableSHC_op_Implicit_m2638304907(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		__this->set_lightSHC_1(L_4);
		UnityARDirectionalLightEstimate_t2924556994 * L_5 = (&___lightData0)->get_arDirectonalLightEstimate_2();
		NullCheck(L_5);
		Vector3_t3722313464  L_6 = L_5->get_primaryLightDirection_0();
		V_0 = L_6;
		UnityARDirectionalLightEstimate_t2924556994 * L_7 = (&___lightData0)->get_arDirectonalLightEstimate_2();
		NullCheck(L_7);
		float L_8 = L_7->get_primaryLightIntensity_1();
		V_1 = L_8;
		float L_9 = (&V_0)->get_x_1();
		float L_10 = (&V_0)->get_y_2();
		float L_11 = (&V_0)->get_z_3();
		float L_12 = V_1;
		SerializableVector4_t1862640084 * L_13 = (SerializableVector4_t1862640084 *)il2cpp_codegen_object_new(SerializableVector4_t1862640084_il2cpp_TypeInfo_var);
		SerializableVector4__ctor_m3231681896(L_13, L_9, L_10, L_11, L_12, /*hidden argument*/NULL);
		__this->set_primaryLightDirAndIntensity_2(L_13);
		goto IL_009a;
	}

IL_0076:
	{
		UnityARLightEstimate_t1498306117 * L_14 = (&___lightData0)->get_address_of_arLightEstimate_1();
		float L_15 = L_14->get_ambientIntensity_0();
		__this->set_ambientIntensity_3(L_15);
		UnityARLightEstimate_t1498306117 * L_16 = (&___lightData0)->get_address_of_arLightEstimate_1();
		float L_17 = L_16->get_ambientColorTemperature_1();
		__this->set_ambientColorTemperature_4(L_17);
	}

IL_009a:
	{
		return;
	}
}
// Utils.serializableUnityARLightData Utils.serializableUnityARLightData::op_Implicit(UnityEngine.XR.iOS.UnityARLightData)
extern "C"  serializableUnityARLightData_t3935513283 * serializableUnityARLightData_op_Implicit_m1050232524 (RuntimeObject * __this /* static, unused */, UnityARLightData_t2160616730  ___rValue0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializableUnityARLightData_op_Implicit_m1050232524_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityARLightData_t2160616730  L_0 = ___rValue0;
		serializableUnityARLightData_t3935513283 * L_1 = (serializableUnityARLightData_t3935513283 *)il2cpp_codegen_object_new(serializableUnityARLightData_t3935513283_il2cpp_TypeInfo_var);
		serializableUnityARLightData__ctor_m2554290283(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.XR.iOS.UnityARLightData Utils.serializableUnityARLightData::op_Implicit(Utils.serializableUnityARLightData)
extern "C"  UnityARLightData_t2160616730  serializableUnityARLightData_op_Implicit_m3789143495 (RuntimeObject * __this /* static, unused */, serializableUnityARLightData_t3935513283 * ___rValue0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializableUnityARLightData_op_Implicit_m3789143495_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UnityARDirectionalLightEstimate_t2924556994 * V_0 = NULL;
	UnityARLightEstimate_t1498306117  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		V_0 = (UnityARDirectionalLightEstimate_t2924556994 *)NULL;
		serializableUnityARLightData_t3935513283 * L_0 = ___rValue0;
		NullCheck(L_0);
		float L_1 = L_0->get_ambientIntensity_3();
		serializableUnityARLightData_t3935513283 * L_2 = ___rValue0;
		NullCheck(L_2);
		float L_3 = L_2->get_ambientColorTemperature_4();
		UnityARLightEstimate__ctor_m1412967459((&V_1), L_1, L_3, /*hidden argument*/NULL);
		serializableUnityARLightData_t3935513283 * L_4 = ___rValue0;
		NullCheck(L_4);
		int32_t L_5 = L_4->get_whichLight_0();
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_0066;
		}
	}
	{
		serializableUnityARLightData_t3935513283 * L_6 = ___rValue0;
		NullCheck(L_6);
		SerializableVector4_t1862640084 * L_7 = L_6->get_primaryLightDirAndIntensity_2();
		NullCheck(L_7);
		float L_8 = L_7->get_x_0();
		serializableUnityARLightData_t3935513283 * L_9 = ___rValue0;
		NullCheck(L_9);
		SerializableVector4_t1862640084 * L_10 = L_9->get_primaryLightDirAndIntensity_2();
		NullCheck(L_10);
		float L_11 = L_10->get_y_1();
		serializableUnityARLightData_t3935513283 * L_12 = ___rValue0;
		NullCheck(L_12);
		SerializableVector4_t1862640084 * L_13 = L_12->get_primaryLightDirAndIntensity_2();
		NullCheck(L_13);
		float L_14 = L_13->get_z_2();
		Vector3__ctor_m3353183577((&V_2), L_8, L_11, L_14, /*hidden argument*/NULL);
		serializableUnityARLightData_t3935513283 * L_15 = ___rValue0;
		NullCheck(L_15);
		serializableSHC_t2667429767 * L_16 = L_15->get_lightSHC_1();
		SingleU5BU5D_t1444911251* L_17 = serializableSHC_op_Implicit_m465874179(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		Vector3_t3722313464  L_18 = V_2;
		serializableUnityARLightData_t3935513283 * L_19 = ___rValue0;
		NullCheck(L_19);
		SerializableVector4_t1862640084 * L_20 = L_19->get_primaryLightDirAndIntensity_2();
		NullCheck(L_20);
		float L_21 = L_20->get_w_3();
		UnityARDirectionalLightEstimate_t2924556994 * L_22 = (UnityARDirectionalLightEstimate_t2924556994 *)il2cpp_codegen_object_new(UnityARDirectionalLightEstimate_t2924556994_il2cpp_TypeInfo_var);
		UnityARDirectionalLightEstimate__ctor_m3248127264(L_22, L_17, L_18, L_21, /*hidden argument*/NULL);
		V_0 = L_22;
	}

IL_0066:
	{
		serializableUnityARLightData_t3935513283 * L_23 = ___rValue0;
		NullCheck(L_23);
		int32_t L_24 = L_23->get_whichLight_0();
		UnityARLightEstimate_t1498306117  L_25 = V_1;
		UnityARDirectionalLightEstimate_t2924556994 * L_26 = V_0;
		UnityARLightData_t2160616730  L_27;
		memset(&L_27, 0, sizeof(L_27));
		UnityARLightData__ctor_m4238079321((&L_27), L_24, L_25, L_26, /*hidden argument*/NULL);
		return L_27;
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
// System.Void Utils.serializableUnityARMatrix4x4::.ctor(Utils.SerializableVector4,Utils.SerializableVector4,Utils.SerializableVector4,Utils.SerializableVector4)
extern "C"  void serializableUnityARMatrix4x4__ctor_m3496280910 (serializableUnityARMatrix4x4_t78255337 * __this, SerializableVector4_t1862640084 * ___v00, SerializableVector4_t1862640084 * ___v11, SerializableVector4_t1862640084 * ___v22, SerializableVector4_t1862640084 * ___v33, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		SerializableVector4_t1862640084 * L_0 = ___v00;
		__this->set_column0_0(L_0);
		SerializableVector4_t1862640084 * L_1 = ___v11;
		__this->set_column1_1(L_1);
		SerializableVector4_t1862640084 * L_2 = ___v22;
		__this->set_column2_2(L_2);
		SerializableVector4_t1862640084 * L_3 = ___v33;
		__this->set_column3_3(L_3);
		return;
	}
}
// Utils.serializableUnityARMatrix4x4 Utils.serializableUnityARMatrix4x4::op_Implicit(UnityEngine.XR.iOS.UnityARMatrix4x4)
extern "C"  serializableUnityARMatrix4x4_t78255337 * serializableUnityARMatrix4x4_op_Implicit_m3630501456 (RuntimeObject * __this /* static, unused */, UnityARMatrix4x4_t4073345847  ___rValue0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializableUnityARMatrix4x4_op_Implicit_m3630501456_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector4_t3319028937  L_0 = (&___rValue0)->get_column0_0();
		SerializableVector4_t1862640084 * L_1 = SerializableVector4_op_Implicit_m14360340(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		Vector4_t3319028937  L_2 = (&___rValue0)->get_column1_1();
		SerializableVector4_t1862640084 * L_3 = SerializableVector4_op_Implicit_m14360340(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		Vector4_t3319028937  L_4 = (&___rValue0)->get_column2_2();
		SerializableVector4_t1862640084 * L_5 = SerializableVector4_op_Implicit_m14360340(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		Vector4_t3319028937  L_6 = (&___rValue0)->get_column3_3();
		SerializableVector4_t1862640084 * L_7 = SerializableVector4_op_Implicit_m14360340(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		serializableUnityARMatrix4x4_t78255337 * L_8 = (serializableUnityARMatrix4x4_t78255337 *)il2cpp_codegen_object_new(serializableUnityARMatrix4x4_t78255337_il2cpp_TypeInfo_var);
		serializableUnityARMatrix4x4__ctor_m3496280910(L_8, L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// UnityEngine.XR.iOS.UnityARMatrix4x4 Utils.serializableUnityARMatrix4x4::op_Implicit(Utils.serializableUnityARMatrix4x4)
extern "C"  UnityARMatrix4x4_t4073345847  serializableUnityARMatrix4x4_op_Implicit_m2311882771 (RuntimeObject * __this /* static, unused */, serializableUnityARMatrix4x4_t78255337 * ___rValue0, const RuntimeMethod* method)
{
	{
		serializableUnityARMatrix4x4_t78255337 * L_0 = ___rValue0;
		NullCheck(L_0);
		SerializableVector4_t1862640084 * L_1 = L_0->get_column0_0();
		Vector4_t3319028937  L_2 = SerializableVector4_op_Implicit_m3519692110(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		serializableUnityARMatrix4x4_t78255337 * L_3 = ___rValue0;
		NullCheck(L_3);
		SerializableVector4_t1862640084 * L_4 = L_3->get_column1_1();
		Vector4_t3319028937  L_5 = SerializableVector4_op_Implicit_m3519692110(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		serializableUnityARMatrix4x4_t78255337 * L_6 = ___rValue0;
		NullCheck(L_6);
		SerializableVector4_t1862640084 * L_7 = L_6->get_column2_2();
		Vector4_t3319028937  L_8 = SerializableVector4_op_Implicit_m3519692110(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		serializableUnityARMatrix4x4_t78255337 * L_9 = ___rValue0;
		NullCheck(L_9);
		SerializableVector4_t1862640084 * L_10 = L_9->get_column3_3();
		Vector4_t3319028937  L_11 = SerializableVector4_op_Implicit_m3519692110(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		UnityARMatrix4x4_t4073345847  L_12;
		memset(&L_12, 0, sizeof(L_12));
		UnityARMatrix4x4__ctor_m3835909947((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		return L_12;
	}
}
// Utils.serializableUnityARMatrix4x4 Utils.serializableUnityARMatrix4x4::op_Implicit(UnityEngine.Matrix4x4)
extern "C"  serializableUnityARMatrix4x4_t78255337 * serializableUnityARMatrix4x4_op_Implicit_m3556108972 (RuntimeObject * __this /* static, unused */, Matrix4x4_t1817901843  ___rValue0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializableUnityARMatrix4x4_op_Implicit_m3556108972_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector4_t3319028937  L_0 = Matrix4x4_GetColumn_m461504848((&___rValue0), 0, /*hidden argument*/NULL);
		SerializableVector4_t1862640084 * L_1 = SerializableVector4_op_Implicit_m14360340(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		Vector4_t3319028937  L_2 = Matrix4x4_GetColumn_m461504848((&___rValue0), 1, /*hidden argument*/NULL);
		SerializableVector4_t1862640084 * L_3 = SerializableVector4_op_Implicit_m14360340(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		Vector4_t3319028937  L_4 = Matrix4x4_GetColumn_m461504848((&___rValue0), 2, /*hidden argument*/NULL);
		SerializableVector4_t1862640084 * L_5 = SerializableVector4_op_Implicit_m14360340(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		Vector4_t3319028937  L_6 = Matrix4x4_GetColumn_m461504848((&___rValue0), 3, /*hidden argument*/NULL);
		SerializableVector4_t1862640084 * L_7 = SerializableVector4_op_Implicit_m14360340(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		serializableUnityARMatrix4x4_t78255337 * L_8 = (serializableUnityARMatrix4x4_t78255337 *)il2cpp_codegen_object_new(serializableUnityARMatrix4x4_t78255337_il2cpp_TypeInfo_var);
		serializableUnityARMatrix4x4__ctor_m3496280910(L_8, L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// UnityEngine.Matrix4x4 Utils.serializableUnityARMatrix4x4::op_Implicit(Utils.serializableUnityARMatrix4x4)
extern "C"  Matrix4x4_t1817901843  serializableUnityARMatrix4x4_op_Implicit_m456506418 (RuntimeObject * __this /* static, unused */, serializableUnityARMatrix4x4_t78255337 * ___rValue0, const RuntimeMethod* method)
{
	{
		serializableUnityARMatrix4x4_t78255337 * L_0 = ___rValue0;
		NullCheck(L_0);
		SerializableVector4_t1862640084 * L_1 = L_0->get_column0_0();
		Vector4_t3319028937  L_2 = SerializableVector4_op_Implicit_m3519692110(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		serializableUnityARMatrix4x4_t78255337 * L_3 = ___rValue0;
		NullCheck(L_3);
		SerializableVector4_t1862640084 * L_4 = L_3->get_column1_1();
		Vector4_t3319028937  L_5 = SerializableVector4_op_Implicit_m3519692110(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		serializableUnityARMatrix4x4_t78255337 * L_6 = ___rValue0;
		NullCheck(L_6);
		SerializableVector4_t1862640084 * L_7 = L_6->get_column2_2();
		Vector4_t3319028937  L_8 = SerializableVector4_op_Implicit_m3519692110(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		serializableUnityARMatrix4x4_t78255337 * L_9 = ___rValue0;
		NullCheck(L_9);
		SerializableVector4_t1862640084 * L_10 = L_9->get_column3_3();
		Vector4_t3319028937  L_11 = SerializableVector4_op_Implicit_m3519692110(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		Matrix4x4_t1817901843  L_12;
		memset(&L_12, 0, sizeof(L_12));
		Matrix4x4__ctor_m53065545((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		return L_12;
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
// System.Void Utils.serializableUnityARPlaneAnchor::.ctor(Utils.serializableUnityARMatrix4x4,Utils.SerializableVector4,Utils.SerializableVector4,UnityEngine.XR.iOS.ARPlaneAnchorAlignment,Utils.serializablePlaneGeometry,System.Byte[])
extern "C"  void serializableUnityARPlaneAnchor__ctor_m311212769 (serializableUnityARPlaneAnchor_t1446774435 * __this, serializableUnityARMatrix4x4_t78255337 * ___wt0, SerializableVector4_t1862640084 * ___ctr1, SerializableVector4_t1862640084 * ___ext2, int64_t ___apaa3, serializablePlaneGeometry_t3680333341 * ___spg4, ByteU5BU5D_t4116647657* ___idstr5, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		serializableUnityARMatrix4x4_t78255337 * L_0 = ___wt0;
		__this->set_worldTransform_0(L_0);
		SerializableVector4_t1862640084 * L_1 = ___ctr1;
		__this->set_center_1(L_1);
		SerializableVector4_t1862640084 * L_2 = ___ext2;
		__this->set_extent_2(L_2);
		int64_t L_3 = ___apaa3;
		__this->set_planeAlignment_3(L_3);
		ByteU5BU5D_t4116647657* L_4 = ___idstr5;
		__this->set_identifierStr_5(L_4);
		serializablePlaneGeometry_t3680333341 * L_5 = ___spg4;
		__this->set_planeGeometry_4(L_5);
		return;
	}
}
// Utils.serializableUnityARPlaneAnchor Utils.serializableUnityARPlaneAnchor::op_Implicit(UnityEngine.XR.iOS.ARPlaneAnchor)
extern "C"  serializableUnityARPlaneAnchor_t1446774435 * serializableUnityARPlaneAnchor_op_Implicit_m57666075 (RuntimeObject * __this /* static, unused */, ARPlaneAnchor_t2049372221 * ___rValue0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializableUnityARPlaneAnchor_op_Implicit_m57666075_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	serializableUnityARMatrix4x4_t78255337 * V_0 = NULL;
	SerializableVector4_t1862640084 * V_1 = NULL;
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector3_t3722313464  V_4;
	memset(&V_4, 0, sizeof(V_4));
	SerializableVector4_t1862640084 * V_5 = NULL;
	Vector3_t3722313464  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Vector3_t3722313464  V_7;
	memset(&V_7, 0, sizeof(V_7));
	Vector3_t3722313464  V_8;
	memset(&V_8, 0, sizeof(V_8));
	ByteU5BU5D_t4116647657* V_9 = NULL;
	serializablePlaneGeometry_t3680333341 * V_10 = NULL;
	{
		ARPlaneAnchor_t2049372221 * L_0 = ___rValue0;
		NullCheck(L_0);
		Matrix4x4_t1817901843  L_1 = ARPlaneAnchor_get_transform_m1915241100(L_0, /*hidden argument*/NULL);
		serializableUnityARMatrix4x4_t78255337 * L_2 = serializableUnityARMatrix4x4_op_Implicit_m3556108972(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		ARPlaneAnchor_t2049372221 * L_3 = ___rValue0;
		NullCheck(L_3);
		Vector3_t3722313464  L_4 = ARPlaneAnchor_get_center_m3271753266(L_3, /*hidden argument*/NULL);
		V_2 = L_4;
		float L_5 = (&V_2)->get_x_1();
		ARPlaneAnchor_t2049372221 * L_6 = ___rValue0;
		NullCheck(L_6);
		Vector3_t3722313464  L_7 = ARPlaneAnchor_get_center_m3271753266(L_6, /*hidden argument*/NULL);
		V_3 = L_7;
		float L_8 = (&V_3)->get_y_2();
		ARPlaneAnchor_t2049372221 * L_9 = ___rValue0;
		NullCheck(L_9);
		Vector3_t3722313464  L_10 = ARPlaneAnchor_get_center_m3271753266(L_9, /*hidden argument*/NULL);
		V_4 = L_10;
		float L_11 = (&V_4)->get_z_3();
		SerializableVector4_t1862640084 * L_12 = (SerializableVector4_t1862640084 *)il2cpp_codegen_object_new(SerializableVector4_t1862640084_il2cpp_TypeInfo_var);
		SerializableVector4__ctor_m3231681896(L_12, L_5, L_8, L_11, (1.0f), /*hidden argument*/NULL);
		V_1 = L_12;
		ARPlaneAnchor_t2049372221 * L_13 = ___rValue0;
		NullCheck(L_13);
		Vector3_t3722313464  L_14 = ARPlaneAnchor_get_extent_m687688995(L_13, /*hidden argument*/NULL);
		V_6 = L_14;
		float L_15 = (&V_6)->get_x_1();
		ARPlaneAnchor_t2049372221 * L_16 = ___rValue0;
		NullCheck(L_16);
		Vector3_t3722313464  L_17 = ARPlaneAnchor_get_extent_m687688995(L_16, /*hidden argument*/NULL);
		V_7 = L_17;
		float L_18 = (&V_7)->get_y_2();
		ARPlaneAnchor_t2049372221 * L_19 = ___rValue0;
		NullCheck(L_19);
		Vector3_t3722313464  L_20 = ARPlaneAnchor_get_extent_m687688995(L_19, /*hidden argument*/NULL);
		V_8 = L_20;
		float L_21 = (&V_8)->get_z_3();
		SerializableVector4_t1862640084 * L_22 = (SerializableVector4_t1862640084 *)il2cpp_codegen_object_new(SerializableVector4_t1862640084_il2cpp_TypeInfo_var);
		SerializableVector4__ctor_m3231681896(L_22, L_15, L_18, L_21, (1.0f), /*hidden argument*/NULL);
		V_5 = L_22;
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t1523322056_il2cpp_TypeInfo_var);
		Encoding_t1523322056 * L_23 = Encoding_get_UTF8_m1008486739(NULL /*static, unused*/, /*hidden argument*/NULL);
		ARPlaneAnchor_t2049372221 * L_24 = ___rValue0;
		NullCheck(L_24);
		String_t* L_25 = ARPlaneAnchor_get_identifier_m3202847065(L_24, /*hidden argument*/NULL);
		NullCheck(L_23);
		ByteU5BU5D_t4116647657* L_26 = VirtFuncInvoker1< ByteU5BU5D_t4116647657*, String_t* >::Invoke(10 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_23, L_25);
		V_9 = L_26;
		ARPlaneAnchor_t2049372221 * L_27 = ___rValue0;
		NullCheck(L_27);
		ARPlaneGeometry_t1169415986 * L_28 = ARPlaneAnchor_get_planeGeometry_m4284775768(L_27, /*hidden argument*/NULL);
		serializablePlaneGeometry_t3680333341 * L_29 = serializablePlaneGeometry_op_Implicit_m703366758(NULL /*static, unused*/, L_28, /*hidden argument*/NULL);
		V_10 = L_29;
		serializableUnityARMatrix4x4_t78255337 * L_30 = V_0;
		SerializableVector4_t1862640084 * L_31 = V_1;
		SerializableVector4_t1862640084 * L_32 = V_5;
		ARPlaneAnchor_t2049372221 * L_33 = ___rValue0;
		NullCheck(L_33);
		int64_t L_34 = ARPlaneAnchor_get_alignment_m2029387076(L_33, /*hidden argument*/NULL);
		serializablePlaneGeometry_t3680333341 * L_35 = V_10;
		ByteU5BU5D_t4116647657* L_36 = V_9;
		serializableUnityARPlaneAnchor_t1446774435 * L_37 = (serializableUnityARPlaneAnchor_t1446774435 *)il2cpp_codegen_object_new(serializableUnityARPlaneAnchor_t1446774435_il2cpp_TypeInfo_var);
		serializableUnityARPlaneAnchor__ctor_m311212769(L_37, L_30, L_31, L_32, L_34, L_35, L_36, /*hidden argument*/NULL);
		return L_37;
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
// System.Void Utils.SerializableVector4::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void SerializableVector4__ctor_m3231681896 (SerializableVector4_t1862640084 * __this, float ___rX0, float ___rY1, float ___rZ2, float ___rW3, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		float L_0 = ___rX0;
		__this->set_x_0(L_0);
		float L_1 = ___rY1;
		__this->set_y_1(L_1);
		float L_2 = ___rZ2;
		__this->set_z_2(L_2);
		float L_3 = ___rW3;
		__this->set_w_3(L_3);
		return;
	}
}
// System.String Utils.SerializableVector4::ToString()
extern "C"  String_t* SerializableVector4_ToString_m70901593 (SerializableVector4_t1862640084 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SerializableVector4_ToString_m70901593_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t2843939325* L_0 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)4));
		float L_1 = __this->get_x_0();
		float L_2 = L_1;
		RuntimeObject * L_3 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, L_3);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_t2843939325* L_4 = L_0;
		float L_5 = __this->get_y_1();
		float L_6 = L_5;
		RuntimeObject * L_7 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_7);
		ObjectU5BU5D_t2843939325* L_8 = L_4;
		float L_9 = __this->get_z_2();
		float L_10 = L_9;
		RuntimeObject * L_11 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_11);
		ObjectU5BU5D_t2843939325* L_12 = L_8;
		float L_13 = __this->get_w_3();
		float L_14 = L_13;
		RuntimeObject * L_15 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_15);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_16 = String_Format_m630303134(NULL /*static, unused*/, _stringLiteral1432570861, L_12, /*hidden argument*/NULL);
		return L_16;
	}
}
// UnityEngine.Vector4 Utils.SerializableVector4::op_Implicit(Utils.SerializableVector4)
extern "C"  Vector4_t3319028937  SerializableVector4_op_Implicit_m3519692110 (RuntimeObject * __this /* static, unused */, SerializableVector4_t1862640084 * ___rValue0, const RuntimeMethod* method)
{
	{
		SerializableVector4_t1862640084 * L_0 = ___rValue0;
		NullCheck(L_0);
		float L_1 = L_0->get_x_0();
		SerializableVector4_t1862640084 * L_2 = ___rValue0;
		NullCheck(L_2);
		float L_3 = L_2->get_y_1();
		SerializableVector4_t1862640084 * L_4 = ___rValue0;
		NullCheck(L_4);
		float L_5 = L_4->get_z_2();
		SerializableVector4_t1862640084 * L_6 = ___rValue0;
		NullCheck(L_6);
		float L_7 = L_6->get_w_3();
		Vector4_t3319028937  L_8;
		memset(&L_8, 0, sizeof(L_8));
		Vector4__ctor_m2498754347((&L_8), L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// Utils.SerializableVector4 Utils.SerializableVector4::op_Implicit(UnityEngine.Vector4)
extern "C"  SerializableVector4_t1862640084 * SerializableVector4_op_Implicit_m14360340 (RuntimeObject * __this /* static, unused */, Vector4_t3319028937  ___rValue0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SerializableVector4_op_Implicit_m14360340_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = (&___rValue0)->get_x_1();
		float L_1 = (&___rValue0)->get_y_2();
		float L_2 = (&___rValue0)->get_z_3();
		float L_3 = (&___rValue0)->get_w_4();
		SerializableVector4_t1862640084 * L_4 = (SerializableVector4_t1862640084 *)il2cpp_codegen_object_new(SerializableVector4_t1862640084_il2cpp_TypeInfo_var);
		SerializableVector4__ctor_m3231681896(L_4, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
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
// System.Void VideoFormatButton::.ctor()
extern "C"  void VideoFormatButton__ctor_m7407655 (VideoFormatButton_t1937817916 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VideoFormatButton::add_FormatButtonPressedEvent(VideoFormatButton/VideoFormatButtonPressed)
extern "C"  void VideoFormatButton_add_FormatButtonPressedEvent_m1863116585 (RuntimeObject * __this /* static, unused */, VideoFormatButtonPressed_t1187798507 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoFormatButton_add_FormatButtonPressedEvent_m1863116585_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	VideoFormatButtonPressed_t1187798507 * V_0 = NULL;
	VideoFormatButtonPressed_t1187798507 * V_1 = NULL;
	{
		VideoFormatButtonPressed_t1187798507 * L_0 = ((VideoFormatButton_t1937817916_StaticFields*)il2cpp_codegen_static_fields_for(VideoFormatButton_t1937817916_il2cpp_TypeInfo_var))->get_FormatButtonPressedEvent_4();
		V_0 = L_0;
	}

IL_0006:
	{
		VideoFormatButtonPressed_t1187798507 * L_1 = V_0;
		V_1 = L_1;
		VideoFormatButtonPressed_t1187798507 * L_2 = V_1;
		VideoFormatButtonPressed_t1187798507 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		VideoFormatButtonPressed_t1187798507 * L_5 = V_0;
		VideoFormatButtonPressed_t1187798507 * L_6 = InterlockedCompareExchangeImpl<VideoFormatButtonPressed_t1187798507 *>((((VideoFormatButton_t1937817916_StaticFields*)il2cpp_codegen_static_fields_for(VideoFormatButton_t1937817916_il2cpp_TypeInfo_var))->get_address_of_FormatButtonPressedEvent_4()), ((VideoFormatButtonPressed_t1187798507 *)CastclassSealed((RuntimeObject*)L_4, VideoFormatButtonPressed_t1187798507_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		VideoFormatButtonPressed_t1187798507 * L_7 = V_0;
		VideoFormatButtonPressed_t1187798507 * L_8 = V_1;
		if ((!(((RuntimeObject*)(VideoFormatButtonPressed_t1187798507 *)L_7) == ((RuntimeObject*)(VideoFormatButtonPressed_t1187798507 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void VideoFormatButton::remove_FormatButtonPressedEvent(VideoFormatButton/VideoFormatButtonPressed)
extern "C"  void VideoFormatButton_remove_FormatButtonPressedEvent_m3255418780 (RuntimeObject * __this /* static, unused */, VideoFormatButtonPressed_t1187798507 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoFormatButton_remove_FormatButtonPressedEvent_m3255418780_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	VideoFormatButtonPressed_t1187798507 * V_0 = NULL;
	VideoFormatButtonPressed_t1187798507 * V_1 = NULL;
	{
		VideoFormatButtonPressed_t1187798507 * L_0 = ((VideoFormatButton_t1937817916_StaticFields*)il2cpp_codegen_static_fields_for(VideoFormatButton_t1937817916_il2cpp_TypeInfo_var))->get_FormatButtonPressedEvent_4();
		V_0 = L_0;
	}

IL_0006:
	{
		VideoFormatButtonPressed_t1187798507 * L_1 = V_0;
		V_1 = L_1;
		VideoFormatButtonPressed_t1187798507 * L_2 = V_1;
		VideoFormatButtonPressed_t1187798507 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		VideoFormatButtonPressed_t1187798507 * L_5 = V_0;
		VideoFormatButtonPressed_t1187798507 * L_6 = InterlockedCompareExchangeImpl<VideoFormatButtonPressed_t1187798507 *>((((VideoFormatButton_t1937817916_StaticFields*)il2cpp_codegen_static_fields_for(VideoFormatButton_t1937817916_il2cpp_TypeInfo_var))->get_address_of_FormatButtonPressedEvent_4()), ((VideoFormatButtonPressed_t1187798507 *)CastclassSealed((RuntimeObject*)L_4, VideoFormatButtonPressed_t1187798507_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		VideoFormatButtonPressed_t1187798507 * L_7 = V_0;
		VideoFormatButtonPressed_t1187798507 * L_8 = V_1;
		if ((!(((RuntimeObject*)(VideoFormatButtonPressed_t1187798507 *)L_7) == ((RuntimeObject*)(VideoFormatButtonPressed_t1187798507 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void VideoFormatButton::Populate(UnityEngine.XR.iOS.UnityARVideoFormat)
extern "C"  void VideoFormatButton_Populate_m915370135 (VideoFormatButton_t1937817916 * __this, UnityARVideoFormat_t1944454781  ___videoFormat0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoFormatButton_Populate_m915370135_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityARVideoFormat_t1944454781  L_0 = ___videoFormat0;
		__this->set_arVideoFormat_3(L_0);
		Text_t1901882714 * L_1 = __this->get_videoFormatDescription_2();
		ObjectU5BU5D_t2843939325* L_2 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)6));
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral51204818);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral51204818);
		ObjectU5BU5D_t2843939325* L_3 = L_2;
		float L_4 = (&___videoFormat0)->get_imageResolutionWidth_1();
		float L_5 = L_4;
		RuntimeObject * L_6 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_6);
		ObjectU5BU5D_t2843939325* L_7 = L_3;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral3452614616);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral3452614616);
		ObjectU5BU5D_t2843939325* L_8 = L_7;
		float L_9 = (&___videoFormat0)->get_imageResolutionHeight_2();
		float L_10 = L_9;
		RuntimeObject * L_11 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_11);
		ObjectU5BU5D_t2843939325* L_12 = L_8;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral1652116954);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteral1652116954);
		ObjectU5BU5D_t2843939325* L_13 = L_12;
		int32_t L_14 = (&___videoFormat0)->get_framesPerSecond_3();
		int32_t L_15 = L_14;
		RuntimeObject * L_16 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_16);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_17 = String_Concat_m2971454694(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_17);
		return;
	}
}
// System.Void VideoFormatButton::ButtonPressed()
extern "C"  void VideoFormatButton_ButtonPressed_m1715857364 (VideoFormatButton_t1937817916 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoFormatButton_ButtonPressed_m1715857364_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		VideoFormatButtonPressed_t1187798507 * L_0 = ((VideoFormatButton_t1937817916_StaticFields*)il2cpp_codegen_static_fields_for(VideoFormatButton_t1937817916_il2cpp_TypeInfo_var))->get_FormatButtonPressedEvent_4();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		VideoFormatButtonPressed_t1187798507 * L_1 = ((VideoFormatButton_t1937817916_StaticFields*)il2cpp_codegen_static_fields_for(VideoFormatButton_t1937817916_il2cpp_TypeInfo_var))->get_FormatButtonPressedEvent_4();
		UnityARVideoFormat_t1944454781  L_2 = __this->get_arVideoFormat_3();
		NullCheck(L_1);
		VideoFormatButtonPressed_Invoke_m3826882959(L_1, L_2, /*hidden argument*/NULL);
	}

IL_001a:
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
extern "C"  void DelegatePInvokeWrapper_VideoFormatButtonPressed_t1187798507 (VideoFormatButtonPressed_t1187798507 * __this, UnityARVideoFormat_t1944454781  ___videoFormat0, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)(UnityARVideoFormat_t1944454781 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___videoFormat0);

}
// System.Void VideoFormatButton/VideoFormatButtonPressed::.ctor(System.Object,System.IntPtr)
extern "C"  void VideoFormatButtonPressed__ctor_m1152072860 (VideoFormatButtonPressed_t1187798507 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void VideoFormatButton/VideoFormatButtonPressed::Invoke(UnityEngine.XR.iOS.UnityARVideoFormat)
extern "C"  void VideoFormatButtonPressed_Invoke_m3826882959 (VideoFormatButtonPressed_t1187798507 * __this, UnityARVideoFormat_t1944454781  ___videoFormat0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		VideoFormatButtonPressed_Invoke_m3826882959((VideoFormatButtonPressed_t1187798507 *)__this->get_prev_9(), ___videoFormat0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			typedef void (*FunctionPointerType) (RuntimeObject *, UnityARVideoFormat_t1944454781 , const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(NULL, ___videoFormat0, targetMethod);
		}
		else
		{
			// closed
			typedef void (*FunctionPointerType) (RuntimeObject *, void*, UnityARVideoFormat_t1944454781 , const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___videoFormat0, targetMethod);
		}
	}
	else
	{
		{
			// closed
			typedef void (*FunctionPointerType) (void*, UnityARVideoFormat_t1944454781 , const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(targetThis, ___videoFormat0, targetMethod);
		}
	}
}
// System.IAsyncResult VideoFormatButton/VideoFormatButtonPressed::BeginInvoke(UnityEngine.XR.iOS.UnityARVideoFormat,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* VideoFormatButtonPressed_BeginInvoke_m3331672980 (VideoFormatButtonPressed_t1187798507 * __this, UnityARVideoFormat_t1944454781  ___videoFormat0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoFormatButtonPressed_BeginInvoke_m3331672980_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(UnityARVideoFormat_t1944454781_il2cpp_TypeInfo_var, &___videoFormat0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void VideoFormatButton/VideoFormatButtonPressed::EndInvoke(System.IAsyncResult)
extern "C"  void VideoFormatButtonPressed_EndInvoke_m419070761 (VideoFormatButtonPressed_t1187798507 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void VideoFormatsExample::.ctor()
extern "C"  void VideoFormatsExample__ctor_m143854614 (VideoFormatsExample_t2303262312 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VideoFormatsExample::Start()
extern "C"  void VideoFormatsExample_Start_m1615238214 (VideoFormatsExample_t2303262312 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoFormatsExample_Start_m1615238214_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = (intptr_t)VideoFormatsExample_ExampletButtonPressed_m2588664126_RuntimeMethod_var;
		VideoFormatButtonPressed_t1187798507 * L_1 = (VideoFormatButtonPressed_t1187798507 *)il2cpp_codegen_object_new(VideoFormatButtonPressed_t1187798507_il2cpp_TypeInfo_var);
		VideoFormatButtonPressed__ctor_m1152072860(L_1, __this, L_0, /*hidden argument*/NULL);
		VideoFormatButton_add_FormatButtonPressedEvent_m1863116585(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		VideoFormatsExample_PopulateVideoFormatButtons_m595526008(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VideoFormatsExample::OnDestroy()
extern "C"  void VideoFormatsExample_OnDestroy_m541603283 (VideoFormatsExample_t2303262312 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoFormatsExample_OnDestroy_m541603283_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = (intptr_t)VideoFormatsExample_ExampletButtonPressed_m2588664126_RuntimeMethod_var;
		VideoFormatButtonPressed_t1187798507 * L_1 = (VideoFormatButtonPressed_t1187798507 *)il2cpp_codegen_object_new(VideoFormatButtonPressed_t1187798507_il2cpp_TypeInfo_var);
		VideoFormatButtonPressed__ctor_m1152072860(L_1, __this, L_0, /*hidden argument*/NULL);
		VideoFormatButton_remove_FormatButtonPressedEvent_m3255418780(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VideoFormatsExample::PopulateVideoFormatButtons()
extern "C"  void VideoFormatsExample_PopulateVideoFormatButtons_m595526008 (VideoFormatsExample_t2303262312 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoFormatsExample_PopulateVideoFormatButtons_m595526008_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UnityARVideoFormat_t1944454781  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Enumerator_t1010806104  V_1;
	memset(&V_1, 0, sizeof(V_1));
	GameObject_t1113636619 * V_2 = NULL;
	VideoFormatButton_t1937817916 * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t3416529523 * L_0 = UnityARVideoFormat_SupportedVideoFormats_m1522157695(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		Enumerator_t1010806104  L_1 = List_1_GetEnumerator_m3413760873(L_0, /*hidden argument*/List_1_GetEnumerator_m3413760873_RuntimeMethod_var);
		V_1 = L_1;
	}

IL_000b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0044;
		}

IL_0010:
		{
			UnityARVideoFormat_t1944454781  L_2 = Enumerator_get_Current_m3655906576((&V_1), /*hidden argument*/Enumerator_get_Current_m3655906576_RuntimeMethod_var);
			V_0 = L_2;
			GameObject_t1113636619 * L_3 = __this->get_videoFormatButtonPrefab_3();
			Transform_t3600365921 * L_4 = __this->get_formatsParent_2();
			IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
			GameObject_t1113636619 * L_5 = Object_Instantiate_TisGameObject_t1113636619_m3215236302(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m3215236302_RuntimeMethod_var);
			V_2 = L_5;
			GameObject_t1113636619 * L_6 = V_2;
			NullCheck(L_6);
			VideoFormatButton_t1937817916 * L_7 = GameObject_GetComponent_TisVideoFormatButton_t1937817916_m1994409976(L_6, /*hidden argument*/GameObject_GetComponent_TisVideoFormatButton_t1937817916_m1994409976_RuntimeMethod_var);
			V_3 = L_7;
			VideoFormatButton_t1937817916 * L_8 = V_3;
			bool L_9 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_8, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
			if (!L_9)
			{
				goto IL_0044;
			}
		}

IL_003d:
		{
			VideoFormatButton_t1937817916 * L_10 = V_3;
			UnityARVideoFormat_t1944454781  L_11 = V_0;
			NullCheck(L_10);
			VideoFormatButton_Populate_m915370135(L_10, L_11, /*hidden argument*/NULL);
		}

IL_0044:
		{
			bool L_12 = Enumerator_MoveNext_m2987439075((&V_1), /*hidden argument*/Enumerator_MoveNext_m2987439075_RuntimeMethod_var);
			if (L_12)
			{
				goto IL_0010;
			}
		}

IL_0050:
		{
			IL2CPP_LEAVE(0x63, FINALLY_0055);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0055;
	}

FINALLY_0055:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m510309855((&V_1), /*hidden argument*/Enumerator_Dispose_m510309855_RuntimeMethod_var);
		IL2CPP_END_FINALLY(85)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(85)
	{
		IL2CPP_JUMP_TBL(0x63, IL_0063)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0063:
	{
		return;
	}
}
// System.Void VideoFormatsExample::ExampletButtonPressed(UnityEngine.XR.iOS.UnityARVideoFormat)
extern "C"  void VideoFormatsExample_ExampletButtonPressed_m2588664126 (VideoFormatsExample_t2303262312 * __this, UnityARVideoFormat_t1944454781  ___videoFormat0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoFormatsExample_ExampletButtonPressed_m2588664126_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UnityARSessionNativeInterface_t3929719369 * V_0 = NULL;
	ARKitWorldTrackingSessionConfiguration_t273386347  V_1;
	memset(&V_1, 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		UnityARSessionNativeInterface_t3929719369 * L_0 = UnityARSessionNativeInterface_GetARSessionNativeInterface_m1118592565(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		il2cpp_codegen_initobj((&V_1), sizeof(ARKitWorldTrackingSessionConfiguration_t273386347 ));
		bool L_1 = ARKitWorldTrackingSessionConfiguration_get_IsSupported_m4234602811((&V_1), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0066;
		}
	}
	{
		(&V_1)->set_planeDetection_1(3);
		(&V_1)->set_alignment_0(0);
		(&V_1)->set_getPointCloudData_2((bool)1);
		(&V_1)->set_enableLightEstimation_3((bool)1);
		(&V_1)->set_enableAutoFocus_4((bool)1);
		intptr_t L_2 = (&___videoFormat0)->get_videoFormatPtr_0();
		(&V_1)->set_videoFormat_5(L_2);
		int32_t L_3 = (&___videoFormat0)->get_framesPerSecond_3();
		Application_set_targetFrameRate_m3682352535(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		V_2 = 3;
		UnityARSessionNativeInterface_t3929719369 * L_4 = V_0;
		ARKitWorldTrackingSessionConfiguration_t273386347  L_5 = V_1;
		int32_t L_6 = V_2;
		NullCheck(L_4);
		UnityARSessionNativeInterface_RunWithConfigAndOptions_m2136170177(L_4, L_5, L_6, /*hidden argument*/NULL);
	}

IL_0066:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
