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

// Function: sub_0029DD38
// Address: 0x29dd38 - 0x29df78
void sub_0029DD38_0x29dd38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029DD38_0x29dd38");
#endif

    switch (ctx->pc) {
        case 0x29dd8cu: goto label_29dd8c;
        case 0x29ddb4u: goto label_29ddb4;
        case 0x29ddccu: goto label_29ddcc;
        case 0x29ddd8u: goto label_29ddd8;
        case 0x29de1cu: goto label_29de1c;
        case 0x29de28u: goto label_29de28;
        case 0x29de30u: goto label_29de30;
        case 0x29de38u: goto label_29de38;
        default: break;
    }

    ctx->pc = 0x29dd38u;

    // 0x29dd38: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x29dd38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x29dd3c: 0xe7b500e8  swc1        $f21, 0xE8($sp)
    ctx->pc = 0x29dd3cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x29dd40: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x29dd40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
    // 0x29dd44: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x29dd44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x29dd48: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x29dd48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x29dd4c: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x29dd4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x29dd50: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x29dd50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x29dd54: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x29dd54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29dd58: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x29dd58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x29dd5c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x29dd5cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x29dd60: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x29dd60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x29dd64: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x29dd64u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29dd68: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x29dd68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x29dd6c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x29dd6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29dd70: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x29dd70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x29dd74: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x29dd74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x29dd78: 0xe7b600f0  swc1        $f22, 0xF0($sp)
    ctx->pc = 0x29dd78u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x29dd7c: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x29dd7cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x29dd80: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x29dd80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x29dd84: 0xc12e29c  jal         func_4B8A70
    ctx->pc = 0x29DD84u;
    SET_GPR_U32(ctx, 31, 0x29DD8Cu);
    ctx->pc = 0x29DD88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DD84u;
    // 0x29dd88: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x29DD84u, 0x29DD8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DD8Cu;
label_29dd8c:
    // 0x29dd8c: 0x86230092  lh          $v1, 0x92($s1)
    ctx->pc = 0x29dd8cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
    // 0x29dd90: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x29dd90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x29dd94: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x29dd94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x29dd98: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29dd98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29dd9c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x29dd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x29dda0: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x29dda0u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x29dda4: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x29dda4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29dda8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x29dda8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ddac: 0xc0cd8ec  jal         func_3363B0
    ctx->pc = 0x29DDACu;
    SET_GPR_U32(ctx, 31, 0x29DDB4u);
    ctx->pc = 0x29DDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DDACu;
    // 0x29ddb0: 0x26450010  addiu       $a1, $s2, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x29DDACu, 0x29DDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DDB4u;
label_29ddb4:
    // 0x29ddb4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x29ddb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x29ddb8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x29ddb8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x29ddbc: 0x24631740  addiu       $v1, $v1, 0x1740
    ctx->pc = 0x29ddbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5952));
    // 0x29ddc0: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x29ddc0u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x511740u));
    // 0x29ddc4: 0xc12e310  jal         func_4B8C40
    ctx->pc = 0x29DDC4u;
    SET_GPR_U32(ctx, 31, 0x29DDCCu);
    ctx->pc = 0x29DDC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DDC4u;
    // 0x29ddc8: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x29DDC4u, 0x29DDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DDCCu;
label_29ddcc:
    // 0x29ddcc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x29ddccu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x29ddd0: 0xc12e29c  jal         func_4B8A70
    ctx->pc = 0x29DDD0u;
    SET_GPR_U32(ctx, 31, 0x29DDD8u);
    ctx->pc = 0x29DDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DDD0u;
    // 0x29ddd4: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x29DDD0u, 0x29DDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DDD8u;
label_29ddd8:
    // 0x29ddd8: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x29ddd8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29dddc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29dddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29dde0: 0x4403a000  mfc1        $v1, $f20
    ctx->pc = 0x29dde0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x29dde4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x29dde4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x29dde8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x29dde8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x29ddec: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x29ddecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x29ddf0: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x29ddf0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x29ddf4: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x29ddf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x29ddf8: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x29ddf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x29ddfc: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x29ddfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x29de00: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x29de00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29de04: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x29de04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29de08: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x29de08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29de0c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x29de0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x29de10: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x29de10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x29de14: 0xc087502  jal         func_21D408
    ctx->pc = 0x29DE14u;
    SET_GPR_U32(ctx, 31, 0x29DE1Cu);
    ctx->pc = 0x29DE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DE14u;
    // 0x29de18: 0xe7a20028  swc1        $f2, 0x28($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x29DE14u, 0x29DE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DE1Cu;
label_29de1c:
    // 0x29de1c: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x29de1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x29de20: 0x24740048  addiu       $s4, $v1, 0x48
    ctx->pc = 0x29de20u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 72));
    // 0x29de24: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29de24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_29de28:
    // 0x29de28: 0xc137826  jal         func_4DE098
    ctx->pc = 0x29DE28u;
    SET_GPR_U32(ctx, 31, 0x29DE30u);
    ctx->pc = 0x29DE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DE28u;
    // 0x29de2c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x29DE28u, 0x29DE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DE30u;
label_29de30:
    // 0x29de30: 0xc0e409a  jal         func_390268
    ctx->pc = 0x29DE30u;
    SET_GPR_U32(ctx, 31, 0x29DE38u);
    ctx->pc = 0x29DE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DE30u;
    // 0x29de34: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x29DE30u, 0x29DE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DE38u;
label_29de38:
    // 0x29de38: 0x5040003b  beql        $v0, $zero, . + 4 + (0x3B << 2)
    ctx->pc = 0x29DE38u;
    {
        const bool branch_taken_0x29de38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29de38) {
            ctx->pc = 0x29DE3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29DE38u;
            // 0x29de3c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29DF28u;
            goto label_29df28;
        }
    }
    ctx->pc = 0x29DE40u;
    // 0x29de40: 0x10510038  beq         $v0, $s1, . + 4 + (0x38 << 2)
    ctx->pc = 0x29DE40u;
    {
        const bool branch_taken_0x29de40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x29DE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DE40u;
        // 0x29de44: 0x7ba50000  lq          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29de40) {
            ctx->pc = 0x29DF24u;
            goto label_29df24;
        }
    }
    ctx->pc = 0x29DE48u;
    // 0x29de48: 0x84430092  lh          $v1, 0x92($v0)
    ctx->pc = 0x29de48u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 146)));
    // 0x29de4c: 0x7a440000  lq          $a0, 0x0($s2)
    ctx->pc = 0x29de4cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x29de50: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x29de50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x29de54: 0x761821  addu        $v1, $v1, $s6
    ctx->pc = 0x29de54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x29de58: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x29de58u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29de5c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x29de5cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x29de60: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x29de60u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x29de64: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x29de64u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x29de68: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x29de68u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x29de6c: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x29de6cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x29de70: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x29de70u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x29de74: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x29de74u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x29de78: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x29de78u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x29de7c: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x29de7cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x29de80: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x29de80u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x29de84: 0x4a0003bf  vwaitq
    ctx->pc = 0x29de84u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x29de88: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x29de88u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x29de8c: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x29de8cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x29de90: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x29de90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x29de94: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x29de94u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x29de98: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x29de98u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x29de9c: 0x4b8208ea  vmul.xy     $vf3, $vf1, $vf2
    ctx->pc = 0x29de9cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x29dea0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x29dea0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x29dea4: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x29dea4u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x29dea8: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x29dea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x29deac: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x29deacu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29deb0: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x29deb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x29deb4: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x29deb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29deb8: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x29deb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x29debc: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x29DEBCu;
    {
        const bool branch_taken_0x29debc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x29DEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DEBCu;
        // 0x29dec0: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29debc) {
            ctx->pc = 0x29DF24u;
            goto label_29df24;
        }
    }
    ctx->pc = 0x29DEC4u;
    // 0x29dec4: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x29dec4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29dec8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x29dec8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x29decc: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x29deccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x29ded0: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x29ded0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x29ded4: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x29ded4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x29ded8: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x29ded8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x29dedc: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x29dedcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x29dee0: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x29dee0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x29dee4: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x29dee4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x29dee8: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x29dee8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x29deec: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x29deecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x29def0: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x29def0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x29def4: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x29def4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x29def8: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x29def8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x29defc: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x29defcu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x29df00: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x29df00u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x29df04: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x29df04u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x29df08: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x29df08u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x29df0c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x29df0cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x29df10: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x29df10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x29df14: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x29df14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x29df18: 0x2e620004  sltiu       $v0, $s3, 0x4
    ctx->pc = 0x29df18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x29df1c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29DF1Cu;
    {
        const bool branch_taken_0x29df1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DF1Cu;
        // 0x29df20: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29df1c) {
            ctx->pc = 0x29DF34u;
            goto label_29df34;
        }
    }
    ctx->pc = 0x29DF24u;
label_29df24:
    // 0x29df24: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x29df24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_29df28:
    // 0x29df28: 0x2a020010  slti        $v0, $s0, 0x10
    ctx->pc = 0x29df28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x29df2c: 0x1440ffbe  bnez        $v0, . + 4 + (-0x42 << 2)
    ctx->pc = 0x29DF2Cu;
    {
        const bool branch_taken_0x29df2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29DF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DF2Cu;
        // 0x29df30: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29df2c) {
            ctx->pc = 0x29DE28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29de28;
        }
    }
    ctx->pc = 0x29DF34u;
label_29df34:
    // 0x29df34: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x29df34u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29df38: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x29df38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29df3c: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x29df3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x29df40: 0x7ea30000  sq          $v1, 0x0($s5)
    ctx->pc = 0x29df40u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), GPR_VEC(ctx, 3));
    // 0x29df44: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x29df44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x29df48: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x29df48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x29df4c: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x29df4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x29df50: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x29df50u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x29df54: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x29df54u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29df58: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x29df58u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29df5c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x29df5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29df60: 0xc7b600f0  lwc1        $f22, 0xF0($sp)
    ctx->pc = 0x29df60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x29df64: 0xc7b500e8  lwc1        $f21, 0xE8($sp)
    ctx->pc = 0x29df64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x29df68: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x29df68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29df6c: 0x3e00008  jr          $ra
    ctx->pc = 0x29DF6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29DF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DF6Cu;
        // 0x29df70: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29DF6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29DF74u;
    // 0x29df74: 0x0  nop
    ctx->pc = 0x29df74u;
    // NOP
    ctx->pc = 0x29df78u;
}
