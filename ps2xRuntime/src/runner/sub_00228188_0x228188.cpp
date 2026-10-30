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

// Function: sub_00228188
// Address: 0x228188 - 0x2281d8
void sub_00228188_0x228188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228188_0x228188");
#endif

    switch (ctx->pc) {
        case 0x2281a8u: goto label_2281a8;
        case 0x2281b8u: goto label_2281b8;
        default: break;
    }

    ctx->pc = 0x228188u;

    // 0x228188: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x228188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22818c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x22818cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x228190: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x228190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x228194: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x228194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x228198: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x228198u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22819c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22819cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2281a0: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x2281A0u;
    SET_GPR_U32(ctx, 31, 0x2281A8u);
    ctx->pc = 0x2281A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2281A0u;
    // 0x2281a4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x2281A0u, 0x2281A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2281A8u;
label_2281a8:
    // 0x2281a8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2281A8u;
    {
        const bool branch_taken_0x2281a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2281ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2281A8u;
        // 0x2281ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2281a8) {
            ctx->pc = 0x2281BCu;
            goto label_2281bc;
        }
    }
    ctx->pc = 0x2281B0u;
    // 0x2281b0: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x2281B0u;
    SET_GPR_U32(ctx, 31, 0x2281B8u);
    ctx->pc = 0x2281B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2281B0u;
    // 0x2281b4: 0x3c050020  lui         $a1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x2281B0u, 0x2281B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2281B8u;
label_2281b8:
    // 0x2281b8: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x2281b8u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2281bc:
    // 0x2281bc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2281bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2281c0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2281c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2281c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2281c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2281c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2281c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2281cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2281CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2281D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2281CCu;
        // 0x2281d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2281CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2281D4u;
    // 0x2281d4: 0x0  nop
    ctx->pc = 0x2281d4u;
    // NOP
    ctx->pc = 0x2281d8u;
}
