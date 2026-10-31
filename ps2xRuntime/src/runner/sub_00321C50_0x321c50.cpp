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

// Function: sub_00321C50
// Address: 0x321c50 - 0x321cd8
void sub_00321C50_0x321c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321C50_0x321c50");
#endif

    switch (ctx->pc) {
        case 0x321c68u: goto label_321c68;
        case 0x321c78u: goto label_321c78;
        case 0x321c88u: goto label_321c88;
        case 0x321ca8u: goto label_321ca8;
        case 0x321cb0u: goto label_321cb0;
        default: break;
    }

    ctx->pc = 0x321c50u;

    // 0x321c50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x321c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x321c54: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x321c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x321c58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x321c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x321c5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x321c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x321c60: 0xc05959e  jal         func_165678
    ctx->pc = 0x321C60u;
    SET_GPR_U32(ctx, 31, 0x321C68u);
    ctx->pc = 0x321C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321C60u;
    // 0x321c64: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x321C60u, 0x321C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321C68u;
label_321c68:
    // 0x321c68: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x321C68u;
    {
        const bool branch_taken_0x321c68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x321C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321C68u;
        // 0x321c6c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321c68) {
            ctx->pc = 0x321CC4u;
            goto label_321cc4;
        }
    }
    ctx->pc = 0x321C70u;
    // 0x321c70: 0xc087502  jal         func_21D408
    ctx->pc = 0x321C70u;
    SET_GPR_U32(ctx, 31, 0x321C78u);
    ctx->pc = 0x321C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321C70u;
    // 0x321c74: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x321C70u, 0x321C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321C78u;
label_321c78:
    // 0x321c78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x321c78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321c7c: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x321c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x321c80: 0xc0a3658  jal         func_28D960
    ctx->pc = 0x321C80u;
    SET_GPR_U32(ctx, 31, 0x321C88u);
    ctx->pc = 0x321C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321C80u;
    // 0x321c84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x321C80u, 0x321C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321C88u;
label_321c88:
    // 0x321c88: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x321c88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321c8c: 0x622000d  bltzl       $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x321C8Cu;
    {
        const bool branch_taken_0x321c8c = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x321c8c) {
            ctx->pc = 0x321C90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x321C8Cu;
            // 0x321c90: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x321CC4u;
            goto label_321cc4;
        }
    }
    ctx->pc = 0x321C94u;
    // 0x321c94: 0x8202002c  lb          $v0, 0x2C($s0)
    ctx->pc = 0x321c94u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x321c98: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x321c98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x321c9c: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x321C9Cu;
    {
        const bool branch_taken_0x321c9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x321c9c) {
            ctx->pc = 0x321CA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x321C9Cu;
            // 0x321ca0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x321CC4u;
            goto label_321cc4;
        }
    }
    ctx->pc = 0x321CA4u;
    // 0x321ca4: 0x0  nop
    ctx->pc = 0x321ca4u;
    // NOP
label_321ca8:
    // 0x321ca8: 0xc0a35f6  jal         func_28D7D8
    ctx->pc = 0x321CA8u;
    SET_GPR_U32(ctx, 31, 0x321CB0u);
    ctx->pc = 0x321CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321CA8u;
    // 0x321cac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D7D8u, 0x321CA8u, 0x321CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321CB0u;
label_321cb0:
    // 0x321cb0: 0x8203002c  lb          $v1, 0x2C($s0)
    ctx->pc = 0x321cb0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x321cb4: 0x71182a  slt         $v1, $v1, $s1
    ctx->pc = 0x321cb4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x321cb8: 0x1060fffb  beqz        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x321CB8u;
    {
        const bool branch_taken_0x321cb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x321cb8) {
            ctx->pc = 0x321CA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_321ca8;
        }
    }
    ctx->pc = 0x321CC0u;
    // 0x321cc0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x321cc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_321cc4:
    // 0x321cc4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x321cc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x321cc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x321cc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x321ccc: 0x3e00008  jr          $ra
    ctx->pc = 0x321CCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x321CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321CCCu;
        // 0x321cd0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321CCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321CD4u;
    // 0x321cd4: 0x0  nop
    ctx->pc = 0x321cd4u;
    // NOP
    ctx->pc = 0x321cd8u;
}
