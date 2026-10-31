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

// Function: sub_0028DC80
// Address: 0x28dc80 - 0x28de08
void sub_0028DC80_0x28dc80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028DC80_0x28dc80");
#endif

    switch (ctx->pc) {
        case 0x28dcb0u: goto label_28dcb0;
        case 0x28dcccu: goto label_28dccc;
        case 0x28dd58u: goto label_28dd58;
        case 0x28dd60u: goto label_28dd60;
        case 0x28dd68u: goto label_28dd68;
        default: break;
    }

    ctx->pc = 0x28dc80u;

    // 0x28dc80: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x28dc80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x28dc84: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x28dc84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x28dc88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28dc88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dc8c: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x28dc8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x28dc90: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x28dc90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x28dc94: 0x261201a4  addiu       $s2, $s0, 0x1A4
    ctx->pc = 0x28dc94u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 420));
    // 0x28dc98: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x28dc98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x28dc9c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x28dc9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dca0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x28dca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x28dca4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28dca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dca8: 0xc136b80  jal         func_4DAE00
    ctx->pc = 0x28DCA8u;
    SET_GPR_U32(ctx, 31, 0x28DCB0u);
    ctx->pc = 0x28DCACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DCA8u;
    // 0x28dcac: 0xe7b40090  swc1        $f20, 0x90($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAE00u, 0x28DCA8u, 0x28DCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DCB0u;
label_28dcb0:
    // 0x28dcb0: 0x8e0301e4  lw          $v1, 0x1E4($s0)
    ctx->pc = 0x28dcb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
    // 0x28dcb4: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x28dcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28dcb8: 0x5440004c  bnel        $v0, $zero, . + 4 + (0x4C << 2)
    ctx->pc = 0x28DCB8u;
    {
        const bool branch_taken_0x28dcb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28dcb8) {
            ctx->pc = 0x28DCBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28DCB8u;
            // 0x28dcbc: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28DDECu;
            goto label_28ddec;
        }
    }
    ctx->pc = 0x28DCC0u;
    // 0x28dcc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28dcc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dcc4: 0xc0a3792  jal         func_28DE48
    ctx->pc = 0x28DCC4u;
    SET_GPR_U32(ctx, 31, 0x28DCCCu);
    ctx->pc = 0x28DCC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DCC4u;
    // 0x28dcc8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DE48u, 0x28DCC4u, 0x28DCCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DCCCu;
label_28dccc:
    // 0x28dccc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28dcccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28dcd0: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x28DCD0u;
    {
        const bool branch_taken_0x28dcd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x28dcd0) {
            ctx->pc = 0x28DCD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28DCD0u;
            // 0x28dcd4: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28DCE0u;
            goto label_28dce0;
        }
    }
    ctx->pc = 0x28DCD8u;
    // 0x28dcd8: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x28DCD8u;
    {
        const bool branch_taken_0x28dcd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DCD8u;
        // 0x28dcdc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dcd8) {
            ctx->pc = 0x28DDE8u;
            goto label_28dde8;
        }
    }
    ctx->pc = 0x28DCE0u;
label_28dce0:
    // 0x28dce0: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x28dce0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
    // 0x28dce4: 0x86250092  lh          $a1, 0x92($s1)
    ctx->pc = 0x28dce4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
    // 0x28dce8: 0x24844b00  addiu       $a0, $a0, 0x4B00
    ctx->pc = 0x28dce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19200));
    // 0x28dcec: 0x84430092  lh          $v1, 0x92($v0)
    ctx->pc = 0x28dcecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 146)));
    // 0x28dcf0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x28dcf0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dcf4: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x28dcf4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x28dcf8: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x28dcf8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dcfc: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x28dcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x28dd00: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x28dd00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x28dd04: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x28dd04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x28dd08: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x28dd08u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x28dd0c: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x28dd0cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28dd10: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x28dd10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dd14: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x28dd14u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x28dd18: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x28dd18u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x28dd1c: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x28dd1cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x28dd20: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x28dd20u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x28dd24: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x28dd24u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x28dd28: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x28dd28u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x28dd2c: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x28dd2cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x28dd30: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x28dd30u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x28dd34: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x28dd34u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x28dd38: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x28dd38u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x28dd3c: 0x7fa40000  sq          $a0, 0x0($sp)
    ctx->pc = 0x28dd3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 4));
    // 0x28dd40: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x28dd40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x28dd44: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x28dd44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x28dd48: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x28dd48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x28dd4c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x28dd4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x28dd50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28dd50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dd54: 0x0  nop
    ctx->pc = 0x28dd54u;
    // NOP
label_28dd58:
    // 0x28dd58: 0xc137826  jal         func_4DE098
    ctx->pc = 0x28DD58u;
    SET_GPR_U32(ctx, 31, 0x28DD60u);
    ctx->pc = 0x28DD5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DD58u;
    // 0x28dd5c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x28DD58u, 0x28DD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DD60u;
label_28dd60:
    // 0x28dd60: 0xc0e409a  jal         func_390268
    ctx->pc = 0x28DD60u;
    SET_GPR_U32(ctx, 31, 0x28DD68u);
    ctx->pc = 0x28DD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DD60u;
    // 0x28dd64: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x28DD60u, 0x28DD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DD68u;
label_28dd68:
    // 0x28dd68: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x28DD68u;
    {
        const bool branch_taken_0x28dd68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DD68u;
        // 0x28dd6c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dd68) {
            ctx->pc = 0x28DDD4u;
            goto label_28ddd4;
        }
    }
    ctx->pc = 0x28DD70u;
    // 0x28dd70: 0x84440092  lh          $a0, 0x92($v0)
    ctx->pc = 0x28dd70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 146)));
    // 0x28dd74: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x28dd74u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28dd78: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x28dd78u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x28dd7c: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x28dd7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x28dd80: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x28dd80u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x28dd84: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x28dd84u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x28dd88: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x28dd88u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x28dd8c: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x28dd8cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x28dd90: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x28dd90u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x28dd94: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x28dd94u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x28dd98: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x28dd98u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x28dd9c: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x28dd9cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x28dda0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x28dda0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x28dda4: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x28dda4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x28dda8: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x28dda8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x28ddac: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x28ddacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    // 0x28ddb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28ddb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28ddb4: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x28ddb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x28ddb8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x28ddb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28ddbc: 0x0  nop
    ctx->pc = 0x28ddbcu;
    // NOP
    // 0x28ddc0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x28DDC0u;
    {
        const bool branch_taken_0x28ddc0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28DDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DDC0u;
        // 0x28ddc4: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ddc0) {
            ctx->pc = 0x28DDCCu;
            goto label_28ddcc;
        }
    }
    ctx->pc = 0x28DDC8u;
    // 0x28ddc8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28ddc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28ddcc:
    // 0x28ddcc: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x28DDCCu;
    {
        const bool branch_taken_0x28ddcc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x28DDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DDCCu;
        // 0x28ddd0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ddcc) {
            ctx->pc = 0x28DDE8u;
            goto label_28dde8;
        }
    }
    ctx->pc = 0x28DDD4u;
label_28ddd4:
    // 0x28ddd4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x28ddd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x28ddd8: 0x2e020010  sltiu       $v0, $s0, 0x10
    ctx->pc = 0x28ddd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x28dddc: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x28DDDCu;
    {
        const bool branch_taken_0x28dddc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28DDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DDDCu;
        // 0x28dde0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dddc) {
            ctx->pc = 0x28DD58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28dd58;
        }
    }
    ctx->pc = 0x28DDE4u;
    // 0x28dde4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28dde4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28dde8:
    // 0x28dde8: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x28dde8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_28ddec:
    // 0x28ddec: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x28ddecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28ddf0: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x28ddf0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28ddf4: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x28ddf4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28ddf8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x28ddf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28ddfc: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x28ddfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x28de00: 0x3e00008  jr          $ra
    ctx->pc = 0x28DE00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28DE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DE00u;
        // 0x28de04: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28DE00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28DE08u;
}
