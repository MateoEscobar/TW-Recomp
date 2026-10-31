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

// Function: sub_00145FA0
// Address: 0x145fa0 - 0x146000
void sub_00145FA0_0x145fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00145FA0_0x145fa0");
#endif

    switch (ctx->pc) {
        case 0x145fc8u: goto label_145fc8;
        case 0x145fe8u: goto label_145fe8;
        default: break;
    }

    ctx->pc = 0x145fa0u;

    // 0x145fa0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x145fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x145fa4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x145fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x145fa8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x145fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x145fac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x145facu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145fb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x145fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x145fb4: 0xa2020019  sb          $v0, 0x19($s0)
    ctx->pc = 0x145fb4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 25), (uint8_t)GPR_U32(ctx, 2));
    // 0x145fb8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x145fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145fbc: 0xa200001b  sb          $zero, 0x1B($s0)
    ctx->pc = 0x145fbcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 27), (uint8_t)GPR_U32(ctx, 0));
    // 0x145fc0: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x145fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x145fc4: 0xa2000018  sb          $zero, 0x18($s0)
    ctx->pc = 0x145fc4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 0));
label_145fc8:
    // 0x145fc8: 0xac60fff8  sw          $zero, -0x8($v1)
    ctx->pc = 0x145fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967288), GPR_U32(ctx, 0));
    // 0x145fcc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x145fccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x145fd0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x145fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x145fd4: 0x2c820002  sltiu       $v0, $a0, 0x2
    ctx->pc = 0x145fd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x145fd8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x145FD8u;
    {
        const bool branch_taken_0x145fd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x145FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145FD8u;
        // 0x145fdc: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145fd8) {
            ctx->pc = 0x145FC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_145fc8;
        }
    }
    ctx->pc = 0x145FE0u;
    // 0x145fe0: 0xc051800  jal         func_146000
    ctx->pc = 0x145FE0u;
    SET_GPR_U32(ctx, 31, 0x145FE8u);
    ctx->pc = 0x145FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145FE0u;
    // 0x145fe4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146000u, 0x145FE0u, 0x145FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145FE8u;
label_145fe8:
    // 0x145fe8: 0xa200001f  sb          $zero, 0x1F($s0)
    ctx->pc = 0x145fe8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 31), (uint8_t)GPR_U32(ctx, 0));
    // 0x145fec: 0xa200001e  sb          $zero, 0x1E($s0)
    ctx->pc = 0x145fecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 30), (uint8_t)GPR_U32(ctx, 0));
    // 0x145ff0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x145ff0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x145ff4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x145ff4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x145ff8: 0x3e00008  jr          $ra
    ctx->pc = 0x145FF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x145FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145FF8u;
        // 0x145ffc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145FF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x146000u;
}
