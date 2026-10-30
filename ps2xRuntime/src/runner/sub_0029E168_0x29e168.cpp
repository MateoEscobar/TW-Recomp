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

// Function: sub_0029E168
// Address: 0x29e168 - 0x29e250
void sub_0029E168_0x29e168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029E168_0x29e168");
#endif

    switch (ctx->pc) {
        case 0x29e190u: goto label_29e190;
        case 0x29e1bcu: goto label_29e1bc;
        case 0x29e1c4u: goto label_29e1c4;
        case 0x29e1d8u: goto label_29e1d8;
        case 0x29e1e0u: goto label_29e1e0;
        case 0x29e1e8u: goto label_29e1e8;
        case 0x29e200u: goto label_29e200;
        case 0x29e21cu: goto label_29e21c;
        case 0x29e22cu: goto label_29e22c;
        default: break;
    }

    ctx->pc = 0x29e168u;

    // 0x29e168: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x29e168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x29e16c: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x29e16cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x29e170: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x29e170u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e174: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x29e174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x29e178: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x29e178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x29e17c: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x29e17cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e180: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x29e180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x29e184: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x29e184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x29e188: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x29e188u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x29e18c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x29e18cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_29e190:
    // 0x29e190: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x29e190u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x29e194: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x29e194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x29e198: 0x0  nop
    ctx->pc = 0x29e198u;
    // NOP
    // 0x29e19c: 0x0  nop
    ctx->pc = 0x29e19cu;
    // NOP
    // 0x29e1a0: 0x1465fffb  bne         $v1, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x29E1A0u;
    {
        const bool branch_taken_0x29e1a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x29E1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E1A0u;
        // 0x29e1a4: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e1a0) {
            ctx->pc = 0x29E190u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29e190;
        }
    }
    ctx->pc = 0x29E1A8u;
    // 0x29e1a8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x29e1a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e1ac: 0x3c07002a  lui         $a3, 0x2A
    ctx->pc = 0x29e1acu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)42 << 16));
    // 0x29e1b0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29e1b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e1b4: 0xc0a71b4  jal         func_29C6D0
    ctx->pc = 0x29E1B4u;
    SET_GPR_U32(ctx, 31, 0x29E1BCu);
    ctx->pc = 0x29E1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E1B4u;
    // 0x29e1b8: 0x24e7c3a0  addiu       $a3, $a3, -0x3C60 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294951840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C6D0u, 0x29E1B4u, 0x29E1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E1BCu;
label_29e1bc:
    // 0x29e1bc: 0xc137832  jal         func_4DE0C8
    ctx->pc = 0x29E1BCu;
    SET_GPR_U32(ctx, 31, 0x29E1C4u);
    ctx->pc = 0x29E1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E1BCu;
    // 0x29e1c0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE0C8u, 0x29E1BCu, 0x29E1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E1C4u;
label_29e1c4:
    // 0x29e1c4: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x29E1C4u;
    {
        const bool branch_taken_0x29e1c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29E1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E1C4u;
        // 0x29e1c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e1c4) {
            ctx->pc = 0x29E23Cu;
            goto label_29e23c;
        }
    }
    ctx->pc = 0x29E1CCu;
    // 0x29e1cc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x29e1ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e1d0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x29E1D0u;
    {
        const bool branch_taken_0x29e1d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E1D0u;
        // 0x29e1d4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e1d0) {
            ctx->pc = 0x29E224u;
            goto label_29e224;
        }
    }
    ctx->pc = 0x29E1D8u;
label_29e1d8:
    // 0x29e1d8: 0xc137826  jal         func_4DE098
    ctx->pc = 0x29E1D8u;
    SET_GPR_U32(ctx, 31, 0x29E1E0u);
    ctx->pc = 0x29E1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E1D8u;
    // 0x29e1dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x29E1D8u, 0x29E1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E1E0u;
label_29e1e0:
    // 0x29e1e0: 0xc0e409a  jal         func_390268
    ctx->pc = 0x29E1E0u;
    SET_GPR_U32(ctx, 31, 0x29E1E8u);
    ctx->pc = 0x29E1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E1E0u;
    // 0x29e1e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x29E1E0u, 0x29E1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E1E8u;
label_29e1e8:
    // 0x29e1e8: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x29E1E8u;
    {
        const bool branch_taken_0x29e1e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e1e8) {
            ctx->pc = 0x29E1ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29E1E8u;
            // 0x29e1ec: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29E224u;
            goto label_29e224;
        }
    }
    ctx->pc = 0x29E1F0u;
    // 0x29e1f0: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x29E1F0u;
    {
        const bool branch_taken_0x29e1f0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e1f0) {
            ctx->pc = 0x29E214u;
            goto label_29e214;
        }
    }
    ctx->pc = 0x29E1F8u;
    // 0x29e1f8: 0xc087502  jal         func_21D408
    ctx->pc = 0x29E1F8u;
    SET_GPR_U32(ctx, 31, 0x29E200u);
    ctx->pc = 0x29E1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E1F8u;
    // 0x29e1fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x29E1F8u, 0x29E200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E200u;
label_29e200:
    // 0x29e200: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x29e200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x29e204: 0x12230006  beq         $s1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x29E204u;
    {
        const bool branch_taken_0x29e204 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x29E208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E204u;
        // 0x29e208: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e204) {
            ctx->pc = 0x29E220u;
            goto label_29e220;
        }
    }
    ctx->pc = 0x29E20Cu;
    // 0x29e20c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x29E20Cu;
    {
        const bool branch_taken_0x29e20c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E20Cu;
        // 0x29e210: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e20c) {
            ctx->pc = 0x29E240u;
            goto label_29e240;
        }
    }
    ctx->pc = 0x29E214u;
label_29e214:
    // 0x29e214: 0xc087502  jal         func_21D408
    ctx->pc = 0x29E214u;
    SET_GPR_U32(ctx, 31, 0x29E21Cu);
    ctx->pc = 0x29E218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E214u;
    // 0x29e218: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x29E214u, 0x29E21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E21Cu;
label_29e21c:
    // 0x29e21c: 0x8c51020c  lw          $s1, 0x20C($v0)
    ctx->pc = 0x29e21cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_29e220:
    // 0x29e220: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x29e220u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_29e224:
    // 0x29e224: 0xc136b80  jal         func_4DAE00
    ctx->pc = 0x29E224u;
    SET_GPR_U32(ctx, 31, 0x29E22Cu);
    ctx->pc = 0x29E228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E224u;
    // 0x29e228: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAE00u, 0x29E224u, 0x29E22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E22Cu;
label_29e22c:
    // 0x29e22c: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x29e22cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x29e230: 0x5440ffe9  bnel        $v0, $zero, . + 4 + (-0x17 << 2)
    ctx->pc = 0x29E230u;
    {
        const bool branch_taken_0x29e230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29e230) {
            ctx->pc = 0x29E234u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29E230u;
            // 0x29e234: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29E1D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29e1d8;
        }
    }
    ctx->pc = 0x29E238u;
    // 0x29e238: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29e238u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29e23c:
    // 0x29e23c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x29e23cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_29e240:
    // 0x29e240: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x29e240u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29e244: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x29e244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29e248: 0x3e00008  jr          $ra
    ctx->pc = 0x29E248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29E24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E248u;
        // 0x29e24c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29E250u;
}
