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

// Function: sub_002A4EB0
// Address: 0x2a4eb0 - 0x2a5360
void sub_002A4EB0_0x2a4eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A4EB0_0x2a4eb0");
#endif

    switch (ctx->pc) {
        case 0x2a4ee8u: goto label_2a4ee8;
        case 0x2a4f34u: goto label_2a4f34;
        case 0x2a4f64u: goto label_2a4f64;
        case 0x2a4f88u: goto label_2a4f88;
        case 0x2a4f98u: goto label_2a4f98;
        case 0x2a4fccu: goto label_2a4fcc;
        case 0x2a4ffcu: goto label_2a4ffc;
        case 0x2a5014u: goto label_2a5014;
        case 0x2a5044u: goto label_2a5044;
        case 0x2a5080u: goto label_2a5080;
        case 0x2a5088u: goto label_2a5088;
        case 0x2a5094u: goto label_2a5094;
        case 0x2a50c0u: goto label_2a50c0;
        case 0x2a50c8u: goto label_2a50c8;
        case 0x2a50ecu: goto label_2a50ec;
        case 0x2a5104u: goto label_2a5104;
        case 0x2a5140u: goto label_2a5140;
        case 0x2a5188u: goto label_2a5188;
        case 0x2a519cu: goto label_2a519c;
        case 0x2a51b8u: goto label_2a51b8;
        case 0x2a51e8u: goto label_2a51e8;
        case 0x2a5248u: goto label_2a5248;
        case 0x2a526cu: goto label_2a526c;
        case 0x2a5278u: goto label_2a5278;
        case 0x2a5280u: goto label_2a5280;
        case 0x2a52b0u: goto label_2a52b0;
        case 0x2a52d4u: goto label_2a52d4;
        case 0x2a52e4u: goto label_2a52e4;
        case 0x2a5318u: goto label_2a5318;
        default: break;
    }

    ctx->pc = 0x2a4eb0u;

    // 0x2a4eb0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2a4eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2a4eb4: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2a4eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x2a4eb8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2a4eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x2a4ebc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a4ebcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4ec0: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2a4ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x2a4ec4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2a4ec4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a4ec8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2a4ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2a4ecc: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x2a4eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x2a4ed0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a4ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a4ed4: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x2a4ed4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2a4ed8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2a4ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2a4edc: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x2a4edcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a4ee0: 0xc08ce0c  jal         func_233830
    ctx->pc = 0x2A4EE0u;
    SET_GPR_U32(ctx, 31, 0x2A4EE8u);
    ctx->pc = 0x2A4EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4EE0u;
    // 0x2a4ee4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233830u, 0x2A4EE0u, 0x2A4EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4EE8u;
label_2a4ee8:
    // 0x2a4ee8: 0x86240028  lh          $a0, 0x28($s1)
    ctx->pc = 0x2a4ee8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x2a4eec: 0x10920087  beq         $a0, $s2, . + 4 + (0x87 << 2)
    ctx->pc = 0x2A4EECu;
    {
        const bool branch_taken_0x2a4eec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 18));
        ctx->pc = 0x2A4EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4EECu;
        // 0x2a4ef0: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4eec) {
            ctx->pc = 0x2A510Cu;
            goto label_2a510c;
        }
    }
    ctx->pc = 0x2A4EF4u;
    // 0x2a4ef4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A4EF4u;
    {
        const bool branch_taken_0x2a4ef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4EF4u;
        // 0x2a4ef8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4ef4) {
            ctx->pc = 0x2A4F0Cu;
            goto label_2a4f0c;
        }
    }
    ctx->pc = 0x2A4EFCu;
    // 0x2a4efc: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A4EFCu;
    {
        const bool branch_taken_0x2a4efc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4EFCu;
        // 0x2a4f00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4efc) {
            ctx->pc = 0x2A4F1Cu;
            goto label_2a4f1c;
        }
    }
    ctx->pc = 0x2A4F04u;
    // 0x2a4f04: 0x1000010d  b           . + 4 + (0x10D << 2)
    ctx->pc = 0x2A4F04u;
    {
        const bool branch_taken_0x2a4f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4F04u;
        // 0x2a4f08: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4f04) {
            ctx->pc = 0x2A533Cu;
            goto label_2a533c;
        }
    }
    ctx->pc = 0x2A4F0Cu;
label_2a4f0c:
    // 0x2a4f0c: 0x108200b8  beq         $a0, $v0, . + 4 + (0xB8 << 2)
    ctx->pc = 0x2A4F0Cu;
    {
        const bool branch_taken_0x2a4f0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A4F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4F0Cu;
        // 0x2a4f10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4f0c) {
            ctx->pc = 0x2A51F0u;
            goto label_2a51f0;
        }
    }
    ctx->pc = 0x2A4F14u;
    // 0x2a4f14: 0x10000109  b           . + 4 + (0x109 << 2)
    ctx->pc = 0x2A4F14u;
    {
        const bool branch_taken_0x2a4f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4F14u;
        // 0x2a4f18: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4f14) {
            ctx->pc = 0x2A533Cu;
            goto label_2a533c;
        }
    }
    ctx->pc = 0x2A4F1Cu;
label_2a4f1c:
    // 0x2a4f1c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2a4f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2a4f20: 0x8082002e  lb          $v0, 0x2E($a0)
    ctx->pc = 0x2a4f20u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 46)));
    // 0x2a4f24: 0x1c400104  bgtz        $v0, . + 4 + (0x104 << 2)
    ctx->pc = 0x2A4F24u;
    {
        const bool branch_taken_0x2a4f24 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2A4F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4F24u;
        // 0x2a4f28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4f24) {
            ctx->pc = 0x2A5338u;
            goto label_2a5338;
        }
    }
    ctx->pc = 0x2A4F2Cu;
    // 0x2a4f2c: 0xc0a337e  jal         func_28CDF8
    ctx->pc = 0x2A4F2Cu;
    SET_GPR_U32(ctx, 31, 0x2A4F34u);
    ctx->pc = 0x2A4F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4F2Cu;
    // 0x2a4f30: 0x8225003a  lb          $a1, 0x3A($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 58)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CDF8u, 0x2A4F2Cu, 0x2A4F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4F34u;
label_2a4f34:
    // 0x2a4f34: 0x8622002a  lh          $v0, 0x2A($s1)
    ctx->pc = 0x2a4f34u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 42)));
    // 0x2a4f38: 0x18400026  blez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2A4F38u;
    {
        const bool branch_taken_0x2a4f38 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2A4F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4F38u;
        // 0x2a4f3c: 0x26300010  addiu       $s0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4f38) {
            ctx->pc = 0x2A4FD4u;
            goto label_2a4fd4;
        }
    }
    ctx->pc = 0x2A4F40u;
    // 0x2a4f40: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a4f40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a4f44: 0x0  nop
    ctx->pc = 0x2a4f44u;
    // NOP
    // 0x2a4f48: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x2a4f48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x2a4f4c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2a4f4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2a4f50: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a4f50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a4f54: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2a4f54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x2a4f58: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2a4f58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    // 0x2a4f5c: 0xc0cd508  jal         func_335420
    ctx->pc = 0x2A4F5Cu;
    SET_GPR_U32(ctx, 31, 0x2A4F64u);
    ctx->pc = 0x2A4F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4F5Cu;
    // 0x2a4f60: 0x460c6b02  mul.s       $f12, $f13, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[13], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x2A4F5Cu, 0x2A4F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4F64u;
label_2a4f64:
    // 0x2a4f64: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x2a4f64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
    // 0x2a4f68: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x2a4f68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x2a4f6c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2a4f6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a4f70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a4f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4f74: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2a4f74u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2a4f78: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2a4f78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4f7c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a4f7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4f80: 0xc0a7cf2  jal         func_29F3C8
    ctx->pc = 0x2A4F80u;
    SET_GPR_U32(ctx, 31, 0x2A4F88u);
    ctx->pc = 0x2A4F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4F80u;
    // 0x2a4f84: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F3C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F3C8u, 0x2A4F80u, 0x2A4F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4F88u;
label_2a4f88:
    // 0x2a4f88: 0x104000eb  beqz        $v0, . + 4 + (0xEB << 2)
    ctx->pc = 0x2A4F88u;
    {
        const bool branch_taken_0x2a4f88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4F88u;
        // 0x2a4f8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4f88) {
            ctx->pc = 0x2A5338u;
            goto label_2a5338;
        }
    }
    ctx->pc = 0x2A4F90u;
    // 0x2a4f90: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2A4F90u;
    SET_GPR_U32(ctx, 31, 0x2A4F98u);
    ctx->pc = 0x2A4F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4F90u;
    // 0x2a4f94: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2A4F90u, 0x2A4F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4F98u;
label_2a4f98:
    // 0x2a4f98: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a4f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4f9c: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x2A4F9Cu;
    {
        const bool branch_taken_0x2a4f9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4F9Cu;
        // 0x2a4fa0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4f9c) {
            ctx->pc = 0x2A4FCCu;
            goto label_2a4fcc;
        }
    }
    ctx->pc = 0x2A4FA4u;
    // 0x2a4fa4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2a4fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2a4fa8: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x2a4fa8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
    // 0x2a4fac: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2a4facu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4fb0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a4fb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a4fb4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a4fb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a4fb8: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2a4fb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a4fbc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2a4fbcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a4fc0: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x2a4fc0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a4fc4: 0xc0bee7a  jal         func_2FB9E8
    ctx->pc = 0x2A4FC4u;
    SET_GPR_U32(ctx, 31, 0x2A4FCCu);
    ctx->pc = 0x2A4FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4FC4u;
    // 0x2a4fc8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2A4FC4u, 0x2A4FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4FCCu;
label_2a4fcc:
    // 0x2a4fcc: 0x100000d9  b           . + 4 + (0xD9 << 2)
    ctx->pc = 0x2A4FCCu;
    {
        const bool branch_taken_0x2a4fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4FCCu;
        // 0x2a4fd0: 0xa6320028  sh          $s2, 0x28($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 40), (uint16_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4fcc) {
            ctx->pc = 0x2A5334u;
            goto label_2a5334;
        }
    }
    ctx->pc = 0x2A4FD4u;
label_2a4fd4:
    // 0x2a4fd4: 0x26720090  addiu       $s2, $s3, 0x90
    ctx->pc = 0x2a4fd4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
    // 0x2a4fd8: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2a4fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x2a4fdc: 0x86440002  lh          $a0, 0x2($s2)
    ctx->pc = 0x2a4fdcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x2a4fe0: 0x24544b00  addiu       $s4, $v0, 0x4B00
    ctx->pc = 0x2a4fe0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x2a4fe4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a4fe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a4fe8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2a4fe8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2a4fec: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2a4fecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2a4ff0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a4ff0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4ff4: 0xc0cdb38  jal         func_336CE0
    ctx->pc = 0x2A4FF4u;
    SET_GPR_U32(ctx, 31, 0x2A4FFCu);
    ctx->pc = 0x2A4FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4FF4u;
    // 0x2a4ff8: 0x942021  addu        $a0, $a0, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2A4FF4u, 0x2A4FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4FFCu;
label_2a4ffc:
    // 0x2a4ffc: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2a4ffcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a5000: 0x0  nop
    ctx->pc = 0x2a5000u;
    // NOP
    // 0x2a5004: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x2A5004u;
    {
        const bool branch_taken_0x2a5004 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A5008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5004u;
        // 0x2a5008: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5004) {
            ctx->pc = 0x2A504Cu;
            goto label_2a504c;
        }
    }
    ctx->pc = 0x2A500Cu;
    // 0x2a500c: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2A500Cu;
    SET_GPR_U32(ctx, 31, 0x2A5014u);
    ctx->pc = 0x2A5010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A500Cu;
    // 0x2a5010: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2A500Cu, 0x2A5014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5014u;
label_2a5014:
    // 0x2a5014: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a5014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5018: 0x108000c6  beqz        $a0, . + 4 + (0xC6 << 2)
    ctx->pc = 0x2A5018u;
    {
        const bool branch_taken_0x2a5018 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A501Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5018u;
        // 0x2a501c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5018) {
            ctx->pc = 0x2A5334u;
            goto label_2a5334;
        }
    }
    ctx->pc = 0x2A5020u;
    // 0x2a5020: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2a5020u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2a5024: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x2a5024u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
    // 0x2a5028: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2a5028u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a502c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2a502cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2a5030: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2a5030u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a5034: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2a5034u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a5038: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x2a5038u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a503c: 0xc0bee7a  jal         func_2FB9E8
    ctx->pc = 0x2A503Cu;
    SET_GPR_U32(ctx, 31, 0x2A5044u);
    ctx->pc = 0x2A5040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A503Cu;
    // 0x2a5040: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2A503Cu, 0x2A5044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5044u;
label_2a5044:
    // 0x2a5044: 0x100000bc  b           . + 4 + (0xBC << 2)
    ctx->pc = 0x2A5044u;
    {
        const bool branch_taken_0x2a5044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5044u;
        // 0x2a5048: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5044) {
            ctx->pc = 0x2A5338u;
            goto label_2a5338;
        }
    }
    ctx->pc = 0x2A504Cu;
label_2a504c:
    // 0x2a504c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2a504cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2a5050: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2A5050u;
    {
        const bool branch_taken_0x2a5050 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5050) {
            ctx->pc = 0x2A5054u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A5050u;
            // 0x2a5054: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A5058u;
            goto label_2a5058;
        }
    }
    ctx->pc = 0x2A5058u;
label_2a5058:
    // 0x2a5058: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x2a5058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x2a505c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2a505cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2a5060: 0x2010  mfhi        $a0
    ctx->pc = 0x2a5060u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x2a5064: 0x148000b4  bnez        $a0, . + 4 + (0xB4 << 2)
    ctx->pc = 0x2A5064u;
    {
        const bool branch_taken_0x2a5064 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A5068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5064u;
        // 0x2a5068: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5064) {
            ctx->pc = 0x2A5338u;
            goto label_2a5338;
        }
    }
    ctx->pc = 0x2A506Cu;
    // 0x2a506c: 0x86440002  lh          $a0, 0x2($s2)
    ctx->pc = 0x2a506cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x2a5070: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2a5070u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2a5074: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x2a5074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x2a5078: 0xc0cd7d2  jal         func_335F48
    ctx->pc = 0x2A5078u;
    SET_GPR_U32(ctx, 31, 0x2A5080u);
    ctx->pc = 0x2A507Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5078u;
    // 0x2a507c: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335F48u, 0x2A5078u, 0x2A5080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5080u;
label_2a5080:
    // 0x2a5080: 0xc0cd742  jal         func_335D08
    ctx->pc = 0x2A5080u;
    SET_GPR_U32(ctx, 31, 0x2A5088u);
    ctx->pc = 0x2A5084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5080u;
    // 0x2a5084: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D08u, 0x2A5080u, 0x2A5088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5088u;
label_2a5088:
    // 0x2a5088: 0xc62d0024  lwc1        $f13, 0x24($s1)
    ctx->pc = 0x2a5088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2a508c: 0xc0cdd2e  jal         func_3374B8
    ctx->pc = 0x2A508Cu;
    SET_GPR_U32(ctx, 31, 0x2A5094u);
    ctx->pc = 0x2A5090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A508Cu;
    // 0x2a5090: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3374B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3374B8u, 0x2A508Cu, 0x2A5094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5094u;
label_2a5094:
    // 0x2a5094: 0x3c013e86  lui         $at, 0x3E86
    ctx->pc = 0x2a5094u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16006 << 16));
    // 0x2a5098: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x2a5098u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x2a509c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2a509cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a50a0: 0x0  nop
    ctx->pc = 0x2a50a0u;
    // NOP
    // 0x2a50a4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2a50a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a50a8: 0x0  nop
    ctx->pc = 0x2a50a8u;
    // NOP
    // 0x2a50ac: 0x450000a2  bc1f        . + 4 + (0xA2 << 2)
    ctx->pc = 0x2A50ACu;
    {
        const bool branch_taken_0x2a50ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A50B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A50ACu;
        // 0x2a50b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a50ac) {
            ctx->pc = 0x2A5338u;
            goto label_2a5338;
        }
    }
    ctx->pc = 0x2A50B4u;
    // 0x2a50b4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2a50b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2a50b8: 0xc0a337e  jal         func_28CDF8
    ctx->pc = 0x2A50B8u;
    SET_GPR_U32(ctx, 31, 0x2A50C0u);
    ctx->pc = 0x2A50BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A50B8u;
    // 0x2a50bc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CDF8u, 0x2A50B8u, 0x2A50C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A50C0u;
label_2a50c0:
    // 0x2a50c0: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2A50C0u;
    SET_GPR_U32(ctx, 31, 0x2A50C8u);
    ctx->pc = 0x2A50C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A50C0u;
    // 0x2a50c4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2A50C0u, 0x2A50C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A50C8u;
label_2a50c8:
    // 0x2a50c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a50c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a50cc: 0x12000099  beqz        $s0, . + 4 + (0x99 << 2)
    ctx->pc = 0x2A50CCu;
    {
        const bool branch_taken_0x2a50cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A50D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A50CCu;
        // 0x2a50d0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a50cc) {
            ctx->pc = 0x2A5334u;
            goto label_2a5334;
        }
    }
    ctx->pc = 0x2A50D4u;
    // 0x2a50d4: 0xc6340024  lwc1        $f20, 0x24($s1)
    ctx->pc = 0x2a50d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a50d8: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x2a50d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
    // 0x2a50dc: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x2a50dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
    // 0x2a50e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a50e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a50e4: 0xc0884f6  jal         func_2213D8
    ctx->pc = 0x2A50E4u;
    SET_GPR_U32(ctx, 31, 0x2A50ECu);
    ctx->pc = 0x2A50E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A50E4u;
    // 0x2a50e8: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2A50E4u, 0x2A50ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A50ECu;
label_2a50ec:
    // 0x2a50ec: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2a50ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2a50f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a50f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a50f4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2a50f4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2a50f8: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x2a50f8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x2a50fc: 0xc0bf70a  jal         func_2FDC28
    ctx->pc = 0x2A50FCu;
    SET_GPR_U32(ctx, 31, 0x2A5104u);
    ctx->pc = 0x2A5100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A50FCu;
    // 0x2a5100: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDC28u, 0x2A50FCu, 0x2A5104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5104u;
label_2a5104:
    // 0x2a5104: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x2A5104u;
    {
        const bool branch_taken_0x2a5104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5104u;
        // 0x2a5108: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5104) {
            ctx->pc = 0x2A5338u;
            goto label_2a5338;
        }
    }
    ctx->pc = 0x2A510Cu;
label_2a510c:
    // 0x2a510c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2a510cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2a5110: 0x8043002e  lb          $v1, 0x2E($v0)
    ctx->pc = 0x2a5110u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 46)));
    // 0x2a5114: 0x1c600088  bgtz        $v1, . + 4 + (0x88 << 2)
    ctx->pc = 0x2A5114u;
    {
        const bool branch_taken_0x2a5114 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x2A5118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5114u;
        // 0x2a5118: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5114) {
            ctx->pc = 0x2A5338u;
            goto label_2a5338;
        }
    }
    ctx->pc = 0x2A511Cu;
    // 0x2a511c: 0x8623002c  lh          $v1, 0x2C($s1)
    ctx->pc = 0x2a511cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x2a5120: 0x240603e8  addiu       $a2, $zero, 0x3E8
    ctx->pc = 0x2a5120u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x2a5124: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2a5124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2a5128: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a5128u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a512c: 0x660018  mult        $zero, $v1, $a2
    ctx->pc = 0x2a512cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2a5130: 0x2450b880  addiu       $s0, $v0, -0x4780
    ctx->pc = 0x2a5130u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948992));
    // 0x2a5134: 0x3012  mflo        $a2
    ctx->pc = 0x2a5134u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x2a5138: 0xc0cd4fc  jal         func_3353F0
    ctx->pc = 0x2A5138u;
    SET_GPR_U32(ctx, 31, 0x2A5140u);
    ctx->pc = 0x2A513Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5138u;
    // 0x2a513c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x2A5138u, 0x2A5140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5140u;
label_2a5140:
    // 0x2a5140: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2a5140u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x2a5144: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a5144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a5148: 0x8c64b734  lw          $a0, -0x48CC($v1)
    ctx->pc = 0x2a5148u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50B734u));
    // 0x2a514c: 0x86260038  lh          $a2, 0x38($s1)
    ctx->pc = 0x2a514cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x2a5150: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x2a5150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x2a5154: 0xa6250028  sh          $a1, 0x28($s1)
    ctx->pc = 0x2a5154u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 40), (uint16_t)GPR_U32(ctx, 5));
    // 0x2a5158: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a5158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a515c: 0x4c00075  bltz        $a2, . + 4 + (0x75 << 2)
    ctx->pc = 0x2A515Cu;
    {
        const bool branch_taken_0x2a515c = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x2A5160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A515Cu;
        // 0x2a5160: 0xae230034  sw          $v1, 0x34($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a515c) {
            ctx->pc = 0x2A5334u;
            goto label_2a5334;
        }
    }
    ctx->pc = 0x2A5164u;
    // 0x2a5164: 0x28c20003  slti        $v0, $a2, 0x3
    ctx->pc = 0x2a5164u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2a5168: 0x14400073  bnez        $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x2A5168u;
    {
        const bool branch_taken_0x2a5168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A516Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5168u;
        // 0x2a516c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5168) {
            ctx->pc = 0x2A5338u;
            goto label_2a5338;
        }
    }
    ctx->pc = 0x2A5170u;
    // 0x2a5170: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2a5170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a5174: 0x14c20070  bne         $a2, $v0, . + 4 + (0x70 << 2)
    ctx->pc = 0x2A5174u;
    {
        const bool branch_taken_0x2a5174 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A5178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5174u;
        // 0x2a5178: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5174) {
            ctx->pc = 0x2A5338u;
            goto label_2a5338;
        }
    }
    ctx->pc = 0x2A517Cu;
    // 0x2a517c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a517cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5180: 0xc089998  jal         func_226660
    ctx->pc = 0x2A5180u;
    SET_GPR_U32(ctx, 31, 0x2A5188u);
    ctx->pc = 0x2A5184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5180u;
    // 0x2a5184: 0x3c050002  lui         $a1, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2A5180u, 0x2A5188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5188u;
label_2a5188:
    // 0x2a5188: 0x1440006b  bnez        $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x2A5188u;
    {
        const bool branch_taken_0x2a5188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A518Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5188u;
        // 0x2a518c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5188) {
            ctx->pc = 0x2A5338u;
            goto label_2a5338;
        }
    }
    ctx->pc = 0x2A5190u;
    // 0x2a5190: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a5190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5194: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x2A5194u;
    SET_GPR_U32(ctx, 31, 0x2A519Cu);
    ctx->pc = 0x2A5198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5194u;
    // 0x2a5198: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2A5194u, 0x2A519Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A519Cu;
label_2a519c:
    // 0x2a519c: 0x2c420019  sltiu       $v0, $v0, 0x19
    ctx->pc = 0x2a519cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)25) ? 1 : 0);
    // 0x2a51a0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A51A0u;
    {
        const bool branch_taken_0x2a51a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A51A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A51A0u;
        // 0x2a51a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a51a0) {
            ctx->pc = 0x2A51C0u;
            goto label_2a51c0;
        }
    }
    ctx->pc = 0x2A51A8u;
    // 0x2a51a8: 0x2405029e  addiu       $a1, $zero, 0x29E
    ctx->pc = 0x2a51a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 670));
    // 0x2a51ac: 0x3c060002  lui         $a2, 0x2
    ctx->pc = 0x2a51acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2 << 16));
    // 0x2a51b0: 0xc096b7a  jal         func_25ADE8
    ctx->pc = 0x2A51B0u;
    SET_GPR_U32(ctx, 31, 0x2A51B8u);
    ctx->pc = 0x2A51B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A51B0u;
    // 0x2a51b4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25ADE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25ADE8u, 0x2A51B0u, 0x2A51B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A51B8u;
label_2a51b8:
    // 0x2a51b8: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x2A51B8u;
    {
        const bool branch_taken_0x2a51b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A51BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A51B8u;
        // 0x2a51bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a51b8) {
            ctx->pc = 0x2A5338u;
            goto label_2a5338;
        }
    }
    ctx->pc = 0x2A51C0u;
label_2a51c0:
    // 0x2a51c0: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2a51c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x2a51c4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2a51c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2a51c8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a51c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a51cc: 0x2405029c  addiu       $a1, $zero, 0x29C
    ctx->pc = 0x2a51ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
    // 0x2a51d0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2a51d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a51d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a51d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a51d8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2a51d8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2a51dc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2a51dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a51e0: 0xc0968f8  jal         func_25A3E0
    ctx->pc = 0x2A51E0u;
    SET_GPR_U32(ctx, 31, 0x2A51E8u);
    ctx->pc = 0x2A51E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A51E0u;
    // 0x2a51e4: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3E0u, 0x2A51E0u, 0x2A51E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A51E8u;
label_2a51e8:
    // 0x2a51e8: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x2A51E8u;
    {
        const bool branch_taken_0x2a51e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A51ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A51E8u;
        // 0x2a51ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a51e8) {
            ctx->pc = 0x2A5338u;
            goto label_2a5338;
        }
    }
    ctx->pc = 0x2A51F0u;
label_2a51f0:
    // 0x2a51f0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2a51f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2a51f4: 0x8043002e  lb          $v1, 0x2E($v0)
    ctx->pc = 0x2a51f4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 46)));
    // 0x2a51f8: 0x1c60004f  bgtz        $v1, . + 4 + (0x4F << 2)
    ctx->pc = 0x2A51F8u;
    {
        const bool branch_taken_0x2a51f8 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x2A51FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A51F8u;
        // 0x2a51fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a51f8) {
            ctx->pc = 0x2A5338u;
            goto label_2a5338;
        }
    }
    ctx->pc = 0x2A5200u;
    // 0x2a5200: 0x8e250030  lw          $a1, 0x30($s1)
    ctx->pc = 0x2a5200u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x2a5204: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A5204u;
    {
        const bool branch_taken_0x2a5204 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5204u;
        // 0x2a5208: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5204) {
            ctx->pc = 0x2A5220u;
            goto label_2a5220;
        }
    }
    ctx->pc = 0x2A520Cu;
    // 0x2a520c: 0x8e43b734  lw          $v1, -0x48CC($s2)
    ctx->pc = 0x2a520cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294948660)));
    // 0x2a5210: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x2a5210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x2a5214: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x2a5214u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2a5218: 0x14400047  bnez        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x2A5218u;
    {
        const bool branch_taken_0x2a5218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A521Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5218u;
        // 0x2a521c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5218) {
            ctx->pc = 0x2A5338u;
            goto label_2a5338;
        }
    }
    ctx->pc = 0x2A5220u;
label_2a5220:
    // 0x2a5220: 0x86230038  lh          $v1, 0x38($s1)
    ctx->pc = 0x2a5220u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x2a5224: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2a5224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a5228: 0x1462003d  bne         $v1, $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x2A5228u;
    {
        const bool branch_taken_0x2a5228 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A522Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5228u;
        // 0x2a522c: 0x8e42b734  lw          $v0, -0x48CC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294948660)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5228) {
            ctx->pc = 0x2A5320u;
            goto label_2a5320;
        }
    }
    ctx->pc = 0x2A5230u;
    // 0x2a5230: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2a5230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2a5234: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x2a5234u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2a5238: 0x8c45489c  lw          $a1, 0x489C($v0)
    ctx->pc = 0x2a5238u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x51489Cu));
    // 0x2a523c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a523cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5240: 0xc0cdb38  jal         func_336CE0
    ctx->pc = 0x2A5240u;
    SET_GPR_U32(ctx, 31, 0x2A5248u);
    ctx->pc = 0x2A5244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5240u;
    // 0x2a5244: 0x24a50270  addiu       $a1, $a1, 0x270 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2A5240u, 0x2A5248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5248u;
label_2a5248:
    // 0x2a5248: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x2a5248u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x2a524c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2a524cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a5250: 0x0  nop
    ctx->pc = 0x2a5250u;
    // NOP
    // 0x2a5254: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2a5254u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a5258: 0x0  nop
    ctx->pc = 0x2a5258u;
    // NOP
    // 0x2a525c: 0x4500002f  bc1f        . + 4 + (0x2F << 2)
    ctx->pc = 0x2A525Cu;
    {
        const bool branch_taken_0x2a525c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A5260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A525Cu;
        // 0x2a5260: 0x3c040056  lui         $a0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a525c) {
            ctx->pc = 0x2A531Cu;
            goto label_2a531c;
        }
    }
    ctx->pc = 0x2A5264u;
    // 0x2a5264: 0xc105712  jal         func_415C48
    ctx->pc = 0x2A5264u;
    SET_GPR_U32(ctx, 31, 0x2A526Cu);
    ctx->pc = 0x2A5268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5264u;
    // 0x2a5268: 0x248435a0  addiu       $a0, $a0, 0x35A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415C48u, 0x2A5264u, 0x2A526Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A526Cu;
label_2a526c:
    // 0x2a526c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2a526cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2a5270: 0xc0e40a2  jal         func_390288
    ctx->pc = 0x2A5270u;
    SET_GPR_U32(ctx, 31, 0x2A5278u);
    ctx->pc = 0x2A5274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5270u;
    // 0x2a5274: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390288u, 0x2A5270u, 0x2A5278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5278u;
label_2a5278:
    // 0x2a5278: 0xc10587a  jal         func_4161E8
    ctx->pc = 0x2A5278u;
    SET_GPR_U32(ctx, 31, 0x2A5280u);
    ctx->pc = 0x2A527Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5278u;
    // 0x2a527c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2A5278u, 0x2A5280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5280u;
label_2a5280:
    // 0x2a5280: 0x8625002a  lh          $a1, 0x2A($s1)
    ctx->pc = 0x2a5280u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 42)));
    // 0x2a5284: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2a5284u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x2a5288: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2a5288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2a528c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a528cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a5290: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2a5290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    // 0x2a5294: 0x44856800  mtc1        $a1, $f13
    ctx->pc = 0x2a5294u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a5298: 0x0  nop
    ctx->pc = 0x2a5298u;
    // NOP
    // 0x2a529c: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x2a529cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x2a52a0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2a52a0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a52a4: 0x7e230010  sq          $v1, 0x10($s1)
    ctx->pc = 0x2a52a4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 3));
    // 0x2a52a8: 0xc0cd508  jal         func_335420
    ctx->pc = 0x2A52A8u;
    SET_GPR_U32(ctx, 31, 0x2A52B0u);
    ctx->pc = 0x2A52ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A52A8u;
    // 0x2a52ac: 0x460c6b02  mul.s       $f12, $f13, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[13], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x2A52A8u, 0x2A52B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A52B0u;
label_2a52b0:
    // 0x2a52b0: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x2a52b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
    // 0x2a52b4: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x2a52b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x2a52b8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2a52b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a52bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a52bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a52c0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2a52c0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2a52c4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2a52c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a52c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a52c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a52cc: 0xc0a7cf2  jal         func_29F3C8
    ctx->pc = 0x2A52CCu;
    SET_GPR_U32(ctx, 31, 0x2A52D4u);
    ctx->pc = 0x2A52D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A52CCu;
    // 0x2a52d0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F3C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F3C8u, 0x2A52CCu, 0x2A52D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A52D4u;
label_2a52d4:
    // 0x2a52d4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2A52D4u;
    {
        const bool branch_taken_0x2a52d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A52D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A52D4u;
        // 0x2a52d8: 0x8e42b734  lw          $v0, -0x48CC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294948660)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a52d4) {
            ctx->pc = 0x2A5320u;
            goto label_2a5320;
        }
    }
    ctx->pc = 0x2A52DCu;
    // 0x2a52dc: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2A52DCu;
    SET_GPR_U32(ctx, 31, 0x2A52E4u);
    ctx->pc = 0x2A52E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A52DCu;
    // 0x2a52e0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2A52DCu, 0x2A52E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A52E4u;
label_2a52e4:
    // 0x2a52e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a52e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a52e8: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x2A52E8u;
    {
        const bool branch_taken_0x2a52e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A52ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A52E8u;
        // 0x2a52ec: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a52e8) {
            ctx->pc = 0x2A5318u;
            goto label_2a5318;
        }
    }
    ctx->pc = 0x2A52F0u;
    // 0x2a52f0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2a52f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2a52f4: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x2a52f4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
    // 0x2a52f8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2a52f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a52fc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a52fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a5300: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a5300u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a5304: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2a5304u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2a5308: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2a5308u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a530c: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x2a530cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a5310: 0xc0bee7a  jal         func_2FB9E8
    ctx->pc = 0x2A5310u;
    SET_GPR_U32(ctx, 31, 0x2A5318u);
    ctx->pc = 0x2A5314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5310u;
    // 0x2a5314: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2A5310u, 0x2A5318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5318u;
label_2a5318:
    // 0x2a5318: 0xa6200028  sh          $zero, 0x28($s1)
    ctx->pc = 0x2a5318u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 40), (uint16_t)GPR_U32(ctx, 0));
label_2a531c:
    // 0x2a531c: 0x8e42b734  lw          $v0, -0x48CC($s2)
    ctx->pc = 0x2a531cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294948660)));
label_2a5320:
    // 0x2a5320: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x2a5320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x2a5324: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x2a5324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x2a5328: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x2a5328u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2a532c: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2A532Cu;
    {
        const bool branch_taken_0x2a532c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a532c) {
            ctx->pc = 0x2A5330u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A532Cu;
            // 0x2a5330: 0xa6200028  sh          $zero, 0x28($s1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 17), 40), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A5334u;
            goto label_2a5334;
        }
    }
    ctx->pc = 0x2A5334u;
label_2a5334:
    // 0x2a5334: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a5334u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a5338:
    // 0x2a5338: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x2a5338u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2a533c:
    // 0x2a533c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2a533cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a5340: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2a5340u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a5344: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2a5344u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a5348: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x2a5348u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a534c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a534cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a5350: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x2a5350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a5354: 0x3e00008  jr          $ra
    ctx->pc = 0x2A5354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A5358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5354u;
        // 0x2a5358: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A5354u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A535Cu;
    // 0x2a535c: 0x0  nop
    ctx->pc = 0x2a535cu;
    // NOP
    ctx->pc = 0x2a5360u;
}
