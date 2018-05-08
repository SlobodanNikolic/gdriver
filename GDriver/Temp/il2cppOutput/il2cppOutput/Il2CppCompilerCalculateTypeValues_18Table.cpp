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

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// ZXing.LuminanceSource
struct LuminanceSource_t2042240187;
// ZXing.Common.BitMatrix
struct BitMatrix_t2608305202;
// ZXing.ResultPoint
struct ResultPoint_t3813591718;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Int32>
struct IDictionary_2_t2829544873;
// System.String
struct String_t;
// System.Int32[]
struct Int32U5BU5D_t136769044;
// ZXing.QrCode.Internal.Mode
struct Mode_t2627952440;
// ZXing.QrCode.Internal.ErrorCorrectionLevel
struct ErrorCorrectionLevel_t4005497601;
// ZXing.QrCode.Internal.Version
struct Version_t2207593696;
// ZXing.QrCode.Internal.ByteMatrix
struct ByteMatrix_t576269041;
// System.Int32[][]
struct Int32U5BU5DU5BU5D_t1266570013;
// System.Byte[][]
struct ByteU5BU5DU5BU5D_t214880401;
// System.Byte[]
struct ByteU5BU5D_t1607118512;
// ZXing.QrCode.Internal.FinderPattern
struct FinderPattern_t3349282791;
// System.Char[]
struct CharU5BU5D_t2574930377;
// BigIntegerLibrary.BigInteger[]
struct BigIntegerU5BU5D_t2093875075;
// ZXing.PDF417.Internal.BarcodeMetadata
struct BarcodeMetadata_t502981135;
// ZXing.PDF417.Internal.DetectionResultColumn[]
struct DetectionResultColumnU5BU5D_t3567187689;
// ZXing.PDF417.Internal.BoundingBox
struct BoundingBox_t2865536872;
// ZXing.PDF417.Internal.Codeword[]
struct CodewordU5BU5D_t664695181;
// System.Single[][]
struct SingleU5BU5DU5BU5D_t1008131371;
// System.Collections.Generic.IDictionary`2<ZXing.EncodeHintType,System.Object>
struct IDictionary_2_t807825461;
// System.IntPtr[]
struct IntPtrU5BU5D_t73022944;
// System.Collections.IDictionary
struct IDictionary_t3378435737;
// ZXing.PDF417.Internal.EC.ModulusGF
struct ModulusGF_t967090002;
// ZXing.PDF417.Internal.EC.ModulusPoly
struct ModulusPoly_t279804807;
// System.Collections.Generic.List`1<ZXing.QrCode.Internal.FinderPattern>
struct List_1_t3742007229;
// ZXing.ResultPointCallback
struct ResultPointCallback_t940181846;
// System.SByte[]
struct SByteU5BU5D_t535836565;
// ZXing.PDF417.Internal.BarcodeRow[]
struct BarcodeRowU5BU5D_t3160956792;
// System.Collections.Generic.List`1<ZXing.ResultPoint[]>
struct List_1_t1982392281;
// ZXing.PDF417.Internal.EC.ErrorCorrection
struct ErrorCorrection_t2362326784;
// System.Collections.Generic.IDictionary`2<ZXing.DecodeHintType,System.Object>
struct IDictionary_2_t2379229265;
// System.Collections.Generic.IList`1<ZXing.Reader>
struct IList_1_t2189116633;
// System.Collections.Generic.IList`1<ZXing.QrCode.Internal.AlignmentPattern>
struct IList_1_t3895522991;
// System.Collections.Generic.IDictionary`2<ZXing.BarcodeFormat,System.Func`1<ZXing.Writer>>
struct IDictionary_2_t476530904;
// ZXing.ResultPoint[]
struct ResultPointU5BU5D_t1589667843;
// ZXing.QrCode.Internal.Decoder
struct Decoder_t2550361462;
// ZXing.QrCode.Internal.FormatInformation
struct FormatInformation_t232295017;
// System.Func`3<System.Int32,System.Int32,System.Boolean>[]
struct Func_3U5BU5D_t3582193110;
// ZXing.Common.ReedSolomon.ReedSolomonDecoder
struct ReedSolomonDecoder_t607151696;
// ZXing.QrCode.Internal.ErrorCorrectionLevel[]
struct ErrorCorrectionLevelU5BU5D_t4250864604;
// ZXing.QrCode.Internal.Version[]
struct VersionU5BU5D_t517602209;
// ZXing.QrCode.Internal.Version/ECBlocks[]
struct ECBlocksU5BU5D_t3602512777;
// ZXing.QrCode.Internal.Version/ECB[]
struct ECBU5BU5D_t570517508;
// ZXing.Binarizer
struct Binarizer_t1153999642;
// System.Text.StringBuilder
struct StringBuilder_t3061408366;
// ZXing.OneD.UPCEANExtensionSupport
struct UPCEANExtensionSupport_t2355648450;
// ZXing.OneD.EANManufacturerOrgSupport
struct EANManufacturerOrgSupport_t1944510536;
// System.Void
struct Void_t2431537052;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t756507748;
// System.Collections.Generic.IDictionary`2<ZXing.ResultMetadataType,System.Object>
struct IDictionary_2_t916814041;
// ZXing.PDF417.Internal.BarcodeMatrix
struct BarcodeMatrix_t1670171860;
// System.Text.Encoding
struct Encoding_t361254252;
// System.IAsyncResult
struct IAsyncResult_t275119180;
// System.AsyncCallback
struct AsyncCallback_t1569985751;




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
#ifndef BINARIZER_T1153999642_H
#define BINARIZER_T1153999642_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.Binarizer
struct  Binarizer_t1153999642  : public RuntimeObject
{
public:
	// ZXing.LuminanceSource ZXing.Binarizer::source
	LuminanceSource_t2042240187 * ___source_0;

public:
	inline static int32_t get_offset_of_source_0() { return static_cast<int32_t>(offsetof(Binarizer_t1153999642, ___source_0)); }
	inline LuminanceSource_t2042240187 * get_source_0() const { return ___source_0; }
	inline LuminanceSource_t2042240187 ** get_address_of_source_0() { return &___source_0; }
	inline void set_source_0(LuminanceSource_t2042240187 * value)
	{
		___source_0 = value;
		Il2CppCodeGenWriteBarrier((&___source_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINARIZER_T1153999642_H
#ifndef CODEWORD_T1236974692_H
#define CODEWORD_T1236974692_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.PDF417.Internal.Codeword
struct  Codeword_t1236974692  : public RuntimeObject
{
public:
	// System.Int32 ZXing.PDF417.Internal.Codeword::<StartX>k__BackingField
	int32_t ___U3CStartXU3Ek__BackingField_1;
	// System.Int32 ZXing.PDF417.Internal.Codeword::<EndX>k__BackingField
	int32_t ___U3CEndXU3Ek__BackingField_2;
	// System.Int32 ZXing.PDF417.Internal.Codeword::<Bucket>k__BackingField
	int32_t ___U3CBucketU3Ek__BackingField_3;
	// System.Int32 ZXing.PDF417.Internal.Codeword::<Value>k__BackingField
	int32_t ___U3CValueU3Ek__BackingField_4;
	// System.Int32 ZXing.PDF417.Internal.Codeword::<RowNumber>k__BackingField
	int32_t ___U3CRowNumberU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CStartXU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Codeword_t1236974692, ___U3CStartXU3Ek__BackingField_1)); }
	inline int32_t get_U3CStartXU3Ek__BackingField_1() const { return ___U3CStartXU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CStartXU3Ek__BackingField_1() { return &___U3CStartXU3Ek__BackingField_1; }
	inline void set_U3CStartXU3Ek__BackingField_1(int32_t value)
	{
		___U3CStartXU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CEndXU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Codeword_t1236974692, ___U3CEndXU3Ek__BackingField_2)); }
	inline int32_t get_U3CEndXU3Ek__BackingField_2() const { return ___U3CEndXU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CEndXU3Ek__BackingField_2() { return &___U3CEndXU3Ek__BackingField_2; }
	inline void set_U3CEndXU3Ek__BackingField_2(int32_t value)
	{
		___U3CEndXU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CBucketU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Codeword_t1236974692, ___U3CBucketU3Ek__BackingField_3)); }
	inline int32_t get_U3CBucketU3Ek__BackingField_3() const { return ___U3CBucketU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CBucketU3Ek__BackingField_3() { return &___U3CBucketU3Ek__BackingField_3; }
	inline void set_U3CBucketU3Ek__BackingField_3(int32_t value)
	{
		___U3CBucketU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CValueU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Codeword_t1236974692, ___U3CValueU3Ek__BackingField_4)); }
	inline int32_t get_U3CValueU3Ek__BackingField_4() const { return ___U3CValueU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CValueU3Ek__BackingField_4() { return &___U3CValueU3Ek__BackingField_4; }
	inline void set_U3CValueU3Ek__BackingField_4(int32_t value)
	{
		___U3CValueU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CRowNumberU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Codeword_t1236974692, ___U3CRowNumberU3Ek__BackingField_5)); }
	inline int32_t get_U3CRowNumberU3Ek__BackingField_5() const { return ___U3CRowNumberU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CRowNumberU3Ek__BackingField_5() { return &___U3CRowNumberU3Ek__BackingField_5; }
	inline void set_U3CRowNumberU3Ek__BackingField_5(int32_t value)
	{
		___U3CRowNumberU3Ek__BackingField_5 = value;
	}
};

struct Codeword_t1236974692_StaticFields
{
public:
	// System.Int32 ZXing.PDF417.Internal.Codeword::BARCODE_ROW_UNKNOWN
	int32_t ___BARCODE_ROW_UNKNOWN_0;

public:
	inline static int32_t get_offset_of_BARCODE_ROW_UNKNOWN_0() { return static_cast<int32_t>(offsetof(Codeword_t1236974692_StaticFields, ___BARCODE_ROW_UNKNOWN_0)); }
	inline int32_t get_BARCODE_ROW_UNKNOWN_0() const { return ___BARCODE_ROW_UNKNOWN_0; }
	inline int32_t* get_address_of_BARCODE_ROW_UNKNOWN_0() { return &___BARCODE_ROW_UNKNOWN_0; }
	inline void set_BARCODE_ROW_UNKNOWN_0(int32_t value)
	{
		___BARCODE_ROW_UNKNOWN_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CODEWORD_T1236974692_H
#ifndef BOUNDINGBOX_T2865536872_H
#define BOUNDINGBOX_T2865536872_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.PDF417.Internal.BoundingBox
struct  BoundingBox_t2865536872  : public RuntimeObject
{
public:
	// ZXing.Common.BitMatrix ZXing.PDF417.Internal.BoundingBox::image
	BitMatrix_t2608305202 * ___image_0;
	// ZXing.ResultPoint ZXing.PDF417.Internal.BoundingBox::<TopLeft>k__BackingField
	ResultPoint_t3813591718 * ___U3CTopLeftU3Ek__BackingField_1;
	// ZXing.ResultPoint ZXing.PDF417.Internal.BoundingBox::<TopRight>k__BackingField
	ResultPoint_t3813591718 * ___U3CTopRightU3Ek__BackingField_2;
	// ZXing.ResultPoint ZXing.PDF417.Internal.BoundingBox::<BottomLeft>k__BackingField
	ResultPoint_t3813591718 * ___U3CBottomLeftU3Ek__BackingField_3;
	// ZXing.ResultPoint ZXing.PDF417.Internal.BoundingBox::<BottomRight>k__BackingField
	ResultPoint_t3813591718 * ___U3CBottomRightU3Ek__BackingField_4;
	// System.Int32 ZXing.PDF417.Internal.BoundingBox::<MinX>k__BackingField
	int32_t ___U3CMinXU3Ek__BackingField_5;
	// System.Int32 ZXing.PDF417.Internal.BoundingBox::<MaxX>k__BackingField
	int32_t ___U3CMaxXU3Ek__BackingField_6;
	// System.Int32 ZXing.PDF417.Internal.BoundingBox::<MinY>k__BackingField
	int32_t ___U3CMinYU3Ek__BackingField_7;
	// System.Int32 ZXing.PDF417.Internal.BoundingBox::<MaxY>k__BackingField
	int32_t ___U3CMaxYU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_image_0() { return static_cast<int32_t>(offsetof(BoundingBox_t2865536872, ___image_0)); }
	inline BitMatrix_t2608305202 * get_image_0() const { return ___image_0; }
	inline BitMatrix_t2608305202 ** get_address_of_image_0() { return &___image_0; }
	inline void set_image_0(BitMatrix_t2608305202 * value)
	{
		___image_0 = value;
		Il2CppCodeGenWriteBarrier((&___image_0), value);
	}

	inline static int32_t get_offset_of_U3CTopLeftU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BoundingBox_t2865536872, ___U3CTopLeftU3Ek__BackingField_1)); }
	inline ResultPoint_t3813591718 * get_U3CTopLeftU3Ek__BackingField_1() const { return ___U3CTopLeftU3Ek__BackingField_1; }
	inline ResultPoint_t3813591718 ** get_address_of_U3CTopLeftU3Ek__BackingField_1() { return &___U3CTopLeftU3Ek__BackingField_1; }
	inline void set_U3CTopLeftU3Ek__BackingField_1(ResultPoint_t3813591718 * value)
	{
		___U3CTopLeftU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTopLeftU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CTopRightU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BoundingBox_t2865536872, ___U3CTopRightU3Ek__BackingField_2)); }
	inline ResultPoint_t3813591718 * get_U3CTopRightU3Ek__BackingField_2() const { return ___U3CTopRightU3Ek__BackingField_2; }
	inline ResultPoint_t3813591718 ** get_address_of_U3CTopRightU3Ek__BackingField_2() { return &___U3CTopRightU3Ek__BackingField_2; }
	inline void set_U3CTopRightU3Ek__BackingField_2(ResultPoint_t3813591718 * value)
	{
		___U3CTopRightU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTopRightU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CBottomLeftU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BoundingBox_t2865536872, ___U3CBottomLeftU3Ek__BackingField_3)); }
	inline ResultPoint_t3813591718 * get_U3CBottomLeftU3Ek__BackingField_3() const { return ___U3CBottomLeftU3Ek__BackingField_3; }
	inline ResultPoint_t3813591718 ** get_address_of_U3CBottomLeftU3Ek__BackingField_3() { return &___U3CBottomLeftU3Ek__BackingField_3; }
	inline void set_U3CBottomLeftU3Ek__BackingField_3(ResultPoint_t3813591718 * value)
	{
		___U3CBottomLeftU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CBottomLeftU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CBottomRightU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(BoundingBox_t2865536872, ___U3CBottomRightU3Ek__BackingField_4)); }
	inline ResultPoint_t3813591718 * get_U3CBottomRightU3Ek__BackingField_4() const { return ___U3CBottomRightU3Ek__BackingField_4; }
	inline ResultPoint_t3813591718 ** get_address_of_U3CBottomRightU3Ek__BackingField_4() { return &___U3CBottomRightU3Ek__BackingField_4; }
	inline void set_U3CBottomRightU3Ek__BackingField_4(ResultPoint_t3813591718 * value)
	{
		___U3CBottomRightU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CBottomRightU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_U3CMinXU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(BoundingBox_t2865536872, ___U3CMinXU3Ek__BackingField_5)); }
	inline int32_t get_U3CMinXU3Ek__BackingField_5() const { return ___U3CMinXU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CMinXU3Ek__BackingField_5() { return &___U3CMinXU3Ek__BackingField_5; }
	inline void set_U3CMinXU3Ek__BackingField_5(int32_t value)
	{
		___U3CMinXU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CMaxXU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(BoundingBox_t2865536872, ___U3CMaxXU3Ek__BackingField_6)); }
	inline int32_t get_U3CMaxXU3Ek__BackingField_6() const { return ___U3CMaxXU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CMaxXU3Ek__BackingField_6() { return &___U3CMaxXU3Ek__BackingField_6; }
	inline void set_U3CMaxXU3Ek__BackingField_6(int32_t value)
	{
		___U3CMaxXU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CMinYU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(BoundingBox_t2865536872, ___U3CMinYU3Ek__BackingField_7)); }
	inline int32_t get_U3CMinYU3Ek__BackingField_7() const { return ___U3CMinYU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CMinYU3Ek__BackingField_7() { return &___U3CMinYU3Ek__BackingField_7; }
	inline void set_U3CMinYU3Ek__BackingField_7(int32_t value)
	{
		___U3CMinYU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CMaxYU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(BoundingBox_t2865536872, ___U3CMaxYU3Ek__BackingField_8)); }
	inline int32_t get_U3CMaxYU3Ek__BackingField_8() const { return ___U3CMaxYU3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CMaxYU3Ek__BackingField_8() { return &___U3CMaxYU3Ek__BackingField_8; }
	inline void set_U3CMaxYU3Ek__BackingField_8(int32_t value)
	{
		___U3CMaxYU3Ek__BackingField_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOUNDINGBOX_T2865536872_H
#ifndef BARCODEVALUE_T1127297203_H
#define BARCODEVALUE_T1127297203_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.PDF417.Internal.BarcodeValue
struct  BarcodeValue_t1127297203  : public RuntimeObject
{
public:
	// System.Collections.Generic.IDictionary`2<System.Int32,System.Int32> ZXing.PDF417.Internal.BarcodeValue::values
	RuntimeObject* ___values_0;

public:
	inline static int32_t get_offset_of_values_0() { return static_cast<int32_t>(offsetof(BarcodeValue_t1127297203, ___values_0)); }
	inline RuntimeObject* get_values_0() const { return ___values_0; }
	inline RuntimeObject** get_address_of_values_0() { return &___values_0; }
	inline void set_values_0(RuntimeObject* value)
	{
		___values_0 = value;
		Il2CppCodeGenWriteBarrier((&___values_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BARCODEVALUE_T1127297203_H
#ifndef BARCODEMETADATA_T502981135_H
#define BARCODEMETADATA_T502981135_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.PDF417.Internal.BarcodeMetadata
struct  BarcodeMetadata_t502981135  : public RuntimeObject
{
public:
	// System.Int32 ZXing.PDF417.Internal.BarcodeMetadata::<ColumnCount>k__BackingField
	int32_t ___U3CColumnCountU3Ek__BackingField_0;
	// System.Int32 ZXing.PDF417.Internal.BarcodeMetadata::<ErrorCorrectionLevel>k__BackingField
	int32_t ___U3CErrorCorrectionLevelU3Ek__BackingField_1;
	// System.Int32 ZXing.PDF417.Internal.BarcodeMetadata::<RowCountUpper>k__BackingField
	int32_t ___U3CRowCountUpperU3Ek__BackingField_2;
	// System.Int32 ZXing.PDF417.Internal.BarcodeMetadata::<RowCountLower>k__BackingField
	int32_t ___U3CRowCountLowerU3Ek__BackingField_3;
	// System.Int32 ZXing.PDF417.Internal.BarcodeMetadata::<RowCount>k__BackingField
	int32_t ___U3CRowCountU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CColumnCountU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(BarcodeMetadata_t502981135, ___U3CColumnCountU3Ek__BackingField_0)); }
	inline int32_t get_U3CColumnCountU3Ek__BackingField_0() const { return ___U3CColumnCountU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CColumnCountU3Ek__BackingField_0() { return &___U3CColumnCountU3Ek__BackingField_0; }
	inline void set_U3CColumnCountU3Ek__BackingField_0(int32_t value)
	{
		___U3CColumnCountU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CErrorCorrectionLevelU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BarcodeMetadata_t502981135, ___U3CErrorCorrectionLevelU3Ek__BackingField_1)); }
	inline int32_t get_U3CErrorCorrectionLevelU3Ek__BackingField_1() const { return ___U3CErrorCorrectionLevelU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CErrorCorrectionLevelU3Ek__BackingField_1() { return &___U3CErrorCorrectionLevelU3Ek__BackingField_1; }
	inline void set_U3CErrorCorrectionLevelU3Ek__BackingField_1(int32_t value)
	{
		___U3CErrorCorrectionLevelU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CRowCountUpperU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BarcodeMetadata_t502981135, ___U3CRowCountUpperU3Ek__BackingField_2)); }
	inline int32_t get_U3CRowCountUpperU3Ek__BackingField_2() const { return ___U3CRowCountUpperU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CRowCountUpperU3Ek__BackingField_2() { return &___U3CRowCountUpperU3Ek__BackingField_2; }
	inline void set_U3CRowCountUpperU3Ek__BackingField_2(int32_t value)
	{
		___U3CRowCountUpperU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CRowCountLowerU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BarcodeMetadata_t502981135, ___U3CRowCountLowerU3Ek__BackingField_3)); }
	inline int32_t get_U3CRowCountLowerU3Ek__BackingField_3() const { return ___U3CRowCountLowerU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CRowCountLowerU3Ek__BackingField_3() { return &___U3CRowCountLowerU3Ek__BackingField_3; }
	inline void set_U3CRowCountLowerU3Ek__BackingField_3(int32_t value)
	{
		___U3CRowCountLowerU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CRowCountU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(BarcodeMetadata_t502981135, ___U3CRowCountU3Ek__BackingField_4)); }
	inline int32_t get_U3CRowCountU3Ek__BackingField_4() const { return ___U3CRowCountU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CRowCountU3Ek__BackingField_4() { return &___U3CRowCountU3Ek__BackingField_4; }
	inline void set_U3CRowCountU3Ek__BackingField_4(int32_t value)
	{
		___U3CRowCountU3Ek__BackingField_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BARCODEMETADATA_T502981135_H
#ifndef PDF417WRITER_T1222426519_H
#define PDF417WRITER_T1222426519_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.PDF417.PDF417Writer
struct  PDF417Writer_t1222426519  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PDF417WRITER_T1222426519_H
#ifndef PDF417RESULTMETADATA_T1633520715_H
#define PDF417RESULTMETADATA_T1633520715_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.PDF417.PDF417ResultMetadata
struct  PDF417ResultMetadata_t1633520715  : public RuntimeObject
{
public:
	// System.Int32 ZXing.PDF417.PDF417ResultMetadata::<SegmentIndex>k__BackingField
	int32_t ___U3CSegmentIndexU3Ek__BackingField_0;
	// System.String ZXing.PDF417.PDF417ResultMetadata::<FileId>k__BackingField
	String_t* ___U3CFileIdU3Ek__BackingField_1;
	// System.Int32[] ZXing.PDF417.PDF417ResultMetadata::<OptionalData>k__BackingField
	Int32U5BU5D_t136769044* ___U3COptionalDataU3Ek__BackingField_2;
	// System.Boolean ZXing.PDF417.PDF417ResultMetadata::<IsLastSegment>k__BackingField
	bool ___U3CIsLastSegmentU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CSegmentIndexU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(PDF417ResultMetadata_t1633520715, ___U3CSegmentIndexU3Ek__BackingField_0)); }
	inline int32_t get_U3CSegmentIndexU3Ek__BackingField_0() const { return ___U3CSegmentIndexU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CSegmentIndexU3Ek__BackingField_0() { return &___U3CSegmentIndexU3Ek__BackingField_0; }
	inline void set_U3CSegmentIndexU3Ek__BackingField_0(int32_t value)
	{
		___U3CSegmentIndexU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CFileIdU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PDF417ResultMetadata_t1633520715, ___U3CFileIdU3Ek__BackingField_1)); }
	inline String_t* get_U3CFileIdU3Ek__BackingField_1() const { return ___U3CFileIdU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CFileIdU3Ek__BackingField_1() { return &___U3CFileIdU3Ek__BackingField_1; }
	inline void set_U3CFileIdU3Ek__BackingField_1(String_t* value)
	{
		___U3CFileIdU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CFileIdU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3COptionalDataU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PDF417ResultMetadata_t1633520715, ___U3COptionalDataU3Ek__BackingField_2)); }
	inline Int32U5BU5D_t136769044* get_U3COptionalDataU3Ek__BackingField_2() const { return ___U3COptionalDataU3Ek__BackingField_2; }
	inline Int32U5BU5D_t136769044** get_address_of_U3COptionalDataU3Ek__BackingField_2() { return &___U3COptionalDataU3Ek__BackingField_2; }
	inline void set_U3COptionalDataU3Ek__BackingField_2(Int32U5BU5D_t136769044* value)
	{
		___U3COptionalDataU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3COptionalDataU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CIsLastSegmentU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(PDF417ResultMetadata_t1633520715, ___U3CIsLastSegmentU3Ek__BackingField_3)); }
	inline bool get_U3CIsLastSegmentU3Ek__BackingField_3() const { return ___U3CIsLastSegmentU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CIsLastSegmentU3Ek__BackingField_3() { return &___U3CIsLastSegmentU3Ek__BackingField_3; }
	inline void set_U3CIsLastSegmentU3Ek__BackingField_3(bool value)
	{
		___U3CIsLastSegmentU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PDF417RESULTMETADATA_T1633520715_H
#ifndef PDF417READER_T127745528_H
#define PDF417READER_T127745528_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.PDF417.PDF417Reader
struct  PDF417Reader_t127745528  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PDF417READER_T127745528_H
#ifndef QRCODE_T2376171885_H
#define QRCODE_T2376171885_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.QrCode.Internal.QRCode
struct  QRCode_t2376171885  : public RuntimeObject
{
public:
	// ZXing.QrCode.Internal.Mode ZXing.QrCode.Internal.QRCode::<Mode>k__BackingField
	Mode_t2627952440 * ___U3CModeU3Ek__BackingField_1;
	// ZXing.QrCode.Internal.ErrorCorrectionLevel ZXing.QrCode.Internal.QRCode::<ECLevel>k__BackingField
	ErrorCorrectionLevel_t4005497601 * ___U3CECLevelU3Ek__BackingField_2;
	// ZXing.QrCode.Internal.Version ZXing.QrCode.Internal.QRCode::<Version>k__BackingField
	Version_t2207593696 * ___U3CVersionU3Ek__BackingField_3;
	// System.Int32 ZXing.QrCode.Internal.QRCode::<MaskPattern>k__BackingField
	int32_t ___U3CMaskPatternU3Ek__BackingField_4;
	// ZXing.QrCode.Internal.ByteMatrix ZXing.QrCode.Internal.QRCode::<Matrix>k__BackingField
	ByteMatrix_t576269041 * ___U3CMatrixU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CModeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(QRCode_t2376171885, ___U3CModeU3Ek__BackingField_1)); }
	inline Mode_t2627952440 * get_U3CModeU3Ek__BackingField_1() const { return ___U3CModeU3Ek__BackingField_1; }
	inline Mode_t2627952440 ** get_address_of_U3CModeU3Ek__BackingField_1() { return &___U3CModeU3Ek__BackingField_1; }
	inline void set_U3CModeU3Ek__BackingField_1(Mode_t2627952440 * value)
	{
		___U3CModeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CModeU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CECLevelU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(QRCode_t2376171885, ___U3CECLevelU3Ek__BackingField_2)); }
	inline ErrorCorrectionLevel_t4005497601 * get_U3CECLevelU3Ek__BackingField_2() const { return ___U3CECLevelU3Ek__BackingField_2; }
	inline ErrorCorrectionLevel_t4005497601 ** get_address_of_U3CECLevelU3Ek__BackingField_2() { return &___U3CECLevelU3Ek__BackingField_2; }
	inline void set_U3CECLevelU3Ek__BackingField_2(ErrorCorrectionLevel_t4005497601 * value)
	{
		___U3CECLevelU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CECLevelU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CVersionU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(QRCode_t2376171885, ___U3CVersionU3Ek__BackingField_3)); }
	inline Version_t2207593696 * get_U3CVersionU3Ek__BackingField_3() const { return ___U3CVersionU3Ek__BackingField_3; }
	inline Version_t2207593696 ** get_address_of_U3CVersionU3Ek__BackingField_3() { return &___U3CVersionU3Ek__BackingField_3; }
	inline void set_U3CVersionU3Ek__BackingField_3(Version_t2207593696 * value)
	{
		___U3CVersionU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CVersionU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CMaskPatternU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(QRCode_t2376171885, ___U3CMaskPatternU3Ek__BackingField_4)); }
	inline int32_t get_U3CMaskPatternU3Ek__BackingField_4() const { return ___U3CMaskPatternU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CMaskPatternU3Ek__BackingField_4() { return &___U3CMaskPatternU3Ek__BackingField_4; }
	inline void set_U3CMaskPatternU3Ek__BackingField_4(int32_t value)
	{
		___U3CMaskPatternU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CMatrixU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(QRCode_t2376171885, ___U3CMatrixU3Ek__BackingField_5)); }
	inline ByteMatrix_t576269041 * get_U3CMatrixU3Ek__BackingField_5() const { return ___U3CMatrixU3Ek__BackingField_5; }
	inline ByteMatrix_t576269041 ** get_address_of_U3CMatrixU3Ek__BackingField_5() { return &___U3CMatrixU3Ek__BackingField_5; }
	inline void set_U3CMatrixU3Ek__BackingField_5(ByteMatrix_t576269041 * value)
	{
		___U3CMatrixU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CMatrixU3Ek__BackingField_5), value);
	}
};

struct QRCode_t2376171885_StaticFields
{
public:
	// System.Int32 ZXing.QrCode.Internal.QRCode::NUM_MASK_PATTERNS
	int32_t ___NUM_MASK_PATTERNS_0;

public:
	inline static int32_t get_offset_of_NUM_MASK_PATTERNS_0() { return static_cast<int32_t>(offsetof(QRCode_t2376171885_StaticFields, ___NUM_MASK_PATTERNS_0)); }
	inline int32_t get_NUM_MASK_PATTERNS_0() const { return ___NUM_MASK_PATTERNS_0; }
	inline int32_t* get_address_of_NUM_MASK_PATTERNS_0() { return &___NUM_MASK_PATTERNS_0; }
	inline void set_NUM_MASK_PATTERNS_0(int32_t value)
	{
		___NUM_MASK_PATTERNS_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QRCODE_T2376171885_H
#ifndef MATRIXUTIL_T1299418940_H
#define MATRIXUTIL_T1299418940_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.QrCode.Internal.MatrixUtil
struct  MatrixUtil_t1299418940  : public RuntimeObject
{
public:

public:
};

struct MatrixUtil_t1299418940_StaticFields
{
public:
	// System.Int32[][] ZXing.QrCode.Internal.MatrixUtil::POSITION_DETECTION_PATTERN
	Int32U5BU5DU5BU5D_t1266570013* ___POSITION_DETECTION_PATTERN_0;
	// System.Int32[][] ZXing.QrCode.Internal.MatrixUtil::POSITION_ADJUSTMENT_PATTERN
	Int32U5BU5DU5BU5D_t1266570013* ___POSITION_ADJUSTMENT_PATTERN_1;
	// System.Int32[][] ZXing.QrCode.Internal.MatrixUtil::POSITION_ADJUSTMENT_PATTERN_COORDINATE_TABLE
	Int32U5BU5DU5BU5D_t1266570013* ___POSITION_ADJUSTMENT_PATTERN_COORDINATE_TABLE_2;
	// System.Int32[][] ZXing.QrCode.Internal.MatrixUtil::TYPE_INFO_COORDINATES
	Int32U5BU5DU5BU5D_t1266570013* ___TYPE_INFO_COORDINATES_3;

public:
	inline static int32_t get_offset_of_POSITION_DETECTION_PATTERN_0() { return static_cast<int32_t>(offsetof(MatrixUtil_t1299418940_StaticFields, ___POSITION_DETECTION_PATTERN_0)); }
	inline Int32U5BU5DU5BU5D_t1266570013* get_POSITION_DETECTION_PATTERN_0() const { return ___POSITION_DETECTION_PATTERN_0; }
	inline Int32U5BU5DU5BU5D_t1266570013** get_address_of_POSITION_DETECTION_PATTERN_0() { return &___POSITION_DETECTION_PATTERN_0; }
	inline void set_POSITION_DETECTION_PATTERN_0(Int32U5BU5DU5BU5D_t1266570013* value)
	{
		___POSITION_DETECTION_PATTERN_0 = value;
		Il2CppCodeGenWriteBarrier((&___POSITION_DETECTION_PATTERN_0), value);
	}

	inline static int32_t get_offset_of_POSITION_ADJUSTMENT_PATTERN_1() { return static_cast<int32_t>(offsetof(MatrixUtil_t1299418940_StaticFields, ___POSITION_ADJUSTMENT_PATTERN_1)); }
	inline Int32U5BU5DU5BU5D_t1266570013* get_POSITION_ADJUSTMENT_PATTERN_1() const { return ___POSITION_ADJUSTMENT_PATTERN_1; }
	inline Int32U5BU5DU5BU5D_t1266570013** get_address_of_POSITION_ADJUSTMENT_PATTERN_1() { return &___POSITION_ADJUSTMENT_PATTERN_1; }
	inline void set_POSITION_ADJUSTMENT_PATTERN_1(Int32U5BU5DU5BU5D_t1266570013* value)
	{
		___POSITION_ADJUSTMENT_PATTERN_1 = value;
		Il2CppCodeGenWriteBarrier((&___POSITION_ADJUSTMENT_PATTERN_1), value);
	}

	inline static int32_t get_offset_of_POSITION_ADJUSTMENT_PATTERN_COORDINATE_TABLE_2() { return static_cast<int32_t>(offsetof(MatrixUtil_t1299418940_StaticFields, ___POSITION_ADJUSTMENT_PATTERN_COORDINATE_TABLE_2)); }
	inline Int32U5BU5DU5BU5D_t1266570013* get_POSITION_ADJUSTMENT_PATTERN_COORDINATE_TABLE_2() const { return ___POSITION_ADJUSTMENT_PATTERN_COORDINATE_TABLE_2; }
	inline Int32U5BU5DU5BU5D_t1266570013** get_address_of_POSITION_ADJUSTMENT_PATTERN_COORDINATE_TABLE_2() { return &___POSITION_ADJUSTMENT_PATTERN_COORDINATE_TABLE_2; }
	inline void set_POSITION_ADJUSTMENT_PATTERN_COORDINATE_TABLE_2(Int32U5BU5DU5BU5D_t1266570013* value)
	{
		___POSITION_ADJUSTMENT_PATTERN_COORDINATE_TABLE_2 = value;
		Il2CppCodeGenWriteBarrier((&___POSITION_ADJUSTMENT_PATTERN_COORDINATE_TABLE_2), value);
	}

	inline static int32_t get_offset_of_TYPE_INFO_COORDINATES_3() { return static_cast<int32_t>(offsetof(MatrixUtil_t1299418940_StaticFields, ___TYPE_INFO_COORDINATES_3)); }
	inline Int32U5BU5DU5BU5D_t1266570013* get_TYPE_INFO_COORDINATES_3() const { return ___TYPE_INFO_COORDINATES_3; }
	inline Int32U5BU5DU5BU5D_t1266570013** get_address_of_TYPE_INFO_COORDINATES_3() { return &___TYPE_INFO_COORDINATES_3; }
	inline void set_TYPE_INFO_COORDINATES_3(Int32U5BU5DU5BU5D_t1266570013* value)
	{
		___TYPE_INFO_COORDINATES_3 = value;
		Il2CppCodeGenWriteBarrier((&___TYPE_INFO_COORDINATES_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATRIXUTIL_T1299418940_H
#ifndef MASKUTIL_T1442553070_H
#define MASKUTIL_T1442553070_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.QrCode.Internal.MaskUtil
struct  MaskUtil_t1442553070  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MASKUTIL_T1442553070_H
#ifndef ENCODER_T1093883867_H
#define ENCODER_T1093883867_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.QrCode.Internal.Encoder
struct  Encoder_t1093883867  : public RuntimeObject
{
public:

public:
};

struct Encoder_t1093883867_StaticFields
{
public:
	// System.Int32[] ZXing.QrCode.Internal.Encoder::ALPHANUMERIC_TABLE
	Int32U5BU5D_t136769044* ___ALPHANUMERIC_TABLE_0;
	// System.String ZXing.QrCode.Internal.Encoder::DEFAULT_BYTE_MODE_ENCODING
	String_t* ___DEFAULT_BYTE_MODE_ENCODING_1;

public:
	inline static int32_t get_offset_of_ALPHANUMERIC_TABLE_0() { return static_cast<int32_t>(offsetof(Encoder_t1093883867_StaticFields, ___ALPHANUMERIC_TABLE_0)); }
	inline Int32U5BU5D_t136769044* get_ALPHANUMERIC_TABLE_0() const { return ___ALPHANUMERIC_TABLE_0; }
	inline Int32U5BU5D_t136769044** get_address_of_ALPHANUMERIC_TABLE_0() { return &___ALPHANUMERIC_TABLE_0; }
	inline void set_ALPHANUMERIC_TABLE_0(Int32U5BU5D_t136769044* value)
	{
		___ALPHANUMERIC_TABLE_0 = value;
		Il2CppCodeGenWriteBarrier((&___ALPHANUMERIC_TABLE_0), value);
	}

	inline static int32_t get_offset_of_DEFAULT_BYTE_MODE_ENCODING_1() { return static_cast<int32_t>(offsetof(Encoder_t1093883867_StaticFields, ___DEFAULT_BYTE_MODE_ENCODING_1)); }
	inline String_t* get_DEFAULT_BYTE_MODE_ENCODING_1() const { return ___DEFAULT_BYTE_MODE_ENCODING_1; }
	inline String_t** get_address_of_DEFAULT_BYTE_MODE_ENCODING_1() { return &___DEFAULT_BYTE_MODE_ENCODING_1; }
	inline void set_DEFAULT_BYTE_MODE_ENCODING_1(String_t* value)
	{
		___DEFAULT_BYTE_MODE_ENCODING_1 = value;
		Il2CppCodeGenWriteBarrier((&___DEFAULT_BYTE_MODE_ENCODING_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODER_T1093883867_H
#ifndef BYTEMATRIX_T576269041_H
#define BYTEMATRIX_T576269041_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.QrCode.Internal.ByteMatrix
struct  ByteMatrix_t576269041  : public RuntimeObject
{
public:
	// System.Byte[][] ZXing.QrCode.Internal.ByteMatrix::bytes
	ByteU5BU5DU5BU5D_t214880401* ___bytes_0;
	// System.Int32 ZXing.QrCode.Internal.ByteMatrix::width
	int32_t ___width_1;
	// System.Int32 ZXing.QrCode.Internal.ByteMatrix::height
	int32_t ___height_2;

public:
	inline static int32_t get_offset_of_bytes_0() { return static_cast<int32_t>(offsetof(ByteMatrix_t576269041, ___bytes_0)); }
	inline ByteU5BU5DU5BU5D_t214880401* get_bytes_0() const { return ___bytes_0; }
	inline ByteU5BU5DU5BU5D_t214880401** get_address_of_bytes_0() { return &___bytes_0; }
	inline void set_bytes_0(ByteU5BU5DU5BU5D_t214880401* value)
	{
		___bytes_0 = value;
		Il2CppCodeGenWriteBarrier((&___bytes_0), value);
	}

	inline static int32_t get_offset_of_width_1() { return static_cast<int32_t>(offsetof(ByteMatrix_t576269041, ___width_1)); }
	inline int32_t get_width_1() const { return ___width_1; }
	inline int32_t* get_address_of_width_1() { return &___width_1; }
	inline void set_width_1(int32_t value)
	{
		___width_1 = value;
	}

	inline static int32_t get_offset_of_height_2() { return static_cast<int32_t>(offsetof(ByteMatrix_t576269041, ___height_2)); }
	inline int32_t get_height_2() const { return ___height_2; }
	inline int32_t* get_address_of_height_2() { return &___height_2; }
	inline void set_height_2(int32_t value)
	{
		___height_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTEMATRIX_T576269041_H
#ifndef BLOCKPAIR_T73163676_H
#define BLOCKPAIR_T73163676_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.QrCode.Internal.BlockPair
struct  BlockPair_t73163676  : public RuntimeObject
{
public:
	// System.Byte[] ZXing.QrCode.Internal.BlockPair::dataBytes
	ByteU5BU5D_t1607118512* ___dataBytes_0;
	// System.Byte[] ZXing.QrCode.Internal.BlockPair::errorCorrectionBytes
	ByteU5BU5D_t1607118512* ___errorCorrectionBytes_1;

public:
	inline static int32_t get_offset_of_dataBytes_0() { return static_cast<int32_t>(offsetof(BlockPair_t73163676, ___dataBytes_0)); }
	inline ByteU5BU5D_t1607118512* get_dataBytes_0() const { return ___dataBytes_0; }
	inline ByteU5BU5D_t1607118512** get_address_of_dataBytes_0() { return &___dataBytes_0; }
	inline void set_dataBytes_0(ByteU5BU5D_t1607118512* value)
	{
		___dataBytes_0 = value;
		Il2CppCodeGenWriteBarrier((&___dataBytes_0), value);
	}

	inline static int32_t get_offset_of_errorCorrectionBytes_1() { return static_cast<int32_t>(offsetof(BlockPair_t73163676, ___errorCorrectionBytes_1)); }
	inline ByteU5BU5D_t1607118512* get_errorCorrectionBytes_1() const { return ___errorCorrectionBytes_1; }
	inline ByteU5BU5D_t1607118512** get_address_of_errorCorrectionBytes_1() { return &___errorCorrectionBytes_1; }
	inline void set_errorCorrectionBytes_1(ByteU5BU5D_t1607118512* value)
	{
		___errorCorrectionBytes_1 = value;
		Il2CppCodeGenWriteBarrier((&___errorCorrectionBytes_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BLOCKPAIR_T73163676_H
#ifndef FINDERPATTERNINFO_T3796156180_H
#define FINDERPATTERNINFO_T3796156180_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.QrCode.Internal.FinderPatternInfo
struct  FinderPatternInfo_t3796156180  : public RuntimeObject
{
public:
	// ZXing.QrCode.Internal.FinderPattern ZXing.QrCode.Internal.FinderPatternInfo::bottomLeft
	FinderPattern_t3349282791 * ___bottomLeft_0;
	// ZXing.QrCode.Internal.FinderPattern ZXing.QrCode.Internal.FinderPatternInfo::topLeft
	FinderPattern_t3349282791 * ___topLeft_1;
	// ZXing.QrCode.Internal.FinderPattern ZXing.QrCode.Internal.FinderPatternInfo::topRight
	FinderPattern_t3349282791 * ___topRight_2;

public:
	inline static int32_t get_offset_of_bottomLeft_0() { return static_cast<int32_t>(offsetof(FinderPatternInfo_t3796156180, ___bottomLeft_0)); }
	inline FinderPattern_t3349282791 * get_bottomLeft_0() const { return ___bottomLeft_0; }
	inline FinderPattern_t3349282791 ** get_address_of_bottomLeft_0() { return &___bottomLeft_0; }
	inline void set_bottomLeft_0(FinderPattern_t3349282791 * value)
	{
		___bottomLeft_0 = value;
		Il2CppCodeGenWriteBarrier((&___bottomLeft_0), value);
	}

	inline static int32_t get_offset_of_topLeft_1() { return static_cast<int32_t>(offsetof(FinderPatternInfo_t3796156180, ___topLeft_1)); }
	inline FinderPattern_t3349282791 * get_topLeft_1() const { return ___topLeft_1; }
	inline FinderPattern_t3349282791 ** get_address_of_topLeft_1() { return &___topLeft_1; }
	inline void set_topLeft_1(FinderPattern_t3349282791 * value)
	{
		___topLeft_1 = value;
		Il2CppCodeGenWriteBarrier((&___topLeft_1), value);
	}

	inline static int32_t get_offset_of_topRight_2() { return static_cast<int32_t>(offsetof(FinderPatternInfo_t3796156180, ___topRight_2)); }
	inline FinderPattern_t3349282791 * get_topRight_2() const { return ___topRight_2; }
	inline FinderPattern_t3349282791 ** get_address_of_topRight_2() { return &___topRight_2; }
	inline void set_topRight_2(FinderPattern_t3349282791 * value)
	{
		___topRight_2 = value;
		Il2CppCodeGenWriteBarrier((&___topRight_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FINDERPATTERNINFO_T3796156180_H
#ifndef CENTERCOMPARATOR_T2761662071_H
#define CENTERCOMPARATOR_T2761662071_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.QrCode.Internal.FinderPatternFinder/CenterComparator
struct  CenterComparator_t2761662071  : public RuntimeObject
{
public:
	// System.Single ZXing.QrCode.Internal.FinderPatternFinder/CenterComparator::average
	float ___average_0;

public:
	inline static int32_t get_offset_of_average_0() { return static_cast<int32_t>(offsetof(CenterComparator_t2761662071, ___average_0)); }
	inline float get_average_0() const { return ___average_0; }
	inline float* get_address_of_average_0() { return &___average_0; }
	inline void set_average_0(float value)
	{
		___average_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CENTERCOMPARATOR_T2761662071_H
#ifndef FURTHESTFROMAVERAGECOMPARATOR_T1061074253_H
#define FURTHESTFROMAVERAGECOMPARATOR_T1061074253_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.QrCode.Internal.FinderPatternFinder/FurthestFromAverageComparator
struct  FurthestFromAverageComparator_t1061074253  : public RuntimeObject
{
public:
	// System.Single ZXing.QrCode.Internal.FinderPatternFinder/FurthestFromAverageComparator::average
	float ___average_0;

public:
	inline static int32_t get_offset_of_average_0() { return static_cast<int32_t>(offsetof(FurthestFromAverageComparator_t1061074253, ___average_0)); }
	inline float get_average_0() const { return ___average_0; }
	inline float* get_address_of_average_0() { return &___average_0; }
	inline void set_average_0(float value)
	{
		___average_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FURTHESTFROMAVERAGECOMPARATOR_T1061074253_H
#ifndef DECODEDBITSTREAMPARSER_T2763332758_H
#define DECODEDBITSTREAMPARSER_T2763332758_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.PDF417.Internal.DecodedBitStreamParser
struct  DecodedBitStreamParser_t2763332758  : public RuntimeObject
{
public:

public:
};

struct DecodedBitStreamParser_t2763332758_StaticFields
{
public:
	// System.Char[] ZXing.PDF417.Internal.DecodedBitStreamParser::PUNCT_CHARS
	CharU5BU5D_t2574930377* ___PUNCT_CHARS_0;
	// System.Char[] ZXing.PDF417.Internal.DecodedBitStreamParser::MIXED_CHARS
	CharU5BU5D_t2574930377* ___MIXED_CHARS_1;
	// BigIntegerLibrary.BigInteger[] ZXing.PDF417.Internal.DecodedBitStreamParser::EXP900
	BigIntegerU5BU5D_t2093875075* ___EXP900_2;

public:
	inline static int32_t get_offset_of_PUNCT_CHARS_0() { return static_cast<int32_t>(offsetof(DecodedBitStreamParser_t2763332758_StaticFields, ___PUNCT_CHARS_0)); }
	inline CharU5BU5D_t2574930377* get_PUNCT_CHARS_0() const { return ___PUNCT_CHARS_0; }
	inline CharU5BU5D_t2574930377** get_address_of_PUNCT_CHARS_0() { return &___PUNCT_CHARS_0; }
	inline void set_PUNCT_CHARS_0(CharU5BU5D_t2574930377* value)
	{
		___PUNCT_CHARS_0 = value;
		Il2CppCodeGenWriteBarrier((&___PUNCT_CHARS_0), value);
	}

	inline static int32_t get_offset_of_MIXED_CHARS_1() { return static_cast<int32_t>(offsetof(DecodedBitStreamParser_t2763332758_StaticFields, ___MIXED_CHARS_1)); }
	inline CharU5BU5D_t2574930377* get_MIXED_CHARS_1() const { return ___MIXED_CHARS_1; }
	inline CharU5BU5D_t2574930377** get_address_of_MIXED_CHARS_1() { return &___MIXED_CHARS_1; }
	inline void set_MIXED_CHARS_1(CharU5BU5D_t2574930377* value)
	{
		___MIXED_CHARS_1 = value;
		Il2CppCodeGenWriteBarrier((&___MIXED_CHARS_1), value);
	}

	inline static int32_t get_offset_of_EXP900_2() { return static_cast<int32_t>(offsetof(DecodedBitStreamParser_t2763332758_StaticFields, ___EXP900_2)); }
	inline BigIntegerU5BU5D_t2093875075* get_EXP900_2() const { return ___EXP900_2; }
	inline BigIntegerU5BU5D_t2093875075** get_address_of_EXP900_2() { return &___EXP900_2; }
	inline void set_EXP900_2(BigIntegerU5BU5D_t2093875075* value)
	{
		___EXP900_2 = value;
		Il2CppCodeGenWriteBarrier((&___EXP900_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODEDBITSTREAMPARSER_T2763332758_H
#ifndef DETECTIONRESULT_T3148764639_H
#define DETECTIONRESULT_T3148764639_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.PDF417.Internal.DetectionResult
struct  DetectionResult_t3148764639  : public RuntimeObject
{
public:
	// ZXing.PDF417.Internal.BarcodeMetadata ZXing.PDF417.Internal.DetectionResult::<Metadata>k__BackingField
	BarcodeMetadata_t502981135 * ___U3CMetadataU3Ek__BackingField_0;
	// ZXing.PDF417.Internal.DetectionResultColumn[] ZXing.PDF417.Internal.DetectionResult::<DetectionResultColumns>k__BackingField
	DetectionResultColumnU5BU5D_t3567187689* ___U3CDetectionResultColumnsU3Ek__BackingField_1;
	// ZXing.PDF417.Internal.BoundingBox ZXing.PDF417.Internal.DetectionResult::<Box>k__BackingField
	BoundingBox_t2865536872 * ___U3CBoxU3Ek__BackingField_2;
	// System.Int32 ZXing.PDF417.Internal.DetectionResult::<ColumnCount>k__BackingField
	int32_t ___U3CColumnCountU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CMetadataU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(DetectionResult_t3148764639, ___U3CMetadataU3Ek__BackingField_0)); }
	inline BarcodeMetadata_t502981135 * get_U3CMetadataU3Ek__BackingField_0() const { return ___U3CMetadataU3Ek__BackingField_0; }
	inline BarcodeMetadata_t502981135 ** get_address_of_U3CMetadataU3Ek__BackingField_0() { return &___U3CMetadataU3Ek__BackingField_0; }
	inline void set_U3CMetadataU3Ek__BackingField_0(BarcodeMetadata_t502981135 * value)
	{
		___U3CMetadataU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CMetadataU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CDetectionResultColumnsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(DetectionResult_t3148764639, ___U3CDetectionResultColumnsU3Ek__BackingField_1)); }
	inline DetectionResultColumnU5BU5D_t3567187689* get_U3CDetectionResultColumnsU3Ek__BackingField_1() const { return ___U3CDetectionResultColumnsU3Ek__BackingField_1; }
	inline DetectionResultColumnU5BU5D_t3567187689** get_address_of_U3CDetectionResultColumnsU3Ek__BackingField_1() { return &___U3CDetectionResultColumnsU3Ek__BackingField_1; }
	inline void set_U3CDetectionResultColumnsU3Ek__BackingField_1(DetectionResultColumnU5BU5D_t3567187689* value)
	{
		___U3CDetectionResultColumnsU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CDetectionResultColumnsU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CBoxU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(DetectionResult_t3148764639, ___U3CBoxU3Ek__BackingField_2)); }
	inline BoundingBox_t2865536872 * get_U3CBoxU3Ek__BackingField_2() const { return ___U3CBoxU3Ek__BackingField_2; }
	inline BoundingBox_t2865536872 ** get_address_of_U3CBoxU3Ek__BackingField_2() { return &___U3CBoxU3Ek__BackingField_2; }
	inline void set_U3CBoxU3Ek__BackingField_2(BoundingBox_t2865536872 * value)
	{
		___U3CBoxU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CBoxU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CColumnCountU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(DetectionResult_t3148764639, ___U3CColumnCountU3Ek__BackingField_3)); }
	inline int32_t get_U3CColumnCountU3Ek__BackingField_3() const { return ___U3CColumnCountU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CColumnCountU3Ek__BackingField_3() { return &___U3CColumnCountU3Ek__BackingField_3; }
	inline void set_U3CColumnCountU3Ek__BackingField_3(int32_t value)
	{
		___U3CColumnCountU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DETECTIONRESULT_T3148764639_H
#ifndef DETECTIONRESULTCOLUMN_T2826712376_H
#define DETECTIONRESULTCOLUMN_T2826712376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.PDF417.Internal.DetectionResultColumn
struct  DetectionResultColumn_t2826712376  : public RuntimeObject
{
public:
	// ZXing.PDF417.Internal.BoundingBox ZXing.PDF417.Internal.DetectionResultColumn::<Box>k__BackingField
	BoundingBox_t2865536872 * ___U3CBoxU3Ek__BackingField_0;
	// ZXing.PDF417.Internal.Codeword[] ZXing.PDF417.Internal.DetectionResultColumn::<Codewords>k__BackingField
	CodewordU5BU5D_t664695181* ___U3CCodewordsU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CBoxU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(DetectionResultColumn_t2826712376, ___U3CBoxU3Ek__BackingField_0)); }
	inline BoundingBox_t2865536872 * get_U3CBoxU3Ek__BackingField_0() const { return ___U3CBoxU3Ek__BackingField_0; }
	inline BoundingBox_t2865536872 ** get_address_of_U3CBoxU3Ek__BackingField_0() { return &___U3CBoxU3Ek__BackingField_0; }
	inline void set_U3CBoxU3Ek__BackingField_0(BoundingBox_t2865536872 * value)
	{
		___U3CBoxU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CBoxU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CCodewordsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(DetectionResultColumn_t2826712376, ___U3CCodewordsU3Ek__BackingField_1)); }
	inline CodewordU5BU5D_t664695181* get_U3CCodewordsU3Ek__BackingField_1() const { return ___U3CCodewordsU3Ek__BackingField_1; }
	inline CodewordU5BU5D_t664695181** get_address_of_U3CCodewordsU3Ek__BackingField_1() { return &___U3CCodewordsU3Ek__BackingField_1; }
	inline void set_U3CCodewordsU3Ek__BackingField_1(CodewordU5BU5D_t664695181* value)
	{
		___U3CCodewordsU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CCodewordsU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DETECTIONRESULTCOLUMN_T2826712376_H
#ifndef PDF417CODEWORDDECODER_T2746640184_H
#define PDF417CODEWORDDECODER_T2746640184_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.PDF417.Internal.PDF417CodewordDecoder
struct  PDF417CodewordDecoder_t2746640184  : public RuntimeObject
{
public:

public:
};

struct PDF417CodewordDecoder_t2746640184_StaticFields
{
public:
	// System.Single[][] ZXing.PDF417.Internal.PDF417CodewordDecoder::RATIOS_TABLE
	SingleU5BU5DU5BU5D_t1008131371* ___RATIOS_TABLE_0;

public:
	inline static int32_t get_offset_of_RATIOS_TABLE_0() { return static_cast<int32_t>(offsetof(PDF417CodewordDecoder_t2746640184_StaticFields, ___RATIOS_TABLE_0)); }
	inline SingleU5BU5DU5BU5D_t1008131371* get_RATIOS_TABLE_0() const { return ___RATIOS_TABLE_0; }
	inline SingleU5BU5DU5BU5D_t1008131371** get_address_of_RATIOS_TABLE_0() { return &___RATIOS_TABLE_0; }
	inline void set_RATIOS_TABLE_0(SingleU5BU5DU5BU5D_t1008131371* value)
	{
		___RATIOS_TABLE_0 = value;
		Il2CppCodeGenWriteBarrier((&___RATIOS_TABLE_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PDF417CODEWORDDECODER_T2746640184_H
#ifndef VALUETYPE_T2863467790_H
#define VALUETYPE_T2863467790_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t2863467790  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t2863467790_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t2863467790_marshaled_com
{
};
#endif // VALUETYPE_T2863467790_H
#ifndef ONEDIMENSIONALCODEWRITER_T608612180_H
#define ONEDIMENSIONALCODEWRITER_T608612180_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.OneD.OneDimensionalCodeWriter
struct  OneDimensionalCodeWriter_t608612180  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONEDIMENSIONALCODEWRITER_T608612180_H
#ifndef ONEDREADER_T2553842366_H
#define ONEDREADER_T2553842366_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.OneD.OneDReader
struct  OneDReader_t2553842366  : public RuntimeObject
{
public:

public:
};

struct OneDReader_t2553842366_StaticFields
{
public:
	// System.Int32 ZXing.OneD.OneDReader::INTEGER_MATH_SHIFT
	int32_t ___INTEGER_MATH_SHIFT_0;
	// System.Int32 ZXing.OneD.OneDReader::PATTERN_MATCH_RESULT_SCALE_FACTOR
	int32_t ___PATTERN_MATCH_RESULT_SCALE_FACTOR_1;

public:
	inline static int32_t get_offset_of_INTEGER_MATH_SHIFT_0() { return static_cast<int32_t>(offsetof(OneDReader_t2553842366_StaticFields, ___INTEGER_MATH_SHIFT_0)); }
	inline int32_t get_INTEGER_MATH_SHIFT_0() const { return ___INTEGER_MATH_SHIFT_0; }
	inline int32_t* get_address_of_INTEGER_MATH_SHIFT_0() { return &___INTEGER_MATH_SHIFT_0; }
	inline void set_INTEGER_MATH_SHIFT_0(int32_t value)
	{
		___INTEGER_MATH_SHIFT_0 = value;
	}

	inline static int32_t get_offset_of_PATTERN_MATCH_RESULT_SCALE_FACTOR_1() { return static_cast<int32_t>(offsetof(OneDReader_t2553842366_StaticFields, ___PATTERN_MATCH_RESULT_SCALE_FACTOR_1)); }
	inline int32_t get_PATTERN_MATCH_RESULT_SCALE_FACTOR_1() const { return ___PATTERN_MATCH_RESULT_SCALE_FACTOR_1; }
	inline int32_t* get_address_of_PATTERN_MATCH_RESULT_SCALE_FACTOR_1() { return &___PATTERN_MATCH_RESULT_SCALE_FACTOR_1; }
	inline void set_PATTERN_MATCH_RESULT_SCALE_FACTOR_1(int32_t value)
	{
		___PATTERN_MATCH_RESULT_SCALE_FACTOR_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONEDREADER_T2553842366_H
#ifndef ENCODINGOPTIONS_T2933126615_H
#define ENCODINGOPTIONS_T2933126615_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.Common.EncodingOptions
struct  EncodingOptions_t2933126615  : public RuntimeObject
{
public:
	// System.Collections.Generic.IDictionary`2<ZXing.EncodeHintType,System.Object> ZXing.Common.EncodingOptions::<Hints>k__BackingField
	RuntimeObject* ___U3CHintsU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CHintsU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(EncodingOptions_t2933126615, ___U3CHintsU3Ek__BackingField_0)); }
	inline RuntimeObject* get_U3CHintsU3Ek__BackingField_0() const { return ___U3CHintsU3Ek__BackingField_0; }
	inline RuntimeObject** get_address_of_U3CHintsU3Ek__BackingField_0() { return &___U3CHintsU3Ek__BackingField_0; }
	inline void set_U3CHintsU3Ek__BackingField_0(RuntimeObject* value)
	{
		___U3CHintsU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CHintsU3Ek__BackingField_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODINGOPTIONS_T2933126615_H
#ifndef EXCEPTION_T3812617360_H
#define EXCEPTION_T3812617360_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t3812617360  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t73022944* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t3812617360 * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t3812617360, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t73022944* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t73022944** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t73022944* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t3812617360, ___inner_exception_1)); }
	inline Exception_t3812617360 * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t3812617360 ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t3812617360 * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t3812617360, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t3812617360, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t3812617360, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t3812617360, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t3812617360, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t3812617360, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t3812617360, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t3812617360, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t3812617360, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T3812617360_H
#ifndef MODULUSPOLY_T279804807_H
#define MODULUSPOLY_T279804807_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.PDF417.Internal.EC.ModulusPoly
struct  ModulusPoly_t279804807  : public RuntimeObject
{
public:
	// ZXing.PDF417.Internal.EC.ModulusGF ZXing.PDF417.Internal.EC.ModulusPoly::field
	ModulusGF_t967090002 * ___field_0;
	// System.Int32[] ZXing.PDF417.Internal.EC.ModulusPoly::coefficients
	Int32U5BU5D_t136769044* ___coefficients_1;

public:
	inline static int32_t get_offset_of_field_0() { return static_cast<int32_t>(offsetof(ModulusPoly_t279804807, ___field_0)); }
	inline ModulusGF_t967090002 * get_field_0() const { return ___field_0; }
	inline ModulusGF_t967090002 ** get_address_of_field_0() { return &___field_0; }
	inline void set_field_0(ModulusGF_t967090002 * value)
	{
		___field_0 = value;
		Il2CppCodeGenWriteBarrier((&___field_0), value);
	}

	inline static int32_t get_offset_of_coefficients_1() { return static_cast<int32_t>(offsetof(ModulusPoly_t279804807, ___coefficients_1)); }
	inline Int32U5BU5D_t136769044* get_coefficients_1() const { return ___coefficients_1; }
	inline Int32U5BU5D_t136769044** get_address_of_coefficients_1() { return &___coefficients_1; }
	inline void set_coefficients_1(Int32U5BU5D_t136769044* value)
	{
		___coefficients_1 = value;
		Il2CppCodeGenWriteBarrier((&___coefficients_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODULUSPOLY_T279804807_H
#ifndef MODULUSGF_T967090002_H
#define MODULUSGF_T967090002_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.PDF417.Internal.EC.ModulusGF
struct  ModulusGF_t967090002  : public RuntimeObject
{
public:
	// System.Int32[] ZXing.PDF417.Internal.EC.ModulusGF::expTable
	Int32U5BU5D_t136769044* ___expTable_1;
	// System.Int32[] ZXing.PDF417.Internal.EC.ModulusGF::logTable
	Int32U5BU5D_t136769044* ___logTable_2;
	// ZXing.PDF417.Internal.EC.ModulusPoly ZXing.PDF417.Internal.EC.ModulusGF::<Zero>k__BackingField
	ModulusPoly_t279804807 * ___U3CZeroU3Ek__BackingField_3;
	// ZXing.PDF417.Internal.EC.ModulusPoly ZXing.PDF417.Internal.EC.ModulusGF::<One>k__BackingField
	ModulusPoly_t279804807 * ___U3COneU3Ek__BackingField_4;
	// System.Int32 ZXing.PDF417.Internal.EC.ModulusGF::modulus
	int32_t ___modulus_5;

public:
	inline static int32_t get_offset_of_expTable_1() { return static_cast<int32_t>(offsetof(ModulusGF_t967090002, ___expTable_1)); }
	inline Int32U5BU5D_t136769044* get_expTable_1() const { return ___expTable_1; }
	inline Int32U5BU5D_t136769044** get_address_of_expTable_1() { return &___expTable_1; }
	inline void set_expTable_1(Int32U5BU5D_t136769044* value)
	{
		___expTable_1 = value;
		Il2CppCodeGenWriteBarrier((&___expTable_1), value);
	}

	inline static int32_t get_offset_of_logTable_2() { return static_cast<int32_t>(offsetof(ModulusGF_t967090002, ___logTable_2)); }
	inline Int32U5BU5D_t136769044* get_logTable_2() const { return ___logTable_2; }
	inline Int32U5BU5D_t136769044** get_address_of_logTable_2() { return &___logTable_2; }
	inline void set_logTable_2(Int32U5BU5D_t136769044* value)
	{
		___logTable_2 = value;
		Il2CppCodeGenWriteBarrier((&___logTable_2), value);
	}

	inline static int32_t get_offset_of_U3CZeroU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ModulusGF_t967090002, ___U3CZeroU3Ek__BackingField_3)); }
	inline ModulusPoly_t279804807 * get_U3CZeroU3Ek__BackingField_3() const { return ___U3CZeroU3Ek__BackingField_3; }
	inline ModulusPoly_t279804807 ** get_address_of_U3CZeroU3Ek__BackingField_3() { return &___U3CZeroU3Ek__BackingField_3; }
	inline void set_U3CZeroU3Ek__BackingField_3(ModulusPoly_t279804807 * value)
	{
		___U3CZeroU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CZeroU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3COneU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ModulusGF_t967090002, ___U3COneU3Ek__BackingField_4)); }
	inline ModulusPoly_t279804807 * get_U3COneU3Ek__BackingField_4() const { return ___U3COneU3Ek__BackingField_4; }
	inline ModulusPoly_t279804807 ** get_address_of_U3COneU3Ek__BackingField_4() { return &___U3COneU3Ek__BackingField_4; }
	inline void set_U3COneU3Ek__BackingField_4(ModulusPoly_t279804807 * value)
	{
		___U3COneU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3COneU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_modulus_5() { return static_cast<int32_t>(offsetof(ModulusGF_t967090002, ___modulus_5)); }
	inline int32_t get_modulus_5() const { return ___modulus_5; }
	inline int32_t* get_address_of_modulus_5() { return &___modulus_5; }
	inline void set_modulus_5(int32_t value)
	{
		___modulus_5 = value;
	}
};

struct ModulusGF_t967090002_StaticFields
{
public:
	// ZXing.PDF417.Internal.EC.ModulusGF ZXing.PDF417.Internal.EC.ModulusGF::PDF417_GF
	ModulusGF_t967090002 * ___PDF417_GF_0;

public:
	inline static int32_t get_offset_of_PDF417_GF_0() { return static_cast<int32_t>(offsetof(ModulusGF_t967090002_StaticFields, ___PDF417_GF_0)); }
	inline ModulusGF_t967090002 * get_PDF417_GF_0() const { return ___PDF417_GF_0; }
	inline ModulusGF_t967090002 ** get_address_of_PDF417_GF_0() { return &___PDF417_GF_0; }
	inline void set_PDF417_GF_0(ModulusGF_t967090002 * value)
	{
		___PDF417_GF_0 = value;
		Il2CppCodeGenWriteBarrier((&___PDF417_GF_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODULUSGF_T967090002_H
#ifndef FINDERPATTERNFINDER_T954506291_H
#define FINDERPATTERNFINDER_T954506291_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.QrCode.Internal.FinderPatternFinder
struct  FinderPatternFinder_t954506291  : public RuntimeObject
{
public:
	// ZXing.Common.BitMatrix ZXing.QrCode.Internal.FinderPatternFinder::image
	BitMatrix_t2608305202 * ___image_0;
	// System.Collections.Generic.List`1<ZXing.QrCode.Internal.FinderPattern> ZXing.QrCode.Internal.FinderPatternFinder::possibleCenters
	List_1_t3742007229 * ___possibleCenters_1;
	// System.Boolean ZXing.QrCode.Internal.FinderPatternFinder::hasSkipped
	bool ___hasSkipped_2;
	// System.Int32[] ZXing.QrCode.Internal.FinderPatternFinder::crossCheckStateCount
	Int32U5BU5D_t136769044* ___crossCheckStateCount_3;
	// ZXing.ResultPointCallback ZXing.QrCode.Internal.FinderPatternFinder::resultPointCallback
	ResultPointCallback_t940181846 * ___resultPointCallback_4;

public:
	inline static int32_t get_offset_of_image_0() { return static_cast<int32_t>(offsetof(FinderPatternFinder_t954506291, ___image_0)); }
	inline BitMatrix_t2608305202 * get_image_0() const { return ___image_0; }
	inline BitMatrix_t2608305202 ** get_address_of_image_0() { return &___image_0; }
	inline void set_image_0(BitMatrix_t2608305202 * value)
	{
		___image_0 = value;
		Il2CppCodeGenWriteBarrier((&___image_0), value);
	}

	inline static int32_t get_offset_of_possibleCenters_1() { return static_cast<int32_t>(offsetof(FinderPatternFinder_t954506291, ___possibleCenters_1)); }
	inline List_1_t3742007229 * get_possibleCenters_1() const { return ___possibleCenters_1; }
	inline List_1_t3742007229 ** get_address_of_possibleCenters_1() { return &___possibleCenters_1; }
	inline void set_possibleCenters_1(List_1_t3742007229 * value)
	{
		___possibleCenters_1 = value;
		Il2CppCodeGenWriteBarrier((&___possibleCenters_1), value);
	}

	inline static int32_t get_offset_of_hasSkipped_2() { return static_cast<int32_t>(offsetof(FinderPatternFinder_t954506291, ___hasSkipped_2)); }
	inline bool get_hasSkipped_2() const { return ___hasSkipped_2; }
	inline bool* get_address_of_hasSkipped_2() { return &___hasSkipped_2; }
	inline void set_hasSkipped_2(bool value)
	{
		___hasSkipped_2 = value;
	}

	inline static int32_t get_offset_of_crossCheckStateCount_3() { return static_cast<int32_t>(offsetof(FinderPatternFinder_t954506291, ___crossCheckStateCount_3)); }
	inline Int32U5BU5D_t136769044* get_crossCheckStateCount_3() const { return ___crossCheckStateCount_3; }
	inline Int32U5BU5D_t136769044** get_address_of_crossCheckStateCount_3() { return &___crossCheckStateCount_3; }
	inline void set_crossCheckStateCount_3(Int32U5BU5D_t136769044* value)
	{
		___crossCheckStateCount_3 = value;
		Il2CppCodeGenWriteBarrier((&___crossCheckStateCount_3), value);
	}

	inline static int32_t get_offset_of_resultPointCallback_4() { return static_cast<int32_t>(offsetof(FinderPatternFinder_t954506291, ___resultPointCallback_4)); }
	inline ResultPointCallback_t940181846 * get_resultPointCallback_4() const { return ___resultPointCallback_4; }
	inline ResultPointCallback_t940181846 ** get_address_of_resultPointCallback_4() { return &___resultPointCallback_4; }
	inline void set_resultPointCallback_4(ResultPointCallback_t940181846 * value)
	{
		___resultPointCallback_4 = value;
		Il2CppCodeGenWriteBarrier((&___resultPointCallback_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FINDERPATTERNFINDER_T954506291_H
#ifndef ERRORCORRECTION_T2362326784_H
#define ERRORCORRECTION_T2362326784_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.PDF417.Internal.EC.ErrorCorrection
struct  ErrorCorrection_t2362326784  : public RuntimeObject
{
public:
	// ZXing.PDF417.Internal.EC.ModulusGF ZXing.PDF417.Internal.EC.ErrorCorrection::field
	ModulusGF_t967090002 * ___field_0;

public:
	inline static int32_t get_offset_of_field_0() { return static_cast<int32_t>(offsetof(ErrorCorrection_t2362326784, ___field_0)); }
	inline ModulusGF_t967090002 * get_field_0() const { return ___field_0; }
	inline ModulusGF_t967090002 ** get_address_of_field_0() { return &___field_0; }
	inline void set_field_0(ModulusGF_t967090002 * value)
	{
		___field_0 = value;
		Il2CppCodeGenWriteBarrier((&___field_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ERRORCORRECTION_T2362326784_H
#ifndef PDF417ERRORCORRECTION_T2021008874_H
#define PDF417ERRORCORRECTION_T2021008874_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.PDF417.Internal.PDF417ErrorCorrection
struct  PDF417ErrorCorrection_t2021008874  : public RuntimeObject
{
public:

public:
};

struct PDF417ErrorCorrection_t2021008874_StaticFields
{
public:
	// System.Int32[][] ZXing.PDF417.Internal.PDF417ErrorCorrection::EC_COEFFICIENTS
	Int32U5BU5DU5BU5D_t1266570013* ___EC_COEFFICIENTS_0;

public:
	inline static int32_t get_offset_of_EC_COEFFICIENTS_0() { return static_cast<int32_t>(offsetof(PDF417ErrorCorrection_t2021008874_StaticFields, ___EC_COEFFICIENTS_0)); }
	inline Int32U5BU5DU5BU5D_t1266570013* get_EC_COEFFICIENTS_0() const { return ___EC_COEFFICIENTS_0; }
	inline Int32U5BU5DU5BU5D_t1266570013** get_address_of_EC_COEFFICIENTS_0() { return &___EC_COEFFICIENTS_0; }
	inline void set_EC_COEFFICIENTS_0(Int32U5BU5DU5BU5D_t1266570013* value)
	{
		___EC_COEFFICIENTS_0 = value;
		Il2CppCodeGenWriteBarrier((&___EC_COEFFICIENTS_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PDF417ERRORCORRECTION_T2021008874_H
#ifndef DIMENSIONS_T2189319474_H
#define DIMENSIONS_T2189319474_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.PDF417.Internal.Dimensions
struct  Dimensions_t2189319474  : public RuntimeObject
{
public:
	// System.Int32 ZXing.PDF417.Internal.Dimensions::minCols
	int32_t ___minCols_0;
	// System.Int32 ZXing.PDF417.Internal.Dimensions::maxCols
	int32_t ___maxCols_1;
	// System.Int32 ZXing.PDF417.Internal.Dimensions::minRows
	int32_t ___minRows_2;
	// System.Int32 ZXing.PDF417.Internal.Dimensions::maxRows
	int32_t ___maxRows_3;

public:
	inline static int32_t get_offset_of_minCols_0() { return static_cast<int32_t>(offsetof(Dimensions_t2189319474, ___minCols_0)); }
	inline int32_t get_minCols_0() const { return ___minCols_0; }
	inline int32_t* get_address_of_minCols_0() { return &___minCols_0; }
	inline void set_minCols_0(int32_t value)
	{
		___minCols_0 = value;
	}

	inline static int32_t get_offset_of_maxCols_1() { return static_cast<int32_t>(offsetof(Dimensions_t2189319474, ___maxCols_1)); }
	inline int32_t get_maxCols_1() const { return ___maxCols_1; }
	inline int32_t* get_address_of_maxCols_1() { return &___maxCols_1; }
	inline void set_maxCols_1(int32_t value)
	{
		___maxCols_1 = value;
	}

	inline static int32_t get_offset_of_minRows_2() { return static_cast<int32_t>(offsetof(Dimensions_t2189319474, ___minRows_2)); }
	inline int32_t get_minRows_2() const { return ___minRows_2; }
	inline int32_t* get_address_of_minRows_2() { return &___minRows_2; }
	inline void set_minRows_2(int32_t value)
	{
		___minRows_2 = value;
	}

	inline static int32_t get_offset_of_maxRows_3() { return static_cast<int32_t>(offsetof(Dimensions_t2189319474, ___maxRows_3)); }
	inline int32_t get_maxRows_3() const { return ___maxRows_3; }
	inline int32_t* get_address_of_maxRows_3() { return &___maxRows_3; }
	inline void set_maxRows_3(int32_t value)
	{
		___maxRows_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIMENSIONS_T2189319474_H
#ifndef BARCODEROW_T2705040021_H
#define BARCODEROW_T2705040021_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.PDF417.Internal.BarcodeRow
struct  BarcodeRow_t2705040021  : public RuntimeObject
{
public:
	// System.SByte[] ZXing.PDF417.Internal.BarcodeRow::row
	SByteU5BU5D_t535836565* ___row_0;
	// System.Int32 ZXing.PDF417.Internal.BarcodeRow::currentLocation
	int32_t ___currentLocation_1;

public:
	inline static int32_t get_offset_of_row_0() { return static_cast<int32_t>(offsetof(BarcodeRow_t2705040021, ___row_0)); }
	inline SByteU5BU5D_t535836565* get_row_0() const { return ___row_0; }
	inline SByteU5BU5D_t535836565** get_address_of_row_0() { return &___row_0; }
	inline void set_row_0(SByteU5BU5D_t535836565* value)
	{
		___row_0 = value;
		Il2CppCodeGenWriteBarrier((&___row_0), value);
	}

	inline static int32_t get_offset_of_currentLocation_1() { return static_cast<int32_t>(offsetof(BarcodeRow_t2705040021, ___currentLocation_1)); }
	inline int32_t get_currentLocation_1() const { return ___currentLocation_1; }
	inline int32_t* get_address_of_currentLocation_1() { return &___currentLocation_1; }
	inline void set_currentLocation_1(int32_t value)
	{
		___currentLocation_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BARCODEROW_T2705040021_H
#ifndef BARCODEMATRIX_T1670171860_H
#define BARCODEMATRIX_T1670171860_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.PDF417.Internal.BarcodeMatrix
struct  BarcodeMatrix_t1670171860  : public RuntimeObject
{
public:
	// ZXing.PDF417.Internal.BarcodeRow[] ZXing.PDF417.Internal.BarcodeMatrix::matrix
	BarcodeRowU5BU5D_t3160956792* ___matrix_0;
	// System.Int32 ZXing.PDF417.Internal.BarcodeMatrix::currentRow
	int32_t ___currentRow_1;
	// System.Int32 ZXing.PDF417.Internal.BarcodeMatrix::height
	int32_t ___height_2;
	// System.Int32 ZXing.PDF417.Internal.BarcodeMatrix::width
	int32_t ___width_3;

public:
	inline static int32_t get_offset_of_matrix_0() { return static_cast<int32_t>(offsetof(BarcodeMatrix_t1670171860, ___matrix_0)); }
	inline BarcodeRowU5BU5D_t3160956792* get_matrix_0() const { return ___matrix_0; }
	inline BarcodeRowU5BU5D_t3160956792** get_address_of_matrix_0() { return &___matrix_0; }
	inline void set_matrix_0(BarcodeRowU5BU5D_t3160956792* value)
	{
		___matrix_0 = value;
		Il2CppCodeGenWriteBarrier((&___matrix_0), value);
	}

	inline static int32_t get_offset_of_currentRow_1() { return static_cast<int32_t>(offsetof(BarcodeMatrix_t1670171860, ___currentRow_1)); }
	inline int32_t get_currentRow_1() const { return ___currentRow_1; }
	inline int32_t* get_address_of_currentRow_1() { return &___currentRow_1; }
	inline void set_currentRow_1(int32_t value)
	{
		___currentRow_1 = value;
	}

	inline static int32_t get_offset_of_height_2() { return static_cast<int32_t>(offsetof(BarcodeMatrix_t1670171860, ___height_2)); }
	inline int32_t get_height_2() const { return ___height_2; }
	inline int32_t* get_address_of_height_2() { return &___height_2; }
	inline void set_height_2(int32_t value)
	{
		___height_2 = value;
	}

	inline static int32_t get_offset_of_width_3() { return static_cast<int32_t>(offsetof(BarcodeMatrix_t1670171860, ___width_3)); }
	inline int32_t get_width_3() const { return ___width_3; }
	inline int32_t* get_address_of_width_3() { return &___width_3; }
	inline void set_width_3(int32_t value)
	{
		___width_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BARCODEMATRIX_T1670171860_H
#ifndef PDF417DETECTORRESULT_T2256536460_H
#define PDF417DETECTORRESULT_T2256536460_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.PDF417.Internal.PDF417DetectorResult
struct  PDF417DetectorResult_t2256536460  : public RuntimeObject
{
public:
	// ZXing.Common.BitMatrix ZXing.PDF417.Internal.PDF417DetectorResult::<Bits>k__BackingField
	BitMatrix_t2608305202 * ___U3CBitsU3Ek__BackingField_0;
	// System.Collections.Generic.List`1<ZXing.ResultPoint[]> ZXing.PDF417.Internal.PDF417DetectorResult::<Points>k__BackingField
	List_1_t1982392281 * ___U3CPointsU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CBitsU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(PDF417DetectorResult_t2256536460, ___U3CBitsU3Ek__BackingField_0)); }
	inline BitMatrix_t2608305202 * get_U3CBitsU3Ek__BackingField_0() const { return ___U3CBitsU3Ek__BackingField_0; }
	inline BitMatrix_t2608305202 ** get_address_of_U3CBitsU3Ek__BackingField_0() { return &___U3CBitsU3Ek__BackingField_0; }
	inline void set_U3CBitsU3Ek__BackingField_0(BitMatrix_t2608305202 * value)
	{
		___U3CBitsU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CBitsU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CPointsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PDF417DetectorResult_t2256536460, ___U3CPointsU3Ek__BackingField_1)); }
	inline List_1_t1982392281 * get_U3CPointsU3Ek__BackingField_1() const { return ___U3CPointsU3Ek__BackingField_1; }
	inline List_1_t1982392281 ** get_address_of_U3CPointsU3Ek__BackingField_1() { return &___U3CPointsU3Ek__BackingField_1; }
	inline void set_U3CPointsU3Ek__BackingField_1(List_1_t1982392281 * value)
	{
		___U3CPointsU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CPointsU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PDF417DETECTORRESULT_T2256536460_H
#ifndef DETECTOR_T3061581026_H
#define DETECTOR_T3061581026_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.PDF417.Internal.Detector
struct  Detector_t3061581026  : public RuntimeObject
{
public:

public:
};

struct Detector_t3061581026_StaticFields
{
public:
	// System.Int32[] ZXing.PDF417.Internal.Detector::INDEXES_START_PATTERN
	Int32U5BU5D_t136769044* ___INDEXES_START_PATTERN_0;
	// System.Int32[] ZXing.PDF417.Internal.Detector::INDEXES_STOP_PATTERN
	Int32U5BU5D_t136769044* ___INDEXES_STOP_PATTERN_1;
	// System.Int32[] ZXing.PDF417.Internal.Detector::START_PATTERN
	Int32U5BU5D_t136769044* ___START_PATTERN_2;
	// System.Int32[] ZXing.PDF417.Internal.Detector::STOP_PATTERN
	Int32U5BU5D_t136769044* ___STOP_PATTERN_3;

public:
	inline static int32_t get_offset_of_INDEXES_START_PATTERN_0() { return static_cast<int32_t>(offsetof(Detector_t3061581026_StaticFields, ___INDEXES_START_PATTERN_0)); }
	inline Int32U5BU5D_t136769044* get_INDEXES_START_PATTERN_0() const { return ___INDEXES_START_PATTERN_0; }
	inline Int32U5BU5D_t136769044** get_address_of_INDEXES_START_PATTERN_0() { return &___INDEXES_START_PATTERN_0; }
	inline void set_INDEXES_START_PATTERN_0(Int32U5BU5D_t136769044* value)
	{
		___INDEXES_START_PATTERN_0 = value;
		Il2CppCodeGenWriteBarrier((&___INDEXES_START_PATTERN_0), value);
	}

	inline static int32_t get_offset_of_INDEXES_STOP_PATTERN_1() { return static_cast<int32_t>(offsetof(Detector_t3061581026_StaticFields, ___INDEXES_STOP_PATTERN_1)); }
	inline Int32U5BU5D_t136769044* get_INDEXES_STOP_PATTERN_1() const { return ___INDEXES_STOP_PATTERN_1; }
	inline Int32U5BU5D_t136769044** get_address_of_INDEXES_STOP_PATTERN_1() { return &___INDEXES_STOP_PATTERN_1; }
	inline void set_INDEXES_STOP_PATTERN_1(Int32U5BU5D_t136769044* value)
	{
		___INDEXES_STOP_PATTERN_1 = value;
		Il2CppCodeGenWriteBarrier((&___INDEXES_STOP_PATTERN_1), value);
	}

	inline static int32_t get_offset_of_START_PATTERN_2() { return static_cast<int32_t>(offsetof(Detector_t3061581026_StaticFields, ___START_PATTERN_2)); }
	inline Int32U5BU5D_t136769044* get_START_PATTERN_2() const { return ___START_PATTERN_2; }
	inline Int32U5BU5D_t136769044** get_address_of_START_PATTERN_2() { return &___START_PATTERN_2; }
	inline void set_START_PATTERN_2(Int32U5BU5D_t136769044* value)
	{
		___START_PATTERN_2 = value;
		Il2CppCodeGenWriteBarrier((&___START_PATTERN_2), value);
	}

	inline static int32_t get_offset_of_STOP_PATTERN_3() { return static_cast<int32_t>(offsetof(Detector_t3061581026_StaticFields, ___STOP_PATTERN_3)); }
	inline Int32U5BU5D_t136769044* get_STOP_PATTERN_3() const { return ___STOP_PATTERN_3; }
	inline Int32U5BU5D_t136769044** get_address_of_STOP_PATTERN_3() { return &___STOP_PATTERN_3; }
	inline void set_STOP_PATTERN_3(Int32U5BU5D_t136769044* value)
	{
		___STOP_PATTERN_3 = value;
		Il2CppCodeGenWriteBarrier((&___STOP_PATTERN_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DETECTOR_T3061581026_H
#ifndef PDF417SCANNINGDECODER_T2292568945_H
#define PDF417SCANNINGDECODER_T2292568945_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.PDF417.Internal.PDF417ScanningDecoder
struct  PDF417ScanningDecoder_t2292568945  : public RuntimeObject
{
public:

public:
};

struct PDF417ScanningDecoder_t2292568945_StaticFields
{
public:
	// ZXing.PDF417.Internal.EC.ErrorCorrection ZXing.PDF417.Internal.PDF417ScanningDecoder::errorCorrection
	ErrorCorrection_t2362326784 * ___errorCorrection_0;

public:
	inline static int32_t get_offset_of_errorCorrection_0() { return static_cast<int32_t>(offsetof(PDF417ScanningDecoder_t2292568945_StaticFields, ___errorCorrection_0)); }
	inline ErrorCorrection_t2362326784 * get_errorCorrection_0() const { return ___errorCorrection_0; }
	inline ErrorCorrection_t2362326784 ** get_address_of_errorCorrection_0() { return &___errorCorrection_0; }
	inline void set_errorCorrection_0(ErrorCorrection_t2362326784 * value)
	{
		___errorCorrection_0 = value;
		Il2CppCodeGenWriteBarrier((&___errorCorrection_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PDF417SCANNINGDECODER_T2292568945_H
#ifndef PDF417HIGHLEVELENCODER_T3004631590_H
#define PDF417HIGHLEVELENCODER_T3004631590_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.PDF417.Internal.PDF417HighLevelEncoder
struct  PDF417HighLevelEncoder_t3004631590  : public RuntimeObject
{
public:

public:
};

struct PDF417HighLevelEncoder_t3004631590_StaticFields
{
public:
	// System.SByte[] ZXing.PDF417.Internal.PDF417HighLevelEncoder::TEXT_MIXED_RAW
	SByteU5BU5D_t535836565* ___TEXT_MIXED_RAW_0;
	// System.SByte[] ZXing.PDF417.Internal.PDF417HighLevelEncoder::TEXT_PUNCTUATION_RAW
	SByteU5BU5D_t535836565* ___TEXT_PUNCTUATION_RAW_1;
	// System.SByte[] ZXing.PDF417.Internal.PDF417HighLevelEncoder::MIXED
	SByteU5BU5D_t535836565* ___MIXED_2;
	// System.SByte[] ZXing.PDF417.Internal.PDF417HighLevelEncoder::PUNCTUATION
	SByteU5BU5D_t535836565* ___PUNCTUATION_3;
	// System.String ZXing.PDF417.Internal.PDF417HighLevelEncoder::DEFAULT_ENCODING_NAME
	String_t* ___DEFAULT_ENCODING_NAME_4;

public:
	inline static int32_t get_offset_of_TEXT_MIXED_RAW_0() { return static_cast<int32_t>(offsetof(PDF417HighLevelEncoder_t3004631590_StaticFields, ___TEXT_MIXED_RAW_0)); }
	inline SByteU5BU5D_t535836565* get_TEXT_MIXED_RAW_0() const { return ___TEXT_MIXED_RAW_0; }
	inline SByteU5BU5D_t535836565** get_address_of_TEXT_MIXED_RAW_0() { return &___TEXT_MIXED_RAW_0; }
	inline void set_TEXT_MIXED_RAW_0(SByteU5BU5D_t535836565* value)
	{
		___TEXT_MIXED_RAW_0 = value;
		Il2CppCodeGenWriteBarrier((&___TEXT_MIXED_RAW_0), value);
	}

	inline static int32_t get_offset_of_TEXT_PUNCTUATION_RAW_1() { return static_cast<int32_t>(offsetof(PDF417HighLevelEncoder_t3004631590_StaticFields, ___TEXT_PUNCTUATION_RAW_1)); }
	inline SByteU5BU5D_t535836565* get_TEXT_PUNCTUATION_RAW_1() const { return ___TEXT_PUNCTUATION_RAW_1; }
	inline SByteU5BU5D_t535836565** get_address_of_TEXT_PUNCTUATION_RAW_1() { return &___TEXT_PUNCTUATION_RAW_1; }
	inline void set_TEXT_PUNCTUATION_RAW_1(SByteU5BU5D_t535836565* value)
	{
		___TEXT_PUNCTUATION_RAW_1 = value;
		Il2CppCodeGenWriteBarrier((&___TEXT_PUNCTUATION_RAW_1), value);
	}

	inline static int32_t get_offset_of_MIXED_2() { return static_cast<int32_t>(offsetof(PDF417HighLevelEncoder_t3004631590_StaticFields, ___MIXED_2)); }
	inline SByteU5BU5D_t535836565* get_MIXED_2() const { return ___MIXED_2; }
	inline SByteU5BU5D_t535836565** get_address_of_MIXED_2() { return &___MIXED_2; }
	inline void set_MIXED_2(SByteU5BU5D_t535836565* value)
	{
		___MIXED_2 = value;
		Il2CppCodeGenWriteBarrier((&___MIXED_2), value);
	}

	inline static int32_t get_offset_of_PUNCTUATION_3() { return static_cast<int32_t>(offsetof(PDF417HighLevelEncoder_t3004631590_StaticFields, ___PUNCTUATION_3)); }
	inline SByteU5BU5D_t535836565* get_PUNCTUATION_3() const { return ___PUNCTUATION_3; }
	inline SByteU5BU5D_t535836565** get_address_of_PUNCTUATION_3() { return &___PUNCTUATION_3; }
	inline void set_PUNCTUATION_3(SByteU5BU5D_t535836565* value)
	{
		___PUNCTUATION_3 = value;
		Il2CppCodeGenWriteBarrier((&___PUNCTUATION_3), value);
	}

	inline static int32_t get_offset_of_DEFAULT_ENCODING_NAME_4() { return static_cast<int32_t>(offsetof(PDF417HighLevelEncoder_t3004631590_StaticFields, ___DEFAULT_ENCODING_NAME_4)); }
	inline String_t* get_DEFAULT_ENCODING_NAME_4() const { return ___DEFAULT_ENCODING_NAME_4; }
	inline String_t** get_address_of_DEFAULT_ENCODING_NAME_4() { return &___DEFAULT_ENCODING_NAME_4; }
	inline void set_DEFAULT_ENCODING_NAME_4(String_t* value)
	{
		___DEFAULT_ENCODING_NAME_4 = value;
		Il2CppCodeGenWriteBarrier((&___DEFAULT_ENCODING_NAME_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PDF417HIGHLEVELENCODER_T3004631590_H
#ifndef DETECTOR_T2222455031_H
#define DETECTOR_T2222455031_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.QrCode.Internal.Detector
struct  Detector_t2222455031  : public RuntimeObject
{
public:
	// ZXing.Common.BitMatrix ZXing.QrCode.Internal.Detector::image
	BitMatrix_t2608305202 * ___image_0;
	// ZXing.ResultPointCallback ZXing.QrCode.Internal.Detector::resultPointCallback
	ResultPointCallback_t940181846 * ___resultPointCallback_1;

public:
	inline static int32_t get_offset_of_image_0() { return static_cast<int32_t>(offsetof(Detector_t2222455031, ___image_0)); }
	inline BitMatrix_t2608305202 * get_image_0() const { return ___image_0; }
	inline BitMatrix_t2608305202 ** get_address_of_image_0() { return &___image_0; }
	inline void set_image_0(BitMatrix_t2608305202 * value)
	{
		___image_0 = value;
		Il2CppCodeGenWriteBarrier((&___image_0), value);
	}

	inline static int32_t get_offset_of_resultPointCallback_1() { return static_cast<int32_t>(offsetof(Detector_t2222455031, ___resultPointCallback_1)); }
	inline ResultPointCallback_t940181846 * get_resultPointCallback_1() const { return ___resultPointCallback_1; }
	inline ResultPointCallback_t940181846 ** get_address_of_resultPointCallback_1() { return &___resultPointCallback_1; }
	inline void set_resultPointCallback_1(ResultPointCallback_t940181846 * value)
	{
		___resultPointCallback_1 = value;
		Il2CppCodeGenWriteBarrier((&___resultPointCallback_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DETECTOR_T2222455031_H
#ifndef PDF417COMMON_T391543272_H
#define PDF417COMMON_T391543272_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.PDF417.PDF417Common
struct  PDF417Common_t391543272  : public RuntimeObject
{
public:

public:
};

struct PDF417Common_t391543272_StaticFields
{
public:
	// System.Int32 ZXing.PDF417.PDF417Common::INVALID_CODEWORD
	int32_t ___INVALID_CODEWORD_0;
	// System.Int32 ZXing.PDF417.PDF417Common::NUMBER_OF_CODEWORDS
	int32_t ___NUMBER_OF_CODEWORDS_1;
	// System.Int32 ZXing.PDF417.PDF417Common::MAX_CODEWORDS_IN_BARCODE
	int32_t ___MAX_CODEWORDS_IN_BARCODE_2;
	// System.Int32 ZXing.PDF417.PDF417Common::MIN_ROWS_IN_BARCODE
	int32_t ___MIN_ROWS_IN_BARCODE_3;
	// System.Int32 ZXing.PDF417.PDF417Common::MAX_ROWS_IN_BARCODE
	int32_t ___MAX_ROWS_IN_BARCODE_4;
	// System.Int32 ZXing.PDF417.PDF417Common::MODULES_IN_CODEWORD
	int32_t ___MODULES_IN_CODEWORD_5;
	// System.Int32 ZXing.PDF417.PDF417Common::MODULES_IN_STOP_PATTERN
	int32_t ___MODULES_IN_STOP_PATTERN_6;
	// System.Int32 ZXing.PDF417.PDF417Common::BARS_IN_MODULE
	int32_t ___BARS_IN_MODULE_7;
	// System.Int32[] ZXing.PDF417.PDF417Common::EMPTY_INT_ARRAY
	Int32U5BU5D_t136769044* ___EMPTY_INT_ARRAY_8;
	// System.Int32[] ZXing.PDF417.PDF417Common::SYMBOL_TABLE
	Int32U5BU5D_t136769044* ___SYMBOL_TABLE_9;
	// System.Int32[] ZXing.PDF417.PDF417Common::CODEWORD_TABLE
	Int32U5BU5D_t136769044* ___CODEWORD_TABLE_10;

public:
	inline static int32_t get_offset_of_INVALID_CODEWORD_0() { return static_cast<int32_t>(offsetof(PDF417Common_t391543272_StaticFields, ___INVALID_CODEWORD_0)); }
	inline int32_t get_INVALID_CODEWORD_0() const { return ___INVALID_CODEWORD_0; }
	inline int32_t* get_address_of_INVALID_CODEWORD_0() { return &___INVALID_CODEWORD_0; }
	inline void set_INVALID_CODEWORD_0(int32_t value)
	{
		___INVALID_CODEWORD_0 = value;
	}

	inline static int32_t get_offset_of_NUMBER_OF_CODEWORDS_1() { return static_cast<int32_t>(offsetof(PDF417Common_t391543272_StaticFields, ___NUMBER_OF_CODEWORDS_1)); }
	inline int32_t get_NUMBER_OF_CODEWORDS_1() const { return ___NUMBER_OF_CODEWORDS_1; }
	inline int32_t* get_address_of_NUMBER_OF_CODEWORDS_1() { return &___NUMBER_OF_CODEWORDS_1; }
	inline void set_NUMBER_OF_CODEWORDS_1(int32_t value)
	{
		___NUMBER_OF_CODEWORDS_1 = value;
	}

	inline static int32_t get_offset_of_MAX_CODEWORDS_IN_BARCODE_2() { return static_cast<int32_t>(offsetof(PDF417Common_t391543272_StaticFields, ___MAX_CODEWORDS_IN_BARCODE_2)); }
	inline int32_t get_MAX_CODEWORDS_IN_BARCODE_2() const { return ___MAX_CODEWORDS_IN_BARCODE_2; }
	inline int32_t* get_address_of_MAX_CODEWORDS_IN_BARCODE_2() { return &___MAX_CODEWORDS_IN_BARCODE_2; }
	inline void set_MAX_CODEWORDS_IN_BARCODE_2(int32_t value)
	{
		___MAX_CODEWORDS_IN_BARCODE_2 = value;
	}

	inline static int32_t get_offset_of_MIN_ROWS_IN_BARCODE_3() { return static_cast<int32_t>(offsetof(PDF417Common_t391543272_StaticFields, ___MIN_ROWS_IN_BARCODE_3)); }
	inline int32_t get_MIN_ROWS_IN_BARCODE_3() const { return ___MIN_ROWS_IN_BARCODE_3; }
	inline int32_t* get_address_of_MIN_ROWS_IN_BARCODE_3() { return &___MIN_ROWS_IN_BARCODE_3; }
	inline void set_MIN_ROWS_IN_BARCODE_3(int32_t value)
	{
		___MIN_ROWS_IN_BARCODE_3 = value;
	}

	inline static int32_t get_offset_of_MAX_ROWS_IN_BARCODE_4() { return static_cast<int32_t>(offsetof(PDF417Common_t391543272_StaticFields, ___MAX_ROWS_IN_BARCODE_4)); }
	inline int32_t get_MAX_ROWS_IN_BARCODE_4() const { return ___MAX_ROWS_IN_BARCODE_4; }
	inline int32_t* get_address_of_MAX_ROWS_IN_BARCODE_4() { return &___MAX_ROWS_IN_BARCODE_4; }
	inline void set_MAX_ROWS_IN_BARCODE_4(int32_t value)
	{
		___MAX_ROWS_IN_BARCODE_4 = value;
	}

	inline static int32_t get_offset_of_MODULES_IN_CODEWORD_5() { return static_cast<int32_t>(offsetof(PDF417Common_t391543272_StaticFields, ___MODULES_IN_CODEWORD_5)); }
	inline int32_t get_MODULES_IN_CODEWORD_5() const { return ___MODULES_IN_CODEWORD_5; }
	inline int32_t* get_address_of_MODULES_IN_CODEWORD_5() { return &___MODULES_IN_CODEWORD_5; }
	inline void set_MODULES_IN_CODEWORD_5(int32_t value)
	{
		___MODULES_IN_CODEWORD_5 = value;
	}

	inline static int32_t get_offset_of_MODULES_IN_STOP_PATTERN_6() { return static_cast<int32_t>(offsetof(PDF417Common_t391543272_StaticFields, ___MODULES_IN_STOP_PATTERN_6)); }
	inline int32_t get_MODULES_IN_STOP_PATTERN_6() const { return ___MODULES_IN_STOP_PATTERN_6; }
	inline int32_t* get_address_of_MODULES_IN_STOP_PATTERN_6() { return &___MODULES_IN_STOP_PATTERN_6; }
	inline void set_MODULES_IN_STOP_PATTERN_6(int32_t value)
	{
		___MODULES_IN_STOP_PATTERN_6 = value;
	}

	inline static int32_t get_offset_of_BARS_IN_MODULE_7() { return static_cast<int32_t>(offsetof(PDF417Common_t391543272_StaticFields, ___BARS_IN_MODULE_7)); }
	inline int32_t get_BARS_IN_MODULE_7() const { return ___BARS_IN_MODULE_7; }
	inline int32_t* get_address_of_BARS_IN_MODULE_7() { return &___BARS_IN_MODULE_7; }
	inline void set_BARS_IN_MODULE_7(int32_t value)
	{
		___BARS_IN_MODULE_7 = value;
	}

	inline static int32_t get_offset_of_EMPTY_INT_ARRAY_8() { return static_cast<int32_t>(offsetof(PDF417Common_t391543272_StaticFields, ___EMPTY_INT_ARRAY_8)); }
	inline Int32U5BU5D_t136769044* get_EMPTY_INT_ARRAY_8() const { return ___EMPTY_INT_ARRAY_8; }
	inline Int32U5BU5D_t136769044** get_address_of_EMPTY_INT_ARRAY_8() { return &___EMPTY_INT_ARRAY_8; }
	inline void set_EMPTY_INT_ARRAY_8(Int32U5BU5D_t136769044* value)
	{
		___EMPTY_INT_ARRAY_8 = value;
		Il2CppCodeGenWriteBarrier((&___EMPTY_INT_ARRAY_8), value);
	}

	inline static int32_t get_offset_of_SYMBOL_TABLE_9() { return static_cast<int32_t>(offsetof(PDF417Common_t391543272_StaticFields, ___SYMBOL_TABLE_9)); }
	inline Int32U5BU5D_t136769044* get_SYMBOL_TABLE_9() const { return ___SYMBOL_TABLE_9; }
	inline Int32U5BU5D_t136769044** get_address_of_SYMBOL_TABLE_9() { return &___SYMBOL_TABLE_9; }
	inline void set_SYMBOL_TABLE_9(Int32U5BU5D_t136769044* value)
	{
		___SYMBOL_TABLE_9 = value;
		Il2CppCodeGenWriteBarrier((&___SYMBOL_TABLE_9), value);
	}

	inline static int32_t get_offset_of_CODEWORD_TABLE_10() { return static_cast<int32_t>(offsetof(PDF417Common_t391543272_StaticFields, ___CODEWORD_TABLE_10)); }
	inline Int32U5BU5D_t136769044* get_CODEWORD_TABLE_10() const { return ___CODEWORD_TABLE_10; }
	inline Int32U5BU5D_t136769044** get_address_of_CODEWORD_TABLE_10() { return &___CODEWORD_TABLE_10; }
	inline void set_CODEWORD_TABLE_10(Int32U5BU5D_t136769044* value)
	{
		___CODEWORD_TABLE_10 = value;
		Il2CppCodeGenWriteBarrier((&___CODEWORD_TABLE_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PDF417COMMON_T391543272_H
#ifndef MULTIFORMATREADER_T3542830701_H
#define MULTIFORMATREADER_T3542830701_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.MultiFormatReader
struct  MultiFormatReader_t3542830701  : public RuntimeObject
{
public:
	// System.Collections.Generic.IDictionary`2<ZXing.DecodeHintType,System.Object> ZXing.MultiFormatReader::hints
	RuntimeObject* ___hints_0;
	// System.Collections.Generic.IList`1<ZXing.Reader> ZXing.MultiFormatReader::readers
	RuntimeObject* ___readers_1;

public:
	inline static int32_t get_offset_of_hints_0() { return static_cast<int32_t>(offsetof(MultiFormatReader_t3542830701, ___hints_0)); }
	inline RuntimeObject* get_hints_0() const { return ___hints_0; }
	inline RuntimeObject** get_address_of_hints_0() { return &___hints_0; }
	inline void set_hints_0(RuntimeObject* value)
	{
		___hints_0 = value;
		Il2CppCodeGenWriteBarrier((&___hints_0), value);
	}

	inline static int32_t get_offset_of_readers_1() { return static_cast<int32_t>(offsetof(MultiFormatReader_t3542830701, ___readers_1)); }
	inline RuntimeObject* get_readers_1() const { return ___readers_1; }
	inline RuntimeObject** get_address_of_readers_1() { return &___readers_1; }
	inline void set_readers_1(RuntimeObject* value)
	{
		___readers_1 = value;
		Il2CppCodeGenWriteBarrier((&___readers_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTIFORMATREADER_T3542830701_H
#ifndef SUPPORTCLASS_T2992176671_H
#define SUPPORTCLASS_T2992176671_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.SupportClass
struct  SupportClass_t2992176671  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SUPPORTCLASS_T2992176671_H
#ifndef ALIGNMENTPATTERNFINDER_T1813799540_H
#define ALIGNMENTPATTERNFINDER_T1813799540_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.QrCode.Internal.AlignmentPatternFinder
struct  AlignmentPatternFinder_t1813799540  : public RuntimeObject
{
public:
	// ZXing.Common.BitMatrix ZXing.QrCode.Internal.AlignmentPatternFinder::image
	BitMatrix_t2608305202 * ___image_0;
	// System.Collections.Generic.IList`1<ZXing.QrCode.Internal.AlignmentPattern> ZXing.QrCode.Internal.AlignmentPatternFinder::possibleCenters
	RuntimeObject* ___possibleCenters_1;
	// System.Int32 ZXing.QrCode.Internal.AlignmentPatternFinder::startX
	int32_t ___startX_2;
	// System.Int32 ZXing.QrCode.Internal.AlignmentPatternFinder::startY
	int32_t ___startY_3;
	// System.Int32 ZXing.QrCode.Internal.AlignmentPatternFinder::width
	int32_t ___width_4;
	// System.Int32 ZXing.QrCode.Internal.AlignmentPatternFinder::height
	int32_t ___height_5;
	// System.Single ZXing.QrCode.Internal.AlignmentPatternFinder::moduleSize
	float ___moduleSize_6;
	// System.Int32[] ZXing.QrCode.Internal.AlignmentPatternFinder::crossCheckStateCount
	Int32U5BU5D_t136769044* ___crossCheckStateCount_7;
	// ZXing.ResultPointCallback ZXing.QrCode.Internal.AlignmentPatternFinder::resultPointCallback
	ResultPointCallback_t940181846 * ___resultPointCallback_8;

public:
	inline static int32_t get_offset_of_image_0() { return static_cast<int32_t>(offsetof(AlignmentPatternFinder_t1813799540, ___image_0)); }
	inline BitMatrix_t2608305202 * get_image_0() const { return ___image_0; }
	inline BitMatrix_t2608305202 ** get_address_of_image_0() { return &___image_0; }
	inline void set_image_0(BitMatrix_t2608305202 * value)
	{
		___image_0 = value;
		Il2CppCodeGenWriteBarrier((&___image_0), value);
	}

	inline static int32_t get_offset_of_possibleCenters_1() { return static_cast<int32_t>(offsetof(AlignmentPatternFinder_t1813799540, ___possibleCenters_1)); }
	inline RuntimeObject* get_possibleCenters_1() const { return ___possibleCenters_1; }
	inline RuntimeObject** get_address_of_possibleCenters_1() { return &___possibleCenters_1; }
	inline void set_possibleCenters_1(RuntimeObject* value)
	{
		___possibleCenters_1 = value;
		Il2CppCodeGenWriteBarrier((&___possibleCenters_1), value);
	}

	inline static int32_t get_offset_of_startX_2() { return static_cast<int32_t>(offsetof(AlignmentPatternFinder_t1813799540, ___startX_2)); }
	inline int32_t get_startX_2() const { return ___startX_2; }
	inline int32_t* get_address_of_startX_2() { return &___startX_2; }
	inline void set_startX_2(int32_t value)
	{
		___startX_2 = value;
	}

	inline static int32_t get_offset_of_startY_3() { return static_cast<int32_t>(offsetof(AlignmentPatternFinder_t1813799540, ___startY_3)); }
	inline int32_t get_startY_3() const { return ___startY_3; }
	inline int32_t* get_address_of_startY_3() { return &___startY_3; }
	inline void set_startY_3(int32_t value)
	{
		___startY_3 = value;
	}

	inline static int32_t get_offset_of_width_4() { return static_cast<int32_t>(offsetof(AlignmentPatternFinder_t1813799540, ___width_4)); }
	inline int32_t get_width_4() const { return ___width_4; }
	inline int32_t* get_address_of_width_4() { return &___width_4; }
	inline void set_width_4(int32_t value)
	{
		___width_4 = value;
	}

	inline static int32_t get_offset_of_height_5() { return static_cast<int32_t>(offsetof(AlignmentPatternFinder_t1813799540, ___height_5)); }
	inline int32_t get_height_5() const { return ___height_5; }
	inline int32_t* get_address_of_height_5() { return &___height_5; }
	inline void set_height_5(int32_t value)
	{
		___height_5 = value;
	}

	inline static int32_t get_offset_of_moduleSize_6() { return static_cast<int32_t>(offsetof(AlignmentPatternFinder_t1813799540, ___moduleSize_6)); }
	inline float get_moduleSize_6() const { return ___moduleSize_6; }
	inline float* get_address_of_moduleSize_6() { return &___moduleSize_6; }
	inline void set_moduleSize_6(float value)
	{
		___moduleSize_6 = value;
	}

	inline static int32_t get_offset_of_crossCheckStateCount_7() { return static_cast<int32_t>(offsetof(AlignmentPatternFinder_t1813799540, ___crossCheckStateCount_7)); }
	inline Int32U5BU5D_t136769044* get_crossCheckStateCount_7() const { return ___crossCheckStateCount_7; }
	inline Int32U5BU5D_t136769044** get_address_of_crossCheckStateCount_7() { return &___crossCheckStateCount_7; }
	inline void set_crossCheckStateCount_7(Int32U5BU5D_t136769044* value)
	{
		___crossCheckStateCount_7 = value;
		Il2CppCodeGenWriteBarrier((&___crossCheckStateCount_7), value);
	}

	inline static int32_t get_offset_of_resultPointCallback_8() { return static_cast<int32_t>(offsetof(AlignmentPatternFinder_t1813799540, ___resultPointCallback_8)); }
	inline ResultPointCallback_t940181846 * get_resultPointCallback_8() const { return ___resultPointCallback_8; }
	inline ResultPointCallback_t940181846 ** get_address_of_resultPointCallback_8() { return &___resultPointCallback_8; }
	inline void set_resultPointCallback_8(ResultPointCallback_t940181846 * value)
	{
		___resultPointCallback_8 = value;
		Il2CppCodeGenWriteBarrier((&___resultPointCallback_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ALIGNMENTPATTERNFINDER_T1813799540_H
#ifndef MULTIFORMATWRITER_T3114414712_H
#define MULTIFORMATWRITER_T3114414712_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.MultiFormatWriter
struct  MultiFormatWriter_t3114414712  : public RuntimeObject
{
public:

public:
};

struct MultiFormatWriter_t3114414712_StaticFields
{
public:
	// System.Collections.Generic.IDictionary`2<ZXing.BarcodeFormat,System.Func`1<ZXing.Writer>> ZXing.MultiFormatWriter::formatMap
	RuntimeObject* ___formatMap_0;

public:
	inline static int32_t get_offset_of_formatMap_0() { return static_cast<int32_t>(offsetof(MultiFormatWriter_t3114414712_StaticFields, ___formatMap_0)); }
	inline RuntimeObject* get_formatMap_0() const { return ___formatMap_0; }
	inline RuntimeObject** get_address_of_formatMap_0() { return &___formatMap_0; }
	inline void set_formatMap_0(RuntimeObject* value)
	{
		___formatMap_0 = value;
		Il2CppCodeGenWriteBarrier((&___formatMap_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTIFORMATWRITER_T3114414712_H
#ifndef QRCODEREADER_T1316613187_H
#define QRCODEREADER_T1316613187_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.QrCode.QRCodeReader
struct  QRCodeReader_t1316613187  : public RuntimeObject
{
public:
	// ZXing.QrCode.Internal.Decoder ZXing.QrCode.QRCodeReader::decoder
	Decoder_t2550361462 * ___decoder_1;

public:
	inline static int32_t get_offset_of_decoder_1() { return static_cast<int32_t>(offsetof(QRCodeReader_t1316613187, ___decoder_1)); }
	inline Decoder_t2550361462 * get_decoder_1() const { return ___decoder_1; }
	inline Decoder_t2550361462 ** get_address_of_decoder_1() { return &___decoder_1; }
	inline void set_decoder_1(Decoder_t2550361462 * value)
	{
		___decoder_1 = value;
		Il2CppCodeGenWriteBarrier((&___decoder_1), value);
	}
};

struct QRCodeReader_t1316613187_StaticFields
{
public:
	// ZXing.ResultPoint[] ZXing.QrCode.QRCodeReader::NO_POINTS
	ResultPointU5BU5D_t1589667843* ___NO_POINTS_0;

public:
	inline static int32_t get_offset_of_NO_POINTS_0() { return static_cast<int32_t>(offsetof(QRCodeReader_t1316613187_StaticFields, ___NO_POINTS_0)); }
	inline ResultPointU5BU5D_t1589667843* get_NO_POINTS_0() const { return ___NO_POINTS_0; }
	inline ResultPointU5BU5D_t1589667843** get_address_of_NO_POINTS_0() { return &___NO_POINTS_0; }
	inline void set_NO_POINTS_0(ResultPointU5BU5D_t1589667843* value)
	{
		___NO_POINTS_0 = value;
		Il2CppCodeGenWriteBarrier((&___NO_POINTS_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QRCODEREADER_T1316613187_H
#ifndef QRCODEWRITER_T2021054696_H
#define QRCODEWRITER_T2021054696_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.QrCode.QRCodeWriter
struct  QRCodeWriter_t2021054696  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QRCODEWRITER_T2021054696_H
#ifndef BITMATRIXPARSER_T4187098004_H
#define BITMATRIXPARSER_T4187098004_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.QrCode.Internal.BitMatrixParser
struct  BitMatrixParser_t4187098004  : public RuntimeObject
{
public:
	// ZXing.Common.BitMatrix ZXing.QrCode.Internal.BitMatrixParser::bitMatrix
	BitMatrix_t2608305202 * ___bitMatrix_0;
	// ZXing.QrCode.Internal.Version ZXing.QrCode.Internal.BitMatrixParser::parsedVersion
	Version_t2207593696 * ___parsedVersion_1;
	// ZXing.QrCode.Internal.FormatInformation ZXing.QrCode.Internal.BitMatrixParser::parsedFormatInfo
	FormatInformation_t232295017 * ___parsedFormatInfo_2;
	// System.Boolean ZXing.QrCode.Internal.BitMatrixParser::mirrored
	bool ___mirrored_3;

public:
	inline static int32_t get_offset_of_bitMatrix_0() { return static_cast<int32_t>(offsetof(BitMatrixParser_t4187098004, ___bitMatrix_0)); }
	inline BitMatrix_t2608305202 * get_bitMatrix_0() const { return ___bitMatrix_0; }
	inline BitMatrix_t2608305202 ** get_address_of_bitMatrix_0() { return &___bitMatrix_0; }
	inline void set_bitMatrix_0(BitMatrix_t2608305202 * value)
	{
		___bitMatrix_0 = value;
		Il2CppCodeGenWriteBarrier((&___bitMatrix_0), value);
	}

	inline static int32_t get_offset_of_parsedVersion_1() { return static_cast<int32_t>(offsetof(BitMatrixParser_t4187098004, ___parsedVersion_1)); }
	inline Version_t2207593696 * get_parsedVersion_1() const { return ___parsedVersion_1; }
	inline Version_t2207593696 ** get_address_of_parsedVersion_1() { return &___parsedVersion_1; }
	inline void set_parsedVersion_1(Version_t2207593696 * value)
	{
		___parsedVersion_1 = value;
		Il2CppCodeGenWriteBarrier((&___parsedVersion_1), value);
	}

	inline static int32_t get_offset_of_parsedFormatInfo_2() { return static_cast<int32_t>(offsetof(BitMatrixParser_t4187098004, ___parsedFormatInfo_2)); }
	inline FormatInformation_t232295017 * get_parsedFormatInfo_2() const { return ___parsedFormatInfo_2; }
	inline FormatInformation_t232295017 ** get_address_of_parsedFormatInfo_2() { return &___parsedFormatInfo_2; }
	inline void set_parsedFormatInfo_2(FormatInformation_t232295017 * value)
	{
		___parsedFormatInfo_2 = value;
		Il2CppCodeGenWriteBarrier((&___parsedFormatInfo_2), value);
	}

	inline static int32_t get_offset_of_mirrored_3() { return static_cast<int32_t>(offsetof(BitMatrixParser_t4187098004, ___mirrored_3)); }
	inline bool get_mirrored_3() const { return ___mirrored_3; }
	inline bool* get_address_of_mirrored_3() { return &___mirrored_3; }
	inline void set_mirrored_3(bool value)
	{
		___mirrored_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BITMATRIXPARSER_T4187098004_H
#ifndef DATABLOCK_T1342818478_H
#define DATABLOCK_T1342818478_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.QrCode.Internal.DataBlock
struct  DataBlock_t1342818478  : public RuntimeObject
{
public:
	// System.Int32 ZXing.QrCode.Internal.DataBlock::numDataCodewords
	int32_t ___numDataCodewords_0;
	// System.Byte[] ZXing.QrCode.Internal.DataBlock::codewords
	ByteU5BU5D_t1607118512* ___codewords_1;

public:
	inline static int32_t get_offset_of_numDataCodewords_0() { return static_cast<int32_t>(offsetof(DataBlock_t1342818478, ___numDataCodewords_0)); }
	inline int32_t get_numDataCodewords_0() const { return ___numDataCodewords_0; }
	inline int32_t* get_address_of_numDataCodewords_0() { return &___numDataCodewords_0; }
	inline void set_numDataCodewords_0(int32_t value)
	{
		___numDataCodewords_0 = value;
	}

	inline static int32_t get_offset_of_codewords_1() { return static_cast<int32_t>(offsetof(DataBlock_t1342818478, ___codewords_1)); }
	inline ByteU5BU5D_t1607118512* get_codewords_1() const { return ___codewords_1; }
	inline ByteU5BU5D_t1607118512** get_address_of_codewords_1() { return &___codewords_1; }
	inline void set_codewords_1(ByteU5BU5D_t1607118512* value)
	{
		___codewords_1 = value;
		Il2CppCodeGenWriteBarrier((&___codewords_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATABLOCK_T1342818478_H
#ifndef DATAMASK_T3864373770_H
#define DATAMASK_T3864373770_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.QrCode.Internal.DataMask
struct  DataMask_t3864373770  : public RuntimeObject
{
public:

public:
};

struct DataMask_t3864373770_StaticFields
{
public:
	// System.Func`3<System.Int32,System.Int32,System.Boolean>[] ZXing.QrCode.Internal.DataMask::DATA_MASKS
	Func_3U5BU5D_t3582193110* ___DATA_MASKS_0;

public:
	inline static int32_t get_offset_of_DATA_MASKS_0() { return static_cast<int32_t>(offsetof(DataMask_t3864373770_StaticFields, ___DATA_MASKS_0)); }
	inline Func_3U5BU5D_t3582193110* get_DATA_MASKS_0() const { return ___DATA_MASKS_0; }
	inline Func_3U5BU5D_t3582193110** get_address_of_DATA_MASKS_0() { return &___DATA_MASKS_0; }
	inline void set_DATA_MASKS_0(Func_3U5BU5D_t3582193110* value)
	{
		___DATA_MASKS_0 = value;
		Il2CppCodeGenWriteBarrier((&___DATA_MASKS_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATAMASK_T3864373770_H
#ifndef RESULTPOINT_T3813591718_H
#define RESULTPOINT_T3813591718_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.ResultPoint
struct  ResultPoint_t3813591718  : public RuntimeObject
{
public:
	// System.Single ZXing.ResultPoint::x
	float ___x_0;
	// System.Single ZXing.ResultPoint::y
	float ___y_1;
	// System.Byte[] ZXing.ResultPoint::bytesX
	ByteU5BU5D_t1607118512* ___bytesX_2;
	// System.Byte[] ZXing.ResultPoint::bytesY
	ByteU5BU5D_t1607118512* ___bytesY_3;
	// System.String ZXing.ResultPoint::toString
	String_t* ___toString_4;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(ResultPoint_t3813591718, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(ResultPoint_t3813591718, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_bytesX_2() { return static_cast<int32_t>(offsetof(ResultPoint_t3813591718, ___bytesX_2)); }
	inline ByteU5BU5D_t1607118512* get_bytesX_2() const { return ___bytesX_2; }
	inline ByteU5BU5D_t1607118512** get_address_of_bytesX_2() { return &___bytesX_2; }
	inline void set_bytesX_2(ByteU5BU5D_t1607118512* value)
	{
		___bytesX_2 = value;
		Il2CppCodeGenWriteBarrier((&___bytesX_2), value);
	}

	inline static int32_t get_offset_of_bytesY_3() { return static_cast<int32_t>(offsetof(ResultPoint_t3813591718, ___bytesY_3)); }
	inline ByteU5BU5D_t1607118512* get_bytesY_3() const { return ___bytesY_3; }
	inline ByteU5BU5D_t1607118512** get_address_of_bytesY_3() { return &___bytesY_3; }
	inline void set_bytesY_3(ByteU5BU5D_t1607118512* value)
	{
		___bytesY_3 = value;
		Il2CppCodeGenWriteBarrier((&___bytesY_3), value);
	}

	inline static int32_t get_offset_of_toString_4() { return static_cast<int32_t>(offsetof(ResultPoint_t3813591718, ___toString_4)); }
	inline String_t* get_toString_4() const { return ___toString_4; }
	inline String_t** get_address_of_toString_4() { return &___toString_4; }
	inline void set_toString_4(String_t* value)
	{
		___toString_4 = value;
		Il2CppCodeGenWriteBarrier((&___toString_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESULTPOINT_T3813591718_H
#ifndef DIMENSION_T2359472988_H
#define DIMENSION_T2359472988_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.Dimension
struct  Dimension_t2359472988  : public RuntimeObject
{
public:
	// System.Int32 ZXing.Dimension::width
	int32_t ___width_0;
	// System.Int32 ZXing.Dimension::height
	int32_t ___height_1;

public:
	inline static int32_t get_offset_of_width_0() { return static_cast<int32_t>(offsetof(Dimension_t2359472988, ___width_0)); }
	inline int32_t get_width_0() const { return ___width_0; }
	inline int32_t* get_address_of_width_0() { return &___width_0; }
	inline void set_width_0(int32_t value)
	{
		___width_0 = value;
	}

	inline static int32_t get_offset_of_height_1() { return static_cast<int32_t>(offsetof(Dimension_t2359472988, ___height_1)); }
	inline int32_t get_height_1() const { return ___height_1; }
	inline int32_t* get_address_of_height_1() { return &___height_1; }
	inline void set_height_1(int32_t value)
	{
		___height_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIMENSION_T2359472988_H
#ifndef U3CU3EC_T2723235944_H
#define U3CU3EC_T2723235944_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.QrCode.Internal.DataMask/<>c
struct  U3CU3Ec_t2723235944  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t2723235944_StaticFields
{
public:
	// ZXing.QrCode.Internal.DataMask/<>c ZXing.QrCode.Internal.DataMask/<>c::<>9
	U3CU3Ec_t2723235944 * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t2723235944_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t2723235944 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t2723235944 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t2723235944 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC_T2723235944_H
#ifndef DECODER_T2550361462_H
#define DECODER_T2550361462_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.QrCode.Internal.Decoder
struct  Decoder_t2550361462  : public RuntimeObject
{
public:
	// ZXing.Common.ReedSolomon.ReedSolomonDecoder ZXing.QrCode.Internal.Decoder::rsDecoder
	ReedSolomonDecoder_t607151696 * ___rsDecoder_0;

public:
	inline static int32_t get_offset_of_rsDecoder_0() { return static_cast<int32_t>(offsetof(Decoder_t2550361462, ___rsDecoder_0)); }
	inline ReedSolomonDecoder_t607151696 * get_rsDecoder_0() const { return ___rsDecoder_0; }
	inline ReedSolomonDecoder_t607151696 ** get_address_of_rsDecoder_0() { return &___rsDecoder_0; }
	inline void set_rsDecoder_0(ReedSolomonDecoder_t607151696 * value)
	{
		___rsDecoder_0 = value;
		Il2CppCodeGenWriteBarrier((&___rsDecoder_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODER_T2550361462_H
#ifndef ERRORCORRECTIONLEVEL_T4005497601_H
#define ERRORCORRECTIONLEVEL_T4005497601_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.QrCode.Internal.ErrorCorrectionLevel
struct  ErrorCorrectionLevel_t4005497601  : public RuntimeObject
{
public:
	// System.Int32 ZXing.QrCode.Internal.ErrorCorrectionLevel::bits
	int32_t ___bits_5;
	// System.Int32 ZXing.QrCode.Internal.ErrorCorrectionLevel::ordinal_Renamed_Field
	int32_t ___ordinal_Renamed_Field_6;
	// System.String ZXing.QrCode.Internal.ErrorCorrectionLevel::name
	String_t* ___name_7;

public:
	inline static int32_t get_offset_of_bits_5() { return static_cast<int32_t>(offsetof(ErrorCorrectionLevel_t4005497601, ___bits_5)); }
	inline int32_t get_bits_5() const { return ___bits_5; }
	inline int32_t* get_address_of_bits_5() { return &___bits_5; }
	inline void set_bits_5(int32_t value)
	{
		___bits_5 = value;
	}

	inline static int32_t get_offset_of_ordinal_Renamed_Field_6() { return static_cast<int32_t>(offsetof(ErrorCorrectionLevel_t4005497601, ___ordinal_Renamed_Field_6)); }
	inline int32_t get_ordinal_Renamed_Field_6() const { return ___ordinal_Renamed_Field_6; }
	inline int32_t* get_address_of_ordinal_Renamed_Field_6() { return &___ordinal_Renamed_Field_6; }
	inline void set_ordinal_Renamed_Field_6(int32_t value)
	{
		___ordinal_Renamed_Field_6 = value;
	}

	inline static int32_t get_offset_of_name_7() { return static_cast<int32_t>(offsetof(ErrorCorrectionLevel_t4005497601, ___name_7)); }
	inline String_t* get_name_7() const { return ___name_7; }
	inline String_t** get_address_of_name_7() { return &___name_7; }
	inline void set_name_7(String_t* value)
	{
		___name_7 = value;
		Il2CppCodeGenWriteBarrier((&___name_7), value);
	}
};

struct ErrorCorrectionLevel_t4005497601_StaticFields
{
public:
	// ZXing.QrCode.Internal.ErrorCorrectionLevel ZXing.QrCode.Internal.ErrorCorrectionLevel::L
	ErrorCorrectionLevel_t4005497601 * ___L_0;
	// ZXing.QrCode.Internal.ErrorCorrectionLevel ZXing.QrCode.Internal.ErrorCorrectionLevel::M
	ErrorCorrectionLevel_t4005497601 * ___M_1;
	// ZXing.QrCode.Internal.ErrorCorrectionLevel ZXing.QrCode.Internal.ErrorCorrectionLevel::Q
	ErrorCorrectionLevel_t4005497601 * ___Q_2;
	// ZXing.QrCode.Internal.ErrorCorrectionLevel ZXing.QrCode.Internal.ErrorCorrectionLevel::H
	ErrorCorrectionLevel_t4005497601 * ___H_3;
	// ZXing.QrCode.Internal.ErrorCorrectionLevel[] ZXing.QrCode.Internal.ErrorCorrectionLevel::FOR_BITS
	ErrorCorrectionLevelU5BU5D_t4250864604* ___FOR_BITS_4;

public:
	inline static int32_t get_offset_of_L_0() { return static_cast<int32_t>(offsetof(ErrorCorrectionLevel_t4005497601_StaticFields, ___L_0)); }
	inline ErrorCorrectionLevel_t4005497601 * get_L_0() const { return ___L_0; }
	inline ErrorCorrectionLevel_t4005497601 ** get_address_of_L_0() { return &___L_0; }
	inline void set_L_0(ErrorCorrectionLevel_t4005497601 * value)
	{
		___L_0 = value;
		Il2CppCodeGenWriteBarrier((&___L_0), value);
	}

	inline static int32_t get_offset_of_M_1() { return static_cast<int32_t>(offsetof(ErrorCorrectionLevel_t4005497601_StaticFields, ___M_1)); }
	inline ErrorCorrectionLevel_t4005497601 * get_M_1() const { return ___M_1; }
	inline ErrorCorrectionLevel_t4005497601 ** get_address_of_M_1() { return &___M_1; }
	inline void set_M_1(ErrorCorrectionLevel_t4005497601 * value)
	{
		___M_1 = value;
		Il2CppCodeGenWriteBarrier((&___M_1), value);
	}

	inline static int32_t get_offset_of_Q_2() { return static_cast<int32_t>(offsetof(ErrorCorrectionLevel_t4005497601_StaticFields, ___Q_2)); }
	inline ErrorCorrectionLevel_t4005497601 * get_Q_2() const { return ___Q_2; }
	inline ErrorCorrectionLevel_t4005497601 ** get_address_of_Q_2() { return &___Q_2; }
	inline void set_Q_2(ErrorCorrectionLevel_t4005497601 * value)
	{
		___Q_2 = value;
		Il2CppCodeGenWriteBarrier((&___Q_2), value);
	}

	inline static int32_t get_offset_of_H_3() { return static_cast<int32_t>(offsetof(ErrorCorrectionLevel_t4005497601_StaticFields, ___H_3)); }
	inline ErrorCorrectionLevel_t4005497601 * get_H_3() const { return ___H_3; }
	inline ErrorCorrectionLevel_t4005497601 ** get_address_of_H_3() { return &___H_3; }
	inline void set_H_3(ErrorCorrectionLevel_t4005497601 * value)
	{
		___H_3 = value;
		Il2CppCodeGenWriteBarrier((&___H_3), value);
	}

	inline static int32_t get_offset_of_FOR_BITS_4() { return static_cast<int32_t>(offsetof(ErrorCorrectionLevel_t4005497601_StaticFields, ___FOR_BITS_4)); }
	inline ErrorCorrectionLevelU5BU5D_t4250864604* get_FOR_BITS_4() const { return ___FOR_BITS_4; }
	inline ErrorCorrectionLevelU5BU5D_t4250864604** get_address_of_FOR_BITS_4() { return &___FOR_BITS_4; }
	inline void set_FOR_BITS_4(ErrorCorrectionLevelU5BU5D_t4250864604* value)
	{
		___FOR_BITS_4 = value;
		Il2CppCodeGenWriteBarrier((&___FOR_BITS_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ERRORCORRECTIONLEVEL_T4005497601_H
#ifndef FORMATINFORMATION_T232295017_H
#define FORMATINFORMATION_T232295017_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.QrCode.Internal.FormatInformation
struct  FormatInformation_t232295017  : public RuntimeObject
{
public:
	// ZXing.QrCode.Internal.ErrorCorrectionLevel ZXing.QrCode.Internal.FormatInformation::errorCorrectionLevel
	ErrorCorrectionLevel_t4005497601 * ___errorCorrectionLevel_2;
	// System.Byte ZXing.QrCode.Internal.FormatInformation::dataMask
	uint8_t ___dataMask_3;

public:
	inline static int32_t get_offset_of_errorCorrectionLevel_2() { return static_cast<int32_t>(offsetof(FormatInformation_t232295017, ___errorCorrectionLevel_2)); }
	inline ErrorCorrectionLevel_t4005497601 * get_errorCorrectionLevel_2() const { return ___errorCorrectionLevel_2; }
	inline ErrorCorrectionLevel_t4005497601 ** get_address_of_errorCorrectionLevel_2() { return &___errorCorrectionLevel_2; }
	inline void set_errorCorrectionLevel_2(ErrorCorrectionLevel_t4005497601 * value)
	{
		___errorCorrectionLevel_2 = value;
		Il2CppCodeGenWriteBarrier((&___errorCorrectionLevel_2), value);
	}

	inline static int32_t get_offset_of_dataMask_3() { return static_cast<int32_t>(offsetof(FormatInformation_t232295017, ___dataMask_3)); }
	inline uint8_t get_dataMask_3() const { return ___dataMask_3; }
	inline uint8_t* get_address_of_dataMask_3() { return &___dataMask_3; }
	inline void set_dataMask_3(uint8_t value)
	{
		___dataMask_3 = value;
	}
};

struct FormatInformation_t232295017_StaticFields
{
public:
	// System.Int32[][] ZXing.QrCode.Internal.FormatInformation::FORMAT_INFO_DECODE_LOOKUP
	Int32U5BU5DU5BU5D_t1266570013* ___FORMAT_INFO_DECODE_LOOKUP_0;
	// System.Int32[] ZXing.QrCode.Internal.FormatInformation::BITS_SET_IN_HALF_BYTE
	Int32U5BU5D_t136769044* ___BITS_SET_IN_HALF_BYTE_1;

public:
	inline static int32_t get_offset_of_FORMAT_INFO_DECODE_LOOKUP_0() { return static_cast<int32_t>(offsetof(FormatInformation_t232295017_StaticFields, ___FORMAT_INFO_DECODE_LOOKUP_0)); }
	inline Int32U5BU5DU5BU5D_t1266570013* get_FORMAT_INFO_DECODE_LOOKUP_0() const { return ___FORMAT_INFO_DECODE_LOOKUP_0; }
	inline Int32U5BU5DU5BU5D_t1266570013** get_address_of_FORMAT_INFO_DECODE_LOOKUP_0() { return &___FORMAT_INFO_DECODE_LOOKUP_0; }
	inline void set_FORMAT_INFO_DECODE_LOOKUP_0(Int32U5BU5DU5BU5D_t1266570013* value)
	{
		___FORMAT_INFO_DECODE_LOOKUP_0 = value;
		Il2CppCodeGenWriteBarrier((&___FORMAT_INFO_DECODE_LOOKUP_0), value);
	}

	inline static int32_t get_offset_of_BITS_SET_IN_HALF_BYTE_1() { return static_cast<int32_t>(offsetof(FormatInformation_t232295017_StaticFields, ___BITS_SET_IN_HALF_BYTE_1)); }
	inline Int32U5BU5D_t136769044* get_BITS_SET_IN_HALF_BYTE_1() const { return ___BITS_SET_IN_HALF_BYTE_1; }
	inline Int32U5BU5D_t136769044** get_address_of_BITS_SET_IN_HALF_BYTE_1() { return &___BITS_SET_IN_HALF_BYTE_1; }
	inline void set_BITS_SET_IN_HALF_BYTE_1(Int32U5BU5D_t136769044* value)
	{
		___BITS_SET_IN_HALF_BYTE_1 = value;
		Il2CppCodeGenWriteBarrier((&___BITS_SET_IN_HALF_BYTE_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORMATINFORMATION_T232295017_H
#ifndef LUMINANCESOURCE_T2042240187_H
#define LUMINANCESOURCE_T2042240187_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.LuminanceSource
struct  LuminanceSource_t2042240187  : public RuntimeObject
{
public:
	// System.Int32 ZXing.LuminanceSource::width
	int32_t ___width_0;
	// System.Int32 ZXing.LuminanceSource::height
	int32_t ___height_1;

public:
	inline static int32_t get_offset_of_width_0() { return static_cast<int32_t>(offsetof(LuminanceSource_t2042240187, ___width_0)); }
	inline int32_t get_width_0() const { return ___width_0; }
	inline int32_t* get_address_of_width_0() { return &___width_0; }
	inline void set_width_0(int32_t value)
	{
		___width_0 = value;
	}

	inline static int32_t get_offset_of_height_1() { return static_cast<int32_t>(offsetof(LuminanceSource_t2042240187, ___height_1)); }
	inline int32_t get_height_1() const { return ___height_1; }
	inline int32_t* get_address_of_height_1() { return &___height_1; }
	inline void set_height_1(int32_t value)
	{
		___height_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LUMINANCESOURCE_T2042240187_H
#ifndef U3CU3EC_T3355658130_H
#define U3CU3EC_T3355658130_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.MultiFormatWriter/<>c
struct  U3CU3Ec_t3355658130  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t3355658130_StaticFields
{
public:
	// ZXing.MultiFormatWriter/<>c ZXing.MultiFormatWriter/<>c::<>9
	U3CU3Ec_t3355658130 * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3355658130_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t3355658130 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t3355658130 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t3355658130 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC_T3355658130_H
#ifndef QRCODEDECODERMETADATA_T2775618386_H
#define QRCODEDECODERMETADATA_T2775618386_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.QrCode.Internal.QRCodeDecoderMetaData
struct  QRCodeDecoderMetaData_t2775618386  : public RuntimeObject
{
public:
	// System.Boolean ZXing.QrCode.Internal.QRCodeDecoderMetaData::mirrored
	bool ___mirrored_0;

public:
	inline static int32_t get_offset_of_mirrored_0() { return static_cast<int32_t>(offsetof(QRCodeDecoderMetaData_t2775618386, ___mirrored_0)); }
	inline bool get_mirrored_0() const { return ___mirrored_0; }
	inline bool* get_address_of_mirrored_0() { return &___mirrored_0; }
	inline void set_mirrored_0(bool value)
	{
		___mirrored_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QRCODEDECODERMETADATA_T2775618386_H
#ifndef VERSION_T2207593696_H
#define VERSION_T2207593696_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.QrCode.Internal.Version
struct  Version_t2207593696  : public RuntimeObject
{
public:
	// System.Int32 ZXing.QrCode.Internal.Version::versionNumber
	int32_t ___versionNumber_2;
	// System.Int32[] ZXing.QrCode.Internal.Version::alignmentPatternCenters
	Int32U5BU5D_t136769044* ___alignmentPatternCenters_3;
	// ZXing.QrCode.Internal.Version/ECBlocks[] ZXing.QrCode.Internal.Version::ecBlocks
	ECBlocksU5BU5D_t3602512777* ___ecBlocks_4;
	// System.Int32 ZXing.QrCode.Internal.Version::totalCodewords
	int32_t ___totalCodewords_5;

public:
	inline static int32_t get_offset_of_versionNumber_2() { return static_cast<int32_t>(offsetof(Version_t2207593696, ___versionNumber_2)); }
	inline int32_t get_versionNumber_2() const { return ___versionNumber_2; }
	inline int32_t* get_address_of_versionNumber_2() { return &___versionNumber_2; }
	inline void set_versionNumber_2(int32_t value)
	{
		___versionNumber_2 = value;
	}

	inline static int32_t get_offset_of_alignmentPatternCenters_3() { return static_cast<int32_t>(offsetof(Version_t2207593696, ___alignmentPatternCenters_3)); }
	inline Int32U5BU5D_t136769044* get_alignmentPatternCenters_3() const { return ___alignmentPatternCenters_3; }
	inline Int32U5BU5D_t136769044** get_address_of_alignmentPatternCenters_3() { return &___alignmentPatternCenters_3; }
	inline void set_alignmentPatternCenters_3(Int32U5BU5D_t136769044* value)
	{
		___alignmentPatternCenters_3 = value;
		Il2CppCodeGenWriteBarrier((&___alignmentPatternCenters_3), value);
	}

	inline static int32_t get_offset_of_ecBlocks_4() { return static_cast<int32_t>(offsetof(Version_t2207593696, ___ecBlocks_4)); }
	inline ECBlocksU5BU5D_t3602512777* get_ecBlocks_4() const { return ___ecBlocks_4; }
	inline ECBlocksU5BU5D_t3602512777** get_address_of_ecBlocks_4() { return &___ecBlocks_4; }
	inline void set_ecBlocks_4(ECBlocksU5BU5D_t3602512777* value)
	{
		___ecBlocks_4 = value;
		Il2CppCodeGenWriteBarrier((&___ecBlocks_4), value);
	}

	inline static int32_t get_offset_of_totalCodewords_5() { return static_cast<int32_t>(offsetof(Version_t2207593696, ___totalCodewords_5)); }
	inline int32_t get_totalCodewords_5() const { return ___totalCodewords_5; }
	inline int32_t* get_address_of_totalCodewords_5() { return &___totalCodewords_5; }
	inline void set_totalCodewords_5(int32_t value)
	{
		___totalCodewords_5 = value;
	}
};

struct Version_t2207593696_StaticFields
{
public:
	// System.Int32[] ZXing.QrCode.Internal.Version::VERSION_DECODE_INFO
	Int32U5BU5D_t136769044* ___VERSION_DECODE_INFO_0;
	// ZXing.QrCode.Internal.Version[] ZXing.QrCode.Internal.Version::VERSIONS
	VersionU5BU5D_t517602209* ___VERSIONS_1;

public:
	inline static int32_t get_offset_of_VERSION_DECODE_INFO_0() { return static_cast<int32_t>(offsetof(Version_t2207593696_StaticFields, ___VERSION_DECODE_INFO_0)); }
	inline Int32U5BU5D_t136769044* get_VERSION_DECODE_INFO_0() const { return ___VERSION_DECODE_INFO_0; }
	inline Int32U5BU5D_t136769044** get_address_of_VERSION_DECODE_INFO_0() { return &___VERSION_DECODE_INFO_0; }
	inline void set_VERSION_DECODE_INFO_0(Int32U5BU5D_t136769044* value)
	{
		___VERSION_DECODE_INFO_0 = value;
		Il2CppCodeGenWriteBarrier((&___VERSION_DECODE_INFO_0), value);
	}

	inline static int32_t get_offset_of_VERSIONS_1() { return static_cast<int32_t>(offsetof(Version_t2207593696_StaticFields, ___VERSIONS_1)); }
	inline VersionU5BU5D_t517602209* get_VERSIONS_1() const { return ___VERSIONS_1; }
	inline VersionU5BU5D_t517602209** get_address_of_VERSIONS_1() { return &___VERSIONS_1; }
	inline void set_VERSIONS_1(VersionU5BU5D_t517602209* value)
	{
		___VERSIONS_1 = value;
		Il2CppCodeGenWriteBarrier((&___VERSIONS_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VERSION_T2207593696_H
#ifndef ECBLOCKS_T1509446936_H
#define ECBLOCKS_T1509446936_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.QrCode.Internal.Version/ECBlocks
struct  ECBlocks_t1509446936  : public RuntimeObject
{
public:
	// System.Int32 ZXing.QrCode.Internal.Version/ECBlocks::ecCodewordsPerBlock
	int32_t ___ecCodewordsPerBlock_0;
	// ZXing.QrCode.Internal.Version/ECB[] ZXing.QrCode.Internal.Version/ECBlocks::ecBlocks
	ECBU5BU5D_t570517508* ___ecBlocks_1;

public:
	inline static int32_t get_offset_of_ecCodewordsPerBlock_0() { return static_cast<int32_t>(offsetof(ECBlocks_t1509446936, ___ecCodewordsPerBlock_0)); }
	inline int32_t get_ecCodewordsPerBlock_0() const { return ___ecCodewordsPerBlock_0; }
	inline int32_t* get_address_of_ecCodewordsPerBlock_0() { return &___ecCodewordsPerBlock_0; }
	inline void set_ecCodewordsPerBlock_0(int32_t value)
	{
		___ecCodewordsPerBlock_0 = value;
	}

	inline static int32_t get_offset_of_ecBlocks_1() { return static_cast<int32_t>(offsetof(ECBlocks_t1509446936, ___ecBlocks_1)); }
	inline ECBU5BU5D_t570517508* get_ecBlocks_1() const { return ___ecBlocks_1; }
	inline ECBU5BU5D_t570517508** get_address_of_ecBlocks_1() { return &___ecBlocks_1; }
	inline void set_ecBlocks_1(ECBU5BU5D_t570517508* value)
	{
		___ecBlocks_1 = value;
		Il2CppCodeGenWriteBarrier((&___ecBlocks_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ECBLOCKS_T1509446936_H
#ifndef ECB_T2885964793_H
#define ECB_T2885964793_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.QrCode.Internal.Version/ECB
struct  ECB_t2885964793  : public RuntimeObject
{
public:
	// System.Int32 ZXing.QrCode.Internal.Version/ECB::count
	int32_t ___count_0;
	// System.Int32 ZXing.QrCode.Internal.Version/ECB::dataCodewords
	int32_t ___dataCodewords_1;

public:
	inline static int32_t get_offset_of_count_0() { return static_cast<int32_t>(offsetof(ECB_t2885964793, ___count_0)); }
	inline int32_t get_count_0() const { return ___count_0; }
	inline int32_t* get_address_of_count_0() { return &___count_0; }
	inline void set_count_0(int32_t value)
	{
		___count_0 = value;
	}

	inline static int32_t get_offset_of_dataCodewords_1() { return static_cast<int32_t>(offsetof(ECB_t2885964793, ___dataCodewords_1)); }
	inline int32_t get_dataCodewords_1() const { return ___dataCodewords_1; }
	inline int32_t* get_address_of_dataCodewords_1() { return &___dataCodewords_1; }
	inline void set_dataCodewords_1(int32_t value)
	{
		___dataCodewords_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ECB_T2885964793_H
#ifndef BINARYBITMAP_T3624980476_H
#define BINARYBITMAP_T3624980476_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.BinaryBitmap
struct  BinaryBitmap_t3624980476  : public RuntimeObject
{
public:
	// ZXing.Binarizer ZXing.BinaryBitmap::binarizer
	Binarizer_t1153999642 * ___binarizer_0;
	// ZXing.Common.BitMatrix ZXing.BinaryBitmap::matrix
	BitMatrix_t2608305202 * ___matrix_1;

public:
	inline static int32_t get_offset_of_binarizer_0() { return static_cast<int32_t>(offsetof(BinaryBitmap_t3624980476, ___binarizer_0)); }
	inline Binarizer_t1153999642 * get_binarizer_0() const { return ___binarizer_0; }
	inline Binarizer_t1153999642 ** get_address_of_binarizer_0() { return &___binarizer_0; }
	inline void set_binarizer_0(Binarizer_t1153999642 * value)
	{
		___binarizer_0 = value;
		Il2CppCodeGenWriteBarrier((&___binarizer_0), value);
	}

	inline static int32_t get_offset_of_matrix_1() { return static_cast<int32_t>(offsetof(BinaryBitmap_t3624980476, ___matrix_1)); }
	inline BitMatrix_t2608305202 * get_matrix_1() const { return ___matrix_1; }
	inline BitMatrix_t2608305202 ** get_address_of_matrix_1() { return &___matrix_1; }
	inline void set_matrix_1(BitMatrix_t2608305202 * value)
	{
		___matrix_1 = value;
		Il2CppCodeGenWriteBarrier((&___matrix_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINARYBITMAP_T3624980476_H
#ifndef DECODEDBITSTREAMPARSER_T47856829_H
#define DECODEDBITSTREAMPARSER_T47856829_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.QrCode.Internal.DecodedBitStreamParser
struct  DecodedBitStreamParser_t47856829  : public RuntimeObject
{
public:

public:
};

struct DecodedBitStreamParser_t47856829_StaticFields
{
public:
	// System.Char[] ZXing.QrCode.Internal.DecodedBitStreamParser::ALPHANUMERIC_CHARS
	CharU5BU5D_t2574930377* ___ALPHANUMERIC_CHARS_0;

public:
	inline static int32_t get_offset_of_ALPHANUMERIC_CHARS_0() { return static_cast<int32_t>(offsetof(DecodedBitStreamParser_t47856829_StaticFields, ___ALPHANUMERIC_CHARS_0)); }
	inline CharU5BU5D_t2574930377* get_ALPHANUMERIC_CHARS_0() const { return ___ALPHANUMERIC_CHARS_0; }
	inline CharU5BU5D_t2574930377** get_address_of_ALPHANUMERIC_CHARS_0() { return &___ALPHANUMERIC_CHARS_0; }
	inline void set_ALPHANUMERIC_CHARS_0(CharU5BU5D_t2574930377* value)
	{
		___ALPHANUMERIC_CHARS_0 = value;
		Il2CppCodeGenWriteBarrier((&___ALPHANUMERIC_CHARS_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODEDBITSTREAMPARSER_T47856829_H
#ifndef CODABARREADER_T2864429437_H
#define CODABARREADER_T2864429437_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.OneD.CodaBarReader
struct  CodaBarReader_t2864429437  : public OneDReader_t2553842366
{
public:
	// System.Text.StringBuilder ZXing.OneD.CodaBarReader::decodeRowResult
	StringBuilder_t3061408366 * ___decodeRowResult_7;
	// System.Int32[] ZXing.OneD.CodaBarReader::counters
	Int32U5BU5D_t136769044* ___counters_8;
	// System.Int32 ZXing.OneD.CodaBarReader::counterLength
	int32_t ___counterLength_9;

public:
	inline static int32_t get_offset_of_decodeRowResult_7() { return static_cast<int32_t>(offsetof(CodaBarReader_t2864429437, ___decodeRowResult_7)); }
	inline StringBuilder_t3061408366 * get_decodeRowResult_7() const { return ___decodeRowResult_7; }
	inline StringBuilder_t3061408366 ** get_address_of_decodeRowResult_7() { return &___decodeRowResult_7; }
	inline void set_decodeRowResult_7(StringBuilder_t3061408366 * value)
	{
		___decodeRowResult_7 = value;
		Il2CppCodeGenWriteBarrier((&___decodeRowResult_7), value);
	}

	inline static int32_t get_offset_of_counters_8() { return static_cast<int32_t>(offsetof(CodaBarReader_t2864429437, ___counters_8)); }
	inline Int32U5BU5D_t136769044* get_counters_8() const { return ___counters_8; }
	inline Int32U5BU5D_t136769044** get_address_of_counters_8() { return &___counters_8; }
	inline void set_counters_8(Int32U5BU5D_t136769044* value)
	{
		___counters_8 = value;
		Il2CppCodeGenWriteBarrier((&___counters_8), value);
	}

	inline static int32_t get_offset_of_counterLength_9() { return static_cast<int32_t>(offsetof(CodaBarReader_t2864429437, ___counterLength_9)); }
	inline int32_t get_counterLength_9() const { return ___counterLength_9; }
	inline int32_t* get_address_of_counterLength_9() { return &___counterLength_9; }
	inline void set_counterLength_9(int32_t value)
	{
		___counterLength_9 = value;
	}
};

struct CodaBarReader_t2864429437_StaticFields
{
public:
	// System.Int32 ZXing.OneD.CodaBarReader::MAX_ACCEPTABLE
	int32_t ___MAX_ACCEPTABLE_2;
	// System.Int32 ZXing.OneD.CodaBarReader::PADDING
	int32_t ___PADDING_3;
	// System.Char[] ZXing.OneD.CodaBarReader::ALPHABET
	CharU5BU5D_t2574930377* ___ALPHABET_4;
	// System.Int32[] ZXing.OneD.CodaBarReader::CHARACTER_ENCODINGS
	Int32U5BU5D_t136769044* ___CHARACTER_ENCODINGS_5;
	// System.Char[] ZXing.OneD.CodaBarReader::STARTEND_ENCODING
	CharU5BU5D_t2574930377* ___STARTEND_ENCODING_6;

public:
	inline static int32_t get_offset_of_MAX_ACCEPTABLE_2() { return static_cast<int32_t>(offsetof(CodaBarReader_t2864429437_StaticFields, ___MAX_ACCEPTABLE_2)); }
	inline int32_t get_MAX_ACCEPTABLE_2() const { return ___MAX_ACCEPTABLE_2; }
	inline int32_t* get_address_of_MAX_ACCEPTABLE_2() { return &___MAX_ACCEPTABLE_2; }
	inline void set_MAX_ACCEPTABLE_2(int32_t value)
	{
		___MAX_ACCEPTABLE_2 = value;
	}

	inline static int32_t get_offset_of_PADDING_3() { return static_cast<int32_t>(offsetof(CodaBarReader_t2864429437_StaticFields, ___PADDING_3)); }
	inline int32_t get_PADDING_3() const { return ___PADDING_3; }
	inline int32_t* get_address_of_PADDING_3() { return &___PADDING_3; }
	inline void set_PADDING_3(int32_t value)
	{
		___PADDING_3 = value;
	}

	inline static int32_t get_offset_of_ALPHABET_4() { return static_cast<int32_t>(offsetof(CodaBarReader_t2864429437_StaticFields, ___ALPHABET_4)); }
	inline CharU5BU5D_t2574930377* get_ALPHABET_4() const { return ___ALPHABET_4; }
	inline CharU5BU5D_t2574930377** get_address_of_ALPHABET_4() { return &___ALPHABET_4; }
	inline void set_ALPHABET_4(CharU5BU5D_t2574930377* value)
	{
		___ALPHABET_4 = value;
		Il2CppCodeGenWriteBarrier((&___ALPHABET_4), value);
	}

	inline static int32_t get_offset_of_CHARACTER_ENCODINGS_5() { return static_cast<int32_t>(offsetof(CodaBarReader_t2864429437_StaticFields, ___CHARACTER_ENCODINGS_5)); }
	inline Int32U5BU5D_t136769044* get_CHARACTER_ENCODINGS_5() const { return ___CHARACTER_ENCODINGS_5; }
	inline Int32U5BU5D_t136769044** get_address_of_CHARACTER_ENCODINGS_5() { return &___CHARACTER_ENCODINGS_5; }
	inline void set_CHARACTER_ENCODINGS_5(Int32U5BU5D_t136769044* value)
	{
		___CHARACTER_ENCODINGS_5 = value;
		Il2CppCodeGenWriteBarrier((&___CHARACTER_ENCODINGS_5), value);
	}

	inline static int32_t get_offset_of_STARTEND_ENCODING_6() { return static_cast<int32_t>(offsetof(CodaBarReader_t2864429437_StaticFields, ___STARTEND_ENCODING_6)); }
	inline CharU5BU5D_t2574930377* get_STARTEND_ENCODING_6() const { return ___STARTEND_ENCODING_6; }
	inline CharU5BU5D_t2574930377** get_address_of_STARTEND_ENCODING_6() { return &___STARTEND_ENCODING_6; }
	inline void set_STARTEND_ENCODING_6(CharU5BU5D_t2574930377* value)
	{
		___STARTEND_ENCODING_6 = value;
		Il2CppCodeGenWriteBarrier((&___STARTEND_ENCODING_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CODABARREADER_T2864429437_H
#ifndef CODABARWRITER_T1577690684_H
#define CODABARWRITER_T1577690684_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.OneD.CodaBarWriter
struct  CodaBarWriter_t1577690684  : public OneDimensionalCodeWriter_t608612180
{
public:

public:
};

struct CodaBarWriter_t1577690684_StaticFields
{
public:
	// System.Char[] ZXing.OneD.CodaBarWriter::START_END_CHARS
	CharU5BU5D_t2574930377* ___START_END_CHARS_0;
	// System.Char[] ZXing.OneD.CodaBarWriter::ALT_START_END_CHARS
	CharU5BU5D_t2574930377* ___ALT_START_END_CHARS_1;
	// System.Char[] ZXing.OneD.CodaBarWriter::CHARS_WHICH_ARE_TEN_LENGTH_EACH_AFTER_DECODED
	CharU5BU5D_t2574930377* ___CHARS_WHICH_ARE_TEN_LENGTH_EACH_AFTER_DECODED_2;
	// System.Char ZXing.OneD.CodaBarWriter::DEFAULT_GUARD
	Il2CppChar ___DEFAULT_GUARD_3;

public:
	inline static int32_t get_offset_of_START_END_CHARS_0() { return static_cast<int32_t>(offsetof(CodaBarWriter_t1577690684_StaticFields, ___START_END_CHARS_0)); }
	inline CharU5BU5D_t2574930377* get_START_END_CHARS_0() const { return ___START_END_CHARS_0; }
	inline CharU5BU5D_t2574930377** get_address_of_START_END_CHARS_0() { return &___START_END_CHARS_0; }
	inline void set_START_END_CHARS_0(CharU5BU5D_t2574930377* value)
	{
		___START_END_CHARS_0 = value;
		Il2CppCodeGenWriteBarrier((&___START_END_CHARS_0), value);
	}

	inline static int32_t get_offset_of_ALT_START_END_CHARS_1() { return static_cast<int32_t>(offsetof(CodaBarWriter_t1577690684_StaticFields, ___ALT_START_END_CHARS_1)); }
	inline CharU5BU5D_t2574930377* get_ALT_START_END_CHARS_1() const { return ___ALT_START_END_CHARS_1; }
	inline CharU5BU5D_t2574930377** get_address_of_ALT_START_END_CHARS_1() { return &___ALT_START_END_CHARS_1; }
	inline void set_ALT_START_END_CHARS_1(CharU5BU5D_t2574930377* value)
	{
		___ALT_START_END_CHARS_1 = value;
		Il2CppCodeGenWriteBarrier((&___ALT_START_END_CHARS_1), value);
	}

	inline static int32_t get_offset_of_CHARS_WHICH_ARE_TEN_LENGTH_EACH_AFTER_DECODED_2() { return static_cast<int32_t>(offsetof(CodaBarWriter_t1577690684_StaticFields, ___CHARS_WHICH_ARE_TEN_LENGTH_EACH_AFTER_DECODED_2)); }
	inline CharU5BU5D_t2574930377* get_CHARS_WHICH_ARE_TEN_LENGTH_EACH_AFTER_DECODED_2() const { return ___CHARS_WHICH_ARE_TEN_LENGTH_EACH_AFTER_DECODED_2; }
	inline CharU5BU5D_t2574930377** get_address_of_CHARS_WHICH_ARE_TEN_LENGTH_EACH_AFTER_DECODED_2() { return &___CHARS_WHICH_ARE_TEN_LENGTH_EACH_AFTER_DECODED_2; }
	inline void set_CHARS_WHICH_ARE_TEN_LENGTH_EACH_AFTER_DECODED_2(CharU5BU5D_t2574930377* value)
	{
		___CHARS_WHICH_ARE_TEN_LENGTH_EACH_AFTER_DECODED_2 = value;
		Il2CppCodeGenWriteBarrier((&___CHARS_WHICH_ARE_TEN_LENGTH_EACH_AFTER_DECODED_2), value);
	}

	inline static int32_t get_offset_of_DEFAULT_GUARD_3() { return static_cast<int32_t>(offsetof(CodaBarWriter_t1577690684_StaticFields, ___DEFAULT_GUARD_3)); }
	inline Il2CppChar get_DEFAULT_GUARD_3() const { return ___DEFAULT_GUARD_3; }
	inline Il2CppChar* get_address_of_DEFAULT_GUARD_3() { return &___DEFAULT_GUARD_3; }
	inline void set_DEFAULT_GUARD_3(Il2CppChar value)
	{
		___DEFAULT_GUARD_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CODABARWRITER_T1577690684_H
#ifndef CODE128READER_T3303398225_H
#define CODE128READER_T3303398225_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.OneD.Code128Reader
struct  Code128Reader_t3303398225  : public OneDReader_t2553842366
{
public:

public:
};

struct Code128Reader_t3303398225_StaticFields
{
public:
	// System.Int32[][] ZXing.OneD.Code128Reader::CODE_PATTERNS
	Int32U5BU5DU5BU5D_t1266570013* ___CODE_PATTERNS_2;
	// System.Int32 ZXing.OneD.Code128Reader::MAX_AVG_VARIANCE
	int32_t ___MAX_AVG_VARIANCE_3;
	// System.Int32 ZXing.OneD.Code128Reader::MAX_INDIVIDUAL_VARIANCE
	int32_t ___MAX_INDIVIDUAL_VARIANCE_4;

public:
	inline static int32_t get_offset_of_CODE_PATTERNS_2() { return static_cast<int32_t>(offsetof(Code128Reader_t3303398225_StaticFields, ___CODE_PATTERNS_2)); }
	inline Int32U5BU5DU5BU5D_t1266570013* get_CODE_PATTERNS_2() const { return ___CODE_PATTERNS_2; }
	inline Int32U5BU5DU5BU5D_t1266570013** get_address_of_CODE_PATTERNS_2() { return &___CODE_PATTERNS_2; }
	inline void set_CODE_PATTERNS_2(Int32U5BU5DU5BU5D_t1266570013* value)
	{
		___CODE_PATTERNS_2 = value;
		Il2CppCodeGenWriteBarrier((&___CODE_PATTERNS_2), value);
	}

	inline static int32_t get_offset_of_MAX_AVG_VARIANCE_3() { return static_cast<int32_t>(offsetof(Code128Reader_t3303398225_StaticFields, ___MAX_AVG_VARIANCE_3)); }
	inline int32_t get_MAX_AVG_VARIANCE_3() const { return ___MAX_AVG_VARIANCE_3; }
	inline int32_t* get_address_of_MAX_AVG_VARIANCE_3() { return &___MAX_AVG_VARIANCE_3; }
	inline void set_MAX_AVG_VARIANCE_3(int32_t value)
	{
		___MAX_AVG_VARIANCE_3 = value;
	}

	inline static int32_t get_offset_of_MAX_INDIVIDUAL_VARIANCE_4() { return static_cast<int32_t>(offsetof(Code128Reader_t3303398225_StaticFields, ___MAX_INDIVIDUAL_VARIANCE_4)); }
	inline int32_t get_MAX_INDIVIDUAL_VARIANCE_4() const { return ___MAX_INDIVIDUAL_VARIANCE_4; }
	inline int32_t* get_address_of_MAX_INDIVIDUAL_VARIANCE_4() { return &___MAX_INDIVIDUAL_VARIANCE_4; }
	inline void set_MAX_INDIVIDUAL_VARIANCE_4(int32_t value)
	{
		___MAX_INDIVIDUAL_VARIANCE_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CODE128READER_T3303398225_H
#ifndef CODE128WRITER_T2823049313_H
#define CODE128WRITER_T2823049313_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.OneD.Code128Writer
struct  Code128Writer_t2823049313  : public OneDimensionalCodeWriter_t608612180
{
public:
	// System.Boolean ZXing.OneD.Code128Writer::forceCodesetB
	bool ___forceCodesetB_0;

public:
	inline static int32_t get_offset_of_forceCodesetB_0() { return static_cast<int32_t>(offsetof(Code128Writer_t2823049313, ___forceCodesetB_0)); }
	inline bool get_forceCodesetB_0() const { return ___forceCodesetB_0; }
	inline bool* get_address_of_forceCodesetB_0() { return &___forceCodesetB_0; }
	inline void set_forceCodesetB_0(bool value)
	{
		___forceCodesetB_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CODE128WRITER_T2823049313_H
#ifndef CODE39READER_T4245898908_H
#define CODE39READER_T4245898908_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.OneD.Code39Reader
struct  Code39Reader_t4245898908  : public OneDReader_t2553842366
{
public:
	// System.Boolean ZXing.OneD.Code39Reader::usingCheckDigit
	bool ___usingCheckDigit_6;
	// System.Boolean ZXing.OneD.Code39Reader::extendedMode
	bool ___extendedMode_7;
	// System.Text.StringBuilder ZXing.OneD.Code39Reader::decodeRowResult
	StringBuilder_t3061408366 * ___decodeRowResult_8;
	// System.Int32[] ZXing.OneD.Code39Reader::counters
	Int32U5BU5D_t136769044* ___counters_9;

public:
	inline static int32_t get_offset_of_usingCheckDigit_6() { return static_cast<int32_t>(offsetof(Code39Reader_t4245898908, ___usingCheckDigit_6)); }
	inline bool get_usingCheckDigit_6() const { return ___usingCheckDigit_6; }
	inline bool* get_address_of_usingCheckDigit_6() { return &___usingCheckDigit_6; }
	inline void set_usingCheckDigit_6(bool value)
	{
		___usingCheckDigit_6 = value;
	}

	inline static int32_t get_offset_of_extendedMode_7() { return static_cast<int32_t>(offsetof(Code39Reader_t4245898908, ___extendedMode_7)); }
	inline bool get_extendedMode_7() const { return ___extendedMode_7; }
	inline bool* get_address_of_extendedMode_7() { return &___extendedMode_7; }
	inline void set_extendedMode_7(bool value)
	{
		___extendedMode_7 = value;
	}

	inline static int32_t get_offset_of_decodeRowResult_8() { return static_cast<int32_t>(offsetof(Code39Reader_t4245898908, ___decodeRowResult_8)); }
	inline StringBuilder_t3061408366 * get_decodeRowResult_8() const { return ___decodeRowResult_8; }
	inline StringBuilder_t3061408366 ** get_address_of_decodeRowResult_8() { return &___decodeRowResult_8; }
	inline void set_decodeRowResult_8(StringBuilder_t3061408366 * value)
	{
		___decodeRowResult_8 = value;
		Il2CppCodeGenWriteBarrier((&___decodeRowResult_8), value);
	}

	inline static int32_t get_offset_of_counters_9() { return static_cast<int32_t>(offsetof(Code39Reader_t4245898908, ___counters_9)); }
	inline Int32U5BU5D_t136769044* get_counters_9() const { return ___counters_9; }
	inline Int32U5BU5D_t136769044** get_address_of_counters_9() { return &___counters_9; }
	inline void set_counters_9(Int32U5BU5D_t136769044* value)
	{
		___counters_9 = value;
		Il2CppCodeGenWriteBarrier((&___counters_9), value);
	}
};

struct Code39Reader_t4245898908_StaticFields
{
public:
	// System.String ZXing.OneD.Code39Reader::ALPHABET_STRING
	String_t* ___ALPHABET_STRING_2;
	// System.String ZXing.OneD.Code39Reader::CHECK_DIGIT_STRING
	String_t* ___CHECK_DIGIT_STRING_3;
	// System.Int32[] ZXing.OneD.Code39Reader::CHARACTER_ENCODINGS
	Int32U5BU5D_t136769044* ___CHARACTER_ENCODINGS_4;
	// System.Int32 ZXing.OneD.Code39Reader::ASTERISK_ENCODING
	int32_t ___ASTERISK_ENCODING_5;

public:
	inline static int32_t get_offset_of_ALPHABET_STRING_2() { return static_cast<int32_t>(offsetof(Code39Reader_t4245898908_StaticFields, ___ALPHABET_STRING_2)); }
	inline String_t* get_ALPHABET_STRING_2() const { return ___ALPHABET_STRING_2; }
	inline String_t** get_address_of_ALPHABET_STRING_2() { return &___ALPHABET_STRING_2; }
	inline void set_ALPHABET_STRING_2(String_t* value)
	{
		___ALPHABET_STRING_2 = value;
		Il2CppCodeGenWriteBarrier((&___ALPHABET_STRING_2), value);
	}

	inline static int32_t get_offset_of_CHECK_DIGIT_STRING_3() { return static_cast<int32_t>(offsetof(Code39Reader_t4245898908_StaticFields, ___CHECK_DIGIT_STRING_3)); }
	inline String_t* get_CHECK_DIGIT_STRING_3() const { return ___CHECK_DIGIT_STRING_3; }
	inline String_t** get_address_of_CHECK_DIGIT_STRING_3() { return &___CHECK_DIGIT_STRING_3; }
	inline void set_CHECK_DIGIT_STRING_3(String_t* value)
	{
		___CHECK_DIGIT_STRING_3 = value;
		Il2CppCodeGenWriteBarrier((&___CHECK_DIGIT_STRING_3), value);
	}

	inline static int32_t get_offset_of_CHARACTER_ENCODINGS_4() { return static_cast<int32_t>(offsetof(Code39Reader_t4245898908_StaticFields, ___CHARACTER_ENCODINGS_4)); }
	inline Int32U5BU5D_t136769044* get_CHARACTER_ENCODINGS_4() const { return ___CHARACTER_ENCODINGS_4; }
	inline Int32U5BU5D_t136769044** get_address_of_CHARACTER_ENCODINGS_4() { return &___CHARACTER_ENCODINGS_4; }
	inline void set_CHARACTER_ENCODINGS_4(Int32U5BU5D_t136769044* value)
	{
		___CHARACTER_ENCODINGS_4 = value;
		Il2CppCodeGenWriteBarrier((&___CHARACTER_ENCODINGS_4), value);
	}

	inline static int32_t get_offset_of_ASTERISK_ENCODING_5() { return static_cast<int32_t>(offsetof(Code39Reader_t4245898908_StaticFields, ___ASTERISK_ENCODING_5)); }
	inline int32_t get_ASTERISK_ENCODING_5() const { return ___ASTERISK_ENCODING_5; }
	inline int32_t* get_address_of_ASTERISK_ENCODING_5() { return &___ASTERISK_ENCODING_5; }
	inline void set_ASTERISK_ENCODING_5(int32_t value)
	{
		___ASTERISK_ENCODING_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CODE39READER_T4245898908_H
#ifndef COLOR32_T2697248278_H
#define COLOR32_T2697248278_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color32
struct ALIGN_TYPE(4) Color32_t2697248278 
{
public:
	// System.Byte UnityEngine.Color32::r
	uint8_t ___r_0;
	// System.Byte UnityEngine.Color32::g
	uint8_t ___g_1;
	// System.Byte UnityEngine.Color32::b
	uint8_t ___b_2;
	// System.Byte UnityEngine.Color32::a
	uint8_t ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color32_t2697248278, ___r_0)); }
	inline uint8_t get_r_0() const { return ___r_0; }
	inline uint8_t* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(uint8_t value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color32_t2697248278, ___g_1)); }
	inline uint8_t get_g_1() const { return ___g_1; }
	inline uint8_t* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(uint8_t value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color32_t2697248278, ___b_2)); }
	inline uint8_t get_b_2() const { return ___b_2; }
	inline uint8_t* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(uint8_t value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color32_t2697248278, ___a_3)); }
	inline uint8_t get_a_3() const { return ___a_3; }
	inline uint8_t* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(uint8_t value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR32_T2697248278_H
#ifndef CODE93READER_T3212229472_H
#define CODE93READER_T3212229472_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.OneD.Code93Reader
struct  Code93Reader_t3212229472  : public OneDReader_t2553842366
{
public:
	// System.Text.StringBuilder ZXing.OneD.Code93Reader::decodeRowResult
	StringBuilder_t3061408366 * ___decodeRowResult_5;
	// System.Int32[] ZXing.OneD.Code93Reader::counters
	Int32U5BU5D_t136769044* ___counters_6;

public:
	inline static int32_t get_offset_of_decodeRowResult_5() { return static_cast<int32_t>(offsetof(Code93Reader_t3212229472, ___decodeRowResult_5)); }
	inline StringBuilder_t3061408366 * get_decodeRowResult_5() const { return ___decodeRowResult_5; }
	inline StringBuilder_t3061408366 ** get_address_of_decodeRowResult_5() { return &___decodeRowResult_5; }
	inline void set_decodeRowResult_5(StringBuilder_t3061408366 * value)
	{
		___decodeRowResult_5 = value;
		Il2CppCodeGenWriteBarrier((&___decodeRowResult_5), value);
	}

	inline static int32_t get_offset_of_counters_6() { return static_cast<int32_t>(offsetof(Code93Reader_t3212229472, ___counters_6)); }
	inline Int32U5BU5D_t136769044* get_counters_6() const { return ___counters_6; }
	inline Int32U5BU5D_t136769044** get_address_of_counters_6() { return &___counters_6; }
	inline void set_counters_6(Int32U5BU5D_t136769044* value)
	{
		___counters_6 = value;
		Il2CppCodeGenWriteBarrier((&___counters_6), value);
	}
};

struct Code93Reader_t3212229472_StaticFields
{
public:
	// System.Char[] ZXing.OneD.Code93Reader::ALPHABET
	CharU5BU5D_t2574930377* ___ALPHABET_2;
	// System.Int32[] ZXing.OneD.Code93Reader::CHARACTER_ENCODINGS
	Int32U5BU5D_t136769044* ___CHARACTER_ENCODINGS_3;
	// System.Int32 ZXing.OneD.Code93Reader::ASTERISK_ENCODING
	int32_t ___ASTERISK_ENCODING_4;

public:
	inline static int32_t get_offset_of_ALPHABET_2() { return static_cast<int32_t>(offsetof(Code93Reader_t3212229472_StaticFields, ___ALPHABET_2)); }
	inline CharU5BU5D_t2574930377* get_ALPHABET_2() const { return ___ALPHABET_2; }
	inline CharU5BU5D_t2574930377** get_address_of_ALPHABET_2() { return &___ALPHABET_2; }
	inline void set_ALPHABET_2(CharU5BU5D_t2574930377* value)
	{
		___ALPHABET_2 = value;
		Il2CppCodeGenWriteBarrier((&___ALPHABET_2), value);
	}

	inline static int32_t get_offset_of_CHARACTER_ENCODINGS_3() { return static_cast<int32_t>(offsetof(Code93Reader_t3212229472_StaticFields, ___CHARACTER_ENCODINGS_3)); }
	inline Int32U5BU5D_t136769044* get_CHARACTER_ENCODINGS_3() const { return ___CHARACTER_ENCODINGS_3; }
	inline Int32U5BU5D_t136769044** get_address_of_CHARACTER_ENCODINGS_3() { return &___CHARACTER_ENCODINGS_3; }
	inline void set_CHARACTER_ENCODINGS_3(Int32U5BU5D_t136769044* value)
	{
		___CHARACTER_ENCODINGS_3 = value;
		Il2CppCodeGenWriteBarrier((&___CHARACTER_ENCODINGS_3), value);
	}

	inline static int32_t get_offset_of_ASTERISK_ENCODING_4() { return static_cast<int32_t>(offsetof(Code93Reader_t3212229472_StaticFields, ___ASTERISK_ENCODING_4)); }
	inline int32_t get_ASTERISK_ENCODING_4() const { return ___ASTERISK_ENCODING_4; }
	inline int32_t* get_address_of_ASTERISK_ENCODING_4() { return &___ASTERISK_ENCODING_4; }
	inline void set_ASTERISK_ENCODING_4(int32_t value)
	{
		___ASTERISK_ENCODING_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CODE93READER_T3212229472_H
#ifndef CODE93WRITER_T1187519047_H
#define CODE93WRITER_T1187519047_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.OneD.Code93Writer
struct  Code93Writer_t1187519047  : public OneDimensionalCodeWriter_t608612180
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CODE93WRITER_T1187519047_H
#ifndef INVERTEDLUMINANCESOURCE_T2347246920_H
#define INVERTEDLUMINANCESOURCE_T2347246920_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.InvertedLuminanceSource
struct  InvertedLuminanceSource_t2347246920  : public LuminanceSource_t2042240187
{
public:
	// ZXing.LuminanceSource ZXing.InvertedLuminanceSource::delegate
	LuminanceSource_t2042240187 * ___delegate_2;
	// System.Byte[] ZXing.InvertedLuminanceSource::invertedMatrix
	ByteU5BU5D_t1607118512* ___invertedMatrix_3;

public:
	inline static int32_t get_offset_of_delegate_2() { return static_cast<int32_t>(offsetof(InvertedLuminanceSource_t2347246920, ___delegate_2)); }
	inline LuminanceSource_t2042240187 * get_delegate_2() const { return ___delegate_2; }
	inline LuminanceSource_t2042240187 ** get_address_of_delegate_2() { return &___delegate_2; }
	inline void set_delegate_2(LuminanceSource_t2042240187 * value)
	{
		___delegate_2 = value;
		Il2CppCodeGenWriteBarrier((&___delegate_2), value);
	}

	inline static int32_t get_offset_of_invertedMatrix_3() { return static_cast<int32_t>(offsetof(InvertedLuminanceSource_t2347246920, ___invertedMatrix_3)); }
	inline ByteU5BU5D_t1607118512* get_invertedMatrix_3() const { return ___invertedMatrix_3; }
	inline ByteU5BU5D_t1607118512** get_address_of_invertedMatrix_3() { return &___invertedMatrix_3; }
	inline void set_invertedMatrix_3(ByteU5BU5D_t1607118512* value)
	{
		___invertedMatrix_3 = value;
		Il2CppCodeGenWriteBarrier((&___invertedMatrix_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVERTEDLUMINANCESOURCE_T2347246920_H
#ifndef ENUM_T3476855409_H
#define ENUM_T3476855409_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t3476855409  : public ValueType_t2863467790
{
public:

public:
};

struct Enum_t3476855409_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t2574930377* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t3476855409_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t2574930377* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t2574930377** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t2574930377* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t3476855409_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t3476855409_marshaled_com
{
};
#endif // ENUM_T3476855409_H
#ifndef VOID_T2431537052_H
#define VOID_T2431537052_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t2431537052 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T2431537052_H
#ifndef BASELUMINANCESOURCE_T911162937_H
#define BASELUMINANCESOURCE_T911162937_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.BaseLuminanceSource
struct  BaseLuminanceSource_t911162937  : public LuminanceSource_t2042240187
{
public:
	// System.Byte[] ZXing.BaseLuminanceSource::luminances
	ByteU5BU5D_t1607118512* ___luminances_2;

public:
	inline static int32_t get_offset_of_luminances_2() { return static_cast<int32_t>(offsetof(BaseLuminanceSource_t911162937, ___luminances_2)); }
	inline ByteU5BU5D_t1607118512* get_luminances_2() const { return ___luminances_2; }
	inline ByteU5BU5D_t1607118512** get_address_of_luminances_2() { return &___luminances_2; }
	inline void set_luminances_2(ByteU5BU5D_t1607118512* value)
	{
		___luminances_2 = value;
		Il2CppCodeGenWriteBarrier((&___luminances_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASELUMINANCESOURCE_T911162937_H
#ifndef UPCEANREADER_T336890863_H
#define UPCEANREADER_T336890863_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.OneD.UPCEANReader
struct  UPCEANReader_t336890863  : public OneDReader_t2553842366
{
public:
	// System.Text.StringBuilder ZXing.OneD.UPCEANReader::decodeRowStringBuffer
	StringBuilder_t3061408366 * ___decodeRowStringBuffer_9;
	// ZXing.OneD.UPCEANExtensionSupport ZXing.OneD.UPCEANReader::extensionReader
	UPCEANExtensionSupport_t2355648450 * ___extensionReader_10;
	// ZXing.OneD.EANManufacturerOrgSupport ZXing.OneD.UPCEANReader::eanManSupport
	EANManufacturerOrgSupport_t1944510536 * ___eanManSupport_11;

public:
	inline static int32_t get_offset_of_decodeRowStringBuffer_9() { return static_cast<int32_t>(offsetof(UPCEANReader_t336890863, ___decodeRowStringBuffer_9)); }
	inline StringBuilder_t3061408366 * get_decodeRowStringBuffer_9() const { return ___decodeRowStringBuffer_9; }
	inline StringBuilder_t3061408366 ** get_address_of_decodeRowStringBuffer_9() { return &___decodeRowStringBuffer_9; }
	inline void set_decodeRowStringBuffer_9(StringBuilder_t3061408366 * value)
	{
		___decodeRowStringBuffer_9 = value;
		Il2CppCodeGenWriteBarrier((&___decodeRowStringBuffer_9), value);
	}

	inline static int32_t get_offset_of_extensionReader_10() { return static_cast<int32_t>(offsetof(UPCEANReader_t336890863, ___extensionReader_10)); }
	inline UPCEANExtensionSupport_t2355648450 * get_extensionReader_10() const { return ___extensionReader_10; }
	inline UPCEANExtensionSupport_t2355648450 ** get_address_of_extensionReader_10() { return &___extensionReader_10; }
	inline void set_extensionReader_10(UPCEANExtensionSupport_t2355648450 * value)
	{
		___extensionReader_10 = value;
		Il2CppCodeGenWriteBarrier((&___extensionReader_10), value);
	}

	inline static int32_t get_offset_of_eanManSupport_11() { return static_cast<int32_t>(offsetof(UPCEANReader_t336890863, ___eanManSupport_11)); }
	inline EANManufacturerOrgSupport_t1944510536 * get_eanManSupport_11() const { return ___eanManSupport_11; }
	inline EANManufacturerOrgSupport_t1944510536 ** get_address_of_eanManSupport_11() { return &___eanManSupport_11; }
	inline void set_eanManSupport_11(EANManufacturerOrgSupport_t1944510536 * value)
	{
		___eanManSupport_11 = value;
		Il2CppCodeGenWriteBarrier((&___eanManSupport_11), value);
	}
};

struct UPCEANReader_t336890863_StaticFields
{
public:
	// System.Int32 ZXing.OneD.UPCEANReader::MAX_AVG_VARIANCE
	int32_t ___MAX_AVG_VARIANCE_2;
	// System.Int32 ZXing.OneD.UPCEANReader::MAX_INDIVIDUAL_VARIANCE
	int32_t ___MAX_INDIVIDUAL_VARIANCE_3;
	// System.Int32[] ZXing.OneD.UPCEANReader::START_END_PATTERN
	Int32U5BU5D_t136769044* ___START_END_PATTERN_4;
	// System.Int32[] ZXing.OneD.UPCEANReader::MIDDLE_PATTERN
	Int32U5BU5D_t136769044* ___MIDDLE_PATTERN_5;
	// System.Int32[] ZXing.OneD.UPCEANReader::END_PATTERN
	Int32U5BU5D_t136769044* ___END_PATTERN_6;
	// System.Int32[][] ZXing.OneD.UPCEANReader::L_PATTERNS
	Int32U5BU5DU5BU5D_t1266570013* ___L_PATTERNS_7;
	// System.Int32[][] ZXing.OneD.UPCEANReader::L_AND_G_PATTERNS
	Int32U5BU5DU5BU5D_t1266570013* ___L_AND_G_PATTERNS_8;

public:
	inline static int32_t get_offset_of_MAX_AVG_VARIANCE_2() { return static_cast<int32_t>(offsetof(UPCEANReader_t336890863_StaticFields, ___MAX_AVG_VARIANCE_2)); }
	inline int32_t get_MAX_AVG_VARIANCE_2() const { return ___MAX_AVG_VARIANCE_2; }
	inline int32_t* get_address_of_MAX_AVG_VARIANCE_2() { return &___MAX_AVG_VARIANCE_2; }
	inline void set_MAX_AVG_VARIANCE_2(int32_t value)
	{
		___MAX_AVG_VARIANCE_2 = value;
	}

	inline static int32_t get_offset_of_MAX_INDIVIDUAL_VARIANCE_3() { return static_cast<int32_t>(offsetof(UPCEANReader_t336890863_StaticFields, ___MAX_INDIVIDUAL_VARIANCE_3)); }
	inline int32_t get_MAX_INDIVIDUAL_VARIANCE_3() const { return ___MAX_INDIVIDUAL_VARIANCE_3; }
	inline int32_t* get_address_of_MAX_INDIVIDUAL_VARIANCE_3() { return &___MAX_INDIVIDUAL_VARIANCE_3; }
	inline void set_MAX_INDIVIDUAL_VARIANCE_3(int32_t value)
	{
		___MAX_INDIVIDUAL_VARIANCE_3 = value;
	}

	inline static int32_t get_offset_of_START_END_PATTERN_4() { return static_cast<int32_t>(offsetof(UPCEANReader_t336890863_StaticFields, ___START_END_PATTERN_4)); }
	inline Int32U5BU5D_t136769044* get_START_END_PATTERN_4() const { return ___START_END_PATTERN_4; }
	inline Int32U5BU5D_t136769044** get_address_of_START_END_PATTERN_4() { return &___START_END_PATTERN_4; }
	inline void set_START_END_PATTERN_4(Int32U5BU5D_t136769044* value)
	{
		___START_END_PATTERN_4 = value;
		Il2CppCodeGenWriteBarrier((&___START_END_PATTERN_4), value);
	}

	inline static int32_t get_offset_of_MIDDLE_PATTERN_5() { return static_cast<int32_t>(offsetof(UPCEANReader_t336890863_StaticFields, ___MIDDLE_PATTERN_5)); }
	inline Int32U5BU5D_t136769044* get_MIDDLE_PATTERN_5() const { return ___MIDDLE_PATTERN_5; }
	inline Int32U5BU5D_t136769044** get_address_of_MIDDLE_PATTERN_5() { return &___MIDDLE_PATTERN_5; }
	inline void set_MIDDLE_PATTERN_5(Int32U5BU5D_t136769044* value)
	{
		___MIDDLE_PATTERN_5 = value;
		Il2CppCodeGenWriteBarrier((&___MIDDLE_PATTERN_5), value);
	}

	inline static int32_t get_offset_of_END_PATTERN_6() { return static_cast<int32_t>(offsetof(UPCEANReader_t336890863_StaticFields, ___END_PATTERN_6)); }
	inline Int32U5BU5D_t136769044* get_END_PATTERN_6() const { return ___END_PATTERN_6; }
	inline Int32U5BU5D_t136769044** get_address_of_END_PATTERN_6() { return &___END_PATTERN_6; }
	inline void set_END_PATTERN_6(Int32U5BU5D_t136769044* value)
	{
		___END_PATTERN_6 = value;
		Il2CppCodeGenWriteBarrier((&___END_PATTERN_6), value);
	}

	inline static int32_t get_offset_of_L_PATTERNS_7() { return static_cast<int32_t>(offsetof(UPCEANReader_t336890863_StaticFields, ___L_PATTERNS_7)); }
	inline Int32U5BU5DU5BU5D_t1266570013* get_L_PATTERNS_7() const { return ___L_PATTERNS_7; }
	inline Int32U5BU5DU5BU5D_t1266570013** get_address_of_L_PATTERNS_7() { return &___L_PATTERNS_7; }
	inline void set_L_PATTERNS_7(Int32U5BU5DU5BU5D_t1266570013* value)
	{
		___L_PATTERNS_7 = value;
		Il2CppCodeGenWriteBarrier((&___L_PATTERNS_7), value);
	}

	inline static int32_t get_offset_of_L_AND_G_PATTERNS_8() { return static_cast<int32_t>(offsetof(UPCEANReader_t336890863_StaticFields, ___L_AND_G_PATTERNS_8)); }
	inline Int32U5BU5DU5BU5D_t1266570013* get_L_AND_G_PATTERNS_8() const { return ___L_AND_G_PATTERNS_8; }
	inline Int32U5BU5DU5BU5D_t1266570013** get_address_of_L_AND_G_PATTERNS_8() { return &___L_AND_G_PATTERNS_8; }
	inline void set_L_AND_G_PATTERNS_8(Int32U5BU5DU5BU5D_t1266570013* value)
	{
		___L_AND_G_PATTERNS_8 = value;
		Il2CppCodeGenWriteBarrier((&___L_AND_G_PATTERNS_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPCEANREADER_T336890863_H
#ifndef UPCEANWRITER_T766505987_H
#define UPCEANWRITER_T766505987_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.OneD.UPCEANWriter
struct  UPCEANWriter_t766505987  : public OneDimensionalCodeWriter_t608612180
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPCEANWRITER_T766505987_H
#ifndef CODE39WRITER_T748262797_H
#define CODE39WRITER_T748262797_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.OneD.Code39Writer
struct  Code39Writer_t748262797  : public OneDimensionalCodeWriter_t608612180
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CODE39WRITER_T748262797_H
#ifndef ALIGNMENTPATTERN_T3079876063_H
#define ALIGNMENTPATTERN_T3079876063_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.QrCode.Internal.AlignmentPattern
struct  AlignmentPattern_t3079876063  : public ResultPoint_t3813591718
{
public:
	// System.Single ZXing.QrCode.Internal.AlignmentPattern::estimatedModuleSize
	float ___estimatedModuleSize_5;

public:
	inline static int32_t get_offset_of_estimatedModuleSize_5() { return static_cast<int32_t>(offsetof(AlignmentPattern_t3079876063, ___estimatedModuleSize_5)); }
	inline float get_estimatedModuleSize_5() const { return ___estimatedModuleSize_5; }
	inline float* get_address_of_estimatedModuleSize_5() { return &___estimatedModuleSize_5; }
	inline void set_estimatedModuleSize_5(float value)
	{
		___estimatedModuleSize_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ALIGNMENTPATTERN_T3079876063_H
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
#ifndef READEREXCEPTION_T2949524431_H
#define READEREXCEPTION_T2949524431_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.ReaderException
struct  ReaderException_t2949524431  : public Exception_t3812617360
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READEREXCEPTION_T2949524431_H
#ifndef FINDERPATTERN_T3349282791_H
#define FINDERPATTERN_T3349282791_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.QrCode.Internal.FinderPattern
struct  FinderPattern_t3349282791  : public ResultPoint_t3813591718
{
public:
	// System.Single ZXing.QrCode.Internal.FinderPattern::estimatedModuleSize
	float ___estimatedModuleSize_5;
	// System.Int32 ZXing.QrCode.Internal.FinderPattern::count
	int32_t ___count_6;

public:
	inline static int32_t get_offset_of_estimatedModuleSize_5() { return static_cast<int32_t>(offsetof(FinderPattern_t3349282791, ___estimatedModuleSize_5)); }
	inline float get_estimatedModuleSize_5() const { return ___estimatedModuleSize_5; }
	inline float* get_address_of_estimatedModuleSize_5() { return &___estimatedModuleSize_5; }
	inline void set_estimatedModuleSize_5(float value)
	{
		___estimatedModuleSize_5 = value;
	}

	inline static int32_t get_offset_of_count_6() { return static_cast<int32_t>(offsetof(FinderPattern_t3349282791, ___count_6)); }
	inline int32_t get_count_6() const { return ___count_6; }
	inline int32_t* get_address_of_count_6() { return &___count_6; }
	inline void set_count_6(int32_t value)
	{
		___count_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FINDERPATTERN_T3349282791_H
#ifndef QRCODEENCODINGOPTIONS_T576972725_H
#define QRCODEENCODINGOPTIONS_T576972725_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.QrCode.QrCodeEncodingOptions
struct  QrCodeEncodingOptions_t576972725  : public EncodingOptions_t2933126615
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QRCODEENCODINGOPTIONS_T576972725_H
#ifndef WRITEREXCEPTION_T430112784_H
#define WRITEREXCEPTION_T430112784_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.WriterException
struct  WriterException_t430112784  : public Exception_t3812617360
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WRITEREXCEPTION_T430112784_H
#ifndef DETECTIONRESULTROWINDICATORCOLUMN_T2481359888_H
#define DETECTIONRESULTROWINDICATORCOLUMN_T2481359888_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.PDF417.Internal.DetectionResultRowIndicatorColumn
struct  DetectionResultRowIndicatorColumn_t2481359888  : public DetectionResultColumn_t2826712376
{
public:
	// System.Boolean ZXing.PDF417.Internal.DetectionResultRowIndicatorColumn::<IsLeft>k__BackingField
	bool ___U3CIsLeftU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CIsLeftU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(DetectionResultRowIndicatorColumn_t2481359888, ___U3CIsLeftU3Ek__BackingField_2)); }
	inline bool get_U3CIsLeftU3Ek__BackingField_2() const { return ___U3CIsLeftU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CIsLeftU3Ek__BackingField_2() { return &___U3CIsLeftU3Ek__BackingField_2; }
	inline void set_U3CIsLeftU3Ek__BackingField_2(bool value)
	{
		___U3CIsLeftU3Ek__BackingField_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DETECTIONRESULTROWINDICATORCOLUMN_T2481359888_H
#ifndef NAMES_T794671462_H
#define NAMES_T794671462_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.QrCode.Internal.Mode/Names
struct  Names_t794671462 
{
public:
	// System.Int32 ZXing.QrCode.Internal.Mode/Names::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Names_t794671462, ___value___1)); }
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
#endif // NAMES_T794671462_H
#ifndef DECODEHINTTYPE_T1734661694_H
#define DECODEHINTTYPE_T1734661694_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.DecodeHintType
struct  DecodeHintType_t1734661694 
{
public:
	// System.Int32 ZXing.DecodeHintType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DecodeHintType_t1734661694, ___value___1)); }
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
#endif // DECODEHINTTYPE_T1734661694_H
#ifndef DELEGATE_T2970319910_H
#define DELEGATE_T2970319910_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t2970319910  : public RuntimeObject
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
	DelegateData_t756507748 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t2970319910, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t2970319910, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t2970319910, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t2970319910, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t2970319910, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t2970319910, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t2970319910, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t2970319910, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t2970319910, ___data_8)); }
	inline DelegateData_t756507748 * get_data_8() const { return ___data_8; }
	inline DelegateData_t756507748 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t756507748 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T2970319910_H
#ifndef ENCODEHINTTYPE_T1478437162_H
#define ENCODEHINTTYPE_T1478437162_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.EncodeHintType
struct  EncodeHintType_t1478437162 
{
public:
	// System.Int32 ZXing.EncodeHintType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(EncodeHintType_t1478437162, ___value___1)); }
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
#endif // ENCODEHINTTYPE_T1478437162_H
#ifndef MODE_T4186487791_H
#define MODE_T4186487791_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.PDF417.Internal.DecodedBitStreamParser/Mode
struct  Mode_t4186487791 
{
public:
	// System.Int32 ZXing.PDF417.Internal.DecodedBitStreamParser/Mode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Mode_t4186487791, ___value___1)); }
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
#endif // MODE_T4186487791_H
#ifndef BARCODEFORMAT_T3128598156_H
#define BARCODEFORMAT_T3128598156_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.BarcodeFormat
struct  BarcodeFormat_t3128598156 
{
public:
	// System.Int32 ZXing.BarcodeFormat::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BarcodeFormat_t3128598156, ___value___1)); }
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
#endif // BARCODEFORMAT_T3128598156_H
#ifndef PDF417ERRORCORRECTIONLEVEL_T4041436469_H
#define PDF417ERRORCORRECTIONLEVEL_T4041436469_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.PDF417.Internal.PDF417ErrorCorrectionLevel
struct  PDF417ErrorCorrectionLevel_t4041436469 
{
public:
	// System.Int32 ZXing.PDF417.Internal.PDF417ErrorCorrectionLevel::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PDF417ErrorCorrectionLevel_t4041436469, ___value___1)); }
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
#endif // PDF417ERRORCORRECTIONLEVEL_T4041436469_H
#ifndef FORMATEXCEPTION_T3991110888_H
#define FORMATEXCEPTION_T3991110888_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.FormatException
struct  FormatException_t3991110888  : public ReaderException_t2949524431
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORMATEXCEPTION_T3991110888_H
#ifndef COLOR32LUMINANCESOURCE_T4094897066_H
#define COLOR32LUMINANCESOURCE_T4094897066_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.Color32LuminanceSource
struct  Color32LuminanceSource_t4094897066  : public BaseLuminanceSource_t911162937
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR32LUMINANCESOURCE_T4094897066_H
#ifndef EAN13WRITER_T2862835090_H
#define EAN13WRITER_T2862835090_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.OneD.EAN13Writer
struct  EAN13Writer_t2862835090  : public UPCEANWriter_t766505987
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EAN13WRITER_T2862835090_H
#ifndef EAN13READER_T1379808021_H
#define EAN13READER_T1379808021_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.OneD.EAN13Reader
struct  EAN13Reader_t1379808021  : public UPCEANReader_t336890863
{
public:
	// System.Int32[] ZXing.OneD.EAN13Reader::decodeMiddleCounters
	Int32U5BU5D_t136769044* ___decodeMiddleCounters_13;

public:
	inline static int32_t get_offset_of_decodeMiddleCounters_13() { return static_cast<int32_t>(offsetof(EAN13Reader_t1379808021, ___decodeMiddleCounters_13)); }
	inline Int32U5BU5D_t136769044* get_decodeMiddleCounters_13() const { return ___decodeMiddleCounters_13; }
	inline Int32U5BU5D_t136769044** get_address_of_decodeMiddleCounters_13() { return &___decodeMiddleCounters_13; }
	inline void set_decodeMiddleCounters_13(Int32U5BU5D_t136769044* value)
	{
		___decodeMiddleCounters_13 = value;
		Il2CppCodeGenWriteBarrier((&___decodeMiddleCounters_13), value);
	}
};

struct EAN13Reader_t1379808021_StaticFields
{
public:
	// System.Int32[] ZXing.OneD.EAN13Reader::FIRST_DIGIT_ENCODINGS
	Int32U5BU5D_t136769044* ___FIRST_DIGIT_ENCODINGS_12;

public:
	inline static int32_t get_offset_of_FIRST_DIGIT_ENCODINGS_12() { return static_cast<int32_t>(offsetof(EAN13Reader_t1379808021_StaticFields, ___FIRST_DIGIT_ENCODINGS_12)); }
	inline Int32U5BU5D_t136769044* get_FIRST_DIGIT_ENCODINGS_12() const { return ___FIRST_DIGIT_ENCODINGS_12; }
	inline Int32U5BU5D_t136769044** get_address_of_FIRST_DIGIT_ENCODINGS_12() { return &___FIRST_DIGIT_ENCODINGS_12; }
	inline void set_FIRST_DIGIT_ENCODINGS_12(Int32U5BU5D_t136769044* value)
	{
		___FIRST_DIGIT_ENCODINGS_12 = value;
		Il2CppCodeGenWriteBarrier((&___FIRST_DIGIT_ENCODINGS_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EAN13READER_T1379808021_H
#ifndef BITMAPFORMAT_T1067293617_H
#define BITMAPFORMAT_T1067293617_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.RGBLuminanceSource/BitmapFormat
struct  BitmapFormat_t1067293617 
{
public:
	// System.Int32 ZXing.RGBLuminanceSource/BitmapFormat::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BitmapFormat_t1067293617, ___value___1)); }
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
#endif // BITMAPFORMAT_T1067293617_H
#ifndef RGBLUMINANCESOURCE_T1351274301_H
#define RGBLUMINANCESOURCE_T1351274301_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.RGBLuminanceSource
struct  RGBLuminanceSource_t1351274301  : public BaseLuminanceSource_t911162937
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RGBLUMINANCESOURCE_T1351274301_H
#ifndef CTYPE_T878203540_H
#define CTYPE_T878203540_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.OneD.Code128Writer/CType
struct  CType_t878203540 
{
public:
	// System.Int32 ZXing.OneD.Code128Writer/CType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CType_t878203540, ___value___1)); }
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
#endif // CTYPE_T878203540_H
#ifndef RESULTMETADATATYPE_T1253489238_H
#define RESULTMETADATATYPE_T1253489238_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.ResultMetadataType
struct  ResultMetadataType_t1253489238 
{
public:
	// System.Int32 ZXing.ResultMetadataType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ResultMetadataType_t1253489238, ___value___1)); }
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
#endif // RESULTMETADATATYPE_T1253489238_H
#ifndef COMPACTION_T3837195300_H
#define COMPACTION_T3837195300_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.PDF417.Internal.Compaction
struct  Compaction_t3837195300 
{
public:
	// System.Int32 ZXing.PDF417.Internal.Compaction::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Compaction_t3837195300, ___value___1)); }
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
#endif // COMPACTION_T3837195300_H
#ifndef COLOR32RENDERER_T2252708944_H
#define COLOR32RENDERER_T2252708944_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.Color32Renderer
struct  Color32Renderer_t2252708944  : public RuntimeObject
{
public:
	// UnityEngine.Color32 ZXing.Color32Renderer::<Foreground>k__BackingField
	Color32_t2697248278  ___U3CForegroundU3Ek__BackingField_0;
	// UnityEngine.Color32 ZXing.Color32Renderer::<Background>k__BackingField
	Color32_t2697248278  ___U3CBackgroundU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CForegroundU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Color32Renderer_t2252708944, ___U3CForegroundU3Ek__BackingField_0)); }
	inline Color32_t2697248278  get_U3CForegroundU3Ek__BackingField_0() const { return ___U3CForegroundU3Ek__BackingField_0; }
	inline Color32_t2697248278 * get_address_of_U3CForegroundU3Ek__BackingField_0() { return &___U3CForegroundU3Ek__BackingField_0; }
	inline void set_U3CForegroundU3Ek__BackingField_0(Color32_t2697248278  value)
	{
		___U3CForegroundU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CBackgroundU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Color32Renderer_t2252708944, ___U3CBackgroundU3Ek__BackingField_1)); }
	inline Color32_t2697248278  get_U3CBackgroundU3Ek__BackingField_1() const { return ___U3CBackgroundU3Ek__BackingField_1; }
	inline Color32_t2697248278 * get_address_of_U3CBackgroundU3Ek__BackingField_1() { return &___U3CBackgroundU3Ek__BackingField_1; }
	inline void set_U3CBackgroundU3Ek__BackingField_1(Color32_t2697248278  value)
	{
		___U3CBackgroundU3Ek__BackingField_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR32RENDERER_T2252708944_H
#ifndef MULTICASTDELEGATE_T3728249437_H
#define MULTICASTDELEGATE_T3728249437_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t3728249437  : public Delegate_t2970319910
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t3728249437 * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t3728249437 * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t3728249437, ___prev_9)); }
	inline MulticastDelegate_t3728249437 * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t3728249437 ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t3728249437 * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t3728249437, ___kpm_next_10)); }
	inline MulticastDelegate_t3728249437 * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t3728249437 ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t3728249437 * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T3728249437_H
#ifndef MODE_T2627952440_H
#define MODE_T2627952440_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.QrCode.Internal.Mode
struct  Mode_t2627952440  : public RuntimeObject
{
public:
	// ZXing.QrCode.Internal.Mode/Names ZXing.QrCode.Internal.Mode::<Name>k__BackingField
	int32_t ___U3CNameU3Ek__BackingField_0;
	// System.Int32[] ZXing.QrCode.Internal.Mode::characterCountBitsForVersions
	Int32U5BU5D_t136769044* ___characterCountBitsForVersions_11;
	// System.Int32 ZXing.QrCode.Internal.Mode::<Bits>k__BackingField
	int32_t ___U3CBitsU3Ek__BackingField_12;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Mode_t2627952440, ___U3CNameU3Ek__BackingField_0)); }
	inline int32_t get_U3CNameU3Ek__BackingField_0() const { return ___U3CNameU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CNameU3Ek__BackingField_0() { return &___U3CNameU3Ek__BackingField_0; }
	inline void set_U3CNameU3Ek__BackingField_0(int32_t value)
	{
		___U3CNameU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_characterCountBitsForVersions_11() { return static_cast<int32_t>(offsetof(Mode_t2627952440, ___characterCountBitsForVersions_11)); }
	inline Int32U5BU5D_t136769044* get_characterCountBitsForVersions_11() const { return ___characterCountBitsForVersions_11; }
	inline Int32U5BU5D_t136769044** get_address_of_characterCountBitsForVersions_11() { return &___characterCountBitsForVersions_11; }
	inline void set_characterCountBitsForVersions_11(Int32U5BU5D_t136769044* value)
	{
		___characterCountBitsForVersions_11 = value;
		Il2CppCodeGenWriteBarrier((&___characterCountBitsForVersions_11), value);
	}

	inline static int32_t get_offset_of_U3CBitsU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(Mode_t2627952440, ___U3CBitsU3Ek__BackingField_12)); }
	inline int32_t get_U3CBitsU3Ek__BackingField_12() const { return ___U3CBitsU3Ek__BackingField_12; }
	inline int32_t* get_address_of_U3CBitsU3Ek__BackingField_12() { return &___U3CBitsU3Ek__BackingField_12; }
	inline void set_U3CBitsU3Ek__BackingField_12(int32_t value)
	{
		___U3CBitsU3Ek__BackingField_12 = value;
	}
};

struct Mode_t2627952440_StaticFields
{
public:
	// ZXing.QrCode.Internal.Mode ZXing.QrCode.Internal.Mode::TERMINATOR
	Mode_t2627952440 * ___TERMINATOR_1;
	// ZXing.QrCode.Internal.Mode ZXing.QrCode.Internal.Mode::NUMERIC
	Mode_t2627952440 * ___NUMERIC_2;
	// ZXing.QrCode.Internal.Mode ZXing.QrCode.Internal.Mode::ALPHANUMERIC
	Mode_t2627952440 * ___ALPHANUMERIC_3;
	// ZXing.QrCode.Internal.Mode ZXing.QrCode.Internal.Mode::STRUCTURED_APPEND
	Mode_t2627952440 * ___STRUCTURED_APPEND_4;
	// ZXing.QrCode.Internal.Mode ZXing.QrCode.Internal.Mode::BYTE
	Mode_t2627952440 * ___BYTE_5;
	// ZXing.QrCode.Internal.Mode ZXing.QrCode.Internal.Mode::ECI
	Mode_t2627952440 * ___ECI_6;
	// ZXing.QrCode.Internal.Mode ZXing.QrCode.Internal.Mode::KANJI
	Mode_t2627952440 * ___KANJI_7;
	// ZXing.QrCode.Internal.Mode ZXing.QrCode.Internal.Mode::FNC1_FIRST_POSITION
	Mode_t2627952440 * ___FNC1_FIRST_POSITION_8;
	// ZXing.QrCode.Internal.Mode ZXing.QrCode.Internal.Mode::FNC1_SECOND_POSITION
	Mode_t2627952440 * ___FNC1_SECOND_POSITION_9;
	// ZXing.QrCode.Internal.Mode ZXing.QrCode.Internal.Mode::HANZI
	Mode_t2627952440 * ___HANZI_10;

public:
	inline static int32_t get_offset_of_TERMINATOR_1() { return static_cast<int32_t>(offsetof(Mode_t2627952440_StaticFields, ___TERMINATOR_1)); }
	inline Mode_t2627952440 * get_TERMINATOR_1() const { return ___TERMINATOR_1; }
	inline Mode_t2627952440 ** get_address_of_TERMINATOR_1() { return &___TERMINATOR_1; }
	inline void set_TERMINATOR_1(Mode_t2627952440 * value)
	{
		___TERMINATOR_1 = value;
		Il2CppCodeGenWriteBarrier((&___TERMINATOR_1), value);
	}

	inline static int32_t get_offset_of_NUMERIC_2() { return static_cast<int32_t>(offsetof(Mode_t2627952440_StaticFields, ___NUMERIC_2)); }
	inline Mode_t2627952440 * get_NUMERIC_2() const { return ___NUMERIC_2; }
	inline Mode_t2627952440 ** get_address_of_NUMERIC_2() { return &___NUMERIC_2; }
	inline void set_NUMERIC_2(Mode_t2627952440 * value)
	{
		___NUMERIC_2 = value;
		Il2CppCodeGenWriteBarrier((&___NUMERIC_2), value);
	}

	inline static int32_t get_offset_of_ALPHANUMERIC_3() { return static_cast<int32_t>(offsetof(Mode_t2627952440_StaticFields, ___ALPHANUMERIC_3)); }
	inline Mode_t2627952440 * get_ALPHANUMERIC_3() const { return ___ALPHANUMERIC_3; }
	inline Mode_t2627952440 ** get_address_of_ALPHANUMERIC_3() { return &___ALPHANUMERIC_3; }
	inline void set_ALPHANUMERIC_3(Mode_t2627952440 * value)
	{
		___ALPHANUMERIC_3 = value;
		Il2CppCodeGenWriteBarrier((&___ALPHANUMERIC_3), value);
	}

	inline static int32_t get_offset_of_STRUCTURED_APPEND_4() { return static_cast<int32_t>(offsetof(Mode_t2627952440_StaticFields, ___STRUCTURED_APPEND_4)); }
	inline Mode_t2627952440 * get_STRUCTURED_APPEND_4() const { return ___STRUCTURED_APPEND_4; }
	inline Mode_t2627952440 ** get_address_of_STRUCTURED_APPEND_4() { return &___STRUCTURED_APPEND_4; }
	inline void set_STRUCTURED_APPEND_4(Mode_t2627952440 * value)
	{
		___STRUCTURED_APPEND_4 = value;
		Il2CppCodeGenWriteBarrier((&___STRUCTURED_APPEND_4), value);
	}

	inline static int32_t get_offset_of_BYTE_5() { return static_cast<int32_t>(offsetof(Mode_t2627952440_StaticFields, ___BYTE_5)); }
	inline Mode_t2627952440 * get_BYTE_5() const { return ___BYTE_5; }
	inline Mode_t2627952440 ** get_address_of_BYTE_5() { return &___BYTE_5; }
	inline void set_BYTE_5(Mode_t2627952440 * value)
	{
		___BYTE_5 = value;
		Il2CppCodeGenWriteBarrier((&___BYTE_5), value);
	}

	inline static int32_t get_offset_of_ECI_6() { return static_cast<int32_t>(offsetof(Mode_t2627952440_StaticFields, ___ECI_6)); }
	inline Mode_t2627952440 * get_ECI_6() const { return ___ECI_6; }
	inline Mode_t2627952440 ** get_address_of_ECI_6() { return &___ECI_6; }
	inline void set_ECI_6(Mode_t2627952440 * value)
	{
		___ECI_6 = value;
		Il2CppCodeGenWriteBarrier((&___ECI_6), value);
	}

	inline static int32_t get_offset_of_KANJI_7() { return static_cast<int32_t>(offsetof(Mode_t2627952440_StaticFields, ___KANJI_7)); }
	inline Mode_t2627952440 * get_KANJI_7() const { return ___KANJI_7; }
	inline Mode_t2627952440 ** get_address_of_KANJI_7() { return &___KANJI_7; }
	inline void set_KANJI_7(Mode_t2627952440 * value)
	{
		___KANJI_7 = value;
		Il2CppCodeGenWriteBarrier((&___KANJI_7), value);
	}

	inline static int32_t get_offset_of_FNC1_FIRST_POSITION_8() { return static_cast<int32_t>(offsetof(Mode_t2627952440_StaticFields, ___FNC1_FIRST_POSITION_8)); }
	inline Mode_t2627952440 * get_FNC1_FIRST_POSITION_8() const { return ___FNC1_FIRST_POSITION_8; }
	inline Mode_t2627952440 ** get_address_of_FNC1_FIRST_POSITION_8() { return &___FNC1_FIRST_POSITION_8; }
	inline void set_FNC1_FIRST_POSITION_8(Mode_t2627952440 * value)
	{
		___FNC1_FIRST_POSITION_8 = value;
		Il2CppCodeGenWriteBarrier((&___FNC1_FIRST_POSITION_8), value);
	}

	inline static int32_t get_offset_of_FNC1_SECOND_POSITION_9() { return static_cast<int32_t>(offsetof(Mode_t2627952440_StaticFields, ___FNC1_SECOND_POSITION_9)); }
	inline Mode_t2627952440 * get_FNC1_SECOND_POSITION_9() const { return ___FNC1_SECOND_POSITION_9; }
	inline Mode_t2627952440 ** get_address_of_FNC1_SECOND_POSITION_9() { return &___FNC1_SECOND_POSITION_9; }
	inline void set_FNC1_SECOND_POSITION_9(Mode_t2627952440 * value)
	{
		___FNC1_SECOND_POSITION_9 = value;
		Il2CppCodeGenWriteBarrier((&___FNC1_SECOND_POSITION_9), value);
	}

	inline static int32_t get_offset_of_HANZI_10() { return static_cast<int32_t>(offsetof(Mode_t2627952440_StaticFields, ___HANZI_10)); }
	inline Mode_t2627952440 * get_HANZI_10() const { return ___HANZI_10; }
	inline Mode_t2627952440 ** get_address_of_HANZI_10() { return &___HANZI_10; }
	inline void set_HANZI_10(Mode_t2627952440 * value)
	{
		___HANZI_10 = value;
		Il2CppCodeGenWriteBarrier((&___HANZI_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODE_T2627952440_H
#ifndef RESULT_T4248438247_H
#define RESULT_T4248438247_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.Result
struct  Result_t4248438247  : public RuntimeObject
{
public:
	// System.String ZXing.Result::<Text>k__BackingField
	String_t* ___U3CTextU3Ek__BackingField_0;
	// System.Byte[] ZXing.Result::<RawBytes>k__BackingField
	ByteU5BU5D_t1607118512* ___U3CRawBytesU3Ek__BackingField_1;
	// ZXing.ResultPoint[] ZXing.Result::<ResultPoints>k__BackingField
	ResultPointU5BU5D_t1589667843* ___U3CResultPointsU3Ek__BackingField_2;
	// ZXing.BarcodeFormat ZXing.Result::<BarcodeFormat>k__BackingField
	int32_t ___U3CBarcodeFormatU3Ek__BackingField_3;
	// System.Collections.Generic.IDictionary`2<ZXing.ResultMetadataType,System.Object> ZXing.Result::<ResultMetadata>k__BackingField
	RuntimeObject* ___U3CResultMetadataU3Ek__BackingField_4;
	// System.Int64 ZXing.Result::<Timestamp>k__BackingField
	int64_t ___U3CTimestampU3Ek__BackingField_5;
	// System.Int32 ZXing.Result::<NumBits>k__BackingField
	int32_t ___U3CNumBitsU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CTextU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Result_t4248438247, ___U3CTextU3Ek__BackingField_0)); }
	inline String_t* get_U3CTextU3Ek__BackingField_0() const { return ___U3CTextU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CTextU3Ek__BackingField_0() { return &___U3CTextU3Ek__BackingField_0; }
	inline void set_U3CTextU3Ek__BackingField_0(String_t* value)
	{
		___U3CTextU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTextU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CRawBytesU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Result_t4248438247, ___U3CRawBytesU3Ek__BackingField_1)); }
	inline ByteU5BU5D_t1607118512* get_U3CRawBytesU3Ek__BackingField_1() const { return ___U3CRawBytesU3Ek__BackingField_1; }
	inline ByteU5BU5D_t1607118512** get_address_of_U3CRawBytesU3Ek__BackingField_1() { return &___U3CRawBytesU3Ek__BackingField_1; }
	inline void set_U3CRawBytesU3Ek__BackingField_1(ByteU5BU5D_t1607118512* value)
	{
		___U3CRawBytesU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CRawBytesU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CResultPointsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Result_t4248438247, ___U3CResultPointsU3Ek__BackingField_2)); }
	inline ResultPointU5BU5D_t1589667843* get_U3CResultPointsU3Ek__BackingField_2() const { return ___U3CResultPointsU3Ek__BackingField_2; }
	inline ResultPointU5BU5D_t1589667843** get_address_of_U3CResultPointsU3Ek__BackingField_2() { return &___U3CResultPointsU3Ek__BackingField_2; }
	inline void set_U3CResultPointsU3Ek__BackingField_2(ResultPointU5BU5D_t1589667843* value)
	{
		___U3CResultPointsU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CResultPointsU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CBarcodeFormatU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Result_t4248438247, ___U3CBarcodeFormatU3Ek__BackingField_3)); }
	inline int32_t get_U3CBarcodeFormatU3Ek__BackingField_3() const { return ___U3CBarcodeFormatU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CBarcodeFormatU3Ek__BackingField_3() { return &___U3CBarcodeFormatU3Ek__BackingField_3; }
	inline void set_U3CBarcodeFormatU3Ek__BackingField_3(int32_t value)
	{
		___U3CBarcodeFormatU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CResultMetadataU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Result_t4248438247, ___U3CResultMetadataU3Ek__BackingField_4)); }
	inline RuntimeObject* get_U3CResultMetadataU3Ek__BackingField_4() const { return ___U3CResultMetadataU3Ek__BackingField_4; }
	inline RuntimeObject** get_address_of_U3CResultMetadataU3Ek__BackingField_4() { return &___U3CResultMetadataU3Ek__BackingField_4; }
	inline void set_U3CResultMetadataU3Ek__BackingField_4(RuntimeObject* value)
	{
		___U3CResultMetadataU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CResultMetadataU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_U3CTimestampU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Result_t4248438247, ___U3CTimestampU3Ek__BackingField_5)); }
	inline int64_t get_U3CTimestampU3Ek__BackingField_5() const { return ___U3CTimestampU3Ek__BackingField_5; }
	inline int64_t* get_address_of_U3CTimestampU3Ek__BackingField_5() { return &___U3CTimestampU3Ek__BackingField_5; }
	inline void set_U3CTimestampU3Ek__BackingField_5(int64_t value)
	{
		___U3CTimestampU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CNumBitsU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(Result_t4248438247, ___U3CNumBitsU3Ek__BackingField_6)); }
	inline int32_t get_U3CNumBitsU3Ek__BackingField_6() const { return ___U3CNumBitsU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CNumBitsU3Ek__BackingField_6() { return &___U3CNumBitsU3Ek__BackingField_6; }
	inline void set_U3CNumBitsU3Ek__BackingField_6(int32_t value)
	{
		___U3CNumBitsU3Ek__BackingField_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESULT_T4248438247_H
#ifndef PDF417_T1144242129_H
#define PDF417_T1144242129_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.PDF417.Internal.PDF417
struct  PDF417_t1144242129  : public RuntimeObject
{
public:
	// ZXing.PDF417.Internal.BarcodeMatrix ZXing.PDF417.Internal.PDF417::barcodeMatrix
	BarcodeMatrix_t1670171860 * ___barcodeMatrix_1;
	// System.Boolean ZXing.PDF417.Internal.PDF417::compact
	bool ___compact_2;
	// ZXing.PDF417.Internal.Compaction ZXing.PDF417.Internal.PDF417::compaction
	int32_t ___compaction_3;
	// System.Text.Encoding ZXing.PDF417.Internal.PDF417::encoding
	Encoding_t361254252 * ___encoding_4;
	// System.Boolean ZXing.PDF417.Internal.PDF417::disableEci
	bool ___disableEci_5;
	// System.Int32 ZXing.PDF417.Internal.PDF417::minCols
	int32_t ___minCols_6;
	// System.Int32 ZXing.PDF417.Internal.PDF417::maxCols
	int32_t ___maxCols_7;
	// System.Int32 ZXing.PDF417.Internal.PDF417::maxRows
	int32_t ___maxRows_8;
	// System.Int32 ZXing.PDF417.Internal.PDF417::minRows
	int32_t ___minRows_9;

public:
	inline static int32_t get_offset_of_barcodeMatrix_1() { return static_cast<int32_t>(offsetof(PDF417_t1144242129, ___barcodeMatrix_1)); }
	inline BarcodeMatrix_t1670171860 * get_barcodeMatrix_1() const { return ___barcodeMatrix_1; }
	inline BarcodeMatrix_t1670171860 ** get_address_of_barcodeMatrix_1() { return &___barcodeMatrix_1; }
	inline void set_barcodeMatrix_1(BarcodeMatrix_t1670171860 * value)
	{
		___barcodeMatrix_1 = value;
		Il2CppCodeGenWriteBarrier((&___barcodeMatrix_1), value);
	}

	inline static int32_t get_offset_of_compact_2() { return static_cast<int32_t>(offsetof(PDF417_t1144242129, ___compact_2)); }
	inline bool get_compact_2() const { return ___compact_2; }
	inline bool* get_address_of_compact_2() { return &___compact_2; }
	inline void set_compact_2(bool value)
	{
		___compact_2 = value;
	}

	inline static int32_t get_offset_of_compaction_3() { return static_cast<int32_t>(offsetof(PDF417_t1144242129, ___compaction_3)); }
	inline int32_t get_compaction_3() const { return ___compaction_3; }
	inline int32_t* get_address_of_compaction_3() { return &___compaction_3; }
	inline void set_compaction_3(int32_t value)
	{
		___compaction_3 = value;
	}

	inline static int32_t get_offset_of_encoding_4() { return static_cast<int32_t>(offsetof(PDF417_t1144242129, ___encoding_4)); }
	inline Encoding_t361254252 * get_encoding_4() const { return ___encoding_4; }
	inline Encoding_t361254252 ** get_address_of_encoding_4() { return &___encoding_4; }
	inline void set_encoding_4(Encoding_t361254252 * value)
	{
		___encoding_4 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_4), value);
	}

	inline static int32_t get_offset_of_disableEci_5() { return static_cast<int32_t>(offsetof(PDF417_t1144242129, ___disableEci_5)); }
	inline bool get_disableEci_5() const { return ___disableEci_5; }
	inline bool* get_address_of_disableEci_5() { return &___disableEci_5; }
	inline void set_disableEci_5(bool value)
	{
		___disableEci_5 = value;
	}

	inline static int32_t get_offset_of_minCols_6() { return static_cast<int32_t>(offsetof(PDF417_t1144242129, ___minCols_6)); }
	inline int32_t get_minCols_6() const { return ___minCols_6; }
	inline int32_t* get_address_of_minCols_6() { return &___minCols_6; }
	inline void set_minCols_6(int32_t value)
	{
		___minCols_6 = value;
	}

	inline static int32_t get_offset_of_maxCols_7() { return static_cast<int32_t>(offsetof(PDF417_t1144242129, ___maxCols_7)); }
	inline int32_t get_maxCols_7() const { return ___maxCols_7; }
	inline int32_t* get_address_of_maxCols_7() { return &___maxCols_7; }
	inline void set_maxCols_7(int32_t value)
	{
		___maxCols_7 = value;
	}

	inline static int32_t get_offset_of_maxRows_8() { return static_cast<int32_t>(offsetof(PDF417_t1144242129, ___maxRows_8)); }
	inline int32_t get_maxRows_8() const { return ___maxRows_8; }
	inline int32_t* get_address_of_maxRows_8() { return &___maxRows_8; }
	inline void set_maxRows_8(int32_t value)
	{
		___maxRows_8 = value;
	}

	inline static int32_t get_offset_of_minRows_9() { return static_cast<int32_t>(offsetof(PDF417_t1144242129, ___minRows_9)); }
	inline int32_t get_minRows_9() const { return ___minRows_9; }
	inline int32_t* get_address_of_minRows_9() { return &___minRows_9; }
	inline void set_minRows_9(int32_t value)
	{
		___minRows_9 = value;
	}
};

struct PDF417_t1144242129_StaticFields
{
public:
	// System.Int32[][] ZXing.PDF417.Internal.PDF417::CODEWORD_TABLE
	Int32U5BU5DU5BU5D_t1266570013* ___CODEWORD_TABLE_0;

public:
	inline static int32_t get_offset_of_CODEWORD_TABLE_0() { return static_cast<int32_t>(offsetof(PDF417_t1144242129_StaticFields, ___CODEWORD_TABLE_0)); }
	inline Int32U5BU5DU5BU5D_t1266570013* get_CODEWORD_TABLE_0() const { return ___CODEWORD_TABLE_0; }
	inline Int32U5BU5DU5BU5D_t1266570013** get_address_of_CODEWORD_TABLE_0() { return &___CODEWORD_TABLE_0; }
	inline void set_CODEWORD_TABLE_0(Int32U5BU5DU5BU5D_t1266570013* value)
	{
		___CODEWORD_TABLE_0 = value;
		Il2CppCodeGenWriteBarrier((&___CODEWORD_TABLE_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PDF417_T1144242129_H
#ifndef RESULTPOINTCALLBACK_T940181846_H
#define RESULTPOINTCALLBACK_T940181846_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.ResultPointCallback
struct  ResultPointCallback_t940181846  : public MulticastDelegate_t3728249437
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESULTPOINTCALLBACK_T940181846_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1800 = { sizeof (Binarizer_t1153999642), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1800[1] = 
{
	Binarizer_t1153999642::get_offset_of_source_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1801 = { sizeof (BinaryBitmap_t3624980476), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1801[2] = 
{
	BinaryBitmap_t3624980476::get_offset_of_binarizer_0(),
	BinaryBitmap_t3624980476::get_offset_of_matrix_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1802 = { sizeof (DecodeHintType_t1734661694)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1802[16] = 
{
	DecodeHintType_t1734661694::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1803 = { sizeof (Dimension_t2359472988), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1803[2] = 
{
	Dimension_t2359472988::get_offset_of_width_0(),
	Dimension_t2359472988::get_offset_of_height_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1804 = { sizeof (EncodeHintType_t1478437162)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1804[18] = 
{
	EncodeHintType_t1478437162::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1805 = { sizeof (FormatException_t3991110888), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1806 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1807 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1808 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1809 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1810 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1811 = { sizeof (InvertedLuminanceSource_t2347246920), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1811[2] = 
{
	InvertedLuminanceSource_t2347246920::get_offset_of_delegate_2(),
	InvertedLuminanceSource_t2347246920::get_offset_of_invertedMatrix_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1812 = { sizeof (LuminanceSource_t2042240187), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1812[2] = 
{
	LuminanceSource_t2042240187::get_offset_of_width_0(),
	LuminanceSource_t2042240187::get_offset_of_height_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1813 = { sizeof (MultiFormatReader_t3542830701), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1813[2] = 
{
	MultiFormatReader_t3542830701::get_offset_of_hints_0(),
	MultiFormatReader_t3542830701::get_offset_of_readers_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1814 = { sizeof (MultiFormatWriter_t3114414712), -1, sizeof(MultiFormatWriter_t3114414712_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1814[1] = 
{
	MultiFormatWriter_t3114414712_StaticFields::get_offset_of_formatMap_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1815 = { sizeof (U3CU3Ec_t3355658130), -1, sizeof(U3CU3Ec_t3355658130_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1815[1] = 
{
	U3CU3Ec_t3355658130_StaticFields::get_offset_of_U3CU3E9_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1816 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1817 = { sizeof (ReaderException_t2949524431), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1818 = { sizeof (Result_t4248438247), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1818[7] = 
{
	Result_t4248438247::get_offset_of_U3CTextU3Ek__BackingField_0(),
	Result_t4248438247::get_offset_of_U3CRawBytesU3Ek__BackingField_1(),
	Result_t4248438247::get_offset_of_U3CResultPointsU3Ek__BackingField_2(),
	Result_t4248438247::get_offset_of_U3CBarcodeFormatU3Ek__BackingField_3(),
	Result_t4248438247::get_offset_of_U3CResultMetadataU3Ek__BackingField_4(),
	Result_t4248438247::get_offset_of_U3CTimestampU3Ek__BackingField_5(),
	Result_t4248438247::get_offset_of_U3CNumBitsU3Ek__BackingField_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1819 = { sizeof (ResultMetadataType_t1253489238)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1819[13] = 
{
	ResultMetadataType_t1253489238::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1820 = { sizeof (ResultPoint_t3813591718), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1820[5] = 
{
	ResultPoint_t3813591718::get_offset_of_x_0(),
	ResultPoint_t3813591718::get_offset_of_y_1(),
	ResultPoint_t3813591718::get_offset_of_bytesX_2(),
	ResultPoint_t3813591718::get_offset_of_bytesY_3(),
	ResultPoint_t3813591718::get_offset_of_toString_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1821 = { sizeof (ResultPointCallback_t940181846), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1822 = { sizeof (RGBLuminanceSource_t1351274301), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1823 = { sizeof (BitmapFormat_t1067293617)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1823[14] = 
{
	BitmapFormat_t1067293617::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1824 = { sizeof (SupportClass_t2992176671), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1825 = { sizeof (Color32LuminanceSource_t4094897066), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1826 = { sizeof (Color32Renderer_t2252708944), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1826[2] = 
{
	Color32Renderer_t2252708944::get_offset_of_U3CForegroundU3Ek__BackingField_0(),
	Color32Renderer_t2252708944::get_offset_of_U3CBackgroundU3Ek__BackingField_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1827 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1828 = { sizeof (WriterException_t430112784), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1829 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1830 = { sizeof (QrCodeEncodingOptions_t576972725), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1831 = { sizeof (QRCodeReader_t1316613187), -1, sizeof(QRCodeReader_t1316613187_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1831[2] = 
{
	QRCodeReader_t1316613187_StaticFields::get_offset_of_NO_POINTS_0(),
	QRCodeReader_t1316613187::get_offset_of_decoder_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1832 = { sizeof (QRCodeWriter_t2021054696), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1833 = { sizeof (BitMatrixParser_t4187098004), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1833[4] = 
{
	BitMatrixParser_t4187098004::get_offset_of_bitMatrix_0(),
	BitMatrixParser_t4187098004::get_offset_of_parsedVersion_1(),
	BitMatrixParser_t4187098004::get_offset_of_parsedFormatInfo_2(),
	BitMatrixParser_t4187098004::get_offset_of_mirrored_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1834 = { sizeof (DataBlock_t1342818478), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1834[2] = 
{
	DataBlock_t1342818478::get_offset_of_numDataCodewords_0(),
	DataBlock_t1342818478::get_offset_of_codewords_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1835 = { sizeof (DataMask_t3864373770), -1, sizeof(DataMask_t3864373770_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1835[1] = 
{
	DataMask_t3864373770_StaticFields::get_offset_of_DATA_MASKS_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1836 = { sizeof (U3CU3Ec_t2723235944), -1, sizeof(U3CU3Ec_t2723235944_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1836[1] = 
{
	U3CU3Ec_t2723235944_StaticFields::get_offset_of_U3CU3E9_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1837 = { sizeof (DecodedBitStreamParser_t47856829), -1, sizeof(DecodedBitStreamParser_t47856829_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1837[1] = 
{
	DecodedBitStreamParser_t47856829_StaticFields::get_offset_of_ALPHANUMERIC_CHARS_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1838 = { sizeof (Decoder_t2550361462), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1838[1] = 
{
	Decoder_t2550361462::get_offset_of_rsDecoder_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1839 = { sizeof (ErrorCorrectionLevel_t4005497601), -1, sizeof(ErrorCorrectionLevel_t4005497601_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1839[8] = 
{
	ErrorCorrectionLevel_t4005497601_StaticFields::get_offset_of_L_0(),
	ErrorCorrectionLevel_t4005497601_StaticFields::get_offset_of_M_1(),
	ErrorCorrectionLevel_t4005497601_StaticFields::get_offset_of_Q_2(),
	ErrorCorrectionLevel_t4005497601_StaticFields::get_offset_of_H_3(),
	ErrorCorrectionLevel_t4005497601_StaticFields::get_offset_of_FOR_BITS_4(),
	ErrorCorrectionLevel_t4005497601::get_offset_of_bits_5(),
	ErrorCorrectionLevel_t4005497601::get_offset_of_ordinal_Renamed_Field_6(),
	ErrorCorrectionLevel_t4005497601::get_offset_of_name_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1840 = { sizeof (FormatInformation_t232295017), -1, sizeof(FormatInformation_t232295017_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1840[4] = 
{
	FormatInformation_t232295017_StaticFields::get_offset_of_FORMAT_INFO_DECODE_LOOKUP_0(),
	FormatInformation_t232295017_StaticFields::get_offset_of_BITS_SET_IN_HALF_BYTE_1(),
	FormatInformation_t232295017::get_offset_of_errorCorrectionLevel_2(),
	FormatInformation_t232295017::get_offset_of_dataMask_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1841 = { sizeof (Mode_t2627952440), -1, sizeof(Mode_t2627952440_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1841[13] = 
{
	Mode_t2627952440::get_offset_of_U3CNameU3Ek__BackingField_0(),
	Mode_t2627952440_StaticFields::get_offset_of_TERMINATOR_1(),
	Mode_t2627952440_StaticFields::get_offset_of_NUMERIC_2(),
	Mode_t2627952440_StaticFields::get_offset_of_ALPHANUMERIC_3(),
	Mode_t2627952440_StaticFields::get_offset_of_STRUCTURED_APPEND_4(),
	Mode_t2627952440_StaticFields::get_offset_of_BYTE_5(),
	Mode_t2627952440_StaticFields::get_offset_of_ECI_6(),
	Mode_t2627952440_StaticFields::get_offset_of_KANJI_7(),
	Mode_t2627952440_StaticFields::get_offset_of_FNC1_FIRST_POSITION_8(),
	Mode_t2627952440_StaticFields::get_offset_of_FNC1_SECOND_POSITION_9(),
	Mode_t2627952440_StaticFields::get_offset_of_HANZI_10(),
	Mode_t2627952440::get_offset_of_characterCountBitsForVersions_11(),
	Mode_t2627952440::get_offset_of_U3CBitsU3Ek__BackingField_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1842 = { sizeof (Names_t794671462)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1842[11] = 
{
	Names_t794671462::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1843 = { sizeof (QRCodeDecoderMetaData_t2775618386), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1843[1] = 
{
	QRCodeDecoderMetaData_t2775618386::get_offset_of_mirrored_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1844 = { sizeof (Version_t2207593696), -1, sizeof(Version_t2207593696_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1844[6] = 
{
	Version_t2207593696_StaticFields::get_offset_of_VERSION_DECODE_INFO_0(),
	Version_t2207593696_StaticFields::get_offset_of_VERSIONS_1(),
	Version_t2207593696::get_offset_of_versionNumber_2(),
	Version_t2207593696::get_offset_of_alignmentPatternCenters_3(),
	Version_t2207593696::get_offset_of_ecBlocks_4(),
	Version_t2207593696::get_offset_of_totalCodewords_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1845 = { sizeof (ECBlocks_t1509446936), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1845[2] = 
{
	ECBlocks_t1509446936::get_offset_of_ecCodewordsPerBlock_0(),
	ECBlocks_t1509446936::get_offset_of_ecBlocks_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1846 = { sizeof (ECB_t2885964793), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1846[2] = 
{
	ECB_t2885964793::get_offset_of_count_0(),
	ECB_t2885964793::get_offset_of_dataCodewords_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1847 = { sizeof (AlignmentPattern_t3079876063), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1847[1] = 
{
	AlignmentPattern_t3079876063::get_offset_of_estimatedModuleSize_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1848 = { sizeof (AlignmentPatternFinder_t1813799540), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1848[9] = 
{
	AlignmentPatternFinder_t1813799540::get_offset_of_image_0(),
	AlignmentPatternFinder_t1813799540::get_offset_of_possibleCenters_1(),
	AlignmentPatternFinder_t1813799540::get_offset_of_startX_2(),
	AlignmentPatternFinder_t1813799540::get_offset_of_startY_3(),
	AlignmentPatternFinder_t1813799540::get_offset_of_width_4(),
	AlignmentPatternFinder_t1813799540::get_offset_of_height_5(),
	AlignmentPatternFinder_t1813799540::get_offset_of_moduleSize_6(),
	AlignmentPatternFinder_t1813799540::get_offset_of_crossCheckStateCount_7(),
	AlignmentPatternFinder_t1813799540::get_offset_of_resultPointCallback_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1849 = { sizeof (Detector_t2222455031), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1849[2] = 
{
	Detector_t2222455031::get_offset_of_image_0(),
	Detector_t2222455031::get_offset_of_resultPointCallback_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1850 = { sizeof (FinderPattern_t3349282791), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1850[2] = 
{
	FinderPattern_t3349282791::get_offset_of_estimatedModuleSize_5(),
	FinderPattern_t3349282791::get_offset_of_count_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1851 = { sizeof (FinderPatternFinder_t954506291), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1851[5] = 
{
	FinderPatternFinder_t954506291::get_offset_of_image_0(),
	FinderPatternFinder_t954506291::get_offset_of_possibleCenters_1(),
	FinderPatternFinder_t954506291::get_offset_of_hasSkipped_2(),
	FinderPatternFinder_t954506291::get_offset_of_crossCheckStateCount_3(),
	FinderPatternFinder_t954506291::get_offset_of_resultPointCallback_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1852 = { sizeof (FurthestFromAverageComparator_t1061074253), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1852[1] = 
{
	FurthestFromAverageComparator_t1061074253::get_offset_of_average_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1853 = { sizeof (CenterComparator_t2761662071), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1853[1] = 
{
	CenterComparator_t2761662071::get_offset_of_average_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1854 = { sizeof (FinderPatternInfo_t3796156180), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1854[3] = 
{
	FinderPatternInfo_t3796156180::get_offset_of_bottomLeft_0(),
	FinderPatternInfo_t3796156180::get_offset_of_topLeft_1(),
	FinderPatternInfo_t3796156180::get_offset_of_topRight_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1855 = { sizeof (BlockPair_t73163676), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1855[2] = 
{
	BlockPair_t73163676::get_offset_of_dataBytes_0(),
	BlockPair_t73163676::get_offset_of_errorCorrectionBytes_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1856 = { sizeof (ByteMatrix_t576269041), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1856[3] = 
{
	ByteMatrix_t576269041::get_offset_of_bytes_0(),
	ByteMatrix_t576269041::get_offset_of_width_1(),
	ByteMatrix_t576269041::get_offset_of_height_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1857 = { sizeof (Encoder_t1093883867), -1, sizeof(Encoder_t1093883867_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1857[2] = 
{
	Encoder_t1093883867_StaticFields::get_offset_of_ALPHANUMERIC_TABLE_0(),
	Encoder_t1093883867_StaticFields::get_offset_of_DEFAULT_BYTE_MODE_ENCODING_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1858 = { sizeof (MaskUtil_t1442553070), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1859 = { sizeof (MatrixUtil_t1299418940), -1, sizeof(MatrixUtil_t1299418940_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1859[4] = 
{
	MatrixUtil_t1299418940_StaticFields::get_offset_of_POSITION_DETECTION_PATTERN_0(),
	MatrixUtil_t1299418940_StaticFields::get_offset_of_POSITION_ADJUSTMENT_PATTERN_1(),
	MatrixUtil_t1299418940_StaticFields::get_offset_of_POSITION_ADJUSTMENT_PATTERN_COORDINATE_TABLE_2(),
	MatrixUtil_t1299418940_StaticFields::get_offset_of_TYPE_INFO_COORDINATES_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1860 = { sizeof (QRCode_t2376171885), -1, sizeof(QRCode_t2376171885_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1860[6] = 
{
	QRCode_t2376171885_StaticFields::get_offset_of_NUM_MASK_PATTERNS_0(),
	QRCode_t2376171885::get_offset_of_U3CModeU3Ek__BackingField_1(),
	QRCode_t2376171885::get_offset_of_U3CECLevelU3Ek__BackingField_2(),
	QRCode_t2376171885::get_offset_of_U3CVersionU3Ek__BackingField_3(),
	QRCode_t2376171885::get_offset_of_U3CMaskPatternU3Ek__BackingField_4(),
	QRCode_t2376171885::get_offset_of_U3CMatrixU3Ek__BackingField_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1861 = { sizeof (PDF417Common_t391543272), -1, sizeof(PDF417Common_t391543272_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1861[11] = 
{
	PDF417Common_t391543272_StaticFields::get_offset_of_INVALID_CODEWORD_0(),
	PDF417Common_t391543272_StaticFields::get_offset_of_NUMBER_OF_CODEWORDS_1(),
	PDF417Common_t391543272_StaticFields::get_offset_of_MAX_CODEWORDS_IN_BARCODE_2(),
	PDF417Common_t391543272_StaticFields::get_offset_of_MIN_ROWS_IN_BARCODE_3(),
	PDF417Common_t391543272_StaticFields::get_offset_of_MAX_ROWS_IN_BARCODE_4(),
	PDF417Common_t391543272_StaticFields::get_offset_of_MODULES_IN_CODEWORD_5(),
	PDF417Common_t391543272_StaticFields::get_offset_of_MODULES_IN_STOP_PATTERN_6(),
	PDF417Common_t391543272_StaticFields::get_offset_of_BARS_IN_MODULE_7(),
	PDF417Common_t391543272_StaticFields::get_offset_of_EMPTY_INT_ARRAY_8(),
	PDF417Common_t391543272_StaticFields::get_offset_of_SYMBOL_TABLE_9(),
	PDF417Common_t391543272_StaticFields::get_offset_of_CODEWORD_TABLE_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1862 = { sizeof (PDF417Reader_t127745528), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1863 = { sizeof (PDF417ResultMetadata_t1633520715), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1863[4] = 
{
	PDF417ResultMetadata_t1633520715::get_offset_of_U3CSegmentIndexU3Ek__BackingField_0(),
	PDF417ResultMetadata_t1633520715::get_offset_of_U3CFileIdU3Ek__BackingField_1(),
	PDF417ResultMetadata_t1633520715::get_offset_of_U3COptionalDataU3Ek__BackingField_2(),
	PDF417ResultMetadata_t1633520715::get_offset_of_U3CIsLastSegmentU3Ek__BackingField_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1864 = { sizeof (PDF417Writer_t1222426519), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1865 = { sizeof (BarcodeMetadata_t502981135), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1865[5] = 
{
	BarcodeMetadata_t502981135::get_offset_of_U3CColumnCountU3Ek__BackingField_0(),
	BarcodeMetadata_t502981135::get_offset_of_U3CErrorCorrectionLevelU3Ek__BackingField_1(),
	BarcodeMetadata_t502981135::get_offset_of_U3CRowCountUpperU3Ek__BackingField_2(),
	BarcodeMetadata_t502981135::get_offset_of_U3CRowCountLowerU3Ek__BackingField_3(),
	BarcodeMetadata_t502981135::get_offset_of_U3CRowCountU3Ek__BackingField_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1866 = { sizeof (BarcodeValue_t1127297203), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1866[1] = 
{
	BarcodeValue_t1127297203::get_offset_of_values_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1867 = { sizeof (BoundingBox_t2865536872), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1867[9] = 
{
	BoundingBox_t2865536872::get_offset_of_image_0(),
	BoundingBox_t2865536872::get_offset_of_U3CTopLeftU3Ek__BackingField_1(),
	BoundingBox_t2865536872::get_offset_of_U3CTopRightU3Ek__BackingField_2(),
	BoundingBox_t2865536872::get_offset_of_U3CBottomLeftU3Ek__BackingField_3(),
	BoundingBox_t2865536872::get_offset_of_U3CBottomRightU3Ek__BackingField_4(),
	BoundingBox_t2865536872::get_offset_of_U3CMinXU3Ek__BackingField_5(),
	BoundingBox_t2865536872::get_offset_of_U3CMaxXU3Ek__BackingField_6(),
	BoundingBox_t2865536872::get_offset_of_U3CMinYU3Ek__BackingField_7(),
	BoundingBox_t2865536872::get_offset_of_U3CMaxYU3Ek__BackingField_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1868 = { sizeof (Codeword_t1236974692), -1, sizeof(Codeword_t1236974692_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1868[6] = 
{
	Codeword_t1236974692_StaticFields::get_offset_of_BARCODE_ROW_UNKNOWN_0(),
	Codeword_t1236974692::get_offset_of_U3CStartXU3Ek__BackingField_1(),
	Codeword_t1236974692::get_offset_of_U3CEndXU3Ek__BackingField_2(),
	Codeword_t1236974692::get_offset_of_U3CBucketU3Ek__BackingField_3(),
	Codeword_t1236974692::get_offset_of_U3CValueU3Ek__BackingField_4(),
	Codeword_t1236974692::get_offset_of_U3CRowNumberU3Ek__BackingField_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1869 = { sizeof (DecodedBitStreamParser_t2763332758), -1, sizeof(DecodedBitStreamParser_t2763332758_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1869[3] = 
{
	DecodedBitStreamParser_t2763332758_StaticFields::get_offset_of_PUNCT_CHARS_0(),
	DecodedBitStreamParser_t2763332758_StaticFields::get_offset_of_MIXED_CHARS_1(),
	DecodedBitStreamParser_t2763332758_StaticFields::get_offset_of_EXP900_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1870 = { sizeof (Mode_t4186487791)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1870[7] = 
{
	Mode_t4186487791::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1871 = { sizeof (DetectionResult_t3148764639), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1871[4] = 
{
	DetectionResult_t3148764639::get_offset_of_U3CMetadataU3Ek__BackingField_0(),
	DetectionResult_t3148764639::get_offset_of_U3CDetectionResultColumnsU3Ek__BackingField_1(),
	DetectionResult_t3148764639::get_offset_of_U3CBoxU3Ek__BackingField_2(),
	DetectionResult_t3148764639::get_offset_of_U3CColumnCountU3Ek__BackingField_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1872 = { sizeof (DetectionResultColumn_t2826712376), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1872[2] = 
{
	DetectionResultColumn_t2826712376::get_offset_of_U3CBoxU3Ek__BackingField_0(),
	DetectionResultColumn_t2826712376::get_offset_of_U3CCodewordsU3Ek__BackingField_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1873 = { sizeof (DetectionResultRowIndicatorColumn_t2481359888), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1873[1] = 
{
	DetectionResultRowIndicatorColumn_t2481359888::get_offset_of_U3CIsLeftU3Ek__BackingField_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1874 = { sizeof (PDF417CodewordDecoder_t2746640184), -1, sizeof(PDF417CodewordDecoder_t2746640184_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1874[1] = 
{
	PDF417CodewordDecoder_t2746640184_StaticFields::get_offset_of_RATIOS_TABLE_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1875 = { sizeof (PDF417ScanningDecoder_t2292568945), -1, sizeof(PDF417ScanningDecoder_t2292568945_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1875[1] = 
{
	PDF417ScanningDecoder_t2292568945_StaticFields::get_offset_of_errorCorrection_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1876 = { sizeof (Detector_t3061581026), -1, sizeof(Detector_t3061581026_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1876[4] = 
{
	Detector_t3061581026_StaticFields::get_offset_of_INDEXES_START_PATTERN_0(),
	Detector_t3061581026_StaticFields::get_offset_of_INDEXES_STOP_PATTERN_1(),
	Detector_t3061581026_StaticFields::get_offset_of_START_PATTERN_2(),
	Detector_t3061581026_StaticFields::get_offset_of_STOP_PATTERN_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1877 = { sizeof (PDF417DetectorResult_t2256536460), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1877[2] = 
{
	PDF417DetectorResult_t2256536460::get_offset_of_U3CBitsU3Ek__BackingField_0(),
	PDF417DetectorResult_t2256536460::get_offset_of_U3CPointsU3Ek__BackingField_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1878 = { sizeof (BarcodeMatrix_t1670171860), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1878[4] = 
{
	BarcodeMatrix_t1670171860::get_offset_of_matrix_0(),
	BarcodeMatrix_t1670171860::get_offset_of_currentRow_1(),
	BarcodeMatrix_t1670171860::get_offset_of_height_2(),
	BarcodeMatrix_t1670171860::get_offset_of_width_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1879 = { sizeof (BarcodeRow_t2705040021), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1879[2] = 
{
	BarcodeRow_t2705040021::get_offset_of_row_0(),
	BarcodeRow_t2705040021::get_offset_of_currentLocation_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1880 = { sizeof (Compaction_t3837195300)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1880[5] = 
{
	Compaction_t3837195300::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1881 = { sizeof (Dimensions_t2189319474), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1881[4] = 
{
	Dimensions_t2189319474::get_offset_of_minCols_0(),
	Dimensions_t2189319474::get_offset_of_maxCols_1(),
	Dimensions_t2189319474::get_offset_of_minRows_2(),
	Dimensions_t2189319474::get_offset_of_maxRows_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1882 = { sizeof (PDF417_t1144242129), -1, sizeof(PDF417_t1144242129_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1882[10] = 
{
	PDF417_t1144242129_StaticFields::get_offset_of_CODEWORD_TABLE_0(),
	PDF417_t1144242129::get_offset_of_barcodeMatrix_1(),
	PDF417_t1144242129::get_offset_of_compact_2(),
	PDF417_t1144242129::get_offset_of_compaction_3(),
	PDF417_t1144242129::get_offset_of_encoding_4(),
	PDF417_t1144242129::get_offset_of_disableEci_5(),
	PDF417_t1144242129::get_offset_of_minCols_6(),
	PDF417_t1144242129::get_offset_of_maxCols_7(),
	PDF417_t1144242129::get_offset_of_maxRows_8(),
	PDF417_t1144242129::get_offset_of_minRows_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1883 = { sizeof (PDF417ErrorCorrection_t2021008874), -1, sizeof(PDF417ErrorCorrection_t2021008874_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1883[1] = 
{
	PDF417ErrorCorrection_t2021008874_StaticFields::get_offset_of_EC_COEFFICIENTS_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1884 = { sizeof (PDF417ErrorCorrectionLevel_t4041436469)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1884[10] = 
{
	PDF417ErrorCorrectionLevel_t4041436469::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1885 = { sizeof (PDF417HighLevelEncoder_t3004631590), -1, sizeof(PDF417HighLevelEncoder_t3004631590_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1885[5] = 
{
	PDF417HighLevelEncoder_t3004631590_StaticFields::get_offset_of_TEXT_MIXED_RAW_0(),
	PDF417HighLevelEncoder_t3004631590_StaticFields::get_offset_of_TEXT_PUNCTUATION_RAW_1(),
	PDF417HighLevelEncoder_t3004631590_StaticFields::get_offset_of_MIXED_2(),
	PDF417HighLevelEncoder_t3004631590_StaticFields::get_offset_of_PUNCTUATION_3(),
	PDF417HighLevelEncoder_t3004631590_StaticFields::get_offset_of_DEFAULT_ENCODING_NAME_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1886 = { sizeof (ErrorCorrection_t2362326784), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1886[1] = 
{
	ErrorCorrection_t2362326784::get_offset_of_field_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1887 = { sizeof (ModulusGF_t967090002), -1, sizeof(ModulusGF_t967090002_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1887[6] = 
{
	ModulusGF_t967090002_StaticFields::get_offset_of_PDF417_GF_0(),
	ModulusGF_t967090002::get_offset_of_expTable_1(),
	ModulusGF_t967090002::get_offset_of_logTable_2(),
	ModulusGF_t967090002::get_offset_of_U3CZeroU3Ek__BackingField_3(),
	ModulusGF_t967090002::get_offset_of_U3COneU3Ek__BackingField_4(),
	ModulusGF_t967090002::get_offset_of_modulus_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1888 = { sizeof (ModulusPoly_t279804807), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1888[2] = 
{
	ModulusPoly_t279804807::get_offset_of_field_0(),
	ModulusPoly_t279804807::get_offset_of_coefficients_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1889 = { sizeof (CodaBarReader_t2864429437), -1, sizeof(CodaBarReader_t2864429437_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1889[8] = 
{
	CodaBarReader_t2864429437_StaticFields::get_offset_of_MAX_ACCEPTABLE_2(),
	CodaBarReader_t2864429437_StaticFields::get_offset_of_PADDING_3(),
	CodaBarReader_t2864429437_StaticFields::get_offset_of_ALPHABET_4(),
	CodaBarReader_t2864429437_StaticFields::get_offset_of_CHARACTER_ENCODINGS_5(),
	CodaBarReader_t2864429437_StaticFields::get_offset_of_STARTEND_ENCODING_6(),
	CodaBarReader_t2864429437::get_offset_of_decodeRowResult_7(),
	CodaBarReader_t2864429437::get_offset_of_counters_8(),
	CodaBarReader_t2864429437::get_offset_of_counterLength_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1890 = { sizeof (CodaBarWriter_t1577690684), -1, sizeof(CodaBarWriter_t1577690684_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1890[4] = 
{
	CodaBarWriter_t1577690684_StaticFields::get_offset_of_START_END_CHARS_0(),
	CodaBarWriter_t1577690684_StaticFields::get_offset_of_ALT_START_END_CHARS_1(),
	CodaBarWriter_t1577690684_StaticFields::get_offset_of_CHARS_WHICH_ARE_TEN_LENGTH_EACH_AFTER_DECODED_2(),
	CodaBarWriter_t1577690684_StaticFields::get_offset_of_DEFAULT_GUARD_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1891 = { sizeof (Code128Reader_t3303398225), -1, sizeof(Code128Reader_t3303398225_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1891[3] = 
{
	Code128Reader_t3303398225_StaticFields::get_offset_of_CODE_PATTERNS_2(),
	Code128Reader_t3303398225_StaticFields::get_offset_of_MAX_AVG_VARIANCE_3(),
	Code128Reader_t3303398225_StaticFields::get_offset_of_MAX_INDIVIDUAL_VARIANCE_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1892 = { sizeof (Code128Writer_t2823049313), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1892[1] = 
{
	Code128Writer_t2823049313::get_offset_of_forceCodesetB_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1893 = { sizeof (CType_t878203540)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1893[5] = 
{
	CType_t878203540::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1894 = { sizeof (Code39Reader_t4245898908), -1, sizeof(Code39Reader_t4245898908_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1894[8] = 
{
	Code39Reader_t4245898908_StaticFields::get_offset_of_ALPHABET_STRING_2(),
	Code39Reader_t4245898908_StaticFields::get_offset_of_CHECK_DIGIT_STRING_3(),
	Code39Reader_t4245898908_StaticFields::get_offset_of_CHARACTER_ENCODINGS_4(),
	Code39Reader_t4245898908_StaticFields::get_offset_of_ASTERISK_ENCODING_5(),
	Code39Reader_t4245898908::get_offset_of_usingCheckDigit_6(),
	Code39Reader_t4245898908::get_offset_of_extendedMode_7(),
	Code39Reader_t4245898908::get_offset_of_decodeRowResult_8(),
	Code39Reader_t4245898908::get_offset_of_counters_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1895 = { sizeof (Code39Writer_t748262797), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1896 = { sizeof (Code93Reader_t3212229472), -1, sizeof(Code93Reader_t3212229472_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1896[5] = 
{
	Code93Reader_t3212229472_StaticFields::get_offset_of_ALPHABET_2(),
	Code93Reader_t3212229472_StaticFields::get_offset_of_CHARACTER_ENCODINGS_3(),
	Code93Reader_t3212229472_StaticFields::get_offset_of_ASTERISK_ENCODING_4(),
	Code93Reader_t3212229472::get_offset_of_decodeRowResult_5(),
	Code93Reader_t3212229472::get_offset_of_counters_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1897 = { sizeof (Code93Writer_t1187519047), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1898 = { sizeof (EAN13Reader_t1379808021), -1, sizeof(EAN13Reader_t1379808021_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1898[2] = 
{
	EAN13Reader_t1379808021_StaticFields::get_offset_of_FIRST_DIGIT_ENCODINGS_12(),
	EAN13Reader_t1379808021::get_offset_of_decodeMiddleCounters_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1899 = { sizeof (EAN13Writer_t2862835090), -1, 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
