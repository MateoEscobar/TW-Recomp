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

// Function: sub_00339A90
// Address: 0x339a90 - 0x339ac8
void sub_00339A90_0x339a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00339A90_0x339a90");
#endif

    switch (ctx->pc) {
        case 0x339a90u: goto label_339a90;
        case 0x339a94u: goto label_339a94;
        case 0x339a98u: goto label_339a98;
        case 0x339a9cu: goto label_339a9c;
        case 0x339aa0u: goto label_339aa0;
        case 0x339aa4u: goto label_339aa4;
        case 0x339aa8u: goto label_339aa8;
        case 0x339aacu: goto label_339aac;
        case 0x339ab0u: goto label_339ab0;
        case 0x339ab4u: goto label_339ab4;
        case 0x339ab8u: goto label_339ab8;
        case 0x339abcu: goto label_339abc;
        case 0x339ac0u: goto label_339ac0;
        case 0x339ac4u: goto label_339ac4;
        default: break;
    }

    ctx->pc = 0x339a90u;

label_339a90:
    // 0x339a90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x339a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_339a94:
    // 0x339a94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x339a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_339a98:
    // 0x339a98: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x339a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_339a9c:
    // 0x339a9c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x339a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_339aa0:
    // 0x339aa0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x339aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_339aa4:
    // 0x339aa4: 0x8c8c0020  lw          $t4, 0x20($a0)
    ctx->pc = 0x339aa4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_339aa8:
    // 0x339aa8: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x339aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_339aac:
    // 0x339aac: 0x84640060  lh          $a0, 0x60($v1)
    ctx->pc = 0x339aacu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
label_339ab0:
    // 0x339ab0: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x339ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_339ab4:
    // 0x339ab4: 0x40f809  jalr        $v0
label_339ab8:
    if (ctx->pc == 0x339AB8u) {
        ctx->pc = 0x339AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339AB4u;
        // 0x339ab8: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339ABCu;
        goto label_339abc;
    }
    ctx->pc = 0x339AB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x339ABCu);
        ctx->pc = 0x339AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339AB4u;
        // 0x339ab8: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339AB4u, 0x339ABCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x339ABCu;
label_339abc:
    // 0x339abc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x339abcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_339ac0:
    // 0x339ac0: 0x3e00008  jr          $ra
label_339ac4:
    if (ctx->pc == 0x339AC4u) {
        ctx->pc = 0x339AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339AC0u;
        // 0x339ac4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339AC8u;
        goto label_fallthrough_0x339ac0;
    }
    ctx->pc = 0x339AC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x339AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339AC0u;
        // 0x339ac4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339AC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x339ac0:
    ctx->pc = 0x339AC8u;
}
