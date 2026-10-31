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

// Function: sub_0038DB40
// Address: 0x38db40 - 0x38dde8
void sub_0038DB40_0x38db40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038DB40_0x38db40");
#endif

    ctx->pc = 0x38db40u;

    // 0x38db40: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x38db40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x38db44: 0x3c073f4c  lui         $a3, 0x3F4C
    ctx->pc = 0x38db44u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16204 << 16));
    // 0x38db48: 0x34e7cccd  ori         $a3, $a3, 0xCCCD
    ctx->pc = 0x38db48u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)52429);
    // 0x38db4c: 0x2cc2000a  sltiu       $v0, $a2, 0xA
    ctx->pc = 0x38db4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x38db50: 0x1040008f  beqz        $v0, . + 4 + (0x8F << 2)
    ctx->pc = 0x38DB50u;
    {
        const bool branch_taken_0x38db50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DB50u;
        // 0x38db54: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38db50) {
            ctx->pc = 0x38DD90u;
            goto label_38dd90;
        }
    }
    ctx->pc = 0x38DB58u;
    // 0x38db58: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x38db58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x38db5c: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x38db5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x38db60: 0x2442e440  addiu       $v0, $v0, -0x1BC0
    ctx->pc = 0x38db60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960192));
    // 0x38db64: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x38db64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x38db68: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x38db68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x38db6c: 0x800008  jr          $a0
    ctx->pc = 0x38DB6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x38DB74u: goto label_38db74;
            case 0x38DBC0u: goto label_38dbc0;
            case 0x38DBCCu: goto label_38dbcc;
            case 0x38DBD8u: goto label_38dbd8;
            case 0x38DC4Cu: goto label_38dc4c;
            case 0x38DC58u: goto label_38dc58;
            case 0x38DC64u: goto label_38dc64;
            case 0x38DC70u: goto label_38dc70;
            case 0x38DCF8u: goto label_38dcf8;
            case 0x38DD04u: goto label_38dd04;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38DB6Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x38DB74u;
label_38db74:
    // 0x38db74: 0x8ca211e0  lw          $v0, 0x11E0($a1)
    ctx->pc = 0x38db74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4576)));
    // 0x38db78: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x38db78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
    // 0x38db7c: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x38DB7Cu;
    {
        const bool branch_taken_0x38db7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38db7c) {
            ctx->pc = 0x38DB80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38DB7Cu;
            // 0x38db80: 0x78a20300  lq          $v0, 0x300($a1) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 768)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38DBB8u;
            goto label_38dbb8;
        }
    }
    ctx->pc = 0x38DB84u;
    // 0x38db84: 0x78a202f0  lq          $v0, 0x2F0($a1)
    ctx->pc = 0x38db84u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 752)));
    // 0x38db88: 0x78a30310  lq          $v1, 0x310($a1)
    ctx->pc = 0x38db88u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 784)));
    // 0x38db8c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x38db8cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x38db90: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x38db90u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x38db94: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x38db94u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x38db98: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x38db98u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x38db9c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x38db9cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x38dba0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x38dba0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x38dba4: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x38dba4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x38dba8: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x38dba8u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x38dbac: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x38dbacu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x38dbb0: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x38DBB0u;
    {
        const bool branch_taken_0x38dbb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DBB0u;
        // 0x38dbb4: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38dbb0) {
            ctx->pc = 0x38DD74u;
            goto label_38dd74;
        }
    }
    ctx->pc = 0x38DBB8u;
label_38dbb8:
    // 0x38dbb8: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x38DBB8u;
    {
        const bool branch_taken_0x38dbb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DBB8u;
        // 0x38dbbc: 0x78a30310  lq          $v1, 0x310($a1) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 784)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38dbb8) {
            ctx->pc = 0x38DD4Cu;
            goto label_38dd4c;
        }
    }
    ctx->pc = 0x38DBC0u;
label_38dbc0:
    // 0x38dbc0: 0x78a208a0  lq          $v0, 0x8A0($a1)
    ctx->pc = 0x38dbc0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 2208)));
    // 0x38dbc4: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x38DBC4u;
    {
        const bool branch_taken_0x38dbc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DBC4u;
        // 0x38dbc8: 0x78a308b0  lq          $v1, 0x8B0($a1) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 2224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38dbc4) {
            ctx->pc = 0x38DD4Cu;
            goto label_38dd4c;
        }
    }
    ctx->pc = 0x38DBCCu;
label_38dbcc:
    // 0x38dbcc: 0x78a20bc0  lq          $v0, 0xBC0($a1)
    ctx->pc = 0x38dbccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 3008)));
    // 0x38dbd0: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x38DBD0u;
    {
        const bool branch_taken_0x38dbd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DBD0u;
        // 0x38dbd4: 0x78a30bd0  lq          $v1, 0xBD0($a1) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 3024)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38dbd0) {
            ctx->pc = 0x38DD4Cu;
            goto label_38dd4c;
        }
    }
    ctx->pc = 0x38DBD8u;
label_38dbd8:
    // 0x38dbd8: 0x8ca211e0  lw          $v0, 0x11E0($a1)
    ctx->pc = 0x38dbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4576)));
    // 0x38dbdc: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x38dbdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
    // 0x38dbe0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x38DBE0u;
    {
        const bool branch_taken_0x38dbe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38dbe0) {
            ctx->pc = 0x38DBE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38DBE0u;
            // 0x38dbe4: 0x78a20e30  lq          $v0, 0xE30($a1) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 3632)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38DBF4u;
            goto label_38dbf4;
        }
    }
    ctx->pc = 0x38DBE8u;
    // 0x38dbe8: 0x78a20e40  lq          $v0, 0xE40($a1)
    ctx->pc = 0x38dbe8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 3648)));
    // 0x38dbec: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x38DBECu;
    {
        const bool branch_taken_0x38dbec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DBECu;
        // 0x38dbf0: 0x78a30e50  lq          $v1, 0xE50($a1) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 3664)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38dbec) {
            ctx->pc = 0x38DD4Cu;
            goto label_38dd4c;
        }
    }
    ctx->pc = 0x38DBF4u;
label_38dbf4:
    // 0x38dbf4: 0x78a30e40  lq          $v1, 0xE40($a1)
    ctx->pc = 0x38dbf4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 3648)));
    // 0x38dbf8: 0x78a40e50  lq          $a0, 0xE50($a1)
    ctx->pc = 0x38dbf8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 5), 3664)));
    // 0x38dbfc: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x38dbfcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x38dc00: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x38dc00u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x38dc04: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x38dc04u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x38dc08: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x38dc08u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x38dc0c: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x38dc0cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x38dc10: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x38dc10u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x38dc14: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x38dc14u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x38dc18: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x38dc18u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x38dc1c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x38dc1cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x38dc20: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x38dc20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    // 0x38dc24: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x38dc24u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x38dc28: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x38dc28u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x38dc2c: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x38dc2cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x38dc30: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x38dc30u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x38dc34: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x38dc34u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x38dc38: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x38dc38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x38dc3c: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x38dc3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x38dc40: 0x7fa40000  sq          $a0, 0x0($sp)
    ctx->pc = 0x38dc40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 4));
    // 0x38dc44: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x38DC44u;
    {
        const bool branch_taken_0x38dc44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DC44u;
        // 0x38dc48: 0x7fa30060  sq          $v1, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38dc44) {
            ctx->pc = 0x38DCE0u;
            goto label_38dce0;
        }
    }
    ctx->pc = 0x38DC4Cu;
label_38dc4c:
    // 0x38dc4c: 0x78a209e0  lq          $v0, 0x9E0($a1)
    ctx->pc = 0x38dc4cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 2528)));
    // 0x38dc50: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x38DC50u;
    {
        const bool branch_taken_0x38dc50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DC50u;
        // 0x38dc54: 0x78a309f0  lq          $v1, 0x9F0($a1) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 2544)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38dc50) {
            ctx->pc = 0x38DD4Cu;
            goto label_38dd4c;
        }
    }
    ctx->pc = 0x38DC58u;
label_38dc58:
    // 0x38dc58: 0x78a20800  lq          $v0, 0x800($a1)
    ctx->pc = 0x38dc58u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 2048)));
    // 0x38dc5c: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x38DC5Cu;
    {
        const bool branch_taken_0x38dc5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DC5Cu;
        // 0x38dc60: 0x78a30810  lq          $v1, 0x810($a1) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 2064)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38dc5c) {
            ctx->pc = 0x38DD4Cu;
            goto label_38dd4c;
        }
    }
    ctx->pc = 0x38DC64u;
label_38dc64:
    // 0x38dc64: 0x78a20a80  lq          $v0, 0xA80($a1)
    ctx->pc = 0x38dc64u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 2688)));
    // 0x38dc68: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x38DC68u;
    {
        const bool branch_taken_0x38dc68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DC68u;
        // 0x38dc6c: 0x78a30a90  lq          $v1, 0xA90($a1) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 2704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38dc68) {
            ctx->pc = 0x38DD4Cu;
            goto label_38dd4c;
        }
    }
    ctx->pc = 0x38DC70u;
label_38dc70:
    // 0x38dc70: 0x8ca211e0  lw          $v0, 0x11E0($a1)
    ctx->pc = 0x38dc70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4576)));
    // 0x38dc74: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x38dc74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
    // 0x38dc78: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x38DC78u;
    {
        const bool branch_taken_0x38dc78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38dc78) {
            ctx->pc = 0x38DC7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38DC78u;
            // 0x38dc7c: 0x78a20cf0  lq          $v0, 0xCF0($a1) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 3312)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38DC8Cu;
            goto label_38dc8c;
        }
    }
    ctx->pc = 0x38DC80u;
    // 0x38dc80: 0x78a20d00  lq          $v0, 0xD00($a1)
    ctx->pc = 0x38dc80u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 3328)));
    // 0x38dc84: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x38DC84u;
    {
        const bool branch_taken_0x38dc84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DC84u;
        // 0x38dc88: 0x78a30d10  lq          $v1, 0xD10($a1) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 3344)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38dc84) {
            ctx->pc = 0x38DD4Cu;
            goto label_38dd4c;
        }
    }
    ctx->pc = 0x38DC8Cu;
label_38dc8c:
    // 0x38dc8c: 0x78a30d00  lq          $v1, 0xD00($a1)
    ctx->pc = 0x38dc8cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 3328)));
    // 0x38dc90: 0x78a40d10  lq          $a0, 0xD10($a1)
    ctx->pc = 0x38dc90u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 5), 3344)));
    // 0x38dc94: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x38dc94u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x38dc98: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x38dc98u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x38dc9c: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x38dc9cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x38dca0: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x38dca0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x38dca4: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x38dca4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x38dca8: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x38dca8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x38dcac: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x38dcacu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x38dcb0: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x38dcb0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x38dcb4: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x38dcb4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x38dcb8: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x38dcb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    // 0x38dcbc: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x38dcbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x38dcc0: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x38dcc0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x38dcc4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x38dcc4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x38dcc8: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x38dcc8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x38dccc: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x38dcccu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x38dcd0: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x38dcd0u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x38dcd4: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x38dcd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x38dcd8: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x38dcd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x38dcdc: 0x7fa40000  sq          $a0, 0x0($sp)
    ctx->pc = 0x38dcdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 4));
label_38dce0:
    // 0x38dce0: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x38dce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    // 0x38dce4: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x38dce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x38dce8: 0x7fa40050  sq          $a0, 0x50($sp)
    ctx->pc = 0x38dce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 4));
    // 0x38dcec: 0x7fa40040  sq          $a0, 0x40($sp)
    ctx->pc = 0x38dcecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 4));
    // 0x38dcf0: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x38DCF0u;
    {
        const bool branch_taken_0x38dcf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DCF0u;
        // 0x38dcf4: 0x7fa40010  sq          $a0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38dcf0) {
            ctx->pc = 0x38DDA0u;
            goto label_38dda0;
        }
    }
    ctx->pc = 0x38DCF8u;
label_38dcf8:
    // 0x38dcf8: 0x78a20940  lq          $v0, 0x940($a1)
    ctx->pc = 0x38dcf8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 2368)));
    // 0x38dcfc: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x38DCFCu;
    {
        const bool branch_taken_0x38dcfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DCFCu;
        // 0x38dd00: 0x78a30950  lq          $v1, 0x950($a1) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 2384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38dcfc) {
            ctx->pc = 0x38DD4Cu;
            goto label_38dd4c;
        }
    }
    ctx->pc = 0x38DD04u;
label_38dd04:
    // 0x38dd04: 0x8ca211e0  lw          $v0, 0x11E0($a1)
    ctx->pc = 0x38dd04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4576)));
    // 0x38dd08: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x38dd08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
    // 0x38dd0c: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x38DD0Cu;
    {
        const bool branch_taken_0x38dd0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38dd0c) {
            ctx->pc = 0x38DD10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38DD0Cu;
            // 0x38dd10: 0x78a203a0  lq          $v0, 0x3A0($a1) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 928)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38DD48u;
            goto label_38dd48;
        }
    }
    ctx->pc = 0x38DD14u;
    // 0x38dd14: 0x78a20390  lq          $v0, 0x390($a1)
    ctx->pc = 0x38dd14u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 912)));
    // 0x38dd18: 0x78a303b0  lq          $v1, 0x3B0($a1)
    ctx->pc = 0x38dd18u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 944)));
    // 0x38dd1c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x38dd1cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x38dd20: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x38dd20u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x38dd24: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x38dd24u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x38dd28: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x38dd28u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x38dd2c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x38dd2cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x38dd30: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x38dd30u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x38dd34: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x38dd34u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x38dd38: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x38dd38u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x38dd3c: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x38dd3cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x38dd40: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x38DD40u;
    {
        const bool branch_taken_0x38dd40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DD40u;
        // 0x38dd44: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38dd40) {
            ctx->pc = 0x38DD74u;
            goto label_38dd74;
        }
    }
    ctx->pc = 0x38DD48u;
label_38dd48:
    // 0x38dd48: 0x78a303b0  lq          $v1, 0x3B0($a1)
    ctx->pc = 0x38dd48u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 944)));
label_38dd4c:
    // 0x38dd4c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x38dd4cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x38dd50: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x38dd50u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x38dd54: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x38dd54u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x38dd58: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x38dd58u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x38dd5c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x38dd5cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x38dd60: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x38dd60u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x38dd64: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x38dd64u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x38dd68: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x38dd68u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x38dd6c: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x38dd6cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x38dd70: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x38dd70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_38dd74:
    // 0x38dd74: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x38dd74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x38dd78: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x38dd78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x38dd7c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x38dd7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x38dd80: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x38dd80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x38dd84: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x38dd84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    // 0x38dd88: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x38DD88u;
    {
        const bool branch_taken_0x38dd88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DD88u;
        // 0x38dd8c: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38dd88) {
            ctx->pc = 0x38DDA0u;
            goto label_38dda0;
        }
    }
    ctx->pc = 0x38DD90u;
label_38dd90:
    // 0x38dd90: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x38dd90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x38dd94: 0x244216c0  addiu       $v0, $v0, 0x16C0
    ctx->pc = 0x38dd94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
    // 0x38dd98: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x38dd98u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x5116C0u));
    // 0x38dd9c: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x38dd9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_38dda0:
    // 0x38dda0: 0x8ca311e0  lw          $v1, 0x11E0($a1)
    ctx->pc = 0x38dda0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4576)));
    // 0x38dda4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x38dda4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x38dda8: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x38dda8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x38ddac: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x38ddacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x38ddb0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x38ddb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x38ddb4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x38DDB4u;
    {
        const bool branch_taken_0x38ddb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x38DDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DDB4u;
        // 0x38ddb8: 0xc4a00018  lwc1        $f0, 0x18($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ddb4) {
            ctx->pc = 0x38DDC8u;
            goto label_38ddc8;
        }
    }
    ctx->pc = 0x38DDBCu;
    // 0x38ddbc: 0x3c013f73  lui         $at, 0x3F73
    ctx->pc = 0x38ddbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16243 << 16));
    // 0x38ddc0: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x38ddc0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x38ddc4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x38ddc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_38ddc8:
    // 0x38ddc8: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x38ddc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ddcc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x38ddccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x38ddd0: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x38ddd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x38ddd4: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x38ddd4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38ddd8: 0x7d030000  sq          $v1, 0x0($t0)
    ctx->pc = 0x38ddd8u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 3));
    // 0x38dddc: 0x3e00008  jr          $ra
    ctx->pc = 0x38DDDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38DDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DDDCu;
        // 0x38dde0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38DDDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38DDE4u;
    // 0x38dde4: 0x0  nop
    ctx->pc = 0x38dde4u;
    // NOP
    ctx->pc = 0x38dde8u;
}
