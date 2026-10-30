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

// Function: sub_00236FB8
// Address: 0x236fb8 - 0x237128
void sub_00236FB8_0x236fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00236FB8_0x236fb8");
#endif

    switch (ctx->pc) {
        case 0x236fb8u: goto label_236fb8;
        case 0x236fbcu: goto label_236fbc;
        case 0x236fc0u: goto label_236fc0;
        case 0x236fc4u: goto label_236fc4;
        case 0x236fc8u: goto label_236fc8;
        case 0x236fccu: goto label_236fcc;
        case 0x236fd0u: goto label_236fd0;
        case 0x236fd4u: goto label_236fd4;
        case 0x236fd8u: goto label_236fd8;
        case 0x236fdcu: goto label_236fdc;
        case 0x236fe0u: goto label_236fe0;
        case 0x236fe4u: goto label_236fe4;
        case 0x236fe8u: goto label_236fe8;
        case 0x236fecu: goto label_236fec;
        case 0x236ff0u: goto label_236ff0;
        case 0x236ff4u: goto label_236ff4;
        case 0x236ff8u: goto label_236ff8;
        case 0x236ffcu: goto label_236ffc;
        case 0x237000u: goto label_237000;
        case 0x237004u: goto label_237004;
        case 0x237008u: goto label_237008;
        case 0x23700cu: goto label_23700c;
        case 0x237010u: goto label_237010;
        case 0x237014u: goto label_237014;
        case 0x237018u: goto label_237018;
        case 0x23701cu: goto label_23701c;
        case 0x237020u: goto label_237020;
        case 0x237024u: goto label_237024;
        case 0x237028u: goto label_237028;
        case 0x23702cu: goto label_23702c;
        case 0x237030u: goto label_237030;
        case 0x237034u: goto label_237034;
        case 0x237038u: goto label_237038;
        case 0x23703cu: goto label_23703c;
        case 0x237040u: goto label_237040;
        case 0x237044u: goto label_237044;
        case 0x237048u: goto label_237048;
        case 0x23704cu: goto label_23704c;
        case 0x237050u: goto label_237050;
        case 0x237054u: goto label_237054;
        case 0x237058u: goto label_237058;
        case 0x23705cu: goto label_23705c;
        case 0x237060u: goto label_237060;
        case 0x237064u: goto label_237064;
        case 0x237068u: goto label_237068;
        case 0x23706cu: goto label_23706c;
        case 0x237070u: goto label_237070;
        case 0x237074u: goto label_237074;
        case 0x237078u: goto label_237078;
        case 0x23707cu: goto label_23707c;
        case 0x237080u: goto label_237080;
        case 0x237084u: goto label_237084;
        case 0x237088u: goto label_237088;
        case 0x23708cu: goto label_23708c;
        case 0x237090u: goto label_237090;
        case 0x237094u: goto label_237094;
        case 0x237098u: goto label_237098;
        case 0x23709cu: goto label_23709c;
        case 0x2370a0u: goto label_2370a0;
        case 0x2370a4u: goto label_2370a4;
        case 0x2370a8u: goto label_2370a8;
        case 0x2370acu: goto label_2370ac;
        case 0x2370b0u: goto label_2370b0;
        case 0x2370b4u: goto label_2370b4;
        case 0x2370b8u: goto label_2370b8;
        case 0x2370bcu: goto label_2370bc;
        case 0x2370c0u: goto label_2370c0;
        case 0x2370c4u: goto label_2370c4;
        case 0x2370c8u: goto label_2370c8;
        case 0x2370ccu: goto label_2370cc;
        case 0x2370d0u: goto label_2370d0;
        case 0x2370d4u: goto label_2370d4;
        case 0x2370d8u: goto label_2370d8;
        case 0x2370dcu: goto label_2370dc;
        case 0x2370e0u: goto label_2370e0;
        case 0x2370e4u: goto label_2370e4;
        case 0x2370e8u: goto label_2370e8;
        case 0x2370ecu: goto label_2370ec;
        case 0x2370f0u: goto label_2370f0;
        case 0x2370f4u: goto label_2370f4;
        case 0x2370f8u: goto label_2370f8;
        case 0x2370fcu: goto label_2370fc;
        case 0x237100u: goto label_237100;
        case 0x237104u: goto label_237104;
        case 0x237108u: goto label_237108;
        case 0x23710cu: goto label_23710c;
        case 0x237110u: goto label_237110;
        case 0x237114u: goto label_237114;
        case 0x237118u: goto label_237118;
        case 0x23711cu: goto label_23711c;
        case 0x237120u: goto label_237120;
        case 0x237124u: goto label_237124;
        default: break;
    }

    ctx->pc = 0x236fb8u;

label_236fb8:
    // 0x236fb8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x236fb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_236fbc:
    // 0x236fbc: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x236fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_236fc0:
    // 0x236fc0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x236fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_236fc4:
    // 0x236fc4: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x236fc4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_236fc8:
    // 0x236fc8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x236fc8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_236fcc:
    // 0x236fcc: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x236fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_236fd0:
    // 0x236fd0: 0x8e04489c  lw          $a0, 0x489C($s0)
    ctx->pc = 0x236fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
label_236fd4:
    // 0x236fd4: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x236fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_236fd8:
    // 0x236fd8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x236fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_236fdc:
    // 0x236fdc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x236fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_236fe0:
    // 0x236fe0: 0xc1065ca  jal         func_419728
label_236fe4:
    if (ctx->pc == 0x236FE4u) {
        ctx->pc = 0x236FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236FE0u;
        // 0x236fe4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236FE8u;
        goto label_236fe8;
    }
    ctx->pc = 0x236FE0u;
    SET_GPR_U32(ctx, 31, 0x236FE8u);
    ctx->pc = 0x236FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236FE0u;
    // 0x236fe4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419728u, 0x236FE0u, 0x236FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236FE8u;
label_236fe8:
    // 0x236fe8: 0x8e05489c  lw          $a1, 0x489C($s0)
    ctx->pc = 0x236fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
label_236fec:
    // 0x236fec: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x236fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_236ff0:
    // 0x236ff0: 0x826301b0  lb          $v1, 0x1B0($s3)
    ctx->pc = 0x236ff0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 432)));
label_236ff4:
    // 0x236ff4: 0x8ca20268  lw          $v0, 0x268($a1)
    ctx->pc = 0x236ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 616)));
label_236ff8:
    // 0x236ff8: 0x10640015  beq         $v1, $a0, . + 4 + (0x15 << 2)
label_236ffc:
    if (ctx->pc == 0x236FFCu) {
        ctx->pc = 0x236FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236FF8u;
        // 0x236ffc: 0x2a02a  slt         $s4, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 20, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x237000u;
        goto label_237000;
    }
    ctx->pc = 0x236FF8u;
    {
        const bool branch_taken_0x236ff8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x236FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236FF8u;
        // 0x236ffc: 0x2a02a  slt         $s4, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 20, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x236ff8) {
            ctx->pc = 0x237050u;
            goto label_237050;
        }
    }
    ctx->pc = 0x237000u;
label_237000:
    // 0x237000: 0xc106500  jal         func_419400
label_237004:
    if (ctx->pc == 0x237004u) {
        ctx->pc = 0x237004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237000u;
        // 0x237004: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237008u;
        goto label_237008;
    }
    ctx->pc = 0x237000u;
    SET_GPR_U32(ctx, 31, 0x237008u);
    ctx->pc = 0x237004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237000u;
    // 0x237004: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419400u, 0x237000u, 0x237008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237008u;
label_237008:
    // 0x237008: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
label_23700c:
    if (ctx->pc == 0x23700Cu) {
        ctx->pc = 0x23700Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237008u;
        // 0x23700c: 0x3c030060  lui         $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237010u;
        goto label_237010;
    }
    ctx->pc = 0x237008u;
    {
        const bool branch_taken_0x237008 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x23700Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237008u;
        // 0x23700c: 0x3c030060  lui         $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237008) {
            ctx->pc = 0x237034u;
            goto label_237034;
        }
    }
    ctx->pc = 0x237010u;
label_237010:
    // 0x237010: 0x826201b0  lb          $v0, 0x1B0($s3)
    ctx->pc = 0x237010u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 432)));
label_237014:
    // 0x237014: 0x2463deb8  addiu       $v1, $v1, -0x2148
    ctx->pc = 0x237014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958776));
label_237018:
    // 0x237018: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x237018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_23701c:
    // 0x23701c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23701cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_237020:
    // 0x237020: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x237020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_237024:
    // 0x237024: 0xc062e54  jal         func_18B950
label_237028:
    if (ctx->pc == 0x237028u) {
        ctx->pc = 0x237028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237024u;
        // 0x237028: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23702Cu;
        goto label_23702c;
    }
    ctx->pc = 0x237024u;
    SET_GPR_U32(ctx, 31, 0x23702Cu);
    ctx->pc = 0x237028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237024u;
    // 0x237028: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B950u, 0x237024u, 0x23702Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23702Cu;
label_23702c:
    // 0x23702c: 0x10000009  b           . + 4 + (0x9 << 2)
label_237030:
    if (ctx->pc == 0x237030u) {
        ctx->pc = 0x237030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23702Cu;
        // 0x237030: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237034u;
        goto label_237034;
    }
    ctx->pc = 0x23702Cu;
    {
        const bool branch_taken_0x23702c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23702Cu;
        // 0x237030: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23702c) {
            ctx->pc = 0x237054u;
            goto label_237054;
        }
    }
    ctx->pc = 0x237034u;
label_237034:
    // 0x237034: 0x826201b0  lb          $v0, 0x1B0($s3)
    ctx->pc = 0x237034u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 432)));
label_237038:
    // 0x237038: 0x2463deb8  addiu       $v1, $v1, -0x2148
    ctx->pc = 0x237038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958776));
label_23703c:
    // 0x23703c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x23703cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_237040:
    // 0x237040: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x237040u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_237044:
    // 0x237044: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x237044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_237048:
    // 0x237048: 0xc062e54  jal         func_18B950
label_23704c:
    if (ctx->pc == 0x23704Cu) {
        ctx->pc = 0x23704Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237048u;
        // 0x23704c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237050u;
        goto label_237050;
    }
    ctx->pc = 0x237048u;
    SET_GPR_U32(ctx, 31, 0x237050u);
    ctx->pc = 0x23704Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237048u;
    // 0x23704c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B950u, 0x237048u, 0x237050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237050u;
label_237050:
    // 0x237050: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x237050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_237054:
    // 0x237054: 0x24456850  addiu       $a1, $v0, 0x6850
    ctx->pc = 0x237054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 26704));
label_237058:
    // 0x237058: 0x10a00025  beqz        $a1, . + 4 + (0x25 << 2)
label_23705c:
    if (ctx->pc == 0x23705Cu) {
        ctx->pc = 0x23705Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237058u;
        // 0x23705c: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237060u;
        goto label_237060;
    }
    ctx->pc = 0x237058u;
    {
        const bool branch_taken_0x237058 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x23705Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237058u;
        // 0x23705c: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237058) {
            ctx->pc = 0x2370F0u;
            goto label_2370f0;
        }
    }
    ctx->pc = 0x237060u;
label_237060:
    // 0x237060: 0x8e462b04  lw          $a2, 0x2B04($s2)
    ctx->pc = 0x237060u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11012)));
label_237064:
    // 0x237064: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x237064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_237068:
    // 0x237068: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x237068u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_23706c:
    // 0x23706c: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x23706cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_237070:
    // 0x237070: 0x40f809  jalr        $v0
label_237074:
    if (ctx->pc == 0x237074u) {
        ctx->pc = 0x237074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237070u;
        // 0x237074: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237078u;
        goto label_237078;
    }
    ctx->pc = 0x237070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x237078u);
        ctx->pc = 0x237074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237070u;
        // 0x237074: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237070u, 0x237078u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x237078u;
label_237078:
    // 0x237078: 0x8e502b04  lw          $s0, 0x2B04($s2)
    ctx->pc = 0x237078u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11012)));
label_23707c:
    // 0x23707c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x23707cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_237080:
    // 0x237080: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x237080u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_237084:
    // 0x237084: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x237084u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_237088:
    // 0x237088: 0x86250058  lh          $a1, 0x58($s1)
    ctx->pc = 0x237088u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 88)));
label_23708c:
    // 0x23708c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x23708cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_237090:
    // 0x237090: 0x26310058  addiu       $s1, $s1, 0x58
    ctx->pc = 0x237090u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
label_237094:
    // 0x237094: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x237094u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_237098:
    // 0x237098: 0x40f809  jalr        $v0
label_23709c:
    if (ctx->pc == 0x23709Cu) {
        ctx->pc = 0x23709Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237098u;
        // 0x23709c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2370A0u;
        goto label_2370a0;
    }
    ctx->pc = 0x237098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2370A0u);
        ctx->pc = 0x23709Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237098u;
        // 0x23709c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237098u, 0x2370A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2370A0u;
label_2370a0:
    // 0x2370a0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2370a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_2370a4:
    // 0x2370a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2370a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2370a8:
    // 0x2370a8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2370a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2370ac:
    // 0x2370ac: 0x40f809  jalr        $v0
label_2370b0:
    if (ctx->pc == 0x2370B0u) {
        ctx->pc = 0x2370B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2370ACu;
        // 0x2370b0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2370B4u;
        goto label_2370b4;
    }
    ctx->pc = 0x2370ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2370B4u);
        ctx->pc = 0x2370B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2370ACu;
        // 0x2370b0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2370ACu, 0x2370B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2370B4u;
label_2370b4:
    // 0x2370b4: 0x8e462b04  lw          $a2, 0x2B04($s2)
    ctx->pc = 0x2370b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11012)));
label_2370b8:
    // 0x2370b8: 0x3a850001  xori        $a1, $s4, 0x1
    ctx->pc = 0x2370b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) ^ (uint64_t)(uint16_t)1);
label_2370bc:
    // 0x2370bc: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2370bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2370c0:
    // 0x2370c0: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x2370c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_2370c4:
    // 0x2370c4: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x2370c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_2370c8:
    // 0x2370c8: 0x60f809  jalr        $v1
label_2370cc:
    if (ctx->pc == 0x2370CCu) {
        ctx->pc = 0x2370CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2370C8u;
        // 0x2370cc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2370D0u;
        goto label_2370d0;
    }
    ctx->pc = 0x2370C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2370D0u);
        ctx->pc = 0x2370CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2370C8u;
        // 0x2370cc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2370C8u, 0x2370D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2370D0u;
label_2370d0:
    // 0x2370d0: 0x8e472b04  lw          $a3, 0x2B04($s2)
    ctx->pc = 0x2370d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11012)));
label_2370d4:
    // 0x2370d4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2370d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2370d8:
    // 0x2370d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2370d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2370dc:
    // 0x2370dc: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2370dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_2370e0:
    // 0x2370e0: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x2370e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_2370e4:
    // 0x2370e4: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x2370e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_2370e8:
    // 0x2370e8: 0x60f809  jalr        $v1
label_2370ec:
    if (ctx->pc == 0x2370ECu) {
        ctx->pc = 0x2370ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2370E8u;
        // 0x2370ec: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2370F0u;
        goto label_2370f0;
    }
    ctx->pc = 0x2370E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2370F0u);
        ctx->pc = 0x2370ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2370E8u;
        // 0x2370ec: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2370E8u, 0x2370F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2370F0u;
label_2370f0:
    // 0x2370f0: 0xde6200e0  ld          $v0, 0xE0($s3)
    ctx->pc = 0x2370f0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 224)));
label_2370f4:
    // 0x2370f4: 0x3c03fff7  lui         $v1, 0xFFF7
    ctx->pc = 0x2370f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65527 << 16));
label_2370f8:
    // 0x2370f8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2370f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_2370fc:
    // 0x2370fc: 0xae600648  sw          $zero, 0x648($s3)
    ctx->pc = 0x2370fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1608), GPR_U32(ctx, 0));
label_237100:
    // 0x237100: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x237100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_237104:
    // 0x237104: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x237104u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_237108:
    // 0x237108: 0xfe6200e0  sd          $v0, 0xE0($s3)
    ctx->pc = 0x237108u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 224), GPR_U64(ctx, 2));
label_23710c:
    // 0x23710c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x23710cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_237110:
    // 0x237110: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x237110u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_237114:
    // 0x237114: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x237114u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_237118:
    // 0x237118: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x237118u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_23711c:
    // 0x23711c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23711cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_237120:
    // 0x237120: 0x3e00008  jr          $ra
label_237124:
    if (ctx->pc == 0x237124u) {
        ctx->pc = 0x237124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237120u;
        // 0x237124: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237128u;
        goto label_fallthrough_0x237120;
    }
    ctx->pc = 0x237120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x237124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237120u;
        // 0x237124: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237120u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x237120:
    ctx->pc = 0x237128u;
}
