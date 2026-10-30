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

// Function: sub_002F9980
// Address: 0x2f9980 - 0x2f9a80
void sub_002F9980_0x2f9980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F9980_0x2f9980");
#endif

    switch (ctx->pc) {
        case 0x2f99f4u: goto label_2f99f4;
        case 0x2f9a70u: goto label_2f9a70;
        default: break;
    }

    ctx->pc = 0x2f9980u;

    // 0x2f9980: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2f9980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2f9984: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f9984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f9988: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x2f9988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x2f998c: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x2f998cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x2f9990: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f9990u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9994: 0x92020032  lbu         $v0, 0x32($s0)
    ctx->pc = 0x2f9994u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 50)));
    // 0x2f9998: 0x54430036  bnel        $v0, $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x2F9998u;
    {
        const bool branch_taken_0x2f9998 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f9998) {
            ctx->pc = 0x2F999Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F9998u;
            // 0x2f999c: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9A74u;
            goto label_2f9a74;
        }
    }
    ctx->pc = 0x2F99A0u;
    // 0x2f99a0: 0x92020030  lbu         $v0, 0x30($s0)
    ctx->pc = 0x2f99a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2f99a4: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x2f99a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x2f99a8: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x2f99a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2f99ac: 0x3c090051  lui         $t1, 0x51
    ctx->pc = 0x2f99acu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)81 << 16));
    // 0x2f99b0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2f99b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2f99b4: 0x8cc447c4  lw          $a0, 0x47C4($a2)
    ctx->pc = 0x2f99b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 18372)));
    // 0x2f99b8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2f99b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f99bc: 0x25291770  addiu       $t1, $t1, 0x1770
    ctx->pc = 0x2f99bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 6000));
    // 0x2f99c0: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2f99c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f99c4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2f99c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f99c8: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x2f99c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x2f99cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f99ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f99d0: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2f99d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2f99d4: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x2f99d4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
    // 0x2f99d8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f99d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f99dc: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x2f99dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x2f99e0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2f99e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f99e4: 0x79220000  lq          $v0, 0x0($t1)
    ctx->pc = 0x2f99e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2f99e8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2f99e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2f99ec: 0xc1036e2  jal         func_40DB88
    ctx->pc = 0x2F99ECu;
    SET_GPR_U32(ctx, 31, 0x2F99F4u);
    ctx->pc = 0x2F99F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F99ECu;
    // 0x2f99f0: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB88u, 0x2F99ECu, 0x2F99F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F99F4u;
label_2f99f4:
    // 0x2f99f4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2f99f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f99f8: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2F99F8u;
    {
        const bool branch_taken_0x2f99f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F99FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F99F8u;
        // 0x2f99fc: 0xc7a00044  lwc1        $f0, 0x44($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f99f8) {
            ctx->pc = 0x2F9A4Cu;
            goto label_2f9a4c;
        }
    }
    ctx->pc = 0x2F9A00u;
    // 0x2f9a00: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x2f9a00u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f9a04: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2f9a04u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2f9a08: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2f9a08u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2f9a0c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2f9a0cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2f9a10: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2f9a10u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2f9a14: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x2f9a14u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2f9a18: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x2f9a18u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f9a1c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2f9a1cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2f9a20: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2f9a20u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2f9a24: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2f9a24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2f9a28: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2f9a28u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2f9a2c: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x2f9a2cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2f9a30: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x2f9a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x2f9a34: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x2f9a34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    // 0x2f9a38: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x2f9a38u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
    // 0x2f9a3c: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x2f9a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    // 0x2f9a40: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x2f9a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
    // 0x2f9a44: 0x7fa30090  sq          $v1, 0x90($sp)
    ctx->pc = 0x2f9a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
    // 0x2f9a48: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x2f9a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
label_2f9a4c:
    // 0x2f9a4c: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x2f9a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f9a50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f9a50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9a54: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2f9a54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x2f9a58: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2f9a58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2f9a5c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2f9a5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f9a60: 0x24850010  addiu       $a1, $a0, 0x10
    ctx->pc = 0x2f9a60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x2f9a64: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2f9a64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f9a68: 0xc0be578  jal         func_2F95E0
    ctx->pc = 0x2F9A68u;
    SET_GPR_U32(ctx, 31, 0x2F9A70u);
    ctx->pc = 0x2F9A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9A68u;
    // 0x2f9a6c: 0xe6000018  swc1        $f0, 0x18($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F95E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F95E0u, 0x2F9A68u, 0x2F9A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9A70u;
label_2f9a70:
    // 0x2f9a70: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x2f9a70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2f9a74:
    // 0x2f9a74: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x2f9a74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2f9a78: 0x3e00008  jr          $ra
    ctx->pc = 0x2F9A78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F9A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9A78u;
        // 0x2f9a7c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F9A78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F9A80u;
}
