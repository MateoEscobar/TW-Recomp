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

// Function: sub_0027AC30
// Address: 0x27ac30 - 0x27ad80
void sub_0027AC30_0x27ac30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027AC30_0x27ac30");
#endif

    switch (ctx->pc) {
        case 0x27ac78u: goto label_27ac78;
        case 0x27acb8u: goto label_27acb8;
        case 0x27acecu: goto label_27acec;
        case 0x27ad00u: goto label_27ad00;
        case 0x27ad2cu: goto label_27ad2c;
        case 0x27ad40u: goto label_27ad40;
        case 0x27ad54u: goto label_27ad54;
        default: break;
    }

    ctx->pc = 0x27ac30u;

    // 0x27ac30: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x27ac30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x27ac34: 0x3c013f71  lui         $at, 0x3F71
    ctx->pc = 0x27ac34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16241 << 16));
    // 0x27ac38: 0x3421463b  ori         $at, $at, 0x463B
    ctx->pc = 0x27ac38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17979);
    // 0x27ac3c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27ac3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27ac40: 0x7fb10140  sq          $s1, 0x140($sp)
    ctx->pc = 0x27ac40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 17));
    // 0x27ac44: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x27ac44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x27ac48: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x27ac48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ac4c: 0xe7b40160  swc1        $f20, 0x160($sp)
    ctx->pc = 0x27ac4cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x27ac50: 0x7fb00150  sq          $s0, 0x150($sp)
    ctx->pc = 0x27ac50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 16));
    // 0x27ac54: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x27ac54u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x27ac58: 0x7fb20130  sq          $s2, 0x130($sp)
    ctx->pc = 0x27ac58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 18));
    // 0x27ac5c: 0x7fb30120  sq          $s3, 0x120($sp)
    ctx->pc = 0x27ac5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 19));
    // 0x27ac60: 0x26320090  addiu       $s2, $s1, 0x90
    ctx->pc = 0x27ac60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x27ac64: 0x7fb40110  sq          $s4, 0x110($sp)
    ctx->pc = 0x27ac64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 20));
    // 0x27ac68: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x27ac68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
    // 0x27ac6c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x27ac6cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ac70: 0xc087468  jal         func_21D1A0
    ctx->pc = 0x27AC70u;
    SET_GPR_U32(ctx, 31, 0x27AC78u);
    ctx->pc = 0x27AC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AC70u;
    // 0x27ac74: 0xe440096c  swc1        $f0, 0x96C($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 2412), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D1A0u, 0x27AC70u, 0x27AC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AC78u;
label_27ac78:
    // 0x27ac78: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x27ac78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x27ac7c: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x27ac7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x27ac80: 0x24534b00  addiu       $s3, $v0, 0x4B00
    ctx->pc = 0x27ac80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x27ac84: 0x3c080028  lui         $t0, 0x28
    ctx->pc = 0x27ac84u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)40 << 16));
    // 0x27ac88: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x27ac88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
    // 0x27ac8c: 0x25089410  addiu       $t0, $t0, -0x6BF0
    ctx->pc = 0x27ac8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294939664));
    // 0x27ac90: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27ac90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ac94: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x27ac94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x27ac98: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x27ac98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x27ac9c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x27ac9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27aca0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x27aca0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x27aca4: 0xac4000d8  sw          $zero, 0xD8($v0)
    ctx->pc = 0x27aca4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 216), GPR_U32(ctx, 0));
    // 0x27aca8: 0x86470002  lh          $a3, 0x2($s2)
    ctx->pc = 0x27aca8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x27acac: 0x73940  sll         $a3, $a3, 5
    ctx->pc = 0x27acacu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x27acb0: 0xc089d66  jal         func_227598
    ctx->pc = 0x27ACB0u;
    SET_GPR_U32(ctx, 31, 0x27ACB8u);
    ctx->pc = 0x27ACB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27ACB0u;
    // 0x27acb4: 0xf33821  addu        $a3, $a3, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227598u, 0x27ACB0u, 0x27ACB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27ACB8u;
label_27acb8:
    // 0x27acb8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27acb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27acbc: 0x1600001e  bnez        $s0, . + 4 + (0x1E << 2)
    ctx->pc = 0x27ACBCu;
    {
        const bool branch_taken_0x27acbc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x27ACC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ACBCu;
        // 0x27acc0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27acbc) {
            ctx->pc = 0x27AD38u;
            goto label_27ad38;
        }
    }
    ctx->pc = 0x27ACC4u;
    // 0x27acc4: 0x86470002  lh          $a3, 0x2($s2)
    ctx->pc = 0x27acc4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x27acc8: 0x3c080028  lui         $t0, 0x28
    ctx->pc = 0x27acc8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)40 << 16));
    // 0x27accc: 0x25089568  addiu       $t0, $t0, -0x6A98
    ctx->pc = 0x27acccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294940008));
    // 0x27acd0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27acd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27acd4: 0x73940  sll         $a3, $a3, 5
    ctx->pc = 0x27acd4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x27acd8: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x27acd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x27acdc: 0xf33821  addu        $a3, $a3, $s3
    ctx->pc = 0x27acdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 19)));
    // 0x27ace0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x27ace0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ace4: 0xc089d66  jal         func_227598
    ctx->pc = 0x27ACE4u;
    SET_GPR_U32(ctx, 31, 0x27ACECu);
    ctx->pc = 0x27ACE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27ACE4u;
    // 0x27ace8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x227598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227598u, 0x27ACE4u, 0x27ACECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27ACECu;
label_27acec:
    // 0x27acec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27acecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27acf0: 0x16000011  bnez        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x27ACF0u;
    {
        const bool branch_taken_0x27acf0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x27ACF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ACF0u;
        // 0x27acf4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27acf0) {
            ctx->pc = 0x27AD38u;
            goto label_27ad38;
        }
    }
    ctx->pc = 0x27ACF8u;
    // 0x27acf8: 0xc089b98  jal         func_226E60
    ctx->pc = 0x27ACF8u;
    SET_GPR_U32(ctx, 31, 0x27AD00u);
    ctx->pc = 0x27ACFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27ACF8u;
    // 0x27acfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E60u, 0x27ACF8u, 0x27AD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AD00u;
label_27ad00:
    // 0x27ad00: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x27AD00u;
    {
        const bool branch_taken_0x27ad00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27AD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AD00u;
        // 0x27ad04: 0x3c080028  lui         $t0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ad00) {
            ctx->pc = 0x27AD30u;
            goto label_27ad30;
        }
    }
    ctx->pc = 0x27AD08u;
    // 0x27ad08: 0x86470002  lh          $a3, 0x2($s2)
    ctx->pc = 0x27ad08u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x27ad0c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x27ad0cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x27ad10: 0x250897b0  addiu       $t0, $t0, -0x6850
    ctx->pc = 0x27ad10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294940592));
    // 0x27ad14: 0x73940  sll         $a3, $a3, 5
    ctx->pc = 0x27ad14u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x27ad18: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27ad18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ad1c: 0xf33821  addu        $a3, $a3, $s3
    ctx->pc = 0x27ad1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 19)));
    // 0x27ad20: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x27ad20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x27ad24: 0xc089d66  jal         func_227598
    ctx->pc = 0x27AD24u;
    SET_GPR_U32(ctx, 31, 0x27AD2Cu);
    ctx->pc = 0x27AD28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AD24u;
    // 0x27ad28: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227598u, 0x27AD24u, 0x27AD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AD2Cu;
label_27ad2c:
    // 0x27ad2c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27ad2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27ad30:
    // 0x27ad30: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27AD30u;
    {
        const bool branch_taken_0x27ad30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AD30u;
        // 0x27ad34: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ad30) {
            ctx->pc = 0x27AD44u;
            goto label_27ad44;
        }
    }
    ctx->pc = 0x27AD38u;
label_27ad38:
    // 0x27ad38: 0xc0e1a34  jal         func_3868D0
    ctx->pc = 0x27AD38u;
    SET_GPR_U32(ctx, 31, 0x27AD40u);
    ctx->pc = 0x27AD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AD38u;
    // 0x27ad3c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3868D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3868D0u, 0x27AD38u, 0x27AD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AD40u;
label_27ad40:
    // 0x27ad40: 0x8fb40000  lw          $s4, 0x0($sp)
    ctx->pc = 0x27ad40u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_27ad44:
    // 0x27ad44: 0x16800005  bnez        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x27AD44u;
    {
        const bool branch_taken_0x27ad44 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x27AD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AD44u;
        // 0x27ad48: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ad44) {
            ctx->pc = 0x27AD5Cu;
            goto label_27ad5c;
        }
    }
    ctx->pc = 0x27AD4Cu;
    // 0x27ad4c: 0xc089b98  jal         func_226E60
    ctx->pc = 0x27AD4Cu;
    SET_GPR_U32(ctx, 31, 0x27AD54u);
    ctx->pc = 0x27AD50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AD4Cu;
    // 0x27ad50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E60u, 0x27AD4Cu, 0x27AD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AD54u;
label_27ad54:
    // 0x27ad54: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x27ad54u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ad58: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x27ad58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_27ad5c:
    // 0x27ad5c: 0x7bb00150  lq          $s0, 0x150($sp)
    ctx->pc = 0x27ad5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x27ad60: 0x7bb10140  lq          $s1, 0x140($sp)
    ctx->pc = 0x27ad60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x27ad64: 0x7bb20130  lq          $s2, 0x130($sp)
    ctx->pc = 0x27ad64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x27ad68: 0x7bb30120  lq          $s3, 0x120($sp)
    ctx->pc = 0x27ad68u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x27ad6c: 0x7bb40110  lq          $s4, 0x110($sp)
    ctx->pc = 0x27ad6cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x27ad70: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x27ad70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x27ad74: 0xc7b40160  lwc1        $f20, 0x160($sp)
    ctx->pc = 0x27ad74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27ad78: 0x3e00008  jr          $ra
    ctx->pc = 0x27AD78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27AD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AD78u;
        // 0x27ad7c: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27AD78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27AD80u;
}
