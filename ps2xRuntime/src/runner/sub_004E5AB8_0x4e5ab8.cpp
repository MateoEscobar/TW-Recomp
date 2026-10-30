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

// Function: sub_004E5AB8
// Address: 0x4e5ab8 - 0x4e5b08
void sub_004E5AB8_0x4e5ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E5AB8_0x4e5ab8");
#endif

    switch (ctx->pc) {
        case 0x4e5ad8u: goto label_4e5ad8;
        case 0x4e5ae8u: goto label_4e5ae8;
        default: break;
    }

    ctx->pc = 0x4e5ab8u;

    // 0x4e5ab8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4e5ab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4e5abc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4e5abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x4e5ac0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4e5ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4e5ac4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4e5ac4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5ac8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4e5ac8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5acc: 0x12110008  beq         $s0, $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x4E5ACCu;
    {
        const bool branch_taken_0x4e5acc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x4E5AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5ACCu;
        // 0x4e5ad0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e5acc) {
            ctx->pc = 0x4E5AF0u;
            goto label_4e5af0;
        }
    }
    ctx->pc = 0x4E5AD4u;
    // 0x4e5ad4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x4e5ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4e5ad8:
    // 0x4e5ad8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e5ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5adc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4e5adcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5ae0: 0xc13963e  jal         func_4E58F8
    ctx->pc = 0x4E5AE0u;
    SET_GPR_U32(ctx, 31, 0x4E5AE8u);
    ctx->pc = 0x4E5AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E5AE0u;
    // 0x4e5ae4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E58F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E58F8u, 0x4E5AE0u, 0x4E5AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E5AE8u;
label_4e5ae8:
    // 0x4e5ae8: 0x5611fffb  bnel        $s0, $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x4E5AE8u;
    {
        const bool branch_taken_0x4e5ae8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        if (branch_taken_0x4e5ae8) {
            ctx->pc = 0x4E5AECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E5AE8u;
            // 0x4e5aec: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E5AD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e5ad8;
        }
    }
    ctx->pc = 0x4E5AF0u;
label_4e5af0:
    // 0x4e5af0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4e5af0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e5af4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4e5af4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e5af8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e5af8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e5afc: 0x3e00008  jr          $ra
    ctx->pc = 0x4E5AFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E5B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5AFCu;
        // 0x4e5b00: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E5AFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E5B04u;
    // 0x4e5b04: 0x0  nop
    ctx->pc = 0x4e5b04u;
    // NOP
    ctx->pc = 0x4e5b08u;
}
