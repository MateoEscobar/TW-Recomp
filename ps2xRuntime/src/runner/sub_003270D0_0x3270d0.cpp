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

// Function: sub_003270D0
// Address: 0x3270d0 - 0x327288
void sub_003270D0_0x3270d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003270D0_0x3270d0");
#endif

    switch (ctx->pc) {
        case 0x327100u: goto label_327100;
        case 0x327164u: goto label_327164;
        case 0x327190u: goto label_327190;
        case 0x3271a8u: goto label_3271a8;
        case 0x3271bcu: goto label_3271bc;
        case 0x3271d0u: goto label_3271d0;
        case 0x3271e0u: goto label_3271e0;
        case 0x3271f0u: goto label_3271f0;
        case 0x327204u: goto label_327204;
        case 0x327210u: goto label_327210;
        case 0x327220u: goto label_327220;
        case 0x327228u: goto label_327228;
        case 0x327244u: goto label_327244;
        case 0x32725cu: goto label_32725c;
        default: break;
    }

    ctx->pc = 0x3270d0u;

    // 0x3270d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3270d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3270d4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3270d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x3270d8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3270d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3270dc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3270dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3270e0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3270e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x3270e4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3270e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3270e8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x3270e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x3270ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3270ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3270f0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3270f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x3270f4: 0x8c910028  lw          $s1, 0x28($a0)
    ctx->pc = 0x3270f4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x3270f8: 0xc0c9aaa  jal         func_326AA8
    ctx->pc = 0x3270F8u;
    SET_GPR_U32(ctx, 31, 0x327100u);
    ctx->pc = 0x3270FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3270F8u;
    // 0x3270fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326AA8u, 0x3270F8u, 0x327100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327100u;
label_327100:
    // 0x327100: 0x5440005a  bnel        $v0, $zero, . + 4 + (0x5A << 2)
    ctx->pc = 0x327100u;
    {
        const bool branch_taken_0x327100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x327100) {
            ctx->pc = 0x327104u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x327100u;
            // 0x327104: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32726Cu;
            goto label_32726c;
        }
    }
    ctx->pc = 0x327108u;
    // 0x327108: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x327108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x32710c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x32710cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x327110: 0x8c640018  lw          $a0, 0x18($v1)
    ctx->pc = 0x327110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x327114: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x327114u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327118: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x327118u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x32711c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x32711cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x327120: 0x8c43fffc  lw          $v1, -0x4($v0)
    ctx->pc = 0x327120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
    // 0x327124: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x327124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x327128: 0x2462ffe0  addiu       $v0, $v1, -0x20
    ctx->pc = 0x327128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
    // 0x32712c: 0x2c42000b  sltiu       $v0, $v0, 0xB
    ctx->pc = 0x32712cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x327130: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x327130u;
    {
        const bool branch_taken_0x327130 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x327134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327130u;
        // 0x327134: 0x2462ffe0  addiu       $v0, $v1, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327130) {
            ctx->pc = 0x32716Cu;
            goto label_32716c;
        }
    }
    ctx->pc = 0x327138u;
    // 0x327138: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x327138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x32713c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x32713cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x327140: 0x1482000a  bne         $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x327140u;
    {
        const bool branch_taken_0x327140 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x327144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327140u;
        // 0x327144: 0x2462ffe0  addiu       $v0, $v1, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327140) {
            ctx->pc = 0x32716Cu;
            goto label_32716c;
        }
    }
    ctx->pc = 0x327148u;
    // 0x327148: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x327148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x32714c: 0x14440007  bne         $v0, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x32714Cu;
    {
        const bool branch_taken_0x32714c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x327150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32714Cu;
        // 0x327150: 0x2462ffe0  addiu       $v0, $v1, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32714c) {
            ctx->pc = 0x32716Cu;
            goto label_32716c;
        }
    }
    ctx->pc = 0x327154u;
    // 0x327154: 0x12000044  beqz        $s0, . + 4 + (0x44 << 2)
    ctx->pc = 0x327154u;
    {
        const bool branch_taken_0x327154 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x327158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327154u;
        // 0x327158: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327154) {
            ctx->pc = 0x327268u;
            goto label_327268;
        }
    }
    ctx->pc = 0x32715Cu;
    // 0x32715c: 0xc0c9a8e  jal         func_326A38
    ctx->pc = 0x32715Cu;
    SET_GPR_U32(ctx, 31, 0x327164u);
    ctx->pc = 0x327160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32715Cu;
    // 0x327160: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326A38u, 0x32715Cu, 0x327164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327164u;
label_327164:
    // 0x327164: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x327164u;
    {
        const bool branch_taken_0x327164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327164u;
        // 0x327168: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327164) {
            ctx->pc = 0x32726Cu;
            goto label_32726c;
        }
    }
    ctx->pc = 0x32716Cu;
label_32716c:
    // 0x32716c: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x32716cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x327170: 0x2c42000b  sltiu       $v0, $v0, 0xB
    ctx->pc = 0x327170u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x327174: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x327174u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x327178: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x327178u;
    {
        const bool branch_taken_0x327178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32717Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327178u;
        // 0x32717c: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327178) {
            ctx->pc = 0x327198u;
            goto label_327198;
        }
    }
    ctx->pc = 0x327180u;
    // 0x327180: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x327180u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x327184: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x327184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327188: 0xc0c9ba2  jal         func_326E88
    ctx->pc = 0x327188u;
    SET_GPR_U32(ctx, 31, 0x327190u);
    ctx->pc = 0x32718Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327188u;
    // 0x32718c: 0x26450004  addiu       $a1, $s2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326E88u, 0x327188u, 0x327190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327190u;
label_327190:
    // 0x327190: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x327190u;
    {
        const bool branch_taken_0x327190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327190u;
        // 0x327194: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327190) {
            ctx->pc = 0x3271E4u;
            goto label_3271e4;
        }
    }
    ctx->pc = 0x327198u;
label_327198:
    // 0x327198: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x327198u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x32719c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32719cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3271a0: 0xc0c9b82  jal         func_326E08
    ctx->pc = 0x3271A0u;
    SET_GPR_U32(ctx, 31, 0x3271A8u);
    ctx->pc = 0x3271A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3271A0u;
    // 0x3271a4: 0x24060029  addiu       $a2, $zero, 0x29 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326E08u, 0x3271A0u, 0x3271A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3271A8u;
label_3271a8:
    // 0x3271a8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3271A8u;
    {
        const bool branch_taken_0x3271a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3271ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3271A8u;
        // 0x3271ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3271a8) {
            ctx->pc = 0x3271C4u;
            goto label_3271c4;
        }
    }
    ctx->pc = 0x3271B0u;
    // 0x3271b0: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x3271b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x3271b4: 0xc0c9b82  jal         func_326E08
    ctx->pc = 0x3271B4u;
    SET_GPR_U32(ctx, 31, 0x3271BCu);
    ctx->pc = 0x3271B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3271B4u;
    // 0x3271b8: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326E08u, 0x3271B4u, 0x3271BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3271BCu;
label_3271bc:
    // 0x3271bc: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3271BCu;
    {
        const bool branch_taken_0x3271bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3271C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3271BCu;
        // 0x3271c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3271bc) {
            ctx->pc = 0x327220u;
            goto label_327220;
        }
    }
    ctx->pc = 0x3271C4u;
label_3271c4:
    // 0x3271c4: 0x2405002a  addiu       $a1, $zero, 0x2A
    ctx->pc = 0x3271c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x3271c8: 0xc0c9c20  jal         func_327080
    ctx->pc = 0x3271C8u;
    SET_GPR_U32(ctx, 31, 0x3271D0u);
    ctx->pc = 0x3271CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3271C8u;
    // 0x3271cc: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327080u, 0x3271C8u, 0x3271D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3271D0u;
label_3271d0:
    // 0x3271d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3271d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3271d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3271d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3271d8: 0xc0c9a6e  jal         func_3269B8
    ctx->pc = 0x3271D8u;
    SET_GPR_U32(ctx, 31, 0x3271E0u);
    ctx->pc = 0x3271DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3271D8u;
    // 0x3271dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3269B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3269B8u, 0x3271D8u, 0x3271E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3271E0u;
label_3271e0:
    // 0x3271e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3271e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3271e4:
    // 0x3271e4: 0x2405002b  addiu       $a1, $zero, 0x2B
    ctx->pc = 0x3271e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x3271e8: 0xc0c9c20  jal         func_327080
    ctx->pc = 0x3271E8u;
    SET_GPR_U32(ctx, 31, 0x3271F0u);
    ctx->pc = 0x3271ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3271E8u;
    // 0x3271ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327080u, 0x3271E8u, 0x3271F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3271F0u;
label_3271f0:
    // 0x3271f0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x3271f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3271f4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3271f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3271f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3271f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3271fc: 0xc0c9c20  jal         func_327080
    ctx->pc = 0x3271FCu;
    SET_GPR_U32(ctx, 31, 0x327204u);
    ctx->pc = 0x327200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3271FCu;
    // 0x327200: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327080u, 0x3271FCu, 0x327204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327204u;
label_327204:
    // 0x327204: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x327204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327208: 0xc0c99d0  jal         func_326740
    ctx->pc = 0x327208u;
    SET_GPR_U32(ctx, 31, 0x327210u);
    ctx->pc = 0x32720Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327208u;
    // 0x32720c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326740u, 0x327208u, 0x327210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327210u;
label_327210:
    // 0x327210: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x327210u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327214: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x327214u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327218: 0xc0c9b72  jal         func_326DC8
    ctx->pc = 0x327218u;
    SET_GPR_U32(ctx, 31, 0x327220u);
    ctx->pc = 0x32721Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327218u;
    // 0x32721c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326DC8u, 0x327218u, 0x327220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327220u;
label_327220:
    // 0x327220: 0xc0c99d0  jal         func_326740
    ctx->pc = 0x327220u;
    SET_GPR_U32(ctx, 31, 0x327228u);
    ctx->pc = 0x327224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327220u;
    // 0x327224: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326740u, 0x327220u, 0x327228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327228u;
label_327228:
    // 0x327228: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x327228u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32722c: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x32722cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x327230: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x327230u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327234: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x327234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327238: 0x24070029  addiu       $a3, $zero, 0x29
    ctx->pc = 0x327238u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x32723c: 0xc0c9b2a  jal         func_326CA8
    ctx->pc = 0x32723Cu;
    SET_GPR_U32(ctx, 31, 0x327244u);
    ctx->pc = 0x327240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32723Cu;
    // 0x327240: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326CA8u, 0x32723Cu, 0x327244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327244u;
label_327244:
    // 0x327244: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x327244u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x327248: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x327248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32724c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x32724cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327250: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x327250u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327254: 0xc0c9b2a  jal         func_326CA8
    ctx->pc = 0x327254u;
    SET_GPR_U32(ctx, 31, 0x32725Cu);
    ctx->pc = 0x327258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327254u;
    // 0x327258: 0x24070028  addiu       $a3, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326CA8u, 0x327254u, 0x32725Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32725Cu;
label_32725c:
    // 0x32725c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x32725cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x327260: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x327260u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x327264: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x327264u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_327268:
    // 0x327268: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x327268u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_32726c:
    // 0x32726c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x32726cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x327270: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x327270u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x327274: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x327274u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x327278: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x327278u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32727c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32727cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x327280: 0x3e00008  jr          $ra
    ctx->pc = 0x327280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327280u;
        // 0x327284: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x327288u;
}
