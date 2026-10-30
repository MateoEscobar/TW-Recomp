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

// Function: sub_00183838
// Address: 0x183838 - 0x183b88
void sub_00183838_0x183838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00183838_0x183838");
#endif

    switch (ctx->pc) {
        case 0x1838e0u: goto label_1838e0;
        case 0x1838f0u: goto label_1838f0;
        case 0x183900u: goto label_183900;
        case 0x18394cu: goto label_18394c;
        case 0x18395cu: goto label_18395c;
        case 0x18396cu: goto label_18396c;
        case 0x18398cu: goto label_18398c;
        case 0x1839dcu: goto label_1839dc;
        case 0x1839ecu: goto label_1839ec;
        case 0x1839fcu: goto label_1839fc;
        case 0x183a60u: goto label_183a60;
        case 0x183a70u: goto label_183a70;
        case 0x183a80u: goto label_183a80;
        case 0x183a9cu: goto label_183a9c;
        case 0x183ae4u: goto label_183ae4;
        case 0x183af4u: goto label_183af4;
        case 0x183b04u: goto label_183b04;
        case 0x183b20u: goto label_183b20;
        case 0x183b48u: goto label_183b48;
        default: break;
    }

    ctx->pc = 0x183838u;

    // 0x183838: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x183838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x18383c: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x18383cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x183840: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x183840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x183844: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x183844u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x183848: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x183848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x18384c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x18384cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183850: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x183850u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x183854: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x183854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x183858: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x183858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x18385c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x18385cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x183860: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x183860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x183864: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x183864u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x183868: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x183868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x18386c: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x18386cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x183870: 0xe7b700b8  swc1        $f23, 0xB8($sp)
    ctx->pc = 0x183870u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x183874: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x183874u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x183878: 0xe7b600b0  swc1        $f22, 0xB0($sp)
    ctx->pc = 0x183878u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x18387c: 0xf13821  addu        $a3, $a3, $s1
    ctx->pc = 0x18387cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 17)));
    // 0x183880: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x183880u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x183884: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x183884u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183888: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x183888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18388c: 0x78450010  lq          $a1, 0x10($v0)
    ctx->pc = 0x18388cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x183890: 0xc4d60000  lwc1        $f22, 0x0($a2)
    ctx->pc = 0x183890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x183894: 0x81100  sll         $v0, $t0, 4
    ctx->pc = 0x183894u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x183898: 0xc4770000  lwc1        $f23, 0x0($v1)
    ctx->pc = 0x183898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x18389c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x18389cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1838a0: 0x7fa50010  sq          $a1, 0x10($sp)
    ctx->pc = 0x1838a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 5));
    // 0x1838a4: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x1838a4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1838a8: 0x4617b001  sub.s       $f0, $f22, $f23
    ctx->pc = 0x1838a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[22], ctx->f[23]);
    // 0x1838ac: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x1838acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x1838b0: 0x78ea0010  lq          $t2, 0x10($a3)
    ctx->pc = 0x1838b0u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x1838b4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1838b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1838b8: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1838b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1838bc: 0x0  nop
    ctx->pc = 0x1838bcu;
    // NOP
    // 0x1838c0: 0x0  nop
    ctx->pc = 0x1838c0u;
    // NOP
    // 0x1838c4: 0x4600b503  div.s       $f20, $f22, $f0
    ctx->pc = 0x1838c4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[22], ctx->f[0]); }
    // 0x1838c8: 0x7faa0020  sq          $t2, 0x20($sp)
    ctx->pc = 0x1838c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 10));
    // 0x1838cc: 0x78430010  lq          $v1, 0x10($v0)
    ctx->pc = 0x1838ccu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1838d0: 0xc5150000  lwc1        $f21, 0x0($t0)
    ctx->pc = 0x1838d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1838d4: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x1838d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    // 0x1838d8: 0xc136afa  jal         func_4DABE8
    ctx->pc = 0x1838D8u;
    SET_GPR_U32(ctx, 31, 0x1838E0u);
    ctx->pc = 0x1838DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1838D8u;
    // 0x1838dc: 0x7faa0000  sq          $t2, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x1838D8u, 0x1838E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1838E0u;
label_1838e0:
    // 0x1838e0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1838e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1838e4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1838e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1838e8: 0xc136b24  jal         func_4DAC90
    ctx->pc = 0x1838E8u;
    SET_GPR_U32(ctx, 31, 0x1838F0u);
    ctx->pc = 0x1838ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1838E8u;
    // 0x1838ec: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x1838E8u, 0x1838F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1838F0u;
label_1838f0:
    // 0x1838f0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1838f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1838f4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1838f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1838f8: 0xc136b18  jal         func_4DAC60
    ctx->pc = 0x1838F8u;
    SET_GPR_U32(ctx, 31, 0x183900u);
    ctx->pc = 0x1838FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1838F8u;
    // 0x1838fc: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x1838F8u, 0x183900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183900u;
label_183900:
    // 0x183900: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x183900u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x183904: 0x0  nop
    ctx->pc = 0x183904u;
    // NOP
    // 0x183908: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x183908u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18390c: 0x0  nop
    ctx->pc = 0x18390cu;
    // NOP
    // 0x183910: 0x45000046  bc1f        . + 4 + (0x46 << 2)
    ctx->pc = 0x183910u;
    {
        const bool branch_taken_0x183910 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x183910) {
            ctx->pc = 0x183A2Cu;
            goto label_183a2c;
        }
    }
    ctx->pc = 0x183918u;
    // 0x183918: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x183918u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18391c: 0x0  nop
    ctx->pc = 0x18391cu;
    // NOP
    // 0x183920: 0x45000021  bc1f        . + 4 + (0x21 << 2)
    ctx->pc = 0x183920u;
    {
        const bool branch_taken_0x183920 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x183924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183920u;
        // 0x183924: 0x7ba20030  lq          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183920) {
            ctx->pc = 0x1839A8u;
            goto label_1839a8;
        }
    }
    ctx->pc = 0x183928u;
    // 0x183928: 0x4615b801  sub.s       $f0, $f23, $f21
    ctx->pc = 0x183928u;
    ctx->f[0] = FPU_SUB_S(ctx->f[23], ctx->f[21]);
    // 0x18392c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x18392cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x183930: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x183930u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x183934: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x183934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x183938: 0x0  nop
    ctx->pc = 0x183938u;
    // NOP
    // 0x18393c: 0x0  nop
    ctx->pc = 0x18393cu;
    // NOP
    // 0x183940: 0x4600bd03  div.s       $f20, $f23, $f0
    ctx->pc = 0x183940u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[23], ctx->f[0]); }
    // 0x183944: 0xc136afa  jal         func_4DABE8
    ctx->pc = 0x183944u;
    SET_GPR_U32(ctx, 31, 0x18394Cu);
    ctx->pc = 0x183948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183944u;
    // 0x183948: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x183944u, 0x18394Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18394Cu;
label_18394c:
    // 0x18394c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x18394cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x183950: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x183950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183954: 0xc136b24  jal         func_4DAC90
    ctx->pc = 0x183954u;
    SET_GPR_U32(ctx, 31, 0x18395Cu);
    ctx->pc = 0x183958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183954u;
    // 0x183958: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x183954u, 0x18395Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18395Cu;
label_18395c:
    // 0x18395c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x18395cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x183960: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x183960u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x183964: 0xc136b18  jal         func_4DAC60
    ctx->pc = 0x183964u;
    SET_GPR_U32(ctx, 31, 0x18396Cu);
    ctx->pc = 0x183968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183964u;
    // 0x183968: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x183964u, 0x18396Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18396Cu;
label_18396c:
    // 0x18396c: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x18396cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x183970: 0x27b30040  addiu       $s3, $sp, 0x40
    ctx->pc = 0x183970u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x183974: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x183974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183978: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x183978u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18397c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18397cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183980: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x183980u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183984: 0xc060df2  jal         func_1837C8
    ctx->pc = 0x183984u;
    SET_GPR_U32(ctx, 31, 0x18398Cu);
    ctx->pc = 0x183988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183984u;
    // 0x183988: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1837C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1837C8u, 0x183984u, 0x18398Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18398Cu;
label_18398c:
    // 0x18398c: 0x10400066  beqz        $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x18398Cu;
    {
        const bool branch_taken_0x18398c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x183990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18398Cu;
        // 0x183990: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18398c) {
            ctx->pc = 0x183B28u;
            goto label_183b28;
        }
    }
    ctx->pc = 0x183994u;
    // 0x183994: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x183994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183998: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x183998u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18399c: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x18399cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1839a0: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x1839A0u;
    {
        const bool branch_taken_0x1839a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1839A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1839A0u;
        // 0x1839a4: 0x27a70030  addiu       $a3, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1839a0) {
            ctx->pc = 0x183B18u;
            goto label_183b18;
        }
    }
    ctx->pc = 0x1839A8u;
label_1839a8:
    // 0x1839a8: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x1839a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1839ac: 0x0  nop
    ctx->pc = 0x1839acu;
    // NOP
    // 0x1839b0: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x1839B0u;
    {
        const bool branch_taken_0x1839b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1839B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1839B0u;
        // 0x1839b4: 0x7ba20010  lq          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1839b0) {
            ctx->pc = 0x183A14u;
            goto label_183a14;
        }
    }
    ctx->pc = 0x1839B8u;
    // 0x1839b8: 0x4616a801  sub.s       $f0, $f21, $f22
    ctx->pc = 0x1839b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[22]);
    // 0x1839bc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1839bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1839c0: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1839c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1839c4: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x1839c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x1839c8: 0x0  nop
    ctx->pc = 0x1839c8u;
    // NOP
    // 0x1839cc: 0x0  nop
    ctx->pc = 0x1839ccu;
    // NOP
    // 0x1839d0: 0x4600ad03  div.s       $f20, $f21, $f0
    ctx->pc = 0x1839d0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[21], ctx->f[0]); }
    // 0x1839d4: 0xc136afa  jal         func_4DABE8
    ctx->pc = 0x1839D4u;
    SET_GPR_U32(ctx, 31, 0x1839DCu);
    ctx->pc = 0x1839D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1839D4u;
    // 0x1839d8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x1839D4u, 0x1839DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1839DCu;
label_1839dc:
    // 0x1839dc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1839dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1839e0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1839e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1839e4: 0xc136b24  jal         func_4DAC90
    ctx->pc = 0x1839E4u;
    SET_GPR_U32(ctx, 31, 0x1839ECu);
    ctx->pc = 0x1839E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1839E4u;
    // 0x1839e8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x1839E4u, 0x1839ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1839ECu;
label_1839ec:
    // 0x1839ec: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1839ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1839f0: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1839f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1839f4: 0xc136b18  jal         func_4DAC60
    ctx->pc = 0x1839F4u;
    SET_GPR_U32(ctx, 31, 0x1839FCu);
    ctx->pc = 0x1839F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1839F4u;
    // 0x1839f8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x1839F4u, 0x1839FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1839FCu;
label_1839fc:
    // 0x1839fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1839fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183a00: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x183a00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183a04: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x183a04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x183a08: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x183a08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183a0c: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x183A0Cu;
    {
        const bool branch_taken_0x183a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183A0Cu;
        // 0x183a10: 0x27a70040  addiu       $a3, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183a0c) {
            ctx->pc = 0x183B18u;
            goto label_183b18;
        }
    }
    ctx->pc = 0x183A14u;
label_183a14:
    // 0x183a14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x183a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183a18: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x183a18u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183a1c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x183a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x183a20: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x183a20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183a24: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x183A24u;
    {
        const bool branch_taken_0x183a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183A24u;
        // 0x183a28: 0x27a70030  addiu       $a3, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183a24) {
            ctx->pc = 0x183B18u;
            goto label_183b18;
        }
    }
    ctx->pc = 0x183A2Cu;
label_183a2c:
    // 0x183a2c: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x183a2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x183a30: 0x0  nop
    ctx->pc = 0x183a30u;
    // NOP
    // 0x183a34: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
    ctx->pc = 0x183A34u;
    {
        const bool branch_taken_0x183a34 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x183A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183A34u;
        // 0x183a38: 0x7ba20030  lq          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183a34) {
            ctx->pc = 0x183AB0u;
            goto label_183ab0;
        }
    }
    ctx->pc = 0x183A3Cu;
    // 0x183a3c: 0x4615b001  sub.s       $f0, $f22, $f21
    ctx->pc = 0x183a3cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[22], ctx->f[21]);
    // 0x183a40: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x183a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x183a44: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x183a44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x183a48: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x183a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x183a4c: 0x0  nop
    ctx->pc = 0x183a4cu;
    // NOP
    // 0x183a50: 0x0  nop
    ctx->pc = 0x183a50u;
    // NOP
    // 0x183a54: 0x4600b503  div.s       $f20, $f22, $f0
    ctx->pc = 0x183a54u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[22], ctx->f[0]); }
    // 0x183a58: 0xc136afa  jal         func_4DABE8
    ctx->pc = 0x183A58u;
    SET_GPR_U32(ctx, 31, 0x183A60u);
    ctx->pc = 0x183A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183A58u;
    // 0x183a5c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x183A58u, 0x183A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183A60u;
label_183a60:
    // 0x183a60: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x183a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x183a64: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x183a64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183a68: 0xc136b24  jal         func_4DAC90
    ctx->pc = 0x183A68u;
    SET_GPR_U32(ctx, 31, 0x183A70u);
    ctx->pc = 0x183A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183A68u;
    // 0x183a6c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x183A68u, 0x183A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183A70u;
label_183a70:
    // 0x183a70: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x183a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x183a74: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x183a74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x183a78: 0xc136b18  jal         func_4DAC60
    ctx->pc = 0x183A78u;
    SET_GPR_U32(ctx, 31, 0x183A80u);
    ctx->pc = 0x183A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183A78u;
    // 0x183a7c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x183A78u, 0x183A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183A80u;
label_183a80:
    // 0x183a80: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x183a80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x183a84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x183a84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183a88: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x183a88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x183a8c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x183a8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183a90: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x183a90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183a94: 0xc060df2  jal         func_1837C8
    ctx->pc = 0x183A94u;
    SET_GPR_U32(ctx, 31, 0x183A9Cu);
    ctx->pc = 0x183A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183A94u;
    // 0x183a98: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1837C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1837C8u, 0x183A94u, 0x183A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183A9Cu;
label_183a9c:
    // 0x183a9c: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x183A9Cu;
    {
        const bool branch_taken_0x183a9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x183AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183A9Cu;
        // 0x183aa0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183a9c) {
            ctx->pc = 0x183B28u;
            goto label_183b28;
        }
    }
    ctx->pc = 0x183AA4u;
    // 0x183aa4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x183aa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183aa8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x183AA8u;
    {
        const bool branch_taken_0x183aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183AA8u;
        // 0x183aac: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183aa8) {
            ctx->pc = 0x183B10u;
            goto label_183b10;
        }
    }
    ctx->pc = 0x183AB0u;
label_183ab0:
    // 0x183ab0: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x183ab0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x183ab4: 0x0  nop
    ctx->pc = 0x183ab4u;
    // NOP
    // 0x183ab8: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x183AB8u;
    {
        const bool branch_taken_0x183ab8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x183ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183AB8u;
        // 0x183abc: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183ab8) {
            ctx->pc = 0x183B30u;
            goto label_183b30;
        }
    }
    ctx->pc = 0x183AC0u;
    // 0x183ac0: 0x4617a801  sub.s       $f0, $f21, $f23
    ctx->pc = 0x183ac0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[23]);
    // 0x183ac4: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x183ac4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x183ac8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x183ac8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x183acc: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x183accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x183ad0: 0x0  nop
    ctx->pc = 0x183ad0u;
    // NOP
    // 0x183ad4: 0x0  nop
    ctx->pc = 0x183ad4u;
    // NOP
    // 0x183ad8: 0x4600ad03  div.s       $f20, $f21, $f0
    ctx->pc = 0x183ad8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[21], ctx->f[0]); }
    // 0x183adc: 0xc136afa  jal         func_4DABE8
    ctx->pc = 0x183ADCu;
    SET_GPR_U32(ctx, 31, 0x183AE4u);
    ctx->pc = 0x183AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183ADCu;
    // 0x183ae0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x183ADCu, 0x183AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183AE4u;
label_183ae4:
    // 0x183ae4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x183ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x183ae8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x183ae8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183aec: 0xc136b24  jal         func_4DAC90
    ctx->pc = 0x183AECu;
    SET_GPR_U32(ctx, 31, 0x183AF4u);
    ctx->pc = 0x183AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183AECu;
    // 0x183af0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x183AECu, 0x183AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183AF4u;
label_183af4:
    // 0x183af4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x183af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x183af8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x183af8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x183afc: 0xc136b18  jal         func_4DAC60
    ctx->pc = 0x183AFCu;
    SET_GPR_U32(ctx, 31, 0x183B04u);
    ctx->pc = 0x183B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183AFCu;
    // 0x183b00: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x183AFCu, 0x183B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183B04u;
label_183b04:
    // 0x183b04: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x183b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183b08: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x183b08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183b0c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x183b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_183b10:
    // 0x183b10: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x183b10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x183b14: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x183b14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_183b18:
    // 0x183b18: 0xc060df2  jal         func_1837C8
    ctx->pc = 0x183B18u;
    SET_GPR_U32(ctx, 31, 0x183B20u);
    ctx->pc = 0x1837C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1837C8u, 0x183B18u, 0x183B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183B20u;
label_183b20:
    // 0x183b20: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x183B20u;
    {
        const bool branch_taken_0x183b20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x183B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183B20u;
        // 0x183b24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183b20) {
            ctx->pc = 0x183B58u;
            goto label_183b58;
        }
    }
    ctx->pc = 0x183B28u;
label_183b28:
    // 0x183b28: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x183B28u;
    {
        const bool branch_taken_0x183b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183B28u;
        // 0x183b2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183b28) {
            ctx->pc = 0x183B58u;
            goto label_183b58;
        }
    }
    ctx->pc = 0x183B30u;
label_183b30:
    // 0x183b30: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x183b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183b34: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x183b34u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183b38: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x183b38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x183b3c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x183b3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x183b40: 0xc060df2  jal         func_1837C8
    ctx->pc = 0x183B40u;
    SET_GPR_U32(ctx, 31, 0x183B48u);
    ctx->pc = 0x183B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183B40u;
    // 0x183b44: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1837C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1837C8u, 0x183B40u, 0x183B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183B48u;
label_183b48:
    // 0x183b48: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x183b48u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183b4c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x183B4Cu;
    {
        const bool branch_taken_0x183b4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x183B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183B4Cu;
        // 0x183b50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183b4c) {
            ctx->pc = 0x183B58u;
            goto label_183b58;
        }
    }
    ctx->pc = 0x183B54u;
    // 0x183b54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x183b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_183b58:
    // 0x183b58: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x183b58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x183b5c: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x183b5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x183b60: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x183b60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x183b64: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x183b64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x183b68: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x183b68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x183b6c: 0xc7b700b8  lwc1        $f23, 0xB8($sp)
    ctx->pc = 0x183b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x183b70: 0xc7b600b0  lwc1        $f22, 0xB0($sp)
    ctx->pc = 0x183b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x183b74: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x183b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x183b78: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x183b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x183b7c: 0x3e00008  jr          $ra
    ctx->pc = 0x183B7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183B7Cu;
        // 0x183b80: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183B7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183B84u;
    // 0x183b84: 0x0  nop
    ctx->pc = 0x183b84u;
    // NOP
    ctx->pc = 0x183b88u;
}
