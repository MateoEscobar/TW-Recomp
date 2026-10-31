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

// Function: sub_0038B0E8
// Address: 0x38b0e8 - 0x38b1f8
void sub_0038B0E8_0x38b0e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038B0E8_0x38b0e8");
#endif

    switch (ctx->pc) {
        case 0x38b15cu: goto label_38b15c;
        case 0x38b168u: goto label_38b168;
        case 0x38b1c0u: goto label_38b1c0;
        default: break;
    }

    ctx->pc = 0x38b0e8u;

    // 0x38b0e8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x38b0e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x38b0ec: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x38b0ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x38b0f0: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x38b0f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x38b0f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38b0f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38b0f8: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x38b0f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x38b0fc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x38b0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x38b100: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x38b100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x38b104: 0x3c12002a  lui         $s2, 0x2A
    ctx->pc = 0x38b104u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)42 << 16));
    // 0x38b108: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x38b108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x38b10c: 0x365280c0  ori         $s2, $s2, 0x80C0
    ctx->pc = 0x38b10cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)32960);
    // 0x38b110: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x38b110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x38b114: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x38b114u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38b118: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x38b118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x38b11c: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x38b11cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38b120: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x38b120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x38b124: 0x241405f0  addiu       $s4, $zero, 0x5F0
    ctx->pc = 0x38b124u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1520));
    // 0x38b128: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x38b128u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38b12c: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x38b12cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x38b130: 0x7a030010  lq          $v1, 0x10($s0)
    ctx->pc = 0x38b130u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x38b134: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x38b134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x38b138: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x38b138u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x38b13c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x38b13cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x38b140: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x38b140u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x38b144: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x38b144u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x38b148: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x38b148u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x38b14c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x38b14cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x38b150: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x38b150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x38b154: 0xc0cd940  jal         func_336500
    ctx->pc = 0x38B154u;
    SET_GPR_U32(ctx, 31, 0x38B15Cu);
    ctx->pc = 0x38B158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38B154u;
    // 0x38b158: 0x7fa30050  sq          $v1, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336500u, 0x38B154u, 0x38B15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B15Cu;
label_38b15c:
    // 0x38b15c: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x38b15cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x38b160: 0x2456e5b0  addiu       $s6, $v0, -0x1A50
    ctx->pc = 0x38b160u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960560));
    // 0x38b164: 0x0  nop
    ctx->pc = 0x38b164u;
    // NOP
label_38b168:
    // 0x38b168: 0x2351804  sllv        $v1, $s5, $s1
    ctx->pc = 0x38b168u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), GPR_U32(ctx, 17) & 0x1F));
    // 0x38b16c: 0x2431024  and         $v0, $s2, $v1
    ctx->pc = 0x38b16cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 3));
    // 0x38b170: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x38B170u;
    {
        const bool branch_taken_0x38b170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38b170) {
            ctx->pc = 0x38B174u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38B170u;
            // 0x38b174: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38B1C4u;
            goto label_38b1c4;
        }
    }
    ctx->pc = 0x38B178u;
    // 0x38b178: 0x8e0211f0  lw          $v0, 0x11F0($s0)
    ctx->pc = 0x38b178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4592)));
    // 0x38b17c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x38b17cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x38b180: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x38B180u;
    {
        const bool branch_taken_0x38b180 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38b180) {
            ctx->pc = 0x38B184u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38B180u;
            // 0x38b184: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38B1C4u;
            goto label_38b1c4;
        }
    }
    ctx->pc = 0x38B188u;
    // 0x38b188: 0x8e0211f8  lw          $v0, 0x11F8($s0)
    ctx->pc = 0x38b188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4600)));
    // 0x38b18c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x38b18cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38b190: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x38b190u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x38b194: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x38b194u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x38b198: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38b198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38b19c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x38b19cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38b1a0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x38b1a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x38b1a4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x38B1A4u;
    {
        const bool branch_taken_0x38b1a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38B1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B1A4u;
        // 0x38b1a8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b1a4) {
            ctx->pc = 0x38B1C0u;
            goto label_38b1c0;
        }
    }
    ctx->pc = 0x38B1ACu;
    // 0x38b1ac: 0x8e0511e0  lw          $a1, 0x11E0($s0)
    ctx->pc = 0x38b1acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4576)));
    // 0x38b1b0: 0xb41018  mult        $v0, $a1, $s4
    ctx->pc = 0x38b1b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x38b1b4: 0x562821  addu        $a1, $v0, $s6
    ctx->pc = 0x38b1b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x38b1b8: 0xc0e2936  jal         func_38A4D8
    ctx->pc = 0x38B1B8u;
    SET_GPR_U32(ctx, 31, 0x38B1C0u);
    ctx->pc = 0x38B1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38B1B8u;
    // 0x38b1bc: 0xb32821  addu        $a1, $a1, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A4D8u, 0x38B1B8u, 0x38B1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B1C0u;
label_38b1c0:
    // 0x38b1c0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x38b1c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_38b1c4:
    // 0x38b1c4: 0x2e22001a  sltiu       $v0, $s1, 0x1A
    ctx->pc = 0x38b1c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x38b1c8: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x38B1C8u;
    {
        const bool branch_taken_0x38b1c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38B1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B1C8u;
        // 0x38b1cc: 0x26730030  addiu       $s3, $s3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b1c8) {
            ctx->pc = 0x38B168u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38b168;
        }
    }
    ctx->pc = 0x38B1D0u;
    // 0x38b1d0: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x38b1d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x38b1d4: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x38b1d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x38b1d8: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x38b1d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x38b1dc: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x38b1dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x38b1e0: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x38b1e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x38b1e4: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x38b1e4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x38b1e8: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x38b1e8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x38b1ec: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x38b1ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x38b1f0: 0x3e00008  jr          $ra
    ctx->pc = 0x38B1F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38B1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B1F0u;
        // 0x38b1f4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38B1F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38B1F8u;
}
