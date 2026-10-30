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

// Function: sub_0029B848
// Address: 0x29b848 - 0x29b9b0
void sub_0029B848_0x29b848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029B848_0x29b848");
#endif

    switch (ctx->pc) {
        case 0x29b8c0u: goto label_29b8c0;
        case 0x29b8f4u: goto label_29b8f4;
        case 0x29b934u: goto label_29b934;
        case 0x29b940u: goto label_29b940;
        case 0x29b948u: goto label_29b948;
        case 0x29b96cu: goto label_29b96c;
        case 0x29b988u: goto label_29b988;
        default: break;
    }

    ctx->pc = 0x29b848u;

    // 0x29b848: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x29b848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x29b84c: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x29b84cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x29b850: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x29b850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x29b854: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x29b854u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b858: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x29b858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x29b85c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x29b85cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b860: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x29b860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x29b864: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x29b864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x29b868: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x29b868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x29b86c: 0x92420013  lbu         $v0, 0x13($s2)
    ctx->pc = 0x29b86cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 19)));
    // 0x29b870: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x29b870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x29b874: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x29b874u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b878: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x29b878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x29b87c: 0x8c930000  lw          $s3, 0x0($a0)
    ctx->pc = 0x29b87cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29b880: 0x2c63001f  sltiu       $v1, $v1, 0x1F
    ctx->pc = 0x29b880u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)31) ? 1 : 0);
    // 0x29b884: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x29B884u;
    {
        const bool branch_taken_0x29b884 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x29B888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B884u;
        // 0x29b888: 0xa2420013  sb          $v0, 0x13($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 19), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b884) {
            ctx->pc = 0x29B894u;
            goto label_29b894;
        }
    }
    ctx->pc = 0x29B88Cu;
    // 0x29b88c: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x29B88Cu;
    {
        const bool branch_taken_0x29b88c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B88Cu;
        // 0x29b890: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b88c) {
            ctx->pc = 0x29B98Cu;
            goto label_29b98c;
        }
    }
    ctx->pc = 0x29B894u;
label_29b894:
    // 0x29b894: 0x86630092  lh          $v1, 0x92($s3)
    ctx->pc = 0x29b894u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
    // 0x29b898: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x29b898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x29b89c: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x29b89cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x29b8a0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x29b8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x29b8a4: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x29b8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x29b8a8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x29b8a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b8ac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x29b8acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29b8b0: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x29b8b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29b8b4: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x29b8b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29b8b8: 0xc0a68f0  jal         func_29A3C0
    ctx->pc = 0x29B8B8u;
    SET_GPR_U32(ctx, 31, 0x29B8C0u);
    ctx->pc = 0x29B8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B8B8u;
    // 0x29b8bc: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A3C0u, 0x29B8B8u, 0x29B8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B8C0u;
label_29b8c0:
    // 0x29b8c0: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x29b8c0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29b8c4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x29b8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x29b8c8: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x29b8c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29b8cc: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x29b8ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x29b8d0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x29b8d0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x29b8d4: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x29b8d4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x29b8d8: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x29b8d8u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x29b8dc: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x29b8dcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x29b8e0: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x29b8e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x29b8e4: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x29b8e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x29b8e8: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x29b8e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x29b8ec: 0xc0cd766  jal         func_335D98
    ctx->pc = 0x29B8ECu;
    SET_GPR_U32(ctx, 31, 0x29B8F4u);
    ctx->pc = 0x29B8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B8ECu;
    // 0x29b8f0: 0xafa00028  sw          $zero, 0x28($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D98u, 0x29B8ECu, 0x29B8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B8F4u;
label_29b8f4:
    // 0x29b8f4: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x29b8f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29b8f8: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x29b8f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x29b8fc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x29b8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x29b900: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x29b900u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x29b904: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x29b904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29b908: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29b908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b90c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x29b90cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x29b910: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x29b910u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29b914: 0x7c620090  sq          $v0, 0x90($v1)
    ctx->pc = 0x29b914u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 144), GPR_VEC(ctx, 2));
    // 0x29b918: 0xe4620118  swc1        $f2, 0x118($v1)
    ctx->pc = 0x29b918u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 280), bits); }
    // 0x29b91c: 0xe461009c  swc1        $f1, 0x9C($v1)
    ctx->pc = 0x29b91cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x29b920: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x29b920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x29b924: 0xe4400110  swc1        $f0, 0x110($v0)
    ctx->pc = 0x29b924u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 272), bits); }
    // 0x29b928: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x29b928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x29b92c: 0xc0cd7a8  jal         func_335EA0
    ctx->pc = 0x29B92Cu;
    SET_GPR_U32(ctx, 31, 0x29B934u);
    ctx->pc = 0x29B930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B92Cu;
    // 0x29b930: 0xa071011c  sb          $s1, 0x11C($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 284), (uint8_t)GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335EA0u, 0x29B92Cu, 0x29B934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B934u;
label_29b934:
    // 0x29b934: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29b934u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b938: 0xc086c40  jal         func_21B100
    ctx->pc = 0x29B938u;
    SET_GPR_U32(ctx, 31, 0x29B940u);
    ctx->pc = 0x29B93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B938u;
    // 0x29b93c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21B100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21B100u, 0x29B938u, 0x29B940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B940u;
label_29b940:
    // 0x29b940: 0xc0a09bc  jal         func_2826F0
    ctx->pc = 0x29B940u;
    SET_GPR_U32(ctx, 31, 0x29B948u);
    ctx->pc = 0x29B944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B940u;
    // 0x29b944: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2826F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2826F0u, 0x29B940u, 0x29B948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B948u;
label_29b948:
    // 0x29b948: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29b948u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b94c: 0x5611000c  bnel        $s0, $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x29B94Cu;
    {
        const bool branch_taken_0x29b94c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        if (branch_taken_0x29b94c) {
            ctx->pc = 0x29B950u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29B94Cu;
            // 0x29b950: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29B980u;
            goto label_29b980;
        }
    }
    ctx->pc = 0x29B954u;
    // 0x29b954: 0x32830080  andi        $v1, $s4, 0x80
    ctx->pc = 0x29b954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)128);
    // 0x29b958: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x29b958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29b95c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x29b95cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x29b960: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29b960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b964: 0xc0a6d0a  jal         func_29B428
    ctx->pc = 0x29B964u;
    SET_GPR_U32(ctx, 31, 0x29B96Cu);
    ctx->pc = 0x29B968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B964u;
    // 0x29b968: 0x43280a  movz        $a1, $v0, $v1 (Delay Slot)
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B428u, 0x29B964u, 0x29B96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B96Cu;
label_29b96c:
    // 0x29b96c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x29b96cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x29b970: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29b970u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b974: 0xa070011d  sb          $s0, 0x11D($v1)
    ctx->pc = 0x29b974u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 285), (uint8_t)GPR_U32(ctx, 16));
    // 0x29b978: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x29B978u;
    {
        const bool branch_taken_0x29b978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B978u;
        // 0x29b97c: 0xa2400012  sb          $zero, 0x12($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 18), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b978) {
            ctx->pc = 0x29B98Cu;
            goto label_29b98c;
        }
    }
    ctx->pc = 0x29B980u;
label_29b980:
    // 0x29b980: 0xc0a2ab0  jal         func_28AAC0
    ctx->pc = 0x29B980u;
    SET_GPR_U32(ctx, 31, 0x29B988u);
    ctx->pc = 0x29B984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B980u;
    // 0x29b984: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AAC0u, 0x29B980u, 0x29B988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B988u;
label_29b988:
    // 0x29b988: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29b988u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29b98c:
    // 0x29b98c: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x29b98cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x29b990: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x29b990u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x29b994: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x29b994u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29b998: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x29b998u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29b99c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x29b99cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29b9a0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x29b9a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29b9a4: 0x3e00008  jr          $ra
    ctx->pc = 0x29B9A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B9A4u;
        // 0x29b9a8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B9A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29B9ACu;
    // 0x29b9ac: 0x0  nop
    ctx->pc = 0x29b9acu;
    // NOP
    ctx->pc = 0x29b9b0u;
}
