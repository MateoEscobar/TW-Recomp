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

// Function: sub_002E4E70
// Address: 0x2e4e70 - 0x2e4fe8
void sub_002E4E70_0x2e4e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E4E70_0x2e4e70");
#endif

    switch (ctx->pc) {
        case 0x2e4e70u: goto label_2e4e70;
        case 0x2e4e74u: goto label_2e4e74;
        case 0x2e4e78u: goto label_2e4e78;
        case 0x2e4e7cu: goto label_2e4e7c;
        case 0x2e4e80u: goto label_2e4e80;
        case 0x2e4e84u: goto label_2e4e84;
        case 0x2e4e88u: goto label_2e4e88;
        case 0x2e4e8cu: goto label_2e4e8c;
        case 0x2e4e90u: goto label_2e4e90;
        case 0x2e4e94u: goto label_2e4e94;
        case 0x2e4e98u: goto label_2e4e98;
        case 0x2e4e9cu: goto label_2e4e9c;
        case 0x2e4ea0u: goto label_2e4ea0;
        case 0x2e4ea4u: goto label_2e4ea4;
        case 0x2e4ea8u: goto label_2e4ea8;
        case 0x2e4eacu: goto label_2e4eac;
        case 0x2e4eb0u: goto label_2e4eb0;
        case 0x2e4eb4u: goto label_2e4eb4;
        case 0x2e4eb8u: goto label_2e4eb8;
        case 0x2e4ebcu: goto label_2e4ebc;
        case 0x2e4ec0u: goto label_2e4ec0;
        case 0x2e4ec4u: goto label_2e4ec4;
        case 0x2e4ec8u: goto label_2e4ec8;
        case 0x2e4eccu: goto label_2e4ecc;
        case 0x2e4ed0u: goto label_2e4ed0;
        case 0x2e4ed4u: goto label_2e4ed4;
        case 0x2e4ed8u: goto label_2e4ed8;
        case 0x2e4edcu: goto label_2e4edc;
        case 0x2e4ee0u: goto label_2e4ee0;
        case 0x2e4ee4u: goto label_2e4ee4;
        case 0x2e4ee8u: goto label_2e4ee8;
        case 0x2e4eecu: goto label_2e4eec;
        case 0x2e4ef0u: goto label_2e4ef0;
        case 0x2e4ef4u: goto label_2e4ef4;
        case 0x2e4ef8u: goto label_2e4ef8;
        case 0x2e4efcu: goto label_2e4efc;
        case 0x2e4f00u: goto label_2e4f00;
        case 0x2e4f04u: goto label_2e4f04;
        case 0x2e4f08u: goto label_2e4f08;
        case 0x2e4f0cu: goto label_2e4f0c;
        case 0x2e4f10u: goto label_2e4f10;
        case 0x2e4f14u: goto label_2e4f14;
        case 0x2e4f18u: goto label_2e4f18;
        case 0x2e4f1cu: goto label_2e4f1c;
        case 0x2e4f20u: goto label_2e4f20;
        case 0x2e4f24u: goto label_2e4f24;
        case 0x2e4f28u: goto label_2e4f28;
        case 0x2e4f2cu: goto label_2e4f2c;
        case 0x2e4f30u: goto label_2e4f30;
        case 0x2e4f34u: goto label_2e4f34;
        case 0x2e4f38u: goto label_2e4f38;
        case 0x2e4f3cu: goto label_2e4f3c;
        case 0x2e4f40u: goto label_2e4f40;
        case 0x2e4f44u: goto label_2e4f44;
        case 0x2e4f48u: goto label_2e4f48;
        case 0x2e4f4cu: goto label_2e4f4c;
        case 0x2e4f50u: goto label_2e4f50;
        case 0x2e4f54u: goto label_2e4f54;
        case 0x2e4f58u: goto label_2e4f58;
        case 0x2e4f5cu: goto label_2e4f5c;
        case 0x2e4f60u: goto label_2e4f60;
        case 0x2e4f64u: goto label_2e4f64;
        case 0x2e4f68u: goto label_2e4f68;
        case 0x2e4f6cu: goto label_2e4f6c;
        case 0x2e4f70u: goto label_2e4f70;
        case 0x2e4f74u: goto label_2e4f74;
        case 0x2e4f78u: goto label_2e4f78;
        case 0x2e4f7cu: goto label_2e4f7c;
        case 0x2e4f80u: goto label_2e4f80;
        case 0x2e4f84u: goto label_2e4f84;
        case 0x2e4f88u: goto label_2e4f88;
        case 0x2e4f8cu: goto label_2e4f8c;
        case 0x2e4f90u: goto label_2e4f90;
        case 0x2e4f94u: goto label_2e4f94;
        case 0x2e4f98u: goto label_2e4f98;
        case 0x2e4f9cu: goto label_2e4f9c;
        case 0x2e4fa0u: goto label_2e4fa0;
        case 0x2e4fa4u: goto label_2e4fa4;
        case 0x2e4fa8u: goto label_2e4fa8;
        case 0x2e4facu: goto label_2e4fac;
        case 0x2e4fb0u: goto label_2e4fb0;
        case 0x2e4fb4u: goto label_2e4fb4;
        case 0x2e4fb8u: goto label_2e4fb8;
        case 0x2e4fbcu: goto label_2e4fbc;
        case 0x2e4fc0u: goto label_2e4fc0;
        case 0x2e4fc4u: goto label_2e4fc4;
        case 0x2e4fc8u: goto label_2e4fc8;
        case 0x2e4fccu: goto label_2e4fcc;
        case 0x2e4fd0u: goto label_2e4fd0;
        case 0x2e4fd4u: goto label_2e4fd4;
        case 0x2e4fd8u: goto label_2e4fd8;
        case 0x2e4fdcu: goto label_2e4fdc;
        case 0x2e4fe0u: goto label_2e4fe0;
        case 0x2e4fe4u: goto label_2e4fe4;
        default: break;
    }

    ctx->pc = 0x2e4e70u;

label_2e4e70:
    // 0x2e4e70: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2e4e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_2e4e74:
    // 0x2e4e74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e4e74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e4e78:
    // 0x2e4e78: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x2e4e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_2e4e7c:
    // 0x2e4e7c: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x2e4e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_2e4e80:
    // 0x2e4e80: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e4e80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e4e84:
    // 0x2e4e84: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x2e4e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_2e4e88:
    // 0x2e4e88: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2e4e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_2e4e8c:
    // 0x2e4e8c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2e4e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e4e90:
    // 0x2e4e90: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x2e4e90u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2e4e94:
    // 0x2e4e94: 0xc0a22c6  jal         func_288B18
label_2e4e98:
    if (ctx->pc == 0x2E4E98u) {
        ctx->pc = 0x2E4E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4E94u;
        // 0x2e4e98: 0x248400a0  addiu       $a0, $a0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4E9Cu;
        goto label_2e4e9c;
    }
    ctx->pc = 0x2E4E94u;
    SET_GPR_U32(ctx, 31, 0x2E4E9Cu);
    ctx->pc = 0x2E4E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4E94u;
    // 0x2e4e98: 0x248400a0  addiu       $a0, $a0, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288B18u, 0x2E4E94u, 0x2E4E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4E9Cu;
label_2e4e9c:
    // 0x2e4e9c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2e4e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2e4ea0:
    // 0x2e4ea0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2e4ea0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2e4ea4:
    // 0x2e4ea4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2e4ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2e4ea8:
    // 0x2e4ea8: 0x40f809  jalr        $v0
label_2e4eac:
    if (ctx->pc == 0x2E4EACu) {
        ctx->pc = 0x2E4EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4EA8u;
        // 0x2e4eac: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4EB0u;
        goto label_2e4eb0;
    }
    ctx->pc = 0x2E4EA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E4EB0u);
        ctx->pc = 0x2E4EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4EA8u;
        // 0x2e4eac: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4EA8u, 0x2E4EB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E4EB0u;
label_2e4eb0:
    // 0x2e4eb0: 0x8e240034  lw          $a0, 0x34($s1)
    ctx->pc = 0x2e4eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_2e4eb4:
    // 0x2e4eb4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e4eb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e4eb8:
    // 0x2e4eb8: 0xc0d5068  jal         func_3541A0
label_2e4ebc:
    if (ctx->pc == 0x2E4EBCu) {
        ctx->pc = 0x2E4EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4EB8u;
        // 0x2e4ebc: 0x8e260038  lw          $a2, 0x38($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4EC0u;
        goto label_2e4ec0;
    }
    ctx->pc = 0x2E4EB8u;
    SET_GPR_U32(ctx, 31, 0x2E4EC0u);
    ctx->pc = 0x2E4EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4EB8u;
    // 0x2e4ebc: 0x8e260038  lw          $a2, 0x38($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3541A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3541A0u, 0x2E4EB8u, 0x2E4EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4EC0u;
label_2e4ec0:
    // 0x2e4ec0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2e4ec0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e4ec4:
    // 0x2e4ec4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2e4ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e4ec8:
    // 0x2e4ec8: 0x7a220010  lq          $v0, 0x10($s1)
    ctx->pc = 0x2e4ec8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_2e4ecc:
    // 0x2e4ecc: 0x7a430000  lq          $v1, 0x0($s2)
    ctx->pc = 0x2e4eccu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_2e4ed0:
    // 0x2e4ed0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2e4ed0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2e4ed4:
    // 0x2e4ed4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2e4ed4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2e4ed8:
    // 0x2e4ed8: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2e4ed8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2e4edc:
    // 0x2e4edc: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2e4edcu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2e4ee0:
    // 0x2e4ee0: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x2e4ee0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_2e4ee4:
    // 0x2e4ee4: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x2e4ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_2e4ee8:
    // 0x2e4ee8: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2e4ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_2e4eec:
    // 0x2e4eec: 0xc0a367c  jal         func_28D9F0
label_2e4ef0:
    if (ctx->pc == 0x2E4EF0u) {
        ctx->pc = 0x2E4EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4EECu;
        // 0x2e4ef0: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4EF4u;
        goto label_2e4ef4;
    }
    ctx->pc = 0x2E4EECu;
    SET_GPR_U32(ctx, 31, 0x2E4EF4u);
    ctx->pc = 0x2E4EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4EECu;
    // 0x2e4ef0: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2E4EECu, 0x2E4EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4EF4u;
label_2e4ef4:
    // 0x2e4ef4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e4ef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e4ef8:
    // 0x2e4ef8: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_2e4efc:
    if (ctx->pc == 0x2E4EFCu) {
        ctx->pc = 0x2E4EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4EF8u;
        // 0x2e4efc: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4F00u;
        goto label_2e4f00;
    }
    ctx->pc = 0x2E4EF8u;
    {
        const bool branch_taken_0x2e4ef8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4EF8u;
        // 0x2e4efc: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4ef8) {
            ctx->pc = 0x2E4F24u;
            goto label_2e4f24;
        }
    }
    ctx->pc = 0x2E4F00u;
label_2e4f00:
    // 0x2e4f00: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2e4f00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e4f04:
    // 0x2e4f04: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x2e4f04u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2e4f08:
    // 0x2e4f08: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2e4f08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2e4f0c:
    // 0x2e4f0c: 0x8e270030  lw          $a3, 0x30($s1)
    ctx->pc = 0x2e4f0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_2e4f10:
    // 0x2e4f10: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2e4f10u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e4f14:
    // 0x2e4f14: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2e4f14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2e4f18:
    // 0x2e4f18: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x2e4f18u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2e4f1c:
    // 0x2e4f1c: 0xc0bee7a  jal         func_2FB9E8
label_2e4f20:
    if (ctx->pc == 0x2E4F20u) {
        ctx->pc = 0x2E4F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4F1Cu;
        // 0x2e4f20: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4F24u;
        goto label_2e4f24;
    }
    ctx->pc = 0x2E4F1Cu;
    SET_GPR_U32(ctx, 31, 0x2E4F24u);
    ctx->pc = 0x2E4F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4F1Cu;
    // 0x2e4f20: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2E4F1Cu, 0x2E4F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4F24u;
label_2e4f24:
    // 0x2e4f24: 0x7a430010  lq          $v1, 0x10($s2)
    ctx->pc = 0x2e4f24u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 16)));
label_2e4f28:
    // 0x2e4f28: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x2e4f28u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
label_2e4f2c:
    // 0x2e4f2c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2e4f2cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2e4f30:
    // 0x2e4f30: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2e4f30u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2e4f34:
    // 0x2e4f34: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x2e4f34u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2e4f38:
    // 0x2e4f38: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x2e4f38u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2e4f3c:
    // 0x2e4f3c: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x2e4f3cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_2e4f40:
    // 0x2e4f40: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2e4f40u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2e4f44:
    // 0x2e4f44: 0x4bc209bf  vmulaw.xyz  $ACC, $vf1, $vf2w
    ctx->pc = 0x2e4f44u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2e4f48:
    // 0x2e4f48: 0x4bc1114b  vmaddw.xyz  $vf5, $vf2, $vf1w
    ctx->pc = 0x2e4f48u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_2e4f4c:
    // 0x2e4f4c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x2e4f4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2e4f50:
    // 0x2e4f50: 0x4bc52168  vadd.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x2e4f50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_2e4f54:
    // 0x2e4f54: 0x4a231944  vsubx.w     $vf5, $vf3, $vf3x
    ctx->pc = 0x2e4f54u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_2e4f58:
    // 0x2e4f58: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x2e4f58u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
label_2e4f5c:
    // 0x2e4f5c: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x2e4f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_2e4f60:
    // 0x2e4f60: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2e4f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2e4f64:
    // 0x2e4f64: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x2e4f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_2e4f68:
    // 0x2e4f68: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2e4f68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2e4f6c:
    // 0x2e4f6c: 0xc0cd8ec  jal         func_3363B0
label_2e4f70:
    if (ctx->pc == 0x2E4F70u) {
        ctx->pc = 0x2E4F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4F6Cu;
        // 0x2e4f70: 0x7fa30030  sq          $v1, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4F74u;
        goto label_2e4f74;
    }
    ctx->pc = 0x2E4F6Cu;
    SET_GPR_U32(ctx, 31, 0x2E4F74u);
    ctx->pc = 0x2E4F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4F6Cu;
    // 0x2e4f70: 0x7fa30030  sq          $v1, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x2E4F6Cu, 0x2E4F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4F74u;
label_2e4f74:
    // 0x2e4f74: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x2e4f74u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2e4f78:
    // 0x2e4f78: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x2e4f78u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2e4f7c:
    // 0x2e4f7c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2e4f7cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2e4f80:
    // 0x2e4f80: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2e4f80u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2e4f84:
    // 0x2e4f84: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2e4f84u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2e4f88:
    // 0x2e4f88: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2e4f88u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2e4f8c:
    // 0x2e4f8c: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x2e4f8cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_2e4f90:
    // 0x2e4f90: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2e4f90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e4f94:
    // 0x2e4f94: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x2e4f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_2e4f98:
    // 0x2e4f98: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x2e4f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_2e4f9c:
    // 0x2e4f9c: 0xc0a367c  jal         func_28D9F0
label_2e4fa0:
    if (ctx->pc == 0x2E4FA0u) {
        ctx->pc = 0x2E4FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4F9Cu;
        // 0x2e4fa0: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4FA4u;
        goto label_2e4fa4;
    }
    ctx->pc = 0x2E4F9Cu;
    SET_GPR_U32(ctx, 31, 0x2E4FA4u);
    ctx->pc = 0x2E4FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4F9Cu;
    // 0x2e4fa0: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2E4F9Cu, 0x2E4FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4FA4u;
label_2e4fa4:
    // 0x2e4fa4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2e4fa4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e4fa8:
    // 0x2e4fa8: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
label_2e4fac:
    if (ctx->pc == 0x2E4FACu) {
        ctx->pc = 0x2E4FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4FA8u;
        // 0x2e4fac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4FB0u;
        goto label_2e4fb0;
    }
    ctx->pc = 0x2E4FA8u;
    {
        const bool branch_taken_0x2e4fa8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4FA8u;
        // 0x2e4fac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4fa8) {
            ctx->pc = 0x2E4FD0u;
            goto label_2e4fd0;
        }
    }
    ctx->pc = 0x2E4FB0u;
label_2e4fb0:
    // 0x2e4fb0: 0xc0884f6  jal         func_2213D8
label_2e4fb4:
    if (ctx->pc == 0x2E4FB4u) {
        ctx->pc = 0x2E4FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4FB0u;
        // 0x2e4fb4: 0x27b00030  addiu       $s0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4FB8u;
        goto label_2e4fb8;
    }
    ctx->pc = 0x2E4FB0u;
    SET_GPR_U32(ctx, 31, 0x2E4FB8u);
    ctx->pc = 0x2E4FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4FB0u;
    // 0x2e4fb4: 0x27b00030  addiu       $s0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2E4FB0u, 0x2E4FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4FB8u;
label_2e4fb8:
    // 0x2e4fb8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2e4fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e4fbc:
    // 0x2e4fbc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e4fbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2e4fc0:
    // 0x2e4fc0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2e4fc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e4fc4:
    // 0x2e4fc4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2e4fc4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2e4fc8:
    // 0x2e4fc8: 0xc0bf800  jal         func_2FE000
label_2e4fcc:
    if (ctx->pc == 0x2E4FCCu) {
        ctx->pc = 0x2E4FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4FC8u;
        // 0x2e4fcc: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4FD0u;
        goto label_2e4fd0;
    }
    ctx->pc = 0x2E4FC8u;
    SET_GPR_U32(ctx, 31, 0x2E4FD0u);
    ctx->pc = 0x2E4FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4FC8u;
    // 0x2e4fcc: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2E4FC8u, 0x2E4FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4FD0u;
label_2e4fd0:
    // 0x2e4fd0: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x2e4fd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2e4fd4:
    // 0x2e4fd4: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x2e4fd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2e4fd8:
    // 0x2e4fd8: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x2e4fd8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2e4fdc:
    // 0x2e4fdc: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2e4fdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2e4fe0:
    // 0x2e4fe0: 0x3e00008  jr          $ra
label_2e4fe4:
    if (ctx->pc == 0x2E4FE4u) {
        ctx->pc = 0x2E4FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4FE0u;
        // 0x2e4fe4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4FE8u;
        goto label_fallthrough_0x2e4fe0;
    }
    ctx->pc = 0x2E4FE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E4FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4FE0u;
        // 0x2e4fe4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4FE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2e4fe0:
    ctx->pc = 0x2E4FE8u;
}
