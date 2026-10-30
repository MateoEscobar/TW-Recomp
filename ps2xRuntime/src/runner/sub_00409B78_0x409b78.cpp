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

// Function: sub_00409B78
// Address: 0x409b78 - 0x409bf0
void sub_00409B78_0x409b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00409B78_0x409b78");
#endif

    switch (ctx->pc) {
        case 0x409b9cu: goto label_409b9c;
        case 0x409bb0u: goto label_409bb0;
        case 0x409bc0u: goto label_409bc0;
        case 0x409bd0u: goto label_409bd0;
        default: break;
    }

    ctx->pc = 0x409b78u;

    // 0x409b78: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x409b78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x409b7c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x409b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x409b80: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x409b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x409b84: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x409b84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409b88: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x409b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x409b8c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x409b8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409b90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x409b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x409b94: 0xc0c8d2e  jal         func_3234B8
    ctx->pc = 0x409B94u;
    SET_GPR_U32(ctx, 31, 0x409B9Cu);
    ctx->pc = 0x409B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409B94u;
    // 0x409b98: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3234B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3234B8u, 0x409B94u, 0x409B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409B9Cu;
label_409b9c:
    // 0x409b9c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x409B9Cu;
    {
        const bool branch_taken_0x409b9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x409BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409B9Cu;
        // 0x409ba0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x409b9c) {
            ctx->pc = 0x409BD4u;
            goto label_409bd4;
        }
    }
    ctx->pc = 0x409BA4u;
    // 0x409ba4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x409ba4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409ba8: 0xc0c8e00  jal         func_323800
    ctx->pc = 0x409BA8u;
    SET_GPR_U32(ctx, 31, 0x409BB0u);
    ctx->pc = 0x409BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409BA8u;
    // 0x409bac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323800u, 0x409BA8u, 0x409BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409BB0u;
label_409bb0:
    // 0x409bb0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x409bb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409bb4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x409bb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409bb8: 0xc102f06  jal         func_40BC18
    ctx->pc = 0x409BB8u;
    SET_GPR_U32(ctx, 31, 0x409BC0u);
    ctx->pc = 0x409BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409BB8u;
    // 0x409bbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40BC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40BC18u, 0x409BB8u, 0x409BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409BC0u;
label_409bc0:
    // 0x409bc0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x409bc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409bc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x409bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409bc8: 0xc10254e  jal         func_409538
    ctx->pc = 0x409BC8u;
    SET_GPR_U32(ctx, 31, 0x409BD0u);
    ctx->pc = 0x409BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409BC8u;
    // 0x409bcc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409538u, 0x409BC8u, 0x409BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409BD0u;
label_409bd0:
    // 0x409bd0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x409bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_409bd4:
    // 0x409bd4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x409bd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x409bd8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x409bd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x409bdc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x409bdcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x409be0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x409be0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x409be4: 0x3e00008  jr          $ra
    ctx->pc = 0x409BE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x409BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409BE4u;
        // 0x409be8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x409BE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x409BECu;
    // 0x409bec: 0x0  nop
    ctx->pc = 0x409becu;
    // NOP
    ctx->pc = 0x409bf0u;
}
