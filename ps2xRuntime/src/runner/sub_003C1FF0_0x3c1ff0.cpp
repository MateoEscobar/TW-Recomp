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

// Function: sub_003C1FF0
// Address: 0x3c1ff0 - 0x3c21a8
void sub_003C1FF0_0x3c1ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C1FF0_0x3c1ff0");
#endif

    switch (ctx->pc) {
        case 0x3c1ff0u: goto label_3c1ff0;
        case 0x3c1ff4u: goto label_3c1ff4;
        case 0x3c1ff8u: goto label_3c1ff8;
        case 0x3c1ffcu: goto label_3c1ffc;
        case 0x3c2000u: goto label_3c2000;
        case 0x3c2004u: goto label_3c2004;
        case 0x3c2008u: goto label_3c2008;
        case 0x3c200cu: goto label_3c200c;
        case 0x3c2010u: goto label_3c2010;
        case 0x3c2014u: goto label_3c2014;
        case 0x3c2018u: goto label_3c2018;
        case 0x3c201cu: goto label_3c201c;
        case 0x3c2020u: goto label_3c2020;
        case 0x3c2024u: goto label_3c2024;
        case 0x3c2028u: goto label_3c2028;
        case 0x3c202cu: goto label_3c202c;
        case 0x3c2030u: goto label_3c2030;
        case 0x3c2034u: goto label_3c2034;
        case 0x3c2038u: goto label_3c2038;
        case 0x3c203cu: goto label_3c203c;
        case 0x3c2040u: goto label_3c2040;
        case 0x3c2044u: goto label_3c2044;
        case 0x3c2048u: goto label_3c2048;
        case 0x3c204cu: goto label_3c204c;
        case 0x3c2050u: goto label_3c2050;
        case 0x3c2054u: goto label_3c2054;
        case 0x3c2058u: goto label_3c2058;
        case 0x3c205cu: goto label_3c205c;
        case 0x3c2060u: goto label_3c2060;
        case 0x3c2064u: goto label_3c2064;
        case 0x3c2068u: goto label_3c2068;
        case 0x3c206cu: goto label_3c206c;
        case 0x3c2070u: goto label_3c2070;
        case 0x3c2074u: goto label_3c2074;
        case 0x3c2078u: goto label_3c2078;
        case 0x3c207cu: goto label_3c207c;
        case 0x3c2080u: goto label_3c2080;
        case 0x3c2084u: goto label_3c2084;
        case 0x3c2088u: goto label_3c2088;
        case 0x3c208cu: goto label_3c208c;
        case 0x3c2090u: goto label_3c2090;
        case 0x3c2094u: goto label_3c2094;
        case 0x3c2098u: goto label_3c2098;
        case 0x3c209cu: goto label_3c209c;
        case 0x3c20a0u: goto label_3c20a0;
        case 0x3c20a4u: goto label_3c20a4;
        case 0x3c20a8u: goto label_3c20a8;
        case 0x3c20acu: goto label_3c20ac;
        case 0x3c20b0u: goto label_3c20b0;
        case 0x3c20b4u: goto label_3c20b4;
        case 0x3c20b8u: goto label_3c20b8;
        case 0x3c20bcu: goto label_3c20bc;
        case 0x3c20c0u: goto label_3c20c0;
        case 0x3c20c4u: goto label_3c20c4;
        case 0x3c20c8u: goto label_3c20c8;
        case 0x3c20ccu: goto label_3c20cc;
        case 0x3c20d0u: goto label_3c20d0;
        case 0x3c20d4u: goto label_3c20d4;
        case 0x3c20d8u: goto label_3c20d8;
        case 0x3c20dcu: goto label_3c20dc;
        case 0x3c20e0u: goto label_3c20e0;
        case 0x3c20e4u: goto label_3c20e4;
        case 0x3c20e8u: goto label_3c20e8;
        case 0x3c20ecu: goto label_3c20ec;
        case 0x3c20f0u: goto label_3c20f0;
        case 0x3c20f4u: goto label_3c20f4;
        case 0x3c20f8u: goto label_3c20f8;
        case 0x3c20fcu: goto label_3c20fc;
        case 0x3c2100u: goto label_3c2100;
        case 0x3c2104u: goto label_3c2104;
        case 0x3c2108u: goto label_3c2108;
        case 0x3c210cu: goto label_3c210c;
        case 0x3c2110u: goto label_3c2110;
        case 0x3c2114u: goto label_3c2114;
        case 0x3c2118u: goto label_3c2118;
        case 0x3c211cu: goto label_3c211c;
        case 0x3c2120u: goto label_3c2120;
        case 0x3c2124u: goto label_3c2124;
        case 0x3c2128u: goto label_3c2128;
        case 0x3c212cu: goto label_3c212c;
        case 0x3c2130u: goto label_3c2130;
        case 0x3c2134u: goto label_3c2134;
        case 0x3c2138u: goto label_3c2138;
        case 0x3c213cu: goto label_3c213c;
        case 0x3c2140u: goto label_3c2140;
        case 0x3c2144u: goto label_3c2144;
        case 0x3c2148u: goto label_3c2148;
        case 0x3c214cu: goto label_3c214c;
        case 0x3c2150u: goto label_3c2150;
        case 0x3c2154u: goto label_3c2154;
        case 0x3c2158u: goto label_3c2158;
        case 0x3c215cu: goto label_3c215c;
        case 0x3c2160u: goto label_3c2160;
        case 0x3c2164u: goto label_3c2164;
        case 0x3c2168u: goto label_3c2168;
        case 0x3c216cu: goto label_3c216c;
        case 0x3c2170u: goto label_3c2170;
        case 0x3c2174u: goto label_3c2174;
        case 0x3c2178u: goto label_3c2178;
        case 0x3c217cu: goto label_3c217c;
        case 0x3c2180u: goto label_3c2180;
        case 0x3c2184u: goto label_3c2184;
        case 0x3c2188u: goto label_3c2188;
        case 0x3c218cu: goto label_3c218c;
        case 0x3c2190u: goto label_3c2190;
        case 0x3c2194u: goto label_3c2194;
        case 0x3c2198u: goto label_3c2198;
        case 0x3c219cu: goto label_3c219c;
        case 0x3c21a0u: goto label_3c21a0;
        case 0x3c21a4u: goto label_3c21a4;
        default: break;
    }

    ctx->pc = 0x3c1ff0u;

label_3c1ff0:
    // 0x3c1ff0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3c1ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3c1ff4:
    // 0x3c1ff4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3c1ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_3c1ff8:
    // 0x3c1ff8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3c1ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_3c1ffc:
    // 0x3c1ffc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3c1ffcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c2000:
    // 0x3c2000: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3c2000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3c2004:
    // 0x3c2004: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3c2004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3c2008:
    // 0x3c2008: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3c2008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3c200c:
    // 0x3c200c: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3c200cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3c2010:
    // 0x3c2010: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3c2010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3c2014:
    // 0x3c2014: 0x40f809  jalr        $v0
label_3c2018:
    if (ctx->pc == 0x3C2018u) {
        ctx->pc = 0x3C2018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2014u;
        // 0x3c2018: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C201Cu;
        goto label_3c201c;
    }
    ctx->pc = 0x3C2014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C201Cu);
        ctx->pc = 0x3C2018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2014u;
        // 0x3c2018: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C2014u, 0x3C201Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C201Cu;
label_3c201c:
    // 0x3c201c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3c201cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c2020:
    // 0x3c2020: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3c2020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3c2024:
    // 0x3c2024: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x3c2024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_3c2028:
    // 0x3c2028: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3c2028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3c202c:
    // 0x3c202c: 0x14430056  bne         $v0, $v1, . + 4 + (0x56 << 2)
label_3c2030:
    if (ctx->pc == 0x3C2030u) {
        ctx->pc = 0x3C2030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C202Cu;
        // 0x3c2030: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2034u;
        goto label_3c2034;
    }
    ctx->pc = 0x3C202Cu;
    {
        const bool branch_taken_0x3c202c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3C2030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C202Cu;
        // 0x3c2030: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c202c) {
            ctx->pc = 0x3C2188u;
            goto label_3c2188;
        }
    }
    ctx->pc = 0x3C2034u;
label_3c2034:
    // 0x3c2034: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x3c2034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_3c2038:
    // 0x3c2038: 0x8c900008  lw          $s0, 0x8($a0)
    ctx->pc = 0x3c2038u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_3c203c:
    // 0x3c203c: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
label_3c2040:
    if (ctx->pc == 0x3C2040u) {
        ctx->pc = 0x3C2040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C203Cu;
        // 0x3c2040: 0x24522bb0  addiu       $s2, $v0, 0x2BB0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 11184));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2044u;
        goto label_3c2044;
    }
    ctx->pc = 0x3C203Cu;
    {
        const bool branch_taken_0x3c203c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C2040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C203Cu;
        // 0x3c2040: 0x24522bb0  addiu       $s2, $v0, 0x2BB0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 11184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c203c) {
            ctx->pc = 0x3C206Cu;
            goto label_3c206c;
        }
    }
    ctx->pc = 0x3C2044u;
label_3c2044:
    // 0x3c2044: 0x7a220010  lq          $v0, 0x10($s1)
    ctx->pc = 0x3c2044u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_3c2048:
    // 0x3c2048: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x3c2048u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_3c204c:
    // 0x3c204c: 0x7a230020  lq          $v1, 0x20($s1)
    ctx->pc = 0x3c204cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 32)));
label_3c2050:
    // 0x3c2050: 0x24842bc0  addiu       $a0, $a0, 0x2BC0
    ctx->pc = 0x3c2050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11200));
label_3c2054:
    // 0x3c2054: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3c2054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_3c2058:
    // 0x3c2058: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3c2058u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3c205c:
    // 0x3c205c: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x3c205cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_3c2060:
    // 0x3c2060: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x3c2060u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3c2064:
    // 0x3c2064: 0xc0e94fc  jal         func_3A53F0
label_3c2068:
    if (ctx->pc == 0x3C2068u) {
        ctx->pc = 0x3C2068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2064u;
        // 0x3c2068: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C206Cu;
        goto label_3c206c;
    }
    ctx->pc = 0x3C2064u;
    SET_GPR_U32(ctx, 31, 0x3C206Cu);
    ctx->pc = 0x3C2068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2064u;
    // 0x3c2068: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53F0u, 0x3C2064u, 0x3C206Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C206Cu;
label_3c206c:
    // 0x3c206c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c206cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c2070:
    // 0x3c2070: 0x1602000c  bne         $s0, $v0, . + 4 + (0xC << 2)
label_3c2074:
    if (ctx->pc == 0x3C2074u) {
        ctx->pc = 0x3C2074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2070u;
        // 0x3c2074: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2078u;
        goto label_3c2078;
    }
    ctx->pc = 0x3C2070u;
    {
        const bool branch_taken_0x3c2070 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x3C2074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2070u;
        // 0x3c2074: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2070) {
            ctx->pc = 0x3C20A4u;
            goto label_3c20a4;
        }
    }
    ctx->pc = 0x3C2078u;
label_3c2078:
    // 0x3c2078: 0x7a220010  lq          $v0, 0x10($s1)
    ctx->pc = 0x3c2078u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_3c207c:
    // 0x3c207c: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x3c207cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_3c2080:
    // 0x3c2080: 0x7a230020  lq          $v1, 0x20($s1)
    ctx->pc = 0x3c2080u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 32)));
label_3c2084:
    // 0x3c2084: 0x24842bd0  addiu       $a0, $a0, 0x2BD0
    ctx->pc = 0x3c2084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11216));
label_3c2088:
    // 0x3c2088: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3c2088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_3c208c:
    // 0x3c208c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3c208cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3c2090:
    // 0x3c2090: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x3c2090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_3c2094:
    // 0x3c2094: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x3c2094u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3c2098:
    // 0x3c2098: 0xc0e94fc  jal         func_3A53F0
label_3c209c:
    if (ctx->pc == 0x3C209Cu) {
        ctx->pc = 0x3C209Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2098u;
        // 0x3c209c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C20A0u;
        goto label_3c20a0;
    }
    ctx->pc = 0x3C2098u;
    SET_GPR_U32(ctx, 31, 0x3C20A0u);
    ctx->pc = 0x3C209Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2098u;
    // 0x3c209c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53F0u, 0x3C2098u, 0x3C20A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C20A0u;
label_3c20a0:
    // 0x3c20a0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3c20a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3c20a4:
    // 0x3c20a4: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
label_3c20a8:
    if (ctx->pc == 0x3C20A8u) {
        ctx->pc = 0x3C20A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C20A4u;
        // 0x3c20a8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C20ACu;
        goto label_3c20ac;
    }
    ctx->pc = 0x3C20A4u;
    {
        const bool branch_taken_0x3c20a4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x3C20A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C20A4u;
        // 0x3c20a8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c20a4) {
            ctx->pc = 0x3C20B8u;
            goto label_3c20b8;
        }
    }
    ctx->pc = 0x3C20ACu;
label_3c20ac:
    // 0x3c20ac: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x3c20acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_3c20b0:
    // 0x3c20b0: 0x24522be0  addiu       $s2, $v0, 0x2BE0
    ctx->pc = 0x3c20b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 11232));
label_3c20b4:
    // 0x3c20b4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3c20b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3c20b8:
    // 0x3c20b8: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
label_3c20bc:
    if (ctx->pc == 0x3C20BCu) {
        ctx->pc = 0x3C20BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C20B8u;
        // 0x3c20bc: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C20C0u;
        goto label_3c20c0;
    }
    ctx->pc = 0x3C20B8u;
    {
        const bool branch_taken_0x3c20b8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x3C20BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C20B8u;
        // 0x3c20bc: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c20b8) {
            ctx->pc = 0x3C20CCu;
            goto label_3c20cc;
        }
    }
    ctx->pc = 0x3C20C0u;
label_3c20c0:
    // 0x3c20c0: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x3c20c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_3c20c4:
    // 0x3c20c4: 0x24522758  addiu       $s2, $v0, 0x2758
    ctx->pc = 0x3c20c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 10072));
label_3c20c8:
    // 0x3c20c8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3c20c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3c20cc:
    // 0x3c20cc: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
label_3c20d0:
    if (ctx->pc == 0x3C20D0u) {
        ctx->pc = 0x3C20D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C20CCu;
        // 0x3c20d0: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C20D4u;
        goto label_3c20d4;
    }
    ctx->pc = 0x3C20CCu;
    {
        const bool branch_taken_0x3c20cc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x3C20D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C20CCu;
        // 0x3c20d0: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c20cc) {
            ctx->pc = 0x3C20E0u;
            goto label_3c20e0;
        }
    }
    ctx->pc = 0x3C20D4u;
label_3c20d4:
    // 0x3c20d4: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x3c20d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_3c20d8:
    // 0x3c20d8: 0x24522bf0  addiu       $s2, $v0, 0x2BF0
    ctx->pc = 0x3c20d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 11248));
label_3c20dc:
    // 0x3c20dc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3c20dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3c20e0:
    // 0x3c20e0: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
label_3c20e4:
    if (ctx->pc == 0x3C20E4u) {
        ctx->pc = 0x3C20E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C20E0u;
        // 0x3c20e4: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C20E8u;
        goto label_3c20e8;
    }
    ctx->pc = 0x3C20E0u;
    {
        const bool branch_taken_0x3c20e0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x3C20E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C20E0u;
        // 0x3c20e4: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c20e0) {
            ctx->pc = 0x3C20F4u;
            goto label_3c20f4;
        }
    }
    ctx->pc = 0x3C20E8u;
label_3c20e8:
    // 0x3c20e8: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x3c20e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_3c20ec:
    // 0x3c20ec: 0x24522bf8  addiu       $s2, $v0, 0x2BF8
    ctx->pc = 0x3c20ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 11256));
label_3c20f0:
    // 0x3c20f0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x3c20f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3c20f4:
    // 0x3c20f4: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
label_3c20f8:
    if (ctx->pc == 0x3C20F8u) {
        ctx->pc = 0x3C20F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C20F4u;
        // 0x3c20f8: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C20FCu;
        goto label_3c20fc;
    }
    ctx->pc = 0x3C20F4u;
    {
        const bool branch_taken_0x3c20f4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x3C20F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C20F4u;
        // 0x3c20f8: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c20f4) {
            ctx->pc = 0x3C2108u;
            goto label_3c2108;
        }
    }
    ctx->pc = 0x3C20FCu;
label_3c20fc:
    // 0x3c20fc: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x3c20fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_3c2100:
    // 0x3c2100: 0x24522c08  addiu       $s2, $v0, 0x2C08
    ctx->pc = 0x3c2100u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 11272));
label_3c2104:
    // 0x3c2104: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x3c2104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_3c2108:
    // 0x3c2108: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
label_3c210c:
    if (ctx->pc == 0x3C210Cu) {
        ctx->pc = 0x3C210Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2108u;
        // 0x3c210c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2110u;
        goto label_3c2110;
    }
    ctx->pc = 0x3C2108u;
    {
        const bool branch_taken_0x3c2108 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x3C210Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2108u;
        // 0x3c210c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2108) {
            ctx->pc = 0x3C211Cu;
            goto label_3c211c;
        }
    }
    ctx->pc = 0x3C2110u;
label_3c2110:
    // 0x3c2110: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x3c2110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_3c2114:
    // 0x3c2114: 0x24522c18  addiu       $s2, $v0, 0x2C18
    ctx->pc = 0x3c2114u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 11288));
label_3c2118:
    // 0x3c2118: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3c2118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3c211c:
    // 0x3c211c: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
label_3c2120:
    if (ctx->pc == 0x3C2120u) {
        ctx->pc = 0x3C2120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C211Cu;
        // 0x3c2120: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2124u;
        goto label_3c2124;
    }
    ctx->pc = 0x3C211Cu;
    {
        const bool branch_taken_0x3c211c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x3C2120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C211Cu;
        // 0x3c2120: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c211c) {
            ctx->pc = 0x3C2130u;
            goto label_3c2130;
        }
    }
    ctx->pc = 0x3C2124u;
label_3c2124:
    // 0x3c2124: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x3c2124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_3c2128:
    // 0x3c2128: 0x24522c28  addiu       $s2, $v0, 0x2C28
    ctx->pc = 0x3c2128u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 11304));
label_3c212c:
    // 0x3c212c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x3c212cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_3c2130:
    // 0x3c2130: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
label_3c2134:
    if (ctx->pc == 0x3C2134u) {
        ctx->pc = 0x3C2134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2130u;
        // 0x3c2134: 0x2e020002  sltiu       $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2138u;
        goto label_3c2138;
    }
    ctx->pc = 0x3C2130u;
    {
        const bool branch_taken_0x3c2130 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x3C2134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2130u;
        // 0x3c2134: 0x2e020002  sltiu       $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2130) {
            ctx->pc = 0x3C2144u;
            goto label_3c2144;
        }
    }
    ctx->pc = 0x3C2138u;
label_3c2138:
    // 0x3c2138: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x3c2138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_3c213c:
    // 0x3c213c: 0x24522c38  addiu       $s2, $v0, 0x2C38
    ctx->pc = 0x3c213cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 11320));
label_3c2140:
    // 0x3c2140: 0x2e020002  sltiu       $v0, $s0, 0x2
    ctx->pc = 0x3c2140u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_3c2144:
    // 0x3c2144: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
label_3c2148:
    if (ctx->pc == 0x3C2148u) {
        ctx->pc = 0x3C2148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2144u;
        // 0x3c2148: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C214Cu;
        goto label_3c214c;
    }
    ctx->pc = 0x3C2144u;
    {
        const bool branch_taken_0x3c2144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c2144) {
            ctx->pc = 0x3C2148u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C2144u;
            // 0x3c2148: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C218Cu;
            goto label_3c218c;
        }
    }
    ctx->pc = 0x3C214Cu;
label_3c214c:
    // 0x3c214c: 0x7a230010  lq          $v1, 0x10($s1)
    ctx->pc = 0x3c214cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_3c2150:
    // 0x3c2150: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c2150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c2154:
    // 0x3c2154: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x3c2154u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
label_3c2158:
    // 0x3c2158: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3c2158u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3c215c:
    // 0x3c215c: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x3c215cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_3c2160:
    // 0x3c2160: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x3c2160u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3c2164:
    // 0x3c2164: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x3c2164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_3c2168:
    // 0x3c2168: 0xc0e94fc  jal         func_3A53F0
label_3c216c:
    if (ctx->pc == 0x3C216Cu) {
        ctx->pc = 0x3C216Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2168u;
        // 0x3c216c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2170u;
        goto label_3c2170;
    }
    ctx->pc = 0x3C2168u;
    SET_GPR_U32(ctx, 31, 0x3C2170u);
    ctx->pc = 0x3C216Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2168u;
    // 0x3c216c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53F0u, 0x3C2168u, 0x3C2170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2170u;
label_3c2170:
    // 0x3c2170: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x3c2170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_3c2174:
    // 0x3c2174: 0x3c040400  lui         $a0, 0x400
    ctx->pc = 0x3c2174u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1024 << 16));
label_3c2178:
    // 0x3c2178: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3c2178u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_3c217c:
    // 0x3c217c: 0xac430054  sw          $v1, 0x54($v0)
    ctx->pc = 0x3c217cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 3));
label_3c2180:
    // 0x3c2180: 0x10000002  b           . + 4 + (0x2 << 2)
label_3c2184:
    if (ctx->pc == 0x3C2184u) {
        ctx->pc = 0x3C2184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2180u;
        // 0x3c2184: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2188u;
        goto label_3c2188;
    }
    ctx->pc = 0x3C2180u;
    {
        const bool branch_taken_0x3c2180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C2184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2180u;
        // 0x3c2184: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2180) {
            ctx->pc = 0x3C218Cu;
            goto label_3c218c;
        }
    }
    ctx->pc = 0x3C2188u;
label_3c2188:
    // 0x3c2188: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3c2188u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c218c:
    // 0x3c218c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3c218cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3c2190:
    // 0x3c2190: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3c2190u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3c2194:
    // 0x3c2194: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3c2194u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3c2198:
    // 0x3c2198: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3c2198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3c219c:
    // 0x3c219c: 0x3e00008  jr          $ra
label_3c21a0:
    if (ctx->pc == 0x3C21A0u) {
        ctx->pc = 0x3C21A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C219Cu;
        // 0x3c21a0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C21A4u;
        goto label_3c21a4;
    }
    ctx->pc = 0x3C219Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C21A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C219Cu;
        // 0x3c21a0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C219Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C21A4u;
label_3c21a4:
    // 0x3c21a4: 0x0  nop
    ctx->pc = 0x3c21a4u;
    // NOP
    ctx->pc = 0x3c21a8u;
}
