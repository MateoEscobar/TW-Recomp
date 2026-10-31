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

// Function: sub_0029BE58
// Address: 0x29be58 - 0x29bec8
void sub_0029BE58_0x29be58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029BE58_0x29be58");
#endif

    switch (ctx->pc) {
        case 0x29be80u: goto label_29be80;
        case 0x29be90u: goto label_29be90;
        case 0x29bea4u: goto label_29bea4;
        default: break;
    }

    ctx->pc = 0x29be58u;

    // 0x29be58: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x29be58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x29be5c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x29be5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x29be60: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x29be60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x29be64: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x29be64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29be68: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x29be68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x29be6c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29be6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29be70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29be70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29be74: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x29be74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29be78: 0xc089fac  jal         func_227EB0
    ctx->pc = 0x29BE78u;
    SET_GPR_U32(ctx, 31, 0x29BE80u);
    ctx->pc = 0x29BE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BE78u;
    // 0x29be7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227EB0u, 0x29BE78u, 0x29BE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BE80u;
label_29be80:
    // 0x29be80: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x29BE80u;
    {
        const bool branch_taken_0x29be80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29BE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BE80u;
        // 0x29be84: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29be80) {
            ctx->pc = 0x29BEB0u;
            goto label_29beb0;
        }
    }
    ctx->pc = 0x29BE88u;
    // 0x29be88: 0xc089f76  jal         func_227DD8
    ctx->pc = 0x29BE88u;
    SET_GPR_U32(ctx, 31, 0x29BE90u);
    ctx->pc = 0x29BE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BE88u;
    // 0x29be8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x29BE88u, 0x29BE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BE90u;
label_29be90:
    // 0x29be90: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x29BE90u;
    {
        const bool branch_taken_0x29be90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29BE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BE90u;
        // 0x29be94: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29be90) {
            ctx->pc = 0x29BEB0u;
            goto label_29beb0;
        }
    }
    ctx->pc = 0x29BE98u;
    // 0x29be98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29be98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29be9c: 0xc088a92  jal         func_222A48
    ctx->pc = 0x29BE9Cu;
    SET_GPR_U32(ctx, 31, 0x29BEA4u);
    ctx->pc = 0x29BEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BE9Cu;
    // 0x29bea0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222A48u, 0x29BE9Cu, 0x29BEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BEA4u;
label_29bea4:
    // 0x29bea4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x29bea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x29bea8: 0x2c520001  sltiu       $s2, $v0, 0x1
    ctx->pc = 0x29bea8u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x29beac: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x29beacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_29beb0:
    // 0x29beb0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x29beb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29beb4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x29beb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29beb8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x29beb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29bebc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29bebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29bec0: 0x3e00008  jr          $ra
    ctx->pc = 0x29BEC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29BEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BEC0u;
        // 0x29bec4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29BEC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29BEC8u;
}
