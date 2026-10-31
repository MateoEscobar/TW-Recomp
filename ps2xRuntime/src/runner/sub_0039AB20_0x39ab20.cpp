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

// Function: sub_0039AB20
// Address: 0x39ab20 - 0x39acb8
void sub_0039AB20_0x39ab20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039AB20_0x39ab20");
#endif

    switch (ctx->pc) {
        case 0x39ab20u: goto label_39ab20;
        case 0x39ab24u: goto label_39ab24;
        case 0x39ab28u: goto label_39ab28;
        case 0x39ab2cu: goto label_39ab2c;
        case 0x39ab30u: goto label_39ab30;
        case 0x39ab34u: goto label_39ab34;
        case 0x39ab38u: goto label_39ab38;
        case 0x39ab3cu: goto label_39ab3c;
        case 0x39ab40u: goto label_39ab40;
        case 0x39ab44u: goto label_39ab44;
        case 0x39ab48u: goto label_39ab48;
        case 0x39ab4cu: goto label_39ab4c;
        case 0x39ab50u: goto label_39ab50;
        case 0x39ab54u: goto label_39ab54;
        case 0x39ab58u: goto label_39ab58;
        case 0x39ab5cu: goto label_39ab5c;
        case 0x39ab60u: goto label_39ab60;
        case 0x39ab64u: goto label_39ab64;
        case 0x39ab68u: goto label_39ab68;
        case 0x39ab6cu: goto label_39ab6c;
        case 0x39ab70u: goto label_39ab70;
        case 0x39ab74u: goto label_39ab74;
        case 0x39ab78u: goto label_39ab78;
        case 0x39ab7cu: goto label_39ab7c;
        case 0x39ab80u: goto label_39ab80;
        case 0x39ab84u: goto label_39ab84;
        case 0x39ab88u: goto label_39ab88;
        case 0x39ab8cu: goto label_39ab8c;
        case 0x39ab90u: goto label_39ab90;
        case 0x39ab94u: goto label_39ab94;
        case 0x39ab98u: goto label_39ab98;
        case 0x39ab9cu: goto label_39ab9c;
        case 0x39aba0u: goto label_39aba0;
        case 0x39aba4u: goto label_39aba4;
        case 0x39aba8u: goto label_39aba8;
        case 0x39abacu: goto label_39abac;
        case 0x39abb0u: goto label_39abb0;
        case 0x39abb4u: goto label_39abb4;
        case 0x39abb8u: goto label_39abb8;
        case 0x39abbcu: goto label_39abbc;
        case 0x39abc0u: goto label_39abc0;
        case 0x39abc4u: goto label_39abc4;
        case 0x39abc8u: goto label_39abc8;
        case 0x39abccu: goto label_39abcc;
        case 0x39abd0u: goto label_39abd0;
        case 0x39abd4u: goto label_39abd4;
        case 0x39abd8u: goto label_39abd8;
        case 0x39abdcu: goto label_39abdc;
        case 0x39abe0u: goto label_39abe0;
        case 0x39abe4u: goto label_39abe4;
        case 0x39abe8u: goto label_39abe8;
        case 0x39abecu: goto label_39abec;
        case 0x39abf0u: goto label_39abf0;
        case 0x39abf4u: goto label_39abf4;
        case 0x39abf8u: goto label_39abf8;
        case 0x39abfcu: goto label_39abfc;
        case 0x39ac00u: goto label_39ac00;
        case 0x39ac04u: goto label_39ac04;
        case 0x39ac08u: goto label_39ac08;
        case 0x39ac0cu: goto label_39ac0c;
        case 0x39ac10u: goto label_39ac10;
        case 0x39ac14u: goto label_39ac14;
        case 0x39ac18u: goto label_39ac18;
        case 0x39ac1cu: goto label_39ac1c;
        case 0x39ac20u: goto label_39ac20;
        case 0x39ac24u: goto label_39ac24;
        case 0x39ac28u: goto label_39ac28;
        case 0x39ac2cu: goto label_39ac2c;
        case 0x39ac30u: goto label_39ac30;
        case 0x39ac34u: goto label_39ac34;
        case 0x39ac38u: goto label_39ac38;
        case 0x39ac3cu: goto label_39ac3c;
        case 0x39ac40u: goto label_39ac40;
        case 0x39ac44u: goto label_39ac44;
        case 0x39ac48u: goto label_39ac48;
        case 0x39ac4cu: goto label_39ac4c;
        case 0x39ac50u: goto label_39ac50;
        case 0x39ac54u: goto label_39ac54;
        case 0x39ac58u: goto label_39ac58;
        case 0x39ac5cu: goto label_39ac5c;
        case 0x39ac60u: goto label_39ac60;
        case 0x39ac64u: goto label_39ac64;
        case 0x39ac68u: goto label_39ac68;
        case 0x39ac6cu: goto label_39ac6c;
        case 0x39ac70u: goto label_39ac70;
        case 0x39ac74u: goto label_39ac74;
        case 0x39ac78u: goto label_39ac78;
        case 0x39ac7cu: goto label_39ac7c;
        case 0x39ac80u: goto label_39ac80;
        case 0x39ac84u: goto label_39ac84;
        case 0x39ac88u: goto label_39ac88;
        case 0x39ac8cu: goto label_39ac8c;
        case 0x39ac90u: goto label_39ac90;
        case 0x39ac94u: goto label_39ac94;
        case 0x39ac98u: goto label_39ac98;
        case 0x39ac9cu: goto label_39ac9c;
        case 0x39aca0u: goto label_39aca0;
        case 0x39aca4u: goto label_39aca4;
        case 0x39aca8u: goto label_39aca8;
        case 0x39acacu: goto label_39acac;
        case 0x39acb0u: goto label_39acb0;
        case 0x39acb4u: goto label_39acb4;
        default: break;
    }

    ctx->pc = 0x39ab20u;

label_39ab20:
    // 0x39ab20: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x39ab20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_39ab24:
    // 0x39ab24: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x39ab24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_39ab28:
    // 0x39ab28: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x39ab28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_39ab2c:
    // 0x39ab2c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x39ab2cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_39ab30:
    // 0x39ab30: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x39ab30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_39ab34:
    // 0x39ab34: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x39ab34u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39ab38:
    // 0x39ab38: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x39ab38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_39ab3c:
    // 0x39ab3c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x39ab3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39ab40:
    // 0x39ab40: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x39ab40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
label_39ab44:
    // 0x39ab44: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x39ab44u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_39ab48:
    // 0x39ab48: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x39ab48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
label_39ab4c:
    // 0x39ab4c: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x39ab4cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_39ab50:
    // 0x39ab50: 0xe7b500e8  swc1        $f21, 0xE8($sp)
    ctx->pc = 0x39ab50u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_39ab54:
    // 0x39ab54: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x39ab54u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_39ab58:
    // 0x39ab58: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x39ab58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_39ab5c:
    // 0x39ab5c: 0x460c6542  mul.s       $f21, $f12, $f12
    ctx->pc = 0x39ab5cu;
    ctx->f[21] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
label_39ab60:
    // 0x39ab60: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x39ab60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_39ab64:
    // 0x39ab64: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x39ab64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_39ab68:
    // 0x39ab68: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x39ab68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_39ab6c:
    // 0x39ab6c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x39ab6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_39ab70:
    // 0x39ab70: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x39ab70u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_39ab74:
    // 0x39ab74: 0xc08a61a  jal         func_229868
label_39ab78:
    if (ctx->pc == 0x39AB78u) {
        ctx->pc = 0x39AB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AB74u;
        // 0x39ab78: 0xafa60030  sw          $a2, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39AB7Cu;
        goto label_39ab7c;
    }
    ctx->pc = 0x39AB74u;
    SET_GPR_U32(ctx, 31, 0x39AB7Cu);
    ctx->pc = 0x39AB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39AB74u;
    // 0x39ab78: 0xafa60030  sw          $a2, 0x30($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x39AB74u, 0x39AB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39AB7Cu;
label_39ab7c:
    // 0x39ab7c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_39ab80:
    if (ctx->pc == 0x39AB80u) {
        ctx->pc = 0x39AB84u;
        goto label_39ab84;
    }
    ctx->pc = 0x39AB7Cu;
    {
        const bool branch_taken_0x39ab7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39ab7c) {
            ctx->pc = 0x39AB90u;
            goto label_39ab90;
        }
    }
    ctx->pc = 0x39AB84u;
label_39ab84:
    // 0x39ab84: 0x8e8200d4  lw          $v0, 0xD4($s4)
    ctx->pc = 0x39ab84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
label_39ab88:
    // 0x39ab88: 0x10000002  b           . + 4 + (0x2 << 2)
label_39ab8c:
    if (ctx->pc == 0x39AB8Cu) {
        ctx->pc = 0x39AB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AB88u;
        // 0x39ab8c: 0xc45400d8  lwc1        $f20, 0xD8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x39AB90u;
        goto label_39ab90;
    }
    ctx->pc = 0x39AB88u;
    {
        const bool branch_taken_0x39ab88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39AB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AB88u;
        // 0x39ab8c: 0xc45400d8  lwc1        $f20, 0xD8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ab88) {
            ctx->pc = 0x39AB94u;
            goto label_39ab94;
        }
    }
    ctx->pc = 0x39AB90u;
label_39ab90:
    // 0x39ab90: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x39ab90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_39ab94:
    // 0x39ab94: 0x0  nop
    ctx->pc = 0x39ab94u;
    // NOP
label_39ab98:
    // 0x39ab98: 0x4614a502  mul.s       $f20, $f20, $f20
    ctx->pc = 0x39ab98u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
label_39ab9c:
    // 0x39ab9c: 0x2e0882d  daddu       $s1, $s7, $zero
    ctx->pc = 0x39ab9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_39aba0:
    // 0x39aba0: 0x1000002b  b           . + 4 + (0x2B << 2)
label_39aba4:
    if (ctx->pc == 0x39ABA4u) {
        ctx->pc = 0x39ABA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39ABA0u;
        // 0x39aba4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39ABA8u;
        goto label_39aba8;
    }
    ctx->pc = 0x39ABA0u;
    {
        const bool branch_taken_0x39aba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39ABA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39ABA0u;
        // 0x39aba4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39aba0) {
            ctx->pc = 0x39AC50u;
            goto label_39ac50;
        }
    }
    ctx->pc = 0x39ABA8u;
label_39aba8:
    // 0x39aba8: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x39aba8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_39abac:
    // 0x39abac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x39abacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_39abb0:
    // 0x39abb0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x39abb0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_39abb4:
    // 0x39abb4: 0x52140026  beql        $s0, $s4, . + 4 + (0x26 << 2)
label_39abb8:
    if (ctx->pc == 0x39ABB8u) {
        ctx->pc = 0x39ABB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39ABB4u;
        // 0x39abb8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39ABBCu;
        goto label_39abbc;
    }
    ctx->pc = 0x39ABB4u;
    {
        const bool branch_taken_0x39abb4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 20));
        if (branch_taken_0x39abb4) {
            ctx->pc = 0x39ABB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39ABB4u;
            // 0x39abb8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39AC50u;
            goto label_39ac50;
        }
    }
    ctx->pc = 0x39ABBCu;
label_39abbc:
    // 0x39abbc: 0x7bc20000  lq          $v0, 0x0($fp)
    ctx->pc = 0x39abbcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_39abc0:
    // 0x39abc0: 0x7a030010  lq          $v1, 0x10($s0)
    ctx->pc = 0x39abc0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 16)));
label_39abc4:
    // 0x39abc4: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x39abc4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_39abc8:
    // 0x39abc8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x39abc8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_39abcc:
    // 0x39abcc: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x39abccu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_39abd0:
    // 0x39abd0: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x39abd0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_39abd4:
    // 0x39abd4: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x39abd4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_39abd8:
    // 0x39abd8: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x39abd8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_39abdc:
    // 0x39abdc: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x39abdcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_39abe0:
    // 0x39abe0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x39abe0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_39abe4:
    // 0x39abe4: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x39abe4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_39abe8:
    // 0x39abe8: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x39abe8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
label_39abec:
    // 0x39abec: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x39abecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_39abf0:
    // 0x39abf0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x39abf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39abf4:
    // 0x39abf4: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x39abf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_39abf8:
    // 0x39abf8: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x39abf8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_39abfc:
    // 0x39abfc: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x39abfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_39ac00:
    // 0x39ac00: 0x45010012  bc1t        . + 4 + (0x12 << 2)
label_39ac04:
    if (ctx->pc == 0x39AC04u) {
        ctx->pc = 0x39AC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AC00u;
        // 0x39ac04: 0xe6200004  swc1        $f0, 0x4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x39AC08u;
        goto label_39ac08;
    }
    ctx->pc = 0x39AC00u;
    {
        const bool branch_taken_0x39ac00 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x39AC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AC00u;
        // 0x39ac04: 0xe6200004  swc1        $f0, 0x4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ac00) {
            ctx->pc = 0x39AC4Cu;
            goto label_39ac4c;
        }
    }
    ctx->pc = 0x39AC08u;
label_39ac08:
    // 0x39ac08: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x39ac08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_39ac0c:
    // 0x39ac0c: 0x0  nop
    ctx->pc = 0x39ac0cu;
    // NOP
label_39ac10:
    // 0x39ac10: 0x4503000f  bc1tl       . + 4 + (0xF << 2)
label_39ac14:
    if (ctx->pc == 0x39AC14u) {
        ctx->pc = 0x39AC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AC10u;
        // 0x39ac14: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39AC18u;
        goto label_39ac18;
    }
    ctx->pc = 0x39AC10u;
    {
        const bool branch_taken_0x39ac10 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x39ac10) {
            ctx->pc = 0x39AC14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39AC10u;
            // 0x39ac14: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39AC50u;
            goto label_39ac50;
        }
    }
    ctx->pc = 0x39AC18u;
label_39ac18:
    // 0x39ac18: 0x12c00005  beqz        $s6, . + 4 + (0x5 << 2)
label_39ac1c:
    if (ctx->pc == 0x39AC1Cu) {
        ctx->pc = 0x39AC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AC18u;
        // 0x39ac1c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39AC20u;
        goto label_39ac20;
    }
    ctx->pc = 0x39AC18u;
    {
        const bool branch_taken_0x39ac18 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x39AC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AC18u;
        // 0x39ac1c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ac18) {
            ctx->pc = 0x39AC30u;
            goto label_39ac30;
        }
    }
    ctx->pc = 0x39AC20u;
label_39ac20:
    // 0x39ac20: 0x2c0f809  jalr        $s6
label_39ac24:
    if (ctx->pc == 0x39AC24u) {
        ctx->pc = 0x39AC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AC20u;
        // 0x39ac24: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39AC28u;
        goto label_39ac28;
    }
    ctx->pc = 0x39AC20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 22);
        SET_GPR_U32(ctx, 31, 0x39AC28u);
        ctx->pc = 0x39AC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AC20u;
        // 0x39ac24: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39AC20u, 0x39AC28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39AC28u;
label_39ac28:
    // 0x39ac28: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_39ac2c:
    if (ctx->pc == 0x39AC2Cu) {
        ctx->pc = 0x39AC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AC28u;
        // 0x39ac2c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39AC30u;
        goto label_39ac30;
    }
    ctx->pc = 0x39AC28u;
    {
        const bool branch_taken_0x39ac28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39ac28) {
            ctx->pc = 0x39AC2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39AC28u;
            // 0x39ac2c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39AC50u;
            goto label_39ac50;
        }
    }
    ctx->pc = 0x39AC30u;
label_39ac30:
    // 0x39ac30: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x39ac30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
label_39ac34:
    // 0x39ac34: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x39ac34u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_39ac38:
    // 0x39ac38: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x39ac38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
label_39ac3c:
    // 0x39ac3c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x39ac3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_39ac40:
    // 0x39ac40: 0x264182b  sltu        $v1, $s3, $a0
    ctx->pc = 0x39ac40u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_39ac44:
    // 0x39ac44: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_39ac48:
    if (ctx->pc == 0x39AC48u) {
        ctx->pc = 0x39AC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AC44u;
        // 0x39ac48: 0x2e28821  addu        $s1, $s7, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39AC4Cu;
        goto label_39ac4c;
    }
    ctx->pc = 0x39AC44u;
    {
        const bool branch_taken_0x39ac44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x39AC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AC44u;
        // 0x39ac48: 0x2e28821  addu        $s1, $s7, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ac44) {
            ctx->pc = 0x39AC70u;
            goto label_39ac70;
        }
    }
    ctx->pc = 0x39AC4Cu;
label_39ac4c:
    // 0x39ac4c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x39ac4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_39ac50:
    // 0x39ac50: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x39ac50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_39ac54:
    // 0x39ac54: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x39ac54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_39ac58:
    // 0x39ac58: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x39ac58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_39ac5c:
    // 0x39ac5c: 0x40f809  jalr        $v0
label_39ac60:
    if (ctx->pc == 0x39AC60u) {
        ctx->pc = 0x39AC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AC5Cu;
        // 0x39ac60: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39AC64u;
        goto label_39ac64;
    }
    ctx->pc = 0x39AC5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39AC64u);
        ctx->pc = 0x39AC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AC5Cu;
        // 0x39ac60: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39AC5Cu, 0x39AC64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39AC64u;
label_39ac64:
    // 0x39ac64: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x39ac64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_39ac68:
    // 0x39ac68: 0x5440ffcf  bnel        $v0, $zero, . + 4 + (-0x31 << 2)
label_39ac6c:
    if (ctx->pc == 0x39AC6Cu) {
        ctx->pc = 0x39AC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AC68u;
        // 0x39ac6c: 0x8ea30008  lw          $v1, 0x8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39AC70u;
        goto label_39ac70;
    }
    ctx->pc = 0x39AC68u;
    {
        const bool branch_taken_0x39ac68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39ac68) {
            ctx->pc = 0x39AC6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39AC68u;
            // 0x39ac6c: 0x8ea30008  lw          $v1, 0x8($s5) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39ABA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39aba8;
        }
    }
    ctx->pc = 0x39AC70u;
label_39ac70:
    // 0x39ac70: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x39ac70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_39ac74:
    // 0x39ac74: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x39ac74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_39ac78:
    // 0x39ac78: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x39ac78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_39ac7c:
    // 0x39ac7c: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x39ac7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_39ac80:
    // 0x39ac80: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x39ac80u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_39ac84:
    // 0x39ac84: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x39ac84u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_39ac88:
    // 0x39ac88: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x39ac88u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_39ac8c:
    // 0x39ac8c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x39ac8cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_39ac90:
    // 0x39ac90: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x39ac90u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_39ac94:
    // 0x39ac94: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x39ac94u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_39ac98:
    // 0x39ac98: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x39ac98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_39ac9c:
    // 0x39ac9c: 0xc7b500e8  lwc1        $f21, 0xE8($sp)
    ctx->pc = 0x39ac9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_39aca0:
    // 0x39aca0: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x39aca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_39aca4:
    // 0x39aca4: 0x3e00008  jr          $ra
label_39aca8:
    if (ctx->pc == 0x39ACA8u) {
        ctx->pc = 0x39ACA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39ACA4u;
        // 0x39aca8: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39ACACu;
        goto label_39acac;
    }
    ctx->pc = 0x39ACA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39ACA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39ACA4u;
        // 0x39aca8: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39ACA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39ACACu;
label_39acac:
    // 0x39acac: 0x0  nop
    ctx->pc = 0x39acacu;
    // NOP
label_39acb0:
    // 0x39acb0: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x39acb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_39acb4:
    // 0x39acb4: 0x0  nop
    ctx->pc = 0x39acb4u;
    // NOP
    ctx->pc = 0x39acb8u;
}
