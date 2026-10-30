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

// Function: sub_00238BD8
// Address: 0x238bd8 - 0x238cd8
void sub_00238BD8_0x238bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00238BD8_0x238bd8");
#endif

    switch (ctx->pc) {
        case 0x238c20u: goto label_238c20;
        case 0x238c28u: goto label_238c28;
        case 0x238c3cu: goto label_238c3c;
        case 0x238c54u: goto label_238c54;
        case 0x238c64u: goto label_238c64;
        case 0x238c74u: goto label_238c74;
        case 0x238c84u: goto label_238c84;
        case 0x238c94u: goto label_238c94;
        case 0x238ca0u: goto label_238ca0;
        case 0x238cacu: goto label_238cac;
        default: break;
    }

    ctx->pc = 0x238bd8u;

    // 0x238bd8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x238bd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x238bdc: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x238bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x238be0: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x238be0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x238be4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x238be4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238be8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x238be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x238bec: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x238becu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238bf0: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x238bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x238bf4: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x238bf4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238bf8: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x238bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x238bfc: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x238bfcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238c00: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x238c00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x238c04: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x238c04u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238c08: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x238c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x238c0c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x238c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238c10: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x238c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x238c14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x238c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x238c18: 0xc0e4060  jal         func_390180
    ctx->pc = 0x238C18u;
    SET_GPR_U32(ctx, 31, 0x238C20u);
    ctx->pc = 0x238C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238C18u;
    // 0x238c1c: 0xafa50004  sw          $a1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x238C18u, 0x238C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238C20u;
label_238c20:
    // 0x238c20: 0xc08a61a  jal         func_229868
    ctx->pc = 0x238C20u;
    SET_GPR_U32(ctx, 31, 0x238C28u);
    ctx->pc = 0x238C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238C20u;
    // 0x238c24: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x238C20u, 0x238C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238C28u;
label_238c28:
    // 0x238c28: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x238c28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238c2c: 0x52000020  beql        $s0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x238C2Cu;
    {
        const bool branch_taken_0x238c2c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x238c2c) {
            ctx->pc = 0x238C30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238C2Cu;
            // 0x238c30: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238CB0u;
            goto label_238cb0;
        }
    }
    ctx->pc = 0x238C34u;
    // 0x238c34: 0xc0e4060  jal         func_390180
    ctx->pc = 0x238C34u;
    SET_GPR_U32(ctx, 31, 0x238C3Cu);
    ctx->pc = 0x238C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238C34u;
    // 0x238c38: 0x37a40004  ori         $a0, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x238C34u, 0x238C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238C3Cu;
label_238c3c:
    // 0x238c3c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x238c3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238c40: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
    ctx->pc = 0x238C40u;
    {
        const bool branch_taken_0x238c40 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x238C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238C40u;
        // 0x238c44: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238c40) {
            ctx->pc = 0x238CACu;
            goto label_238cac;
        }
    }
    ctx->pc = 0x238C48u;
    // 0x238c48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x238c48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238c4c: 0xc0886a8  jal         func_221AA0
    ctx->pc = 0x238C4Cu;
    SET_GPR_U32(ctx, 31, 0x238C54u);
    ctx->pc = 0x238C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238C4Cu;
    // 0x238c50: 0x240502b3  addiu       $a1, $zero, 0x2B3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 691));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221AA0u, 0x238C4Cu, 0x238C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238C54u;
label_238c54:
    // 0x238c54: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x238c54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238c58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x238c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238c5c: 0xc0886a8  jal         func_221AA0
    ctx->pc = 0x238C5Cu;
    SET_GPR_U32(ctx, 31, 0x238C64u);
    ctx->pc = 0x238C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238C5Cu;
    // 0x238c60: 0x240502b4  addiu       $a1, $zero, 0x2B4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 692));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221AA0u, 0x238C5Cu, 0x238C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238C64u;
label_238c64:
    // 0x238c64: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x238c64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238c68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x238c68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238c6c: 0xc0886a8  jal         func_221AA0
    ctx->pc = 0x238C6Cu;
    SET_GPR_U32(ctx, 31, 0x238C74u);
    ctx->pc = 0x238C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238C6Cu;
    // 0x238c70: 0x240502b5  addiu       $a1, $zero, 0x2B5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 693));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221AA0u, 0x238C6Cu, 0x238C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238C74u;
label_238c74:
    // 0x238c74: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x238c74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238c78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x238c78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238c7c: 0xc0886a8  jal         func_221AA0
    ctx->pc = 0x238C7Cu;
    SET_GPR_U32(ctx, 31, 0x238C84u);
    ctx->pc = 0x238C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238C7Cu;
    // 0x238c80: 0x240502b6  addiu       $a1, $zero, 0x2B6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 694));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221AA0u, 0x238C7Cu, 0x238C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238C84u;
label_238c84:
    // 0x238c84: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x238c84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238c88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x238c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238c8c: 0xc0886a8  jal         func_221AA0
    ctx->pc = 0x238C8Cu;
    SET_GPR_U32(ctx, 31, 0x238C94u);
    ctx->pc = 0x238C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238C8Cu;
    // 0x238c90: 0x240502b7  addiu       $a1, $zero, 0x2B7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 695));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221AA0u, 0x238C8Cu, 0x238C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238C94u;
label_238c94:
    // 0x238c94: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x238c94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238c98: 0xc089c20  jal         func_227080
    ctx->pc = 0x238C98u;
    SET_GPR_U32(ctx, 31, 0x238CA0u);
    ctx->pc = 0x238C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238C98u;
    // 0x238c9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227080u, 0x238C98u, 0x238CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238CA0u;
label_238ca0:
    // 0x238ca0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x238ca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238ca4: 0xc0899aa  jal         func_2266A8
    ctx->pc = 0x238CA4u;
    SET_GPR_U32(ctx, 31, 0x238CACu);
    ctx->pc = 0x238CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238CA4u;
    // 0x238ca8: 0x2405001b  addiu       $a1, $zero, 0x1B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266A8u, 0x238CA4u, 0x238CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238CACu;
label_238cac:
    // 0x238cac: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x238cacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_238cb0:
    // 0x238cb0: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x238cb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x238cb4: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x238cb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x238cb8: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x238cb8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x238cbc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x238cbcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x238cc0: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x238cc0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x238cc4: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x238cc4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x238cc8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x238cc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x238ccc: 0x3e00008  jr          $ra
    ctx->pc = 0x238CCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238CCCu;
        // 0x238cd0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238CCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x238CD4u;
    // 0x238cd4: 0x0  nop
    ctx->pc = 0x238cd4u;
    // NOP
    ctx->pc = 0x238cd8u;
}
