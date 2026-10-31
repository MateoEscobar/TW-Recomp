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

// Function: sub_002D5C28
// Address: 0x2d5c28 - 0x2d5cf0
void sub_002D5C28_0x2d5c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D5C28_0x2d5c28");
#endif

    switch (ctx->pc) {
        case 0x2d5c6cu: goto label_2d5c6c;
        case 0x2d5c74u: goto label_2d5c74;
        case 0x2d5c84u: goto label_2d5c84;
        case 0x2d5c8cu: goto label_2d5c8c;
        case 0x2d5cbcu: goto label_2d5cbc;
        case 0x2d5cc8u: goto label_2d5cc8;
        default: break;
    }

    ctx->pc = 0x2d5c28u;

    // 0x2d5c28: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2d5c28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2d5c2c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2d5c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2d5c30: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2d5c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x2d5c34: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2d5c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5c38: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2d5c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2d5c3c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2d5c3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5c40: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x2d5c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x2d5c44: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2d5c44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5c48: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x2d5c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x2d5c4c: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x2d5c4cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5c50: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x2d5c50u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2d5c54: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2d5c54u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5c58: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2d5c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x2d5c5c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2d5c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x2d5c60: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d5c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d5c64: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2D5C64u;
    SET_GPR_U32(ctx, 31, 0x2D5C6Cu);
    ctx->pc = 0x2D5C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5C64u;
    // 0x2d5c68: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2D5C64u, 0x2D5C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5C6Cu;
label_2d5c6c:
    // 0x2d5c6c: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2D5C6Cu;
    SET_GPR_U32(ctx, 31, 0x2D5C74u);
    ctx->pc = 0x2D5C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5C6Cu;
    // 0x2d5c70: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2D5C6Cu, 0x2D5C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5C74u;
label_2d5c74:
    // 0x2d5c74: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2D5C74u;
    {
        const bool branch_taken_0x2d5c74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5C74u;
        // 0x2d5c78: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5c74) {
            ctx->pc = 0x2D5CCCu;
            goto label_2d5ccc;
        }
    }
    ctx->pc = 0x2D5C7Cu;
    // 0x2d5c7c: 0xc087502  jal         func_21D408
    ctx->pc = 0x2D5C7Cu;
    SET_GPR_U32(ctx, 31, 0x2D5C84u);
    ctx->pc = 0x2D5C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5C7Cu;
    // 0x2d5c80: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2D5C7Cu, 0x2D5C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5C84u;
label_2d5c84:
    // 0x2d5c84: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2D5C84u;
    SET_GPR_U32(ctx, 31, 0x2D5C8Cu);
    ctx->pc = 0x2D5C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5C84u;
    // 0x2d5c88: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2D5C84u, 0x2D5C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5C8Cu;
label_2d5c8c:
    // 0x2d5c8c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d5c8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5c90: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x2D5C90u;
    {
        const bool branch_taken_0x2d5c90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5C90u;
        // 0x2d5c94: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5c90) {
            ctx->pc = 0x2D5CBCu;
            goto label_2d5cbc;
        }
    }
    ctx->pc = 0x2D5C98u;
    // 0x2d5c98: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x2d5c98u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x2d5c9c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2d5c9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5ca0: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2d5ca0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5ca4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2d5ca4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2d5ca8: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x2d5ca8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5cac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d5cacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5cb0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d5cb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5cb4: 0xc0b573c  jal         func_2D5CF0
    ctx->pc = 0x2D5CB4u;
    SET_GPR_U32(ctx, 31, 0x2D5CBCu);
    ctx->pc = 0x2D5CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5CB4u;
    // 0x2d5cb8: 0x354affff  ori         $t2, $t2, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5CF0u, 0x2D5CB4u, 0x2D5CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5CBCu;
label_2d5cbc:
    // 0x2d5cbc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d5cbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5cc0: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x2D5CC0u;
    SET_GPR_U32(ctx, 31, 0x2D5CC8u);
    ctx->pc = 0x2D5CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5CC0u;
    // 0x2d5cc4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2D5CC0u, 0x2D5CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5CC8u;
label_2d5cc8:
    // 0x2d5cc8: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x2d5cc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2d5ccc:
    // 0x2d5ccc: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2d5cccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d5cd0: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2d5cd0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d5cd4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2d5cd4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d5cd8: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x2d5cd8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d5cdc: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x2d5cdcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d5ce0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d5ce0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d5ce4: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x2d5ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2d5ce8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D5CE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D5CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5CE8u;
        // 0x2d5cec: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5CE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D5CF0u;
}
