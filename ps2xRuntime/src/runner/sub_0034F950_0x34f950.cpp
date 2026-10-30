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

// Function: sub_0034F950
// Address: 0x34f950 - 0x34fa28
void sub_0034F950_0x34f950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034F950_0x34f950");
#endif

    switch (ctx->pc) {
        case 0x34f99cu: goto label_34f99c;
        default: break;
    }

    ctx->pc = 0x34f950u;

    // 0x34f950: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x34f950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x34f954: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x34f954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x34f958: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x34f958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x34f95c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x34f95cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f960: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x34f960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x34f964: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x34f964u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f968: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x34f968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x34f96c: 0x24511770  addiu       $s1, $v0, 0x1770
    ctx->pc = 0x34f96cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 6000));
    // 0x34f970: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x34f970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x34f974: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x34f974u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x34f978: 0x7a270000  lq          $a3, 0x0($s1)
    ctx->pc = 0x34f978u;
    SET_GPR_VEC(ctx, 7, FAST_READ128(0x511770u));
    // 0x34f97c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x34f97cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f980: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x34f980u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x34f984: 0x8c4447c4  lw          $a0, 0x47C4($v0)
    ctx->pc = 0x34f984u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5147C4u));
    // 0x34f988: 0x7fa70010  sq          $a3, 0x10($sp)
    ctx->pc = 0x34f988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 7));
    // 0x34f98c: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x34f98cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x34f990: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x34f990u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f994: 0xc1036e2  jal         func_40DB88
    ctx->pc = 0x34F994u;
    SET_GPR_U32(ctx, 31, 0x34F99Cu);
    ctx->pc = 0x34F998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F994u;
    // 0x34f998: 0xe7ac0020  swc1        $f12, 0x20($sp) (Delay Slot)
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB88u, 0x34F994u, 0x34F99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F99Cu;
label_34f99c:
    // 0x34f99c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x34f99cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x34f9a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34f9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34f9a4: 0x1462001a  bne         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x34F9A4u;
    {
        const bool branch_taken_0x34f9a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x34F9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F9A4u;
        // 0x34f9a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f9a4) {
            ctx->pc = 0x34FA10u;
            goto label_34fa10;
        }
    }
    ctx->pc = 0x34F9ACu;
    // 0x34f9ac: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x34f9acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34f9b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34f9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34f9b4: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x34f9b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x34f9b8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x34f9b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x34f9bc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x34f9bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34f9c0: 0x7a230000  lq          $v1, 0x0($s1)
    ctx->pc = 0x34f9c0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x34f9c4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x34f9c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x34f9c8: 0x7a040000  lq          $a0, 0x0($s0)
    ctx->pc = 0x34f9c8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x34f9cc: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x34f9ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x34f9d0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x34f9d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34f9d4: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x34f9d4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x34f9d8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x34f9d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34f9dc: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x34f9dcu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34f9e0: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x34f9e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x34f9e4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x34f9e4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34f9e8: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x34f9e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34f9ec: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x34f9ecu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x34f9f0: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x34f9f0u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x34f9f4: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x34f9f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
    // 0x34f9f8: 0x7fa30090  sq          $v1, 0x90($sp)
    ctx->pc = 0x34f9f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
    // 0x34f9fc: 0x7e040000  sq          $a0, 0x0($s0)
    ctx->pc = 0x34f9fcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 4));
    // 0x34fa00: 0x7fa30080  sq          $v1, 0x80($sp)
    ctx->pc = 0x34fa00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
    // 0x34fa04: 0x7fa400a0  sq          $a0, 0xA0($sp)
    ctx->pc = 0x34fa04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 4));
    // 0x34fa08: 0x7fa40090  sq          $a0, 0x90($sp)
    ctx->pc = 0x34fa08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 4));
    // 0x34fa0c: 0x7fa40070  sq          $a0, 0x70($sp)
    ctx->pc = 0x34fa0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 4));
label_34fa10:
    // 0x34fa10: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x34fa10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x34fa14: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x34fa14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x34fa18: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x34fa18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x34fa1c: 0x3e00008  jr          $ra
    ctx->pc = 0x34FA1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34FA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FA1Cu;
        // 0x34fa20: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34FA1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34FA24u;
    // 0x34fa24: 0x0  nop
    ctx->pc = 0x34fa24u;
    // NOP
    ctx->pc = 0x34fa28u;
}
