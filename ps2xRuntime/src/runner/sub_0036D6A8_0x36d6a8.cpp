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

// Function: sub_0036D6A8
// Address: 0x36d6a8 - 0x36d700
void sub_0036D6A8_0x36d6a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036D6A8_0x36d6a8");
#endif

    switch (ctx->pc) {
        case 0x36d6c8u: goto label_36d6c8;
        case 0x36d6dcu: goto label_36d6dc;
        case 0x36d6e8u: goto label_36d6e8;
        default: break;
    }

    ctx->pc = 0x36d6a8u;

    // 0x36d6a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x36d6a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x36d6ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36d6acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36d6b0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x36d6b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x36d6b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36d6b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d6b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36d6b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x36d6bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36d6bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36d6c0: 0xc102488  jal         func_409220
    ctx->pc = 0x36D6C0u;
    SET_GPR_U32(ctx, 31, 0x36D6C8u);
    ctx->pc = 0x36D6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D6C0u;
    // 0x36d6c4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x36D6C0u, 0x36D6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D6C8u;
label_36d6c8:
    // 0x36d6c8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x36d6c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d6cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36d6ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d6d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36d6d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d6d4: 0xc102488  jal         func_409220
    ctx->pc = 0x36D6D4u;
    SET_GPR_U32(ctx, 31, 0x36D6DCu);
    ctx->pc = 0x36D6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D6D4u;
    // 0x36d6d8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x36D6D4u, 0x36D6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D6DCu;
label_36d6dc:
    // 0x36d6dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x36d6dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d6e0: 0xc0d5e9a  jal         func_357A68
    ctx->pc = 0x36D6E0u;
    SET_GPR_U32(ctx, 31, 0x36D6E8u);
    ctx->pc = 0x36D6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D6E0u;
    // 0x36d6e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x357A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357A68u, 0x36D6E0u, 0x36D6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D6E8u;
label_36d6e8:
    // 0x36d6e8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x36d6e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36d6ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36d6ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d6f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36d6f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36d6f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36d6f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36d6f8: 0x3e00008  jr          $ra
    ctx->pc = 0x36D6F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36D6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D6F8u;
        // 0x36d6fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36D6F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36D700u;
}
