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

// Function: sub_002EEE50
// Address: 0x2eee50 - 0x2eeee0
void sub_002EEE50_0x2eee50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EEE50_0x2eee50");
#endif

    switch (ctx->pc) {
        case 0x2eee7cu: goto label_2eee7c;
        case 0x2eee84u: goto label_2eee84;
        case 0x2eee94u: goto label_2eee94;
        case 0x2eee9cu: goto label_2eee9c;
        case 0x2eeeb8u: goto label_2eeeb8;
        case 0x2eeec4u: goto label_2eeec4;
        default: break;
    }

    ctx->pc = 0x2eee50u;

    // 0x2eee50: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2eee50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2eee54: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2eee54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2eee58: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2eee58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2eee5c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2eee5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eee60: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2eee60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x2eee64: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2eee64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eee68: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2eee68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2eee6c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2eee6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2eee70: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2eee70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2eee74: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2EEE74u;
    SET_GPR_U32(ctx, 31, 0x2EEE7Cu);
    ctx->pc = 0x2EEE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEE74u;
    // 0x2eee78: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2EEE74u, 0x2EEE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEE7Cu;
label_2eee7c:
    // 0x2eee7c: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2EEE7Cu;
    SET_GPR_U32(ctx, 31, 0x2EEE84u);
    ctx->pc = 0x2EEE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEE7Cu;
    // 0x2eee80: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2EEE7Cu, 0x2EEE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEE84u;
label_2eee84:
    // 0x2eee84: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2EEE84u;
    {
        const bool branch_taken_0x2eee84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEE84u;
        // 0x2eee88: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eee84) {
            ctx->pc = 0x2EEEC8u;
            goto label_2eeec8;
        }
    }
    ctx->pc = 0x2EEE8Cu;
    // 0x2eee8c: 0xc087502  jal         func_21D408
    ctx->pc = 0x2EEE8Cu;
    SET_GPR_U32(ctx, 31, 0x2EEE94u);
    ctx->pc = 0x2EEE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEE8Cu;
    // 0x2eee90: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2EEE8Cu, 0x2EEE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEE94u;
label_2eee94:
    // 0x2eee94: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2EEE94u;
    SET_GPR_U32(ctx, 31, 0x2EEE9Cu);
    ctx->pc = 0x2EEE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEE94u;
    // 0x2eee98: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2EEE94u, 0x2EEE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEE9Cu;
label_2eee9c:
    // 0x2eee9c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2eee9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eeea0: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EEEA0u;
    {
        const bool branch_taken_0x2eeea0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEEA0u;
        // 0x2eeea4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eeea0) {
            ctx->pc = 0x2EEEB8u;
            goto label_2eeeb8;
        }
    }
    ctx->pc = 0x2EEEA8u;
    // 0x2eeea8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2eeea8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eeeac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2eeeacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eeeb0: 0xc0bbbb8  jal         func_2EEEE0
    ctx->pc = 0x2EEEB0u;
    SET_GPR_U32(ctx, 31, 0x2EEEB8u);
    ctx->pc = 0x2EEEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEEB0u;
    // 0x2eeeb4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EEEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EEEE0u, 0x2EEEB0u, 0x2EEEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEEB8u;
label_2eeeb8:
    // 0x2eeeb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2eeeb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eeebc: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x2EEEBCu;
    SET_GPR_U32(ctx, 31, 0x2EEEC4u);
    ctx->pc = 0x2EEEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEEBCu;
    // 0x2eeec0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2EEEBCu, 0x2EEEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEEC4u;
label_2eeec4:
    // 0x2eeec4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2eeec4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2eeec8:
    // 0x2eeec8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2eeec8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2eeecc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2eeeccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2eeed0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2eeed0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2eeed4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2eeed4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2eeed8: 0x3e00008  jr          $ra
    ctx->pc = 0x2EEED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EEEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEED8u;
        // 0x2eeedc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EEED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EEEE0u;
}
