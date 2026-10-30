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

// Function: sub_002270D0
// Address: 0x2270d0 - 0x227180
void sub_002270D0_0x2270d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002270D0_0x2270d0");
#endif

    switch (ctx->pc) {
        case 0x2270f0u: goto label_2270f0;
        case 0x227158u: goto label_227158;
        case 0x227164u: goto label_227164;
        default: break;
    }

    ctx->pc = 0x2270d0u;

    // 0x2270d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2270d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2270d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2270d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2270d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2270d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2270dc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2270dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2270e0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2270e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2270e4: 0x8c9000cc  lw          $s0, 0xCC($a0)
    ctx->pc = 0x2270e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 204)));
    // 0x2270e8: 0xc08a200  jal         func_228800
    ctx->pc = 0x2270E8u;
    SET_GPR_U32(ctx, 31, 0x2270F0u);
    ctx->pc = 0x2270ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2270E8u;
    // 0x2270ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228800u, 0x2270E8u, 0x2270F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2270F0u;
label_2270f0:
    // 0x2270f0: 0x9043011a  lbu         $v1, 0x11A($v0)
    ctx->pc = 0x2270f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 282)));
    // 0x2270f4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2270f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2270f8: 0x14620015  bne         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2270F8u;
    {
        const bool branch_taken_0x2270f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2270FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2270F8u;
        // 0x2270fc: 0x24020029  addiu       $v0, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2270f8) {
            ctx->pc = 0x227150u;
            goto label_227150;
        }
    }
    ctx->pc = 0x227100u;
    // 0x227100: 0x12020011  beq         $s0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x227100u;
    {
        const bool branch_taken_0x227100 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x227104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227100u;
        // 0x227104: 0x2402002b  addiu       $v0, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227100) {
            ctx->pc = 0x227148u;
            goto label_227148;
        }
    }
    ctx->pc = 0x227108u;
    // 0x227108: 0x1202000f  beq         $s0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x227108u;
    {
        const bool branch_taken_0x227108 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x22710Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227108u;
        // 0x22710c: 0x2402002d  addiu       $v0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227108) {
            ctx->pc = 0x227148u;
            goto label_227148;
        }
    }
    ctx->pc = 0x227110u;
    // 0x227110: 0x1202000d  beq         $s0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x227110u;
    {
        const bool branch_taken_0x227110 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x227114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227110u;
        // 0x227114: 0x24020031  addiu       $v0, $zero, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227110) {
            ctx->pc = 0x227148u;
            goto label_227148;
        }
    }
    ctx->pc = 0x227118u;
    // 0x227118: 0x1202000b  beq         $s0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x227118u;
    {
        const bool branch_taken_0x227118 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x22711Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227118u;
        // 0x22711c: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227118) {
            ctx->pc = 0x227148u;
            goto label_227148;
        }
    }
    ctx->pc = 0x227120u;
    // 0x227120: 0x12020009  beq         $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x227120u;
    {
        const bool branch_taken_0x227120 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x227124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227120u;
        // 0x227124: 0x24020033  addiu       $v0, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227120) {
            ctx->pc = 0x227148u;
            goto label_227148;
        }
    }
    ctx->pc = 0x227128u;
    // 0x227128: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x227128u;
    {
        const bool branch_taken_0x227128 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x22712Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227128u;
        // 0x22712c: 0x24020034  addiu       $v0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227128) {
            ctx->pc = 0x227148u;
            goto label_227148;
        }
    }
    ctx->pc = 0x227130u;
    // 0x227130: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x227130u;
    {
        const bool branch_taken_0x227130 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x227134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227130u;
        // 0x227134: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227130) {
            ctx->pc = 0x227148u;
            goto label_227148;
        }
    }
    ctx->pc = 0x227138u;
    // 0x227138: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x227138u;
    {
        const bool branch_taken_0x227138 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x22713Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227138u;
        // 0x22713c: 0x24020036  addiu       $v0, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227138) {
            ctx->pc = 0x227148u;
            goto label_227148;
        }
    }
    ctx->pc = 0x227140u;
    // 0x227140: 0x16020009  bne         $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x227140u;
    {
        const bool branch_taken_0x227140 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x227144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227140u;
        // 0x227144: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227140) {
            ctx->pc = 0x227168u;
            goto label_227168;
        }
    }
    ctx->pc = 0x227148u;
label_227148:
    // 0x227148: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x227148u;
    {
        const bool branch_taken_0x227148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22714Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227148u;
        // 0x22714c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227148) {
            ctx->pc = 0x227168u;
            goto label_227168;
        }
    }
    ctx->pc = 0x227150u;
label_227150:
    // 0x227150: 0xc08a200  jal         func_228800
    ctx->pc = 0x227150u;
    SET_GPR_U32(ctx, 31, 0x227158u);
    ctx->pc = 0x227154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227150u;
    // 0x227154: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228800u, 0x227150u, 0x227158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227158u;
label_227158:
    // 0x227158: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x227158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22715c: 0xc10c313  jal         func_430C4C
    ctx->pc = 0x22715Cu;
    SET_GPR_U32(ctx, 31, 0x227164u);
    ctx->pc = 0x227160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22715Cu;
    // 0x227160: 0x2445014c  addiu       $a1, $v0, 0x14C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 332));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x22715Cu, 0x227164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227164u;
label_227164:
    // 0x227164: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x227164u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_227168:
    // 0x227168: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x227168u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22716c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22716cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x227170: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x227170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x227174: 0x3e00008  jr          $ra
    ctx->pc = 0x227174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227174u;
        // 0x227178: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227174u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22717Cu;
    // 0x22717c: 0x0  nop
    ctx->pc = 0x22717cu;
    // NOP
    ctx->pc = 0x227180u;
}
