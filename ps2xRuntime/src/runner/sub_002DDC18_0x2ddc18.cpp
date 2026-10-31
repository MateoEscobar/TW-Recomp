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

// Function: sub_002DDC18
// Address: 0x2ddc18 - 0x2ddca0
void sub_002DDC18_0x2ddc18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DDC18_0x2ddc18");
#endif

    switch (ctx->pc) {
        case 0x2ddc3cu: goto label_2ddc3c;
        case 0x2ddc44u: goto label_2ddc44;
        case 0x2ddc54u: goto label_2ddc54;
        case 0x2ddc68u: goto label_2ddc68;
        case 0x2ddc70u: goto label_2ddc70;
        case 0x2ddc78u: goto label_2ddc78;
        case 0x2ddc88u: goto label_2ddc88;
        default: break;
    }

    ctx->pc = 0x2ddc18u;

    // 0x2ddc18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ddc18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ddc1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ddc1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ddc20: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2ddc20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2ddc24: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ddc24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddc28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ddc28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ddc2c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2ddc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ddc30: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2ddc30u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ddc34: 0xc089bdc  jal         func_226F70
    ctx->pc = 0x2DDC34u;
    SET_GPR_U32(ctx, 31, 0x2DDC3Cu);
    ctx->pc = 0x2DDC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDC34u;
    // 0x2ddc38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226F70u, 0x2DDC34u, 0x2DDC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDC3Cu;
label_2ddc3c:
    // 0x2ddc3c: 0xc08c68e  jal         func_231A38
    ctx->pc = 0x2DDC3Cu;
    SET_GPR_U32(ctx, 31, 0x2DDC44u);
    ctx->pc = 0x2DDC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDC3Cu;
    // 0x2ddc40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A38u, 0x2DDC3Cu, 0x2DDC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDC44u;
label_2ddc44:
    // 0x2ddc44: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2DDC44u;
    {
        const bool branch_taken_0x2ddc44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ddc44) {
            ctx->pc = 0x2DDC68u;
            goto label_2ddc68;
        }
    }
    ctx->pc = 0x2DDC4Cu;
    // 0x2ddc4c: 0xc08c6a0  jal         func_231A80
    ctx->pc = 0x2DDC4Cu;
    SET_GPR_U32(ctx, 31, 0x2DDC54u);
    ctx->pc = 0x2DDC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDC4Cu;
    // 0x2ddc50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x2DDC4Cu, 0x2DDC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDC54u;
label_2ddc54:
    // 0x2ddc54: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ddc54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ddc58: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DDC58u;
    {
        const bool branch_taken_0x2ddc58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ddc58) {
            ctx->pc = 0x2DDC68u;
            goto label_2ddc68;
        }
    }
    ctx->pc = 0x2DDC60u;
    // 0x2ddc60: 0xc095fce  jal         func_257F38
    ctx->pc = 0x2DDC60u;
    SET_GPR_U32(ctx, 31, 0x2DDC68u);
    ctx->pc = 0x2DDC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDC60u;
    // 0x2ddc64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F38u, 0x2DDC60u, 0x2DDC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDC68u;
label_2ddc68:
    // 0x2ddc68: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2DDC68u;
    SET_GPR_U32(ctx, 31, 0x2DDC70u);
    ctx->pc = 0x2DDC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDC68u;
    // 0x2ddc6c: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2DDC68u, 0x2DDC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDC70u;
label_2ddc70:
    // 0x2ddc70: 0xc0e2612  jal         func_389848
    ctx->pc = 0x2DDC70u;
    SET_GPR_U32(ctx, 31, 0x2DDC78u);
    ctx->pc = 0x2DDC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDC70u;
    // 0x2ddc74: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389848u, 0x2DDC70u, 0x2DDC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDC78u;
label_2ddc78:
    // 0x2ddc78: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DDC78u;
    {
        const bool branch_taken_0x2ddc78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DDC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDC78u;
        // 0x2ddc7c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddc78) {
            ctx->pc = 0x2DDC8Cu;
            goto label_2ddc8c;
        }
    }
    ctx->pc = 0x2DDC80u;
    // 0x2ddc80: 0xc0e35f6  jal         func_38D7D8
    ctx->pc = 0x2DDC80u;
    SET_GPR_U32(ctx, 31, 0x2DDC88u);
    ctx->pc = 0x2DDC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDC80u;
    // 0x2ddc84: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D7D8u, 0x2DDC80u, 0x2DDC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDC88u;
label_2ddc88:
    // 0x2ddc88: 0xa2220018  sb          $v0, 0x18($s1)
    ctx->pc = 0x2ddc88u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 24), (uint8_t)GPR_U32(ctx, 2));
label_2ddc8c:
    // 0x2ddc8c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2ddc8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ddc90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ddc90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ddc94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ddc94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ddc98: 0x3e00008  jr          $ra
    ctx->pc = 0x2DDC98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DDC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDC98u;
        // 0x2ddc9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DDC98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DDCA0u;
}
