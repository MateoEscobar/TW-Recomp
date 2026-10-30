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

// Function: sub_003A21C0
// Address: 0x3a21c0 - 0x3a2230
void sub_003A21C0_0x3a21c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A21C0_0x3a21c0");
#endif

    switch (ctx->pc) {
        case 0x3a2200u: goto label_3a2200;
        case 0x3a2210u: goto label_3a2210;
        case 0x3a2218u: goto label_3a2218;
        default: break;
    }

    ctx->pc = 0x3a21c0u;

    // 0x3a21c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3a21c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3a21c4: 0x3c02fbff  lui         $v0, 0xFBFF
    ctx->pc = 0x3a21c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64511 << 16));
    // 0x3a21c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3a21c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3a21cc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3a21ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3a21d0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3a21d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3a21d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3a21d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a21d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a21d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a21dc: 0x3c040200  lui         $a0, 0x200
    ctx->pc = 0x3a21dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)512 << 16));
    // 0x3a21e0: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x3a21e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x3a21e4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3a21e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3a21e8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3a21e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3a21ec: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x3A21ECu;
    {
        const bool branch_taken_0x3a21ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A21F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A21ECu;
        // 0x3a21f0: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a21ec) {
            ctx->pc = 0x3A2218u;
            goto label_3a2218;
        }
    }
    ctx->pc = 0x3A21F4u;
    // 0x3a21f4: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x3a21f4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x3a21f8: 0xc0e8b48  jal         func_3A2D20
    ctx->pc = 0x3A21F8u;
    SET_GPR_U32(ctx, 31, 0x3A2200u);
    ctx->pc = 0x3A21FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A21F8u;
    // 0x3a21fc: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x3A21F8u, 0x3A2200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2200u;
label_3a2200:
    // 0x3a2200: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3a2200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3a2204: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3a2204u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2208: 0xc0e8b80  jal         func_3A2E00
    ctx->pc = 0x3A2208u;
    SET_GPR_U32(ctx, 31, 0x3A2210u);
    ctx->pc = 0x3A220Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2208u;
    // 0x3a220c: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x3A2208u, 0x3A2210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2210u;
label_3a2210:
    // 0x3a2210: 0xc0e8b50  jal         func_3A2D40
    ctx->pc = 0x3A2210u;
    SET_GPR_U32(ctx, 31, 0x3A2218u);
    ctx->pc = 0x3A2214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2210u;
    // 0x3a2214: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x3A2210u, 0x3A2218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2218u;
label_3a2218:
    // 0x3a2218: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3a2218u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a221c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3a221cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a2220: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a2220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a2224: 0x3e00008  jr          $ra
    ctx->pc = 0x3A2224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A2228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2224u;
        // 0x3a2228: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A2224u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A222Cu;
    // 0x3a222c: 0x0  nop
    ctx->pc = 0x3a222cu;
    // NOP
    ctx->pc = 0x3a2230u;
}
