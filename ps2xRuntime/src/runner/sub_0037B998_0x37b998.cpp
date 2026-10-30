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

// Function: sub_0037B998
// Address: 0x37b998 - 0x37b9e8
void sub_0037B998_0x37b998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037B998_0x37b998");
#endif

    switch (ctx->pc) {
        case 0x37b9b4u: goto label_37b9b4;
        case 0x37b9bcu: goto label_37b9bc;
        case 0x37b9c4u: goto label_37b9c4;
        case 0x37b9d0u: goto label_37b9d0;
        default: break;
    }

    ctx->pc = 0x37b998u;

    // 0x37b998: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x37b998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x37b99c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x37b99cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b9a0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x37b9a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x37b9a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37b9a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37b9a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37b9a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37b9ac: 0xc102488  jal         func_409220
    ctx->pc = 0x37B9ACu;
    SET_GPR_U32(ctx, 31, 0x37B9B4u);
    ctx->pc = 0x37B9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B9ACu;
    // 0x37b9b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x37B9ACu, 0x37B9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B9B4u;
label_37b9b4:
    // 0x37b9b4: 0xc106148  jal         func_418520
    ctx->pc = 0x37B9B4u;
    SET_GPR_U32(ctx, 31, 0x37B9BCu);
    ctx->pc = 0x37B9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B9B4u;
    // 0x37b9b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x418520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418520u, 0x37B9B4u, 0x37B9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B9BCu;
label_37b9bc:
    // 0x37b9bc: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x37B9BCu;
    SET_GPR_U32(ctx, 31, 0x37B9C4u);
    ctx->pc = 0x37B9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B9BCu;
    // 0x37b9c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x37B9BCu, 0x37B9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B9C4u;
label_37b9c4:
    // 0x37b9c4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x37b9c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b9c8: 0xc10253a  jal         func_4094E8
    ctx->pc = 0x37B9C8u;
    SET_GPR_U32(ctx, 31, 0x37B9D0u);
    ctx->pc = 0x37B9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B9C8u;
    // 0x37b9cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4094E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4094E8u, 0x37B9C8u, 0x37B9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B9D0u;
label_37b9d0:
    // 0x37b9d0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x37b9d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37b9d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37b9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37b9d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37b9d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37b9dc: 0x3e00008  jr          $ra
    ctx->pc = 0x37B9DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37B9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B9DCu;
        // 0x37b9e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37B9DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37B9E4u;
    // 0x37b9e4: 0x0  nop
    ctx->pc = 0x37b9e4u;
    // NOP
    ctx->pc = 0x37b9e8u;
}
