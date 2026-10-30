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

// Function: sub_00172D60
// Address: 0x172d60 - 0x172f00
void sub_00172D60_0x172d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00172D60_0x172d60");
#endif

    switch (ctx->pc) {
        case 0x172d80u: goto label_172d80;
        case 0x172db8u: goto label_172db8;
        case 0x172dc8u: goto label_172dc8;
        case 0x172dd4u: goto label_172dd4;
        case 0x172eccu: goto label_172ecc;
        case 0x172ed8u: goto label_172ed8;
        default: break;
    }

    ctx->pc = 0x172d60u;

    // 0x172d60: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x172d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x172d64: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x172d64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x172d68: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x172d68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172d6c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x172d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x172d70: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x172d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x172d74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x172d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x172d78: 0xc11a45e  jal         func_469178
    ctx->pc = 0x172D78u;
    SET_GPR_U32(ctx, 31, 0x172D80u);
    ctx->pc = 0x172D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172D78u;
    // 0x172d7c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x469178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469178u, 0x172D78u, 0x172D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172D80u;
label_172d80:
    // 0x172d80: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x172d80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x172d84: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x172d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172d88: 0x8c6447c4  lw          $a0, 0x47C4($v1)
    ctx->pc = 0x172d88u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5147C4u));
    // 0x172d8c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x172d8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172d90: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x172d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x172d94: 0x8c640028  lw          $a0, 0x28($v1)
    ctx->pc = 0x172d94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x172d98: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x172d98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x172d9c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x172d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172da0: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x172da0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x172da4: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x172da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172da8: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x172da8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x172dac: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x172dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172db0: 0xc05e9a0  jal         func_17A680
    ctx->pc = 0x172DB0u;
    SET_GPR_U32(ctx, 31, 0x172DB8u);
    ctx->pc = 0x172DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172DB0u;
    // 0x172db4: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A680u, 0x172DB0u, 0x172DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172DB8u;
label_172db8:
    // 0x172db8: 0x1052004b  beq         $v0, $s2, . + 4 + (0x4B << 2)
    ctx->pc = 0x172DB8u;
    {
        const bool branch_taken_0x172db8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x172DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172DB8u;
        // 0x172dbc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172db8) {
            ctx->pc = 0x172EE8u;
            goto label_172ee8;
        }
    }
    ctx->pc = 0x172DC0u;
    // 0x172dc0: 0xc064a1c  jal         func_192870
    ctx->pc = 0x172DC0u;
    SET_GPR_U32(ctx, 31, 0x172DC8u);
    ctx->pc = 0x172DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172DC0u;
    // 0x172dc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192870u, 0x172DC0u, 0x172DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172DC8u;
label_172dc8:
    // 0x172dc8: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x172dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x172dcc: 0xc118a7a  jal         func_4629E8
    ctx->pc = 0x172DCCu;
    SET_GPR_U32(ctx, 31, 0x172DD4u);
    ctx->pc = 0x172DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172DCCu;
    // 0x172dd0: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4629E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4629E8u, 0x172DCCu, 0x172DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172DD4u;
label_172dd4:
    // 0x172dd4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x172dd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172dd8: 0x2e02001a  sltiu       $v0, $s0, 0x1A
    ctx->pc = 0x172dd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x172ddc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x172DDCu;
    {
        const bool branch_taken_0x172ddc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x172DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172DDCu;
        // 0x172de0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172ddc) {
            ctx->pc = 0x172DECu;
            goto label_172dec;
        }
    }
    ctx->pc = 0x172DE4u;
    // 0x172de4: 0x2610ffe7  addiu       $s0, $s0, -0x19
    ctx->pc = 0x172de4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967271));
    // 0x172de8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x172de8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_172dec:
    // 0x172dec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x172decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x172df0: 0x2122004  sllv        $a0, $s2, $s0
    ctx->pc = 0x172df0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 16) & 0x1F));
    // 0x172df4: 0x8c45003c  lw          $a1, 0x3C($v0)
    ctx->pc = 0x172df4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x172df8: 0x8ca311f0  lw          $v1, 0x11F0($a1)
    ctx->pc = 0x172df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4592)));
    // 0x172dfc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x172dfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x172e00: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x172E00u;
    {
        const bool branch_taken_0x172e00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x172E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172E00u;
        // 0x172e04: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172e00) {
            ctx->pc = 0x172E7Cu;
            goto label_172e7c;
        }
    }
    ctx->pc = 0x172E08u;
    // 0x172e08: 0x240200a0  addiu       $v0, $zero, 0xA0
    ctx->pc = 0x172e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x172e0c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x172e0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x172e10: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x172e10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x172e14: 0x2021818  mult        $v1, $s0, $v0
    ctx->pc = 0x172e14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x172e18: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x172e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x172e1c: 0xc4400230  lwc1        $f0, 0x230($v0)
    ctx->pc = 0x172e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172e20: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x172e20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x172e24: 0x0  nop
    ctx->pc = 0x172e24u;
    // NOP
    // 0x172e28: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x172E28u;
    {
        const bool branch_taken_0x172e28 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x172E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172E28u;
        // 0x172e2c: 0x240200a0  addiu       $v0, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172e28) {
            ctx->pc = 0x172E3Cu;
            goto label_172e3c;
        }
    }
    ctx->pc = 0x172E30u;
    // 0x172e30: 0x14c0002d  bnez        $a2, . + 4 + (0x2D << 2)
    ctx->pc = 0x172E30u;
    {
        const bool branch_taken_0x172e30 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x172E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172E30u;
        // 0x172e34: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172e30) {
            ctx->pc = 0x172EE8u;
            goto label_172ee8;
        }
    }
    ctx->pc = 0x172E38u;
    // 0x172e38: 0x240200a0  addiu       $v0, $zero, 0xA0
    ctx->pc = 0x172e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_172e3c:
    // 0x172e3c: 0x8ce3003c  lw          $v1, 0x3C($a3)
    ctx->pc = 0x172e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x172e40: 0x2021018  mult        $v0, $s0, $v0
    ctx->pc = 0x172e40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x172e44: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x172e44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x172e48: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x172e48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x172e4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x172e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x172e50: 0xc4400230  lwc1        $f0, 0x230($v0)
    ctx->pc = 0x172e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172e54: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x172e54u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x172e58: 0x0  nop
    ctx->pc = 0x172e58u;
    // NOP
    // 0x172e5c: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x172E5Cu;
    {
        const bool branch_taken_0x172e5c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x172E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172E5Cu;
        // 0x172e60: 0x8fa70010  lw          $a3, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172e5c) {
            ctx->pc = 0x172E84u;
            goto label_172e84;
        }
    }
    ctx->pc = 0x172E64u;
    // 0x172e64: 0x14c00007  bnez        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x172E64u;
    {
        const bool branch_taken_0x172e64 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x172e64) {
            ctx->pc = 0x172E84u;
            goto label_172e84;
        }
    }
    ctx->pc = 0x172E6Cu;
    // 0x172e6c: 0x2602ffea  addiu       $v0, $s0, -0x16
    ctx->pc = 0x172e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967274));
    // 0x172e70: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x172e70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x172e74: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x172E74u;
    {
        const bool branch_taken_0x172e74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x172e74) {
            ctx->pc = 0x172E78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x172E74u;
            // 0x172e78: 0x90e20040  lbu         $v0, 0x40($a3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x172E88u;
            goto label_172e88;
        }
    }
    ctx->pc = 0x172E7Cu;
label_172e7c:
    // 0x172e7c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x172E7Cu;
    {
        const bool branch_taken_0x172e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172E7Cu;
        // 0x172e80: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172e7c) {
            ctx->pc = 0x172EE8u;
            goto label_172ee8;
        }
    }
    ctx->pc = 0x172E84u;
label_172e84:
    // 0x172e84: 0x90e20040  lbu         $v0, 0x40($a3)
    ctx->pc = 0x172e84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 64)));
label_172e88:
    // 0x172e88: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x172E88u;
    {
        const bool branch_taken_0x172e88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x172E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172E88u;
        // 0x172e8c: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172e88) {
            ctx->pc = 0x172ED0u;
            goto label_172ed0;
        }
    }
    ctx->pc = 0x172E90u;
    // 0x172e90: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x172e90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x172e94: 0x8c43cd4c  lw          $v1, -0x32B4($v0)
    ctx->pc = 0x172e94u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50CD4Cu));
    // 0x172e98: 0x24640c94  addiu       $a0, $v1, 0xC94
    ctx->pc = 0x172e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 3220));
    // 0x172e9c: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x172e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x172ea0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x172ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x172ea4: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x172EA4u;
    {
        const bool branch_taken_0x172ea4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x172EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172EA4u;
        // 0x172ea8: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172ea4) {
            ctx->pc = 0x172EC4u;
            goto label_172ec4;
        }
    }
    ctx->pc = 0x172EACu;
    // 0x172eac: 0x54a00001  bnel        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x172EACu;
    {
        const bool branch_taken_0x172eac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x172eac) {
            ctx->pc = 0x172EB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x172EACu;
            // 0x172eb0: 0xaca70000  sw          $a3, 0x0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x172EB4u;
            goto label_172eb4;
        }
    }
    ctx->pc = 0x172EB4u;
label_172eb4:
    // 0x172eb4: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x172eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x172eb8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x172eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x172ebc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x172EBCu;
    {
        const bool branch_taken_0x172ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172EBCu;
        // 0x172ec0: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172ebc) {
            ctx->pc = 0x172ECCu;
            goto label_172ecc;
        }
    }
    ctx->pc = 0x172EC4u;
label_172ec4:
    // 0x172ec4: 0xc1379b2  jal         func_4DE6C8
    ctx->pc = 0x172EC4u;
    SET_GPR_U32(ctx, 31, 0x172ECCu);
    ctx->pc = 0x4DE6C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE6C8u, 0x172EC4u, 0x172ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172ECCu;
label_172ecc:
    // 0x172ecc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x172eccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_172ed0:
    // 0x172ed0: 0xc05cbc0  jal         func_172F00
    ctx->pc = 0x172ED0u;
    SET_GPR_U32(ctx, 31, 0x172ED8u);
    ctx->pc = 0x172ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172ED0u;
    // 0x172ed4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x172F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172F00u, 0x172ED0u, 0x172ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172ED8u;
label_172ed8:
    // 0x172ed8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x172ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x172edc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x172edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x172ee0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x172ee0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172ee4: 0xa0830040  sb          $v1, 0x40($a0)
    ctx->pc = 0x172ee4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 64), (uint8_t)GPR_U32(ctx, 3));
label_172ee8:
    // 0x172ee8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x172ee8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x172eec: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x172eecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x172ef0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x172ef0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x172ef4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x172ef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x172ef8: 0x3e00008  jr          $ra
    ctx->pc = 0x172EF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172EF8u;
        // 0x172efc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172EF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x172F00u;
}
