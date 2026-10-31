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

// Function: sub_00177EB8
// Address: 0x177eb8 - 0x177fa8
void sub_00177EB8_0x177eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00177EB8_0x177eb8");
#endif

    switch (ctx->pc) {
        case 0x177eb8u: goto label_177eb8;
        case 0x177ebcu: goto label_177ebc;
        case 0x177ec0u: goto label_177ec0;
        case 0x177ec4u: goto label_177ec4;
        case 0x177ec8u: goto label_177ec8;
        case 0x177eccu: goto label_177ecc;
        case 0x177ed0u: goto label_177ed0;
        case 0x177ed4u: goto label_177ed4;
        case 0x177ed8u: goto label_177ed8;
        case 0x177edcu: goto label_177edc;
        case 0x177ee0u: goto label_177ee0;
        case 0x177ee4u: goto label_177ee4;
        case 0x177ee8u: goto label_177ee8;
        case 0x177eecu: goto label_177eec;
        case 0x177ef0u: goto label_177ef0;
        case 0x177ef4u: goto label_177ef4;
        case 0x177ef8u: goto label_177ef8;
        case 0x177efcu: goto label_177efc;
        case 0x177f00u: goto label_177f00;
        case 0x177f04u: goto label_177f04;
        case 0x177f08u: goto label_177f08;
        case 0x177f0cu: goto label_177f0c;
        case 0x177f10u: goto label_177f10;
        case 0x177f14u: goto label_177f14;
        case 0x177f18u: goto label_177f18;
        case 0x177f1cu: goto label_177f1c;
        case 0x177f20u: goto label_177f20;
        case 0x177f24u: goto label_177f24;
        case 0x177f28u: goto label_177f28;
        case 0x177f2cu: goto label_177f2c;
        case 0x177f30u: goto label_177f30;
        case 0x177f34u: goto label_177f34;
        case 0x177f38u: goto label_177f38;
        case 0x177f3cu: goto label_177f3c;
        case 0x177f40u: goto label_177f40;
        case 0x177f44u: goto label_177f44;
        case 0x177f48u: goto label_177f48;
        case 0x177f4cu: goto label_177f4c;
        case 0x177f50u: goto label_177f50;
        case 0x177f54u: goto label_177f54;
        case 0x177f58u: goto label_177f58;
        case 0x177f5cu: goto label_177f5c;
        case 0x177f60u: goto label_177f60;
        case 0x177f64u: goto label_177f64;
        case 0x177f68u: goto label_177f68;
        case 0x177f6cu: goto label_177f6c;
        case 0x177f70u: goto label_177f70;
        case 0x177f74u: goto label_177f74;
        case 0x177f78u: goto label_177f78;
        case 0x177f7cu: goto label_177f7c;
        case 0x177f80u: goto label_177f80;
        case 0x177f84u: goto label_177f84;
        case 0x177f88u: goto label_177f88;
        case 0x177f8cu: goto label_177f8c;
        case 0x177f90u: goto label_177f90;
        case 0x177f94u: goto label_177f94;
        case 0x177f98u: goto label_177f98;
        case 0x177f9cu: goto label_177f9c;
        case 0x177fa0u: goto label_177fa0;
        case 0x177fa4u: goto label_177fa4;
        default: break;
    }

    ctx->pc = 0x177eb8u;

label_177eb8:
    // 0x177eb8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x177eb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_177ebc:
    // 0x177ebc: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x177ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_177ec0:
    // 0x177ec0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x177ec0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_177ec4:
    // 0x177ec4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x177ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_177ec8:
    // 0x177ec8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x177ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_177ecc:
    // 0x177ecc: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x177eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_177ed0:
    // 0x177ed0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x177ed0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_177ed4:
    // 0x177ed4: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x177ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_177ed8:
    // 0x177ed8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x177ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_177edc:
    // 0x177edc: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x177edcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_177ee0:
    // 0x177ee0: 0xc05d45e  jal         func_175178
label_177ee4:
    if (ctx->pc == 0x177EE4u) {
        ctx->pc = 0x177EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177EE0u;
        // 0x177ee4: 0xe7b40060  swc1        $f20, 0x60($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x177EE8u;
        goto label_177ee8;
    }
    ctx->pc = 0x177EE0u;
    SET_GPR_U32(ctx, 31, 0x177EE8u);
    ctx->pc = 0x177EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177EE0u;
    // 0x177ee4: 0xe7b40060  swc1        $f20, 0x60($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x175178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175178u, 0x177EE0u, 0x177EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177EE8u;
label_177ee8:
    // 0x177ee8: 0x2452ffff  addiu       $s2, $v0, -0x1
    ctx->pc = 0x177ee8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_177eec:
    // 0x177eec: 0x6400022  bltz        $s2, . + 4 + (0x22 << 2)
label_177ef0:
    if (ctx->pc == 0x177EF0u) {
        ctx->pc = 0x177EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177EECu;
        // 0x177ef0: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177EF4u;
        goto label_177ef4;
    }
    ctx->pc = 0x177EECu;
    {
        const bool branch_taken_0x177eec = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x177EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177EECu;
        // 0x177ef0: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177eec) {
            ctx->pc = 0x177F78u;
            goto label_177f78;
        }
    }
    ctx->pc = 0x177EF4u;
label_177ef4:
    // 0x177ef4: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x177ef4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_177ef8:
    // 0x177ef8: 0x244202bc  addiu       $v0, $v0, 0x2BC
    ctx->pc = 0x177ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 700));
label_177efc:
    // 0x177efc: 0x24140009  addiu       $s4, $zero, 0x9
    ctx->pc = 0x177efcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_177f00:
    // 0x177f00: 0x508821  addu        $s1, $v0, $s0
    ctx->pc = 0x177f00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_177f04:
    // 0x177f04: 0x0  nop
    ctx->pc = 0x177f04u;
    // NOP
label_177f08:
    // 0x177f08: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x177f08u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_177f0c:
    // 0x177f0c: 0x52000018  beql        $s0, $zero, . + 4 + (0x18 << 2)
label_177f10:
    if (ctx->pc == 0x177F10u) {
        ctx->pc = 0x177F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177F0Cu;
        // 0x177f10: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177F14u;
        goto label_177f14;
    }
    ctx->pc = 0x177F0Cu;
    {
        const bool branch_taken_0x177f0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x177f0c) {
            ctx->pc = 0x177F10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x177F0Cu;
            // 0x177f10: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x177F70u;
            goto label_177f70;
        }
    }
    ctx->pc = 0x177F14u;
label_177f14:
    // 0x177f14: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x177f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_177f18:
    // 0x177f18: 0x54540015  bnel        $v0, $s4, . + 4 + (0x15 << 2)
label_177f1c:
    if (ctx->pc == 0x177F1Cu) {
        ctx->pc = 0x177F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177F18u;
        // 0x177f1c: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177F20u;
        goto label_177f20;
    }
    ctx->pc = 0x177F18u;
    {
        const bool branch_taken_0x177f18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x177f18) {
            ctx->pc = 0x177F1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x177F18u;
            // 0x177f1c: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x177F70u;
            goto label_177f70;
        }
    }
    ctx->pc = 0x177F20u;
label_177f20:
    // 0x177f20: 0x52600012  beql        $s3, $zero, . + 4 + (0x12 << 2)
label_177f24:
    if (ctx->pc == 0x177F24u) {
        ctx->pc = 0x177F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177F20u;
        // 0x177f24: 0x8e330000  lw          $s3, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177F28u;
        goto label_177f28;
    }
    ctx->pc = 0x177F20u;
    {
        const bool branch_taken_0x177f20 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x177f20) {
            ctx->pc = 0x177F24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x177F20u;
            // 0x177f24: 0x8e330000  lw          $s3, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x177F6Cu;
            goto label_177f6c;
        }
    }
    ctx->pc = 0x177F28u;
label_177f28:
    // 0x177f28: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x177f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_177f2c:
    // 0x177f2c: 0x844400d0  lh          $a0, 0xD0($v0)
    ctx->pc = 0x177f2cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 208)));
label_177f30:
    // 0x177f30: 0x8c4300d4  lw          $v1, 0xD4($v0)
    ctx->pc = 0x177f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
label_177f34:
    // 0x177f34: 0x60f809  jalr        $v1
label_177f38:
    if (ctx->pc == 0x177F38u) {
        ctx->pc = 0x177F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177F34u;
        // 0x177f38: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177F3Cu;
        goto label_177f3c;
    }
    ctx->pc = 0x177F34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x177F3Cu);
        ctx->pc = 0x177F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177F34u;
        // 0x177f38: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177F34u, 0x177F3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x177F3Cu;
label_177f3c:
    // 0x177f3c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x177f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_177f40:
    // 0x177f40: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x177f40u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_177f44:
    // 0x177f44: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x177f44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_177f48:
    // 0x177f48: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x177f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_177f4c:
    // 0x177f4c: 0x60f809  jalr        $v1
label_177f50:
    if (ctx->pc == 0x177F50u) {
        ctx->pc = 0x177F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177F4Cu;
        // 0x177f50: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177F54u;
        goto label_177f54;
    }
    ctx->pc = 0x177F4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x177F54u);
        ctx->pc = 0x177F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177F4Cu;
        // 0x177f50: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177F4Cu, 0x177F54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x177F54u;
label_177f54:
    // 0x177f54: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x177f54u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_177f58:
    // 0x177f58: 0x4614a834  c.lt.s      $f21, $f20
    ctx->pc = 0x177f58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_177f5c:
    // 0x177f5c: 0x0  nop
    ctx->pc = 0x177f5cu;
    // NOP
label_177f60:
    // 0x177f60: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_177f64:
    if (ctx->pc == 0x177F64u) {
        ctx->pc = 0x177F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177F60u;
        // 0x177f64: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177F68u;
        goto label_177f68;
    }
    ctx->pc = 0x177F60u;
    {
        const bool branch_taken_0x177f60 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x177f60) {
            ctx->pc = 0x177F64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x177F60u;
            // 0x177f64: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x177F70u;
            goto label_177f70;
        }
    }
    ctx->pc = 0x177F68u;
label_177f68:
    // 0x177f68: 0x8e330000  lw          $s3, 0x0($s1)
    ctx->pc = 0x177f68u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_177f6c:
    // 0x177f6c: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x177f6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_177f70:
    // 0x177f70: 0x641ffe5  bgez        $s2, . + 4 + (-0x1B << 2)
label_177f74:
    if (ctx->pc == 0x177F74u) {
        ctx->pc = 0x177F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177F70u;
        // 0x177f74: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177F78u;
        goto label_177f78;
    }
    ctx->pc = 0x177F70u;
    {
        const bool branch_taken_0x177f70 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x177F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177F70u;
        // 0x177f74: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177f70) {
            ctx->pc = 0x177F08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_177f08;
        }
    }
    ctx->pc = 0x177F78u;
label_177f78:
    // 0x177f78: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x177f78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_177f7c:
    // 0x177f7c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x177f7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_177f80:
    // 0x177f80: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x177f80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_177f84:
    // 0x177f84: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x177f84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_177f88:
    // 0x177f88: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x177f88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_177f8c:
    // 0x177f8c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x177f8cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_177f90:
    // 0x177f90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x177f90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_177f94:
    // 0x177f94: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x177f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_177f98:
    // 0x177f98: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x177f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_177f9c:
    // 0x177f9c: 0x3e00008  jr          $ra
label_177fa0:
    if (ctx->pc == 0x177FA0u) {
        ctx->pc = 0x177FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177F9Cu;
        // 0x177fa0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177FA4u;
        goto label_177fa4;
    }
    ctx->pc = 0x177F9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177F9Cu;
        // 0x177fa0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177F9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177FA4u;
label_177fa4:
    // 0x177fa4: 0x0  nop
    ctx->pc = 0x177fa4u;
    // NOP
    ctx->pc = 0x177fa8u;
}
