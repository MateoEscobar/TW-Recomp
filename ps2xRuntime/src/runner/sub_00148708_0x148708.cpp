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

// Function: sub_00148708
// Address: 0x148708 - 0x148748
void sub_00148708_0x148708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00148708_0x148708");
#endif

    switch (ctx->pc) {
        case 0x148730u: goto label_148730;
        default: break;
    }

    ctx->pc = 0x148708u;

    // 0x148708: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x148708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14870c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x14870cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148710: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x148710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x148714: 0x24860004  addiu       $a2, $a0, 0x4
    ctx->pc = 0x148714u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x148718: 0x24900104  addiu       $s0, $a0, 0x104
    ctx->pc = 0x148718u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 260));
    // 0x14871c: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x14871cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
    // 0x148720: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x148720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x148724: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x148724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148728: 0xc10ca28  jal         func_4328A0
    ctx->pc = 0x148728u;
    SET_GPR_U32(ctx, 31, 0x148730u);
    ctx->pc = 0x14872Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148728u;
    // 0x14872c: 0x24a5a150  addiu       $a1, $a1, -0x5EB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4328A0u, 0x148728u, 0x148730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148730u;
label_148730:
    // 0x148730: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x148730u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148734: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x148734u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x148738: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x148738u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14873c: 0x3e00008  jr          $ra
    ctx->pc = 0x14873Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14873Cu;
        // 0x148740: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14873Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x148744u;
    // 0x148744: 0x0  nop
    ctx->pc = 0x148744u;
    // NOP
    ctx->pc = 0x148748u;
}
