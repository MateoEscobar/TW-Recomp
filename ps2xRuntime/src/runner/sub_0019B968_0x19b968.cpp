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

// Function: sub_0019B968
// Address: 0x19b968 - 0x19ba70
void sub_0019B968_0x19b968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019B968_0x19b968");
#endif

    switch (ctx->pc) {
        case 0x19b968u: goto label_19b968;
        case 0x19b96cu: goto label_19b96c;
        case 0x19b970u: goto label_19b970;
        case 0x19b974u: goto label_19b974;
        case 0x19b978u: goto label_19b978;
        case 0x19b97cu: goto label_19b97c;
        case 0x19b980u: goto label_19b980;
        case 0x19b984u: goto label_19b984;
        case 0x19b988u: goto label_19b988;
        case 0x19b98cu: goto label_19b98c;
        case 0x19b990u: goto label_19b990;
        case 0x19b994u: goto label_19b994;
        case 0x19b998u: goto label_19b998;
        case 0x19b99cu: goto label_19b99c;
        case 0x19b9a0u: goto label_19b9a0;
        case 0x19b9a4u: goto label_19b9a4;
        case 0x19b9a8u: goto label_19b9a8;
        case 0x19b9acu: goto label_19b9ac;
        case 0x19b9b0u: goto label_19b9b0;
        case 0x19b9b4u: goto label_19b9b4;
        case 0x19b9b8u: goto label_19b9b8;
        case 0x19b9bcu: goto label_19b9bc;
        case 0x19b9c0u: goto label_19b9c0;
        case 0x19b9c4u: goto label_19b9c4;
        case 0x19b9c8u: goto label_19b9c8;
        case 0x19b9ccu: goto label_19b9cc;
        case 0x19b9d0u: goto label_19b9d0;
        case 0x19b9d4u: goto label_19b9d4;
        case 0x19b9d8u: goto label_19b9d8;
        case 0x19b9dcu: goto label_19b9dc;
        case 0x19b9e0u: goto label_19b9e0;
        case 0x19b9e4u: goto label_19b9e4;
        case 0x19b9e8u: goto label_19b9e8;
        case 0x19b9ecu: goto label_19b9ec;
        case 0x19b9f0u: goto label_19b9f0;
        case 0x19b9f4u: goto label_19b9f4;
        case 0x19b9f8u: goto label_19b9f8;
        case 0x19b9fcu: goto label_19b9fc;
        case 0x19ba00u: goto label_19ba00;
        case 0x19ba04u: goto label_19ba04;
        case 0x19ba08u: goto label_19ba08;
        case 0x19ba0cu: goto label_19ba0c;
        case 0x19ba10u: goto label_19ba10;
        case 0x19ba14u: goto label_19ba14;
        case 0x19ba18u: goto label_19ba18;
        case 0x19ba1cu: goto label_19ba1c;
        case 0x19ba20u: goto label_19ba20;
        case 0x19ba24u: goto label_19ba24;
        case 0x19ba28u: goto label_19ba28;
        case 0x19ba2cu: goto label_19ba2c;
        case 0x19ba30u: goto label_19ba30;
        case 0x19ba34u: goto label_19ba34;
        case 0x19ba38u: goto label_19ba38;
        case 0x19ba3cu: goto label_19ba3c;
        case 0x19ba40u: goto label_19ba40;
        case 0x19ba44u: goto label_19ba44;
        case 0x19ba48u: goto label_19ba48;
        case 0x19ba4cu: goto label_19ba4c;
        case 0x19ba50u: goto label_19ba50;
        case 0x19ba54u: goto label_19ba54;
        case 0x19ba58u: goto label_19ba58;
        case 0x19ba5cu: goto label_19ba5c;
        case 0x19ba60u: goto label_19ba60;
        case 0x19ba64u: goto label_19ba64;
        case 0x19ba68u: goto label_19ba68;
        case 0x19ba6cu: goto label_19ba6c;
        default: break;
    }

    ctx->pc = 0x19b968u;

label_19b968:
    // 0x19b968: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x19b968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_19b96c:
    // 0x19b96c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x19b96cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_19b970:
    // 0x19b970: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x19b970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_19b974:
    // 0x19b974: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19b974u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19b978:
    // 0x19b978: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x19b978u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_19b97c:
    // 0x19b97c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19b97cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_19b980:
    // 0x19b980: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x19b980u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_19b984:
    // 0x19b984: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19b984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19b988:
    // 0x19b988: 0xc047e6c  jal         func_11F9B0
label_19b98c:
    if (ctx->pc == 0x19B98Cu) {
        ctx->pc = 0x19B98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B988u;
        // 0x19b98c: 0xe7b40040  swc1        $f20, 0x40($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B990u;
        goto label_19b990;
    }
    ctx->pc = 0x19B988u;
    SET_GPR_U32(ctx, 31, 0x19B990u);
    ctx->pc = 0x19B98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B988u;
    // 0x19b98c: 0xe7b40040  swc1        $f20, 0x40($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x19B988u, 0x19B990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B990u;
label_19b990:
    // 0x19b990: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x19b990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19b994:
    // 0x19b994: 0x84640220  lh          $a0, 0x220($v1)
    ctx->pc = 0x19b994u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 544)));
label_19b998:
    // 0x19b998: 0x8c650224  lw          $a1, 0x224($v1)
    ctx->pc = 0x19b998u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 548)));
label_19b99c:
    // 0x19b99c: 0xa0f809  jalr        $a1
label_19b9a0:
    if (ctx->pc == 0x19B9A0u) {
        ctx->pc = 0x19B9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B99Cu;
        // 0x19b9a0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B9A4u;
        goto label_19b9a4;
    }
    ctx->pc = 0x19B99Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x19B9A4u);
        ctx->pc = 0x19B9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B99Cu;
        // 0x19b9a0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B99Cu, 0x19B9A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19B9A4u;
label_19b9a4:
    // 0x19b9a4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x19b9a4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_19b9a8:
    // 0x19b9a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19b9a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19b9ac:
    // 0x19b9ac: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x19b9acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_19b9b0:
    // 0x19b9b0: 0xc066daa  jal         func_19B6A8
label_19b9b4:
    if (ctx->pc == 0x19B9B4u) {
        ctx->pc = 0x19B9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B9B0u;
        // 0x19b9b4: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B9B8u;
        goto label_19b9b8;
    }
    ctx->pc = 0x19B9B0u;
    SET_GPR_U32(ctx, 31, 0x19B9B8u);
    ctx->pc = 0x19B9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B9B0u;
    // 0x19b9b4: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B6A8u, 0x19B9B0u, 0x19B9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B9B8u;
label_19b9b8:
    // 0x19b9b8: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x19b9b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
label_19b9bc:
    // 0x19b9bc: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x19b9bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
label_19b9c0:
    // 0x19b9c0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19b9c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19b9c4:
    // 0x19b9c4: 0x3c01c334  lui         $at, 0xC334
    ctx->pc = 0x19b9c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49972 << 16));
label_19b9c8:
    // 0x19b9c8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x19b9c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_19b9cc:
    // 0x19b9cc: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x19b9ccu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_19b9d0:
    // 0x19b9d0: 0x460d6034  c.lt.s      $f12, $f13
    ctx->pc = 0x19b9d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19b9d4:
    // 0x19b9d4: 0x0  nop
    ctx->pc = 0x19b9d4u;
    // NOP
label_19b9d8:
    // 0x19b9d8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_19b9dc:
    if (ctx->pc == 0x19B9DCu) {
        ctx->pc = 0x19B9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B9D8u;
        // 0x19b9dc: 0x46006b06  mov.s       $f12, $f13 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B9E0u;
        goto label_19b9e0;
    }
    ctx->pc = 0x19B9D8u;
    {
        const bool branch_taken_0x19b9d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19b9d8) {
            ctx->pc = 0x19B9DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19B9D8u;
            // 0x19b9dc: 0x46006b06  mov.s       $f12, $f13 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[13]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x19B9E0u;
            goto label_19b9e0;
        }
    }
    ctx->pc = 0x19B9E0u;
label_19b9e0:
    // 0x19b9e0: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x19b9e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
label_19b9e4:
    // 0x19b9e4: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x19b9e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_19b9e8:
    // 0x19b9e8: 0x0  nop
    ctx->pc = 0x19b9e8u;
    // NOP
label_19b9ec:
    // 0x19b9ec: 0x460c7034  c.lt.s      $f14, $f12
    ctx->pc = 0x19b9ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[14], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19b9f0:
    // 0x19b9f0: 0x0  nop
    ctx->pc = 0x19b9f0u;
    // NOP
label_19b9f4:
    // 0x19b9f4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_19b9f8:
    if (ctx->pc == 0x19B9F8u) {
        ctx->pc = 0x19B9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B9F4u;
        // 0x19b9f8: 0x46007306  mov.s       $f12, $f14 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[14]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B9FCu;
        goto label_19b9fc;
    }
    ctx->pc = 0x19B9F4u;
    {
        const bool branch_taken_0x19b9f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19b9f4) {
            ctx->pc = 0x19B9F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19B9F4u;
            // 0x19b9f8: 0x46007306  mov.s       $f12, $f14 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[14]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x19B9FCu;
            goto label_19b9fc;
        }
    }
    ctx->pc = 0x19B9FCu;
label_19b9fc:
    // 0x19b9fc: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x19b9fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_19ba00:
    // 0x19ba00: 0x3c013f7f  lui         $at, 0x3F7F
    ctx->pc = 0x19ba00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16255 << 16));
label_19ba04:
    // 0x19ba04: 0x3421f972  ori         $at, $at, 0xF972
    ctx->pc = 0x19ba04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63858);
label_19ba08:
    // 0x19ba08: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x19ba08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_19ba0c:
    // 0x19ba0c: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x19ba0cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
label_19ba10:
    // 0x19ba10: 0xc0cdd5a  jal         func_337568
label_19ba14:
    if (ctx->pc == 0x19BA14u) {
        ctx->pc = 0x19BA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BA10u;
        // 0x19ba14: 0x4600ac06  mov.s       $f16, $f21 (Delay Slot)
        ctx->f[16] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BA18u;
        goto label_19ba18;
    }
    ctx->pc = 0x19BA10u;
    SET_GPR_U32(ctx, 31, 0x19BA18u);
    ctx->pc = 0x19BA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BA10u;
    // 0x19ba14: 0x4600ac06  mov.s       $f16, $f21 (Delay Slot)
    ctx->f[16] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x337568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337568u, 0x19BA10u, 0x19BA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BA18u;
label_19ba18:
    // 0x19ba18: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x19ba18u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_19ba1c:
    // 0x19ba1c: 0x46146034  c.lt.s      $f12, $f20
    ctx->pc = 0x19ba1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19ba20:
    // 0x19ba20: 0x0  nop
    ctx->pc = 0x19ba20u;
    // NOP
label_19ba24:
    // 0x19ba24: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_19ba28:
    if (ctx->pc == 0x19BA28u) {
        ctx->pc = 0x19BA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BA24u;
        // 0x19ba28: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BA2Cu;
        goto label_19ba2c;
    }
    ctx->pc = 0x19BA24u;
    {
        const bool branch_taken_0x19ba24 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19ba24) {
            ctx->pc = 0x19BA28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19BA24u;
            // 0x19ba28: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x19BA2Cu;
            goto label_19ba2c;
        }
    }
    ctx->pc = 0x19BA2Cu;
label_19ba2c:
    // 0x19ba2c: 0x460ca834  c.lt.s      $f21, $f12
    ctx->pc = 0x19ba2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19ba30:
    // 0x19ba30: 0x0  nop
    ctx->pc = 0x19ba30u;
    // NOP
label_19ba34:
    // 0x19ba34: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_19ba38:
    if (ctx->pc == 0x19BA38u) {
        ctx->pc = 0x19BA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BA34u;
        // 0x19ba38: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BA3Cu;
        goto label_19ba3c;
    }
    ctx->pc = 0x19BA34u;
    {
        const bool branch_taken_0x19ba34 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19ba34) {
            ctx->pc = 0x19BA38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19BA34u;
            // 0x19ba38: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x19BA3Cu;
            goto label_19ba3c;
        }
    }
    ctx->pc = 0x19BA3Cu;
label_19ba3c:
    // 0x19ba3c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x19ba3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_19ba40:
    // 0x19ba40: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x19ba40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_19ba44:
    // 0x19ba44: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x19ba44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_19ba48:
    // 0x19ba48: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x19ba48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_19ba4c:
    // 0x19ba4c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x19ba4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19ba50:
    // 0x19ba50: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x19ba50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_19ba54:
    // 0x19ba54: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x19ba54u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
label_19ba58:
    // 0x19ba58: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19ba58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19ba5c:
    // 0x19ba5c: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x19ba5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_19ba60:
    // 0x19ba60: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x19ba60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_19ba64:
    // 0x19ba64: 0xe46c0000  swc1        $f12, 0x0($v1)
    ctx->pc = 0x19ba64u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_19ba68:
    // 0x19ba68: 0x3e00008  jr          $ra
label_19ba6c:
    if (ctx->pc == 0x19BA6Cu) {
        ctx->pc = 0x19BA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BA68u;
        // 0x19ba6c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BA70u;
        goto label_fallthrough_0x19ba68;
    }
    ctx->pc = 0x19BA68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19BA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BA68u;
        // 0x19ba6c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19BA68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x19ba68:
    ctx->pc = 0x19BA70u;
}
