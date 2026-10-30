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

// Function: sub_0021EE88
// Address: 0x21ee88 - 0x21ef58
void sub_0021EE88_0x21ee88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021EE88_0x21ee88");
#endif

    switch (ctx->pc) {
        case 0x21eeb0u: goto label_21eeb0;
        case 0x21ef30u: goto label_21ef30;
        case 0x21ef40u: goto label_21ef40;
        default: break;
    }

    ctx->pc = 0x21ee88u;

    // 0x21ee88: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x21ee88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x21ee8c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x21ee8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x21ee90: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x21ee90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x21ee94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21ee94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ee98: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x21ee98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x21ee9c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x21ee9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21eea0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x21eea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x21eea4: 0x8e020168  lw          $v0, 0x168($s0)
    ctx->pc = 0x21eea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 360)));
    // 0x21eea8: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x21EEA8u;
    SET_GPR_U32(ctx, 31, 0x21EEB0u);
    ctx->pc = 0x21EEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EEA8u;
    // 0x21eeac: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x21EEA8u, 0x21EEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EEB0u;
label_21eeb0:
    // 0x21eeb0: 0x54400024  bnel        $v0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x21EEB0u;
    {
        const bool branch_taken_0x21eeb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21eeb0) {
            ctx->pc = 0x21EEB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21EEB0u;
            // 0x21eeb4: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21EF44u;
            goto label_21ef44;
        }
    }
    ctx->pc = 0x21EEB8u;
    // 0x21eeb8: 0x86030092  lh          $v1, 0x92($s0)
    ctx->pc = 0x21eeb8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
    // 0x21eebc: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x21eebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x21eec0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x21eec0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x21eec4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x21eec4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21eec8: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x21eec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x21eecc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x21eeccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x21eed0: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x21eed0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x21eed4: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x21eed4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x21eed8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x21eed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21eedc: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x21eedcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x21eee0: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x21eee0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
    // 0x21eee4: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x21eee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x21eee8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x21eee8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x21eeec: 0x8ce4aa84  lw          $a0, -0x557C($a3)
    ctx->pc = 0x21eeecu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50AA84u));
    // 0x21eef0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21eef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21eef4: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x21eef4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21eef8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x21eef8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x21eefc: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x21eefcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21ef00: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x21ef00u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x21ef04: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x21ef04u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x21ef08: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x21ef08u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x21ef0c: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x21ef0cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x21ef10: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x21ef10u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x21ef14: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x21ef14u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x21ef18: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x21ef18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x21ef1c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x21ef1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x21ef20: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x21ef20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21ef24: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x21ef24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x21ef28: 0xc043f74  jal         func_10FDD0
    ctx->pc = 0x21EF28u;
    SET_GPR_U32(ctx, 31, 0x21EF30u);
    ctx->pc = 0x21EF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EF28u;
    // 0x21ef2c: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FDD0u, 0x21EF28u, 0x21EF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EF30u;
label_21ef30:
    // 0x21ef30: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x21ef30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x21ef34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21ef34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ef38: 0xc087bd6  jal         func_21EF58
    ctx->pc = 0x21EF38u;
    SET_GPR_U32(ctx, 31, 0x21EF40u);
    ctx->pc = 0x21EF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EF38u;
    // 0x21ef3c: 0x27a50044  addiu       $a1, $sp, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21EF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21EF58u, 0x21EF38u, 0x21EF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EF40u;
label_21ef40:
    // 0x21ef40: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x21ef40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_21ef44:
    // 0x21ef44: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x21ef44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21ef48: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x21ef48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21ef4c: 0x3e00008  jr          $ra
    ctx->pc = 0x21EF4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21EF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EF4Cu;
        // 0x21ef50: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21EF4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21EF54u;
    // 0x21ef54: 0x0  nop
    ctx->pc = 0x21ef54u;
    // NOP
    ctx->pc = 0x21ef58u;
}
