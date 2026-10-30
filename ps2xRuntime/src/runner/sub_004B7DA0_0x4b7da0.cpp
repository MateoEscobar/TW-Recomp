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

// Function: sub_004B7DA0
// Address: 0x4b7da0 - 0x4b7e00
void sub_004B7DA0_0x4b7da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B7DA0_0x4b7da0");
#endif

    switch (ctx->pc) {
        case 0x4b7dd0u: goto label_4b7dd0;
        default: break;
    }

    ctx->pc = 0x4b7da0u;

    // 0x4b7da0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4b7da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4b7da4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x4b7da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x4b7da8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b7da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4b7dac: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x4b7dacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b7db0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4b7db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4b7db4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4b7db4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b7db8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x4b7db8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b7dbc: 0x11303c  dsll32      $a2, $s1, 0
    ctx->pc = 0x4b7dbcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) << (32 + 0));
    // 0x4b7dc0: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x4b7dc0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x4b7dc4: 0x8e070058  lw          $a3, 0x58($s0)
    ctx->pc = 0x4b7dc4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x4b7dc8: 0xc13628a  jal         func_4D8A28
    ctx->pc = 0x4B7DC8u;
    SET_GPR_U32(ctx, 31, 0x4B7DD0u);
    ctx->pc = 0x4B7DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B7DC8u;
    // 0x4b7dcc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D8A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D8A28u, 0x4B7DC8u, 0x4B7DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B7DD0u;
label_4b7dd0:
    // 0x4b7dd0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4b7dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4b7dd4: 0xde030040  ld          $v1, 0x40($s0)
    ctx->pc = 0x4b7dd4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x4b7dd8: 0x4600003  bltz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B7DD8u;
    {
        const bool branch_taken_0x4b7dd8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4B7DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7DD8u;
        // 0x4b7ddc: 0x2203e  dsrl32      $a0, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b7dd8) {
            ctx->pc = 0x4B7DE8u;
            goto label_4b7de8;
        }
    }
    ctx->pc = 0x4B7DE0u;
    // 0x4b7de0: 0x71102d  daddu       $v0, $v1, $s1
    ctx->pc = 0x4b7de0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 17));
    // 0x4b7de4: 0xfe020040  sd          $v0, 0x40($s0)
    ctx->pc = 0x4b7de4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 2));
label_4b7de8:
    // 0x4b7de8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4b7de8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b7dec: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4b7decu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b7df0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x4b7df0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b7df4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b7df4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b7df8: 0x3e00008  jr          $ra
    ctx->pc = 0x4B7DF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B7DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7DF8u;
        // 0x4b7dfc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B7DF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B7E00u;
}
