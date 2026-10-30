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

// Function: sub_0021C0A8
// Address: 0x21c0a8 - 0x21c240
void sub_0021C0A8_0x21c0a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021C0A8_0x21c0a8");
#endif

    switch (ctx->pc) {
        case 0x21c0c8u: goto label_21c0c8;
        case 0x21c10cu: goto label_21c10c;
        case 0x21c178u: goto label_21c178;
        case 0x21c198u: goto label_21c198;
        case 0x21c1d8u: goto label_21c1d8;
        case 0x21c1f8u: goto label_21c1f8;
        case 0x21c208u: goto label_21c208;
        case 0x21c214u: goto label_21c214;
        case 0x21c228u: goto label_21c228;
        default: break;
    }

    ctx->pc = 0x21c0a8u;

    // 0x21c0a8: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x21c0a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x21c0ac: 0x7fb001a0  sq          $s0, 0x1A0($sp)
    ctx->pc = 0x21c0acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 16));
    // 0x21c0b0: 0x7fb10190  sq          $s1, 0x190($sp)
    ctx->pc = 0x21c0b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 17));
    // 0x21c0b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21c0b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c0b8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x21c0b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c0bc: 0xffbf0180  sd          $ra, 0x180($sp)
    ctx->pc = 0x21c0bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 31));
    // 0x21c0c0: 0xc0d0d2a  jal         func_3434A8
    ctx->pc = 0x21C0C0u;
    SET_GPR_U32(ctx, 31, 0x21C0C8u);
    ctx->pc = 0x21C0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C0C0u;
    // 0x21c0c4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3434A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3434A8u, 0x21C0C0u, 0x21C0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C0C8u;
label_21c0c8:
    // 0x21c0c8: 0xafa00130  sw          $zero, 0x130($sp)
    ctx->pc = 0x21c0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 0));
    // 0x21c0cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21c0ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c0d0: 0xafa00134  sw          $zero, 0x134($sp)
    ctx->pc = 0x21c0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 0));
    // 0x21c0d4: 0xafa00138  sw          $zero, 0x138($sp)
    ctx->pc = 0x21c0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 0));
    // 0x21c0d8: 0xafa0013c  sw          $zero, 0x13C($sp)
    ctx->pc = 0x21c0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 0));
    // 0x21c0dc: 0xafa00140  sw          $zero, 0x140($sp)
    ctx->pc = 0x21c0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 0));
    // 0x21c0e0: 0xafa00144  sw          $zero, 0x144($sp)
    ctx->pc = 0x21c0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 0));
    // 0x21c0e4: 0xafa00148  sw          $zero, 0x148($sp)
    ctx->pc = 0x21c0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 0));
    // 0x21c0e8: 0xafa0014c  sw          $zero, 0x14C($sp)
    ctx->pc = 0x21c0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 0));
    // 0x21c0ec: 0xafa00150  sw          $zero, 0x150($sp)
    ctx->pc = 0x21c0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 0));
    // 0x21c0f0: 0xafa00154  sw          $zero, 0x154($sp)
    ctx->pc = 0x21c0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 0));
    // 0x21c0f4: 0xafa00158  sw          $zero, 0x158($sp)
    ctx->pc = 0x21c0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 0));
    // 0x21c0f8: 0xafa0015c  sw          $zero, 0x15C($sp)
    ctx->pc = 0x21c0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 0));
    // 0x21c0fc: 0xafa00160  sw          $zero, 0x160($sp)
    ctx->pc = 0x21c0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 0));
    // 0x21c100: 0xafa00164  sw          $zero, 0x164($sp)
    ctx->pc = 0x21c100u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 0));
    // 0x21c104: 0xc088e48  jal         func_223920
    ctx->pc = 0x21C104u;
    SET_GPR_U32(ctx, 31, 0x21C10Cu);
    ctx->pc = 0x21C108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C104u;
    // 0x21c108: 0xafa00168  sw          $zero, 0x168($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223920u, 0x21C104u, 0x21C10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C10Cu;
label_21c10c:
    // 0x21c10c: 0x1440003f  bnez        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x21C10Cu;
    {
        const bool branch_taken_0x21c10c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21C110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C10Cu;
        // 0x21c110: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c10c) {
            ctx->pc = 0x21C20Cu;
            goto label_21c20c;
        }
    }
    ctx->pc = 0x21C114u;
    // 0x21c114: 0x8e2200d8  lw          $v0, 0xD8($s1)
    ctx->pc = 0x21c114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    // 0x21c118: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x21C118u;
    {
        const bool branch_taken_0x21c118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c118) {
            ctx->pc = 0x21C20Cu;
            goto label_21c20c;
        }
    }
    ctx->pc = 0x21C120u;
    // 0x21c120: 0x8e0201a0  lw          $v0, 0x1A0($s0)
    ctx->pc = 0x21c120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 416)));
    // 0x21c124: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x21C124u;
    {
        const bool branch_taken_0x21c124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C124u;
        // 0x21c128: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c124) {
            ctx->pc = 0x21C20Cu;
            goto label_21c20c;
        }
    }
    ctx->pc = 0x21C12Cu;
    // 0x21c12c: 0x86260092  lh          $a2, 0x92($s1)
    ctx->pc = 0x21c12cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
    // 0x21c130: 0x86050092  lh          $a1, 0x92($s0)
    ctx->pc = 0x21c130u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
    // 0x21c134: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x21c134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x21c138: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x21c138u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x21c13c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21c13cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c140: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x21c140u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x21c144: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x21c144u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x21c148: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x21c148u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x21c14c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x21c14cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x21c150: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x21c150u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21c154: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x21c154u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x21c158: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x21c158u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x21c15c: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x21c15cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x21c160: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x21c160u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x21c164: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x21c164u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x21c168: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x21c168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
    // 0x21c16c: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x21c16cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x21c170: 0xc086624  jal         func_219890
    ctx->pc = 0x21C170u;
    SET_GPR_U32(ctx, 31, 0x21C178u);
    ctx->pc = 0x21C174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C170u;
    // 0x21c174: 0x7fa20170  sq          $v0, 0x170($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219890u, 0x21C170u, 0x21C178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C178u;
label_21c178:
    // 0x21c178: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x21c178u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x21c17c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x21c17cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x21c180: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x21c180u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21c184: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21c184u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c188: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x21c188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c18c: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x21c18cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x21c190: 0xc0d0d46  jal         func_343518
    ctx->pc = 0x21C190u;
    SET_GPR_U32(ctx, 31, 0x21C198u);
    ctx->pc = 0x21C194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C190u;
    // 0x21c194: 0xe7a10040  swc1        $f1, 0x40($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x343518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343518u, 0x21C190u, 0x21C198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C198u;
label_21c198:
    // 0x21c198: 0x8e0501a0  lw          $a1, 0x1A0($s0)
    ctx->pc = 0x21c198u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 416)));
    // 0x21c19c: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x21c19cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x21c1a0: 0x8c447198  lw          $a0, 0x7198($v0)
    ctx->pc = 0x21c1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x597198u));
    // 0x21c1a4: 0x24032803  addiu       $v1, $zero, 0x2803
    ctx->pc = 0x21c1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10243));
    // 0x21c1a8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x21c1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21c1ac: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x21c1acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21c1b0: 0xafa50130  sw          $a1, 0x130($sp)
    ctx->pc = 0x21c1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 5));
    // 0x21c1b4: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x21c1b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x21c1b8: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x21c1b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x21c1bc: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x21c1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
    // 0x21c1c0: 0xafb0013c  sw          $s0, 0x13C($sp)
    ctx->pc = 0x21c1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 16));
    // 0x21c1c4: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x21c1c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x21c1c8: 0xafa2014c  sw          $v0, 0x14C($sp)
    ctx->pc = 0x21c1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
    // 0x21c1cc: 0xafa80148  sw          $t0, 0x148($sp)
    ctx->pc = 0x21c1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 8));
    // 0x21c1d0: 0xc0cf9fc  jal         func_33E7F0
    ctx->pc = 0x21C1D0u;
    SET_GPR_U32(ctx, 31, 0x21C1D8u);
    ctx->pc = 0x21C1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C1D0u;
    // 0x21c1d4: 0xafbd0134  sw          $sp, 0x134($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E7F0u, 0x21C1D0u, 0x21C1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C1D8u;
label_21c1d8:
    // 0x21c1d8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x21C1D8u;
    {
        const bool branch_taken_0x21c1d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C1D8u;
        // 0x21c1dc: 0x8fa400b0  lw          $a0, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c1d8) {
            ctx->pc = 0x21C21Cu;
            goto label_21c21c;
        }
    }
    ctx->pc = 0x21C1E0u;
    // 0x21c1e0: 0x5091000f  beql        $a0, $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x21C1E0u;
    {
        const bool branch_taken_0x21c1e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 17));
        if (branch_taken_0x21c1e0) {
            ctx->pc = 0x21C1E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21C1E0u;
            // 0x21c1e4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21C220u;
            goto label_21c220;
        }
    }
    ctx->pc = 0x21C1E8u;
    // 0x21c1e8: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x21C1E8u;
    {
        const bool branch_taken_0x21c1e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c1e8) {
            ctx->pc = 0x21C1ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21C1E8u;
            // 0x21c1ec: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21C20Cu;
            goto label_21c20c;
        }
    }
    ctx->pc = 0x21C1F0u;
    // 0x21c1f0: 0xc08a61a  jal         func_229868
    ctx->pc = 0x21C1F0u;
    SET_GPR_U32(ctx, 31, 0x21C1F8u);
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x21C1F0u, 0x21C1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C1F8u;
label_21c1f8:
    // 0x21c1f8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21C1F8u;
    {
        const bool branch_taken_0x21c1f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21C1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C1F8u;
        // 0x21c1fc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c1f8) {
            ctx->pc = 0x21C20Cu;
            goto label_21c20c;
        }
    }
    ctx->pc = 0x21C200u;
    // 0x21c200: 0xc0e57ce  jal         func_395F38
    ctx->pc = 0x21C200u;
    SET_GPR_U32(ctx, 31, 0x21C208u);
    ctx->pc = 0x21C204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C200u;
    // 0x21c204: 0x8fa400b0  lw          $a0, 0xB0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x21C200u, 0x21C208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C208u;
label_21c208:
    // 0x21c208: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x21c208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_21c20c:
    // 0x21c20c: 0xc0d0d38  jal         func_3434E0
    ctx->pc = 0x21C20Cu;
    SET_GPR_U32(ctx, 31, 0x21C214u);
    ctx->pc = 0x21C210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C20Cu;
    // 0x21c210: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3434E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3434E0u, 0x21C20Cu, 0x21C214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C214u;
label_21c214:
    // 0x21c214: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x21C214u;
    {
        const bool branch_taken_0x21c214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C214u;
        // 0x21c218: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c214) {
            ctx->pc = 0x21C22Cu;
            goto label_21c22c;
        }
    }
    ctx->pc = 0x21C21Cu;
label_21c21c:
    // 0x21c21c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x21c21cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_21c220:
    // 0x21c220: 0xc0d0d38  jal         func_3434E0
    ctx->pc = 0x21C220u;
    SET_GPR_U32(ctx, 31, 0x21C228u);
    ctx->pc = 0x21C224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C220u;
    // 0x21c224: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3434E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3434E0u, 0x21C220u, 0x21C228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C228u;
label_21c228:
    // 0x21c228: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21c228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21c22c:
    // 0x21c22c: 0x7bb001a0  lq          $s0, 0x1A0($sp)
    ctx->pc = 0x21c22cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x21c230: 0x7bb10190  lq          $s1, 0x190($sp)
    ctx->pc = 0x21c230u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x21c234: 0xdfbf0180  ld          $ra, 0x180($sp)
    ctx->pc = 0x21c234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x21c238: 0x3e00008  jr          $ra
    ctx->pc = 0x21C238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C238u;
        // 0x21c23c: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21C240u;
}
