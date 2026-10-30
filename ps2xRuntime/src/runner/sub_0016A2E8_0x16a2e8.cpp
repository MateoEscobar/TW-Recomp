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

// Function: sub_0016A2E8
// Address: 0x16a2e8 - 0x16a328
void sub_0016A2E8_0x16a2e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016A2E8_0x16a2e8");
#endif

    switch (ctx->pc) {
        case 0x16a310u: goto label_16a310;
        default: break;
    }

    ctx->pc = 0x16a2e8u;

    // 0x16a2e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16a2e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16a2ec: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x16a2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x16a2f0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16a2f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x16a2f4: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x16a2f4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x16a2f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16a2f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16a2fc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16a2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16a300: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16A300u;
    {
        const bool branch_taken_0x16a300 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x16A304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A300u;
        // 0x16a304: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a300) {
            ctx->pc = 0x16A314u;
            goto label_16a314;
        }
    }
    ctx->pc = 0x16A308u;
    // 0x16a308: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x16A308u;
    SET_GPR_U32(ctx, 31, 0x16A310u);
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x16A308u, 0x16A310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A310u;
label_16a310:
    // 0x16a310: 0xa05000d7  sb          $s0, 0xD7($v0)
    ctx->pc = 0x16a310u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 215), (uint8_t)GPR_U32(ctx, 16));
label_16a314:
    // 0x16a314: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16a314u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16a318: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16a318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a31c: 0x3e00008  jr          $ra
    ctx->pc = 0x16A31Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A31Cu;
        // 0x16a320: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A31Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16A324u;
    // 0x16a324: 0x0  nop
    ctx->pc = 0x16a324u;
    // NOP
    ctx->pc = 0x16a328u;
}
