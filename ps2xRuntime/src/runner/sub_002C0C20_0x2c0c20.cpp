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

// Function: sub_002C0C20
// Address: 0x2c0c20 - 0x2c0ca8
void sub_002C0C20_0x2c0c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C0C20_0x2c0c20");
#endif

    switch (ctx->pc) {
        case 0x2c0c54u: goto label_2c0c54;
        case 0x2c0c5cu: goto label_2c0c5c;
        case 0x2c0c64u: goto label_2c0c64;
        case 0x2c0c80u: goto label_2c0c80;
        case 0x2c0c8cu: goto label_2c0c8c;
        default: break;
    }

    ctx->pc = 0x2c0c20u;

    // 0x2c0c20: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2c0c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2c0c24: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x2c0c24u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x2c0c28: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2c0c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2c0c2c: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x2c0c2cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x2c0c30: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2c0c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x2c0c34: 0x59403  sra         $s2, $a1, 16
    ctx->pc = 0x2c0c34u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 5), 16));
    // 0x2c0c38: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2c0c38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2c0c3c: 0x69c03  sra         $s3, $a2, 16
    ctx->pc = 0x2c0c3cu;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 6), 16));
    // 0x2c0c40: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2c0c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2c0c44: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2c0c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2c0c48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c0c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c0c4c: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2C0C4Cu;
    SET_GPR_U32(ctx, 31, 0x2C0C54u);
    ctx->pc = 0x2C0C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0C4Cu;
    // 0x2c0c50: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2C0C4Cu, 0x2C0C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0C54u;
label_2c0c54:
    // 0x2c0c54: 0xc087502  jal         func_21D408
    ctx->pc = 0x2C0C54u;
    SET_GPR_U32(ctx, 31, 0x2C0C5Cu);
    ctx->pc = 0x2C0C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0C54u;
    // 0x2c0c58: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2C0C54u, 0x2C0C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0C5Cu;
label_2c0c5c:
    // 0x2c0c5c: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2C0C5Cu;
    SET_GPR_U32(ctx, 31, 0x2C0C64u);
    ctx->pc = 0x2C0C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0C5Cu;
    // 0x2c0c60: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2C0C5Cu, 0x2C0C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0C64u;
label_2c0c64:
    // 0x2c0c64: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c0c64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0c68: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C0C68u;
    {
        const bool branch_taken_0x2c0c68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0C68u;
        // 0x2c0c6c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0c68) {
            ctx->pc = 0x2C0C80u;
            goto label_2c0c80;
        }
    }
    ctx->pc = 0x2C0C70u;
    // 0x2c0c70: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2c0c70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0c74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c0c74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0c78: 0xc0b032a  jal         func_2C0CA8
    ctx->pc = 0x2C0C78u;
    SET_GPR_U32(ctx, 31, 0x2C0C80u);
    ctx->pc = 0x2C0C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0C78u;
    // 0x2c0c7c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0CA8u, 0x2C0C78u, 0x2C0C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0C80u;
label_2c0c80:
    // 0x2c0c80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c0c80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0c84: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x2C0C84u;
    SET_GPR_U32(ctx, 31, 0x2C0C8Cu);
    ctx->pc = 0x2C0C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0C84u;
    // 0x2c0c88: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2C0C84u, 0x2C0C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0C8Cu;
label_2c0c8c:
    // 0x2c0c8c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2c0c8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c0c90: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2c0c90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c0c94: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2c0c94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c0c98: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2c0c98u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c0c9c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c0c9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c0ca0: 0x3e00008  jr          $ra
    ctx->pc = 0x2C0CA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0CA0u;
        // 0x2c0ca4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C0CA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C0CA8u;
}
