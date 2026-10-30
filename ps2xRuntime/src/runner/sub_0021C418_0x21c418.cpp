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

// Function: sub_0021C418
// Address: 0x21c418 - 0x21c570
void sub_0021C418_0x21c418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021C418_0x21c418");
#endif

    switch (ctx->pc) {
        case 0x21c438u: goto label_21c438;
        case 0x21c4ccu: goto label_21c4cc;
        case 0x21c4ecu: goto label_21c4ec;
        case 0x21c52cu: goto label_21c52c;
        case 0x21c544u: goto label_21c544;
        case 0x21c558u: goto label_21c558;
        default: break;
    }

    ctx->pc = 0x21c418u;

    // 0x21c418: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x21c418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x21c41c: 0x7fb001a0  sq          $s0, 0x1A0($sp)
    ctx->pc = 0x21c41cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 16));
    // 0x21c420: 0x7fb10190  sq          $s1, 0x190($sp)
    ctx->pc = 0x21c420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 17));
    // 0x21c424: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21c424u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c428: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x21c428u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c42c: 0xffbf0180  sd          $ra, 0x180($sp)
    ctx->pc = 0x21c42cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 31));
    // 0x21c430: 0xc0d0d2a  jal         func_3434A8
    ctx->pc = 0x21C430u;
    SET_GPR_U32(ctx, 31, 0x21C438u);
    ctx->pc = 0x21C434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C430u;
    // 0x21c434: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3434A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3434A8u, 0x21C430u, 0x21C438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C438u;
label_21c438:
    // 0x21c438: 0x8e2300d8  lw          $v1, 0xD8($s1)
    ctx->pc = 0x21c438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    // 0x21c43c: 0xafa00130  sw          $zero, 0x130($sp)
    ctx->pc = 0x21c43cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 0));
    // 0x21c440: 0xafa00134  sw          $zero, 0x134($sp)
    ctx->pc = 0x21c440u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 0));
    // 0x21c444: 0xafa00138  sw          $zero, 0x138($sp)
    ctx->pc = 0x21c444u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 0));
    // 0x21c448: 0xafa0013c  sw          $zero, 0x13C($sp)
    ctx->pc = 0x21c448u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 0));
    // 0x21c44c: 0xafa00140  sw          $zero, 0x140($sp)
    ctx->pc = 0x21c44cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 0));
    // 0x21c450: 0xafa00144  sw          $zero, 0x144($sp)
    ctx->pc = 0x21c450u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 0));
    // 0x21c454: 0xafa00148  sw          $zero, 0x148($sp)
    ctx->pc = 0x21c454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 0));
    // 0x21c458: 0xafa0014c  sw          $zero, 0x14C($sp)
    ctx->pc = 0x21c458u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 0));
    // 0x21c45c: 0xafa00150  sw          $zero, 0x150($sp)
    ctx->pc = 0x21c45cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 0));
    // 0x21c460: 0xafa00154  sw          $zero, 0x154($sp)
    ctx->pc = 0x21c460u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 0));
    // 0x21c464: 0xafa00158  sw          $zero, 0x158($sp)
    ctx->pc = 0x21c464u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 0));
    // 0x21c468: 0xafa0015c  sw          $zero, 0x15C($sp)
    ctx->pc = 0x21c468u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 0));
    // 0x21c46c: 0xafa00160  sw          $zero, 0x160($sp)
    ctx->pc = 0x21c46cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 0));
    // 0x21c470: 0xafa00164  sw          $zero, 0x164($sp)
    ctx->pc = 0x21c470u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 0));
    // 0x21c474: 0x10600035  beqz        $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x21C474u;
    {
        const bool branch_taken_0x21c474 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C474u;
        // 0x21c478: 0xafa00168  sw          $zero, 0x168($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c474) {
            ctx->pc = 0x21C54Cu;
            goto label_21c54c;
        }
    }
    ctx->pc = 0x21C47Cu;
    // 0x21c47c: 0x86260092  lh          $a2, 0x92($s1)
    ctx->pc = 0x21c47cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
    // 0x21c480: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x21c480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x21c484: 0x86050092  lh          $a1, 0x92($s0)
    ctx->pc = 0x21c484u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
    // 0x21c488: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x21c488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x21c48c: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x21c48cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x21c490: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21c490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c494: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x21c494u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x21c498: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x21c498u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x21c49c: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x21c49cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x21c4a0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x21c4a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x21c4a4: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x21c4a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21c4a8: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x21c4a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x21c4ac: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x21c4acu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x21c4b0: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x21c4b0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x21c4b4: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x21c4b4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x21c4b8: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x21c4b8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x21c4bc: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x21c4bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
    // 0x21c4c0: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x21c4c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x21c4c4: 0xc086624  jal         func_219890
    ctx->pc = 0x21C4C4u;
    SET_GPR_U32(ctx, 31, 0x21C4CCu);
    ctx->pc = 0x21C4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C4C4u;
    // 0x21c4c8: 0x7fa20170  sq          $v0, 0x170($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219890u, 0x21C4C4u, 0x21C4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C4CCu;
label_21c4cc:
    // 0x21c4cc: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x21c4ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x21c4d0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x21c4d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x21c4d4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x21c4d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21c4d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21c4d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c4dc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x21c4dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c4e0: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x21c4e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x21c4e4: 0xc0d0d46  jal         func_343518
    ctx->pc = 0x21C4E4u;
    SET_GPR_U32(ctx, 31, 0x21C4ECu);
    ctx->pc = 0x21C4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C4E4u;
    // 0x21c4e8: 0xe7a10040  swc1        $f1, 0x40($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x343518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343518u, 0x21C4E4u, 0x21C4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C4ECu;
label_21c4ec:
    // 0x21c4ec: 0x8e0501a0  lw          $a1, 0x1A0($s0)
    ctx->pc = 0x21c4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 416)));
    // 0x21c4f0: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x21c4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x21c4f4: 0x8c447198  lw          $a0, 0x7198($v0)
    ctx->pc = 0x21c4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x597198u));
    // 0x21c4f8: 0x24032803  addiu       $v1, $zero, 0x2803
    ctx->pc = 0x21c4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10243));
    // 0x21c4fc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x21c4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21c500: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x21c500u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21c504: 0xafa50130  sw          $a1, 0x130($sp)
    ctx->pc = 0x21c504u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 5));
    // 0x21c508: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x21c508u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x21c50c: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x21c50cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x21c510: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x21c510u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
    // 0x21c514: 0xafb0013c  sw          $s0, 0x13C($sp)
    ctx->pc = 0x21c514u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 16));
    // 0x21c518: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x21c518u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x21c51c: 0xafa2014c  sw          $v0, 0x14C($sp)
    ctx->pc = 0x21c51cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
    // 0x21c520: 0xafa80148  sw          $t0, 0x148($sp)
    ctx->pc = 0x21c520u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 8));
    // 0x21c524: 0xc0cf9fc  jal         func_33E7F0
    ctx->pc = 0x21C524u;
    SET_GPR_U32(ctx, 31, 0x21C52Cu);
    ctx->pc = 0x21C528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C524u;
    // 0x21c528: 0xafbd0134  sw          $sp, 0x134($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E7F0u, 0x21C524u, 0x21C52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C52Cu;
label_21c52c:
    // 0x21c52c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21C52Cu;
    {
        const bool branch_taken_0x21c52c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C52Cu;
        // 0x21c530: 0x8fb000b0  lw          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c52c) {
            ctx->pc = 0x21C54Cu;
            goto label_21c54c;
        }
    }
    ctx->pc = 0x21C534u;
    // 0x21c534: 0x12110005  beq         $s0, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x21C534u;
    {
        const bool branch_taken_0x21c534 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x21C538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C534u;
        // 0x21c538: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c534) {
            ctx->pc = 0x21C54Cu;
            goto label_21c54c;
        }
    }
    ctx->pc = 0x21C53Cu;
    // 0x21c53c: 0xc0d0d38  jal         func_3434E0
    ctx->pc = 0x21C53Cu;
    SET_GPR_U32(ctx, 31, 0x21C544u);
    ctx->pc = 0x21C540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C53Cu;
    // 0x21c540: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3434E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3434E0u, 0x21C53Cu, 0x21C544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C544u;
label_21c544:
    // 0x21c544: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x21C544u;
    {
        const bool branch_taken_0x21c544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C544u;
        // 0x21c548: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c544) {
            ctx->pc = 0x21C55Cu;
            goto label_21c55c;
        }
    }
    ctx->pc = 0x21C54Cu;
label_21c54c:
    // 0x21c54c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x21c54cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c550: 0xc0d0d38  jal         func_3434E0
    ctx->pc = 0x21C550u;
    SET_GPR_U32(ctx, 31, 0x21C558u);
    ctx->pc = 0x21C554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C550u;
    // 0x21c554: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3434E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3434E0u, 0x21C550u, 0x21C558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C558u;
label_21c558:
    // 0x21c558: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21c558u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21c55c:
    // 0x21c55c: 0x7bb001a0  lq          $s0, 0x1A0($sp)
    ctx->pc = 0x21c55cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x21c560: 0x7bb10190  lq          $s1, 0x190($sp)
    ctx->pc = 0x21c560u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x21c564: 0xdfbf0180  ld          $ra, 0x180($sp)
    ctx->pc = 0x21c564u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x21c568: 0x3e00008  jr          $ra
    ctx->pc = 0x21C568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C568u;
        // 0x21c56c: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C568u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21C570u;
}
