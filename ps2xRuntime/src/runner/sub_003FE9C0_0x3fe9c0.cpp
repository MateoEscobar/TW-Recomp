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

// Function: sub_003FE9C0
// Address: 0x3fe9c0 - 0x3fead0
void sub_003FE9C0_0x3fe9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FE9C0_0x3fe9c0");
#endif

    switch (ctx->pc) {
        case 0x3fe9c0u: goto label_3fe9c0;
        case 0x3fe9c4u: goto label_3fe9c4;
        case 0x3fe9c8u: goto label_3fe9c8;
        case 0x3fe9ccu: goto label_3fe9cc;
        case 0x3fe9d0u: goto label_3fe9d0;
        case 0x3fe9d4u: goto label_3fe9d4;
        case 0x3fe9d8u: goto label_3fe9d8;
        case 0x3fe9dcu: goto label_3fe9dc;
        case 0x3fe9e0u: goto label_3fe9e0;
        case 0x3fe9e4u: goto label_3fe9e4;
        case 0x3fe9e8u: goto label_3fe9e8;
        case 0x3fe9ecu: goto label_3fe9ec;
        case 0x3fe9f0u: goto label_3fe9f0;
        case 0x3fe9f4u: goto label_3fe9f4;
        case 0x3fe9f8u: goto label_3fe9f8;
        case 0x3fe9fcu: goto label_3fe9fc;
        case 0x3fea00u: goto label_3fea00;
        case 0x3fea04u: goto label_3fea04;
        case 0x3fea08u: goto label_3fea08;
        case 0x3fea0cu: goto label_3fea0c;
        case 0x3fea10u: goto label_3fea10;
        case 0x3fea14u: goto label_3fea14;
        case 0x3fea18u: goto label_3fea18;
        case 0x3fea1cu: goto label_3fea1c;
        case 0x3fea20u: goto label_3fea20;
        case 0x3fea24u: goto label_3fea24;
        case 0x3fea28u: goto label_3fea28;
        case 0x3fea2cu: goto label_3fea2c;
        case 0x3fea30u: goto label_3fea30;
        case 0x3fea34u: goto label_3fea34;
        case 0x3fea38u: goto label_3fea38;
        case 0x3fea3cu: goto label_3fea3c;
        case 0x3fea40u: goto label_3fea40;
        case 0x3fea44u: goto label_3fea44;
        case 0x3fea48u: goto label_3fea48;
        case 0x3fea4cu: goto label_3fea4c;
        case 0x3fea50u: goto label_3fea50;
        case 0x3fea54u: goto label_3fea54;
        case 0x3fea58u: goto label_3fea58;
        case 0x3fea5cu: goto label_3fea5c;
        case 0x3fea60u: goto label_3fea60;
        case 0x3fea64u: goto label_3fea64;
        case 0x3fea68u: goto label_3fea68;
        case 0x3fea6cu: goto label_3fea6c;
        case 0x3fea70u: goto label_3fea70;
        case 0x3fea74u: goto label_3fea74;
        case 0x3fea78u: goto label_3fea78;
        case 0x3fea7cu: goto label_3fea7c;
        case 0x3fea80u: goto label_3fea80;
        case 0x3fea84u: goto label_3fea84;
        case 0x3fea88u: goto label_3fea88;
        case 0x3fea8cu: goto label_3fea8c;
        case 0x3fea90u: goto label_3fea90;
        case 0x3fea94u: goto label_3fea94;
        case 0x3fea98u: goto label_3fea98;
        case 0x3fea9cu: goto label_3fea9c;
        case 0x3feaa0u: goto label_3feaa0;
        case 0x3feaa4u: goto label_3feaa4;
        case 0x3feaa8u: goto label_3feaa8;
        case 0x3feaacu: goto label_3feaac;
        case 0x3feab0u: goto label_3feab0;
        case 0x3feab4u: goto label_3feab4;
        case 0x3feab8u: goto label_3feab8;
        case 0x3feabcu: goto label_3feabc;
        case 0x3feac0u: goto label_3feac0;
        case 0x3feac4u: goto label_3feac4;
        case 0x3feac8u: goto label_3feac8;
        case 0x3feaccu: goto label_3feacc;
        default: break;
    }

    ctx->pc = 0x3fe9c0u;

label_3fe9c0:
    // 0x3fe9c0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3fe9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_3fe9c4:
    // 0x3fe9c4: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3fe9c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_3fe9c8:
    // 0x3fe9c8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3fe9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_3fe9cc:
    // 0x3fe9cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3fe9ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3fe9d0:
    // 0x3fe9d0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3fe9d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3fe9d4:
    // 0x3fe9d4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3fe9d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3fe9d8:
    // 0x3fe9d8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3fe9d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3fe9dc:
    // 0x3fe9dc: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3fe9dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_3fe9e0:
    // 0x3fe9e0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3fe9e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3fe9e4:
    // 0x3fe9e4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3fe9e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3fe9e8:
    // 0x3fe9e8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3fe9e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3fe9ec:
    // 0x3fe9ec: 0xc0ea12a  jal         func_3A84A8
label_3fe9f0:
    if (ctx->pc == 0x3FE9F0u) {
        ctx->pc = 0x3FE9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE9ECu;
        // 0x3fe9f0: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FE9F4u;
        goto label_3fe9f4;
    }
    ctx->pc = 0x3FE9ECu;
    SET_GPR_U32(ctx, 31, 0x3FE9F4u);
    ctx->pc = 0x3FE9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE9ECu;
    // 0x3fe9f0: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3FE9ECu, 0x3FE9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE9F4u;
label_3fe9f4:
    // 0x3fe9f4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3fe9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3fe9f8:
    // 0x3fe9f8: 0xc0ea12a  jal         func_3A84A8
label_3fe9fc:
    if (ctx->pc == 0x3FE9FCu) {
        ctx->pc = 0x3FE9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE9F8u;
        // 0x3fe9fc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FEA00u;
        goto label_3fea00;
    }
    ctx->pc = 0x3FE9F8u;
    SET_GPR_U32(ctx, 31, 0x3FEA00u);
    ctx->pc = 0x3FE9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE9F8u;
    // 0x3fe9fc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3FE9F8u, 0x3FEA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FEA00u;
label_3fea00:
    // 0x3fea00: 0x7ba50010  lq          $a1, 0x10($sp)
    ctx->pc = 0x3fea00u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3fea04:
    // 0x3fea04: 0x3c03ffef  lui         $v1, 0xFFEF
    ctx->pc = 0x3fea04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65519 << 16));
label_3fea08:
    // 0x3fea08: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x3fea08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_3fea0c:
    // 0x3fea0c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3fea0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_3fea10:
    // 0x3fea10: 0x7fa50020  sq          $a1, 0x20($sp)
    ctx->pc = 0x3fea10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 5));
label_3fea14:
    // 0x3fea14: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3fea14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3fea18:
    // 0x3fea18: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3fea18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3fea1c:
    // 0x3fea1c: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x3fea1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
label_3fea20:
    // 0x3fea20: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3fea20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3fea24:
    // 0x3fea24: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x3fea24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_3fea28:
    // 0x3fea28: 0x2484b8b8  addiu       $a0, $a0, -0x4748
    ctx->pc = 0x3fea28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
label_3fea2c:
    // 0x3fea2c: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x3fea2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_3fea30:
    // 0x3fea30: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3fea30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3fea34:
    // 0x3fea34: 0xc0cd518  jal         func_335460
label_3fea38:
    if (ctx->pc == 0x3FEA38u) {
        ctx->pc = 0x3FEA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEA34u;
        // 0x3fea38: 0xafa00028  sw          $zero, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FEA3Cu;
        goto label_3fea3c;
    }
    ctx->pc = 0x3FEA34u;
    SET_GPR_U32(ctx, 31, 0x3FEA3Cu);
    ctx->pc = 0x3FEA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FEA34u;
    // 0x3fea38: 0xafa00028  sw          $zero, 0x28($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3FEA34u, 0x3FEA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FEA3Cu;
label_3fea3c:
    // 0x3fea3c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3fea3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3fea40:
    // 0x3fea40: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3fea40u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_3fea44:
    // 0x3fea44: 0xc136b24  jal         func_4DAC90
label_3fea48:
    if (ctx->pc == 0x3FEA48u) {
        ctx->pc = 0x3FEA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEA44u;
        // 0x3fea48: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FEA4Cu;
        goto label_3fea4c;
    }
    ctx->pc = 0x3FEA44u;
    SET_GPR_U32(ctx, 31, 0x3FEA4Cu);
    ctx->pc = 0x3FEA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FEA44u;
    // 0x3fea48: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3FEA44u, 0x3FEA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FEA4Cu;
label_3fea4c:
    // 0x3fea4c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3fea4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3fea50:
    // 0x3fea50: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3fea50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3fea54:
    // 0x3fea54: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3fea54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3fea58:
    // 0x3fea58: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3fea58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3fea5c:
    // 0x3fea5c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x3fea5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_3fea60:
    // 0x3fea60: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x3fea60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_3fea64:
    // 0x3fea64: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x3fea64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_3fea68:
    // 0x3fea68: 0x60f809  jalr        $v1
label_3fea6c:
    if (ctx->pc == 0x3FEA6Cu) {
        ctx->pc = 0x3FEA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEA68u;
        // 0x3fea6c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FEA70u;
        goto label_3fea70;
    }
    ctx->pc = 0x3FEA68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3FEA70u);
        ctx->pc = 0x3FEA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEA68u;
        // 0x3fea6c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FEA68u, 0x3FEA70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3FEA70u;
label_3fea70:
    // 0x3fea70: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3fea70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3fea74:
    // 0x3fea74: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3fea74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3fea78:
    // 0x3fea78: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x3fea78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
label_3fea7c:
    // 0x3fea7c: 0x8c43007c  lw          $v1, 0x7C($v0)
    ctx->pc = 0x3fea7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_3fea80:
    // 0x3fea80: 0x60f809  jalr        $v1
label_3fea84:
    if (ctx->pc == 0x3FEA84u) {
        ctx->pc = 0x3FEA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEA80u;
        // 0x3fea84: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FEA88u;
        goto label_3fea88;
    }
    ctx->pc = 0x3FEA80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3FEA88u);
        ctx->pc = 0x3FEA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEA80u;
        // 0x3fea84: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FEA80u, 0x3FEA88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3FEA88u;
label_3fea88:
    // 0x3fea88: 0xae720014  sw          $s2, 0x14($s3)
    ctx->pc = 0x3fea88u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 18));
label_3fea8c:
    // 0x3fea8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3fea8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fea90:
    // 0x3fea90: 0xc0e858c  jal         func_3A1630
label_3fea94:
    if (ctx->pc == 0x3FEA94u) {
        ctx->pc = 0x3FEA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEA90u;
        // 0x3fea94: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FEA98u;
        goto label_3fea98;
    }
    ctx->pc = 0x3FEA90u;
    SET_GPR_U32(ctx, 31, 0x3FEA98u);
    ctx->pc = 0x3FEA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FEA90u;
    // 0x3fea94: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3FEA90u, 0x3FEA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FEA98u;
label_3fea98:
    // 0x3fea98: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x3fea98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_3fea9c:
    // 0x3fea9c: 0x3c020420  lui         $v0, 0x420
    ctx->pc = 0x3fea9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1056 << 16));
label_3feaa0:
    // 0x3feaa0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x3feaa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_3feaa4:
    // 0x3feaa4: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x3feaa4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3feaa8:
    // 0x3feaa8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3feaa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3feaac:
    // 0x3feaac: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3feaacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3feab0:
    // 0x3feab0: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x3feab0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_3feab4:
    // 0x3feab4: 0xae720010  sw          $s2, 0x10($s3)
    ctx->pc = 0x3feab4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 18));
label_3feab8:
    // 0x3feab8: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3feab8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3feabc:
    // 0x3feabc: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x3feabcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3feac0:
    // 0x3feac0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3feac0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3feac4:
    // 0x3feac4: 0x3e00008  jr          $ra
label_3feac8:
    if (ctx->pc == 0x3FEAC8u) {
        ctx->pc = 0x3FEAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEAC4u;
        // 0x3feac8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FEACCu;
        goto label_3feacc;
    }
    ctx->pc = 0x3FEAC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FEAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEAC4u;
        // 0x3feac8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FEAC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3FEACCu;
label_3feacc:
    // 0x3feacc: 0x0  nop
    ctx->pc = 0x3feaccu;
    // NOP
    ctx->pc = 0x3fead0u;
}
