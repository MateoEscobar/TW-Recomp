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

// Function: sub_0015E7E8
// Address: 0x15e7e8 - 0x15e838
void sub_0015E7E8_0x15e7e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015E7E8_0x15e7e8");
#endif

    switch (ctx->pc) {
        case 0x15e810u: goto label_15e810;
        case 0x15e824u: goto label_15e824;
        default: break;
    }

    ctx->pc = 0x15e7e8u;

    // 0x15e7e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15e7e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15e7ec: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x15e7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x15e7f0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x15e7f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x15e7f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15e7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15e7f8: 0x24505560  addiu       $s0, $v0, 0x5560
    ctx->pc = 0x15e7f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 21856));
    // 0x15e7fc: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x15e7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5E5580u));
    // 0x15e800: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x15E800u;
    {
        const bool branch_taken_0x15e800 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e800) {
            ctx->pc = 0x15E804u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15E800u;
            // 0x15e804: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15E828u;
            goto label_15e828;
        }
    }
    ctx->pc = 0x15E808u;
    // 0x15e808: 0xc0579d2  jal         func_15E748
    ctx->pc = 0x15E808u;
    SET_GPR_U32(ctx, 31, 0x15E810u);
    ctx->pc = 0x15E748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E748u, 0x15E808u, 0x15E810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E810u;
label_15e810:
    // 0x15e810: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x15e810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x15e814: 0x50430004  beql        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x15E814u;
    {
        const bool branch_taken_0x15e814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x15e814) {
            ctx->pc = 0x15E818u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15E814u;
            // 0x15e818: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15E828u;
            goto label_15e828;
        }
    }
    ctx->pc = 0x15E81Cu;
    // 0x15e81c: 0xc05797a  jal         func_15E5E8
    ctx->pc = 0x15E81Cu;
    SET_GPR_U32(ctx, 31, 0x15E824u);
    ctx->pc = 0x15E820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E81Cu;
    // 0x15e820: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15E5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E5E8u, 0x15E81Cu, 0x15E824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E824u;
label_15e824:
    // 0x15e824: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x15e824u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15e828:
    // 0x15e828: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15e828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15e82c: 0x3e00008  jr          $ra
    ctx->pc = 0x15E82Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15E830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E82Cu;
        // 0x15e830: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E82Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15E834u;
    // 0x15e834: 0x0  nop
    ctx->pc = 0x15e834u;
    // NOP
    ctx->pc = 0x15e838u;
}
