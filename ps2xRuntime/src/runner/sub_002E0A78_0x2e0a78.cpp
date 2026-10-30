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

// Function: sub_002E0A78
// Address: 0x2e0a78 - 0x2e0b48
void sub_002E0A78_0x2e0a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0A78_0x2e0a78");
#endif

    switch (ctx->pc) {
        case 0x2e0ac0u: goto label_2e0ac0;
        case 0x2e0accu: goto label_2e0acc;
        case 0x2e0adcu: goto label_2e0adc;
        case 0x2e0ae4u: goto label_2e0ae4;
        case 0x2e0b10u: goto label_2e0b10;
        case 0x2e0b1cu: goto label_2e0b1c;
        default: break;
    }

    ctx->pc = 0x2e0a78u;

    // 0x2e0a78: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2e0a78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2e0a7c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e0a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e0a80: 0xe7b70068  swc1        $f23, 0x68($sp)
    ctx->pc = 0x2e0a80u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2e0a84: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2e0a84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0a88: 0xe7b60060  swc1        $f22, 0x60($sp)
    ctx->pc = 0x2e0a88u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2e0a8c: 0x46007dc6  mov.s       $f23, $f15
    ctx->pc = 0x2e0a8cu;
    ctx->f[23] = FPU_MOV_S(ctx->f[15]);
    // 0x2e0a90: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x2e0a90u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2e0a94: 0x46007586  mov.s       $f22, $f14
    ctx->pc = 0x2e0a94u;
    ctx->f[22] = FPU_MOV_S(ctx->f[14]);
    // 0x2e0a98: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x2e0a98u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2e0a9c: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x2e0a9cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x2e0aa0: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2e0aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2e0aa4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2e0aa4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2e0aa8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2e0aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2e0aac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2e0aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0ab0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2e0ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2e0ab4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e0ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e0ab8: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2E0AB8u;
    SET_GPR_U32(ctx, 31, 0x2E0AC0u);
    ctx->pc = 0x2E0ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0AB8u;
    // 0x2e0abc: 0xafa60004  sw          $a2, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2E0AB8u, 0x2E0AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0AC0u;
label_2e0ac0:
    // 0x2e0ac0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e0ac0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0ac4: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2E0AC4u;
    SET_GPR_U32(ctx, 31, 0x2E0ACCu);
    ctx->pc = 0x2E0AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0AC4u;
    // 0x2e0ac8: 0x37a40004  ori         $a0, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2E0AC4u, 0x2E0ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0ACCu;
label_2e0acc:
    // 0x2e0acc: 0x52000014  beql        $s0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x2E0ACCu;
    {
        const bool branch_taken_0x2e0acc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0acc) {
            ctx->pc = 0x2E0AD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E0ACCu;
            // 0x2e0ad0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E0B20u;
            goto label_2e0b20;
        }
    }
    ctx->pc = 0x2E0AD4u;
    // 0x2e0ad4: 0xc087502  jal         func_21D408
    ctx->pc = 0x2E0AD4u;
    SET_GPR_U32(ctx, 31, 0x2E0ADCu);
    ctx->pc = 0x2E0AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0AD4u;
    // 0x2e0ad8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2E0AD4u, 0x2E0ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0ADCu;
label_2e0adc:
    // 0x2e0adc: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2E0ADCu;
    SET_GPR_U32(ctx, 31, 0x2E0AE4u);
    ctx->pc = 0x2E0AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0ADCu;
    // 0x2e0ae0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2E0ADCu, 0x2E0AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0AE4u;
label_2e0ae4:
    // 0x2e0ae4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e0ae4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0ae8: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E0AE8u;
    {
        const bool branch_taken_0x2e0ae8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0AE8u;
        // 0x2e0aec: 0x8fa70004  lw          $a3, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0ae8) {
            ctx->pc = 0x2E0B10u;
            goto label_2e0b10;
        }
    }
    ctx->pc = 0x2E0AF0u;
    // 0x2e0af0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2e0af0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0af4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2e0af4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2e0af8: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x2e0af8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x2e0afc: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x2e0afcu;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x2e0b00: 0x4600bbc6  mov.s       $f15, $f23
    ctx->pc = 0x2e0b00u;
    ctx->f[15] = FPU_MOV_S(ctx->f[23]);
    // 0x2e0b04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e0b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0b08: 0xc0b82d2  jal         func_2E0B48
    ctx->pc = 0x2E0B08u;
    SET_GPR_U32(ctx, 31, 0x2E0B10u);
    ctx->pc = 0x2E0B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0B08u;
    // 0x2e0b0c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0B48u, 0x2E0B08u, 0x2E0B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0B10u;
label_2e0b10:
    // 0x2e0b10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e0b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0b14: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x2E0B14u;
    SET_GPR_U32(ctx, 31, 0x2E0B1Cu);
    ctx->pc = 0x2E0B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0B14u;
    // 0x2e0b18: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2E0B14u, 0x2E0B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0B1Cu;
label_2e0b1c:
    // 0x2e0b1c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2e0b1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2e0b20:
    // 0x2e0b20: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2e0b20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e0b24: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e0b24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e0b28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e0b28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e0b2c: 0xc7b70068  lwc1        $f23, 0x68($sp)
    ctx->pc = 0x2e0b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2e0b30: 0xc7b60060  lwc1        $f22, 0x60($sp)
    ctx->pc = 0x2e0b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2e0b34: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x2e0b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2e0b38: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x2e0b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e0b3c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0B3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E0B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0B3Cu;
        // 0x2e0b40: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0B3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0B44u;
    // 0x2e0b44: 0x0  nop
    ctx->pc = 0x2e0b44u;
    // NOP
    ctx->pc = 0x2e0b48u;
}
