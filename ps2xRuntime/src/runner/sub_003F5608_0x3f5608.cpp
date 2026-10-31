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

// Function: sub_003F5608
// Address: 0x3f5608 - 0x3f5870
void sub_003F5608_0x3f5608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F5608_0x3f5608");
#endif

    switch (ctx->pc) {
        case 0x3f5644u: goto label_3f5644;
        case 0x3f5650u: goto label_3f5650;
        case 0x3f565cu: goto label_3f565c;
        case 0x3f5674u: goto label_3f5674;
        case 0x3f5680u: goto label_3f5680;
        case 0x3f5698u: goto label_3f5698;
        case 0x3f56a4u: goto label_3f56a4;
        case 0x3f56b4u: goto label_3f56b4;
        case 0x3f577cu: goto label_3f577c;
        case 0x3f578cu: goto label_3f578c;
        case 0x3f57a8u: goto label_3f57a8;
        case 0x3f57b0u: goto label_3f57b0;
        case 0x3f57b8u: goto label_3f57b8;
        case 0x3f57c0u: goto label_3f57c0;
        case 0x3f57d4u: goto label_3f57d4;
        case 0x3f57e8u: goto label_3f57e8;
        case 0x3f57f8u: goto label_3f57f8;
        case 0x3f5814u: goto label_3f5814;
        case 0x3f581cu: goto label_3f581c;
        case 0x3f5824u: goto label_3f5824;
        case 0x3f582cu: goto label_3f582c;
        case 0x3f5848u: goto label_3f5848;
        default: break;
    }

    ctx->pc = 0x3f5608u;

    // 0x3f5608: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x3f5608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x3f560c: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x3f560cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x3f5610: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x3f5610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x3f5614: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3f5614u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5618: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x3f5618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x3f561c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x3f561cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5620: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3f5620u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5624: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x3f5624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x3f5628: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x3f5628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x3f562c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3f562cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5630: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x3f5630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x3f5634: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x3f5634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x3f5638: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3f5638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x3f563c: 0xc0ea146  jal         func_3A8518
    ctx->pc = 0x3F563Cu;
    SET_GPR_U32(ctx, 31, 0x3F5644u);
    ctx->pc = 0x3F5640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F563Cu;
    // 0x3f5640: 0x3c140051  lui         $s4, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3F563Cu, 0x3F5644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5644u;
label_3f5644:
    // 0x3f5644: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x3f5644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x3f5648: 0xc0e4080  jal         func_390200
    ctx->pc = 0x3F5648u;
    SET_GPR_U32(ctx, 31, 0x3F5650u);
    ctx->pc = 0x3F564Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5648u;
    // 0x3f564c: 0x305600ff  andi        $s6, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x390200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390200u, 0x3F5648u, 0x3F5650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5650u;
label_3f5650:
    // 0x3f5650: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3f5650u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5654: 0xc0e4080  jal         func_390200
    ctx->pc = 0x3F5654u;
    SET_GPR_U32(ctx, 31, 0x3F565Cu);
    ctx->pc = 0x3F5658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5654u;
    // 0x3f5658: 0x26640014  addiu       $a0, $s3, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390200u, 0x3F5654u, 0x3F565Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F565Cu;
label_3f565c:
    // 0x3f565c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3f565cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5660: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f5660u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5664: 0x8e822c7c  lw          $v0, 0x2C7C($s4)
    ctx->pc = 0x3f5664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
    // 0x3f5668: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3f5668u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f566c: 0xc0e637e  jal         func_398DF8
    ctx->pc = 0x3F566Cu;
    SET_GPR_U32(ctx, 31, 0x3F5674u);
    ctx->pc = 0x3F5670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F566Cu;
    // 0x3f5670: 0x8c440840  lw          $a0, 0x840($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398DF8u, 0x3F566Cu, 0x3F5674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5674u;
label_3f5674:
    // 0x3f5674: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f5674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5678: 0xc0e858c  jal         func_3A1630
    ctx->pc = 0x3F5678u;
    SET_GPR_U32(ctx, 31, 0x3F5680u);
    ctx->pc = 0x3F567Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5678u;
    // 0x3f567c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3F5678u, 0x3F5680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5680u;
label_3f5680:
    // 0x3f5680: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3F5680u;
    {
        const bool branch_taken_0x3f5680 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5680u;
        // 0x3f5684: 0x8e822c7c  lw          $v0, 0x2C7C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5680) {
            ctx->pc = 0x3F56A4u;
            goto label_3f56a4;
        }
    }
    ctx->pc = 0x3F5688u;
    // 0x3f5688: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f5688u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f568c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3f568cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f5690: 0xc0e637e  jal         func_398DF8
    ctx->pc = 0x3F5690u;
    SET_GPR_U32(ctx, 31, 0x3F5698u);
    ctx->pc = 0x3F5694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5690u;
    // 0x3f5694: 0x8c440840  lw          $a0, 0x840($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398DF8u, 0x3F5690u, 0x3F5698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5698u;
label_3f5698:
    // 0x3f5698: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f5698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f569c: 0xc0e858c  jal         func_3A1630
    ctx->pc = 0x3F569Cu;
    SET_GPR_U32(ctx, 31, 0x3F56A4u);
    ctx->pc = 0x3F56A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F569Cu;
    // 0x3f56a0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3F569Cu, 0x3F56A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F56A4u;
label_3f56a4:
    // 0x3f56a4: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3f56a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x3f56a8: 0x8e4400c0  lw          $a0, 0xC0($s2)
    ctx->pc = 0x3f56a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 192)));
    // 0x3f56ac: 0xc10c313  jal         func_430C4C
    ctx->pc = 0x3F56ACu;
    SET_GPR_U32(ctx, 31, 0x3F56B4u);
    ctx->pc = 0x3F56B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F56ACu;
    // 0x3f56b0: 0x24a56510  addiu       $a1, $a1, 0x6510 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x3F56ACu, 0x3F56B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F56B4u;
label_3f56b4:
    // 0x3f56b4: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x3F56B4u;
    {
        const bool branch_taken_0x3f56b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F56B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F56B4u;
        // 0x3f56b8: 0x26c3fffe  addiu       $v1, $s6, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f56b4) {
            ctx->pc = 0x3F574Cu;
            goto label_3f574c;
        }
    }
    ctx->pc = 0x3F56BCu;
    // 0x3f56bc: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3F56BCu;
    {
        const bool branch_taken_0x3f56bc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F56C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F56BCu;
        // 0x3f56c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f56bc) {
            ctx->pc = 0x3F56D0u;
            goto label_3f56d0;
        }
    }
    ctx->pc = 0x3F56C4u;
    // 0x3f56c4: 0x7a430020  lq          $v1, 0x20($s2)
    ctx->pc = 0x3f56c4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x3f56c8: 0xa2220108  sb          $v0, 0x108($s1)
    ctx->pc = 0x3f56c8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 264), (uint8_t)GPR_U32(ctx, 2));
    // 0x3f56cc: 0x7e230020  sq          $v1, 0x20($s1)
    ctx->pc = 0x3f56ccu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 3));
label_3f56d0:
    // 0x3f56d0: 0x1200001e  beqz        $s0, . + 4 + (0x1E << 2)
    ctx->pc = 0x3F56D0u;
    {
        const bool branch_taken_0x3f56d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F56D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F56D0u;
        // 0x3f56d4: 0x26c3fffe  addiu       $v1, $s6, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f56d0) {
            ctx->pc = 0x3F574Cu;
            goto label_3f574c;
        }
    }
    ctx->pc = 0x3F56D8u;
    // 0x3f56d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3f56d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3f56dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3f56dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3f56e0: 0x7a430020  lq          $v1, 0x20($s2)
    ctx->pc = 0x3f56e0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x3f56e4: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x3f56e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x3f56e8: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x3f56e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x3f56ec: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x3f56ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x3f56f0: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x3f56f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x3f56f4: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3f56f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3f56f8: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x3f56f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x3f56fc: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3f56fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x3f5700: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3f5700u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x3f5704: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3f5704u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x3f5708: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x3f5708u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3f570c: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3f570cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x3f5710: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3f5710u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x3f5714: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3f5714u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3f5718: 0x4bc209bf  vmulaw.xyz  $ACC, $vf1, $vf2w
    ctx->pc = 0x3f5718u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x3f571c: 0x4bc1114b  vmaddw.xyz  $vf5, $vf2, $vf1w
    ctx->pc = 0x3f571cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x3f5720: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3f5720u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3f5724: 0x4bc52168  vadd.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x3f5724u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x3f5728: 0x4a231944  vsubx.w     $vf5, $vf3, $vf3x
    ctx->pc = 0x3f5728u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x3f572c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3f572cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x3f5730: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3f5730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x3f5734: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3f5734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f5738: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x3f5738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x3f573c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3f573cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x3f5740: 0x7e020020  sq          $v0, 0x20($s0)
    ctx->pc = 0x3f5740u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
    // 0x3f5744: 0xa2030108  sb          $v1, 0x108($s0)
    ctx->pc = 0x3f5744u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 264), (uint8_t)GPR_U32(ctx, 3));
    // 0x3f5748: 0x26c3fffe  addiu       $v1, $s6, -0x2
    ctx->pc = 0x3f5748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967294));
label_3f574c:
    // 0x3f574c: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x3f574cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x3f5750: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x3F5750u;
    {
        const bool branch_taken_0x3f5750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5750u;
        // 0x3f5754: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5750) {
            ctx->pc = 0x3F5848u;
            goto label_3f5848;
        }
    }
    ctx->pc = 0x3F5758u;
    // 0x3f5758: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3f5758u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3f575c: 0x244265b0  addiu       $v0, $v0, 0x65B0
    ctx->pc = 0x3f575cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26032));
    // 0x3f5760: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3f5760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3f5764: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3f5764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3f5768: 0x800008  jr          $a0
    ctx->pc = 0x3F5768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3F5770u: goto label_3f5770;
            case 0x3F57A8u: goto label_3f57a8;
            case 0x3F57C0u: goto label_3f57c0;
            case 0x3F57DCu: goto label_3f57dc;
            case 0x3F5814u: goto label_3f5814;
            case 0x3F5834u: goto label_3f5834;
            case 0x3F5848u: goto label_3f5848;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F5768u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3F5770u;
label_3f5770:
    // 0x3f5770: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f5770u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5774: 0xc0fd4ec  jal         func_3F53B0
    ctx->pc = 0x3F5774u;
    SET_GPR_U32(ctx, 31, 0x3F577Cu);
    ctx->pc = 0x3F5778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5774u;
    // 0x3f5778: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F53B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F53B0u, 0x3F5774u, 0x3F577Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F577Cu;
label_3f577c:
    // 0x3f577c: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3F577Cu;
    {
        const bool branch_taken_0x3f577c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F577Cu;
        // 0x3f5780: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f577c) {
            ctx->pc = 0x3F578Cu;
            goto label_3f578c;
        }
    }
    ctx->pc = 0x3F5784u;
    // 0x3f5784: 0xc0fd4ec  jal         func_3F53B0
    ctx->pc = 0x3F5784u;
    SET_GPR_U32(ctx, 31, 0x3F578Cu);
    ctx->pc = 0x3F5788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5784u;
    // 0x3f5788: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F53B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F53B0u, 0x3F5784u, 0x3F578Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F578Cu;
label_3f578c:
    // 0x3f578c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3f578cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3f5790: 0x8e640024  lw          $a0, 0x24($s3)
    ctx->pc = 0x3f5790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x3f5794: 0xa262002c  sb          $v0, 0x2C($s3)
    ctx->pc = 0x3f5794u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 44), (uint8_t)GPR_U32(ctx, 2));
    // 0x3f5798: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3f5798u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f579c: 0x7a420010  lq          $v0, 0x10($s2)
    ctx->pc = 0x3f579cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x3f57a0: 0xc0e9bba  jal         func_3A6EE8
    ctx->pc = 0x3F57A0u;
    SET_GPR_U32(ctx, 31, 0x3F57A8u);
    ctx->pc = 0x3F57A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F57A0u;
    // 0x3f57a4: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6EE8u, 0x3F57A0u, 0x3F57A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F57A8u;
label_3f57a8:
    // 0x3f57a8: 0xc0e91b2  jal         func_3A46C8
    ctx->pc = 0x3F57A8u;
    SET_GPR_U32(ctx, 31, 0x3F57B0u);
    ctx->pc = 0x3F57ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F57A8u;
    // 0x3f57ac: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A46C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A46C8u, 0x3F57A8u, 0x3F57B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F57B0u;
label_3f57b0:
    // 0x3f57b0: 0xc0e91b2  jal         func_3A46C8
    ctx->pc = 0x3F57B0u;
    SET_GPR_U32(ctx, 31, 0x3F57B8u);
    ctx->pc = 0x3F57B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F57B0u;
    // 0x3f57b4: 0x8e4400dc  lw          $a0, 0xDC($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A46C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A46C8u, 0x3F57B0u, 0x3F57B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F57B8u;
label_3f57b8:
    // 0x3f57b8: 0xc0e92c0  jal         func_3A4B00
    ctx->pc = 0x3F57B8u;
    SET_GPR_U32(ctx, 31, 0x3F57C0u);
    ctx->pc = 0x3F57BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F57B8u;
    // 0x3f57bc: 0x8e4400e0  lw          $a0, 0xE0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4B00u, 0x3F57B8u, 0x3F57C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F57C0u;
label_3f57c0:
    // 0x3f57c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f57c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f57c4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3f57c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f57c8: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x3f57c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f57cc: 0xc0fd506  jal         func_3F5418
    ctx->pc = 0x3F57CCu;
    SET_GPR_U32(ctx, 31, 0x3F57D4u);
    ctx->pc = 0x3F57D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F57CCu;
    // 0x3f57d0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F5418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F5418u, 0x3F57CCu, 0x3F57D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F57D4u;
label_3f57d4:
    // 0x3f57d4: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x3F57D4u;
    {
        const bool branch_taken_0x3f57d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F57D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F57D4u;
        // 0x3f57d8: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f57d4) {
            ctx->pc = 0x3F584Cu;
            goto label_3f584c;
        }
    }
    ctx->pc = 0x3F57DCu;
label_3f57dc:
    // 0x3f57dc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f57dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f57e0: 0xc0fd4ec  jal         func_3F53B0
    ctx->pc = 0x3F57E0u;
    SET_GPR_U32(ctx, 31, 0x3F57E8u);
    ctx->pc = 0x3F57E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F57E0u;
    // 0x3f57e4: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F53B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F53B0u, 0x3F57E0u, 0x3F57E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F57E8u;
label_3f57e8:
    // 0x3f57e8: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3F57E8u;
    {
        const bool branch_taken_0x3f57e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F57ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F57E8u;
        // 0x3f57ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f57e8) {
            ctx->pc = 0x3F57F8u;
            goto label_3f57f8;
        }
    }
    ctx->pc = 0x3F57F0u;
    // 0x3f57f0: 0xc0fd4ec  jal         func_3F53B0
    ctx->pc = 0x3F57F0u;
    SET_GPR_U32(ctx, 31, 0x3F57F8u);
    ctx->pc = 0x3F57F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F57F0u;
    // 0x3f57f4: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F53B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F53B0u, 0x3F57F0u, 0x3F57F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F57F8u;
label_3f57f8:
    // 0x3f57f8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3f57f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3f57fc: 0x8e640028  lw          $a0, 0x28($s3)
    ctx->pc = 0x3f57fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x3f5800: 0xa262002c  sb          $v0, 0x2C($s3)
    ctx->pc = 0x3f5800u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 44), (uint8_t)GPR_U32(ctx, 2));
    // 0x3f5804: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3f5804u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5808: 0x7a420010  lq          $v0, 0x10($s2)
    ctx->pc = 0x3f5808u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x3f580c: 0xc0e9bba  jal         func_3A6EE8
    ctx->pc = 0x3F580Cu;
    SET_GPR_U32(ctx, 31, 0x3F5814u);
    ctx->pc = 0x3F5810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F580Cu;
    // 0x3f5810: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6EE8u, 0x3F580Cu, 0x3F5814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5814u;
label_3f5814:
    // 0x3f5814: 0xc0e91c4  jal         func_3A4710
    ctx->pc = 0x3F5814u;
    SET_GPR_U32(ctx, 31, 0x3F581Cu);
    ctx->pc = 0x3F5818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5814u;
    // 0x3f5818: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4710u, 0x3F5814u, 0x3F581Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F581Cu;
label_3f581c:
    // 0x3f581c: 0xc0e91c4  jal         func_3A4710
    ctx->pc = 0x3F581Cu;
    SET_GPR_U32(ctx, 31, 0x3F5824u);
    ctx->pc = 0x3F5820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F581Cu;
    // 0x3f5820: 0x8e4400dc  lw          $a0, 0xDC($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4710u, 0x3F581Cu, 0x3F5824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5824u;
label_3f5824:
    // 0x3f5824: 0xc0e92b8  jal         func_3A4AE0
    ctx->pc = 0x3F5824u;
    SET_GPR_U32(ctx, 31, 0x3F582Cu);
    ctx->pc = 0x3F5828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5824u;
    // 0x3f5828: 0x8e4400e0  lw          $a0, 0xE0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4AE0u, 0x3F5824u, 0x3F582Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F582Cu;
label_3f582c:
    // 0x3f582c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3F582Cu;
    {
        const bool branch_taken_0x3f582c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F582Cu;
        // 0x3f5830: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f582c) {
            ctx->pc = 0x3F584Cu;
            goto label_3f584c;
        }
    }
    ctx->pc = 0x3F5834u;
label_3f5834:
    // 0x3f5834: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f5834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5838: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3f5838u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f583c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x3f583cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5840: 0xc0fd506  jal         func_3F5418
    ctx->pc = 0x3F5840u;
    SET_GPR_U32(ctx, 31, 0x3F5848u);
    ctx->pc = 0x3F5844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5840u;
    // 0x3f5844: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F5418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F5418u, 0x3F5840u, 0x3F5848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5848u;
label_3f5848:
    // 0x3f5848: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x3f5848u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_3f584c:
    // 0x3f584c: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x3f584cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x3f5850: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x3f5850u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x3f5854: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x3f5854u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3f5858: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x3f5858u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3f585c: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x3f585cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3f5860: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x3f5860u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3f5864: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3f5864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3f5868: 0x3e00008  jr          $ra
    ctx->pc = 0x3F5868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F586Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5868u;
        // 0x3f586c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F5868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F5870u;
}
