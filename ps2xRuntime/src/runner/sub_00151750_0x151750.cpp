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

// Function: sub_00151750
// Address: 0x151750 - 0x151798
void sub_00151750_0x151750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00151750_0x151750");
#endif

    switch (ctx->pc) {
        case 0x151764u: goto label_151764;
        case 0x15176cu: goto label_15176c;
        case 0x151778u: goto label_151778;
        case 0x151780u: goto label_151780;
        case 0x151788u: goto label_151788;
        default: break;
    }

    ctx->pc = 0x151750u;

    // 0x151750: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x151750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x151754: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x151754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x151758: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x151758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15175c: 0xc0546f0  jal         func_151BC0
    ctx->pc = 0x15175Cu;
    SET_GPR_U32(ctx, 31, 0x151764u);
    ctx->pc = 0x151760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15175Cu;
    // 0x151760: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151BC0u, 0x15175Cu, 0x151764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151764u;
label_151764:
    // 0x151764: 0xc05368e  jal         func_14DA38
    ctx->pc = 0x151764u;
    SET_GPR_U32(ctx, 31, 0x15176Cu);
    ctx->pc = 0x151768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151764u;
    // 0x151768: 0x24040053  addiu       $a0, $zero, 0x53 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DA38u, 0x151764u, 0x15176Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15176Cu;
label_15176c:
    // 0x15176c: 0x108400  sll         $s0, $s0, 16
    ctx->pc = 0x15176cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x151770: 0xc053722  jal         func_14DC88
    ctx->pc = 0x151770u;
    SET_GPR_U32(ctx, 31, 0x151778u);
    ctx->pc = 0x151774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151770u;
    // 0x151774: 0x102403  sra         $a0, $s0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DC88u, 0x151770u, 0x151778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151778u;
label_151778:
    // 0x151778: 0xc0536aa  jal         func_14DAA8
    ctx->pc = 0x151778u;
    SET_GPR_U32(ctx, 31, 0x151780u);
    ctx->pc = 0x14DAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DAA8u, 0x151778u, 0x151780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151780u;
label_151780:
    // 0x151780: 0xc05471c  jal         func_151C70
    ctx->pc = 0x151780u;
    SET_GPR_U32(ctx, 31, 0x151788u);
    ctx->pc = 0x151C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151C70u, 0x151780u, 0x151788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151788u;
label_151788:
    // 0x151788: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x151788u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15178c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15178cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x151790: 0x3e00008  jr          $ra
    ctx->pc = 0x151790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151790u;
        // 0x151794: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151790u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x151798u;
}
