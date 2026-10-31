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

// Function: sub_00416E10
// Address: 0x416e10 - 0x416e68
void sub_00416E10_0x416e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00416E10_0x416e10");
#endif

    switch (ctx->pc) {
        case 0x416e50u: goto label_416e50;
        default: break;
    }

    ctx->pc = 0x416e10u;

    // 0x416e10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x416e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x416e14: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x416e14u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x416e18: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x416e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x416e1c: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x416e1cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x416e20: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x416e20u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x416e24: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x416e24u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x416e28: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x416e28u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x416e2c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x416e2cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x416e30: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x416e30u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x416e34: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x416e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x416e38: 0x7fa40020  sq          $a0, 0x20($sp)
    ctx->pc = 0x416e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 4));
    // 0x416e3c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x416e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x416e40: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x416e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x416e44: 0xc7ad0024  lwc1        $f13, 0x24($sp)
    ctx->pc = 0x416e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x416e48: 0xc0cd5ea  jal         func_3357A8
    ctx->pc = 0x416E48u;
    SET_GPR_U32(ctx, 31, 0x416E50u);
    ctx->pc = 0x416E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x416E48u;
    // 0x416e4c: 0x7fa40030  sq          $a0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3357A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3357A8u, 0x416E48u, 0x416E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x416E50u;
label_416e50:
    // 0x416e50: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x416e50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x416e54: 0x3e00008  jr          $ra
    ctx->pc = 0x416E54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x416E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416E54u;
        // 0x416e58: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x416E54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x416E5Cu;
    // 0x416e5c: 0x0  nop
    ctx->pc = 0x416e5cu;
    // NOP
    // 0x416e60: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x416e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x416e64: 0x0  nop
    ctx->pc = 0x416e64u;
    // NOP
    ctx->pc = 0x416e68u;
}
