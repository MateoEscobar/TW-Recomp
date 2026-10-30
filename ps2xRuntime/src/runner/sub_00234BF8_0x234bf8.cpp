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

// Function: sub_00234BF8
// Address: 0x234bf8 - 0x234cb0
void sub_00234BF8_0x234bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00234BF8_0x234bf8");
#endif

    switch (ctx->pc) {
        case 0x234c30u: goto label_234c30;
        case 0x234c38u: goto label_234c38;
        case 0x234c50u: goto label_234c50;
        case 0x234c60u: goto label_234c60;
        case 0x234c70u: goto label_234c70;
        case 0x234c80u: goto label_234c80;
        case 0x234c8cu: goto label_234c8c;
        default: break;
    }

    ctx->pc = 0x234bf8u;

    // 0x234bf8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x234bf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x234bfc: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x234bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x234c00: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x234c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x234c04: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x234c04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234c08: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x234c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x234c0c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x234c0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234c10: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x234c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x234c14: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x234c14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234c18: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x234c18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x234c1c: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x234c1cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234c20: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x234c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x234c24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x234c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x234c28: 0xc0e4060  jal         func_390180
    ctx->pc = 0x234C28u;
    SET_GPR_U32(ctx, 31, 0x234C30u);
    ctx->pc = 0x234C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234C28u;
    // 0x234c2c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x234C28u, 0x234C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234C30u;
label_234c30:
    // 0x234c30: 0xc08a61a  jal         func_229868
    ctx->pc = 0x234C30u;
    SET_GPR_U32(ctx, 31, 0x234C38u);
    ctx->pc = 0x234C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234C30u;
    // 0x234c34: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x234C30u, 0x234C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234C38u;
label_234c38:
    // 0x234c38: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x234c38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234c3c: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x234C3Cu;
    {
        const bool branch_taken_0x234c3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x234C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234C3Cu;
        // 0x234c40: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234c3c) {
            ctx->pc = 0x234C8Cu;
            goto label_234c8c;
        }
    }
    ctx->pc = 0x234C44u;
    // 0x234c44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x234c44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234c48: 0xc0886a8  jal         func_221AA0
    ctx->pc = 0x234C48u;
    SET_GPR_U32(ctx, 31, 0x234C50u);
    ctx->pc = 0x234C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234C48u;
    // 0x234c4c: 0x240502a0  addiu       $a1, $zero, 0x2A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221AA0u, 0x234C48u, 0x234C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234C50u;
label_234c50:
    // 0x234c50: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x234c50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234c54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x234c54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234c58: 0xc0886a8  jal         func_221AA0
    ctx->pc = 0x234C58u;
    SET_GPR_U32(ctx, 31, 0x234C60u);
    ctx->pc = 0x234C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234C58u;
    // 0x234c5c: 0x240502a1  addiu       $a1, $zero, 0x2A1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 673));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221AA0u, 0x234C58u, 0x234C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234C60u;
label_234c60:
    // 0x234c60: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x234c60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234c64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x234c64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234c68: 0xc0886a8  jal         func_221AA0
    ctx->pc = 0x234C68u;
    SET_GPR_U32(ctx, 31, 0x234C70u);
    ctx->pc = 0x234C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234C68u;
    // 0x234c6c: 0x2405029f  addiu       $a1, $zero, 0x29F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 671));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221AA0u, 0x234C68u, 0x234C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234C70u;
label_234c70:
    // 0x234c70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x234c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234c74: 0x240502a2  addiu       $a1, $zero, 0x2A2
    ctx->pc = 0x234c74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 674));
    // 0x234c78: 0xc0886a8  jal         func_221AA0
    ctx->pc = 0x234C78u;
    SET_GPR_U32(ctx, 31, 0x234C80u);
    ctx->pc = 0x234C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234C78u;
    // 0x234c7c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221AA0u, 0x234C78u, 0x234C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234C80u;
label_234c80:
    // 0x234c80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x234c80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234c84: 0xc0899aa  jal         func_2266A8
    ctx->pc = 0x234C84u;
    SET_GPR_U32(ctx, 31, 0x234C8Cu);
    ctx->pc = 0x234C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234C84u;
    // 0x234c88: 0x2405001d  addiu       $a1, $zero, 0x1D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266A8u, 0x234C84u, 0x234C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234C8Cu;
label_234c8c:
    // 0x234c8c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x234c8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x234c90: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x234c90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x234c94: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x234c94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x234c98: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x234c98u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x234c9c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x234c9cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x234ca0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x234ca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x234ca4: 0x3e00008  jr          $ra
    ctx->pc = 0x234CA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234CA4u;
        // 0x234ca8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234CA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x234CACu;
    // 0x234cac: 0x0  nop
    ctx->pc = 0x234cacu;
    // NOP
    ctx->pc = 0x234cb0u;
}
