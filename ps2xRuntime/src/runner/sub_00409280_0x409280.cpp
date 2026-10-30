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

// Function: sub_00409280
// Address: 0x409280 - 0x4092d8
void sub_00409280_0x409280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00409280_0x409280");
#endif

    switch (ctx->pc) {
        case 0x4092a4u: goto label_4092a4;
        case 0x4092bcu: goto label_4092bc;
        default: break;
    }

    ctx->pc = 0x409280u;

    // 0x409280: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x409280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x409284: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x409284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x409288: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x409288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x40928c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x40928cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409290: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x409290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x409294: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x409294u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409298: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x409298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x40929c: 0xc0c8cc6  jal         func_323318
    ctx->pc = 0x40929Cu;
    SET_GPR_U32(ctx, 31, 0x4092A4u);
    ctx->pc = 0x4092A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40929Cu;
    // 0x4092a0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323318u, 0x40929Cu, 0x4092A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4092A4u;
label_4092a4:
    // 0x4092a4: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x4092a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x4092a8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4092A8u;
    {
        const bool branch_taken_0x4092a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4092ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4092A8u;
        // 0x4092ac: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4092a8) {
            ctx->pc = 0x4092BCu;
            goto label_4092bc;
        }
    }
    ctx->pc = 0x4092B0u;
    // 0x4092b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4092b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4092b4: 0xc0c8e00  jal         func_323800
    ctx->pc = 0x4092B4u;
    SET_GPR_U32(ctx, 31, 0x4092BCu);
    ctx->pc = 0x4092B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4092B4u;
    // 0x4092b8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323800u, 0x4092B4u, 0x4092BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4092BCu;
label_4092bc:
    // 0x4092bc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4092bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4092c0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4092c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4092c4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4092c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4092c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4092c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4092cc: 0x3e00008  jr          $ra
    ctx->pc = 0x4092CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4092D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4092CCu;
        // 0x4092d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4092CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4092D4u;
    // 0x4092d4: 0x0  nop
    ctx->pc = 0x4092d4u;
    // NOP
    ctx->pc = 0x4092d8u;
}
