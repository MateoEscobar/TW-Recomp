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

// Function: sub_00394DA8
// Address: 0x394da8 - 0x394f20
void sub_00394DA8_0x394da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00394DA8_0x394da8");
#endif

    switch (ctx->pc) {
        case 0x394da8u: goto label_394da8;
        case 0x394dacu: goto label_394dac;
        case 0x394db0u: goto label_394db0;
        case 0x394db4u: goto label_394db4;
        case 0x394db8u: goto label_394db8;
        case 0x394dbcu: goto label_394dbc;
        case 0x394dc0u: goto label_394dc0;
        case 0x394dc4u: goto label_394dc4;
        case 0x394dc8u: goto label_394dc8;
        case 0x394dccu: goto label_394dcc;
        case 0x394dd0u: goto label_394dd0;
        case 0x394dd4u: goto label_394dd4;
        case 0x394dd8u: goto label_394dd8;
        case 0x394ddcu: goto label_394ddc;
        case 0x394de0u: goto label_394de0;
        case 0x394de4u: goto label_394de4;
        case 0x394de8u: goto label_394de8;
        case 0x394decu: goto label_394dec;
        case 0x394df0u: goto label_394df0;
        case 0x394df4u: goto label_394df4;
        case 0x394df8u: goto label_394df8;
        case 0x394dfcu: goto label_394dfc;
        case 0x394e00u: goto label_394e00;
        case 0x394e04u: goto label_394e04;
        case 0x394e08u: goto label_394e08;
        case 0x394e0cu: goto label_394e0c;
        case 0x394e10u: goto label_394e10;
        case 0x394e14u: goto label_394e14;
        case 0x394e18u: goto label_394e18;
        case 0x394e1cu: goto label_394e1c;
        case 0x394e20u: goto label_394e20;
        case 0x394e24u: goto label_394e24;
        case 0x394e28u: goto label_394e28;
        case 0x394e2cu: goto label_394e2c;
        case 0x394e30u: goto label_394e30;
        case 0x394e34u: goto label_394e34;
        case 0x394e38u: goto label_394e38;
        case 0x394e3cu: goto label_394e3c;
        case 0x394e40u: goto label_394e40;
        case 0x394e44u: goto label_394e44;
        case 0x394e48u: goto label_394e48;
        case 0x394e4cu: goto label_394e4c;
        case 0x394e50u: goto label_394e50;
        case 0x394e54u: goto label_394e54;
        case 0x394e58u: goto label_394e58;
        case 0x394e5cu: goto label_394e5c;
        case 0x394e60u: goto label_394e60;
        case 0x394e64u: goto label_394e64;
        case 0x394e68u: goto label_394e68;
        case 0x394e6cu: goto label_394e6c;
        case 0x394e70u: goto label_394e70;
        case 0x394e74u: goto label_394e74;
        case 0x394e78u: goto label_394e78;
        case 0x394e7cu: goto label_394e7c;
        case 0x394e80u: goto label_394e80;
        case 0x394e84u: goto label_394e84;
        case 0x394e88u: goto label_394e88;
        case 0x394e8cu: goto label_394e8c;
        case 0x394e90u: goto label_394e90;
        case 0x394e94u: goto label_394e94;
        case 0x394e98u: goto label_394e98;
        case 0x394e9cu: goto label_394e9c;
        case 0x394ea0u: goto label_394ea0;
        case 0x394ea4u: goto label_394ea4;
        case 0x394ea8u: goto label_394ea8;
        case 0x394eacu: goto label_394eac;
        case 0x394eb0u: goto label_394eb0;
        case 0x394eb4u: goto label_394eb4;
        case 0x394eb8u: goto label_394eb8;
        case 0x394ebcu: goto label_394ebc;
        case 0x394ec0u: goto label_394ec0;
        case 0x394ec4u: goto label_394ec4;
        case 0x394ec8u: goto label_394ec8;
        case 0x394eccu: goto label_394ecc;
        case 0x394ed0u: goto label_394ed0;
        case 0x394ed4u: goto label_394ed4;
        case 0x394ed8u: goto label_394ed8;
        case 0x394edcu: goto label_394edc;
        case 0x394ee0u: goto label_394ee0;
        case 0x394ee4u: goto label_394ee4;
        case 0x394ee8u: goto label_394ee8;
        case 0x394eecu: goto label_394eec;
        case 0x394ef0u: goto label_394ef0;
        case 0x394ef4u: goto label_394ef4;
        case 0x394ef8u: goto label_394ef8;
        case 0x394efcu: goto label_394efc;
        case 0x394f00u: goto label_394f00;
        case 0x394f04u: goto label_394f04;
        case 0x394f08u: goto label_394f08;
        case 0x394f0cu: goto label_394f0c;
        case 0x394f10u: goto label_394f10;
        case 0x394f14u: goto label_394f14;
        case 0x394f18u: goto label_394f18;
        case 0x394f1cu: goto label_394f1c;
        default: break;
    }

    ctx->pc = 0x394da8u;

label_394da8:
    // 0x394da8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x394da8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_394dac:
    // 0x394dac: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x394dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_394db0:
    // 0x394db0: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x394db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_394db4:
    // 0x394db4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x394db4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_394db8:
    // 0x394db8: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x394db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_394dbc:
    // 0x394dbc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x394dbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_394dc0:
    // 0x394dc0: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x394dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_394dc4:
    // 0x394dc4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x394dc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_394dc8:
    // 0x394dc8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x394dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_394dcc:
    // 0x394dcc: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x394dccu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
label_394dd0:
    // 0x394dd0: 0x8e642c04  lw          $a0, 0x2C04($s3)
    ctx->pc = 0x394dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11268)));
label_394dd4:
    // 0x394dd4: 0xc0e4552  jal         func_391548
label_394dd8:
    if (ctx->pc == 0x394DD8u) {
        ctx->pc = 0x394DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394DD4u;
        // 0x394dd8: 0x96050112  lhu         $a1, 0x112($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 274)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394DDCu;
        goto label_394ddc;
    }
    ctx->pc = 0x394DD4u;
    SET_GPR_U32(ctx, 31, 0x394DDCu);
    ctx->pc = 0x394DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394DD4u;
    // 0x394dd8: 0x96050112  lhu         $a1, 0x112($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 274)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391548u, 0x394DD4u, 0x394DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394DDCu;
label_394ddc:
    // 0x394ddc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x394ddcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_394de0:
    // 0x394de0: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x394de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_394de4:
    // 0x394de4: 0x14620038  bne         $v1, $v0, . + 4 + (0x38 << 2)
label_394de8:
    if (ctx->pc == 0x394DE8u) {
        ctx->pc = 0x394DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394DE4u;
        // 0x394de8: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394DECu;
        goto label_394dec;
    }
    ctx->pc = 0x394DE4u;
    {
        const bool branch_taken_0x394de4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x394DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394DE4u;
        // 0x394de8: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394de4) {
            ctx->pc = 0x394EC8u;
            goto label_394ec8;
        }
    }
    ctx->pc = 0x394DECu;
label_394dec:
    // 0x394dec: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x394decu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
label_394df0:
    // 0x394df0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x394df0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_394df4:
    // 0x394df4: 0x8e64489c  lw          $a0, 0x489C($s3)
    ctx->pc = 0x394df4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
label_394df8:
    // 0x394df8: 0xc107442  jal         func_41D108
label_394dfc:
    if (ctx->pc == 0x394DFCu) {
        ctx->pc = 0x394DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394DF8u;
        // 0x394dfc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394E00u;
        goto label_394e00;
    }
    ctx->pc = 0x394DF8u;
    SET_GPR_U32(ctx, 31, 0x394E00u);
    ctx->pc = 0x394DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394DF8u;
    // 0x394dfc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D108u, 0x394DF8u, 0x394E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394E00u;
label_394e00:
    // 0x394e00: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x394e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_394e04:
    // 0x394e04: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x394e04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_394e08:
    // 0x394e08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x394e08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_394e0c:
    // 0x394e0c: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x394e0cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_394e10:
    // 0x394e10: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x394e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_394e14:
    // 0x394e14: 0x40f809  jalr        $v0
label_394e18:
    if (ctx->pc == 0x394E18u) {
        ctx->pc = 0x394E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394E14u;
        // 0x394e18: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394E1Cu;
        goto label_394e1c;
    }
    ctx->pc = 0x394E14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x394E1Cu);
        ctx->pc = 0x394E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394E14u;
        // 0x394e18: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x394E14u, 0x394E1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x394E1Cu;
label_394e1c:
    // 0x394e1c: 0x86430092  lh          $v1, 0x92($s2)
    ctx->pc = 0x394e1cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
label_394e20:
    // 0x394e20: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x394e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_394e24:
    // 0x394e24: 0x7ba60020  lq          $a2, 0x20($sp)
    ctx->pc = 0x394e24u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_394e28:
    // 0x394e28: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x394e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_394e2c:
    // 0x394e2c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x394e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_394e30:
    // 0x394e30: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x394e30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_394e34:
    // 0x394e34: 0x7fa60010  sq          $a2, 0x10($sp)
    ctx->pc = 0x394e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 6));
label_394e38:
    // 0x394e38: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x394e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_394e3c:
    // 0x394e3c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x394e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_394e40:
    // 0x394e40: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x394e40u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_394e44:
    // 0x394e44: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x394e44u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_394e48:
    // 0x394e48: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x394e48u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_394e4c:
    // 0x394e4c: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x394e4cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_394e50:
    // 0x394e50: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x394e50u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_394e54:
    // 0x394e54: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x394e54u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_394e58:
    // 0x394e58: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x394e58u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_394e5c:
    // 0x394e5c: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x394e5cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_394e60:
    // 0x394e60: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x394e60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_394e64:
    // 0x394e64: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x394e64u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_394e68:
    // 0x394e68: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x394e68u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_394e6c:
    // 0x394e6c: 0x4a0003bf  vwaitq
    ctx->pc = 0x394e6cu;
    // VWAITQ (Q already resolved in this runtime)
label_394e70:
    // 0x394e70: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x394e70u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_394e74:
    // 0x394e74: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x394e74u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_394e78:
    // 0x394e78: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x394e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_394e7c:
    // 0x394e7c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x394e7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_394e80:
    // 0x394e80: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x394e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_394e84:
    // 0x394e84: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x394e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_394e88:
    // 0x394e88: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x394e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_394e8c:
    // 0x394e8c: 0xc094ab8  jal         func_252AE0
label_394e90:
    if (ctx->pc == 0x394E90u) {
        ctx->pc = 0x394E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394E8Cu;
        // 0x394e90: 0x7fa30030  sq          $v1, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394E94u;
        goto label_394e94;
    }
    ctx->pc = 0x394E8Cu;
    SET_GPR_U32(ctx, 31, 0x394E94u);
    ctx->pc = 0x394E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394E8Cu;
    // 0x394e90: 0x7fa30030  sq          $v1, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252AE0u, 0x394E8Cu, 0x394E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394E94u;
label_394e94:
    // 0x394e94: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_394e98:
    if (ctx->pc == 0x394E98u) {
        ctx->pc = 0x394E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394E94u;
        // 0x394e98: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394E9Cu;
        goto label_394e9c;
    }
    ctx->pc = 0x394E94u;
    {
        const bool branch_taken_0x394e94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x394E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394E94u;
        // 0x394e98: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394e94) {
            ctx->pc = 0x394F04u;
            goto label_394f04;
        }
    }
    ctx->pc = 0x394E9Cu;
label_394e9c:
    // 0x394e9c: 0x8e64489c  lw          $a0, 0x489C($s3)
    ctx->pc = 0x394e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
label_394ea0:
    // 0x394ea0: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x394ea0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_394ea4:
    // 0x394ea4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x394ea4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_394ea8:
    // 0x394ea8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x394ea8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_394eac:
    // 0x394eac: 0x2409000a  addiu       $t1, $zero, 0xA
    ctx->pc = 0x394eacu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_394eb0:
    // 0x394eb0: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x394eb0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_394eb4:
    // 0x394eb4: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x394eb4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_394eb8:
    // 0x394eb8: 0xc106e2c  jal         func_41B8B0
label_394ebc:
    if (ctx->pc == 0x394EBCu) {
        ctx->pc = 0x394EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394EB8u;
        // 0x394ebc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394EC0u;
        goto label_394ec0;
    }
    ctx->pc = 0x394EB8u;
    SET_GPR_U32(ctx, 31, 0x394EC0u);
    ctx->pc = 0x394EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394EB8u;
    // 0x394ebc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41B8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41B8B0u, 0x394EB8u, 0x394EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394EC0u;
label_394ec0:
    // 0x394ec0: 0x10000011  b           . + 4 + (0x11 << 2)
label_394ec4:
    if (ctx->pc == 0x394EC4u) {
        ctx->pc = 0x394EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394EC0u;
        // 0x394ec4: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394EC8u;
        goto label_394ec8;
    }
    ctx->pc = 0x394EC0u;
    {
        const bool branch_taken_0x394ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x394EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394EC0u;
        // 0x394ec4: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394ec0) {
            ctx->pc = 0x394F08u;
            goto label_394f08;
        }
    }
    ctx->pc = 0x394EC8u;
label_394ec8:
    // 0x394ec8: 0x5462000f  bnel        $v1, $v0, . + 4 + (0xF << 2)
label_394ecc:
    if (ctx->pc == 0x394ECCu) {
        ctx->pc = 0x394ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394EC8u;
        // 0x394ecc: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394ED0u;
        goto label_394ed0;
    }
    ctx->pc = 0x394EC8u;
    {
        const bool branch_taken_0x394ec8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x394ec8) {
            ctx->pc = 0x394ECCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x394EC8u;
            // 0x394ecc: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x394F08u;
            goto label_394f08;
        }
    }
    ctx->pc = 0x394ED0u;
label_394ed0:
    // 0x394ed0: 0x8e642c04  lw          $a0, 0x2C04($s3)
    ctx->pc = 0x394ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11268)));
label_394ed4:
    // 0x394ed4: 0xc0e4552  jal         func_391548
label_394ed8:
    if (ctx->pc == 0x394ED8u) {
        ctx->pc = 0x394ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394ED4u;
        // 0x394ed8: 0x96250112  lhu         $a1, 0x112($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 274)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394EDCu;
        goto label_394edc;
    }
    ctx->pc = 0x394ED4u;
    SET_GPR_U32(ctx, 31, 0x394EDCu);
    ctx->pc = 0x394ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394ED4u;
    // 0x394ed8: 0x96250112  lhu         $a1, 0x112($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 274)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391548u, 0x394ED4u, 0x394EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394EDCu;
label_394edc:
    // 0x394edc: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x394edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_394ee0:
    // 0x394ee0: 0x54430009  bnel        $v0, $v1, . + 4 + (0x9 << 2)
label_394ee4:
    if (ctx->pc == 0x394EE4u) {
        ctx->pc = 0x394EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394EE0u;
        // 0x394ee4: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394EE8u;
        goto label_394ee8;
    }
    ctx->pc = 0x394EE0u;
    {
        const bool branch_taken_0x394ee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x394ee0) {
            ctx->pc = 0x394EE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x394EE0u;
            // 0x394ee4: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x394F08u;
            goto label_394f08;
        }
    }
    ctx->pc = 0x394EE8u;
label_394ee8:
    // 0x394ee8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x394ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_394eec:
    // 0x394eec: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x394eecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
label_394ef0:
    // 0x394ef0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x394ef0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_394ef4:
    // 0x394ef4: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x394ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_394ef8:
    // 0x394ef8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x394ef8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_394efc:
    // 0x394efc: 0xc106fb2  jal         func_41BEC8
label_394f00:
    if (ctx->pc == 0x394F00u) {
        ctx->pc = 0x394F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394EFCu;
        // 0x394f00: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394F04u;
        goto label_394f04;
    }
    ctx->pc = 0x394EFCu;
    SET_GPR_U32(ctx, 31, 0x394F04u);
    ctx->pc = 0x394F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394EFCu;
    // 0x394f00: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41BEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41BEC8u, 0x394EFCu, 0x394F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394F04u;
label_394f04:
    // 0x394f04: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x394f04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_394f08:
    // 0x394f08: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x394f08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_394f0c:
    // 0x394f0c: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x394f0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_394f10:
    // 0x394f10: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x394f10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_394f14:
    // 0x394f14: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x394f14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_394f18:
    // 0x394f18: 0x3e00008  jr          $ra
label_394f1c:
    if (ctx->pc == 0x394F1Cu) {
        ctx->pc = 0x394F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394F18u;
        // 0x394f1c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394F20u;
        goto label_fallthrough_0x394f18;
    }
    ctx->pc = 0x394F18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x394F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394F18u;
        // 0x394f1c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x394F18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x394f18:
    ctx->pc = 0x394F20u;
}
