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

// Function: sub_00250760
// Address: 0x250760 - 0x2508b8
void sub_00250760_0x250760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00250760_0x250760");
#endif

    switch (ctx->pc) {
        case 0x2507dcu: goto label_2507dc;
        case 0x2507f8u: goto label_2507f8;
        default: break;
    }

    ctx->pc = 0x250760u;

    // 0x250760: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x250760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x250764: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x250764u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x250768: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x250768u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x25076c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x25076cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x250770: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x250770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x250774: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x250774u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x250778: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x250778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x25077c: 0x3c090051  lui         $t1, 0x51
    ctx->pc = 0x25077cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)81 << 16));
    // 0x250780: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x250780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x250784: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x250784u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250788: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x250788u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x25078c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x25078cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x250790: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x250790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x250794: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x250794u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x250798: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x250798u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25079c: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x25079cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x2507a0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2507a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2507a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2507a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2507a8: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x2507a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x2507ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2507acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2507b0: 0x8c6447c4  lw          $a0, 0x47C4($v1)
    ctx->pc = 0x2507b0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5147C4u));
    // 0x2507b4: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x2507b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2507b8: 0x8d300588  lw          $s0, 0x588($t1)
    ctx->pc = 0x2507b8u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x510588u));
    // 0x2507bc: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2507bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2507c0: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x2507c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2507c4: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x2507c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2507c8: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x2507c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x2507cc: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x2507ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2507d0: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x2507d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x2507d4: 0xc1036e2  jal         func_40DB88
    ctx->pc = 0x2507D4u;
    SET_GPR_U32(ctx, 31, 0x2507DCu);
    ctx->pc = 0x2507D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2507D4u;
    // 0x2507d8: 0xafa00034  sw          $zero, 0x34($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB88u, 0x2507D4u, 0x2507DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2507DCu;
label_2507dc:
    // 0x2507dc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2507dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2507e0: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x2507E0u;
    {
        const bool branch_taken_0x2507e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2507E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2507E0u;
        // 0x2507e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2507e0) {
            ctx->pc = 0x2508A0u;
            goto label_2508a0;
        }
    }
    ctx->pc = 0x2507E8u;
    // 0x2507e8: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x2507E8u;
    {
        const bool branch_taken_0x2507e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2507ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2507E8u;
        // 0x2507ec: 0x93a3002e  lbu         $v1, 0x2E($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 46)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2507e8) {
            ctx->pc = 0x2508A0u;
            goto label_2508a0;
        }
    }
    ctx->pc = 0x2507F0u;
    // 0x2507f0: 0x8602004a  lh          $v0, 0x4A($s0)
    ctx->pc = 0x2507f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 74)));
    // 0x2507f4: 0x0  nop
    ctx->pc = 0x2507f4u;
    // NOP
label_2507f8:
    // 0x2507f8: 0x54430026  bnel        $v0, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x2507F8u;
    {
        const bool branch_taken_0x2507f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2507f8) {
            ctx->pc = 0x2507FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2507F8u;
            // 0x2507fc: 0x8e100024  lw          $s0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x250894u;
            goto label_250894;
        }
    }
    ctx->pc = 0x250800u;
    // 0x250800: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x250800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x250804: 0x3c013eb3  lui         $at, 0x3EB3
    ctx->pc = 0x250804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16051 << 16));
    // 0x250808: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x250808u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x25080c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x25080cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x250810: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x250810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x250814: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x250814u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x250818: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x250818u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25081c: 0x0  nop
    ctx->pc = 0x25081cu;
    // NOP
    // 0x250820: 0x4502001c  bc1fl       . + 4 + (0x1C << 2)
    ctx->pc = 0x250820u;
    {
        const bool branch_taken_0x250820 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x250820) {
            ctx->pc = 0x250824u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x250820u;
            // 0x250824: 0x8e100024  lw          $s0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x250894u;
            goto label_250894;
        }
    }
    ctx->pc = 0x250828u;
    // 0x250828: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x250828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25082c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x25082cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x250830: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x250830u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x250834: 0x0  nop
    ctx->pc = 0x250834u;
    // NOP
    // 0x250838: 0x45020016  bc1fl       . + 4 + (0x16 << 2)
    ctx->pc = 0x250838u;
    {
        const bool branch_taken_0x250838 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x250838) {
            ctx->pc = 0x25083Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x250838u;
            // 0x25083c: 0x8e100024  lw          $s0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x250894u;
            goto label_250894;
        }
    }
    ctx->pc = 0x250840u;
    // 0x250840: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x250840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x250844: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x250844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x250848: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x250848u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x25084c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x25084cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x250850: 0x0  nop
    ctx->pc = 0x250850u;
    // NOP
    // 0x250854: 0x4502000f  bc1fl       . + 4 + (0xF << 2)
    ctx->pc = 0x250854u;
    {
        const bool branch_taken_0x250854 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x250854) {
            ctx->pc = 0x250858u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x250854u;
            // 0x250858: 0x8e100024  lw          $s0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x250894u;
            goto label_250894;
        }
    }
    ctx->pc = 0x25085Cu;
    // 0x25085c: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x25085cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x250860: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x250860u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x250864: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x250864u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x250868: 0x0  nop
    ctx->pc = 0x250868u;
    // NOP
    // 0x25086c: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x25086Cu;
    {
        const bool branch_taken_0x25086c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25086c) {
            ctx->pc = 0x250870u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25086Cu;
            // 0x250870: 0x8e100024  lw          $s0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x250894u;
            goto label_250894;
        }
    }
    ctx->pc = 0x250874u;
    // 0x250874: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x250874u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x250878: 0x58400006  blezl       $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x250878u;
    {
        const bool branch_taken_0x250878 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x250878) {
            ctx->pc = 0x25087Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x250878u;
            // 0x25087c: 0x8e100024  lw          $s0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x250894u;
            goto label_250894;
        }
    }
    ctx->pc = 0x250880u;
    // 0x250880: 0x96020048  lhu         $v0, 0x48($s0)
    ctx->pc = 0x250880u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x250884: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x250884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x250888: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x250888u;
    {
        const bool branch_taken_0x250888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25088Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250888u;
        // 0x25088c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250888) {
            ctx->pc = 0x2508A0u;
            goto label_2508a0;
        }
    }
    ctx->pc = 0x250890u;
    // 0x250890: 0x8e100024  lw          $s0, 0x24($s0)
    ctx->pc = 0x250890u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_250894:
    // 0x250894: 0x5600ffd8  bnel        $s0, $zero, . + 4 + (-0x28 << 2)
    ctx->pc = 0x250894u;
    {
        const bool branch_taken_0x250894 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x250894) {
            ctx->pc = 0x250898u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x250894u;
            // 0x250898: 0x8602004a  lh          $v0, 0x4A($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 74)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2507F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2507f8;
        }
    }
    ctx->pc = 0x25089Cu;
    // 0x25089c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25089cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2508a0:
    // 0x2508a0: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x2508a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2508a4: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x2508a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2508a8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2508a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2508ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2508ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2508B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2508ACu;
        // 0x2508b0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2508ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2508B4u;
    // 0x2508b4: 0x0  nop
    ctx->pc = 0x2508b4u;
    // NOP
    ctx->pc = 0x2508b8u;
}
