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

// Function: sub_001F7450
// Address: 0x1f7450 - 0x1f74b8
void sub_001F7450_0x1f7450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F7450_0x1f7450");
#endif

    switch (ctx->pc) {
        case 0x1f7474u: goto label_1f7474;
        case 0x1f7484u: goto label_1f7484;
        case 0x1f7498u: goto label_1f7498;
        default: break;
    }

    ctx->pc = 0x1f7450u;

    // 0x1f7450: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f7450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f7454: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1f7454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1f7458: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f7458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f745c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f745cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7460: 0x8e0500c4  lw          $a1, 0xC4($s0)
    ctx->pc = 0x1f7460u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x1f7464: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F7464u;
    {
        const bool branch_taken_0x1f7464 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7464u;
        // 0x1f7468: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7464) {
            ctx->pc = 0x1F748Cu;
            goto label_1f748c;
        }
    }
    ctx->pc = 0x1F746Cu;
    // 0x1f746c: 0xc07dcc2  jal         func_1F7308
    ctx->pc = 0x1F746Cu;
    SET_GPR_U32(ctx, 31, 0x1F7474u);
    ctx->pc = 0x1F7470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F746Cu;
    // 0x1f7470: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7308u, 0x1F746Cu, 0x1F7474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7474u;
label_1f7474:
    // 0x1f7474: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1f7474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1f7478: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1f7478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f747c: 0xc043f0c  jal         func_10FC30
    ctx->pc = 0x1F747Cu;
    SET_GPR_U32(ctx, 31, 0x1F7484u);
    ctx->pc = 0x1F7480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F747Cu;
    // 0x1f7480: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC30u, 0x1F747Cu, 0x1F7484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7484u;
label_1f7484:
    // 0x1f7484: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1F7484u;
    {
        const bool branch_taken_0x1f7484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7484u;
        // 0x1f7488: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7484) {
            ctx->pc = 0x1F74A8u;
            goto label_1f74a8;
        }
    }
    ctx->pc = 0x1F748Cu;
label_1f748c:
    // 0x1f748c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1f748cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1f7490: 0xc043f0c  jal         func_10FC30
    ctx->pc = 0x1F7490u;
    SET_GPR_U32(ctx, 31, 0x1F7498u);
    ctx->pc = 0x1F7494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7490u;
    // 0x1f7494: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC30u, 0x1F7490u, 0x1F7498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7498u;
label_1f7498:
    // 0x1f7498: 0x8e0300b0  lw          $v1, 0xB0($s0)
    ctx->pc = 0x1f7498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x1f749c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f749cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f74a0: 0xac6200c4  sw          $v0, 0xC4($v1)
    ctx->pc = 0x1f74a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 196), GPR_U32(ctx, 2));
    // 0x1f74a4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1f74a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f74a8:
    // 0x1f74a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f74a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f74ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1F74ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F74B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F74ACu;
        // 0x1f74b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F74ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F74B4u;
    // 0x1f74b4: 0x0  nop
    ctx->pc = 0x1f74b4u;
    // NOP
    ctx->pc = 0x1f74b8u;
}
