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

// Function: sub_0014B2A8
// Address: 0x14b2a8 - 0x14b310
void sub_0014B2A8_0x14b2a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014B2A8_0x14b2a8");
#endif

    switch (ctx->pc) {
        case 0x14b2c8u: goto label_14b2c8;
        case 0x14b2f0u: goto label_14b2f0;
        case 0x14b2fcu: goto label_14b2fc;
        default: break;
    }

    ctx->pc = 0x14b2a8u;

    // 0x14b2a8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x14b2a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x14b2ac: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x14b2acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b2b0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x14b2b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x14b2b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14b2b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b2b8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x14b2b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x14b2bc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x14b2bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14b2c0: 0xc052c56  jal         func_14B158
    ctx->pc = 0x14B2C0u;
    SET_GPR_U32(ctx, 31, 0x14B2C8u);
    ctx->pc = 0x14B2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B2C0u;
    // 0x14b2c4: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B158u, 0x14B2C0u, 0x14B2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B2C8u;
label_14b2c8:
    // 0x14b2c8: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x14B2C8u;
    {
        const bool branch_taken_0x14b2c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14B2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B2C8u;
        // 0x14b2cc: 0x97a20014  lhu         $v0, 0x14($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b2c8) {
            ctx->pc = 0x14B300u;
            goto label_14b300;
        }
    }
    ctx->pc = 0x14B2D0u;
    // 0x14b2d0: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x14b2d0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x14b2d4: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x14b2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
    // 0x14b2d8: 0x8e0269ec  lw          $v0, 0x69EC($s0)
    ctx->pc = 0x14b2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5169ECu));
    // 0x14b2dc: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x14b2dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
    // 0x14b2e0: 0x24a5a870  addiu       $a1, $a1, -0x5790
    ctx->pc = 0x14b2e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944880));
    // 0x14b2e4: 0x24c6b4b0  addiu       $a2, $a2, -0x4B50
    ctx->pc = 0x14b2e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948016));
    // 0x14b2e8: 0xc10c6b0  jal         func_431AC0
    ctx->pc = 0x14B2E8u;
    SET_GPR_U32(ctx, 31, 0x14B2F0u);
    ctx->pc = 0x14B2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B2E8u;
    // 0x14b2ec: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431AC0u, 0x14B2E8u, 0x14B2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B2F0u;
label_14b2f0:
    // 0x14b2f0: 0x8e0369ec  lw          $v1, 0x69EC($s0)
    ctx->pc = 0x14b2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 27116)));
    // 0x14b2f4: 0xc10c57e  jal         func_4315F8
    ctx->pc = 0x14B2F4u;
    SET_GPR_U32(ctx, 31, 0x14B2FCu);
    ctx->pc = 0x14B2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B2F4u;
    // 0x14b2f8: 0x8c64000c  lw          $a0, 0xC($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4315F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4315F8u, 0x14B2F4u, 0x14B2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B2FCu;
label_14b2fc:
    // 0x14b2fc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x14b2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_14b300:
    // 0x14b300: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x14b300u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14b304: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x14b304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14b308: 0x3e00008  jr          $ra
    ctx->pc = 0x14B308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B308u;
        // 0x14b30c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B308u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14B310u;
}
