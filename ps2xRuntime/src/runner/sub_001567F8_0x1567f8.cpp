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

// Function: sub_001567F8
// Address: 0x1567f8 - 0x156978
void sub_001567F8_0x1567f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001567F8_0x1567f8");
#endif

    switch (ctx->pc) {
        case 0x1567f8u: goto label_1567f8;
        case 0x1567fcu: goto label_1567fc;
        case 0x156800u: goto label_156800;
        case 0x156804u: goto label_156804;
        case 0x156808u: goto label_156808;
        case 0x15680cu: goto label_15680c;
        case 0x156810u: goto label_156810;
        case 0x156814u: goto label_156814;
        case 0x156818u: goto label_156818;
        case 0x15681cu: goto label_15681c;
        case 0x156820u: goto label_156820;
        case 0x156824u: goto label_156824;
        case 0x156828u: goto label_156828;
        case 0x15682cu: goto label_15682c;
        case 0x156830u: goto label_156830;
        case 0x156834u: goto label_156834;
        case 0x156838u: goto label_156838;
        case 0x15683cu: goto label_15683c;
        case 0x156840u: goto label_156840;
        case 0x156844u: goto label_156844;
        case 0x156848u: goto label_156848;
        case 0x15684cu: goto label_15684c;
        case 0x156850u: goto label_156850;
        case 0x156854u: goto label_156854;
        case 0x156858u: goto label_156858;
        case 0x15685cu: goto label_15685c;
        case 0x156860u: goto label_156860;
        case 0x156864u: goto label_156864;
        case 0x156868u: goto label_156868;
        case 0x15686cu: goto label_15686c;
        case 0x156870u: goto label_156870;
        case 0x156874u: goto label_156874;
        case 0x156878u: goto label_156878;
        case 0x15687cu: goto label_15687c;
        case 0x156880u: goto label_156880;
        case 0x156884u: goto label_156884;
        case 0x156888u: goto label_156888;
        case 0x15688cu: goto label_15688c;
        case 0x156890u: goto label_156890;
        case 0x156894u: goto label_156894;
        case 0x156898u: goto label_156898;
        case 0x15689cu: goto label_15689c;
        case 0x1568a0u: goto label_1568a0;
        case 0x1568a4u: goto label_1568a4;
        case 0x1568a8u: goto label_1568a8;
        case 0x1568acu: goto label_1568ac;
        case 0x1568b0u: goto label_1568b0;
        case 0x1568b4u: goto label_1568b4;
        case 0x1568b8u: goto label_1568b8;
        case 0x1568bcu: goto label_1568bc;
        case 0x1568c0u: goto label_1568c0;
        case 0x1568c4u: goto label_1568c4;
        case 0x1568c8u: goto label_1568c8;
        case 0x1568ccu: goto label_1568cc;
        case 0x1568d0u: goto label_1568d0;
        case 0x1568d4u: goto label_1568d4;
        case 0x1568d8u: goto label_1568d8;
        case 0x1568dcu: goto label_1568dc;
        case 0x1568e0u: goto label_1568e0;
        case 0x1568e4u: goto label_1568e4;
        case 0x1568e8u: goto label_1568e8;
        case 0x1568ecu: goto label_1568ec;
        case 0x1568f0u: goto label_1568f0;
        case 0x1568f4u: goto label_1568f4;
        case 0x1568f8u: goto label_1568f8;
        case 0x1568fcu: goto label_1568fc;
        case 0x156900u: goto label_156900;
        case 0x156904u: goto label_156904;
        case 0x156908u: goto label_156908;
        case 0x15690cu: goto label_15690c;
        case 0x156910u: goto label_156910;
        case 0x156914u: goto label_156914;
        case 0x156918u: goto label_156918;
        case 0x15691cu: goto label_15691c;
        case 0x156920u: goto label_156920;
        case 0x156924u: goto label_156924;
        case 0x156928u: goto label_156928;
        case 0x15692cu: goto label_15692c;
        case 0x156930u: goto label_156930;
        case 0x156934u: goto label_156934;
        case 0x156938u: goto label_156938;
        case 0x15693cu: goto label_15693c;
        case 0x156940u: goto label_156940;
        case 0x156944u: goto label_156944;
        case 0x156948u: goto label_156948;
        case 0x15694cu: goto label_15694c;
        case 0x156950u: goto label_156950;
        case 0x156954u: goto label_156954;
        case 0x156958u: goto label_156958;
        case 0x15695cu: goto label_15695c;
        case 0x156960u: goto label_156960;
        case 0x156964u: goto label_156964;
        case 0x156968u: goto label_156968;
        case 0x15696cu: goto label_15696c;
        case 0x156970u: goto label_156970;
        case 0x156974u: goto label_156974;
        default: break;
    }

    ctx->pc = 0x1567f8u;

label_1567f8:
    // 0x1567f8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1567f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1567fc:
    // 0x1567fc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1567fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_156800:
    // 0x156800: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x156800u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_156804:
    // 0x156804: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x156804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_156808:
    // 0x156808: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x156808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_15680c:
    // 0x15680c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x15680cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_156810:
    // 0x156810: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x156810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_156814:
    // 0x156814: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x156814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_156818:
    // 0x156818: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x156818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_15681c:
    // 0x15681c: 0xc107444  jal         func_41D110
label_156820:
    if (ctx->pc == 0x156820u) {
        ctx->pc = 0x156820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15681Cu;
        // 0x156820: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x156824u;
        goto label_156824;
    }
    ctx->pc = 0x15681Cu;
    SET_GPR_U32(ctx, 31, 0x156824u);
    ctx->pc = 0x156820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15681Cu;
    // 0x156820: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D110u, 0x15681Cu, 0x156824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156824u;
label_156824:
    // 0x156824: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_156828:
    if (ctx->pc == 0x156828u) {
        ctx->pc = 0x156828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156824u;
        // 0x156828: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15682Cu;
        goto label_15682c;
    }
    ctx->pc = 0x156824u;
    {
        const bool branch_taken_0x156824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x156828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156824u;
        // 0x156828: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156824) {
            ctx->pc = 0x156860u;
            goto label_156860;
        }
    }
    ctx->pc = 0x15682Cu;
label_15682c:
    // 0x15682c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x15682cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_156830:
    // 0x156830: 0x8c45cdb4  lw          $a1, -0x324C($v0)
    ctx->pc = 0x156830u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954420)));
label_156834:
    // 0x156834: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x156834u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
label_156838:
    // 0x156838: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x156838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_15683c:
    // 0x15683c: 0x84440128  lh          $a0, 0x128($v0)
    ctx->pc = 0x15683cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 296)));
label_156840:
    // 0x156840: 0x8c43012c  lw          $v1, 0x12C($v0)
    ctx->pc = 0x156840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 300)));
label_156844:
    // 0x156844: 0x60f809  jalr        $v1
label_156848:
    if (ctx->pc == 0x156848u) {
        ctx->pc = 0x156848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156844u;
        // 0x156848: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15684Cu;
        goto label_15684c;
    }
    ctx->pc = 0x156844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15684Cu);
        ctx->pc = 0x156848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156844u;
        // 0x156848: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156844u, 0x15684Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15684Cu;
label_15684c:
    // 0x15684c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x15684cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_156850:
    // 0x156850: 0xc06c5a2  jal         func_1B1688
label_156854:
    if (ctx->pc == 0x156854u) {
        ctx->pc = 0x156854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156850u;
        // 0x156854: 0x24840840  addiu       $a0, $a0, 0x840 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156858u;
        goto label_156858;
    }
    ctx->pc = 0x156850u;
    SET_GPR_U32(ctx, 31, 0x156858u);
    ctx->pc = 0x156854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156850u;
    // 0x156854: 0x24840840  addiu       $a0, $a0, 0x840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1688u, 0x156850u, 0x156858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156858u;
label_156858:
    // 0x156858: 0x1000003d  b           . + 4 + (0x3D << 2)
label_15685c:
    if (ctx->pc == 0x15685Cu) {
        ctx->pc = 0x156860u;
        goto label_156860;
    }
    ctx->pc = 0x156858u;
    {
        const bool branch_taken_0x156858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x156858) {
            ctx->pc = 0x156950u;
            goto label_156950;
        }
    }
    ctx->pc = 0x156860u;
label_156860:
    // 0x156860: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x156860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_156864:
    // 0x156864: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x156864u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_156868:
    // 0x156868: 0x8c43deb8  lw          $v1, -0x2148($v0)
    ctx->pc = 0x156868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958776)));
label_15686c:
    // 0x15686c: 0x906201c3  lbu         $v0, 0x1C3($v1)
    ctx->pc = 0x15686cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 451)));
label_156870:
    // 0x156870: 0x2c4200c8  sltiu       $v0, $v0, 0xC8
    ctx->pc = 0x156870u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)200) ? 1 : 0);
label_156874:
    // 0x156874: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
label_156878:
    if (ctx->pc == 0x156878u) {
        ctx->pc = 0x156878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156874u;
        // 0x156878: 0x3c130051  lui         $s3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15687Cu;
        goto label_15687c;
    }
    ctx->pc = 0x156874u;
    {
        const bool branch_taken_0x156874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x156878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156874u;
        // 0x156878: 0x3c130051  lui         $s3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156874) {
            ctx->pc = 0x156934u;
            goto label_156934;
        }
    }
    ctx->pc = 0x15687Cu;
label_15687c:
    // 0x15687c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x15687cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_156880:
    // 0x156880: 0xc06c590  jal         func_1B1640
label_156884:
    if (ctx->pc == 0x156884u) {
        ctx->pc = 0x156884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156880u;
        // 0x156884: 0x24840840  addiu       $a0, $a0, 0x840 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156888u;
        goto label_156888;
    }
    ctx->pc = 0x156880u;
    SET_GPR_U32(ctx, 31, 0x156888u);
    ctx->pc = 0x156884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156880u;
    // 0x156884: 0x24840840  addiu       $a0, $a0, 0x840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1640u, 0x156880u, 0x156888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156888u;
label_156888:
    // 0x156888: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
label_15688c:
    if (ctx->pc == 0x15688Cu) {
        ctx->pc = 0x15688Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156888u;
        // 0x15688c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156890u;
        goto label_156890;
    }
    ctx->pc = 0x156888u;
    {
        const bool branch_taken_0x156888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15688Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156888u;
        // 0x15688c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156888) {
            ctx->pc = 0x156934u;
            goto label_156934;
        }
    }
    ctx->pc = 0x156890u;
label_156890:
    // 0x156890: 0x8c43b1a4  lw          $v1, -0x4E5C($v0)
    ctx->pc = 0x156890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947236)));
label_156894:
    // 0x156894: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
label_156898:
    if (ctx->pc == 0x156898u) {
        ctx->pc = 0x156898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156894u;
        // 0x156898: 0x3c020061  lui         $v0, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15689Cu;
        goto label_15689c;
    }
    ctx->pc = 0x156894u;
    {
        const bool branch_taken_0x156894 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x156898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156894u;
        // 0x156898: 0x3c020061  lui         $v0, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156894) {
            ctx->pc = 0x1568ECu;
            goto label_1568ec;
        }
    }
    ctx->pc = 0x15689Cu;
label_15689c:
    // 0x15689c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x15689cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1568a0:
    // 0x1568a0: 0x24504020  addiu       $s0, $v0, 0x4020
    ctx->pc = 0x1568a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16416));
label_1568a4:
    // 0x1568a4: 0x0  nop
    ctx->pc = 0x1568a4u;
    // NOP
label_1568a8:
    // 0x1568a8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1568a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1568ac:
    // 0x1568ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1568acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1568b0:
    // 0x1568b0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1568b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1568b4:
    // 0x1568b4: 0x84440098  lh          $a0, 0x98($v0)
    ctx->pc = 0x1568b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 152)));
label_1568b8:
    // 0x1568b8: 0x8c43009c  lw          $v1, 0x9C($v0)
    ctx->pc = 0x1568b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
label_1568bc:
    // 0x1568bc: 0x60f809  jalr        $v1
label_1568c0:
    if (ctx->pc == 0x1568C0u) {
        ctx->pc = 0x1568C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1568BCu;
        // 0x1568c0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1568C4u;
        goto label_1568c4;
    }
    ctx->pc = 0x1568BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1568C4u);
        ctx->pc = 0x1568C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1568BCu;
        // 0x1568c0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1568BCu, 0x1568C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1568C4u;
label_1568c4:
    // 0x1568c4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1568c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1568c8:
    // 0x1568c8: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1568c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1568cc:
    // 0x1568cc: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1568ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1568d0:
    // 0x1568d0: 0x60f809  jalr        $v1
label_1568d4:
    if (ctx->pc == 0x1568D4u) {
        ctx->pc = 0x1568D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1568D0u;
        // 0x1568d4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1568D8u;
        goto label_1568d8;
    }
    ctx->pc = 0x1568D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1568D8u);
        ctx->pc = 0x1568D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1568D0u;
        // 0x1568d4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1568D0u, 0x1568D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1568D8u;
label_1568d8:
    // 0x1568d8: 0x2e220013  sltiu       $v0, $s1, 0x13
    ctx->pc = 0x1568d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
label_1568dc:
    // 0x1568dc: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_1568e0:
    if (ctx->pc == 0x1568E0u) {
        ctx->pc = 0x1568E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1568DCu;
        // 0x1568e0: 0x26100100  addiu       $s0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1568E4u;
        goto label_1568e4;
    }
    ctx->pc = 0x1568DCu;
    {
        const bool branch_taken_0x1568dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1568E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1568DCu;
        // 0x1568e0: 0x26100100  addiu       $s0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1568dc) {
            ctx->pc = 0x1568A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1568a8;
        }
    }
    ctx->pc = 0x1568E4u;
label_1568e4:
    // 0x1568e4: 0x10000014  b           . + 4 + (0x14 << 2)
label_1568e8:
    if (ctx->pc == 0x1568E8u) {
        ctx->pc = 0x1568E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1568E4u;
        // 0x1568e8: 0x8e45cdb4  lw          $a1, -0x324C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954420)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1568ECu;
        goto label_1568ec;
    }
    ctx->pc = 0x1568E4u;
    {
        const bool branch_taken_0x1568e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1568E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1568E4u;
        // 0x1568e8: 0x8e45cdb4  lw          $a1, -0x324C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954420)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1568e4) {
            ctx->pc = 0x156938u;
            goto label_156938;
        }
    }
    ctx->pc = 0x1568ECu;
label_1568ec:
    // 0x1568ec: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1568ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1568f0:
    // 0x1568f0: 0x24504020  addiu       $s0, $v0, 0x4020
    ctx->pc = 0x1568f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16416));
label_1568f4:
    // 0x1568f4: 0x0  nop
    ctx->pc = 0x1568f4u;
    // NOP
label_1568f8:
    // 0x1568f8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1568f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1568fc:
    // 0x1568fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1568fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_156900:
    // 0x156900: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x156900u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_156904:
    // 0x156904: 0x84440098  lh          $a0, 0x98($v0)
    ctx->pc = 0x156904u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 152)));
label_156908:
    // 0x156908: 0x8c43009c  lw          $v1, 0x9C($v0)
    ctx->pc = 0x156908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
label_15690c:
    // 0x15690c: 0x60f809  jalr        $v1
label_156910:
    if (ctx->pc == 0x156910u) {
        ctx->pc = 0x156910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15690Cu;
        // 0x156910: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156914u;
        goto label_156914;
    }
    ctx->pc = 0x15690Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x156914u);
        ctx->pc = 0x156910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15690Cu;
        // 0x156910: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15690Cu, 0x156914u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x156914u;
label_156914:
    // 0x156914: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x156914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_156918:
    // 0x156918: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x156918u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_15691c:
    // 0x15691c: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x15691cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_156920:
    // 0x156920: 0x60f809  jalr        $v1
label_156924:
    if (ctx->pc == 0x156924u) {
        ctx->pc = 0x156924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156920u;
        // 0x156924: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156928u;
        goto label_156928;
    }
    ctx->pc = 0x156920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x156928u);
        ctx->pc = 0x156924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156920u;
        // 0x156924: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156920u, 0x156928u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x156928u;
label_156928:
    // 0x156928: 0x2e220013  sltiu       $v0, $s1, 0x13
    ctx->pc = 0x156928u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
label_15692c:
    // 0x15692c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_156930:
    if (ctx->pc == 0x156930u) {
        ctx->pc = 0x156930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15692Cu;
        // 0x156930: 0x26100100  addiu       $s0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156934u;
        goto label_156934;
    }
    ctx->pc = 0x15692Cu;
    {
        const bool branch_taken_0x15692c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x156930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15692Cu;
        // 0x156930: 0x26100100  addiu       $s0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15692c) {
            ctx->pc = 0x1568F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1568f8;
        }
    }
    ctx->pc = 0x156934u;
label_156934:
    // 0x156934: 0x8e45cdb4  lw          $a1, -0x324C($s2)
    ctx->pc = 0x156934u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954420)));
label_156938:
    // 0x156938: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x156938u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_15693c:
    // 0x15693c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x15693cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_156940:
    // 0x156940: 0x84440128  lh          $a0, 0x128($v0)
    ctx->pc = 0x156940u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 296)));
label_156944:
    // 0x156944: 0x8c43012c  lw          $v1, 0x12C($v0)
    ctx->pc = 0x156944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 300)));
label_156948:
    // 0x156948: 0x60f809  jalr        $v1
label_15694c:
    if (ctx->pc == 0x15694Cu) {
        ctx->pc = 0x15694Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156948u;
        // 0x15694c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156950u;
        goto label_156950;
    }
    ctx->pc = 0x156948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x156950u);
        ctx->pc = 0x15694Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156948u;
        // 0x15694c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156948u, 0x156950u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x156950u;
label_156950:
    // 0x156950: 0xc061748  jal         func_185D20
label_156954:
    if (ctx->pc == 0x156954u) {
        ctx->pc = 0x156954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156950u;
        // 0x156954: 0x8e64cd4c  lw          $a0, -0x32B4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156958u;
        goto label_156958;
    }
    ctx->pc = 0x156950u;
    SET_GPR_U32(ctx, 31, 0x156958u);
    ctx->pc = 0x156954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156950u;
    // 0x156954: 0x8e64cd4c  lw          $a0, -0x32B4($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185D20u, 0x156950u, 0x156958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156958u;
label_156958:
    // 0x156958: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x156958u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_15695c:
    // 0x15695c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x15695cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_156960:
    // 0x156960: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x156960u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_156964:
    // 0x156964: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x156964u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_156968:
    // 0x156968: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x156968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15696c:
    // 0x15696c: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x15696cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_156970:
    // 0x156970: 0x3e00008  jr          $ra
label_156974:
    if (ctx->pc == 0x156974u) {
        ctx->pc = 0x156974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156970u;
        // 0x156974: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156978u;
        goto label_fallthrough_0x156970;
    }
    ctx->pc = 0x156970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x156974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156970u;
        // 0x156974: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156970u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x156970:
    ctx->pc = 0x156978u;
}
