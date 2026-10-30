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

// Function: sub_0028F988
// Address: 0x28f988 - 0x28f9e8
void sub_0028F988_0x28f988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028F988_0x28f988");
#endif

    switch (ctx->pc) {
        case 0x28f9b0u: goto label_28f9b0;
        case 0x28f9d0u: goto label_28f9d0;
        default: break;
    }

    ctx->pc = 0x28f988u;

    // 0x28f988: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x28f988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x28f98c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x28f98cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x28f990: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x28f990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x28f994: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28f994u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f998: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x28f998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x28f99c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x28f99cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f9a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28f9a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28f9a4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x28f9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28f9a8: 0xc089f66  jal         func_227D98
    ctx->pc = 0x28F9A8u;
    SET_GPR_U32(ctx, 31, 0x28F9B0u);
    ctx->pc = 0x28F9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F9A8u;
    // 0x28f9ac: 0x8e320020  lw          $s2, 0x20($s1) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227D98u, 0x28F9A8u, 0x28F9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F9B0u;
label_28f9b0:
    // 0x28f9b0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x28f9b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f9b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28f9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28f9b8: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28F9B8u;
    {
        const bool branch_taken_0x28f9b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x28f9b8) {
            ctx->pc = 0x28F9BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28F9B8u;
            // 0x28f9bc: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28F9D4u;
            goto label_28f9d4;
        }
    }
    ctx->pc = 0x28F9C0u;
    // 0x28f9c0: 0x16430003  bne         $s2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x28F9C0u;
    {
        const bool branch_taken_0x28f9c0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x28F9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F9C0u;
        // 0x28f9c4: 0x8e04003c  lw          $a0, 0x3C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f9c0) {
            ctx->pc = 0x28F9D0u;
            goto label_28f9d0;
        }
    }
    ctx->pc = 0x28F9C8u;
    // 0x28f9c8: 0xc0ad486  jal         func_2B5218
    ctx->pc = 0x28F9C8u;
    SET_GPR_U32(ctx, 31, 0x28F9D0u);
    ctx->pc = 0x28F9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F9C8u;
    // 0x28f9cc: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5218u, 0x28F9C8u, 0x28F9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F9D0u;
label_28f9d0:
    // 0x28f9d0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x28f9d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_28f9d4:
    // 0x28f9d4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x28f9d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28f9d8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x28f9d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28f9dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28f9dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28f9e0: 0x3e00008  jr          $ra
    ctx->pc = 0x28F9E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F9E0u;
        // 0x28f9e4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F9E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28F9E8u;
}
