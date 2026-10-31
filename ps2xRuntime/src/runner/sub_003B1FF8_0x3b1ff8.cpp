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

// Function: sub_003B1FF8
// Address: 0x3b1ff8 - 0x3b2178
void sub_003B1FF8_0x3b1ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B1FF8_0x3b1ff8");
#endif

    switch (ctx->pc) {
        case 0x3b1ff8u: goto label_3b1ff8;
        case 0x3b1ffcu: goto label_3b1ffc;
        case 0x3b2000u: goto label_3b2000;
        case 0x3b2004u: goto label_3b2004;
        case 0x3b2008u: goto label_3b2008;
        case 0x3b200cu: goto label_3b200c;
        case 0x3b2010u: goto label_3b2010;
        case 0x3b2014u: goto label_3b2014;
        case 0x3b2018u: goto label_3b2018;
        case 0x3b201cu: goto label_3b201c;
        case 0x3b2020u: goto label_3b2020;
        case 0x3b2024u: goto label_3b2024;
        case 0x3b2028u: goto label_3b2028;
        case 0x3b202cu: goto label_3b202c;
        case 0x3b2030u: goto label_3b2030;
        case 0x3b2034u: goto label_3b2034;
        case 0x3b2038u: goto label_3b2038;
        case 0x3b203cu: goto label_3b203c;
        case 0x3b2040u: goto label_3b2040;
        case 0x3b2044u: goto label_3b2044;
        case 0x3b2048u: goto label_3b2048;
        case 0x3b204cu: goto label_3b204c;
        case 0x3b2050u: goto label_3b2050;
        case 0x3b2054u: goto label_3b2054;
        case 0x3b2058u: goto label_3b2058;
        case 0x3b205cu: goto label_3b205c;
        case 0x3b2060u: goto label_3b2060;
        case 0x3b2064u: goto label_3b2064;
        case 0x3b2068u: goto label_3b2068;
        case 0x3b206cu: goto label_3b206c;
        case 0x3b2070u: goto label_3b2070;
        case 0x3b2074u: goto label_3b2074;
        case 0x3b2078u: goto label_3b2078;
        case 0x3b207cu: goto label_3b207c;
        case 0x3b2080u: goto label_3b2080;
        case 0x3b2084u: goto label_3b2084;
        case 0x3b2088u: goto label_3b2088;
        case 0x3b208cu: goto label_3b208c;
        case 0x3b2090u: goto label_3b2090;
        case 0x3b2094u: goto label_3b2094;
        case 0x3b2098u: goto label_3b2098;
        case 0x3b209cu: goto label_3b209c;
        case 0x3b20a0u: goto label_3b20a0;
        case 0x3b20a4u: goto label_3b20a4;
        case 0x3b20a8u: goto label_3b20a8;
        case 0x3b20acu: goto label_3b20ac;
        case 0x3b20b0u: goto label_3b20b0;
        case 0x3b20b4u: goto label_3b20b4;
        case 0x3b20b8u: goto label_3b20b8;
        case 0x3b20bcu: goto label_3b20bc;
        case 0x3b20c0u: goto label_3b20c0;
        case 0x3b20c4u: goto label_3b20c4;
        case 0x3b20c8u: goto label_3b20c8;
        case 0x3b20ccu: goto label_3b20cc;
        case 0x3b20d0u: goto label_3b20d0;
        case 0x3b20d4u: goto label_3b20d4;
        case 0x3b20d8u: goto label_3b20d8;
        case 0x3b20dcu: goto label_3b20dc;
        case 0x3b20e0u: goto label_3b20e0;
        case 0x3b20e4u: goto label_3b20e4;
        case 0x3b20e8u: goto label_3b20e8;
        case 0x3b20ecu: goto label_3b20ec;
        case 0x3b20f0u: goto label_3b20f0;
        case 0x3b20f4u: goto label_3b20f4;
        case 0x3b20f8u: goto label_3b20f8;
        case 0x3b20fcu: goto label_3b20fc;
        case 0x3b2100u: goto label_3b2100;
        case 0x3b2104u: goto label_3b2104;
        case 0x3b2108u: goto label_3b2108;
        case 0x3b210cu: goto label_3b210c;
        case 0x3b2110u: goto label_3b2110;
        case 0x3b2114u: goto label_3b2114;
        case 0x3b2118u: goto label_3b2118;
        case 0x3b211cu: goto label_3b211c;
        case 0x3b2120u: goto label_3b2120;
        case 0x3b2124u: goto label_3b2124;
        case 0x3b2128u: goto label_3b2128;
        case 0x3b212cu: goto label_3b212c;
        case 0x3b2130u: goto label_3b2130;
        case 0x3b2134u: goto label_3b2134;
        case 0x3b2138u: goto label_3b2138;
        case 0x3b213cu: goto label_3b213c;
        case 0x3b2140u: goto label_3b2140;
        case 0x3b2144u: goto label_3b2144;
        case 0x3b2148u: goto label_3b2148;
        case 0x3b214cu: goto label_3b214c;
        case 0x3b2150u: goto label_3b2150;
        case 0x3b2154u: goto label_3b2154;
        case 0x3b2158u: goto label_3b2158;
        case 0x3b215cu: goto label_3b215c;
        case 0x3b2160u: goto label_3b2160;
        case 0x3b2164u: goto label_3b2164;
        case 0x3b2168u: goto label_3b2168;
        case 0x3b216cu: goto label_3b216c;
        case 0x3b2170u: goto label_3b2170;
        case 0x3b2174u: goto label_3b2174;
        default: break;
    }

    ctx->pc = 0x3b1ff8u;

label_3b1ff8:
    // 0x3b1ff8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3b1ff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3b1ffc:
    // 0x3b1ffc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3b1ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3b2000:
    // 0x3b2000: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3b2000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_3b2004:
    // 0x3b2004: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3b2004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_3b2008:
    // 0x3b2008: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3b2008u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b200c:
    // 0x3b200c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b200cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3b2010:
    // 0x3b2010: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3b2010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3b2014:
    // 0x3b2014: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3b2014u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3b2018:
    // 0x3b2018: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3b2018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3b201c:
    // 0x3b201c: 0x40f809  jalr        $v0
label_3b2020:
    if (ctx->pc == 0x3B2020u) {
        ctx->pc = 0x3B2020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B201Cu;
        // 0x3b2020: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2024u;
        goto label_3b2024;
    }
    ctx->pc = 0x3B201Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B2024u);
        ctx->pc = 0x3B2020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B201Cu;
        // 0x3b2020: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B201Cu, 0x3B2024u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B2024u;
label_3b2024:
    // 0x3b2024: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3b2024u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b2028:
    // 0x3b2028: 0xc0e409a  jal         func_390268
label_3b202c:
    if (ctx->pc == 0x3B202Cu) {
        ctx->pc = 0x3B202Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2028u;
        // 0x3b202c: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2030u;
        goto label_3b2030;
    }
    ctx->pc = 0x3B2028u;
    SET_GPR_U32(ctx, 31, 0x3B2030u);
    ctx->pc = 0x3B202Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2028u;
    // 0x3b202c: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x3B2028u, 0x3B2030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2030u;
label_3b2030:
    // 0x3b2030: 0x5040004a  beql        $v0, $zero, . + 4 + (0x4A << 2)
label_3b2034:
    if (ctx->pc == 0x3B2034u) {
        ctx->pc = 0x3B2034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2030u;
        // 0x3b2034: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2038u;
        goto label_3b2038;
    }
    ctx->pc = 0x3B2030u;
    {
        const bool branch_taken_0x3b2030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b2030) {
            ctx->pc = 0x3B2034u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B2030u;
            // 0x3b2034: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B215Cu;
            goto label_3b215c;
        }
    }
    ctx->pc = 0x3B2038u;
label_3b2038:
    // 0x3b2038: 0xc089fee  jal         func_227FB8
label_3b203c:
    if (ctx->pc == 0x3B203Cu) {
        ctx->pc = 0x3B203Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2038u;
        // 0x3b203c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2040u;
        goto label_3b2040;
    }
    ctx->pc = 0x3B2038u;
    SET_GPR_U32(ctx, 31, 0x3B2040u);
    ctx->pc = 0x3B203Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2038u;
    // 0x3b203c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227FB8u, 0x3B2038u, 0x3B2040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2040u;
label_3b2040:
    // 0x3b2040: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_3b2044:
    if (ctx->pc == 0x3B2044u) {
        ctx->pc = 0x3B2044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2040u;
        // 0x3b2044: 0x9222001f  lbu         $v0, 0x1F($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 31)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2048u;
        goto label_3b2048;
    }
    ctx->pc = 0x3B2040u;
    {
        const bool branch_taken_0x3b2040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b2040) {
            ctx->pc = 0x3B2044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B2040u;
            // 0x3b2044: 0x9222001f  lbu         $v0, 0x1F($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 31)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B206Cu;
            goto label_3b206c;
        }
    }
    ctx->pc = 0x3B2048u;
label_3b2048:
    // 0x3b2048: 0x9222001f  lbu         $v0, 0x1F($s1)
    ctx->pc = 0x3b2048u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 31)));
label_3b204c:
    // 0x3b204c: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x3b204cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_3b2050:
    // 0x3b2050: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3b2050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3b2054:
    // 0x3b2054: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x3b2054u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3b2058:
    // 0x3b2058: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
label_3b205c:
    if (ctx->pc == 0x3B205Cu) {
        ctx->pc = 0x3B205Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2058u;
        // 0x3b205c: 0xa222001f  sb          $v0, 0x1F($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 31), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2060u;
        goto label_3b2060;
    }
    ctx->pc = 0x3B2058u;
    {
        const bool branch_taken_0x3b2058 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x3B205Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2058u;
        // 0x3b205c: 0xa222001f  sb          $v0, 0x1F($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 31), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2058) {
            ctx->pc = 0x3B2068u;
            goto label_3b2068;
        }
    }
    ctx->pc = 0x3B2060u;
label_3b2060:
    // 0x3b2060: 0x1000003e  b           . + 4 + (0x3E << 2)
label_3b2064:
    if (ctx->pc == 0x3B2064u) {
        ctx->pc = 0x3B2064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2060u;
        // 0x3b2064: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2068u;
        goto label_3b2068;
    }
    ctx->pc = 0x3B2060u;
    {
        const bool branch_taken_0x3b2060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2060u;
        // 0x3b2064: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2060) {
            ctx->pc = 0x3B215Cu;
            goto label_3b215c;
        }
    }
    ctx->pc = 0x3B2068u;
label_3b2068:
    // 0x3b2068: 0x9222001f  lbu         $v0, 0x1F($s1)
    ctx->pc = 0x3b2068u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 31)));
label_3b206c:
    // 0x3b206c: 0x2c42001e  sltiu       $v0, $v0, 0x1E
    ctx->pc = 0x3b206cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
label_3b2070:
    // 0x3b2070: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_3b2074:
    if (ctx->pc == 0x3B2074u) {
        ctx->pc = 0x3B2074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2070u;
        // 0x3b2074: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2078u;
        goto label_3b2078;
    }
    ctx->pc = 0x3B2070u;
    {
        const bool branch_taken_0x3b2070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2070u;
        // 0x3b2074: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2070) {
            ctx->pc = 0x3B2098u;
            goto label_3b2098;
        }
    }
    ctx->pc = 0x3B2078u;
label_3b2078:
    // 0x3b2078: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x3b2078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3b207c:
    // 0x3b207c: 0xc0cd4ee  jal         func_3353B8
label_3b2080:
    if (ctx->pc == 0x3B2080u) {
        ctx->pc = 0x3B2080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B207Cu;
        // 0x3b2080: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2084u;
        goto label_3b2084;
    }
    ctx->pc = 0x3B207Cu;
    SET_GPR_U32(ctx, 31, 0x3B2084u);
    ctx->pc = 0x3B2080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B207Cu;
    // 0x3b2080: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3B207Cu, 0x3B2084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2084u;
label_3b2084:
    // 0x3b2084: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x3b2084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3b2088:
    // 0x3b2088: 0xc0e858c  jal         func_3A1630
label_3b208c:
    if (ctx->pc == 0x3B208Cu) {
        ctx->pc = 0x3B208Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2088u;
        // 0x3b208c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2090u;
        goto label_3b2090;
    }
    ctx->pc = 0x3B2088u;
    SET_GPR_U32(ctx, 31, 0x3B2090u);
    ctx->pc = 0x3B208Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2088u;
    // 0x3b208c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3B2088u, 0x3B2090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2090u;
label_3b2090:
    // 0x3b2090: 0x10000005  b           . + 4 + (0x5 << 2)
label_3b2094:
    if (ctx->pc == 0x3B2094u) {
        ctx->pc = 0x3B2094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2090u;
        // 0x3b2094: 0x9222001e  lbu         $v0, 0x1E($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 30)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2098u;
        goto label_3b2098;
    }
    ctx->pc = 0x3B2090u;
    {
        const bool branch_taken_0x3b2090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2090u;
        // 0x3b2094: 0x9222001e  lbu         $v0, 0x1E($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2090) {
            ctx->pc = 0x3B20A8u;
            goto label_3b20a8;
        }
    }
    ctx->pc = 0x3B2098u;
label_3b2098:
    // 0x3b2098: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3b2098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b209c:
    // 0x3b209c: 0xc0e858c  jal         func_3A1630
label_3b20a0:
    if (ctx->pc == 0x3B20A0u) {
        ctx->pc = 0x3B20A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B209Cu;
        // 0x3b20a0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B20A4u;
        goto label_3b20a4;
    }
    ctx->pc = 0x3B209Cu;
    SET_GPR_U32(ctx, 31, 0x3B20A4u);
    ctx->pc = 0x3B20A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B209Cu;
    // 0x3b20a0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3B209Cu, 0x3B20A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B20A4u;
label_3b20a4:
    // 0x3b20a4: 0x9222001e  lbu         $v0, 0x1E($s1)
    ctx->pc = 0x3b20a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 30)));
label_3b20a8:
    // 0x3b20a8: 0x8624001c  lh          $a0, 0x1C($s1)
    ctx->pc = 0x3b20a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 28)));
label_3b20ac:
    // 0x3b20ac: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_3b20b0:
    if (ctx->pc == 0x3B20B0u) {
        ctx->pc = 0x3B20B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B20ACu;
        // 0x3b20b0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B20B4u;
        goto label_3b20b4;
    }
    ctx->pc = 0x3B20ACu;
    {
        const bool branch_taken_0x3b20ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b20ac) {
            ctx->pc = 0x3B20B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B20ACu;
            // 0x3b20b0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B20B4u;
            goto label_3b20b4;
        }
    }
    ctx->pc = 0x3B20B4u;
label_3b20b4:
    // 0x3b20b4: 0x82001a  div         $zero, $a0, $v0
    ctx->pc = 0x3b20b4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_3b20b8:
    // 0x3b20b8: 0x1810  mfhi        $v1
    ctx->pc = 0x3b20b8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_3b20bc:
    // 0x3b20bc: 0x54600011  bnel        $v1, $zero, . + 4 + (0x11 << 2)
label_3b20c0:
    if (ctx->pc == 0x3B20C0u) {
        ctx->pc = 0x3B20C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B20BCu;
        // 0x3b20c0: 0x8622001c  lh          $v0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B20C4u;
        goto label_3b20c4;
    }
    ctx->pc = 0x3B20BCu;
    {
        const bool branch_taken_0x3b20bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b20bc) {
            ctx->pc = 0x3B20C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B20BCu;
            // 0x3b20c0: 0x8622001c  lh          $v0, 0x1C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B2104u;
            goto label_3b2104;
        }
    }
    ctx->pc = 0x3B20C4u;
label_3b20c4:
    // 0x3b20c4: 0xc62d0014  lwc1        $f13, 0x14($s1)
    ctx->pc = 0x3b20c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_3b20c8:
    // 0x3b20c8: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x3b20c8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
label_3b20cc:
    // 0x3b20cc: 0x2610b8b8  addiu       $s0, $s0, -0x4748
    ctx->pc = 0x3b20ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949048));
label_3b20d0:
    // 0x3b20d0: 0x46006b07  neg.s       $f12, $f13
    ctx->pc = 0x3b20d0u;
    ctx->f[12] = FPU_NEG_S(ctx->f[13]);
label_3b20d4:
    // 0x3b20d4: 0xc0cd508  jal         func_335420
label_3b20d8:
    if (ctx->pc == 0x3B20D8u) {
        ctx->pc = 0x3B20D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B20D4u;
        // 0x3b20d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B20DCu;
        goto label_3b20dc;
    }
    ctx->pc = 0x3B20D4u;
    SET_GPR_U32(ctx, 31, 0x3B20DCu);
    ctx->pc = 0x3B20D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B20D4u;
    // 0x3b20d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x3B20D4u, 0x3B20DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B20DCu;
label_3b20dc:
    // 0x3b20dc: 0xc62c0018  lwc1        $f12, 0x18($s1)
    ctx->pc = 0x3b20dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3b20e0:
    // 0x3b20e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b20e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b20e4:
    // 0x3b20e4: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x3b20e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
label_3b20e8:
    // 0x3b20e8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3b20e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3b20ec:
    // 0x3b20ec: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3b20ecu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_3b20f0:
    // 0x3b20f0: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x3b20f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_3b20f4:
    // 0x3b20f4: 0xc0cd508  jal         func_335420
label_3b20f8:
    if (ctx->pc == 0x3B20F8u) {
        ctx->pc = 0x3B20F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B20F4u;
        // 0x3b20f8: 0x46016302  mul.s       $f12, $f12, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B20FCu;
        goto label_3b20fc;
    }
    ctx->pc = 0x3B20F4u;
    SET_GPR_U32(ctx, 31, 0x3B20FCu);
    ctx->pc = 0x3B20F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B20F4u;
    // 0x3b20f8: 0x46016302  mul.s       $f12, $f12, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x3B20F4u, 0x3B20FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B20FCu;
label_3b20fc:
    // 0x3b20fc: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x3b20fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_3b2100:
    // 0x3b2100: 0x8622001c  lh          $v0, 0x1C($s1)
    ctx->pc = 0x3b2100u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 28)));
label_3b2104:
    // 0x3b2104: 0x2842000a  slti        $v0, $v0, 0xA
    ctx->pc = 0x3b2104u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
label_3b2108:
    // 0x3b2108: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_3b210c:
    if (ctx->pc == 0x3B210Cu) {
        ctx->pc = 0x3B210Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2108u;
        // 0x3b210c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2110u;
        goto label_3b2110;
    }
    ctx->pc = 0x3B2108u;
    {
        const bool branch_taken_0x3b2108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B210Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2108u;
        // 0x3b210c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2108) {
            ctx->pc = 0x3B215Cu;
            goto label_3b215c;
        }
    }
    ctx->pc = 0x3B2110u;
label_3b2110:
    // 0x3b2110: 0xc0e9694  jal         func_3A5A50
label_3b2114:
    if (ctx->pc == 0x3B2114u) {
        ctx->pc = 0x3B2114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2110u;
        // 0x3b2114: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2118u;
        goto label_3b2118;
    }
    ctx->pc = 0x3B2110u;
    SET_GPR_U32(ctx, 31, 0x3B2118u);
    ctx->pc = 0x3B2114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2110u;
    // 0x3b2114: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3B2110u, 0x3B2118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2118u;
label_3b2118:
    // 0x3b2118: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_3b211c:
    if (ctx->pc == 0x3B211Cu) {
        ctx->pc = 0x3B211Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2118u;
        // 0x3b211c: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2120u;
        goto label_3b2120;
    }
    ctx->pc = 0x3B2118u;
    {
        const bool branch_taken_0x3b2118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B211Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2118u;
        // 0x3b211c: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2118) {
            ctx->pc = 0x3B2158u;
            goto label_3b2158;
        }
    }
    ctx->pc = 0x3B2120u;
label_3b2120:
    // 0x3b2120: 0xc0e8b48  jal         func_3A2D20
label_3b2124:
    if (ctx->pc == 0x3B2124u) {
        ctx->pc = 0x3B2124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2120u;
        // 0x3b2124: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2128u;
        goto label_3b2128;
    }
    ctx->pc = 0x3B2120u;
    SET_GPR_U32(ctx, 31, 0x3B2128u);
    ctx->pc = 0x3B2124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2120u;
    // 0x3b2124: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x3B2120u, 0x3B2128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2128u;
label_3b2128:
    // 0x3b2128: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3b2128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_3b212c:
    // 0x3b212c: 0xc0e8b70  jal         func_3A2DC0
label_3b2130:
    if (ctx->pc == 0x3B2130u) {
        ctx->pc = 0x3B2130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B212Cu;
        // 0x3b2130: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2134u;
        goto label_3b2134;
    }
    ctx->pc = 0x3B212Cu;
    SET_GPR_U32(ctx, 31, 0x3B2134u);
    ctx->pc = 0x3B2130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B212Cu;
    // 0x3b2130: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DC0u, 0x3B212Cu, 0x3B2134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2134u;
label_3b2134:
    // 0x3b2134: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3b2134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_3b2138:
    // 0x3b2138: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3b2138u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_3b213c:
    // 0x3b213c: 0xc0e8b90  jal         func_3A2E40
label_3b2140:
    if (ctx->pc == 0x3B2140u) {
        ctx->pc = 0x3B2140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B213Cu;
        // 0x3b2140: 0x24a520d8  addiu       $a1, $a1, 0x20D8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8408));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2144u;
        goto label_3b2144;
    }
    ctx->pc = 0x3B213Cu;
    SET_GPR_U32(ctx, 31, 0x3B2144u);
    ctx->pc = 0x3B2140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B213Cu;
    // 0x3b2140: 0x24a520d8  addiu       $a1, $a1, 0x20D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E40u, 0x3B213Cu, 0x3B2144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2144u;
label_3b2144:
    // 0x3b2144: 0xc0e8b50  jal         func_3A2D40
label_3b2148:
    if (ctx->pc == 0x3B2148u) {
        ctx->pc = 0x3B2148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2144u;
        // 0x3b2148: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B214Cu;
        goto label_3b214c;
    }
    ctx->pc = 0x3B2144u;
    SET_GPR_U32(ctx, 31, 0x3B214Cu);
    ctx->pc = 0x3B2148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2144u;
    // 0x3b2148: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x3B2144u, 0x3B214Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B214Cu;
label_3b214c:
    // 0x3b214c: 0x9622001c  lhu         $v0, 0x1C($s1)
    ctx->pc = 0x3b214cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 28)));
label_3b2150:
    // 0x3b2150: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3b2150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3b2154:
    // 0x3b2154: 0xa622001c  sh          $v0, 0x1C($s1)
    ctx->pc = 0x3b2154u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 28), (uint16_t)GPR_U32(ctx, 2));
label_3b2158:
    // 0x3b2158: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3b2158u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b215c:
    // 0x3b215c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3b215cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3b2160:
    // 0x3b2160: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3b2160u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3b2164:
    // 0x3b2164: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3b2164u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3b2168:
    // 0x3b2168: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b2168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3b216c:
    // 0x3b216c: 0x3e00008  jr          $ra
label_3b2170:
    if (ctx->pc == 0x3B2170u) {
        ctx->pc = 0x3B2170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B216Cu;
        // 0x3b2170: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2174u;
        goto label_3b2174;
    }
    ctx->pc = 0x3B216Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B2170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B216Cu;
        // 0x3b2170: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B216Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B2174u;
label_3b2174:
    // 0x3b2174: 0x0  nop
    ctx->pc = 0x3b2174u;
    // NOP
    ctx->pc = 0x3b2178u;
}
