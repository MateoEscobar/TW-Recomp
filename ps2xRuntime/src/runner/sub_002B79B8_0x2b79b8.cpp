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

// Function: sub_002B79B8
// Address: 0x2b79b8 - 0x2b7a90
void sub_002B79B8_0x2b79b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B79B8_0x2b79b8");
#endif

    switch (ctx->pc) {
        case 0x2b79fcu: goto label_2b79fc;
        case 0x2b7a04u: goto label_2b7a04;
        case 0x2b7a18u: goto label_2b7a18;
        case 0x2b7a2cu: goto label_2b7a2c;
        case 0x2b7a34u: goto label_2b7a34;
        case 0x2b7a5cu: goto label_2b7a5c;
        case 0x2b7a68u: goto label_2b7a68;
        default: break;
    }

    ctx->pc = 0x2b79b8u;

    // 0x2b79b8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2b79b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2b79bc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2b79bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2b79c0: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x2b79c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x2b79c4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2b79c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b79c8: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x2b79c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x2b79cc: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2b79ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b79d0: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x2b79d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2b79d4: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x2b79d4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b79d8: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2b79d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2b79dc: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2b79dcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2b79e0: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2b79e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x2b79e4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b79e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b79e8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2b79e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x2b79ec: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2b79ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x2b79f0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b79f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b79f4: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2B79F4u;
    SET_GPR_U32(ctx, 31, 0x2B79FCu);
    ctx->pc = 0x2B79F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B79F4u;
    // 0x2b79f8: 0xafa50004  sw          $a1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2B79F4u, 0x2B79FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B79FCu;
label_2b79fc:
    // 0x2b79fc: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2B79FCu;
    SET_GPR_U32(ctx, 31, 0x2B7A04u);
    ctx->pc = 0x2B7A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B79FCu;
    // 0x2b7a00: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2B79FCu, 0x2B7A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7A04u;
label_2b7a04:
    // 0x2b7a04: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b7a04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7a08: 0x52000018  beql        $s0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x2B7A08u;
    {
        const bool branch_taken_0x2b7a08 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b7a08) {
            ctx->pc = 0x2B7A0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B7A08u;
            // 0x2b7a0c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B7A6Cu;
            goto label_2b7a6c;
        }
    }
    ctx->pc = 0x2B7A10u;
    // 0x2b7a10: 0xc0e40a2  jal         func_390288
    ctx->pc = 0x2B7A10u;
    SET_GPR_U32(ctx, 31, 0x2B7A18u);
    ctx->pc = 0x2B7A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7A10u;
    // 0x2b7a14: 0x37a40004  ori         $a0, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x390288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390288u, 0x2B7A10u, 0x2B7A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7A18u;
label_2b7a18:
    // 0x2b7a18: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2b7a18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7a1c: 0x52200013  beql        $s1, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x2B7A1Cu;
    {
        const bool branch_taken_0x2b7a1c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b7a1c) {
            ctx->pc = 0x2B7A20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B7A1Cu;
            // 0x2b7a20: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B7A6Cu;
            goto label_2b7a6c;
        }
    }
    ctx->pc = 0x2B7A24u;
    // 0x2b7a24: 0xc087502  jal         func_21D408
    ctx->pc = 0x2B7A24u;
    SET_GPR_U32(ctx, 31, 0x2B7A2Cu);
    ctx->pc = 0x2B7A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7A24u;
    // 0x2b7a28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2B7A24u, 0x2B7A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7A2Cu;
label_2b7a2c:
    // 0x2b7a2c: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2B7A2Cu;
    SET_GPR_U32(ctx, 31, 0x2B7A34u);
    ctx->pc = 0x2B7A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7A2Cu;
    // 0x2b7a30: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2B7A2Cu, 0x2B7A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7A34u;
label_2b7a34:
    // 0x2b7a34: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b7a34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7a38: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B7A38u;
    {
        const bool branch_taken_0x2b7a38 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7A38u;
        // 0x2b7a3c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7a38) {
            ctx->pc = 0x2B7A5Cu;
            goto label_2b7a5c;
        }
    }
    ctx->pc = 0x2B7A40u;
    // 0x2b7a40: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2b7a40u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2b7a44: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2b7a44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7a48: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x2b7a48u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7a4c: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x2b7a4cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7a50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b7a50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7a54: 0xc0adea4  jal         func_2B7A90
    ctx->pc = 0x2B7A54u;
    SET_GPR_U32(ctx, 31, 0x2B7A5Cu);
    ctx->pc = 0x2B7A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7A54u;
    // 0x2b7a58: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7A90u, 0x2B7A54u, 0x2B7A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7A5Cu;
label_2b7a5c:
    // 0x2b7a5c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b7a5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7a60: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x2B7A60u;
    SET_GPR_U32(ctx, 31, 0x2B7A68u);
    ctx->pc = 0x2B7A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7A60u;
    // 0x2b7a64: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2B7A60u, 0x2B7A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7A68u;
label_2b7a68:
    // 0x2b7a68: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x2b7a68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2b7a6c:
    // 0x2b7a6c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2b7a6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b7a70: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2b7a70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b7a74: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2b7a74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b7a78: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x2b7a78u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b7a7c: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x2b7a7cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b7a80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b7a80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b7a84: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x2b7a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b7a88: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7A88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B7A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7A88u;
        // 0x2b7a8c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7A88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B7A90u;
}
