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

// Function: sub_00225A50
// Address: 0x225a50 - 0x225c10
void sub_00225A50_0x225a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225A50_0x225a50");
#endif

    switch (ctx->pc) {
        case 0x225a68u: goto label_225a68;
        case 0x225a88u: goto label_225a88;
        case 0x225a98u: goto label_225a98;
        case 0x225aa8u: goto label_225aa8;
        case 0x225ab4u: goto label_225ab4;
        case 0x225ac8u: goto label_225ac8;
        case 0x225aecu: goto label_225aec;
        case 0x225afcu: goto label_225afc;
        case 0x225b2cu: goto label_225b2c;
        case 0x225b48u: goto label_225b48;
        case 0x225b7cu: goto label_225b7c;
        case 0x225b84u: goto label_225b84;
        case 0x225b98u: goto label_225b98;
        case 0x225bb8u: goto label_225bb8;
        case 0x225bd0u: goto label_225bd0;
        case 0x225bf4u: goto label_225bf4;
        default: break;
    }

    ctx->pc = 0x225a50u;

    // 0x225a50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x225a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x225a54: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x225a54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x225a58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x225a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x225a5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x225a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x225a60: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x225A60u;
    SET_GPR_U32(ctx, 31, 0x225A68u);
    ctx->pc = 0x225A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225A60u;
    // 0x225a64: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x225A60u, 0x225A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225A68u;
label_225a68:
    // 0x225a68: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x225a68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
    // 0x225a6c: 0x1060004f  beqz        $v1, . + 4 + (0x4F << 2)
    ctx->pc = 0x225A6Cu;
    {
        const bool branch_taken_0x225a6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x225A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225A6Cu;
        // 0x225a70: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225a6c) {
            ctx->pc = 0x225BACu;
            goto label_225bac;
        }
    }
    ctx->pc = 0x225A74u;
    // 0x225a74: 0x8c430258  lw          $v1, 0x258($v0)
    ctx->pc = 0x225a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 600)));
    // 0x225a78: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x225A78u;
    {
        const bool branch_taken_0x225a78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x225a78) {
            ctx->pc = 0x225AE4u;
            goto label_225ae4;
        }
    }
    ctx->pc = 0x225A80u;
    // 0x225a80: 0xc089000  jal         func_224000
    ctx->pc = 0x225A80u;
    SET_GPR_U32(ctx, 31, 0x225A88u);
    ctx->pc = 0x225A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225A80u;
    // 0x225a84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224000u, 0x225A80u, 0x225A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225A88u;
label_225a88:
    // 0x225a88: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x225A88u;
    {
        const bool branch_taken_0x225a88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x225A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225A88u;
        // 0x225a8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225a88) {
            ctx->pc = 0x225ADCu;
            goto label_225adc;
        }
    }
    ctx->pc = 0x225A90u;
    // 0x225a90: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x225A90u;
    SET_GPR_U32(ctx, 31, 0x225A98u);
    ctx->pc = 0x225A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225A90u;
    // 0x225a94: 0x3c050100  lui         $a1, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x225A90u, 0x225A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225A98u;
label_225a98:
    // 0x225a98: 0x10400058  beqz        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x225A98u;
    {
        const bool branch_taken_0x225a98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x225A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225A98u;
        // 0x225a9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225a98) {
            ctx->pc = 0x225BFCu;
            goto label_225bfc;
        }
    }
    ctx->pc = 0x225AA0u;
    // 0x225aa0: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x225AA0u;
    SET_GPR_U32(ctx, 31, 0x225AA8u);
    ctx->pc = 0x225AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225AA0u;
    // 0x225aa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x225AA0u, 0x225AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225AA8u;
label_225aa8:
    // 0x225aa8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x225aa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225aac: 0xc051fc6  jal         func_147F18
    ctx->pc = 0x225AACu;
    SET_GPR_U32(ctx, 31, 0x225AB4u);
    ctx->pc = 0x225AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225AACu;
    // 0x225ab0: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147F18u, 0x225AACu, 0x225AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225AB4u;
label_225ab4:
    // 0x225ab4: 0x2c420065  sltiu       $v0, $v0, 0x65
    ctx->pc = 0x225ab4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)101) ? 1 : 0);
    // 0x225ab8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x225AB8u;
    {
        const bool branch_taken_0x225ab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x225ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225AB8u;
        // 0x225abc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225ab8) {
            ctx->pc = 0x225ADCu;
            goto label_225adc;
        }
    }
    ctx->pc = 0x225AC0u;
    // 0x225ac0: 0xc089fac  jal         func_227EB0
    ctx->pc = 0x225AC0u;
    SET_GPR_U32(ctx, 31, 0x225AC8u);
    ctx->pc = 0x225AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225AC0u;
    // 0x225ac4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227EB0u, 0x225AC0u, 0x225AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225AC8u;
label_225ac8:
    // 0x225ac8: 0x1440004c  bnez        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x225AC8u;
    {
        const bool branch_taken_0x225ac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x225ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225AC8u;
        // 0x225acc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225ac8) {
            ctx->pc = 0x225BFCu;
            goto label_225bfc;
        }
    }
    ctx->pc = 0x225AD0u;
    // 0x225ad0: 0x3c05efff  lui         $a1, 0xEFFF
    ctx->pc = 0x225ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61439 << 16));
    // 0x225ad4: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x225AD4u;
    {
        const bool branch_taken_0x225ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225AD4u;
        // 0x225ad8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225ad4) {
            ctx->pc = 0x225BC8u;
            goto label_225bc8;
        }
    }
    ctx->pc = 0x225ADCu;
label_225adc:
    // 0x225adc: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x225ADCu;
    {
        const bool branch_taken_0x225adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225ADCu;
        // 0x225ae0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225adc) {
            ctx->pc = 0x225BFCu;
            goto label_225bfc;
        }
    }
    ctx->pc = 0x225AE4u;
label_225ae4:
    // 0x225ae4: 0xc089000  jal         func_224000
    ctx->pc = 0x225AE4u;
    SET_GPR_U32(ctx, 31, 0x225AECu);
    ctx->pc = 0x225AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225AE4u;
    // 0x225ae8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224000u, 0x225AE4u, 0x225AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225AECu;
label_225aec:
    // 0x225aec: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x225AECu;
    {
        const bool branch_taken_0x225aec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x225AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225AECu;
        // 0x225af0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225aec) {
            ctx->pc = 0x225B40u;
            goto label_225b40;
        }
    }
    ctx->pc = 0x225AF4u;
    // 0x225af4: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x225AF4u;
    SET_GPR_U32(ctx, 31, 0x225AFCu);
    ctx->pc = 0x225AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225AF4u;
    // 0x225af8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x225AF4u, 0x225AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225AFCu;
label_225afc:
    // 0x225afc: 0x90430018  lbu         $v1, 0x18($v0)
    ctx->pc = 0x225afcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x225b00: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x225b00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x225b04: 0xc48102e8  lwc1        $f1, 0x2E8($a0)
    ctx->pc = 0x225b04u;
    { uint32_t bits = FAST_READ32(0x5102E8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x225b08: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x225b08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x225b0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x225b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x225b10: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x225b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225b14: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x225b14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x225b18: 0x0  nop
    ctx->pc = 0x225b18u;
    // NOP
    // 0x225b1c: 0x45000037  bc1f        . + 4 + (0x37 << 2)
    ctx->pc = 0x225B1Cu;
    {
        const bool branch_taken_0x225b1c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x225B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225B1Cu;
        // 0x225b20: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225b1c) {
            ctx->pc = 0x225BFCu;
            goto label_225bfc;
        }
    }
    ctx->pc = 0x225B24u;
    // 0x225b24: 0xc089fac  jal         func_227EB0
    ctx->pc = 0x225B24u;
    SET_GPR_U32(ctx, 31, 0x225B2Cu);
    ctx->pc = 0x225B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225B24u;
    // 0x225b28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227EB0u, 0x225B24u, 0x225B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225B2Cu;
label_225b2c:
    // 0x225b2c: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x225B2Cu;
    {
        const bool branch_taken_0x225b2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x225B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225B2Cu;
        // 0x225b30: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225b2c) {
            ctx->pc = 0x225BFCu;
            goto label_225bfc;
        }
    }
    ctx->pc = 0x225B34u;
    // 0x225b34: 0x3c05efff  lui         $a1, 0xEFFF
    ctx->pc = 0x225b34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61439 << 16));
    // 0x225b38: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x225B38u;
    {
        const bool branch_taken_0x225b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225B38u;
        // 0x225b3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225b38) {
            ctx->pc = 0x225BC8u;
            goto label_225bc8;
        }
    }
    ctx->pc = 0x225B40u;
label_225b40:
    // 0x225b40: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x225B40u;
    SET_GPR_U32(ctx, 31, 0x225B48u);
    ctx->pc = 0x225B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225B40u;
    // 0x225b44: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x225B40u, 0x225B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225B48u;
label_225b48:
    // 0x225b48: 0x90430018  lbu         $v1, 0x18($v0)
    ctx->pc = 0x225b48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x225b4c: 0x3c013df5  lui         $at, 0x3DF5
    ctx->pc = 0x225b4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15861 << 16));
    // 0x225b50: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x225b50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x225b54: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x225b54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x225b58: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x225b58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x225b5c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x225b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x225b60: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x225b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225b64: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x225b64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x225b68: 0x0  nop
    ctx->pc = 0x225b68u;
    // NOP
    // 0x225b6c: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x225B6Cu;
    {
        const bool branch_taken_0x225b6c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x225B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225B6Cu;
        // 0x225b70: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225b6c) {
            ctx->pc = 0x225BFCu;
            goto label_225bfc;
        }
    }
    ctx->pc = 0x225B74u;
    // 0x225b74: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x225B74u;
    SET_GPR_U32(ctx, 31, 0x225B7Cu);
    ctx->pc = 0x225B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225B74u;
    // 0x225b78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x225B74u, 0x225B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225B7Cu;
label_225b7c:
    // 0x225b7c: 0xc051fbe  jal         func_147EF8
    ctx->pc = 0x225B7Cu;
    SET_GPR_U32(ctx, 31, 0x225B84u);
    ctx->pc = 0x225B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225B7Cu;
    // 0x225b80: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147EF8u, 0x225B7Cu, 0x225B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225B84u;
label_225b84:
    // 0x225b84: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x225b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
    // 0x225b88: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x225B88u;
    {
        const bool branch_taken_0x225b88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x225B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225B88u;
        // 0x225b8c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225b88) {
            ctx->pc = 0x225BFCu;
            goto label_225bfc;
        }
    }
    ctx->pc = 0x225B90u;
    // 0x225b90: 0xc089fac  jal         func_227EB0
    ctx->pc = 0x225B90u;
    SET_GPR_U32(ctx, 31, 0x225B98u);
    ctx->pc = 0x225B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225B90u;
    // 0x225b94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227EB0u, 0x225B90u, 0x225B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225B98u;
label_225b98:
    // 0x225b98: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x225B98u;
    {
        const bool branch_taken_0x225b98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x225B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225B98u;
        // 0x225b9c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225b98) {
            ctx->pc = 0x225BFCu;
            goto label_225bfc;
        }
    }
    ctx->pc = 0x225BA0u;
    // 0x225ba0: 0x3c05efff  lui         $a1, 0xEFFF
    ctx->pc = 0x225ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61439 << 16));
    // 0x225ba4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x225BA4u;
    {
        const bool branch_taken_0x225ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225BA4u;
        // 0x225ba8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225ba4) {
            ctx->pc = 0x225BC8u;
            goto label_225bc8;
        }
    }
    ctx->pc = 0x225BACu;
label_225bac:
    // 0x225bac: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x225bacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225bb0: 0xc089fac  jal         func_227EB0
    ctx->pc = 0x225BB0u;
    SET_GPR_U32(ctx, 31, 0x225BB8u);
    ctx->pc = 0x225BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225BB0u;
    // 0x225bb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227EB0u, 0x225BB0u, 0x225BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225BB8u;
label_225bb8:
    // 0x225bb8: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x225BB8u;
    {
        const bool branch_taken_0x225bb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x225BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225BB8u;
        // 0x225bbc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225bb8) {
            ctx->pc = 0x225BFCu;
            goto label_225bfc;
        }
    }
    ctx->pc = 0x225BC0u;
    // 0x225bc0: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x225bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x225bc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x225bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_225bc8:
    // 0x225bc8: 0xc089998  jal         func_226660
    ctx->pc = 0x225BC8u;
    SET_GPR_U32(ctx, 31, 0x225BD0u);
    ctx->pc = 0x225BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225BC8u;
    // 0x225bcc: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x225BC8u, 0x225BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225BD0u;
label_225bd0:
    // 0x225bd0: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x225BD0u;
    {
        const bool branch_taken_0x225bd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x225BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225BD0u;
        // 0x225bd4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225bd0) {
            ctx->pc = 0x225BFCu;
            goto label_225bfc;
        }
    }
    ctx->pc = 0x225BD8u;
    // 0x225bd8: 0x3405e607  ori         $a1, $zero, 0xE607
    ctx->pc = 0x225bd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)58887);
    // 0x225bdc: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x225bdcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x225be0: 0x34a5cffc  ori         $a1, $a1, 0xCFFC
    ctx->pc = 0x225be0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)53244);
    // 0x225be4: 0x528b8  dsll        $a1, $a1, 2
    ctx->pc = 0x225be4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 2);
    // 0x225be8: 0x34a50003  ori         $a1, $a1, 0x3
    ctx->pc = 0x225be8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3);
    // 0x225bec: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x225BECu;
    SET_GPR_U32(ctx, 31, 0x225BF4u);
    ctx->pc = 0x225BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225BECu;
    // 0x225bf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x225BECu, 0x225BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225BF4u;
label_225bf4:
    // 0x225bf4: 0x2c510001  sltiu       $s1, $v0, 0x1
    ctx->pc = 0x225bf4u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x225bf8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x225bf8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_225bfc:
    // 0x225bfc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x225bfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x225c00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x225c00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225c04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x225c04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225c08: 0x3e00008  jr          $ra
    ctx->pc = 0x225C08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225C08u;
        // 0x225c0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225C08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225C10u;
}
