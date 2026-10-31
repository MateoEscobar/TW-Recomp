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

// Function: sub_002B9A90
// Address: 0x2b9a90 - 0x2b9b48
void sub_002B9A90_0x2b9a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B9A90_0x2b9a90");
#endif

    switch (ctx->pc) {
        case 0x2b9accu: goto label_2b9acc;
        case 0x2b9ad4u: goto label_2b9ad4;
        case 0x2b9ae4u: goto label_2b9ae4;
        case 0x2b9aecu: goto label_2b9aec;
        case 0x2b9b18u: goto label_2b9b18;
        case 0x2b9b24u: goto label_2b9b24;
        default: break;
    }

    ctx->pc = 0x2b9a90u;

    // 0x2b9a90: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2b9a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2b9a94: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2b9a94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2b9a98: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2b9a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2b9a9c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b9a9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9aa0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2b9aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2b9aa4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2b9aa4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9aa8: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x2b9aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x2b9aac: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2b9aacu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9ab0: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x2b9ab0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2b9ab4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2b9ab4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9ab8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2b9ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x2b9abc: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2b9abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x2b9ac0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b9ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b9ac4: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2B9AC4u;
    SET_GPR_U32(ctx, 31, 0x2B9ACCu);
    ctx->pc = 0x2B9AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9AC4u;
    // 0x2b9ac8: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2B9AC4u, 0x2B9ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9ACCu;
label_2b9acc:
    // 0x2b9acc: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2B9ACCu;
    SET_GPR_U32(ctx, 31, 0x2B9AD4u);
    ctx->pc = 0x2B9AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9ACCu;
    // 0x2b9ad0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2B9ACCu, 0x2B9AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9AD4u;
label_2b9ad4:
    // 0x2b9ad4: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2B9AD4u;
    {
        const bool branch_taken_0x2b9ad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9AD4u;
        // 0x2b9ad8: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9ad4) {
            ctx->pc = 0x2B9B28u;
            goto label_2b9b28;
        }
    }
    ctx->pc = 0x2B9ADCu;
    // 0x2b9adc: 0xc087502  jal         func_21D408
    ctx->pc = 0x2B9ADCu;
    SET_GPR_U32(ctx, 31, 0x2B9AE4u);
    ctx->pc = 0x2B9AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9ADCu;
    // 0x2b9ae0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2B9ADCu, 0x2B9AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9AE4u;
label_2b9ae4:
    // 0x2b9ae4: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2B9AE4u;
    SET_GPR_U32(ctx, 31, 0x2B9AECu);
    ctx->pc = 0x2B9AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9AE4u;
    // 0x2b9ae8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2B9AE4u, 0x2B9AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9AECu;
label_2b9aec:
    // 0x2b9aec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b9aecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9af0: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B9AF0u;
    {
        const bool branch_taken_0x2b9af0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9AF0u;
        // 0x2b9af4: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9af0) {
            ctx->pc = 0x2B9B18u;
            goto label_2b9b18;
        }
    }
    ctx->pc = 0x2B9AF8u;
    // 0x2b9af8: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x2b9af8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x2b9afc: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2b9afcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9b00: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2b9b00u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2b9b04: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2b9b04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9b08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b9b08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9b0c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2b9b0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9b10: 0xc0ae6d2  jal         func_2B9B48
    ctx->pc = 0x2B9B10u;
    SET_GPR_U32(ctx, 31, 0x2B9B18u);
    ctx->pc = 0x2B9B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9B10u;
    // 0x2b9b14: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B9B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9B48u, 0x2B9B10u, 0x2B9B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9B18u;
label_2b9b18:
    // 0x2b9b18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b9b18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9b1c: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x2B9B1Cu;
    SET_GPR_U32(ctx, 31, 0x2B9B24u);
    ctx->pc = 0x2B9B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9B1Cu;
    // 0x2b9b20: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2B9B1Cu, 0x2B9B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9B24u;
label_2b9b24:
    // 0x2b9b24: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2b9b24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2b9b28:
    // 0x2b9b28: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2b9b28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b9b2c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2b9b2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b9b30: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2b9b30u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b9b34: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x2b9b34u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b9b38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b9b38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b9b3c: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x2b9b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b9b40: 0x3e00008  jr          $ra
    ctx->pc = 0x2B9B40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B9B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9B40u;
        // 0x2b9b44: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9B40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B9B48u;
}
