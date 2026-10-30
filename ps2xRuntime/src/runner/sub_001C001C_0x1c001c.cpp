#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C001C
// Address: 0x1c001c - 0x1c0640
void sub_001C001C_0x1c001c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C001C_0x1c001c");
#endif

    switch (ctx->pc) {
        case 0x1c0074u: goto label_1c0074;
        case 0x1c0190u: goto label_1c0190;
        default: break;
    }

    ctx->pc = 0x1c001cu;

    // 0x1c001c: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x1c001cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x1c0020: 0x3c01bdf7  lui         $at, 0xBDF7
    ctx->pc = 0x1c0020u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48631 << 16));
    // 0x1c0024: 0x3421ced9  ori         $at, $at, 0xCED9
    ctx->pc = 0x1c0024u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52953);
    // 0x1c0028: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x1c0028u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x1c002c: 0xe4a02f70  swc1        $f0, 0x2F70($a1)
    ctx->pc = 0x1c002cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12144), bits); }
    // 0x1c0030: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x1c0030u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
    // 0x1c0034: 0xe4812f74  swc1        $f1, 0x2F74($a0)
    ctx->pc = 0x1c0034u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12148), bits); }
    // 0x1c0038: 0xe7022f78  swc1        $f2, 0x2F78($t8)
    ctx->pc = 0x1c0038u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 12152), bits); }
    // 0x1c003c: 0xe6e32f7c  swc1        $f3, 0x2F7C($s7)
    ctx->pc = 0x1c003cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 12156), bits); }
    // 0x1c0040: 0xe6642f80  swc1        $f4, 0x2F80($s3)
    ctx->pc = 0x1c0040u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12160), bits); }
    // 0x1c0044: 0xe6452f84  swc1        $f5, 0x2F84($s2)
    ctx->pc = 0x1c0044u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12164), bits); }
    // 0x1c0048: 0xe6062f88  swc1        $f6, 0x2F88($s0)
    ctx->pc = 0x1c0048u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12168), bits); }
    // 0x1c004c: 0xe5e72f8c  swc1        $f7, 0x2F8C($t7)
    ctx->pc = 0x1c004cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 12172), bits); }
    // 0x1c0050: 0xe5a82f90  swc1        $f8, 0x2F90($t5)
    ctx->pc = 0x1c0050u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 12176), bits); }
    // 0x1c0054: 0xe6d82f94  swc1        $f24, 0x2F94($s6)
    ctx->pc = 0x1c0054u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 12180), bits); }
    // 0x1c0058: 0xe6892f98  swc1        $f9, 0x2F98($s4)
    ctx->pc = 0x1c0058u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12184), bits); }
    // 0x1c005c: 0xe5592f9c  swc1        $f25, 0x2F9C($t2)
    ctx->pc = 0x1c005cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 12188), bits); }
    // 0x1c0060: 0xe4ca2fa8  swc1        $f10, 0x2FA8($a2)
    ctx->pc = 0x1c0060u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12200), bits); }
    // 0x1c0064: 0xe50b2fa0  swc1        $f11, 0x2FA0($t0)
    ctx->pc = 0x1c0064u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 12192), bits); }
    // 0x1c0068: 0xe58c2fa4  swc1        $f12, 0x2FA4($t4)
    ctx->pc = 0x1c0068u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 12196), bits); }
    // 0x1c006c: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x1C006Cu;
    {
        const bool branch_taken_0x1c006c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C006Cu;
        // 0x1c0070: 0xe4ac2fac  swc1        $f12, 0x2FAC($a1) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12204), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c006c) {
            ctx->pc = 0x1C02B4u;
            goto label_1c02b4;
        }
    }
    ctx->pc = 0x1C0074u;
label_1c0074:
    // 0x1c0074: 0x3c013d13  lui         $at, 0x3D13
    ctx->pc = 0x1c0074u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15635 << 16));
    // 0x1c0078: 0x342174bc  ori         $at, $at, 0x74BC
    ctx->pc = 0x1c0078u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29884);
    // 0x1c007c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c007cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c0080: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1c0080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x1c0084: 0x3c013f17  lui         $at, 0x3F17
    ctx->pc = 0x1c0084u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16151 << 16));
    // 0x1c0088: 0x34210a3d  ori         $at, $at, 0xA3D
    ctx->pc = 0x1c0088u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2621);
    // 0x1c008c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c008cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c0090: 0x3c013d23  lui         $at, 0x3D23
    ctx->pc = 0x1c0090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15651 << 16));
    // 0x1c0094: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1c0094u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1c0098: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1c0098u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c009c: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x1c009cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
    // 0x1c00a0: 0x3c013f2a  lui         $at, 0x3F2A
    ctx->pc = 0x1c00a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16170 << 16));
    // 0x1c00a4: 0x34213d71  ori         $at, $at, 0x3D71
    ctx->pc = 0x1c00a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15729);
    // 0x1c00a8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1c00a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1c00ac: 0xe4402f70  swc1        $f0, 0x2F70($v0)
    ctx->pc = 0x1c00acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622F70u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622F70u, _value); } while (0); }
    // 0x1c00b0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1c00b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x1c00b4: 0x3c01ba83  lui         $at, 0xBA83
    ctx->pc = 0x1c00b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47747 << 16));
    // 0x1c00b8: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1c00b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1c00bc: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1c00bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1c00c0: 0x3c013f21  lui         $at, 0x3F21
    ctx->pc = 0x1c00c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16161 << 16));
    // 0x1c00c4: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x1c00c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
    // 0x1c00c8: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1c00c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1c00cc: 0x3c013d9f  lui         $at, 0x3D9F
    ctx->pc = 0x1c00ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15775 << 16));
    // 0x1c00d0: 0x3421be77  ori         $at, $at, 0xBE77
    ctx->pc = 0x1c00d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)48759);
    // 0x1c00d4: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1c00d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1c00d8: 0xe4812f74  swc1        $f1, 0x2F74($a0)
    ctx->pc = 0x1c00d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12148), bits); }
    // 0x1c00dc: 0xe4a22f78  swc1        $f2, 0x2F78($a1)
    ctx->pc = 0x1c00dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622F78u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622F78u, _value); } while (0); }
    // 0x1c00e0: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x1c00e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x1c00e4: 0xe4432f7c  swc1        $f3, 0x2F7C($v0)
    ctx->pc = 0x1c00e4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622F7Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622F7Cu, _value); } while (0); }
    // 0x1c00e8: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x1c00e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
    // 0x1c00ec: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1c00ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x1c00f0: 0x3c013f20  lui         $at, 0x3F20
    ctx->pc = 0x1c00f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16160 << 16));
    // 0x1c00f4: 0x34218312  ori         $at, $at, 0x8312
    ctx->pc = 0x1c00f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)33554);
    // 0x1c00f8: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x1c00f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x1c00fc: 0x3c013c03  lui         $at, 0x3C03
    ctx->pc = 0x1c00fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15363 << 16));
    // 0x1c0100: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1c0100u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1c0104: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x1c0104u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x1c0108: 0xe4842f80  swc1        $f4, 0x2F80($a0)
    ctx->pc = 0x1c0108u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622F80u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622F80u, _value); } while (0); }
    // 0x1c010c: 0xe4a52f84  swc1        $f5, 0x2F84($a1)
    ctx->pc = 0x1c010cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622F84u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622F84u, _value); } while (0); }
    // 0x1c0110: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x1c0110u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x1c0114: 0xe4462f88  swc1        $f6, 0x2F88($v0)
    ctx->pc = 0x1c0114u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622F88u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622F88u, _value); } while (0); }
    // 0x1c0118: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x1c0118u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
    // 0x1c011c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1c011cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x1c0120: 0x3c013d8b  lui         $at, 0x3D8B
    ctx->pc = 0x1c0120u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15755 << 16));
    // 0x1c0124: 0x34214396  ori         $at, $at, 0x4396
    ctx->pc = 0x1c0124u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17302);
    // 0x1c0128: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x1c0128u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x1c012c: 0x3c013c13  lui         $at, 0x3C13
    ctx->pc = 0x1c012cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15379 << 16));
    // 0x1c0130: 0x342174bc  ori         $at, $at, 0x74BC
    ctx->pc = 0x1c0130u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29884);
    // 0x1c0134: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x1c0134u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x1c0138: 0xe4872f8c  swc1        $f7, 0x2F8C($a0)
    ctx->pc = 0x1c0138u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622F8Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622F8Cu, _value); } while (0); }
    // 0x1c013c: 0xe4a82f90  swc1        $f8, 0x2F90($a1)
    ctx->pc = 0x1c013cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622F90u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622F90u, _value); } while (0); }
    // 0x1c0140: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x1c0140u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x1c0144: 0xe4582f94  swc1        $f24, 0x2F94($v0)
    ctx->pc = 0x1c0144u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622F94u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622F94u, _value); } while (0); }
    // 0x1c0148: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x1c0148u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
    // 0x1c014c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1c014cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x1c0150: 0x3c013f27  lui         $at, 0x3F27
    ctx->pc = 0x1c0150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16167 << 16));
    // 0x1c0154: 0x3421ae14  ori         $at, $at, 0xAE14
    ctx->pc = 0x1c0154u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)44564);
    // 0x1c0158: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1c0158u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c015c: 0x3c013d8f  lui         $at, 0x3D8F
    ctx->pc = 0x1c015cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15759 << 16));
    // 0x1c0160: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x1c0160u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x1c0164: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x1c0164u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x1c0168: 0xe4892f98  swc1        $f9, 0x2F98($a0)
    ctx->pc = 0x1c0168u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622F98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622F98u, _value); } while (0); }
    // 0x1c016c: 0xe4b92f9c  swc1        $f25, 0x2F9C($a1)
    ctx->pc = 0x1c016cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622F9Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622F9Cu, _value); } while (0); }
    // 0x1c0170: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x1c0170u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x1c0174: 0xe44a2fa8  swc1        $f10, 0x2FA8($v0)
    ctx->pc = 0x1c0174u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622FA8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622FA8u, _value); } while (0); }
    // 0x1c0178: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x1c0178u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
    // 0x1c017c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1c017cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x1c0180: 0xe48b2fa0  swc1        $f11, 0x2FA0($a0)
    ctx->pc = 0x1c0180u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622FA0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622FA0u, _value); } while (0); }
    // 0x1c0184: 0xe4ac2fa4  swc1        $f12, 0x2FA4($a1)
    ctx->pc = 0x1c0184u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622FA4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622FA4u, _value); } while (0); }
    // 0x1c0188: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x1C0188u;
    {
        const bool branch_taken_0x1c0188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C018Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0188u;
        // 0x1c018c: 0xe44c2fac  swc1        $f12, 0x2FAC($v0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12204), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0188) {
            ctx->pc = 0x1C02B4u;
            goto label_1c02b4;
        }
    }
    ctx->pc = 0x1C0190u;
label_1c0190:
    // 0x1c0190: 0x33220020  andi        $v0, $t9, 0x20
    ctx->pc = 0x1c0190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)32);
    // 0x1c0194: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1C0194u;
    {
        const bool branch_taken_0x1c0194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0194u;
        // 0x1c0198: 0x33220004  andi        $v0, $t9, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0194) {
            ctx->pc = 0x1C022Cu;
            goto label_1c022c;
        }
    }
    ctx->pc = 0x1C019Cu;
    // 0x1c019c: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x1C019Cu;
    {
        const bool branch_taken_0x1c019c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C01A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C019Cu;
        // 0x1c01a0: 0x3c040062  lui         $a0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c019c) {
            ctx->pc = 0x1C02B4u;
            goto label_1c02b4;
        }
    }
    ctx->pc = 0x1C01A4u;
    // 0x1c01a4: 0x3c01bccc  lui         $at, 0xBCCC
    ctx->pc = 0x1c01a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48332 << 16));
    // 0x1c01a8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c01a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1c01ac: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1c01acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1c01b0: 0x3c01bd85  lui         $at, 0xBD85
    ctx->pc = 0x1c01b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48517 << 16));
    // 0x1c01b4: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x1c01b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
    // 0x1c01b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c01b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c01bc: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x1c01bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
    // 0x1c01c0: 0x3c013ba3  lui         $at, 0x3BA3
    ctx->pc = 0x1c01c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15267 << 16));
    // 0x1c01c4: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1c01c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1c01c8: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1c01c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1c01cc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1c01ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x1c01d0: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1c01d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1c01d4: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1c01d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1c01d8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c01d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c01dc: 0x3c01bd61  lui         $at, 0xBD61
    ctx->pc = 0x1c01dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48481 << 16));
    // 0x1c01e0: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x1c01e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
    // 0x1c01e4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1c01e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c01e8: 0xe4842f78  swc1        $f4, 0x2F78($a0)
    ctx->pc = 0x1c01e8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12152), bits); }
    // 0x1c01ec: 0xe4a02f80  swc1        $f0, 0x2F80($a1)
    ctx->pc = 0x1c01ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622F80u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622F80u, _value); } while (0); }
    // 0x1c01f0: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x1c01f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x1c01f4: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x1c01f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
    // 0x1c01f8: 0x3c01bd75  lui         $at, 0xBD75
    ctx->pc = 0x1c01f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48501 << 16));
    // 0x1c01fc: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1c01fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x1c0200: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1c0200u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1c0204: 0xe4412f88  swc1        $f1, 0x2F88($v0)
    ctx->pc = 0x1c0204u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622F88u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622F88u, _value); } while (0); }
    // 0x1c0208: 0xe4822f90  swc1        $f2, 0x2F90($a0)
    ctx->pc = 0x1c0208u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622F90u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622F90u, _value); } while (0); }
    // 0x1c020c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1c020cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x1c0210: 0xe4a52fa0  swc1        $f5, 0x2FA0($a1)
    ctx->pc = 0x1c0210u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622FA0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622FA0u, _value); } while (0); }
    // 0x1c0214: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x1c0214u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x1c0218: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x1c0218u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
    // 0x1c021c: 0xe4432fa8  swc1        $f3, 0x2FA8($v0)
    ctx->pc = 0x1c021cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622FA8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622FA8u, _value); } while (0); }
    // 0x1c0220: 0xe4842f70  swc1        $f4, 0x2F70($a0)
    ctx->pc = 0x1c0220u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622F70u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622F70u, _value); } while (0); }
    // 0x1c0224: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1C0224u;
    {
        const bool branch_taken_0x1c0224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0224u;
        // 0x1c0228: 0xe4a52f98  swc1        $f5, 0x2F98($a1) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12184), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0224) {
            ctx->pc = 0x1C02B4u;
            goto label_1c02b4;
        }
    }
    ctx->pc = 0x1C022Cu;
label_1c022c:
    // 0x1c022c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1C022Cu;
    {
        const bool branch_taken_0x1c022c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C022Cu;
        // 0x1c0230: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c022c) {
            ctx->pc = 0x1C02B4u;
            goto label_1c02b4;
        }
    }
    ctx->pc = 0x1C0234u;
    // 0x1c0234: 0x3c01bdb8  lui         $at, 0xBDB8
    ctx->pc = 0x1c0234u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48568 << 16));
    // 0x1c0238: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x1c0238u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
    // 0x1c023c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1c023cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1c0240: 0x3c01be05  lui         $at, 0xBE05
    ctx->pc = 0x1c0240u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48645 << 16));
    // 0x1c0244: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x1c0244u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
    // 0x1c0248: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c0248u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c024c: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x1c024cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x1c0250: 0x3c01bd75  lui         $at, 0xBD75
    ctx->pc = 0x1c0250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48501 << 16));
    // 0x1c0254: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1c0254u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x1c0258: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1c0258u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1c025c: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x1c025cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
    // 0x1c0260: 0x3c01bd61  lui         $at, 0xBD61
    ctx->pc = 0x1c0260u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48481 << 16));
    // 0x1c0264: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x1c0264u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
    // 0x1c0268: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c0268u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c026c: 0x3c01bdf5  lui         $at, 0xBDF5
    ctx->pc = 0x1c026cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48629 << 16));
    // 0x1c0270: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1c0270u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x1c0274: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1c0274u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c0278: 0xe4442f78  swc1        $f4, 0x2F78($v0)
    ctx->pc = 0x1c0278u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12152), bits); }
    // 0x1c027c: 0xe4802f80  swc1        $f0, 0x2F80($a0)
    ctx->pc = 0x1c027cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622F80u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622F80u, _value); } while (0); }
    // 0x1c0280: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1c0280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x1c0284: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x1c0284u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x1c0288: 0x3c01be00  lui         $at, 0xBE00
    ctx->pc = 0x1c0288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48640 << 16));
    // 0x1c028c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1c028cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1c0290: 0xe4a12f88  swc1        $f1, 0x2F88($a1)
    ctx->pc = 0x1c0290u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622F88u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622F88u, _value); } while (0); }
    // 0x1c0294: 0xe4422f90  swc1        $f2, 0x2F90($v0)
    ctx->pc = 0x1c0294u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622F90u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622F90u, _value); } while (0); }
    // 0x1c0298: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x1c0298u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
    // 0x1c029c: 0xe4852fa0  swc1        $f5, 0x2FA0($a0)
    ctx->pc = 0x1c029cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622FA0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622FA0u, _value); } while (0); }
    // 0x1c02a0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1c02a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x1c02a4: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x1c02a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x1c02a8: 0xe4a32fa8  swc1        $f3, 0x2FA8($a1)
    ctx->pc = 0x1c02a8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622FA8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622FA8u, _value); } while (0); }
    // 0x1c02ac: 0xe4442f70  swc1        $f4, 0x2F70($v0)
    ctx->pc = 0x1c02acu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622F70u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622F70u, _value); } while (0); }
    // 0x1c02b0: 0xe4852f98  swc1        $f5, 0x2F98($a0)
    ctx->pc = 0x1c02b0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622F98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622F98u, _value); } while (0); }
label_1c02b4:
    // 0x1c02b4: 0x8fc300f0  lw          $v1, 0xF0($fp)
    ctx->pc = 0x1c02b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 240)));
    // 0x1c02b8: 0x24020090  addiu       $v0, $zero, 0x90
    ctx->pc = 0x1c02b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x1c02bc: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x1c02bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x1c02c0: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1c02c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x1c02c4: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x1c02c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1c02c8: 0x24842e90  addiu       $a0, $a0, 0x2E90
    ctx->pc = 0x1c02c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11920));
    // 0x1c02cc: 0xc4a2e944  lwc1        $f2, -0x16BC($a1)
    ctx->pc = 0x1c02ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294961476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c02d0: 0x3c01bdcc  lui         $at, 0xBDCC
    ctx->pc = 0x1c02d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48588 << 16));
    // 0x1c02d4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c02d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1c02d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c02d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c02dc: 0x460d10c2  mul.s       $f3, $f2, $f13
    ctx->pc = 0x1c02dcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[13]);
    // 0x1c02e0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1c02e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1c02e4: 0x46171082  mul.s       $f2, $f2, $f23
    ctx->pc = 0x1c02e4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[23]);
    // 0x1c02e8: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x1c02e8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c02ec: 0x46170034  c.lt.s      $f0, $f23
    ctx->pc = 0x1c02ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c02f0: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1c02f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x1c02f4: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1c02f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c02f8: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x1c02f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c02fc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1c02fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1c0300: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x1c0300u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x1c0304: 0xe7c00830  swc1        $f0, 0x830($fp)
    ctx->pc = 0x1c0304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 2096), bits); }
    // 0x1c0308: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x1C0308u;
    {
        const bool branch_taken_0x1c0308 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C030Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0308u;
        // 0x1c030c: 0xe7c10834  swc1        $f1, 0x834($fp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 2100), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0308) {
            ctx->pc = 0x1C0364u;
            goto label_1c0364;
        }
    }
    ctx->pc = 0x1C0310u;
    // 0x1c0310: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1c0310u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1c0314: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c0314u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1c0318: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c0318u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c031c: 0x0  nop
    ctx->pc = 0x1c031cu;
    // NOP
    // 0x1c0320: 0x4600b834  c.lt.s      $f23, $f0
    ctx->pc = 0x1c0320u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c0324: 0x0  nop
    ctx->pc = 0x1c0324u;
    // NOP
    // 0x1c0328: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x1C0328u;
    {
        const bool branch_taken_0x1c0328 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c0328) {
            ctx->pc = 0x1C0364u;
            goto label_1c0364;
        }
    }
    ctx->pc = 0x1C0330u;
    // 0x1c0330: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1c0330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1c0334: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c0334u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c0338: 0x0  nop
    ctx->pc = 0x1c0338u;
    // NOP
    // 0x1c033c: 0x460d0034  c.lt.s      $f0, $f13
    ctx->pc = 0x1c033cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c0340: 0x0  nop
    ctx->pc = 0x1c0340u;
    // NOP
    // 0x1c0344: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1C0344u;
    {
        const bool branch_taken_0x1c0344 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C0348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0344u;
        // 0x1c0348: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0344) {
            ctx->pc = 0x1C0364u;
            goto label_1c0364;
        }
    }
    ctx->pc = 0x1C034Cu;
    // 0x1c034c: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x1c034cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x1c0350: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1c0350u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x1c0354: 0xc4402f70  lwc1        $f0, 0x2F70($v0)
    ctx->pc = 0x1c0354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c0358: 0xc4812f74  lwc1        $f1, 0x2F74($a0)
    ctx->pc = 0x1c0358u;
    { uint32_t bits = FAST_READ32(0x622F74u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c035c: 0x100000a1  b           . + 4 + (0xA1 << 2)
    ctx->pc = 0x1C035Cu;
    {
        const bool branch_taken_0x1c035c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C035Cu;
        // 0x1c0360: 0xc4a2e924  lwc1        $f2, -0x16DC($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294961444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c035c) {
            ctx->pc = 0x1C05E4u;
            goto label_1c05e4;
        }
    }
    ctx->pc = 0x1C0364u;
label_1c0364:
    // 0x1c0364: 0x3c01bdcc  lui         $at, 0xBDCC
    ctx->pc = 0x1c0364u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48588 << 16));
    // 0x1c0368: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c0368u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1c036c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c036cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c0370: 0x0  nop
    ctx->pc = 0x1c0370u;
    // NOP
    // 0x1c0374: 0x46170034  c.lt.s      $f0, $f23
    ctx->pc = 0x1c0374u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c0378: 0x0  nop
    ctx->pc = 0x1c0378u;
    // NOP
    // 0x1c037c: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x1C037Cu;
    {
        const bool branch_taken_0x1c037c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c037c) {
            ctx->pc = 0x1C03D8u;
            goto label_1c03d8;
        }
    }
    ctx->pc = 0x1C0384u;
    // 0x1c0384: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1c0384u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1c0388: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c0388u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1c038c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c038cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c0390: 0x0  nop
    ctx->pc = 0x1c0390u;
    // NOP
    // 0x1c0394: 0x4600b834  c.lt.s      $f23, $f0
    ctx->pc = 0x1c0394u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c0398: 0x0  nop
    ctx->pc = 0x1c0398u;
    // NOP
    // 0x1c039c: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x1C039Cu;
    {
        const bool branch_taken_0x1c039c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c039c) {
            ctx->pc = 0x1C03D8u;
            goto label_1c03d8;
        }
    }
    ctx->pc = 0x1C03A4u;
    // 0x1c03a4: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x1c03a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x1c03a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c03a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c03ac: 0x0  nop
    ctx->pc = 0x1c03acu;
    // NOP
    // 0x1c03b0: 0x46006834  c.lt.s      $f13, $f0
    ctx->pc = 0x1c03b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c03b4: 0x0  nop
    ctx->pc = 0x1c03b4u;
    // NOP
    // 0x1c03b8: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1C03B8u;
    {
        const bool branch_taken_0x1c03b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C03BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C03B8u;
        // 0x1c03bc: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c03b8) {
            ctx->pc = 0x1C03E0u;
            goto label_1c03e0;
        }
    }
    ctx->pc = 0x1C03C0u;
    // 0x1c03c0: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x1c03c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x1c03c4: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1c03c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x1c03c8: 0xc4402f78  lwc1        $f0, 0x2F78($v0)
    ctx->pc = 0x1c03c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c03cc: 0xc4812f7c  lwc1        $f1, 0x2F7C($a0)
    ctx->pc = 0x1c03ccu;
    { uint32_t bits = FAST_READ32(0x622F7Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c03d0: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x1C03D0u;
    {
        const bool branch_taken_0x1c03d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C03D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C03D0u;
        // 0x1c03d4: 0xc4a2e928  lwc1        $f2, -0x16D8($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294961448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c03d0) {
            ctx->pc = 0x1C05E4u;
            goto label_1c05e4;
        }
    }
    ctx->pc = 0x1C03D8u;
label_1c03d8:
    // 0x1c03d8: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x1c03d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x1c03dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c03dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c03e0:
    // 0x1c03e0: 0x0  nop
    ctx->pc = 0x1c03e0u;
    // NOP
    // 0x1c03e4: 0x4600b834  c.lt.s      $f23, $f0
    ctx->pc = 0x1c03e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c03e8: 0x0  nop
    ctx->pc = 0x1c03e8u;
    // NOP
    // 0x1c03ec: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x1C03ECu;
    {
        const bool branch_taken_0x1c03ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c03ec) {
            ctx->pc = 0x1C044Cu;
            goto label_1c044c;
        }
    }
    ctx->pc = 0x1C03F4u;
    // 0x1c03f4: 0x3c01bdcc  lui         $at, 0xBDCC
    ctx->pc = 0x1c03f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48588 << 16));
    // 0x1c03f8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c03f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1c03fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c03fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c0400: 0x0  nop
    ctx->pc = 0x1c0400u;
    // NOP
    // 0x1c0404: 0x460d0034  c.lt.s      $f0, $f13
    ctx->pc = 0x1c0404u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c0408: 0x0  nop
    ctx->pc = 0x1c0408u;
    // NOP
    // 0x1c040c: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x1C040Cu;
    {
        const bool branch_taken_0x1c040c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c040c) {
            ctx->pc = 0x1C044Cu;
            goto label_1c044c;
        }
    }
    ctx->pc = 0x1C0414u;
    // 0x1c0414: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1c0414u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1c0418: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c0418u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1c041c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c041cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c0420: 0x0  nop
    ctx->pc = 0x1c0420u;
    // NOP
    // 0x1c0424: 0x46006834  c.lt.s      $f13, $f0
    ctx->pc = 0x1c0424u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c0428: 0x0  nop
    ctx->pc = 0x1c0428u;
    // NOP
    // 0x1c042c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1C042Cu;
    {
        const bool branch_taken_0x1c042c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C0430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C042Cu;
        // 0x1c0430: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c042c) {
            ctx->pc = 0x1C044Cu;
            goto label_1c044c;
        }
    }
    ctx->pc = 0x1C0434u;
    // 0x1c0434: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x1c0434u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x1c0438: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1c0438u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x1c043c: 0xc4402f80  lwc1        $f0, 0x2F80($v0)
    ctx->pc = 0x1c043cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c0440: 0xc4812f84  lwc1        $f1, 0x2F84($a0)
    ctx->pc = 0x1c0440u;
    { uint32_t bits = FAST_READ32(0x622F84u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c0444: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x1C0444u;
    {
        const bool branch_taken_0x1c0444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0444u;
        // 0x1c0448: 0xc4a2e92c  lwc1        $f2, -0x16D4($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294961452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0444) {
            ctx->pc = 0x1C05E4u;
            goto label_1c05e4;
        }
    }
    ctx->pc = 0x1C044Cu;
label_1c044c:
    // 0x1c044c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1c044cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1c0450: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c0450u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c0454: 0x0  nop
    ctx->pc = 0x1c0454u;
    // NOP
    // 0x1c0458: 0x46170034  c.lt.s      $f0, $f23
    ctx->pc = 0x1c0458u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c045c: 0x0  nop
    ctx->pc = 0x1c045cu;
    // NOP
    // 0x1c0460: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x1C0460u;
    {
        const bool branch_taken_0x1c0460 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c0460) {
            ctx->pc = 0x1C04C0u;
            goto label_1c04c0;
        }
    }
    ctx->pc = 0x1C0468u;
    // 0x1c0468: 0x3c01bdcc  lui         $at, 0xBDCC
    ctx->pc = 0x1c0468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48588 << 16));
    // 0x1c046c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c046cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1c0470: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c0470u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c0474: 0x0  nop
    ctx->pc = 0x1c0474u;
    // NOP
    // 0x1c0478: 0x460d0034  c.lt.s      $f0, $f13
    ctx->pc = 0x1c0478u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c047c: 0x0  nop
    ctx->pc = 0x1c047cu;
    // NOP
    // 0x1c0480: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x1C0480u;
    {
        const bool branch_taken_0x1c0480 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c0480) {
            ctx->pc = 0x1C04C0u;
            goto label_1c04c0;
        }
    }
    ctx->pc = 0x1C0488u;
    // 0x1c0488: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1c0488u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1c048c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c048cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1c0490: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c0490u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c0494: 0x0  nop
    ctx->pc = 0x1c0494u;
    // NOP
    // 0x1c0498: 0x46006834  c.lt.s      $f13, $f0
    ctx->pc = 0x1c0498u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c049c: 0x0  nop
    ctx->pc = 0x1c049cu;
    // NOP
    // 0x1c04a0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1C04A0u;
    {
        const bool branch_taken_0x1c04a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C04A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C04A0u;
        // 0x1c04a4: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c04a0) {
            ctx->pc = 0x1C04C0u;
            goto label_1c04c0;
        }
    }
    ctx->pc = 0x1C04A8u;
    // 0x1c04a8: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x1c04a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x1c04ac: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1c04acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x1c04b0: 0xc4402f88  lwc1        $f0, 0x2F88($v0)
    ctx->pc = 0x1c04b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c04b4: 0xc4812f8c  lwc1        $f1, 0x2F8C($a0)
    ctx->pc = 0x1c04b4u;
    { uint32_t bits = FAST_READ32(0x622F8Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c04b8: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x1C04B8u;
    {
        const bool branch_taken_0x1c04b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C04BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C04B8u;
        // 0x1c04bc: 0xc4a2e930  lwc1        $f2, -0x16D0($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294961456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c04b8) {
            ctx->pc = 0x1C05E4u;
            goto label_1c05e4;
        }
    }
    ctx->pc = 0x1C04C0u;
label_1c04c0:
    // 0x1c04c0: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x1c04c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x1c04c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c04c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c04c8: 0x0  nop
    ctx->pc = 0x1c04c8u;
    // NOP
    // 0x1c04cc: 0x4600b834  c.lt.s      $f23, $f0
    ctx->pc = 0x1c04ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c04d0: 0x0  nop
    ctx->pc = 0x1c04d0u;
    // NOP
    // 0x1c04d4: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x1C04D4u;
    {
        const bool branch_taken_0x1c04d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c04d4) {
            ctx->pc = 0x1C0510u;
            goto label_1c0510;
        }
    }
    ctx->pc = 0x1C04DCu;
    // 0x1c04dc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1c04dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1c04e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c04e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c04e4: 0x0  nop
    ctx->pc = 0x1c04e4u;
    // NOP
    // 0x1c04e8: 0x460d0034  c.lt.s      $f0, $f13
    ctx->pc = 0x1c04e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c04ec: 0x0  nop
    ctx->pc = 0x1c04ecu;
    // NOP
    // 0x1c04f0: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1C04F0u;
    {
        const bool branch_taken_0x1c04f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C04F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C04F0u;
        // 0x1c04f4: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c04f0) {
            ctx->pc = 0x1C0518u;
            goto label_1c0518;
        }
    }
    ctx->pc = 0x1C04F8u;
    // 0x1c04f8: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x1c04f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x1c04fc: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1c04fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x1c0500: 0xc4402f90  lwc1        $f0, 0x2F90($v0)
    ctx->pc = 0x1c0500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c0504: 0xc4812f94  lwc1        $f1, 0x2F94($a0)
    ctx->pc = 0x1c0504u;
    { uint32_t bits = FAST_READ32(0x622F94u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c0508: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x1C0508u;
    {
        const bool branch_taken_0x1c0508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C050Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0508u;
        // 0x1c050c: 0xc4a2e934  lwc1        $f2, -0x16CC($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294961460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0508) {
            ctx->pc = 0x1C05E4u;
            goto label_1c05e4;
        }
    }
    ctx->pc = 0x1C0510u;
label_1c0510:
    // 0x1c0510: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1c0510u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1c0514: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c0514u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c0518:
    // 0x1c0518: 0x0  nop
    ctx->pc = 0x1c0518u;
    // NOP
    // 0x1c051c: 0x46170034  c.lt.s      $f0, $f23
    ctx->pc = 0x1c051cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c0520: 0x0  nop
    ctx->pc = 0x1c0520u;
    // NOP
    // 0x1c0524: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x1C0524u;
    {
        const bool branch_taken_0x1c0524 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c0524) {
            ctx->pc = 0x1C0564u;
            goto label_1c0564;
        }
    }
    ctx->pc = 0x1C052Cu;
    // 0x1c052c: 0x460d0034  c.lt.s      $f0, $f13
    ctx->pc = 0x1c052cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c0530: 0x0  nop
    ctx->pc = 0x1c0530u;
    // NOP
    // 0x1c0534: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1C0534u;
    {
        const bool branch_taken_0x1c0534 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C0538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0534u;
        // 0x1c0538: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0534) {
            ctx->pc = 0x1C0554u;
            goto label_1c0554;
        }
    }
    ctx->pc = 0x1C053Cu;
    // 0x1c053c: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x1c053cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x1c0540: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1c0540u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x1c0544: 0xc4402f98  lwc1        $f0, 0x2F98($v0)
    ctx->pc = 0x1c0544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c0548: 0xc4812f9c  lwc1        $f1, 0x2F9C($a0)
    ctx->pc = 0x1c0548u;
    { uint32_t bits = FAST_READ32(0x622F9Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c054c: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1C054Cu;
    {
        const bool branch_taken_0x1c054c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C054Cu;
        // 0x1c0550: 0xc4a2e938  lwc1        $f2, -0x16C8($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294961464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c054c) {
            ctx->pc = 0x1C05E4u;
            goto label_1c05e4;
        }
    }
    ctx->pc = 0x1C0554u;
label_1c0554:
    // 0x1c0554: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1c0554u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1c0558: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c0558u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c055c: 0x0  nop
    ctx->pc = 0x1c055cu;
    // NOP
    // 0x1c0560: 0x46170034  c.lt.s      $f0, $f23
    ctx->pc = 0x1c0560u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c0564:
    // 0x1c0564: 0x0  nop
    ctx->pc = 0x1c0564u;
    // NOP
    // 0x1c0568: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x1C0568u;
    {
        const bool branch_taken_0x1c0568 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c0568) {
            ctx->pc = 0x1C05A4u;
            goto label_1c05a4;
        }
    }
    ctx->pc = 0x1C0570u;
    // 0x1c0570: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x1c0570u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x1c0574: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c0574u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c0578: 0x0  nop
    ctx->pc = 0x1c0578u;
    // NOP
    // 0x1c057c: 0x46006834  c.lt.s      $f13, $f0
    ctx->pc = 0x1c057cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c0580: 0x0  nop
    ctx->pc = 0x1c0580u;
    // NOP
    // 0x1c0584: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1C0584u;
    {
        const bool branch_taken_0x1c0584 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C0588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0584u;
        // 0x1c0588: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0584) {
            ctx->pc = 0x1C05ACu;
            goto label_1c05ac;
        }
    }
    ctx->pc = 0x1C058Cu;
    // 0x1c058c: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x1c058cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x1c0590: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1c0590u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x1c0594: 0xc4402fa0  lwc1        $f0, 0x2FA0($v0)
    ctx->pc = 0x1c0594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c0598: 0xc4812fa4  lwc1        $f1, 0x2FA4($a0)
    ctx->pc = 0x1c0598u;
    { uint32_t bits = FAST_READ32(0x622FA4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c059c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1C059Cu;
    {
        const bool branch_taken_0x1c059c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C05A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C059Cu;
        // 0x1c05a0: 0xc4a2e93c  lwc1        $f2, -0x16C4($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294961468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c059c) {
            ctx->pc = 0x1C05E4u;
            goto label_1c05e4;
        }
    }
    ctx->pc = 0x1C05A4u;
label_1c05a4:
    // 0x1c05a4: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x1c05a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x1c05a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c05a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c05ac:
    // 0x1c05ac: 0x0  nop
    ctx->pc = 0x1c05acu;
    // NOP
    // 0x1c05b0: 0x4600b834  c.lt.s      $f23, $f0
    ctx->pc = 0x1c05b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c05b4: 0x0  nop
    ctx->pc = 0x1c05b4u;
    // NOP
    // 0x1c05b8: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x1C05B8u;
    {
        const bool branch_taken_0x1c05b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C05BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C05B8u;
        // 0x1c05bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c05b8) {
            ctx->pc = 0x1C05F4u;
            goto label_1c05f4;
        }
    }
    ctx->pc = 0x1C05C0u;
    // 0x1c05c0: 0x46006834  c.lt.s      $f13, $f0
    ctx->pc = 0x1c05c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c05c4: 0x0  nop
    ctx->pc = 0x1c05c4u;
    // NOP
    // 0x1c05c8: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1C05C8u;
    {
        const bool branch_taken_0x1c05c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C05CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C05C8u;
        // 0x1c05cc: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c05c8) {
            ctx->pc = 0x1C05F0u;
            goto label_1c05f0;
        }
    }
    ctx->pc = 0x1C05D0u;
    // 0x1c05d0: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x1c05d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x1c05d4: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1c05d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x1c05d8: 0xc4402fa8  lwc1        $f0, 0x2FA8($v0)
    ctx->pc = 0x1c05d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c05dc: 0xc4812fac  lwc1        $f1, 0x2FAC($a0)
    ctx->pc = 0x1c05dcu;
    { uint32_t bits = FAST_READ32(0x622FACu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c05e0: 0xc4a2e940  lwc1        $f2, -0x16C0($a1)
    ctx->pc = 0x1c05e0u;
    { uint32_t bits = FAST_READ32(0x50E940u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c05e4:
    // 0x1c05e4: 0xe7c00838  swc1        $f0, 0x838($fp)
    ctx->pc = 0x1c05e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 2104), bits); }
    // 0x1c05e8: 0xe7c1083c  swc1        $f1, 0x83C($fp)
    ctx->pc = 0x1c05e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 2108), bits); }
    // 0x1c05ec: 0xe7c20840  swc1        $f2, 0x840($fp)
    ctx->pc = 0x1c05ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 2112), bits); }
label_1c05f0:
    // 0x1c05f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c05f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c05f4:
    // 0x1c05f4: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x1c05f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1c05f8: 0xafc20850  sw          $v0, 0x850($fp)
    ctx->pc = 0x1c05f8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 2128), GPR_U32(ctx, 2));
    // 0x1c05fc: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x1c05fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c0600: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x1c0600u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c0604: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x1c0604u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c0608: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1c0608u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c060c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1c060cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c0610: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x1c0610u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c0614: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x1c0614u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c0618: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x1c0618u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c061c: 0xc7b900d8  lwc1        $f25, 0xD8($sp)
    ctx->pc = 0x1c061cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x1c0620: 0xc7b800d0  lwc1        $f24, 0xD0($sp)
    ctx->pc = 0x1c0620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1c0624: 0xc7b700c8  lwc1        $f23, 0xC8($sp)
    ctx->pc = 0x1c0624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1c0628: 0xc7b600c0  lwc1        $f22, 0xC0($sp)
    ctx->pc = 0x1c0628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1c062c: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x1c062cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1c0630: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x1c0630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c0634: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0634u;
        // 0x1c0638: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0634u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C063Cu;
    // 0x1c063c: 0x0  nop
    ctx->pc = 0x1c063cu;
    // NOP
    ctx->pc = 0x1c0640u;
}
