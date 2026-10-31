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

// Function: sub_002D0F68
// Address: 0x2d0f68 - 0x2d1080
void sub_002D0F68_0x2d0f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D0F68_0x2d0f68");
#endif

    switch (ctx->pc) {
        case 0x2d103cu: goto label_2d103c;
        case 0x2d1050u: goto label_2d1050;
        default: break;
    }

    ctx->pc = 0x2d0f68u;

    // 0x2d0f68: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2d0f68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2d0f6c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2d0f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2d0f70: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2d0f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2d0f74: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2d0f74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2d0f78: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2d0f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2d0f7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d0f7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0f80: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2d0f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2d0f84: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2d0f84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2d0f88: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2d0f88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2d0f8c: 0x246314d0  addiu       $v1, $v1, 0x14D0
    ctx->pc = 0x2d0f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5328));
    // 0x2d0f90: 0x240c001a  addiu       $t4, $zero, 0x1A
    ctx->pc = 0x2d0f90u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x2d0f94: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x2d0f94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x2d0f98: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x2d0f98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x2d0f9c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2d0f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2d0fa0: 0xe60c002c  swc1        $f12, 0x2C($s0)
    ctx->pc = 0x2d0fa0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x2d0fa4: 0x3c0b0051  lui         $t3, 0x51
    ctx->pc = 0x2d0fa4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)81 << 16));
    // 0x2d0fa8: 0xa2060032  sb          $a2, 0x32($s0)
    ctx->pc = 0x2d0fa8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 50), (uint8_t)GPR_U32(ctx, 6));
    // 0x2d0fac: 0x2451b880  addiu       $s1, $v0, -0x4780
    ctx->pc = 0x2d0facu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948992));
    // 0x2d0fb0: 0xa2070033  sb          $a3, 0x33($s0)
    ctx->pc = 0x2d0fb0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 51), (uint8_t)GPR_U32(ctx, 7));
    // 0x2d0fb4: 0x256b1730  addiu       $t3, $t3, 0x1730
    ctx->pc = 0x2d0fb4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 5936));
    // 0x2d0fb8: 0xa2080034  sb          $t0, 0x34($s0)
    ctx->pc = 0x2d0fb8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 52), (uint8_t)GPR_U32(ctx, 8));
    // 0x2d0fbc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d0fbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0fc0: 0xa2090035  sb          $t1, 0x35($s0)
    ctx->pc = 0x2d0fc0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 53), (uint8_t)GPR_U32(ctx, 9));
    // 0x2d0fc4: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2d0fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2d0fc8: 0xa20c0039  sb          $t4, 0x39($s0)
    ctx->pc = 0x2d0fc8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 57), (uint8_t)GPR_U32(ctx, 12));
    // 0x2d0fcc: 0xa20a003a  sb          $t2, 0x3A($s0)
    ctx->pc = 0x2d0fccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 58), (uint8_t)GPR_U32(ctx, 10));
    // 0x2d0fd0: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x2d0fd0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d0fd4: 0xa2000005  sb          $zero, 0x5($s0)
    ctx->pc = 0x2d0fd4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d0fd8: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x2d0fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x2d0fdc: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x2d0fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x2d0fe0: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x2d0fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x2d0fe4: 0xa2000030  sb          $zero, 0x30($s0)
    ctx->pc = 0x2d0fe4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 48), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d0fe8: 0xa2000031  sb          $zero, 0x31($s0)
    ctx->pc = 0x2d0fe8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 49), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d0fec: 0xa2000036  sb          $zero, 0x36($s0)
    ctx->pc = 0x2d0fecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 54), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d0ff0: 0xa2000037  sb          $zero, 0x37($s0)
    ctx->pc = 0x2d0ff0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 55), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d0ff4: 0xa2000038  sb          $zero, 0x38($s0)
    ctx->pc = 0x2d0ff4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 56), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d0ff8: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x2d0ff8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x2d0ffc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d0ffcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d1000: 0x79620000  lq          $v0, 0x0($t3)
    ctx->pc = 0x2d1000u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x511730u));
    // 0x2d1004: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2d1004u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2d1008: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2d1008u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2d100c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2d100cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2d1010: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2d1010u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2d1014: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x2d1014u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2d1018: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x2d1018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x2d101c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2d101cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2d1020: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2d1020u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d1024: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x2d1024u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
    // 0x2d1028: 0xe6010018  swc1        $f1, 0x18($s0)
    ctx->pc = 0x2d1028u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x2d102c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2d102cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x2d1030: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x2d1030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x2d1034: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x2D1034u;
    SET_GPR_U32(ctx, 31, 0x2D103Cu);
    ctx->pc = 0x2D1038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1034u;
    // 0x2d1038: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2D1034u, 0x2D103Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D103Cu;
label_2d103c:
    // 0x2d103c: 0x2c420033  sltiu       $v0, $v0, 0x33
    ctx->pc = 0x2d103cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)51) ? 1 : 0);
    // 0x2d1040: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D1040u;
    {
        const bool branch_taken_0x2d1040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1040u;
        // 0x2d1044: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1040) {
            ctx->pc = 0x2D1064u;
            goto label_2d1064;
        }
    }
    ctx->pc = 0x2D1048u;
    // 0x2d1048: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x2D1048u;
    SET_GPR_U32(ctx, 31, 0x2D1050u);
    ctx->pc = 0x2D104Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1048u;
    // 0x2d104c: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2D1048u, 0x2D1050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1050u;
label_2d1050:
    // 0x2d1050: 0x2c420032  sltiu       $v0, $v0, 0x32
    ctx->pc = 0x2d1050u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)50) ? 1 : 0);
    // 0x2d1054: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D1054u;
    {
        const bool branch_taken_0x2d1054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1054u;
        // 0x2d1058: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1054) {
            ctx->pc = 0x2D1060u;
            goto label_2d1060;
        }
    }
    ctx->pc = 0x2D105Cu;
    // 0x2d105c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2d105cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2d1060:
    // 0x2d1060: 0xa2030036  sb          $v1, 0x36($s0)
    ctx->pc = 0x2d1060u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 54), (uint8_t)GPR_U32(ctx, 3));
label_2d1064:
    // 0x2d1064: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2d1064u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1068: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2d1068u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d106c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2d106cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d1070: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2d1070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d1074: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1074u;
        // 0x2d1078: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D1074u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D107Cu;
    // 0x2d107c: 0x0  nop
    ctx->pc = 0x2d107cu;
    // NOP
    ctx->pc = 0x2d1080u;
}
