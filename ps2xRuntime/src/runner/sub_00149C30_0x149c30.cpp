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

// Function: sub_00149C30
// Address: 0x149c30 - 0x149c98
void sub_00149C30_0x149c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149C30_0x149c30");
#endif

    switch (ctx->pc) {
        case 0x149c4cu: goto label_149c4c;
        case 0x149c70u: goto label_149c70;
        case 0x149c88u: goto label_149c88;
        default: break;
    }

    ctx->pc = 0x149c30u;

    // 0x149c30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x149c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x149c34: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x149c34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x149c38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x149c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x149c3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x149c3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149c40: 0x8e040104  lw          $a0, 0x104($s0)
    ctx->pc = 0x149c40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x149c44: 0xc113518  jal         func_44D460
    ctx->pc = 0x149C44u;
    SET_GPR_U32(ctx, 31, 0x149C4Cu);
    ctx->pc = 0x149C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149C44u;
    // 0x149c48: 0x8e050108  lw          $a1, 0x108($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44D460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44D460u, 0x149C44u, 0x149C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149C4Cu;
label_149c4c:
    // 0x149c4c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x149c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x149c50: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x149C50u;
    {
        const bool branch_taken_0x149c50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x149c50) {
            ctx->pc = 0x149C54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x149C50u;
            // 0x149c54: 0x8e040104  lw          $a0, 0x104($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x149C68u;
            goto label_149c68;
        }
    }
    ctx->pc = 0x149C58u;
    // 0x149c58: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x149c58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x149c5c: 0x24429bc0  addiu       $v0, $v0, -0x6440
    ctx->pc = 0x149c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941632));
    // 0x149c60: 0xae020100  sw          $v0, 0x100($s0)
    ctx->pc = 0x149c60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
    // 0x149c64: 0x8e040104  lw          $a0, 0x104($s0)
    ctx->pc = 0x149c64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_149c68:
    // 0x149c68: 0xc113518  jal         func_44D460
    ctx->pc = 0x149C68u;
    SET_GPR_U32(ctx, 31, 0x149C70u);
    ctx->pc = 0x149C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149C68u;
    // 0x149c6c: 0x8e050108  lw          $a1, 0x108($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44D460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44D460u, 0x149C68u, 0x149C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149C70u;
label_149c70:
    // 0x149c70: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x149C70u;
    {
        const bool branch_taken_0x149c70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x149C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149C70u;
        // 0x149c74: 0x3c020015  lui         $v0, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149c70) {
            ctx->pc = 0x149C80u;
            goto label_149c80;
        }
    }
    ctx->pc = 0x149C78u;
    // 0x149c78: 0x24429c98  addiu       $v0, $v0, -0x6368
    ctx->pc = 0x149c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941848));
    // 0x149c7c: 0xae020100  sw          $v0, 0x100($s0)
    ctx->pc = 0x149c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
label_149c80:
    // 0x149c80: 0xc0525c8  jal         func_149720
    ctx->pc = 0x149C80u;
    SET_GPR_U32(ctx, 31, 0x149C88u);
    ctx->pc = 0x149C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149C80u;
    // 0x149c84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149720u, 0x149C80u, 0x149C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149C88u;
label_149c88:
    // 0x149c88: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x149c88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149c8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x149c8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149c90: 0x3e00008  jr          $ra
    ctx->pc = 0x149C90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149C90u;
        // 0x149c94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149C90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x149C98u;
}
