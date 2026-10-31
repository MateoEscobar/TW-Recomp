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

// Function: sub_002920E0
// Address: 0x2920e0 - 0x292130
void sub_002920E0_0x2920e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002920E0_0x2920e0");
#endif

    switch (ctx->pc) {
        case 0x292118u: goto label_292118;
        default: break;
    }

    ctx->pc = 0x2920e0u;

    // 0x2920e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2920e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2920e4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2920e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2920e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2920e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2920ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2920ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2920f0: 0x8e0502cc  lw          $a1, 0x2CC($s0)
    ctx->pc = 0x2920f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 716)));
    // 0x2920f4: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2920F4u;
    {
        const bool branch_taken_0x2920f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2920F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2920F4u;
        // 0x2920f8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2920f4) {
            ctx->pc = 0x29211Cu;
            goto label_29211c;
        }
    }
    ctx->pc = 0x2920FCu;
    // 0x2920fc: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x2920fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
    // 0x292100: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x292100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x292104: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x292104u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x292108: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x292108u;
    {
        const bool branch_taken_0x292108 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29210Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292108u;
        // 0x29210c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292108) {
            ctx->pc = 0x29211Cu;
            goto label_29211c;
        }
    }
    ctx->pc = 0x292110u;
    // 0x292110: 0xc0a482e  jal         func_2920B8
    ctx->pc = 0x292110u;
    SET_GPR_U32(ctx, 31, 0x292118u);
    ctx->pc = 0x292114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292110u;
    // 0x292114: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2920B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2920B8u, 0x292110u, 0x292118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292118u;
label_292118:
    // 0x292118: 0xa20002d0  sb          $zero, 0x2D0($s0)
    ctx->pc = 0x292118u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 720), (uint8_t)GPR_U32(ctx, 0));
label_29211c:
    // 0x29211c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x29211cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x292120: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x292120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x292124: 0x3e00008  jr          $ra
    ctx->pc = 0x292124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x292128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292124u;
        // 0x292128: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x292124u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29212Cu;
    // 0x29212c: 0x0  nop
    ctx->pc = 0x29212cu;
    // NOP
    ctx->pc = 0x292130u;
}
