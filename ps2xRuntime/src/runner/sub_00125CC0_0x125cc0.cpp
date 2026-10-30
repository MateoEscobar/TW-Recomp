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

// Function: sub_00125CC0
// Address: 0x125cc0 - 0x125e50
void sub_00125CC0_0x125cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00125CC0_0x125cc0");
#endif

    switch (ctx->pc) {
        case 0x125cc0u: goto label_125cc0;
        case 0x125cc4u: goto label_125cc4;
        case 0x125cc8u: goto label_125cc8;
        case 0x125cccu: goto label_125ccc;
        case 0x125cd0u: goto label_125cd0;
        case 0x125cd4u: goto label_125cd4;
        case 0x125cd8u: goto label_125cd8;
        case 0x125cdcu: goto label_125cdc;
        case 0x125ce0u: goto label_125ce0;
        case 0x125ce4u: goto label_125ce4;
        case 0x125ce8u: goto label_125ce8;
        case 0x125cecu: goto label_125cec;
        case 0x125cf0u: goto label_125cf0;
        case 0x125cf4u: goto label_125cf4;
        case 0x125cf8u: goto label_125cf8;
        case 0x125cfcu: goto label_125cfc;
        case 0x125d00u: goto label_125d00;
        case 0x125d04u: goto label_125d04;
        case 0x125d08u: goto label_125d08;
        case 0x125d0cu: goto label_125d0c;
        case 0x125d10u: goto label_125d10;
        case 0x125d14u: goto label_125d14;
        case 0x125d18u: goto label_125d18;
        case 0x125d1cu: goto label_125d1c;
        case 0x125d20u: goto label_125d20;
        case 0x125d24u: goto label_125d24;
        case 0x125d28u: goto label_125d28;
        case 0x125d2cu: goto label_125d2c;
        case 0x125d30u: goto label_125d30;
        case 0x125d34u: goto label_125d34;
        case 0x125d38u: goto label_125d38;
        case 0x125d3cu: goto label_125d3c;
        case 0x125d40u: goto label_125d40;
        case 0x125d44u: goto label_125d44;
        case 0x125d48u: goto label_125d48;
        case 0x125d4cu: goto label_125d4c;
        case 0x125d50u: goto label_125d50;
        case 0x125d54u: goto label_125d54;
        case 0x125d58u: goto label_125d58;
        case 0x125d5cu: goto label_125d5c;
        case 0x125d60u: goto label_125d60;
        case 0x125d64u: goto label_125d64;
        case 0x125d68u: goto label_125d68;
        case 0x125d6cu: goto label_125d6c;
        case 0x125d70u: goto label_125d70;
        case 0x125d74u: goto label_125d74;
        case 0x125d78u: goto label_125d78;
        case 0x125d7cu: goto label_125d7c;
        case 0x125d80u: goto label_125d80;
        case 0x125d84u: goto label_125d84;
        case 0x125d88u: goto label_125d88;
        case 0x125d8cu: goto label_125d8c;
        case 0x125d90u: goto label_125d90;
        case 0x125d94u: goto label_125d94;
        case 0x125d98u: goto label_125d98;
        case 0x125d9cu: goto label_125d9c;
        case 0x125da0u: goto label_125da0;
        case 0x125da4u: goto label_125da4;
        case 0x125da8u: goto label_125da8;
        case 0x125dacu: goto label_125dac;
        case 0x125db0u: goto label_125db0;
        case 0x125db4u: goto label_125db4;
        case 0x125db8u: goto label_125db8;
        case 0x125dbcu: goto label_125dbc;
        case 0x125dc0u: goto label_125dc0;
        case 0x125dc4u: goto label_125dc4;
        case 0x125dc8u: goto label_125dc8;
        case 0x125dccu: goto label_125dcc;
        case 0x125dd0u: goto label_125dd0;
        case 0x125dd4u: goto label_125dd4;
        case 0x125dd8u: goto label_125dd8;
        case 0x125ddcu: goto label_125ddc;
        case 0x125de0u: goto label_125de0;
        case 0x125de4u: goto label_125de4;
        case 0x125de8u: goto label_125de8;
        case 0x125decu: goto label_125dec;
        case 0x125df0u: goto label_125df0;
        case 0x125df4u: goto label_125df4;
        case 0x125df8u: goto label_125df8;
        case 0x125dfcu: goto label_125dfc;
        case 0x125e00u: goto label_125e00;
        case 0x125e04u: goto label_125e04;
        case 0x125e08u: goto label_125e08;
        case 0x125e0cu: goto label_125e0c;
        case 0x125e10u: goto label_125e10;
        case 0x125e14u: goto label_125e14;
        case 0x125e18u: goto label_125e18;
        case 0x125e1cu: goto label_125e1c;
        case 0x125e20u: goto label_125e20;
        case 0x125e24u: goto label_125e24;
        case 0x125e28u: goto label_125e28;
        case 0x125e2cu: goto label_125e2c;
        case 0x125e30u: goto label_125e30;
        case 0x125e34u: goto label_125e34;
        case 0x125e38u: goto label_125e38;
        case 0x125e3cu: goto label_125e3c;
        case 0x125e40u: goto label_125e40;
        case 0x125e44u: goto label_125e44;
        case 0x125e48u: goto label_125e48;
        case 0x125e4cu: goto label_125e4c;
        default: break;
    }

    ctx->pc = 0x125cc0u;

label_125cc0:
    // 0x125cc0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x125cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_125cc4:
    // 0x125cc4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x125cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_125cc8:
    // 0x125cc8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x125cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_125ccc:
    // 0x125ccc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x125cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_125cd0:
    // 0x125cd0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x125cd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_125cd4:
    // 0x125cd4: 0x8c622c7c  lw          $v0, 0x2C7C($v1)
    ctx->pc = 0x125cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11388)));
label_125cd8:
    // 0x125cd8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x125cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_125cdc:
    // 0x125cdc: 0xc0e3efa  jal         func_38FBE8
label_125ce0:
    if (ctx->pc == 0x125CE0u) {
        ctx->pc = 0x125CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125CDCu;
        // 0x125ce0: 0x8c44084c  lw          $a0, 0x84C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2124)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125CE4u;
        goto label_125ce4;
    }
    ctx->pc = 0x125CDCu;
    SET_GPR_U32(ctx, 31, 0x125CE4u);
    ctx->pc = 0x125CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125CDCu;
    // 0x125ce0: 0x8c44084c  lw          $a0, 0x84C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2124)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FBE8u, 0x125CDCu, 0x125CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125CE4u;
label_125ce4:
    // 0x125ce4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x125ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_125ce8:
    // 0x125ce8: 0xc048bb4  jal         func_122ED0
label_125cec:
    if (ctx->pc == 0x125CECu) {
        ctx->pc = 0x125CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125CE8u;
        // 0x125cec: 0x8c51b19c  lw          $s1, -0x4E64($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947228)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125CF0u;
        goto label_125cf0;
    }
    ctx->pc = 0x125CE8u;
    SET_GPR_U32(ctx, 31, 0x125CF0u);
    ctx->pc = 0x125CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125CE8u;
    // 0x125cec: 0x8c51b19c  lw          $s1, -0x4E64($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947228)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122ED0u, 0x125CE8u, 0x125CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125CF0u;
label_125cf0:
    // 0x125cf0: 0xc049794  jal         func_125E50
label_125cf4:
    if (ctx->pc == 0x125CF4u) {
        ctx->pc = 0x125CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125CF0u;
        // 0x125cf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125CF8u;
        goto label_125cf8;
    }
    ctx->pc = 0x125CF0u;
    SET_GPR_U32(ctx, 31, 0x125CF8u);
    ctx->pc = 0x125CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125CF0u;
    // 0x125cf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125E50u, 0x125CF0u, 0x125CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125CF8u;
label_125cf8:
    // 0x125cf8: 0x2e220002  sltiu       $v0, $s1, 0x2
    ctx->pc = 0x125cf8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_125cfc:
    // 0x125cfc: 0x5440002d  bnel        $v0, $zero, . + 4 + (0x2D << 2)
label_125d00:
    if (ctx->pc == 0x125D00u) {
        ctx->pc = 0x125D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125CFCu;
        // 0x125d00: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125D04u;
        goto label_125d04;
    }
    ctx->pc = 0x125CFCu;
    {
        const bool branch_taken_0x125cfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x125cfc) {
            ctx->pc = 0x125D00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x125CFCu;
            // 0x125d00: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x125DB4u;
            goto label_125db4;
        }
    }
    ctx->pc = 0x125D04u;
label_125d04:
    // 0x125d04: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x125d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_125d08:
    // 0x125d08: 0x26050180  addiu       $a1, $s0, 0x180
    ctx->pc = 0x125d08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
label_125d0c:
    // 0x125d0c: 0xc136afa  jal         func_4DABE8
label_125d10:
    if (ctx->pc == 0x125D10u) {
        ctx->pc = 0x125D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125D0Cu;
        // 0x125d10: 0x26060260  addiu       $a2, $s0, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 608));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125D14u;
        goto label_125d14;
    }
    ctx->pc = 0x125D0Cu;
    SET_GPR_U32(ctx, 31, 0x125D14u);
    ctx->pc = 0x125D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125D0Cu;
    // 0x125d10: 0x26060260  addiu       $a2, $s0, 0x260 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x125D0Cu, 0x125D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125D14u;
label_125d14:
    // 0x125d14: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x125d14u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_125d18:
    // 0x125d18: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x125d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_125d1c:
    // 0x125d1c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x125d1cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_125d20:
    // 0x125d20: 0x4b8108ea  vmul.xy     $vf3, $vf1, $vf1
    ctx->pc = 0x125d20u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_125d24:
    // 0x125d24: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x125d24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_125d28:
    // 0x125d28: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x125d28u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_125d2c:
    // 0x125d2c: 0xc6000304  lwc1        $f0, 0x304($s0)
    ctx->pc = 0x125d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_125d30:
    // 0x125d30: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x125d30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_125d34:
    // 0x125d34: 0x96030444  lhu         $v1, 0x444($s0)
    ctx->pc = 0x125d34u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1092)));
label_125d38:
    // 0x125d38: 0x46000042  mul.s       $f1, $f0, $f0
    ctx->pc = 0x125d38u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_125d3c:
    // 0x125d3c: 0x1464000a  bne         $v1, $a0, . + 4 + (0xA << 2)
label_125d40:
    if (ctx->pc == 0x125D40u) {
        ctx->pc = 0x125D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125D3Cu;
        // 0x125d40: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125D44u;
        goto label_125d44;
    }
    ctx->pc = 0x125D3Cu;
    {
        const bool branch_taken_0x125d3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x125D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125D3Cu;
        // 0x125d40: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125d3c) {
            ctx->pc = 0x125D68u;
            goto label_125d68;
        }
    }
    ctx->pc = 0x125D44u;
label_125d44:
    // 0x125d44: 0x3c013fd8  lui         $at, 0x3FD8
    ctx->pc = 0x125d44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16344 << 16));
label_125d48:
    // 0x125d48: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x125d48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
label_125d4c:
    // 0x125d4c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x125d4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_125d50:
    // 0x125d50: 0x0  nop
    ctx->pc = 0x125d50u;
    // NOP
label_125d54:
    // 0x125d54: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x125d54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_125d58:
    // 0x125d58: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x125d58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_125d5c:
    // 0x125d5c: 0x0  nop
    ctx->pc = 0x125d5cu;
    // NOP
label_125d60:
    // 0x125d60: 0x45030010  bc1tl       . + 4 + (0x10 << 2)
label_125d64:
    if (ctx->pc == 0x125D64u) {
        ctx->pc = 0x125D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125D60u;
        // 0x125d64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125D68u;
        goto label_125d68;
    }
    ctx->pc = 0x125D60u;
    {
        const bool branch_taken_0x125d60 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x125d60) {
            ctx->pc = 0x125D64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x125D60u;
            // 0x125d64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x125DA4u;
            goto label_125da4;
        }
    }
    ctx->pc = 0x125D68u;
label_125d68:
    // 0x125d68: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x125d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_125d6c:
    // 0x125d6c: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x125d6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_125d70:
    // 0x125d70: 0x8c62021c  lw          $v0, 0x21C($v1)
    ctx->pc = 0x125d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_125d74:
    // 0x125d74: 0x40f809  jalr        $v0
label_125d78:
    if (ctx->pc == 0x125D78u) {
        ctx->pc = 0x125D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125D74u;
        // 0x125d78: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125D7Cu;
        goto label_125d7c;
    }
    ctx->pc = 0x125D74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x125D7Cu);
        ctx->pc = 0x125D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125D74u;
        // 0x125d78: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125D74u, 0x125D7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x125D7Cu;
label_125d7c:
    // 0x125d7c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x125d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_125d80:
    // 0x125d80: 0xc6010188  lwc1        $f1, 0x188($s0)
    ctx->pc = 0x125d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_125d84:
    // 0x125d84: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x125d84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
label_125d88:
    // 0x125d88: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x125d88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_125d8c:
    // 0x125d8c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x125d8cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_125d90:
    // 0x125d90: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x125d90u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_125d94:
    // 0x125d94: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x125d94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_125d98:
    // 0x125d98: 0x0  nop
    ctx->pc = 0x125d98u;
    // NOP
label_125d9c:
    // 0x125d9c: 0x45000020  bc1f        . + 4 + (0x20 << 2)
label_125da0:
    if (ctx->pc == 0x125DA0u) {
        ctx->pc = 0x125DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125D9Cu;
        // 0x125da0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125DA4u;
        goto label_125da4;
    }
    ctx->pc = 0x125D9Cu;
    {
        const bool branch_taken_0x125d9c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x125DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125D9Cu;
        // 0x125da0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125d9c) {
            ctx->pc = 0x125E20u;
            goto label_125e20;
        }
    }
    ctx->pc = 0x125DA4u;
label_125da4:
    // 0x125da4: 0xc049340  jal         func_124D00
label_125da8:
    if (ctx->pc == 0x125DA8u) {
        ctx->pc = 0x125DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125DA4u;
        // 0x125da8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125DACu;
        goto label_125dac;
    }
    ctx->pc = 0x125DA4u;
    SET_GPR_U32(ctx, 31, 0x125DACu);
    ctx->pc = 0x125DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125DA4u;
    // 0x125da8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124D00u, 0x125DA4u, 0x125DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125DACu;
label_125dac:
    // 0x125dac: 0x1000001c  b           . + 4 + (0x1C << 2)
label_125db0:
    if (ctx->pc == 0x125DB0u) {
        ctx->pc = 0x125DB4u;
        goto label_125db4;
    }
    ctx->pc = 0x125DACu;
    {
        const bool branch_taken_0x125dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x125dac) {
            ctx->pc = 0x125E20u;
            goto label_125e20;
        }
    }
    ctx->pc = 0x125DB4u;
label_125db4:
    // 0x125db4: 0x84640278  lh          $a0, 0x278($v1)
    ctx->pc = 0x125db4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 632)));
label_125db8:
    // 0x125db8: 0x8c62027c  lw          $v0, 0x27C($v1)
    ctx->pc = 0x125db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 636)));
label_125dbc:
    // 0x125dbc: 0x40f809  jalr        $v0
label_125dc0:
    if (ctx->pc == 0x125DC0u) {
        ctx->pc = 0x125DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125DBCu;
        // 0x125dc0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125DC4u;
        goto label_125dc4;
    }
    ctx->pc = 0x125DBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x125DC4u);
        ctx->pc = 0x125DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125DBCu;
        // 0x125dc0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125DBCu, 0x125DC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x125DC4u;
label_125dc4:
    // 0x125dc4: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x125dc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_125dc8:
    // 0x125dc8: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_125dcc:
    if (ctx->pc == 0x125DCCu) {
        ctx->pc = 0x125DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125DC8u;
        // 0x125dcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125DD0u;
        goto label_125dd0;
    }
    ctx->pc = 0x125DC8u;
    {
        const bool branch_taken_0x125dc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x125DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125DC8u;
        // 0x125dcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125dc8) {
            ctx->pc = 0x125E20u;
            goto label_125e20;
        }
    }
    ctx->pc = 0x125DD0u;
label_125dd0:
    // 0x125dd0: 0xc049340  jal         func_124D00
label_125dd4:
    if (ctx->pc == 0x125DD4u) {
        ctx->pc = 0x125DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125DD0u;
        // 0x125dd4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125DD8u;
        goto label_125dd8;
    }
    ctx->pc = 0x125DD0u;
    SET_GPR_U32(ctx, 31, 0x125DD8u);
    ctx->pc = 0x125DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125DD0u;
    // 0x125dd4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124D00u, 0x125DD0u, 0x125DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125DD8u;
label_125dd8:
    // 0x125dd8: 0xc6000338  lwc1        $f0, 0x338($s0)
    ctx->pc = 0x125dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_125ddc:
    // 0x125ddc: 0xc6010334  lwc1        $f1, 0x334($s0)
    ctx->pc = 0x125ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_125de0:
    // 0x125de0: 0xe6000340  swc1        $f0, 0x340($s0)
    ctx->pc = 0x125de0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 832), bits); }
label_125de4:
    // 0x125de4: 0xe601033c  swc1        $f1, 0x33C($s0)
    ctx->pc = 0x125de4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 828), bits); }
label_125de8:
    // 0x125de8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x125de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_125dec:
    // 0x125dec: 0x84640278  lh          $a0, 0x278($v1)
    ctx->pc = 0x125decu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 632)));
label_125df0:
    // 0x125df0: 0x8c62027c  lw          $v0, 0x27C($v1)
    ctx->pc = 0x125df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 636)));
label_125df4:
    // 0x125df4: 0x40f809  jalr        $v0
label_125df8:
    if (ctx->pc == 0x125DF8u) {
        ctx->pc = 0x125DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125DF4u;
        // 0x125df8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125DFCu;
        goto label_125dfc;
    }
    ctx->pc = 0x125DF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x125DFCu);
        ctx->pc = 0x125DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125DF4u;
        // 0x125df8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125DF4u, 0x125DFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x125DFCu;
label_125dfc:
    // 0x125dfc: 0xc047e6c  jal         func_11F9B0
label_125e00:
    if (ctx->pc == 0x125E00u) {
        ctx->pc = 0x125E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125DFCu;
        // 0x125e00: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125E04u;
        goto label_125e04;
    }
    ctx->pc = 0x125DFCu;
    SET_GPR_U32(ctx, 31, 0x125E04u);
    ctx->pc = 0x125E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125DFCu;
    // 0x125e00: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x125DFCu, 0x125E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125E04u;
label_125e04:
    // 0x125e04: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_125e08:
    if (ctx->pc == 0x125E08u) {
        ctx->pc = 0x125E0Cu;
        goto label_125e0c;
    }
    ctx->pc = 0x125E04u;
    {
        const bool branch_taken_0x125e04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x125e04) {
            ctx->pc = 0x125E20u;
            goto label_125e20;
        }
    }
    ctx->pc = 0x125E0Cu;
label_125e0c:
    // 0x125e0c: 0x3c013c88  lui         $at, 0x3C88
    ctx->pc = 0x125e0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15496 << 16));
label_125e10:
    // 0x125e10: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x125e10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
label_125e14:
    // 0x125e14: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x125e14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_125e18:
    // 0x125e18: 0xc04ab96  jal         func_12AE58
label_125e1c:
    if (ctx->pc == 0x125E1Cu) {
        ctx->pc = 0x125E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125E18u;
        // 0x125e1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125E20u;
        goto label_125e20;
    }
    ctx->pc = 0x125E18u;
    SET_GPR_U32(ctx, 31, 0x125E20u);
    ctx->pc = 0x125E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125E18u;
    // 0x125e1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12AE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12AE58u, 0x125E18u, 0x125E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125E20u;
label_125e20:
    // 0x125e20: 0x3c013c88  lui         $at, 0x3C88
    ctx->pc = 0x125e20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15496 << 16));
label_125e24:
    // 0x125e24: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x125e24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
label_125e28:
    // 0x125e28: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x125e28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_125e2c:
    // 0x125e2c: 0xc04828c  jal         func_120A30
label_125e30:
    if (ctx->pc == 0x125E30u) {
        ctx->pc = 0x125E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125E2Cu;
        // 0x125e30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125E34u;
        goto label_125e34;
    }
    ctx->pc = 0x125E2Cu;
    SET_GPR_U32(ctx, 31, 0x125E34u);
    ctx->pc = 0x125E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125E2Cu;
    // 0x125e30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120A30u, 0x125E2Cu, 0x125E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125E34u;
label_125e34:
    // 0x125e34: 0xc600032c  lwc1        $f0, 0x32C($s0)
    ctx->pc = 0x125e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_125e38:
    // 0x125e38: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x125e38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_125e3c:
    // 0x125e3c: 0xe6000380  swc1        $f0, 0x380($s0)
    ctx->pc = 0x125e3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 896), bits); }
label_125e40:
    // 0x125e40: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x125e40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_125e44:
    // 0x125e44: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x125e44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_125e48:
    // 0x125e48: 0x3e00008  jr          $ra
label_125e4c:
    if (ctx->pc == 0x125E4Cu) {
        ctx->pc = 0x125E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125E48u;
        // 0x125e4c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125E50u;
        goto label_fallthrough_0x125e48;
    }
    ctx->pc = 0x125E48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125E48u;
        // 0x125e4c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125E48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x125e48:
    ctx->pc = 0x125E50u;
}
