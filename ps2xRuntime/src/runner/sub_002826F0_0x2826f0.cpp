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

// Function: sub_002826F0
// Address: 0x2826f0 - 0x2829e8
void sub_002826F0_0x2826f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002826F0_0x2826f0");
#endif

    switch (ctx->pc) {
        case 0x282724u: goto label_282724;
        case 0x282734u: goto label_282734;
        case 0x282800u: goto label_282800;
        case 0x282860u: goto label_282860;
        case 0x282888u: goto label_282888;
        case 0x2828b4u: goto label_2828b4;
        case 0x28291cu: goto label_28291c;
        case 0x282944u: goto label_282944;
        case 0x2829b0u: goto label_2829b0;
        default: break;
    }

    ctx->pc = 0x2826f0u;

    // 0x2826f0: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x2826f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x2826f4: 0x7fb20150  sq          $s2, 0x150($sp)
    ctx->pc = 0x2826f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 18));
    // 0x2826f8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2826f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2826fc: 0x7fb00170  sq          $s0, 0x170($sp)
    ctx->pc = 0x2826fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 16));
    // 0x282700: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x282700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x282704: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x282704u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282708: 0x7fb10160  sq          $s1, 0x160($sp)
    ctx->pc = 0x282708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 17));
    // 0x28270c: 0x7fb30140  sq          $s3, 0x140($sp)
    ctx->pc = 0x28270cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 19));
    // 0x282710: 0x7fb40130  sq          $s4, 0x130($sp)
    ctx->pc = 0x282710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 20));
    // 0x282714: 0x7fb50120  sq          $s5, 0x120($sp)
    ctx->pc = 0x282714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 21));
    // 0x282718: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x282718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
    // 0x28271c: 0xc08748a  jal         func_21D228
    ctx->pc = 0x28271Cu;
    SET_GPR_U32(ctx, 31, 0x282724u);
    ctx->pc = 0x282720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28271Cu;
    // 0x282720: 0xe7b40180  swc1        $f20, 0x180($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D228u, 0x28271Cu, 0x282724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282724u;
label_282724:
    // 0x282724: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x282724u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
    // 0x282728: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x282728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28272c: 0xc089998  jal         func_226660
    ctx->pc = 0x28272Cu;
    SET_GPR_U32(ctx, 31, 0x282734u);
    ctx->pc = 0x282730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28272Cu;
    // 0x282730: 0x34a54240  ori         $a1, $a1, 0x4240 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16960);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x28272Cu, 0x282734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282734u;
label_282734:
    // 0x282734: 0x144000a1  bnez        $v0, . + 4 + (0xA1 << 2)
    ctx->pc = 0x282734u;
    {
        const bool branch_taken_0x282734 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x282738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282734u;
        // 0x282738: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282734) {
            ctx->pc = 0x2829BCu;
            goto label_2829bc;
        }
    }
    ctx->pc = 0x28273Cu;
    // 0x28273c: 0xde4200e0  ld          $v0, 0xE0($s2)
    ctx->pc = 0x28273cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 224)));
    // 0x282740: 0x7ba300f0  lq          $v1, 0xF0($sp)
    ctx->pc = 0x282740u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x282744: 0x2107a  dsrl        $v0, $v0, 1
    ctx->pc = 0x282744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
    // 0x282748: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x282748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x28274c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28274cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x282750: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x282750u;
    {
        const bool branch_taken_0x282750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x282754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282750u;
        // 0x282754: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282750) {
            ctx->pc = 0x282780u;
            goto label_282780;
        }
    }
    ctx->pc = 0x282758u;
    // 0x282758: 0x8e4301a8  lw          $v1, 0x1A8($s2)
    ctx->pc = 0x282758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 424)));
    // 0x28275c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x28275cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x282760: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x282760u;
    {
        const bool branch_taken_0x282760 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x282764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282760u;
        // 0x282764: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282760) {
            ctx->pc = 0x282770u;
            goto label_282770;
        }
    }
    ctx->pc = 0x282768u;
    // 0x282768: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x282768u;
    {
        const bool branch_taken_0x282768 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x282768) {
            ctx->pc = 0x282780u;
            goto label_282780;
        }
    }
    ctx->pc = 0x282770u;
label_282770:
    // 0x282770: 0x3c014090  lui         $at, 0x4090
    ctx->pc = 0x282770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16528 << 16));
    // 0x282774: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x282774u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x282778: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x282778u;
    {
        const bool branch_taken_0x282778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28277Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282778u;
        // 0x28277c: 0xe7a00050  swc1        $f0, 0x50($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x282778) {
            ctx->pc = 0x282790u;
            goto label_282790;
        }
    }
    ctx->pc = 0x282780u;
label_282780:
    // 0x282780: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x282780u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x282784: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x282784u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x282788: 0x0  nop
    ctx->pc = 0x282788u;
    // NOP
    // 0x28278c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x28278cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_282790:
    // 0x282790: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x282790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x282794: 0x3c013fd9  lui         $at, 0x3FD9
    ctx->pc = 0x282794u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16345 << 16));
    // 0x282798: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x282798u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x28279c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28279cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2827a0: 0x27b000e0  addiu       $s0, $sp, 0xE0
    ctx->pc = 0x2827a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2827a4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2827a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2827a8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2827a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2827ac: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x2827acu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    // 0x2827b0: 0xafa000e0  sw          $zero, 0xE0($sp)
    ctx->pc = 0x2827b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
    // 0x2827b4: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2827b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2827b8: 0xafa000e4  sw          $zero, 0xE4($sp)
    ctx->pc = 0x2827b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 0));
    // 0x2827bc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2827bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2827c0: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x2827c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2827c4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2827c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2827c8: 0xe614000c  swc1        $f20, 0xC($s0)
    ctx->pc = 0x2827c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x2827cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2827ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2827d0: 0x8e2447c4  lw          $a0, 0x47C4($s1)
    ctx->pc = 0x2827d0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5147C4u));
    // 0x2827d4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2827d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2827d8: 0x7a420010  lq          $v0, 0x10($s2)
    ctx->pc = 0x2827d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2827dc: 0x7ba300e0  lq          $v1, 0xE0($sp)
    ctx->pc = 0x2827dcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2827e0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2827e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2827e4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2827e4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2827e8: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2827e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2827ec: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2827ecu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2827f0: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x2827f0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2827f4: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x2827f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x2827f8: 0xc1036e2  jal         func_40DB88
    ctx->pc = 0x2827F8u;
    SET_GPR_U32(ctx, 31, 0x282800u);
    ctx->pc = 0x2827FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2827F8u;
    // 0x2827fc: 0x7fa20100  sq          $v0, 0x100($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB88u, 0x2827F8u, 0x282800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282800u;
label_282800:
    // 0x282800: 0x3c013f30  lui         $at, 0x3F30
    ctx->pc = 0x282800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16176 << 16));
    // 0x282804: 0x3421a3d7  ori         $at, $at, 0xA3D7
    ctx->pc = 0x282804u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41943);
    // 0x282808: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x282808u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28280c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x28280cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x282810: 0xafa000e0  sw          $zero, 0xE0($sp)
    ctx->pc = 0x282810u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
    // 0x282814: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x282814u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x282818: 0xafa000e4  sw          $zero, 0xE4($sp)
    ctx->pc = 0x282818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 0));
    // 0x28281c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x28281cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282820: 0xe614000c  swc1        $f20, 0xC($s0)
    ctx->pc = 0x282820u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x282824: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x282824u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282828: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x282828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x28282c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28282cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282830: 0x8e2447c4  lw          $a0, 0x47C4($s1)
    ctx->pc = 0x282830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18372)));
    // 0x282834: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x282834u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282838: 0x7a420010  lq          $v0, 0x10($s2)
    ctx->pc = 0x282838u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x28283c: 0x7ba300e0  lq          $v1, 0xE0($sp)
    ctx->pc = 0x28283cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x282840: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x282840u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x282844: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x282844u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x282848: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x282848u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x28284c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x28284cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x282850: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x282850u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x282854: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x282854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x282858: 0xc1036e2  jal         func_40DB88
    ctx->pc = 0x282858u;
    SET_GPR_U32(ctx, 31, 0x282860u);
    ctx->pc = 0x28285Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282858u;
    // 0x28285c: 0x7fa20100  sq          $v0, 0x100($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB88u, 0x282858u, 0x282860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282860u;
label_282860:
    // 0x282860: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x282860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x282864: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x282864u;
    {
        const bool branch_taken_0x282864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x282868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282864u;
        // 0x282868: 0x8fa200b0  lw          $v0, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282864) {
            ctx->pc = 0x282924u;
            goto label_282924;
        }
    }
    ctx->pc = 0x28286Cu;
    // 0x28286c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x28286Cu;
    {
        const bool branch_taken_0x28286c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x282870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28286Cu;
        // 0x282870: 0xc7ac0074  lwc1        $f12, 0x74($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28286c) {
            ctx->pc = 0x282894u;
            goto label_282894;
        }
    }
    ctx->pc = 0x282874u;
    // 0x282874: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x282874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x282878: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x282878u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x28287c: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x28287cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x282880: 0xc0a0412  jal         func_281048
    ctx->pc = 0x282880u;
    SET_GPR_U32(ctx, 31, 0x282888u);
    ctx->pc = 0x282884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282880u;
    // 0x282884: 0xc7ad00b4  lwc1        $f13, 0xB4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x281048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281048u, 0x282880u, 0x282888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282888u;
label_282888:
    // 0x282888: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x282888u;
    {
        const bool branch_taken_0x282888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x282888) {
            ctx->pc = 0x28288Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x282888u;
            // 0x28288c: 0xafa00070  sw          $zero, 0x70($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x282894u;
            goto label_282894;
        }
    }
    ctx->pc = 0x282890u;
    // 0x282890: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x282890u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
label_282894:
    // 0x282894: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x282894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x282898: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x282898u;
    {
        const bool branch_taken_0x282898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28289Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282898u;
        // 0x28289c: 0x8fa30088  lw          $v1, 0x88($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282898) {
            ctx->pc = 0x282924u;
            goto label_282924;
        }
    }
    ctx->pc = 0x2828A0u;
    // 0x2828a0: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x2828a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2828a4: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2828A4u;
    {
        const bool branch_taken_0x2828a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2828A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2828A4u;
        // 0x2828a8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2828a4) {
            ctx->pc = 0x2828DCu;
            goto label_2828dc;
        }
    }
    ctx->pc = 0x2828ACu;
    // 0x2828ac: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x2828ACu;
    SET_GPR_U32(ctx, 31, 0x2828B4u);
    ctx->pc = 0x2828B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2828ACu;
    // 0x2828b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x2828ACu, 0x2828B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2828B4u;
label_2828b4:
    // 0x2828b4: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x2828b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
    // 0x2828b8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2828B8u;
    {
        const bool branch_taken_0x2828b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2828BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2828B8u;
        // 0x2828bc: 0x97a2008c  lhu         $v0, 0x8C($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 140)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2828b8) {
            ctx->pc = 0x2828CCu;
            goto label_2828cc;
        }
    }
    ctx->pc = 0x2828C0u;
    // 0x2828c0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2828c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2828c4: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2828C4u;
    {
        const bool branch_taken_0x2828c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2828c4) {
            ctx->pc = 0x2828C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2828C4u;
            // 0x2828c8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2828E0u;
            goto label_2828e0;
        }
    }
    ctx->pc = 0x2828CCu;
label_2828cc:
    // 0x2828cc: 0x97a2008c  lhu         $v0, 0x8C($sp)
    ctx->pc = 0x2828ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x2828d0: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x2828d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x2828d4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2828D4u;
    {
        const bool branch_taken_0x2828d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2828d4) {
            ctx->pc = 0x2828E0u;
            goto label_2828e0;
        }
    }
    ctx->pc = 0x2828DCu;
label_2828dc:
    // 0x2828dc: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2828dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2828e0:
    // 0x2828e0: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2828E0u;
    {
        const bool branch_taken_0x2828e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2828E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2828E0u;
        // 0x2828e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2828e0) {
            ctx->pc = 0x282924u;
            goto label_282924;
        }
    }
    ctx->pc = 0x2828E8u;
    // 0x2828e8: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2828e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x2828ec: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2828ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2828f0: 0x3c013fd9  lui         $at, 0x3FD9
    ctx->pc = 0x2828f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16345 << 16));
    // 0x2828f4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2828f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x2828f8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2828f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2828fc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2828fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282900: 0x3c01403a  lui         $at, 0x403A
    ctx->pc = 0x282900u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16442 << 16));
    // 0x282904: 0x34213d71  ori         $at, $at, 0x3D71
    ctx->pc = 0x282904u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15729);
    // 0x282908: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x282908u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x28290c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x28290cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282910: 0x240701b5  addiu       $a3, $zero, 0x1B5
    ctx->pc = 0x282910u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 437));
    // 0x282914: 0xc0a08dc  jal         func_282370
    ctx->pc = 0x282914u;
    SET_GPR_U32(ctx, 31, 0x28291Cu);
    ctx->pc = 0x282918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282914u;
    // 0x282918: 0x240801b8  addiu       $t0, $zero, 0x1B8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282370u, 0x282914u, 0x28291Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28291Cu;
label_28291c:
    // 0x28291c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x28291Cu;
    {
        const bool branch_taken_0x28291c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28291Cu;
        // 0x282920: 0x7bb00170  lq          $s0, 0x170($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28291c) {
            ctx->pc = 0x2829C0u;
            goto label_2829c0;
        }
    }
    ctx->pc = 0x282924u;
label_282924:
    // 0x282924: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x282924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x282928: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x282928u;
    {
        const bool branch_taken_0x282928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28292Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282928u;
        // 0x28292c: 0x8fa300c8  lw          $v1, 0xC8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282928) {
            ctx->pc = 0x2829B8u;
            goto label_2829b8;
        }
    }
    ctx->pc = 0x282930u;
    // 0x282930: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x282930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x282934: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x282934u;
    {
        const bool branch_taken_0x282934 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x282938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282934u;
        // 0x282938: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282934) {
            ctx->pc = 0x28296Cu;
            goto label_28296c;
        }
    }
    ctx->pc = 0x28293Cu;
    // 0x28293c: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x28293Cu;
    SET_GPR_U32(ctx, 31, 0x282944u);
    ctx->pc = 0x282940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28293Cu;
    // 0x282940: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x28293Cu, 0x282944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282944u;
label_282944:
    // 0x282944: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x282944u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
    // 0x282948: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x282948u;
    {
        const bool branch_taken_0x282948 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28294Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282948u;
        // 0x28294c: 0x97a200cc  lhu         $v0, 0xCC($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 204)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282948) {
            ctx->pc = 0x28295Cu;
            goto label_28295c;
        }
    }
    ctx->pc = 0x282950u;
    // 0x282950: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x282950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x282954: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x282954u;
    {
        const bool branch_taken_0x282954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x282954) {
            ctx->pc = 0x282958u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x282954u;
            // 0x282958: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x282970u;
            goto label_282970;
        }
    }
    ctx->pc = 0x28295Cu;
label_28295c:
    // 0x28295c: 0x97a200cc  lhu         $v0, 0xCC($sp)
    ctx->pc = 0x28295cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x282960: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x282960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x282964: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x282964u;
    {
        const bool branch_taken_0x282964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x282964) {
            ctx->pc = 0x282970u;
            goto label_282970;
        }
    }
    ctx->pc = 0x28296Cu;
label_28296c:
    // 0x28296c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x28296cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_282970:
    // 0x282970: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x282970u;
    {
        const bool branch_taken_0x282970 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x282974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282970u;
        // 0x282974: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282970) {
            ctx->pc = 0x2829B8u;
            goto label_2829b8;
        }
    }
    ctx->pc = 0x282978u;
    // 0x282978: 0x3c013fe6  lui         $at, 0x3FE6
    ctx->pc = 0x282978u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16358 << 16));
    // 0x28297c: 0x34216667  ori         $at, $at, 0x6667
    ctx->pc = 0x28297cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26215);
    // 0x282980: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x282980u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x282984: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x282984u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x282988: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x282988u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x28298c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x28298cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x282990: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x282990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282994: 0x3c013fd9  lui         $at, 0x3FD9
    ctx->pc = 0x282994u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16345 << 16));
    // 0x282998: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x282998u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x28299c: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x28299cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2829a0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2829a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2829a4: 0x240701bb  addiu       $a3, $zero, 0x1BB
    ctx->pc = 0x2829a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 443));
    // 0x2829a8: 0xc0a08dc  jal         func_282370
    ctx->pc = 0x2829A8u;
    SET_GPR_U32(ctx, 31, 0x2829B0u);
    ctx->pc = 0x2829ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2829A8u;
    // 0x2829ac: 0x240801be  addiu       $t0, $zero, 0x1BE (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 446));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282370u, 0x2829A8u, 0x2829B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2829B0u;
label_2829b0:
    // 0x2829b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2829B0u;
    {
        const bool branch_taken_0x2829b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2829B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2829B0u;
        // 0x2829b4: 0x7bb00170  lq          $s0, 0x170($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2829b0) {
            ctx->pc = 0x2829C0u;
            goto label_2829c0;
        }
    }
    ctx->pc = 0x2829B8u;
label_2829b8:
    // 0x2829b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2829b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2829bc:
    // 0x2829bc: 0x7bb00170  lq          $s0, 0x170($sp)
    ctx->pc = 0x2829bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_2829c0:
    // 0x2829c0: 0x7bb10160  lq          $s1, 0x160($sp)
    ctx->pc = 0x2829c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2829c4: 0x7bb20150  lq          $s2, 0x150($sp)
    ctx->pc = 0x2829c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2829c8: 0x7bb30140  lq          $s3, 0x140($sp)
    ctx->pc = 0x2829c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2829cc: 0x7bb40130  lq          $s4, 0x130($sp)
    ctx->pc = 0x2829ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2829d0: 0x7bb50120  lq          $s5, 0x120($sp)
    ctx->pc = 0x2829d0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2829d4: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x2829d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2829d8: 0xc7b40180  lwc1        $f20, 0x180($sp)
    ctx->pc = 0x2829d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2829dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2829DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2829E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2829DCu;
        // 0x2829e0: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2829DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2829E4u;
    // 0x2829e4: 0x0  nop
    ctx->pc = 0x2829e4u;
    // NOP
    ctx->pc = 0x2829e8u;
}
