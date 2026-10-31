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

// Function: sub_002759C0
// Address: 0x2759c0 - 0x275d10
void sub_002759C0_0x2759c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002759C0_0x2759c0");
#endif

    switch (ctx->pc) {
        case 0x275a28u: goto label_275a28;
        case 0x275b1cu: goto label_275b1c;
        case 0x275b28u: goto label_275b28;
        case 0x275b74u: goto label_275b74;
        case 0x275b80u: goto label_275b80;
        case 0x275c18u: goto label_275c18;
        case 0x275c28u: goto label_275c28;
        case 0x275c3cu: goto label_275c3c;
        case 0x275c44u: goto label_275c44;
        case 0x275c5cu: goto label_275c5c;
        case 0x275c94u: goto label_275c94;
        case 0x275ca0u: goto label_275ca0;
        case 0x275cb0u: goto label_275cb0;
        case 0x275cc4u: goto label_275cc4;
        case 0x275cd4u: goto label_275cd4;
        case 0x275ce4u: goto label_275ce4;
        default: break;
    }

    ctx->pc = 0x2759c0u;

    // 0x2759c0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x2759c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x2759c4: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2759c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x2759c8: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x2759c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x2759cc: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x2759ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x2759d0: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x2759d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x2759d4: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x2759d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2759d8: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x2759d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x2759dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2759dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2759e0: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x2759e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
    // 0x2759e4: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2759e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2759e8: 0xe7b70118  swc1        $f23, 0x118($sp)
    ctx->pc = 0x2759e8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x2759ec: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2759ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2759f0: 0xe7b60110  swc1        $f22, 0x110($sp)
    ctx->pc = 0x2759f0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x2759f4: 0x460065c6  mov.s       $f23, $f12
    ctx->pc = 0x2759f4u;
    ctx->f[23] = FPU_MOV_S(ctx->f[12]);
    // 0x2759f8: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x2759f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x2759fc: 0xe7b50108  swc1        $f21, 0x108($sp)
    ctx->pc = 0x2759fcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x275a00: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x275a00u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x275a04: 0x86230092  lh          $v1, 0x92($s1)
    ctx->pc = 0x275a04u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
    // 0x275a08: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x275a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x275a0c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x275a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x275a10: 0xc4cd0004  lwc1        $f13, 0x4($a2)
    ctx->pc = 0x275a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x275a14: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x275a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x275a18: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x275a18u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    // 0x275a1c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x275a1cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x275a20: 0xc0cd5ea  jal         func_3357A8
    ctx->pc = 0x275A20u;
    SET_GPR_U32(ctx, 31, 0x275A28u);
    ctx->pc = 0x275A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275A20u;
    // 0x275a24: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3357A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3357A8u, 0x275A20u, 0x275A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275A28u;
label_275a28:
    // 0x275a28: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x275A28u;
    {
        const bool branch_taken_0x275a28 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x275A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275A28u;
        // 0x275a2c: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x275a28) {
            ctx->pc = 0x275A50u;
            goto label_275a50;
        }
    }
    ctx->pc = 0x275A30u;
    // 0x275a30: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x275a30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x275a34: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x275a34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x275a38: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x275a38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x275a3c: 0x0  nop
    ctx->pc = 0x275a3cu;
    // NOP
    // 0x275a40: 0x4600b580  add.s       $f22, $f22, $f0
    ctx->pc = 0x275a40u;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
    // 0x275a44: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x275a44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x275a48: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x275A48u;
    {
        const bool branch_taken_0x275a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x275a48) {
            ctx->pc = 0x275AA4u;
            goto label_275aa4;
        }
    }
    ctx->pc = 0x275A50u;
label_275a50:
    // 0x275a50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x275a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x275a54: 0x16020009  bne         $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x275A54u;
    {
        const bool branch_taken_0x275a54 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x275A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275A54u;
        // 0x275a58: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275a54) {
            ctx->pc = 0x275A7Cu;
            goto label_275a7c;
        }
    }
    ctx->pc = 0x275A5Cu;
    // 0x275a5c: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x275a5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x275a60: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x275a60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x275a64: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x275a64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x275a68: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x275a68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x275a6c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x275a6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x275a70: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x275a70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x275a74: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x275A74u;
    {
        const bool branch_taken_0x275a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275A74u;
        // 0x275a78: 0x4600b581  sub.s       $f22, $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x275a74) {
            ctx->pc = 0x275AA0u;
            goto label_275aa0;
        }
    }
    ctx->pc = 0x275A7Cu;
label_275a7c:
    // 0x275a7c: 0x1602001e  bne         $s0, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x275A7Cu;
    {
        const bool branch_taken_0x275a7c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x275a7c) {
            ctx->pc = 0x275AF8u;
            goto label_275af8;
        }
    }
    ctx->pc = 0x275A84u;
    // 0x275a84: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x275a84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x275a88: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x275a88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x275a8c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x275a8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x275a90: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x275a90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x275a94: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x275a94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x275a98: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x275a98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x275a9c: 0x4600b580  add.s       $f22, $f22, $f0
    ctx->pc = 0x275a9cu;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
label_275aa0:
    // 0x275aa0: 0x46160834  c.lt.s      $f1, $f22
    ctx->pc = 0x275aa0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_275aa4:
    // 0x275aa4: 0x0  nop
    ctx->pc = 0x275aa4u;
    // NOP
    // 0x275aa8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x275AA8u;
    {
        const bool branch_taken_0x275aa8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x275aa8) {
            ctx->pc = 0x275AC4u;
            goto label_275ac4;
        }
    }
    ctx->pc = 0x275AB0u;
    // 0x275ab0: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x275ab0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x275ab4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x275ab4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x275ab8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x275ab8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x275abc: 0x0  nop
    ctx->pc = 0x275abcu;
    // NOP
    // 0x275ac0: 0x4600b581  sub.s       $f22, $f22, $f0
    ctx->pc = 0x275ac0u;
    ctx->f[22] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
label_275ac4:
    // 0x275ac4: 0x3c01c049  lui         $at, 0xC049
    ctx->pc = 0x275ac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49225 << 16));
    // 0x275ac8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x275ac8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x275acc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x275accu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x275ad0: 0x0  nop
    ctx->pc = 0x275ad0u;
    // NOP
    // 0x275ad4: 0x4600b036  c.le.s      $f22, $f0
    ctx->pc = 0x275ad4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x275ad8: 0x0  nop
    ctx->pc = 0x275ad8u;
    // NOP
    // 0x275adc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x275ADCu;
    {
        const bool branch_taken_0x275adc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x275adc) {
            ctx->pc = 0x275AF8u;
            goto label_275af8;
        }
    }
    ctx->pc = 0x275AE4u;
    // 0x275ae4: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x275ae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x275ae8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x275ae8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x275aec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x275aecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x275af0: 0x0  nop
    ctx->pc = 0x275af0u;
    // NOP
    // 0x275af4: 0x4600b580  add.s       $f22, $f22, $f0
    ctx->pc = 0x275af4u;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
label_275af8:
    // 0x275af8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x275af8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x275afc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x275afcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x275b00: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x275b00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x275b04: 0x24631740  addiu       $v1, $v1, 0x1740
    ctx->pc = 0x275b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5952));
    // 0x275b08: 0x4614b502  mul.s       $f20, $f22, $f20
    ctx->pc = 0x275b08u;
    ctx->f[20] = FPU_MUL_S(ctx->f[22], ctx->f[20]);
    // 0x275b0c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x275b0cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x511740u));
    // 0x275b10: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x275b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x275b14: 0xc12e310  jal         func_4B8C40
    ctx->pc = 0x275B14u;
    SET_GPR_U32(ctx, 31, 0x275B1Cu);
    ctx->pc = 0x275B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275B14u;
    // 0x275b18: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x275B14u, 0x275B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275B1Cu;
label_275b1c:
    // 0x275b1c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x275b1cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x275b20: 0xc12e29c  jal         func_4B8A70
    ctx->pc = 0x275B20u;
    SET_GPR_U32(ctx, 31, 0x275B28u);
    ctx->pc = 0x275B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275B20u;
    // 0x275b24: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x275B20u, 0x275B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275B28u;
label_275b28:
    // 0x275b28: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x275b28u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x275b2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x275b2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275b30: 0x4403a800  mfc1        $v1, $f21
    ctx->pc = 0x275b30u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x275b34: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x275b34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275b38: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x275b38u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x275b3c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x275b3cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x275b40: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x275b40u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x275b44: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x275b44u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x275b48: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x275b48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x275b4c: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x275b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x275b50: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x275b50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275b54: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x275b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    // 0x275b58: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x275b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x275b5c: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x275b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x275b60: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x275b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x275b64: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x275b64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x275b68: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x275b68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x275b6c: 0xc095106  jal         func_254418
    ctx->pc = 0x275B6Cu;
    SET_GPR_U32(ctx, 31, 0x275B74u);
    ctx->pc = 0x275B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275B6Cu;
    // 0x275b70: 0xe7a20038  swc1        $f2, 0x38($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x254418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254418u, 0x275B6Cu, 0x275B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275B74u;
label_275b74:
    // 0x275b74: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x275b74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275b78: 0xc095128  jal         func_2544A0
    ctx->pc = 0x275B78u;
    SET_GPR_U32(ctx, 31, 0x275B80u);
    ctx->pc = 0x275B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275B78u;
    // 0x275b7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2544A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2544A0u, 0x275B78u, 0x275B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275B80u;
label_275b80:
    // 0x275b80: 0x7ba30030  lq          $v1, 0x30($sp)
    ctx->pc = 0x275b80u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x275b84: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x275b84u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x275b88: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x275b88u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x275b8c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x275b8cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x275b90: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x275b90u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x275b94: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x275b94u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x275b98: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x275b98u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x275b9c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x275b9cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x275ba0: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x275ba0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x275ba4: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x275ba4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x275ba8: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x275ba8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x275bac: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x275bacu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x275bb0: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x275bb0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x275bb4: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x275bb4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x275bb8: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x275bb8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x275bbc: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x275bbcu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x275bc0: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x275bc0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x275bc4: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x275bc4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x275bc8: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x275bc8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x275bcc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x275bccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x275bd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x275bd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275bd4: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x275bd4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x275bd8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x275bd8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x275bdc: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x275bdcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x275be0: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x275be0u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x275be4: 0x7a620000  lq          $v0, 0x0($s3)
    ctx->pc = 0x275be4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x275be8: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x275be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    // 0x275bec: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x275becu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x275bf0: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x275bf0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x275bf4: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x275bf4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x275bf8: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x275bf8u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x275bfc: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x275bfcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x275c00: 0x7fa50050  sq          $a1, 0x50($sp)
    ctx->pc = 0x275c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 5));
    // 0x275c04: 0x7fa50020  sq          $a1, 0x20($sp)
    ctx->pc = 0x275c04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 5));
    // 0x275c08: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x275c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x275c0c: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x275c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x275c10: 0xc08f3dc  jal         func_23CF70
    ctx->pc = 0x275C10u;
    SET_GPR_U32(ctx, 31, 0x275C18u);
    ctx->pc = 0x275C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275C10u;
    // 0x275c14: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CF70u, 0x275C10u, 0x275C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275C18u;
label_275c18:
    // 0x275c18: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x275c18u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    // 0x275c1c: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x275c1cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x275c20: 0xc08f3e2  jal         func_23CF88
    ctx->pc = 0x275C20u;
    SET_GPR_U32(ctx, 31, 0x275C28u);
    ctx->pc = 0x275C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275C20u;
    // 0x275c24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CF88u, 0x275C20u, 0x275C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275C28u;
label_275c28:
    // 0x275c28: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x275c28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x275c2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x275c2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275c30: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x275c30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275c34: 0xc08f4ae  jal         func_23D2B8
    ctx->pc = 0x275C34u;
    SET_GPR_U32(ctx, 31, 0x275C3Cu);
    ctx->pc = 0x275C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275C34u;
    // 0x275c38: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D2B8u, 0x275C34u, 0x275C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275C3Cu;
label_275c3c:
    // 0x275c3c: 0xc0e409a  jal         func_390268
    ctx->pc = 0x275C3Cu;
    SET_GPR_U32(ctx, 31, 0x275C44u);
    ctx->pc = 0x275C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275C3Cu;
    // 0x275c40: 0x262400c4  addiu       $a0, $s1, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x275C3Cu, 0x275C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275C44u;
label_275c44:
    // 0x275c44: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x275c44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275c48: 0x12000026  beqz        $s0, . + 4 + (0x26 << 2)
    ctx->pc = 0x275C48u;
    {
        const bool branch_taken_0x275c48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x275C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275C48u;
        // 0x275c4c: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275c48) {
            ctx->pc = 0x275CE4u;
            goto label_275ce4;
        }
    }
    ctx->pc = 0x275C50u;
    // 0x275c50: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x275c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x275c54: 0xc0e409a  jal         func_390268
    ctx->pc = 0x275C54u;
    SET_GPR_U32(ctx, 31, 0x275C5Cu);
    ctx->pc = 0x275C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275C54u;
    // 0x275c58: 0xafa200a0  sw          $v0, 0xA0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x275C54u, 0x275C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275C5Cu;
label_275c5c:
    // 0x275c5c: 0x54510022  bnel        $v0, $s1, . + 4 + (0x22 << 2)
    ctx->pc = 0x275C5Cu;
    {
        const bool branch_taken_0x275c5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x275c5c) {
            ctx->pc = 0x275C60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x275C5Cu;
            // 0x275c60: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x275CE8u;
            goto label_275ce8;
        }
    }
    ctx->pc = 0x275C64u;
    // 0x275c64: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x275c64u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x275c68: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x275c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x275c6c: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x275c6cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x275c70: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x275c70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x275c74: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x275c74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x275c78: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x275c78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275c7c: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x275c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    // 0x275c80: 0x7a0200a0  lq          $v0, 0xA0($s0)
    ctx->pc = 0x275c80u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x275c84: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x275c84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    // 0x275c88: 0x7a0300b0  lq          $v1, 0xB0($s0)
    ctx->pc = 0x275c88u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x275c8c: 0xc0cd66c  jal         func_3359B0
    ctx->pc = 0x275C8Cu;
    SET_GPR_U32(ctx, 31, 0x275C94u);
    ctx->pc = 0x275C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275C8Cu;
    // 0x275c90: 0x7fa30090  sq          $v1, 0x90($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3359B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3359B0u, 0x275C8Cu, 0x275C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275C94u;
label_275c94:
    // 0x275c94: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x275c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x275c98: 0xc0cd8ec  jal         func_3363B0
    ctx->pc = 0x275C98u;
    SET_GPR_U32(ctx, 31, 0x275CA0u);
    ctx->pc = 0x275C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275C98u;
    // 0x275c9c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x275C98u, 0x275CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275CA0u;
label_275ca0:
    // 0x275ca0: 0xc7ac0070  lwc1        $f12, 0x70($sp)
    ctx->pc = 0x275ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x275ca4: 0xc7ad0074  lwc1        $f13, 0x74($sp)
    ctx->pc = 0x275ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x275ca8: 0xc0cd5ea  jal         func_3357A8
    ctx->pc = 0x275CA8u;
    SET_GPR_U32(ctx, 31, 0x275CB0u);
    ctx->pc = 0x275CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275CA8u;
    // 0x275cac: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3357A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3357A8u, 0x275CA8u, 0x275CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275CB0u;
label_275cb0:
    // 0x275cb0: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x275cb0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x275cb4: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x275cb4u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x275cb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x275cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275cbc: 0xc08f3dc  jal         func_23CF70
    ctx->pc = 0x275CBCu;
    SET_GPR_U32(ctx, 31, 0x275CC4u);
    ctx->pc = 0x275CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275CBCu;
    // 0x275cc0: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CF70u, 0x275CBCu, 0x275CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275CC4u;
label_275cc4:
    // 0x275cc4: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x275cc4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x275cc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x275cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275ccc: 0xc08f3e2  jal         func_23CF88
    ctx->pc = 0x275CCCu;
    SET_GPR_U32(ctx, 31, 0x275CD4u);
    ctx->pc = 0x275CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275CCCu;
    // 0x275cd0: 0x4600bb46  mov.s       $f13, $f23 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CF88u, 0x275CCCu, 0x275CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275CD4u;
label_275cd4:
    // 0x275cd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x275cd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275cd8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x275cd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275cdc: 0xc08f4ae  jal         func_23D2B8
    ctx->pc = 0x275CDCu;
    SET_GPR_U32(ctx, 31, 0x275CE4u);
    ctx->pc = 0x275CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275CDCu;
    // 0x275ce0: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D2B8u, 0x275CDCu, 0x275CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275CE4u;
label_275ce4:
    // 0x275ce4: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x275ce4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_275ce8:
    // 0x275ce8: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x275ce8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x275cec: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x275cecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x275cf0: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x275cf0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x275cf4: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x275cf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x275cf8: 0xc7b70118  lwc1        $f23, 0x118($sp)
    ctx->pc = 0x275cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x275cfc: 0xc7b60110  lwc1        $f22, 0x110($sp)
    ctx->pc = 0x275cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x275d00: 0xc7b50108  lwc1        $f21, 0x108($sp)
    ctx->pc = 0x275d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x275d04: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x275d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x275d08: 0x3e00008  jr          $ra
    ctx->pc = 0x275D08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275D08u;
        // 0x275d0c: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275D08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x275D10u;
}
