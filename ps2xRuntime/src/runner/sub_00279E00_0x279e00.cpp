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

// Function: sub_00279E00
// Address: 0x279e00 - 0x279f50
void sub_00279E00_0x279e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00279E00_0x279e00");
#endif

    switch (ctx->pc) {
        case 0x279e00u: goto label_279e00;
        case 0x279e04u: goto label_279e04;
        case 0x279e08u: goto label_279e08;
        case 0x279e0cu: goto label_279e0c;
        case 0x279e10u: goto label_279e10;
        case 0x279e14u: goto label_279e14;
        case 0x279e18u: goto label_279e18;
        case 0x279e1cu: goto label_279e1c;
        case 0x279e20u: goto label_279e20;
        case 0x279e24u: goto label_279e24;
        case 0x279e28u: goto label_279e28;
        case 0x279e2cu: goto label_279e2c;
        case 0x279e30u: goto label_279e30;
        case 0x279e34u: goto label_279e34;
        case 0x279e38u: goto label_279e38;
        case 0x279e3cu: goto label_279e3c;
        case 0x279e40u: goto label_279e40;
        case 0x279e44u: goto label_279e44;
        case 0x279e48u: goto label_279e48;
        case 0x279e4cu: goto label_279e4c;
        case 0x279e50u: goto label_279e50;
        case 0x279e54u: goto label_279e54;
        case 0x279e58u: goto label_279e58;
        case 0x279e5cu: goto label_279e5c;
        case 0x279e60u: goto label_279e60;
        case 0x279e64u: goto label_279e64;
        case 0x279e68u: goto label_279e68;
        case 0x279e6cu: goto label_279e6c;
        case 0x279e70u: goto label_279e70;
        case 0x279e74u: goto label_279e74;
        case 0x279e78u: goto label_279e78;
        case 0x279e7cu: goto label_279e7c;
        case 0x279e80u: goto label_279e80;
        case 0x279e84u: goto label_279e84;
        case 0x279e88u: goto label_279e88;
        case 0x279e8cu: goto label_279e8c;
        case 0x279e90u: goto label_279e90;
        case 0x279e94u: goto label_279e94;
        case 0x279e98u: goto label_279e98;
        case 0x279e9cu: goto label_279e9c;
        case 0x279ea0u: goto label_279ea0;
        case 0x279ea4u: goto label_279ea4;
        case 0x279ea8u: goto label_279ea8;
        case 0x279eacu: goto label_279eac;
        case 0x279eb0u: goto label_279eb0;
        case 0x279eb4u: goto label_279eb4;
        case 0x279eb8u: goto label_279eb8;
        case 0x279ebcu: goto label_279ebc;
        case 0x279ec0u: goto label_279ec0;
        case 0x279ec4u: goto label_279ec4;
        case 0x279ec8u: goto label_279ec8;
        case 0x279eccu: goto label_279ecc;
        case 0x279ed0u: goto label_279ed0;
        case 0x279ed4u: goto label_279ed4;
        case 0x279ed8u: goto label_279ed8;
        case 0x279edcu: goto label_279edc;
        case 0x279ee0u: goto label_279ee0;
        case 0x279ee4u: goto label_279ee4;
        case 0x279ee8u: goto label_279ee8;
        case 0x279eecu: goto label_279eec;
        case 0x279ef0u: goto label_279ef0;
        case 0x279ef4u: goto label_279ef4;
        case 0x279ef8u: goto label_279ef8;
        case 0x279efcu: goto label_279efc;
        case 0x279f00u: goto label_279f00;
        case 0x279f04u: goto label_279f04;
        case 0x279f08u: goto label_279f08;
        case 0x279f0cu: goto label_279f0c;
        case 0x279f10u: goto label_279f10;
        case 0x279f14u: goto label_279f14;
        case 0x279f18u: goto label_279f18;
        case 0x279f1cu: goto label_279f1c;
        case 0x279f20u: goto label_279f20;
        case 0x279f24u: goto label_279f24;
        case 0x279f28u: goto label_279f28;
        case 0x279f2cu: goto label_279f2c;
        case 0x279f30u: goto label_279f30;
        case 0x279f34u: goto label_279f34;
        case 0x279f38u: goto label_279f38;
        case 0x279f3cu: goto label_279f3c;
        case 0x279f40u: goto label_279f40;
        case 0x279f44u: goto label_279f44;
        case 0x279f48u: goto label_279f48;
        case 0x279f4cu: goto label_279f4c;
        default: break;
    }

    ctx->pc = 0x279e00u;

label_279e00:
    // 0x279e00: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x279e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_279e04:
    // 0x279e04: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x279e04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_279e08:
    // 0x279e08: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x279e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_279e0c:
    // 0x279e0c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x279e0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_279e10:
    // 0x279e10: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x279e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_279e14:
    // 0x279e14: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x279e14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_279e18:
    // 0x279e18: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x279e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_279e1c:
    // 0x279e1c: 0x27b20060  addiu       $s2, $sp, 0x60
    ctx->pc = 0x279e1cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_279e20:
    // 0x279e20: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x279e20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_279e24:
    // 0x279e24: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x279e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_279e28:
    // 0x279e28: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x279e28u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_279e2c:
    // 0x279e2c: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x279e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_279e30:
    // 0x279e30: 0x40f809  jalr        $v0
label_279e34:
    if (ctx->pc == 0x279E34u) {
        ctx->pc = 0x279E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279E30u;
        // 0x279e34: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279E38u;
        goto label_279e38;
    }
    ctx->pc = 0x279E30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x279E38u);
        ctx->pc = 0x279E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279E30u;
        // 0x279e34: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279E30u, 0x279E38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x279E38u;
label_279e38:
    // 0x279e38: 0x86250092  lh          $a1, 0x92($s1)
    ctx->pc = 0x279e38u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
label_279e3c:
    // 0x279e3c: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x279e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_279e40:
    // 0x279e40: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x279e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_279e44:
    // 0x279e44: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x279e44u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_279e48:
    // 0x279e48: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x279e48u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_279e4c:
    // 0x279e4c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x279e4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_279e50:
    // 0x279e50: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x279e50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_279e54:
    // 0x279e54: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x279e54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_279e58:
    // 0x279e58: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x279e58u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_279e5c:
    // 0x279e5c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x279e5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_279e60:
    // 0x279e60: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x279e60u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_279e64:
    // 0x279e64: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x279e64u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_279e68:
    // 0x279e68: 0x4b8208ac  vsub.xy     $vf2, $vf1, $vf2
    ctx->pc = 0x279e68u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_279e6c:
    // 0x279e6c: 0x4a62033c  vmove.zw    $vf2, $vf0
    ctx->pc = 0x279e6cu;
    { __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_279e70:
    // 0x279e70: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x279e70u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_279e74:
    // 0x279e74: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x279e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_279e78:
    // 0x279e78: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x279e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_279e7c:
    // 0x279e7c: 0x8cc200ac  lw          $v0, 0xAC($a2)
    ctx->pc = 0x279e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 172)));
label_279e80:
    // 0x279e80: 0x84c500a8  lh          $a1, 0xA8($a2)
    ctx->pc = 0x279e80u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 168)));
label_279e84:
    // 0x279e84: 0x40f809  jalr        $v0
label_279e88:
    if (ctx->pc == 0x279E88u) {
        ctx->pc = 0x279E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279E84u;
        // 0x279e88: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279E8Cu;
        goto label_279e8c;
    }
    ctx->pc = 0x279E84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x279E8Cu);
        ctx->pc = 0x279E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279E84u;
        // 0x279e88: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279E84u, 0x279E8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x279E8Cu;
label_279e8c:
    // 0x279e8c: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x279e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_279e90:
    // 0x279e90: 0xc0cd940  jal         func_336500
label_279e94:
    if (ctx->pc == 0x279E94u) {
        ctx->pc = 0x279E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279E90u;
        // 0x279e94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279E98u;
        goto label_279e98;
    }
    ctx->pc = 0x279E90u;
    SET_GPR_U32(ctx, 31, 0x279E98u);
    ctx->pc = 0x279E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279E90u;
    // 0x279e94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336500u, 0x279E90u, 0x279E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279E98u;
label_279e98:
    // 0x279e98: 0xc0e3400  jal         func_38D000
label_279e9c:
    if (ctx->pc == 0x279E9Cu) {
        ctx->pc = 0x279E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279E98u;
        // 0x279e9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279EA0u;
        goto label_279ea0;
    }
    ctx->pc = 0x279E98u;
    SET_GPR_U32(ctx, 31, 0x279EA0u);
    ctx->pc = 0x279E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279E98u;
    // 0x279e9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D000u, 0x279E98u, 0x279EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279EA0u;
label_279ea0:
    // 0x279ea0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x279ea0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_279ea4:
    // 0x279ea4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x279ea4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_279ea8:
    // 0x279ea8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x279ea8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_279eac:
    // 0x279eac: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x279eacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_279eb0:
    // 0x279eb0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x279eb0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_279eb4:
    // 0x279eb4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x279eb4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_279eb8:
    // 0x279eb8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x279eb8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_279ebc:
    // 0x279ebc: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x279ebcu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
label_279ec0:
    // 0x279ec0: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x279ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_279ec4:
    // 0x279ec4: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x279ec4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_279ec8:
    // 0x279ec8: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x279ec8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_279ecc:
    // 0x279ecc: 0x7fa40000  sq          $a0, 0x0($sp)
    ctx->pc = 0x279eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 4));
label_279ed0:
    // 0x279ed0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x279ed0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_279ed4:
    // 0x279ed4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x279ed4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_279ed8:
    // 0x279ed8: 0x4b8208ea  vmul.xy     $vf3, $vf1, $vf2
    ctx->pc = 0x279ed8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_279edc:
    // 0x279edc: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x279edcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_279ee0:
    // 0x279ee0: 0x48251800  qmfc2.ni    $a1, $vf3
    ctx->pc = 0x279ee0u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
label_279ee4:
    // 0x279ee4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x279ee4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_279ee8:
    // 0x279ee8: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x279ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_279eec:
    // 0x279eec: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x279eecu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_279ef0:
    // 0x279ef0: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x279ef0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_279ef4:
    // 0x279ef4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x279ef4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_279ef8:
    // 0x279ef8: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x279ef8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_279efc:
    // 0x279efc: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x279efcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_279f00:
    // 0x279f00: 0x4b8208ea  vmul.xy     $vf3, $vf1, $vf2
    ctx->pc = 0x279f00u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_279f04:
    // 0x279f04: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x279f04u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_279f08:
    // 0x279f08: 0x48251800  qmfc2.ni    $a1, $vf3
    ctx->pc = 0x279f08u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
label_279f0c:
    // 0x279f0c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x279f0cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_279f10:
    // 0x279f10: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_279f14:
    if (ctx->pc == 0x279F14u) {
        ctx->pc = 0x279F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279F10u;
        // 0x279f14: 0x7fa40060  sq          $a0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279F18u;
        goto label_279f18;
    }
    ctx->pc = 0x279F10u;
    {
        const bool branch_taken_0x279f10 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x279F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279F10u;
        // 0x279f14: 0x7fa40060  sq          $a0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279f10) {
            ctx->pc = 0x279F30u;
            goto label_279f30;
        }
    }
    ctx->pc = 0x279F18u;
label_279f18:
    // 0x279f18: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x279f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_279f1c:
    // 0x279f1c: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x279f1cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_279f20:
    // 0x279f20: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x279f20u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_279f24:
    // 0x279f24: 0x0  nop
    ctx->pc = 0x279f24u;
    // NOP
label_279f28:
    // 0x279f28: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_279f2c:
    if (ctx->pc == 0x279F2Cu) {
        ctx->pc = 0x279F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279F28u;
        // 0x279f2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279F30u;
        goto label_279f30;
    }
    ctx->pc = 0x279F28u;
    {
        const bool branch_taken_0x279f28 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x279F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279F28u;
        // 0x279f2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279f28) {
            ctx->pc = 0x279F34u;
            goto label_279f34;
        }
    }
    ctx->pc = 0x279F30u;
label_279f30:
    // 0x279f30: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x279f30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_279f34:
    // 0x279f34: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x279f34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_279f38:
    // 0x279f38: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x279f38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_279f3c:
    // 0x279f3c: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x279f3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_279f40:
    // 0x279f40: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x279f40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_279f44:
    // 0x279f44: 0x3e00008  jr          $ra
label_279f48:
    if (ctx->pc == 0x279F48u) {
        ctx->pc = 0x279F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279F44u;
        // 0x279f48: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279F4Cu;
        goto label_279f4c;
    }
    ctx->pc = 0x279F44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x279F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279F44u;
        // 0x279f48: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279F44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x279F4Cu;
label_279f4c:
    // 0x279f4c: 0x0  nop
    ctx->pc = 0x279f4cu;
    // NOP
    ctx->pc = 0x279f50u;
}
