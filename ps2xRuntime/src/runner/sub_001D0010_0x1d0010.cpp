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

// Function: sub_001D0010
// Address: 0x1d0010 - 0x1d0448
void sub_001D0010_0x1d0010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D0010_0x1d0010");
#endif

    switch (ctx->pc) {
        case 0x1d0154u: goto label_1d0154;
        case 0x1d0164u: goto label_1d0164;
        case 0x1d01acu: goto label_1d01ac;
        case 0x1d01e0u: goto label_1d01e0;
        case 0x1d01f4u: goto label_1d01f4;
        case 0x1d0200u: goto label_1d0200;
        case 0x1d0224u: goto label_1d0224;
        case 0x1d0234u: goto label_1d0234;
        case 0x1d023cu: goto label_1d023c;
        case 0x1d0248u: goto label_1d0248;
        case 0x1d0278u: goto label_1d0278;
        case 0x1d0290u: goto label_1d0290;
        case 0x1d029cu: goto label_1d029c;
        case 0x1d02a4u: goto label_1d02a4;
        case 0x1d02d0u: goto label_1d02d0;
        case 0x1d02d8u: goto label_1d02d8;
        case 0x1d0304u: goto label_1d0304;
        case 0x1d030cu: goto label_1d030c;
        case 0x1d0368u: goto label_1d0368;
        case 0x1d0390u: goto label_1d0390;
        case 0x1d0398u: goto label_1d0398;
        case 0x1d03a4u: goto label_1d03a4;
        case 0x1d03b4u: goto label_1d03b4;
        case 0x1d03ccu: goto label_1d03cc;
        default: break;
    }

    ctx->pc = 0x1d0010u;

    // 0x1d0010: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x1d0010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x1d0014: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d0014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1d0018: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1d0018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1d001c: 0x8c43cdb4  lw          $v1, -0x324C($v0)
    ctx->pc = 0x1d001cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50CDB4u));
    // 0x1d0020: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x1d0020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x1d0024: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x1d0024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x1d0028: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x1d0028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x1d002c: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x1d002cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x1d0030: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x1d0030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x1d0034: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x1d0034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x1d0038: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x1d0038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x1d003c: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x1d003cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
    // 0x1d0040: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1d0040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1d0044: 0xe7b60100  swc1        $f22, 0x100($sp)
    ctx->pc = 0x1d0044u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x1d0048: 0xe7b500f8  swc1        $f21, 0xF8($sp)
    ctx->pc = 0x1d0048u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x1d004c: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x1d004cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x1d0050: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1d0050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d0054: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x1d0054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1d0058: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1D0058u;
    {
        const bool branch_taken_0x1d0058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D005Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0058u;
        // 0x1d005c: 0x80b82d  daddu       $s7, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0058) {
            ctx->pc = 0x1D00C8u;
            goto label_1d00c8;
        }
    }
    ctx->pc = 0x1D0060u;
    // 0x1d0060: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x1d0060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x1d0064: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x1D0064u;
    {
        const bool branch_taken_0x1d0064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D0068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0064u;
        // 0x1d0068: 0x3c1e0051  lui         $fp, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0064) {
            ctx->pc = 0x1D013Cu;
            goto label_1d013c;
        }
    }
    ctx->pc = 0x1D006Cu;
    // 0x1d006c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d006cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1d0070: 0x3c013eeb  lui         $at, 0x3EEB
    ctx->pc = 0x1d0070u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16107 << 16));
    // 0x1d0074: 0x3421851f  ori         $at, $at, 0x851F
    ctx->pc = 0x1d0074u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34079);
    // 0x1d0078: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d0078u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d007c: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x1d007cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x51489Cu));
    // 0x1d0080: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1d0080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d0084: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d0084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1d0088: 0x8c630120  lw          $v1, 0x120($v1)
    ctx->pc = 0x1d0088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 288)));
    // 0x1d008c: 0x10640004  beq         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D008Cu;
    {
        const bool branch_taken_0x1d008c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1D0090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D008Cu;
        // 0x1d0090: 0xe440ec54  swc1        $f0, -0x13AC($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294962260), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d008c) {
            ctx->pc = 0x1D00A0u;
            goto label_1d00a0;
        }
    }
    ctx->pc = 0x1D0094u;
    // 0x1d0094: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1d0094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d0098: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D0098u;
    {
        const bool branch_taken_0x1d0098 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D009Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0098u;
        // 0x1d009c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0098) {
            ctx->pc = 0x1D00B4u;
            goto label_1d00b4;
        }
    }
    ctx->pc = 0x1D00A0u;
label_1d00a0:
    // 0x1d00a0: 0x3c013f42  lui         $at, 0x3F42
    ctx->pc = 0x1d00a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16194 << 16));
    // 0x1d00a4: 0x34218f5c  ori         $at, $at, 0x8F5C
    ctx->pc = 0x1d00a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36700);
    // 0x1d00a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d00a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d00ac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D00ACu;
    {
        const bool branch_taken_0x1d00ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D00B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D00ACu;
        // 0x1d00b0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d00ac) {
            ctx->pc = 0x1D00C0u;
            goto label_1d00c0;
        }
    }
    ctx->pc = 0x1D00B4u;
label_1d00b4:
    // 0x1d00b4: 0x3c013f3a  lui         $at, 0x3F3A
    ctx->pc = 0x1d00b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16186 << 16));
    // 0x1d00b8: 0x3421e148  ori         $at, $at, 0xE148
    ctx->pc = 0x1d00b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57672);
    // 0x1d00bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d00bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d00c0:
    // 0x1d00c0: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1D00C0u;
    {
        const bool branch_taken_0x1d00c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D00C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D00C0u;
        // 0x1d00c4: 0xe440ec58  swc1        $f0, -0x13A8($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294962264), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d00c0) {
            ctx->pc = 0x1D013Cu;
            goto label_1d013c;
        }
    }
    ctx->pc = 0x1D00C8u;
label_1d00c8:
    // 0x1d00c8: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x1d00c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x1d00cc: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1D00CCu;
    {
        const bool branch_taken_0x1d00cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D00D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D00CCu;
        // 0x1d00d0: 0x3c060051  lui         $a2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d00cc) {
            ctx->pc = 0x1D0138u;
            goto label_1d0138;
        }
    }
    ctx->pc = 0x1D00D4u;
    // 0x1d00d4: 0x3c013f26  lui         $at, 0x3F26
    ctx->pc = 0x1d00d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16166 << 16));
    // 0x1d00d8: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1d00d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1d00dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d00dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d00e0: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1d00e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x1d00e4: 0x3c013f11  lui         $at, 0x3F11
    ctx->pc = 0x1d00e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16145 << 16));
    // 0x1d00e8: 0x3421eb85  ori         $at, $at, 0xEB85
    ctx->pc = 0x1d00e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)60293);
    // 0x1d00ec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d00ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d00f0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d00f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1d00f4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1d00f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1d00f8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d00f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1d00fc: 0x3c013f45  lui         $at, 0x3F45
    ctx->pc = 0x1d00fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16197 << 16));
    // 0x1d0100: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x1d0100u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
    // 0x1d0104: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1d0104u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1d0108: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1d0108u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x1d010c: 0x3c013e75  lui         $at, 0x3E75
    ctx->pc = 0x1d010cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15989 << 16));
    // 0x1d0110: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1d0110u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x1d0114: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1d0114u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1d0118: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1d0118u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x1d011c: 0xe4a0ec44  swc1        $f0, -0x13BC($a1)
    ctx->pc = 0x1d011cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50EC44u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50EC44u, _value); } while (0); }
    // 0x1d0120: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x1d0120u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0124: 0xe4c1ec40  swc1        $f1, -0x13C0($a2)
    ctx->pc = 0x1d0124u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294962240), bits); }
    // 0x1d0128: 0xe442ec58  swc1        $f2, -0x13A8($v0)
    ctx->pc = 0x1d0128u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50EC58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50EC58u, _value); } while (0); }
    // 0x1d012c: 0xe463ec50  swc1        $f3, -0x13B0($v1)
    ctx->pc = 0x1d012cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50EC50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50EC50u, _value); } while (0); }
    // 0x1d0130: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D0130u;
    {
        const bool branch_taken_0x1d0130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0130u;
        // 0x1d0134: 0xe484ec4c  swc1        $f4, -0x13B4($a0) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294962252), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0130) {
            ctx->pc = 0x1D013Cu;
            goto label_1d013c;
        }
    }
    ctx->pc = 0x1D0138u;
label_1d0138:
    // 0x1d0138: 0x3c1e0051  lui         $fp, 0x51
    ctx->pc = 0x1d0138u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)81 << 16));
label_1d013c:
    // 0x1d013c: 0x8ee51bc0  lw          $a1, 0x1BC0($s7)
    ctx->pc = 0x1d013cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 7104)));
    // 0x1d0140: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1d0140u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1d0144: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d0144u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1d0148: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1d0148u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1d014c: 0xc06ba26  jal         func_1AE898
    ctx->pc = 0x1D014Cu;
    SET_GPR_U32(ctx, 31, 0x1D0154u);
    ctx->pc = 0x1D0150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D014Cu;
    // 0x1d0150: 0x24840840  addiu       $a0, $a0, 0x840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE898u, 0x1D014Cu, 0x1D0154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0154u;
label_1d0154:
    // 0x1d0154: 0x3c130063  lui         $s3, 0x63
    ctx->pc = 0x1d0154u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)99 << 16));
    // 0x1d0158: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d0158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d015c: 0xc051800  jal         func_146000
    ctx->pc = 0x1D015Cu;
    SET_GPR_U32(ctx, 31, 0x1D0164u);
    ctx->pc = 0x1D0160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D015Cu;
    // 0x1d0160: 0xaee20040  sw          $v0, 0x40($s7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 23), 64), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146000u, 0x1D015Cu, 0x1D0164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0164u;
label_1d0164:
    // 0x1d0164: 0x26f45930  addiu       $s4, $s7, 0x5930
    ctx->pc = 0x1d0164u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 23), 22832));
    // 0x1d0168: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d0168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1d016c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1d016cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x1d0170: 0xc440ec38  lwc1        $f0, -0x13C8($v0)
    ctx->pc = 0x1d0170u;
    { uint32_t bits = FAST_READ32(0x50EC38u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d0174: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1d0174u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x1d0178: 0xc461ec3c  lwc1        $f1, -0x13C4($v1)
    ctx->pc = 0x1d0178u;
    { uint32_t bits = FAST_READ32(0x50EC3Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d017c: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x1d017cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1d0180: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1d0180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1d0184: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x1d0184u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d0188: 0xc48cec48  lwc1        $f12, -0x13B8($a0)
    ctx->pc = 0x1d0188u;
    { uint32_t bits = FAST_READ32(0x50EC48u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d018c: 0x26f50430  addiu       $s5, $s7, 0x430
    ctx->pc = 0x1d018cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 23), 1072));
    // 0x1d0190: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x1d0190u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1d0194: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d0194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0198: 0xe614000c  swc1        $f20, 0xC($s0)
    ctx->pc = 0x1d0198u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x1d019c: 0x26f25a00  addiu       $s2, $s7, 0x5A00
    ctx->pc = 0x1d019cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), 23040));
    // 0x1d01a0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1d01a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1d01a4: 0xc05e602  jal         func_179808
    ctx->pc = 0x1D01A4u;
    SET_GPR_U32(ctx, 31, 0x1D01ACu);
    ctx->pc = 0x1D01A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D01A4u;
    // 0x1d01a8: 0x26f61bd0  addiu       $s6, $s7, 0x1BD0 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 23), 7120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179808u, 0x1D01A4u, 0x1D01ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D01ACu;
label_1d01ac:
    // 0x1d01ac: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1d01acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1d01b0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1d01b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1d01b4: 0x8e6794b0  lw          $a3, -0x6B50($s3)
    ctx->pc = 0x1d01b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294939824)));
    // 0x1d01b8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1d01b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1d01bc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1d01bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1d01c0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1d01c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d01c4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d01c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d01c8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d01c8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d01cc: 0x240b0006  addiu       $t3, $zero, 0x6
    ctx->pc = 0x1d01ccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1d01d0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1d01d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d01d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d01d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d01d8: 0xc073418  jal         func_1CD060
    ctx->pc = 0x1D01D8u;
    SET_GPR_U32(ctx, 31, 0x1D01E0u);
    ctx->pc = 0x1D01DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D01D8u;
    // 0x1d01dc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD060u, 0x1D01D8u, 0x1D01E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D01E0u;
label_1d01e0:
    // 0x1d01e0: 0x3c013f93  lui         $at, 0x3F93
    ctx->pc = 0x1d01e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16275 << 16));
    // 0x1d01e4: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1d01e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x1d01e8: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1d01e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1d01ec: 0xc067b9c  jal         func_19EE70
    ctx->pc = 0x1D01ECu;
    SET_GPR_U32(ctx, 31, 0x1D01F4u);
    ctx->pc = 0x1D01F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D01ECu;
    // 0x1d01f0: 0x240400d0  addiu       $a0, $zero, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1D01ECu, 0x1D01F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D01F4u;
label_1d01f4:
    // 0x1d01f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d01f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d01f8: 0xc073478  jal         func_1CD1E0
    ctx->pc = 0x1D01F8u;
    SET_GPR_U32(ctx, 31, 0x1D0200u);
    ctx->pc = 0x1D01FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D01F8u;
    // 0x1d01fc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1E0u, 0x1D01F8u, 0x1D0200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0200u;
label_1d0200:
    // 0x1d0200: 0xc7c0ec44  lwc1        $f0, -0x13BC($fp)
    ctx->pc = 0x1d0200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4294962244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d0204: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d0204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0208: 0xe7b50010  swc1        $f21, 0x10($sp)
    ctx->pc = 0x1d0208u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1d020c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d020cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0210: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1d0210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1d0214: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d0214u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0218: 0xe614000c  swc1        $f20, 0xC($s0)
    ctx->pc = 0x1d0218u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x1d021c: 0xc048b52  jal         func_122D48
    ctx->pc = 0x1D021Cu;
    SET_GPR_U32(ctx, 31, 0x1D0224u);
    ctx->pc = 0x1D0220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D021Cu;
    // 0x1d0220: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122D48u, 0x1D021Cu, 0x1D0224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0224u;
label_1d0224:
    // 0x1d0224: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d0224u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0228: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d0228u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d022c: 0xc073ad0  jal         func_1CEB40
    ctx->pc = 0x1D022Cu;
    SET_GPR_U32(ctx, 31, 0x1D0234u);
    ctx->pc = 0x1D0230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D022Cu;
    // 0x1d0230: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEB40u, 0x1D022Cu, 0x1D0234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0234u;
label_1d0234:
    // 0x1d0234: 0xc067b9c  jal         func_19EE70
    ctx->pc = 0x1D0234u;
    SET_GPR_U32(ctx, 31, 0x1D023Cu);
    ctx->pc = 0x1D0238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0234u;
    // 0x1d0238: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1D0234u, 0x1D023Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D023Cu;
label_1d023c:
    // 0x1d023c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d023cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0240: 0xc073b0a  jal         func_1CEC28
    ctx->pc = 0x1D0240u;
    SET_GPR_U32(ctx, 31, 0x1D0248u);
    ctx->pc = 0x1D0244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0240u;
    // 0x1d0244: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEC28u, 0x1D0240u, 0x1D0248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0248u;
label_1d0248:
    // 0x1d0248: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d0248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d024c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d024cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0250: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1d0250u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x1d0254: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d0254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0258: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d0258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1d025c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d025cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0260: 0xc440ec40  lwc1        $f0, -0x13C0($v0)
    ctx->pc = 0x1d0260u;
    { uint32_t bits = FAST_READ32(0x50EC40u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d0264: 0xe7b50010  swc1        $f21, 0x10($sp)
    ctx->pc = 0x1d0264u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1d0268: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1d0268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1d026c: 0xe614000c  swc1        $f20, 0xC($s0)
    ctx->pc = 0x1d026cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x1d0270: 0xc048b52  jal         func_122D48
    ctx->pc = 0x1D0270u;
    SET_GPR_U32(ctx, 31, 0x1D0278u);
    ctx->pc = 0x1D0274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0270u;
    // 0x1d0274: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122D48u, 0x1D0270u, 0x1D0278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0278u;
label_1d0278:
    // 0x1d0278: 0xc7ac0018  lwc1        $f12, 0x18($sp)
    ctx->pc = 0x1d0278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d027c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1d027cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1d0280: 0x26e70040  addiu       $a3, $s7, 0x40
    ctx->pc = 0x1d0280u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 64));
    // 0x1d0284: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d0284u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0288: 0xc075044  jal         func_1D4110
    ctx->pc = 0x1D0288u;
    SET_GPR_U32(ctx, 31, 0x1D0290u);
    ctx->pc = 0x1D028Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0288u;
    // 0x1d028c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4110u, 0x1D0288u, 0x1D0290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0290u;
label_1d0290:
    // 0x1d0290: 0x8ee51bc0  lw          $a1, 0x1BC0($s7)
    ctx->pc = 0x1d0290u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 7104)));
    // 0x1d0294: 0xc075080  jal         func_1D4200
    ctx->pc = 0x1D0294u;
    SET_GPR_U32(ctx, 31, 0x1D029Cu);
    ctx->pc = 0x1D0298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0294u;
    // 0x1d0298: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4200u, 0x1D0294u, 0x1D029Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D029Cu;
label_1d029c:
    // 0x1d029c: 0xc067b9c  jal         func_19EE70
    ctx->pc = 0x1D029Cu;
    SET_GPR_U32(ctx, 31, 0x1D02A4u);
    ctx->pc = 0x1D02A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D029Cu;
    // 0x1d02a0: 0x240400d1  addiu       $a0, $zero, 0xD1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 209));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1D029Cu, 0x1D02A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D02A4u;
label_1d02a4:
    // 0x1d02a4: 0x8e6a94b0  lw          $t2, -0x6B50($s3)
    ctx->pc = 0x1d02a4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294939824)));
    // 0x1d02a8: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x1d02a8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x1d02ac: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1d02acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1d02b0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d02b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d02b4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d02b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d02b8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d02b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d02bc: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1d02bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d02c0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d02c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d02c4: 0x240b0003  addiu       $t3, $zero, 0x3
    ctx->pc = 0x1d02c4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d02c8: 0xc07508c  jal         func_1D4230
    ctx->pc = 0x1D02C8u;
    SET_GPR_U32(ctx, 31, 0x1D02D0u);
    ctx->pc = 0x1D02CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D02C8u;
    // 0x1d02cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4230u, 0x1D02C8u, 0x1D02D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D02D0u;
label_1d02d0:
    // 0x1d02d0: 0xc067b9c  jal         func_19EE70
    ctx->pc = 0x1D02D0u;
    SET_GPR_U32(ctx, 31, 0x1D02D8u);
    ctx->pc = 0x1D02D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D02D0u;
    // 0x1d02d4: 0x240400d2  addiu       $a0, $zero, 0xD2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 210));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1D02D0u, 0x1D02D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D02D8u;
label_1d02d8:
    // 0x1d02d8: 0x8e6a94b0  lw          $t2, -0x6B50($s3)
    ctx->pc = 0x1d02d8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294939824)));
    // 0x1d02dc: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x1d02dcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x1d02e0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1d02e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1d02e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d02e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d02e8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d02e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d02ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d02ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d02f0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d02f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d02f4: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1d02f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d02f8: 0x240b0003  addiu       $t3, $zero, 0x3
    ctx->pc = 0x1d02f8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d02fc: 0xc07508c  jal         func_1D4230
    ctx->pc = 0x1D02FCu;
    SET_GPR_U32(ctx, 31, 0x1D0304u);
    ctx->pc = 0x1D0300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D02FCu;
    // 0x1d0300: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4230u, 0x1D02FCu, 0x1D0304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0304u;
label_1d0304:
    // 0x1d0304: 0xc07534a  jal         func_1D4D28
    ctx->pc = 0x1D0304u;
    SET_GPR_U32(ctx, 31, 0x1D030Cu);
    ctx->pc = 0x1D0308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0304u;
    // 0x1d0308: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4D28u, 0x1D0304u, 0x1D030Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D030Cu;
label_1d030c:
    // 0x1d030c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d030cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1d0310: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x1d0310u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1d0314: 0xc441ec4c  lwc1        $f1, -0x13B4($v0)
    ctx->pc = 0x1d0314u;
    { uint32_t bits = FAST_READ32(0x50EC4Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d0318: 0x24040102  addiu       $a0, $zero, 0x102
    ctx->pc = 0x1d0318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
    // 0x1d031c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d031cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1d0320: 0xc440ec50  lwc1        $f0, -0x13B0($v0)
    ctx->pc = 0x1d0320u;
    { uint32_t bits = FAST_READ32(0x50EC50u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d0324: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x1d0324u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1d0328: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d0328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1d032c: 0xe614000c  swc1        $f20, 0xC($s0)
    ctx->pc = 0x1d032cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x1d0330: 0xc442ec54  lwc1        $f2, -0x13AC($v0)
    ctx->pc = 0x1d0330u;
    { uint32_t bits = FAST_READ32(0x50EC54u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d0334: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1d0334u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1d0338: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d0338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1d033c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1d033cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1d0340: 0xc443ec58  lwc1        $f3, -0x13A8($v0)
    ctx->pc = 0x1d0340u;
    { uint32_t bits = FAST_READ32(0x50EC58u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1d0344: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1d0344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d0348: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x1d0348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d034c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1d034cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1d0350: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x1d0350u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x1d0354: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x1d0354u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x1d0358: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1d0358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1d035c: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x1d035cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1d0360: 0xc067b9c  jal         func_19EE70
    ctx->pc = 0x1D0360u;
    SET_GPR_U32(ctx, 31, 0x1D0368u);
    ctx->pc = 0x1D0364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0360u;
    // 0x1d0364: 0xe634000c  swc1        $f20, 0xC($s1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1D0360u, 0x1D0368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0368u;
label_1d0368:
    // 0x1d0368: 0x3c09001d  lui         $t1, 0x1D
    ctx->pc = 0x1d0368u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)29 << 16));
    // 0x1d036c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1d036cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0370: 0x2529fec0  addiu       $t1, $t1, -0x140
    ctx->pc = 0x1d0370u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294966976));
    // 0x1d0374: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1d0374u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0378: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x1d0378u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d037c: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x1d037cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0380: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1d0380u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0384: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d0384u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0388: 0xc0759ce  jal         func_1D6738
    ctx->pc = 0x1D0388u;
    SET_GPR_U32(ctx, 31, 0x1D0390u);
    ctx->pc = 0x1D038Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0388u;
    // 0x1d038c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6738u, 0x1D0388u, 0x1D0390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0390u;
label_1d0390:
    // 0x1d0390: 0xc067b9c  jal         func_19EE70
    ctx->pc = 0x1D0390u;
    SET_GPR_U32(ctx, 31, 0x1D0398u);
    ctx->pc = 0x1D0394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0390u;
    // 0x1d0394: 0x2404003b  addiu       $a0, $zero, 0x3B (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1D0390u, 0x1D0398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0398u;
label_1d0398:
    // 0x1d0398: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d0398u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d039c: 0xc067b9c  jal         func_19EE70
    ctx->pc = 0x1D039Cu;
    SET_GPR_U32(ctx, 31, 0x1D03A4u);
    ctx->pc = 0x1D03A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D039Cu;
    // 0x1d03a0: 0x2404003c  addiu       $a0, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1D039Cu, 0x1D03A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D03A4u;
label_1d03a4:
    // 0x1d03a4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1d03a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d03a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d03a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d03ac: 0xc075a44  jal         func_1D6910
    ctx->pc = 0x1D03ACu;
    SET_GPR_U32(ctx, 31, 0x1D03B4u);
    ctx->pc = 0x1D03B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D03ACu;
    // 0x1d03b0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6910u, 0x1D03ACu, 0x1D03B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D03B4u;
label_1d03b4:
    // 0x1d03b4: 0x3c013f0c  lui         $at, 0x3F0C
    ctx->pc = 0x1d03b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16140 << 16));
    // 0x1d03b8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1d03b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1d03bc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1d03bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d03c0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1d03c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d03c4: 0xc075920  jal         func_1D6480
    ctx->pc = 0x1D03C4u;
    SET_GPR_U32(ctx, 31, 0x1D03CCu);
    ctx->pc = 0x1D03C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D03C4u;
    // 0x1d03c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6480u, 0x1D03C4u, 0x1D03CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D03CCu;
label_1d03cc:
    // 0x1d03cc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1d03ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1d03d0: 0xaee05ad4  sw          $zero, 0x5AD4($s7)
    ctx->pc = 0x1d03d0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 23252), GPR_U32(ctx, 0));
    // 0x1d03d4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1d03d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1d03d8: 0xaee01b70  sw          $zero, 0x1B70($s7)
    ctx->pc = 0x1d03d8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 7024), GPR_U32(ctx, 0));
    // 0x1d03dc: 0xaee25ad0  sw          $v0, 0x5AD0($s7)
    ctx->pc = 0x1d03dcu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 23248), GPR_U32(ctx, 2));
    // 0x1d03e0: 0xaee01b74  sw          $zero, 0x1B74($s7)
    ctx->pc = 0x1d03e0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 7028), GPR_U32(ctx, 0));
    // 0x1d03e4: 0xaee01b78  sw          $zero, 0x1B78($s7)
    ctx->pc = 0x1d03e4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 7032), GPR_U32(ctx, 0));
    // 0x1d03e8: 0xaee01b7c  sw          $zero, 0x1B7C($s7)
    ctx->pc = 0x1d03e8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 7036), GPR_U32(ctx, 0));
    // 0x1d03ec: 0xaee01b80  sw          $zero, 0x1B80($s7)
    ctx->pc = 0x1d03ecu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 7040), GPR_U32(ctx, 0));
    // 0x1d03f0: 0xaee01b88  sw          $zero, 0x1B88($s7)
    ctx->pc = 0x1d03f0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 7048), GPR_U32(ctx, 0));
    // 0x1d03f4: 0xaee01b8c  sw          $zero, 0x1B8C($s7)
    ctx->pc = 0x1d03f4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 7052), GPR_U32(ctx, 0));
    // 0x1d03f8: 0xaee01b90  sw          $zero, 0x1B90($s7)
    ctx->pc = 0x1d03f8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 7056), GPR_U32(ctx, 0));
    // 0x1d03fc: 0xaee01b94  sw          $zero, 0x1B94($s7)
    ctx->pc = 0x1d03fcu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 7060), GPR_U32(ctx, 0));
    // 0x1d0400: 0xaee01b98  sw          $zero, 0x1B98($s7)
    ctx->pc = 0x1d0400u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 7064), GPR_U32(ctx, 0));
    // 0x1d0404: 0xaee01ba0  sw          $zero, 0x1BA0($s7)
    ctx->pc = 0x1d0404u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 7072), GPR_U32(ctx, 0));
    // 0x1d0408: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x1d0408u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1d040c: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x1d040cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1d0410: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x1d0410u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d0414: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x1d0414u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1d0418: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x1d0418u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1d041c: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x1d041cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1d0420: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x1d0420u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1d0424: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1d0424u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d0428: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x1d0428u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d042c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1d042cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d0430: 0xc7b60100  lwc1        $f22, 0x100($sp)
    ctx->pc = 0x1d0430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1d0434: 0xc7b500f8  lwc1        $f21, 0xF8($sp)
    ctx->pc = 0x1d0434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1d0438: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x1d0438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d043c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D043Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D043Cu;
        // 0x1d0440: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D043Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0444u;
    // 0x1d0444: 0x0  nop
    ctx->pc = 0x1d0444u;
    // NOP
    ctx->pc = 0x1d0448u;
}
