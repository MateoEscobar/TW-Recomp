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

// Function: sub_00202B68
// Address: 0x202b68 - 0x202bc8
void sub_00202B68_0x202b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00202B68_0x202b68");
#endif

    switch (ctx->pc) {
        case 0x202b88u: goto label_202b88;
        case 0x202b94u: goto label_202b94;
        default: break;
    }

    ctx->pc = 0x202b68u;

    // 0x202b68: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x202b68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x202b6c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x202b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x202b70: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x202b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x202b74: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x202b74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202b78: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x202b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x202b7c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x202b7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202b80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x202b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x202b84: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x202b84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_202b88:
    // 0x202b88: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x202b88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202b8c: 0xc080ad4  jal         func_202B50
    ctx->pc = 0x202B8Cu;
    SET_GPR_U32(ctx, 31, 0x202B94u);
    ctx->pc = 0x202B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202B8Cu;
    // 0x202b90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202B50u, 0x202B8Cu, 0x202B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202B94u;
label_202b94:
    // 0x202b94: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x202b94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x202b98: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x202b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x202b9c: 0x2e04000a  sltiu       $a0, $s0, 0xA
    ctx->pc = 0x202b9cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x202ba0: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x202BA0u;
    {
        const bool branch_taken_0x202ba0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x202BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202BA0u;
        // 0x202ba4: 0x62880b  movn        $s1, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202ba0) {
            ctx->pc = 0x202B88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_202b88;
        }
    }
    ctx->pc = 0x202BA8u;
    // 0x202ba8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x202ba8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202bac: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x202bacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x202bb0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x202bb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x202bb4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x202bb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x202bb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x202bb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x202bbc: 0x3e00008  jr          $ra
    ctx->pc = 0x202BBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202BBCu;
        // 0x202bc0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202BBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x202BC4u;
    // 0x202bc4: 0x0  nop
    ctx->pc = 0x202bc4u;
    // NOP
    ctx->pc = 0x202bc8u;
}
