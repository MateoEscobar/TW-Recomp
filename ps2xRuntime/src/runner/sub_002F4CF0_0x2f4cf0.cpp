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

// Function: sub_002F4CF0
// Address: 0x2f4cf0 - 0x2f4e10
void sub_002F4CF0_0x2f4cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F4CF0_0x2f4cf0");
#endif

    switch (ctx->pc) {
        case 0x2f4cf0u: goto label_2f4cf0;
        case 0x2f4cf4u: goto label_2f4cf4;
        case 0x2f4cf8u: goto label_2f4cf8;
        case 0x2f4cfcu: goto label_2f4cfc;
        case 0x2f4d00u: goto label_2f4d00;
        case 0x2f4d04u: goto label_2f4d04;
        case 0x2f4d08u: goto label_2f4d08;
        case 0x2f4d0cu: goto label_2f4d0c;
        case 0x2f4d10u: goto label_2f4d10;
        case 0x2f4d14u: goto label_2f4d14;
        case 0x2f4d18u: goto label_2f4d18;
        case 0x2f4d1cu: goto label_2f4d1c;
        case 0x2f4d20u: goto label_2f4d20;
        case 0x2f4d24u: goto label_2f4d24;
        case 0x2f4d28u: goto label_2f4d28;
        case 0x2f4d2cu: goto label_2f4d2c;
        case 0x2f4d30u: goto label_2f4d30;
        case 0x2f4d34u: goto label_2f4d34;
        case 0x2f4d38u: goto label_2f4d38;
        case 0x2f4d3cu: goto label_2f4d3c;
        case 0x2f4d40u: goto label_2f4d40;
        case 0x2f4d44u: goto label_2f4d44;
        case 0x2f4d48u: goto label_2f4d48;
        case 0x2f4d4cu: goto label_2f4d4c;
        case 0x2f4d50u: goto label_2f4d50;
        case 0x2f4d54u: goto label_2f4d54;
        case 0x2f4d58u: goto label_2f4d58;
        case 0x2f4d5cu: goto label_2f4d5c;
        case 0x2f4d60u: goto label_2f4d60;
        case 0x2f4d64u: goto label_2f4d64;
        case 0x2f4d68u: goto label_2f4d68;
        case 0x2f4d6cu: goto label_2f4d6c;
        case 0x2f4d70u: goto label_2f4d70;
        case 0x2f4d74u: goto label_2f4d74;
        case 0x2f4d78u: goto label_2f4d78;
        case 0x2f4d7cu: goto label_2f4d7c;
        case 0x2f4d80u: goto label_2f4d80;
        case 0x2f4d84u: goto label_2f4d84;
        case 0x2f4d88u: goto label_2f4d88;
        case 0x2f4d8cu: goto label_2f4d8c;
        case 0x2f4d90u: goto label_2f4d90;
        case 0x2f4d94u: goto label_2f4d94;
        case 0x2f4d98u: goto label_2f4d98;
        case 0x2f4d9cu: goto label_2f4d9c;
        case 0x2f4da0u: goto label_2f4da0;
        case 0x2f4da4u: goto label_2f4da4;
        case 0x2f4da8u: goto label_2f4da8;
        case 0x2f4dacu: goto label_2f4dac;
        case 0x2f4db0u: goto label_2f4db0;
        case 0x2f4db4u: goto label_2f4db4;
        case 0x2f4db8u: goto label_2f4db8;
        case 0x2f4dbcu: goto label_2f4dbc;
        case 0x2f4dc0u: goto label_2f4dc0;
        case 0x2f4dc4u: goto label_2f4dc4;
        case 0x2f4dc8u: goto label_2f4dc8;
        case 0x2f4dccu: goto label_2f4dcc;
        case 0x2f4dd0u: goto label_2f4dd0;
        case 0x2f4dd4u: goto label_2f4dd4;
        case 0x2f4dd8u: goto label_2f4dd8;
        case 0x2f4ddcu: goto label_2f4ddc;
        case 0x2f4de0u: goto label_2f4de0;
        case 0x2f4de4u: goto label_2f4de4;
        case 0x2f4de8u: goto label_2f4de8;
        case 0x2f4decu: goto label_2f4dec;
        case 0x2f4df0u: goto label_2f4df0;
        case 0x2f4df4u: goto label_2f4df4;
        case 0x2f4df8u: goto label_2f4df8;
        case 0x2f4dfcu: goto label_2f4dfc;
        case 0x2f4e00u: goto label_2f4e00;
        case 0x2f4e04u: goto label_2f4e04;
        case 0x2f4e08u: goto label_2f4e08;
        case 0x2f4e0cu: goto label_2f4e0c;
        default: break;
    }

    ctx->pc = 0x2f4cf0u;

label_2f4cf0:
    // 0x2f4cf0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2f4cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_2f4cf4:
    // 0x2f4cf4: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x2f4cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_2f4cf8:
    // 0x2f4cf8: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x2f4cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_2f4cfc:
    // 0x2f4cfc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2f4cfcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2f4d00:
    // 0x2f4d00: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x2f4d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_2f4d04:
    // 0x2f4d04: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2f4d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2f4d08:
    // 0x2f4d08: 0x822201b0  lb          $v0, 0x1B0($s1)
    ctx->pc = 0x2f4d08u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
label_2f4d0c:
    // 0x2f4d0c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2f4d0cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_2f4d10:
    // 0x2f4d10: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
label_2f4d14:
    if (ctx->pc == 0x2F4D14u) {
        ctx->pc = 0x2F4D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4D10u;
        // 0x2f4d14: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4D18u;
        goto label_2f4d18;
    }
    ctx->pc = 0x2F4D10u;
    {
        const bool branch_taken_0x2f4d10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4D10u;
        // 0x2f4d14: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4d10) {
            ctx->pc = 0x2F4DE8u;
            goto label_2f4de8;
        }
    }
    ctx->pc = 0x2F4D18u;
label_2f4d18:
    // 0x2f4d18: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2f4d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f4d1c:
    // 0x2f4d1c: 0xc089bfc  jal         func_226FF0
label_2f4d20:
    if (ctx->pc == 0x2F4D20u) {
        ctx->pc = 0x2F4D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4D1Cu;
        // 0x2f4d20: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4D24u;
        goto label_2f4d24;
    }
    ctx->pc = 0x2F4D1Cu;
    SET_GPR_U32(ctx, 31, 0x2F4D24u);
    ctx->pc = 0x2F4D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4D1Cu;
    // 0x2f4d20: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x2F4D1Cu, 0x2F4D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4D24u;
label_2f4d24:
    // 0x2f4d24: 0xc0e57ce  jal         func_395F38
label_2f4d28:
    if (ctx->pc == 0x2F4D28u) {
        ctx->pc = 0x2F4D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4D24u;
        // 0x2f4d28: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4D2Cu;
        goto label_2f4d2c;
    }
    ctx->pc = 0x2F4D24u;
    SET_GPR_U32(ctx, 31, 0x2F4D2Cu);
    ctx->pc = 0x2F4D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4D24u;
    // 0x2f4d28: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x2F4D24u, 0x2F4D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4D2Cu;
label_2f4d2c:
    // 0x2f4d2c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2f4d2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f4d30:
    // 0x2f4d30: 0x10c00030  beqz        $a2, . + 4 + (0x30 << 2)
label_2f4d34:
    if (ctx->pc == 0x2F4D34u) {
        ctx->pc = 0x2F4D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4D30u;
        // 0x2f4d34: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4D38u;
        goto label_2f4d38;
    }
    ctx->pc = 0x2F4D30u;
    {
        const bool branch_taken_0x2f4d30 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4D30u;
        // 0x2f4d34: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4d30) {
            ctx->pc = 0x2F4DF4u;
            goto label_2f4df4;
        }
    }
    ctx->pc = 0x2F4D38u;
label_2f4d38:
    // 0x2f4d38: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2f4d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2f4d3c:
    // 0x2f4d3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f4d3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f4d40:
    // 0x2f4d40: 0x846500a0  lh          $a1, 0xA0($v1)
    ctx->pc = 0x2f4d40u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 160)));
label_2f4d44:
    // 0x2f4d44: 0x8c6200a4  lw          $v0, 0xA4($v1)
    ctx->pc = 0x2f4d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
label_2f4d48:
    // 0x2f4d48: 0x40f809  jalr        $v0
label_2f4d4c:
    if (ctx->pc == 0x2F4D4Cu) {
        ctx->pc = 0x2F4D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4D48u;
        // 0x2f4d4c: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4D50u;
        goto label_2f4d50;
    }
    ctx->pc = 0x2F4D48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F4D50u);
        ctx->pc = 0x2F4D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4D48u;
        // 0x2f4d4c: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F4D48u, 0x2F4D50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F4D50u;
label_2f4d50:
    // 0x2f4d50: 0x86260092  lh          $a2, 0x92($s1)
    ctx->pc = 0x2f4d50u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
label_2f4d54:
    // 0x2f4d54: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x2f4d54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_2f4d58:
    // 0x2f4d58: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x2f4d58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_2f4d5c:
    // 0x2f4d5c: 0x3c013fd9  lui         $at, 0x3FD9
    ctx->pc = 0x2f4d5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16345 << 16));
label_2f4d60:
    // 0x2f4d60: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2f4d60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_2f4d64:
    // 0x2f4d64: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f4d64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f4d68:
    // 0x2f4d68: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x2f4d68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_2f4d6c:
    // 0x2f4d6c: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x2f4d6cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
label_2f4d70:
    // 0x2f4d70: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x2f4d70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_2f4d74:
    // 0x2f4d74: 0x24841740  addiu       $a0, $a0, 0x1740
    ctx->pc = 0x2f4d74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5952));
label_2f4d78:
    // 0x2f4d78: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x2f4d78u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_2f4d7c:
    // 0x2f4d7c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f4d7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f4d80:
    // 0x2f4d80: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2f4d80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_2f4d84:
    // 0x2f4d84: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2f4d84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2f4d88:
    // 0x2f4d88: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2f4d88u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2f4d8c:
    // 0x2f4d8c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2f4d8cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2f4d90:
    // 0x2f4d90: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2f4d90u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2f4d94:
    // 0x2f4d94: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x2f4d94u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_2f4d98:
    // 0x2f4d98: 0x7ba70010  lq          $a3, 0x10($sp)
    ctx->pc = 0x2f4d98u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2f4d9c:
    // 0x2f4d9c: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x2f4d9cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_2f4da0:
    // 0x2f4da0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2f4da0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f4da4:
    // 0x2f4da4: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2f4da4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2f4da8:
    // 0x2f4da8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2f4da8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2f4dac:
    // 0x2f4dac: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2f4dacu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2f4db0:
    // 0x2f4db0: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2f4db0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2f4db4:
    // 0x2f4db4: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x2f4db4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_2f4db8:
    // 0x2f4db8: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x2f4db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_2f4dbc:
    // 0x2f4dbc: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x2f4dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_2f4dc0:
    // 0x2f4dc0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f4dc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f4dc4:
    // 0x2f4dc4: 0x7fa70000  sq          $a3, 0x0($sp)
    ctx->pc = 0x2f4dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 7));
label_2f4dc8:
    // 0x2f4dc8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f4dc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f4dcc:
    // 0x2f4dcc: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x2f4dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_2f4dd0:
    // 0x2f4dd0: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2f4dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_2f4dd4:
    // 0x2f4dd4: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x2f4dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_2f4dd8:
    // 0x2f4dd8: 0xc0937d0  jal         func_24DF40
label_2f4ddc:
    if (ctx->pc == 0x2F4DDCu) {
        ctx->pc = 0x2F4DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4DD8u;
        // 0x2f4ddc: 0x7fa30030  sq          $v1, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4DE0u;
        goto label_2f4de0;
    }
    ctx->pc = 0x2F4DD8u;
    SET_GPR_U32(ctx, 31, 0x2F4DE0u);
    ctx->pc = 0x2F4DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4DD8u;
    // 0x2f4ddc: 0x7fa30030  sq          $v1, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24DF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24DF40u, 0x2F4DD8u, 0x2F4DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4DE0u;
label_2f4de0:
    // 0x2f4de0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2f4de4:
    if (ctx->pc == 0x2F4DE4u) {
        ctx->pc = 0x2F4DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4DE0u;
        // 0x2f4de4: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4DE8u;
        goto label_2f4de8;
    }
    ctx->pc = 0x2F4DE0u;
    {
        const bool branch_taken_0x2f4de0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4DE0u;
        // 0x2f4de4: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4de0) {
            ctx->pc = 0x2F4DF8u;
            goto label_2f4df8;
        }
    }
    ctx->pc = 0x2F4DE8u;
label_2f4de8:
    // 0x2f4de8: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x2f4de8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_2f4dec:
    // 0x2f4dec: 0x8c4319e8  lw          $v1, 0x19E8($v0)
    ctx->pc = 0x2f4decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6632)));
label_2f4df0:
    // 0x2f4df0: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x2f4df0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_2f4df4:
    // 0x2f4df4: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x2f4df4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2f4df8:
    // 0x2f4df8: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x2f4df8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2f4dfc:
    // 0x2f4dfc: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x2f4dfcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2f4e00:
    // 0x2f4e00: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2f4e00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2f4e04:
    // 0x2f4e04: 0x3e00008  jr          $ra
label_2f4e08:
    if (ctx->pc == 0x2F4E08u) {
        ctx->pc = 0x2F4E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4E04u;
        // 0x2f4e08: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4E0Cu;
        goto label_2f4e0c;
    }
    ctx->pc = 0x2F4E04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F4E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4E04u;
        // 0x2f4e08: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F4E04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F4E0Cu;
label_2f4e0c:
    // 0x2f4e0c: 0x0  nop
    ctx->pc = 0x2f4e0cu;
    // NOP
    ctx->pc = 0x2f4e10u;
}
