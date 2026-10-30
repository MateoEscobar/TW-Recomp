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

// Function: sub_00356990
// Address: 0x356990 - 0x3569d8
void sub_00356990_0x356990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00356990_0x356990");
#endif

    switch (ctx->pc) {
        case 0x3569acu: goto label_3569ac;
        case 0x3569b4u: goto label_3569b4;
        default: break;
    }

    ctx->pc = 0x356990u;

    // 0x356990: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x356990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x356994: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x356994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356998: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x356998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x35699c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35699cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3569a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3569a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3569a4: 0xc0c9056  jal         func_324158
    ctx->pc = 0x3569A4u;
    SET_GPR_U32(ctx, 31, 0x3569ACu);
    ctx->pc = 0x3569A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3569A4u;
    // 0x3569a8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324158u, 0x3569A4u, 0x3569ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3569ACu;
label_3569ac:
    // 0x3569ac: 0xc0d5ee8  jal         func_357BA0
    ctx->pc = 0x3569ACu;
    SET_GPR_U32(ctx, 31, 0x3569B4u);
    ctx->pc = 0x3569B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3569ACu;
    // 0x3569b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x357BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357BA0u, 0x3569ACu, 0x3569B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3569B4u;
label_3569b4:
    // 0x3569b4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3569b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x3569b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3569b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3569bc: 0x8c64b734  lw          $a0, -0x48CC($v1)
    ctx->pc = 0x3569bcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50B734u));
    // 0x3569c0: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x3569c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x3569c4: 0x244207d0  addiu       $v0, $v0, 0x7D0
    ctx->pc = 0x3569c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2000));
    // 0x3569c8: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x3569c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x3569cc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3569ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3569d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3569D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3569D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3569D0u;
        // 0x3569d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3569D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3569D8u;
}
