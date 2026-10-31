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

// Function: sub_00149C98
// Address: 0x149c98 - 0x149cf0
void sub_00149C98_0x149c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149C98_0x149c98");
#endif

    switch (ctx->pc) {
        case 0x149cb4u: goto label_149cb4;
        case 0x149cdcu: goto label_149cdc;
        default: break;
    }

    ctx->pc = 0x149c98u;

    // 0x149c98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x149c98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x149c9c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x149c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x149ca0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x149ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x149ca4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x149ca4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149ca8: 0x8e040104  lw          $a0, 0x104($s0)
    ctx->pc = 0x149ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x149cac: 0xc1136b4  jal         func_44DAD0
    ctx->pc = 0x149CACu;
    SET_GPR_U32(ctx, 31, 0x149CB4u);
    ctx->pc = 0x149CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149CACu;
    // 0x149cb0: 0x8e050108  lw          $a1, 0x108($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44DAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44DAD0u, 0x149CACu, 0x149CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149CB4u;
label_149cb4:
    // 0x149cb4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x149cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x149cb8: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x149CB8u;
    {
        const bool branch_taken_0x149cb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x149cb8) {
            ctx->pc = 0x149CBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x149CB8u;
            // 0x149cbc: 0x3c020015  lui         $v0, 0x15 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x149CCCu;
            goto label_149ccc;
        }
    }
    ctx->pc = 0x149CC0u;
    // 0x149cc0: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x149cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x149cc4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x149CC4u;
    {
        const bool branch_taken_0x149cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149CC4u;
        // 0x149cc8: 0x24429cf0  addiu       $v0, $v0, -0x6310 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941936));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149cc4) {
            ctx->pc = 0x149CD0u;
            goto label_149cd0;
        }
    }
    ctx->pc = 0x149CCCu;
label_149ccc:
    // 0x149ccc: 0x24429e58  addiu       $v0, $v0, -0x61A8
    ctx->pc = 0x149cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942296));
label_149cd0:
    // 0x149cd0: 0xae020100  sw          $v0, 0x100($s0)
    ctx->pc = 0x149cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
    // 0x149cd4: 0xc0525c8  jal         func_149720
    ctx->pc = 0x149CD4u;
    SET_GPR_U32(ctx, 31, 0x149CDCu);
    ctx->pc = 0x149CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149CD4u;
    // 0x149cd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149720u, 0x149CD4u, 0x149CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149CDCu;
label_149cdc:
    // 0x149cdc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x149cdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149ce0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x149ce0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149ce4: 0x3e00008  jr          $ra
    ctx->pc = 0x149CE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149CE4u;
        // 0x149ce8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149CE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x149CECu;
    // 0x149cec: 0x0  nop
    ctx->pc = 0x149cecu;
    // NOP
    ctx->pc = 0x149cf0u;
}
