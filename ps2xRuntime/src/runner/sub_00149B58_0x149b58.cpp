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

// Function: sub_00149B58
// Address: 0x149b58 - 0x149bc0
void sub_00149B58_0x149b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149B58_0x149b58");
#endif

    switch (ctx->pc) {
        case 0x149b74u: goto label_149b74;
        case 0x149b98u: goto label_149b98;
        case 0x149bb0u: goto label_149bb0;
        default: break;
    }

    ctx->pc = 0x149b58u;

    // 0x149b58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x149b58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x149b5c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x149b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x149b60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x149b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x149b64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x149b64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149b68: 0x8e040104  lw          $a0, 0x104($s0)
    ctx->pc = 0x149b68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x149b6c: 0xc113518  jal         func_44D460
    ctx->pc = 0x149B6Cu;
    SET_GPR_U32(ctx, 31, 0x149B74u);
    ctx->pc = 0x149B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149B6Cu;
    // 0x149b70: 0x8e050108  lw          $a1, 0x108($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44D460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44D460u, 0x149B6Cu, 0x149B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149B74u;
label_149b74:
    // 0x149b74: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x149b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x149b78: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x149B78u;
    {
        const bool branch_taken_0x149b78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x149b78) {
            ctx->pc = 0x149B7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x149B78u;
            // 0x149b7c: 0x8e040104  lw          $a0, 0x104($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x149B90u;
            goto label_149b90;
        }
    }
    ctx->pc = 0x149B80u;
    // 0x149b80: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x149b80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x149b84: 0x24429b08  addiu       $v0, $v0, -0x64F8
    ctx->pc = 0x149b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941448));
    // 0x149b88: 0xae020100  sw          $v0, 0x100($s0)
    ctx->pc = 0x149b88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
    // 0x149b8c: 0x8e040104  lw          $a0, 0x104($s0)
    ctx->pc = 0x149b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_149b90:
    // 0x149b90: 0xc113518  jal         func_44D460
    ctx->pc = 0x149B90u;
    SET_GPR_U32(ctx, 31, 0x149B98u);
    ctx->pc = 0x149B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149B90u;
    // 0x149b94: 0x8e050108  lw          $a1, 0x108($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44D460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44D460u, 0x149B90u, 0x149B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149B98u;
label_149b98:
    // 0x149b98: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x149B98u;
    {
        const bool branch_taken_0x149b98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x149B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149B98u;
        // 0x149b9c: 0x3c020015  lui         $v0, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149b98) {
            ctx->pc = 0x149BA8u;
            goto label_149ba8;
        }
    }
    ctx->pc = 0x149BA0u;
    // 0x149ba0: 0x244299e8  addiu       $v0, $v0, -0x6618
    ctx->pc = 0x149ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941160));
    // 0x149ba4: 0xae020100  sw          $v0, 0x100($s0)
    ctx->pc = 0x149ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
label_149ba8:
    // 0x149ba8: 0xc0525c8  jal         func_149720
    ctx->pc = 0x149BA8u;
    SET_GPR_U32(ctx, 31, 0x149BB0u);
    ctx->pc = 0x149BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149BA8u;
    // 0x149bac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149720u, 0x149BA8u, 0x149BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149BB0u;
label_149bb0:
    // 0x149bb0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x149bb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149bb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x149bb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149bb8: 0x3e00008  jr          $ra
    ctx->pc = 0x149BB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149BB8u;
        // 0x149bbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149BB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x149BC0u;
}
