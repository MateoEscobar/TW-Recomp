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

// Function: sub_00251D28
// Address: 0x251d28 - 0x252108
void sub_00251D28_0x251d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00251D28_0x251d28");
#endif

    switch (ctx->pc) {
        case 0x251d84u: goto label_251d84;
        case 0x251d8cu: goto label_251d8c;
        case 0x251d94u: goto label_251d94;
        case 0x251d9cu: goto label_251d9c;
        case 0x251dacu: goto label_251dac;
        case 0x251ddcu: goto label_251ddc;
        case 0x251df0u: goto label_251df0;
        case 0x251df8u: goto label_251df8;
        case 0x251e14u: goto label_251e14;
        case 0x251f00u: goto label_251f00;
        case 0x251f10u: goto label_251f10;
        case 0x251f20u: goto label_251f20;
        case 0x251f50u: goto label_251f50;
        case 0x251f68u: goto label_251f68;
        case 0x251fa0u: goto label_251fa0;
        case 0x251fc8u: goto label_251fc8;
        case 0x25202cu: goto label_25202c;
        case 0x252080u: goto label_252080;
        case 0x25209cu: goto label_25209c;
        case 0x2520b8u: goto label_2520b8;
        case 0x2520c8u: goto label_2520c8;
        default: break;
    }

    ctx->pc = 0x251d28u;

    // 0x251d28: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x251d28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x251d2c: 0xe7b500e8  swc1        $f21, 0xE8($sp)
    ctx->pc = 0x251d2cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x251d30: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x251d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x251d34: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x251d34u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x251d38: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x251d38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251d3c: 0xafa60034  sw          $a2, 0x34($sp)
    ctx->pc = 0x251d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 6));
    // 0x251d40: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x251d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x251d44: 0x46006b06  mov.s       $f12, $f13
    ctx->pc = 0x251d44u;
    ctx->f[12] = FPU_MOV_S(ctx->f[13]);
    // 0x251d48: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x251d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x251d4c: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x251d4cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    // 0x251d50: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x251d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x251d54: 0x3c12006d  lui         $s2, 0x6D
    ctx->pc = 0x251d54u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)109 << 16));
    // 0x251d58: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x251d58u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x251d5c: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x251d5cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
    // 0x251d60: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x251d60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x251d64: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x251d64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x251d68: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x251d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x251d6c: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x251d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x251d70: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x251d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
    // 0x251d74: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x251d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
    // 0x251d78: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x251d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x251d7c: 0xc12e29c  jal         func_4B8A70
    ctx->pc = 0x251D7Cu;
    SET_GPR_U32(ctx, 31, 0x251D84u);
    ctx->pc = 0x251D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251D7Cu;
    // 0x251d80: 0xafa70038  sw          $a3, 0x38($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x251D7Cu, 0x251D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251D84u;
label_251d84:
    // 0x251d84: 0xc0945da  jal         func_251768
    ctx->pc = 0x251D84u;
    SET_GPR_U32(ctx, 31, 0x251D8Cu);
    ctx->pc = 0x251D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251D84u;
    // 0x251d88: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x251768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251768u, 0x251D84u, 0x251D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251D8Cu;
label_251d8c:
    // 0x251d8c: 0xc094c6e  jal         func_2531B8
    ctx->pc = 0x251D8Cu;
    SET_GPR_U32(ctx, 31, 0x251D94u);
    ctx->pc = 0x251D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251D8Cu;
    // 0x251d90: 0x8e2405a8  lw          $a0, 0x5A8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1448)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2531B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2531B8u, 0x251D8Cu, 0x251D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251D94u;
label_251d94:
    // 0x251d94: 0xc094d30  jal         func_2534C0
    ctx->pc = 0x251D94u;
    SET_GPR_U32(ctx, 31, 0x251D9Cu);
    ctx->pc = 0x251D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251D94u;
    // 0x251d98: 0x8e6405ac  lw          $a0, 0x5AC($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1452)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2534C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2534C0u, 0x251D94u, 0x251D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251D9Cu;
label_251d9c:
    // 0x251d9c: 0xa6000018  sh          $zero, 0x18($s0)
    ctx->pc = 0x251d9cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 24), (uint16_t)GPR_U32(ctx, 0));
    // 0x251da0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x251da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251da4: 0xc094608  jal         func_251820
    ctx->pc = 0x251DA4u;
    SET_GPR_U32(ctx, 31, 0x251DACu);
    ctx->pc = 0x251DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251DA4u;
    // 0x251da8: 0x8fa50034  lw          $a1, 0x34($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251820u, 0x251DA4u, 0x251DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251DACu;
label_251dac:
    // 0x251dac: 0x8e45a21c  lw          $a1, -0x5DE4($s2)
    ctx->pc = 0x251dacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294943260)));
    // 0x251db0: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x251db0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x251db4: 0x96030018  lhu         $v1, 0x18($s0)
    ctx->pc = 0x251db4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x251db8: 0x2052823  subu        $a1, $s0, $a1
    ctx->pc = 0x251db8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x251dbc: 0x8e2405a8  lw          $a0, 0x5A8($s1)
    ctx->pc = 0x251dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1448)));
    // 0x251dc0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x251dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x251dc4: 0x52943  sra         $a1, $a1, 5
    ctx->pc = 0x251dc4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 5));
    // 0x251dc8: 0xa6030016  sh          $v1, 0x16($s0)
    ctx->pc = 0x251dc8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 3));
    // 0x251dcc: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x251dccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x251dd0: 0xa606001c  sh          $a2, 0x1C($s0)
    ctx->pc = 0x251dd0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 28), (uint16_t)GPR_U32(ctx, 6));
    // 0x251dd4: 0xc094c70  jal         func_2531C0
    ctx->pc = 0x251DD4u;
    SET_GPR_U32(ctx, 31, 0x251DDCu);
    ctx->pc = 0x251DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251DD4u;
    // 0x251dd8: 0xa602001a  sh          $v0, 0x1A($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 26), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2531C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2531C0u, 0x251DD4u, 0x251DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251DDCu;
label_251ddc:
    // 0x251ddc: 0x220b02d  daddu       $s6, $s1, $zero
    ctx->pc = 0x251ddcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251de0: 0x260b82d  daddu       $s7, $s3, $zero
    ctx->pc = 0x251de0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251de4: 0x100000b2  b           . + 4 + (0xB2 << 2)
    ctx->pc = 0x251DE4u;
    {
        const bool branch_taken_0x251de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251DE4u;
        // 0x251de8: 0x240a82d  daddu       $s5, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251de4) {
            ctx->pc = 0x2520B0u;
            goto label_2520b0;
        }
    }
    ctx->pc = 0x251DECu;
    // 0x251dec: 0x0  nop
    ctx->pc = 0x251decu;
    // NOP
label_251df0:
    // 0x251df0: 0xc094c9a  jal         func_253268
    ctx->pc = 0x251DF0u;
    SET_GPR_U32(ctx, 31, 0x251DF8u);
    ctx->pc = 0x251DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251DF0u;
    // 0x251df4: 0x8ec405a8  lw          $a0, 0x5A8($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 1448)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253268u, 0x251DF0u, 0x251DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251DF8u;
label_251df8:
    // 0x251df8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x251df8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x251dfc: 0x8ea3a21c  lw          $v1, -0x5DE4($s5)
    ctx->pc = 0x251dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294943260)));
    // 0x251e00: 0x22943  sra         $a1, $v0, 5
    ctx->pc = 0x251e00u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 5));
    // 0x251e04: 0x8ee405ac  lw          $a0, 0x5AC($s7)
    ctx->pc = 0x251e04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 1452)));
    // 0x251e08: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x251e08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x251e0c: 0xc094d34  jal         func_2534D0
    ctx->pc = 0x251E0Cu;
    SET_GPR_U32(ctx, 31, 0x251E14u);
    ctx->pc = 0x251E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251E0Cu;
    // 0x251e10: 0x30a5ffff  andi        $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2534D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2534D0u, 0x251E0Cu, 0x251E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251E14u;
label_251e14:
    // 0x251e14: 0x104000aa  beqz        $v0, . + 4 + (0xAA << 2)
    ctx->pc = 0x251E14u;
    {
        const bool branch_taken_0x251e14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x251E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251E14u;
        // 0x251e18: 0x3402abcd  ori         $v0, $zero, 0xABCD (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)43981);
        ctx->in_delay_slot = false;
        if (branch_taken_0x251e14) {
            ctx->pc = 0x2520C0u;
            goto label_2520c0;
        }
    }
    ctx->pc = 0x251E1Cu;
    // 0x251e1c: 0x963e0018  lhu         $fp, 0x18($s1)
    ctx->pc = 0x251e1cu;
    SET_GPR_ZE32(ctx, 30, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x251e20: 0xa6220018  sh          $v0, 0x18($s1)
    ctx->pc = 0x251e20u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 24), (uint16_t)GPR_U32(ctx, 2));
    // 0x251e24: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x251e24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x251e28: 0x7a230000  lq          $v1, 0x0($s1)
    ctx->pc = 0x251e28u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x251e2c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x251e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x251e30: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x251e30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x251e34: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x251e34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x251e38: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x251e38u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x251e3c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x251e3cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x251e40: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x251e40u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x251e44: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x251e44u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x251e48: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x251e48u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x251e4c: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x251e4cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x251e50: 0xc481cc60  lwc1        $f1, -0x33A0($a0)
    ctx->pc = 0x251e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294954080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x251e54: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x251e54u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x251e58: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x251e58u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x251e5c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x251e5cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x251e60: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x251e60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x251e64: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x251e64u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x251e68: 0x4a0003bf  vwaitq
    ctx->pc = 0x251e68u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x251e6c: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x251e6cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x251e70: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x251e70u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x251e74: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x251e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x251e78: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x251e78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x251e7c: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x251e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x251e80: 0x0  nop
    ctx->pc = 0x251e80u;
    // NOP
    // 0x251e84: 0x0  nop
    ctx->pc = 0x251e84u;
    // NOP
    // 0x251e88: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x251e88u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x251e8c: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x251e8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x251e90: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x251e90u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x251e94: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x251e94u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x251e98: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x251e98u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x251e9c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x251e9cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x251ea0: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x251ea0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x251ea4: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x251ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x251ea8: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x251EA8u;
    {
        const bool branch_taken_0x251ea8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x251EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251EA8u;
        // 0x251eac: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251ea8) {
            ctx->pc = 0x251EF4u;
            goto label_251ef4;
        }
    }
    ctx->pc = 0x251EB0u;
    // 0x251eb0: 0x4602a834  c.lt.s      $f21, $f2
    ctx->pc = 0x251eb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x251eb4: 0x0  nop
    ctx->pc = 0x251eb4u;
    // NOP
    // 0x251eb8: 0x45000027  bc1f        . + 4 + (0x27 << 2)
    ctx->pc = 0x251EB8u;
    {
        const bool branch_taken_0x251eb8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x251EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251EB8u;
        // 0x251ebc: 0x8fa50038  lw          $a1, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251eb8) {
            ctx->pc = 0x251F58u;
            goto label_251f58;
        }
    }
    ctx->pc = 0x251EC0u;
    // 0x251ec0: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x251ec0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x251ec4: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x251ec4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x251ec8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x251ec8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x251ecc: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x251eccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x251ed0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x251ed0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x251ed4: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x251ed4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x251ed8: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x251ed8u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x251edc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x251edcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x251ee0: 0x0  nop
    ctx->pc = 0x251ee0u;
    // NOP
    // 0x251ee4: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x251ee4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x251ee8: 0x0  nop
    ctx->pc = 0x251ee8u;
    // NOP
    // 0x251eec: 0x4502001b  bc1fl       . + 4 + (0x1B << 2)
    ctx->pc = 0x251EECu;
    {
        const bool branch_taken_0x251eec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x251eec) {
            ctx->pc = 0x251EF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x251EECu;
            // 0x251ef0: 0x86220014  lh          $v0, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x251F5Cu;
            goto label_251f5c;
        }
    }
    ctx->pc = 0x251EF4u;
label_251ef4:
    // 0x251ef4: 0x8ee405ac  lw          $a0, 0x5AC($s7)
    ctx->pc = 0x251ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 1452)));
    // 0x251ef8: 0xc094d4a  jal         func_253528
    ctx->pc = 0x251EF8u;
    SET_GPR_U32(ctx, 31, 0x251F00u);
    ctx->pc = 0x251EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251EF8u;
    // 0x251efc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253528u, 0x251EF8u, 0x251F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251F00u;
label_251f00:
    // 0x251f00: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x251f00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251f04: 0x5a40000c  blezl       $s2, . + 4 + (0xC << 2)
    ctx->pc = 0x251F04u;
    {
        const bool branch_taken_0x251f04 = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x251f04) {
            ctx->pc = 0x251F08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x251F04u;
            // 0x251f08: 0x7a220000  lq          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x251F38u;
            goto label_251f38;
        }
    }
    ctx->pc = 0x251F0Cu;
    // 0x251f0c: 0x0  nop
    ctx->pc = 0x251f0cu;
    // NOP
label_251f10:
    // 0x251f10: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x251f10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x251f14: 0x8ee405ac  lw          $a0, 0x5AC($s7)
    ctx->pc = 0x251f14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 1452)));
    // 0x251f18: 0xc094d2a  jal         func_2534A8
    ctx->pc = 0x251F18u;
    SET_GPR_U32(ctx, 31, 0x251F20u);
    ctx->pc = 0x251F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251F18u;
    // 0x251f1c: 0x3245ffff  andi        $a1, $s2, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2534A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2534A8u, 0x251F18u, 0x251F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251F20u;
label_251f20:
    // 0x251f20: 0x8ea3a21c  lw          $v1, -0x5DE4($s5)
    ctx->pc = 0x251f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294943260)));
    // 0x251f24: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x251f24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x251f28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x251f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x251f2c: 0x1e40fff8  bgtz        $s2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x251F2Cu;
    {
        const bool branch_taken_0x251f2c = (GPR_S32(ctx, 18) > 0);
        ctx->pc = 0x251F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251F2Cu;
        // 0x251f30: 0xa4400018  sh          $zero, 0x18($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 24), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251f2c) {
            ctx->pc = 0x251F10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_251f10;
        }
    }
    ctx->pc = 0x251F34u;
    // 0x251f34: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x251f34u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_251f38:
    // 0x251f38: 0x2e030080  sltiu       $v1, $s0, 0x80
    ctx->pc = 0x251f38u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x251f3c: 0x8fa50034  lw          $a1, 0x34($sp)
    ctx->pc = 0x251f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x251f40: 0x1060005f  beqz        $v1, . + 4 + (0x5F << 2)
    ctx->pc = 0x251F40u;
    {
        const bool branch_taken_0x251f40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x251F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251F40u;
        // 0x251f44: 0x7ca20000  sq          $v0, 0x0($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251f40) {
            ctx->pc = 0x2520C0u;
            goto label_2520c0;
        }
    }
    ctx->pc = 0x251F48u;
    // 0x251f48: 0xc094680  jal         func_251A00
    ctx->pc = 0x251F48u;
    SET_GPR_U32(ctx, 31, 0x251F50u);
    ctx->pc = 0x251A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251A00u, 0x251F48u, 0x251F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251F50u;
label_251f50:
    // 0x251f50: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x251F50u;
    {
        const bool branch_taken_0x251f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251F50u;
        // 0x251f54: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251f50) {
            ctx->pc = 0x2520CCu;
            goto label_2520cc;
        }
    }
    ctx->pc = 0x251F58u;
label_251f58:
    // 0x251f58: 0x86220014  lh          $v0, 0x14($s1)
    ctx->pc = 0x251f58u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
label_251f5c:
    // 0x251f5c: 0x18400054  blez        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x251F5Cu;
    {
        const bool branch_taken_0x251f5c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x251F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251F5Cu;
        // 0x251f60: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251f5c) {
            ctx->pc = 0x2520B0u;
            goto label_2520b0;
        }
    }
    ctx->pc = 0x251F64u;
    // 0x251f64: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x251f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_251f68:
    // 0x251f68: 0x1280c0  sll         $s0, $s2, 3
    ctx->pc = 0x251f68u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x251f6c: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x251f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x251f70: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x251f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x251f74: 0x94620018  lhu         $v0, 0x18($v1)
    ctx->pc = 0x251f74u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x251f78: 0x3403abcd  ori         $v1, $zero, 0xABCD
    ctx->pc = 0x251f78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)43981);
    // 0x251f7c: 0x50430048  beql        $v0, $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x251F7Cu;
    {
        const bool branch_taken_0x251f7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x251f7c) {
            ctx->pc = 0x251F80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x251F7Cu;
            // 0x251f80: 0x86220014  lh          $v0, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2520A0u;
            goto label_2520a0;
        }
    }
    ctx->pc = 0x251F84u;
    // 0x251f84: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x251f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x251f88: 0x4400044  bltz        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x251F88u;
    {
        const bool branch_taken_0x251f88 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x251F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251F88u;
        // 0x251f8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251f88) {
            ctx->pc = 0x25209Cu;
            goto label_25209c;
        }
    }
    ctx->pc = 0x251F90u;
    // 0x251f90: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x251f90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251f94: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x251f94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251f98: 0xc094624  jal         func_251890
    ctx->pc = 0x251F98u;
    SET_GPR_U32(ctx, 31, 0x251FA0u);
    ctx->pc = 0x251F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251F98u;
    // 0x251f9c: 0x240700ff  addiu       $a3, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251890u, 0x251F98u, 0x251FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251FA0u;
label_251fa0:
    // 0x251fa0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x251fa0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251fa4: 0x8ea3a21c  lw          $v1, -0x5DE4($s5)
    ctx->pc = 0x251fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294943260)));
    // 0x251fa8: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x251fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x251fac: 0x8ec405a8  lw          $a0, 0x5A8($s6)
    ctx->pc = 0x251facu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 1448)));
    // 0x251fb0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x251fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x251fb4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x251fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x251fb8: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x251fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x251fbc: 0x52943  sra         $a1, $a1, 5
    ctx->pc = 0x251fbcu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 5));
    // 0x251fc0: 0xc094cd4  jal         func_253350
    ctx->pc = 0x251FC0u;
    SET_GPR_U32(ctx, 31, 0x251FC8u);
    ctx->pc = 0x251FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251FC0u;
    // 0x251fc4: 0x30a5ffff  andi        $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x253350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253350u, 0x251FC0u, 0x251FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251FC8u;
label_251fc8:
    // 0x251fc8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x251fc8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251fcc: 0x6600008  bltz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x251FCCu;
    {
        const bool branch_taken_0x251fcc = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x251FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251FCCu;
        // 0x251fd0: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251fcc) {
            ctx->pc = 0x251FF0u;
            goto label_251ff0;
        }
    }
    ctx->pc = 0x251FD4u;
    // 0x251fd4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x251fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x251fd8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x251fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x251fdc: 0x94830018  lhu         $v1, 0x18($a0)
    ctx->pc = 0x251fdcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x251fe0: 0x283182b  sltu        $v1, $s4, $v1
    ctx->pc = 0x251fe0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x251fe4: 0x5060002e  beql        $v1, $zero, . + 4 + (0x2E << 2)
    ctx->pc = 0x251FE4u;
    {
        const bool branch_taken_0x251fe4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x251fe4) {
            ctx->pc = 0x251FE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x251FE4u;
            // 0x251fe8: 0x86220014  lh          $v0, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2520A0u;
            goto label_2520a0;
        }
    }
    ctx->pc = 0x251FECu;
    // 0x251fec: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x251fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_251ff0:
    // 0x251ff0: 0x8ea3a21c  lw          $v1, -0x5DE4($s5)
    ctx->pc = 0x251ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294943260)));
    // 0x251ff4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x251ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x251ff8: 0x8fa50034  lw          $a1, 0x34($sp)
    ctx->pc = 0x251ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x251ffc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x251ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x252000: 0x2231823  subu        $v1, $s1, $v1
    ctx->pc = 0x252000u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x252004: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x252004u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x252008: 0xa483001c  sh          $v1, 0x1C($a0)
    ctx->pc = 0x252008u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 28), (uint16_t)GPR_U32(ctx, 3));
    // 0x25200c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x25200cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x252010: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x252010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x252014: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x252014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x252018: 0xa4740018  sh          $s4, 0x18($v1)
    ctx->pc = 0x252018u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 24), (uint16_t)GPR_U32(ctx, 20));
    // 0x25201c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x25201cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x252020: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x252020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x252024: 0xc094608  jal         func_251820
    ctx->pc = 0x252024u;
    SET_GPR_U32(ctx, 31, 0x25202Cu);
    ctx->pc = 0x252028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252024u;
    // 0x252028: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251820u, 0x252024u, 0x25202Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25202Cu;
label_25202c:
    // 0x25202c: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x25202cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x252030: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x252030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x252034: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x252034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x252038: 0xa482001a  sh          $v0, 0x1A($a0)
    ctx->pc = 0x252038u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 26), (uint16_t)GPR_U32(ctx, 2));
    // 0x25203c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x25203cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x252040: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x252040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x252044: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x252044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x252048: 0x94830018  lhu         $v1, 0x18($a0)
    ctx->pc = 0x252048u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x25204c: 0x9482001a  lhu         $v0, 0x1A($a0)
    ctx->pc = 0x25204cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x252050: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x252050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x252054: 0x661000e  bgez        $s3, . + 4 + (0xE << 2)
    ctx->pc = 0x252054u;
    {
        const bool branch_taken_0x252054 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x252058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252054u;
        // 0x252058: 0xa4830016  sh          $v1, 0x16($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 22), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252054) {
            ctx->pc = 0x252090u;
            goto label_252090;
        }
    }
    ctx->pc = 0x25205Cu;
    // 0x25205c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x25205cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x252060: 0x8ea3a21c  lw          $v1, -0x5DE4($s5)
    ctx->pc = 0x252060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294943260)));
    // 0x252064: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x252064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x252068: 0x8ec405a8  lw          $a0, 0x5A8($s6)
    ctx->pc = 0x252068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 1448)));
    // 0x25206c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x25206cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x252070: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x252070u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x252074: 0x52943  sra         $a1, $a1, 5
    ctx->pc = 0x252074u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 5));
    // 0x252078: 0xc094c70  jal         func_2531C0
    ctx->pc = 0x252078u;
    SET_GPR_U32(ctx, 31, 0x252080u);
    ctx->pc = 0x25207Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252078u;
    // 0x25207c: 0x30a5ffff  andi        $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2531C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2531C0u, 0x252078u, 0x252080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252080u;
label_252080:
    // 0x252080: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x252080u;
    {
        const bool branch_taken_0x252080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x252080) {
            ctx->pc = 0x252084u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252080u;
            // 0x252084: 0x86220014  lh          $v0, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2520A0u;
            goto label_2520a0;
        }
    }
    ctx->pc = 0x252088u;
    // 0x252088: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x252088u;
    {
        const bool branch_taken_0x252088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x252088) {
            ctx->pc = 0x2520C0u;
            goto label_2520c0;
        }
    }
    ctx->pc = 0x252090u;
label_252090:
    // 0x252090: 0x8ec405a8  lw          $a0, 0x5A8($s6)
    ctx->pc = 0x252090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 1448)));
    // 0x252094: 0xc094cee  jal         func_2533B8
    ctx->pc = 0x252094u;
    SET_GPR_U32(ctx, 31, 0x25209Cu);
    ctx->pc = 0x252098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252094u;
    // 0x252098: 0x3265ffff  andi        $a1, $s3, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2533B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2533B8u, 0x252094u, 0x25209Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25209Cu;
label_25209c:
    // 0x25209c: 0x86220014  lh          $v0, 0x14($s1)
    ctx->pc = 0x25209cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
label_2520a0:
    // 0x2520a0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2520a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2520a4: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x2520a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2520a8: 0x5440ffaf  bnel        $v0, $zero, . + 4 + (-0x51 << 2)
    ctx->pc = 0x2520A8u;
    {
        const bool branch_taken_0x2520a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2520a8) {
            ctx->pc = 0x2520ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2520A8u;
            // 0x2520ac: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x251F68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_251f68;
        }
    }
    ctx->pc = 0x2520B0u;
label_2520b0:
    // 0x2520b0: 0xc094ce6  jal         func_253398
    ctx->pc = 0x2520B0u;
    SET_GPR_U32(ctx, 31, 0x2520B8u);
    ctx->pc = 0x2520B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2520B0u;
    // 0x2520b4: 0x8ec405a8  lw          $a0, 0x5A8($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 1448)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253398u, 0x2520B0u, 0x2520B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2520B8u;
label_2520b8:
    // 0x2520b8: 0x1040ff4d  beqz        $v0, . + 4 + (-0xB3 << 2)
    ctx->pc = 0x2520B8u;
    {
        const bool branch_taken_0x2520b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2520b8) {
            ctx->pc = 0x251DF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_251df0;
        }
    }
    ctx->pc = 0x2520C0u;
label_2520c0:
    // 0x2520c0: 0xc094680  jal         func_251A00
    ctx->pc = 0x2520C0u;
    SET_GPR_U32(ctx, 31, 0x2520C8u);
    ctx->pc = 0x251A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251A00u, 0x2520C0u, 0x2520C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2520C8u;
label_2520c8:
    // 0x2520c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2520c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2520cc:
    // 0x2520cc: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x2520ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2520d0: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x2520d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2520d4: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x2520d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2520d8: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x2520d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2520dc: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x2520dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2520e0: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x2520e0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2520e4: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2520e4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2520e8: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x2520e8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2520ec: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x2520ecu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2520f0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2520f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2520f4: 0xc7b500e8  lwc1        $f21, 0xE8($sp)
    ctx->pc = 0x2520f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2520f8: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x2520f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2520fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2520FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x252100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2520FCu;
        // 0x252100: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2520FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x252104u;
    // 0x252104: 0x0  nop
    ctx->pc = 0x252104u;
    // NOP
    ctx->pc = 0x252108u;
}
