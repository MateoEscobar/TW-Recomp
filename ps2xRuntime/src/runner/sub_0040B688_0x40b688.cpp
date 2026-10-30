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

// Function: sub_0040B688
// Address: 0x40b688 - 0x40b6e0
void sub_0040B688_0x40b688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040B688_0x40b688");
#endif

    switch (ctx->pc) {
        case 0x40b6a4u: goto label_40b6a4;
        case 0x40b6b0u: goto label_40b6b0;
        case 0x40b6bcu: goto label_40b6bc;
        case 0x40b6c8u: goto label_40b6c8;
        default: break;
    }

    ctx->pc = 0x40b688u;

    // 0x40b688: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x40b688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x40b68c: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x40b68cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x40b690: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x40b690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x40b694: 0x24a582e0  addiu       $a1, $a1, -0x7D20
    ctx->pc = 0x40b694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935264));
    // 0x40b698: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x40b698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x40b69c: 0xc0c8e68  jal         func_3239A0
    ctx->pc = 0x40B69Cu;
    SET_GPR_U32(ctx, 31, 0x40B6A4u);
    ctx->pc = 0x40B6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B69Cu;
    // 0x40b6a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3239A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3239A0u, 0x40B69Cu, 0x40B6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B6A4u;
label_40b6a4:
    // 0x40b6a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40b6a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b6a8: 0xc0c8ed4  jal         func_323B50
    ctx->pc = 0x40B6A8u;
    SET_GPR_U32(ctx, 31, 0x40B6B0u);
    ctx->pc = 0x40B6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B6A8u;
    // 0x40b6ac: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323B50u, 0x40B6A8u, 0x40B6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B6B0u;
label_40b6b0:
    // 0x40b6b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40b6b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b6b4: 0xc0c8d16  jal         func_323458
    ctx->pc = 0x40B6B4u;
    SET_GPR_U32(ctx, 31, 0x40B6BCu);
    ctx->pc = 0x40B6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B6B4u;
    // 0x40b6b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323458u, 0x40B6B4u, 0x40B6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B6BCu;
label_40b6bc:
    // 0x40b6bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40b6bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b6c0: 0xc0c8ed4  jal         func_323B50
    ctx->pc = 0x40B6C0u;
    SET_GPR_U32(ctx, 31, 0x40B6C8u);
    ctx->pc = 0x40B6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B6C0u;
    // 0x40b6c4: 0x2405fffe  addiu       $a1, $zero, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323B50u, 0x40B6C0u, 0x40B6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B6C8u;
label_40b6c8:
    // 0x40b6c8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x40b6c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x40b6cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x40b6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x40b6d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x40b6d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x40b6d4: 0x3e00008  jr          $ra
    ctx->pc = 0x40B6D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40B6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B6D4u;
        // 0x40b6d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40B6D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40B6DCu;
    // 0x40b6dc: 0x0  nop
    ctx->pc = 0x40b6dcu;
    // NOP
    ctx->pc = 0x40b6e0u;
}
