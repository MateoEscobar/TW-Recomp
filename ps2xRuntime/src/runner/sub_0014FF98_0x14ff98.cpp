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

// Function: sub_0014FF98
// Address: 0x14ff98 - 0x14ffe0
void sub_0014FF98_0x14ff98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014FF98_0x14ff98");
#endif

    switch (ctx->pc) {
        case 0x14ffacu: goto label_14ffac;
        case 0x14ffb4u: goto label_14ffb4;
        case 0x14ffc0u: goto label_14ffc0;
        case 0x14ffc8u: goto label_14ffc8;
        case 0x14ffd0u: goto label_14ffd0;
        default: break;
    }

    ctx->pc = 0x14ff98u;

    // 0x14ff98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14ff98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14ff9c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x14ff9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x14ffa0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14ffa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14ffa4: 0xc0546f0  jal         func_151BC0
    ctx->pc = 0x14FFA4u;
    SET_GPR_U32(ctx, 31, 0x14FFACu);
    ctx->pc = 0x14FFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FFA4u;
    // 0x14ffa8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151BC0u, 0x14FFA4u, 0x14FFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FFACu;
label_14ffac:
    // 0x14ffac: 0xc05368e  jal         func_14DA38
    ctx->pc = 0x14FFACu;
    SET_GPR_U32(ctx, 31, 0x14FFB4u);
    ctx->pc = 0x14FFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FFACu;
    // 0x14ffb0: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DA38u, 0x14FFACu, 0x14FFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FFB4u;
label_14ffb4:
    // 0x14ffb4: 0x108400  sll         $s0, $s0, 16
    ctx->pc = 0x14ffb4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x14ffb8: 0xc053722  jal         func_14DC88
    ctx->pc = 0x14FFB8u;
    SET_GPR_U32(ctx, 31, 0x14FFC0u);
    ctx->pc = 0x14FFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FFB8u;
    // 0x14ffbc: 0x102403  sra         $a0, $s0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DC88u, 0x14FFB8u, 0x14FFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FFC0u;
label_14ffc0:
    // 0x14ffc0: 0xc0536aa  jal         func_14DAA8
    ctx->pc = 0x14FFC0u;
    SET_GPR_U32(ctx, 31, 0x14FFC8u);
    ctx->pc = 0x14DAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DAA8u, 0x14FFC0u, 0x14FFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FFC8u;
label_14ffc8:
    // 0x14ffc8: 0xc05471c  jal         func_151C70
    ctx->pc = 0x14FFC8u;
    SET_GPR_U32(ctx, 31, 0x14FFD0u);
    ctx->pc = 0x151C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151C70u, 0x14FFC8u, 0x14FFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FFD0u;
label_14ffd0:
    // 0x14ffd0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x14ffd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14ffd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14ffd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14ffd8: 0x3e00008  jr          $ra
    ctx->pc = 0x14FFD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14FFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FFD8u;
        // 0x14ffdc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14FFD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14FFE0u;
}
