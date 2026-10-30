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

// Function: sub_004837A0
// Address: 0x4837a0 - 0x4838a8
void sub_004837A0_0x4837a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004837A0_0x4837a0");
#endif

    switch (ctx->pc) {
        case 0x4837a0u: goto label_4837a0;
        case 0x4837a4u: goto label_4837a4;
        case 0x4837a8u: goto label_4837a8;
        case 0x4837acu: goto label_4837ac;
        case 0x4837b0u: goto label_4837b0;
        case 0x4837b4u: goto label_4837b4;
        case 0x4837b8u: goto label_4837b8;
        case 0x4837bcu: goto label_4837bc;
        case 0x4837c0u: goto label_4837c0;
        case 0x4837c4u: goto label_4837c4;
        case 0x4837c8u: goto label_4837c8;
        case 0x4837ccu: goto label_4837cc;
        case 0x4837d0u: goto label_4837d0;
        case 0x4837d4u: goto label_4837d4;
        case 0x4837d8u: goto label_4837d8;
        case 0x4837dcu: goto label_4837dc;
        case 0x4837e0u: goto label_4837e0;
        case 0x4837e4u: goto label_4837e4;
        case 0x4837e8u: goto label_4837e8;
        case 0x4837ecu: goto label_4837ec;
        case 0x4837f0u: goto label_4837f0;
        case 0x4837f4u: goto label_4837f4;
        case 0x4837f8u: goto label_4837f8;
        case 0x4837fcu: goto label_4837fc;
        case 0x483800u: goto label_483800;
        case 0x483804u: goto label_483804;
        case 0x483808u: goto label_483808;
        case 0x48380cu: goto label_48380c;
        case 0x483810u: goto label_483810;
        case 0x483814u: goto label_483814;
        case 0x483818u: goto label_483818;
        case 0x48381cu: goto label_48381c;
        case 0x483820u: goto label_483820;
        case 0x483824u: goto label_483824;
        case 0x483828u: goto label_483828;
        case 0x48382cu: goto label_48382c;
        case 0x483830u: goto label_483830;
        case 0x483834u: goto label_483834;
        case 0x483838u: goto label_483838;
        case 0x48383cu: goto label_48383c;
        case 0x483840u: goto label_483840;
        case 0x483844u: goto label_483844;
        case 0x483848u: goto label_483848;
        case 0x48384cu: goto label_48384c;
        case 0x483850u: goto label_483850;
        case 0x483854u: goto label_483854;
        case 0x483858u: goto label_483858;
        case 0x48385cu: goto label_48385c;
        case 0x483860u: goto label_483860;
        case 0x483864u: goto label_483864;
        case 0x483868u: goto label_483868;
        case 0x48386cu: goto label_48386c;
        case 0x483870u: goto label_483870;
        case 0x483874u: goto label_483874;
        case 0x483878u: goto label_483878;
        case 0x48387cu: goto label_48387c;
        case 0x483880u: goto label_483880;
        case 0x483884u: goto label_483884;
        case 0x483888u: goto label_483888;
        case 0x48388cu: goto label_48388c;
        case 0x483890u: goto label_483890;
        case 0x483894u: goto label_483894;
        case 0x483898u: goto label_483898;
        case 0x48389cu: goto label_48389c;
        case 0x4838a0u: goto label_4838a0;
        case 0x4838a4u: goto label_4838a4;
        default: break;
    }

    ctx->pc = 0x4837a0u;

label_4837a0:
    // 0x4837a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4837a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4837a4:
    // 0x4837a4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x4837a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_4837a8:
    // 0x4837a8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x4837a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_4837ac:
    // 0x4837ac: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4837acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4837b0:
    // 0x4837b0: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x4837b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4837b4:
    // 0x4837b4: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x4837b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_4837b8:
    // 0x4837b8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x4837b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4837bc:
    // 0x4837bc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4837bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4837c0:
    // 0x4837c0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x4837c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4837c4:
    // 0x4837c4: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x4837c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4837c8:
    // 0x4837c8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4837c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4837cc:
    // 0x4837cc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x4837ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_4837d0:
    // 0x4837d0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x4837d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4837d4:
    // 0x4837d4: 0x40f809  jalr        $v0
label_4837d8:
    if (ctx->pc == 0x4837D8u) {
        ctx->pc = 0x4837D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4837D4u;
        // 0x4837d8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4837DCu;
        goto label_4837dc;
    }
    ctx->pc = 0x4837D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4837DCu);
        ctx->pc = 0x4837D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4837D4u;
        // 0x4837d8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4837D4u, 0x4837DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4837DCu;
label_4837dc:
    // 0x4837dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4837dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4837e0:
    // 0x4837e0: 0x16000029  bnez        $s0, . + 4 + (0x29 << 2)
label_4837e4:
    if (ctx->pc == 0x4837E4u) {
        ctx->pc = 0x4837E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4837E0u;
        // 0x4837e4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4837E8u;
        goto label_4837e8;
    }
    ctx->pc = 0x4837E0u;
    {
        const bool branch_taken_0x4837e0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x4837E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4837E0u;
        // 0x4837e4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4837e0) {
            ctx->pc = 0x483888u;
            goto label_483888;
        }
    }
    ctx->pc = 0x4837E8u;
label_4837e8:
    // 0x4837e8: 0x2663fff3  addiu       $v1, $s3, -0xD
    ctx->pc = 0x4837e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967283));
label_4837ec:
    // 0x4837ec: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x4837ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_4837f0:
    // 0x4837f0: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_4837f4:
    if (ctx->pc == 0x4837F4u) {
        ctx->pc = 0x4837F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4837F0u;
        // 0x4837f4: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4837F8u;
        goto label_4837f8;
    }
    ctx->pc = 0x4837F0u;
    {
        const bool branch_taken_0x4837f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4837F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4837F0u;
        // 0x4837f4: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4837f0) {
            ctx->pc = 0x483858u;
            goto label_483858;
        }
    }
    ctx->pc = 0x4837F8u;
label_4837f8:
    // 0x4837f8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4837f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4837fc:
    // 0x4837fc: 0x2442f030  addiu       $v0, $v0, -0xFD0
    ctx->pc = 0x4837fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963248));
label_483800:
    // 0x483800: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x483800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_483804:
    // 0x483804: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x483804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_483808:
    // 0x483808: 0x800008  jr          $a0
label_48380c:
    if (ctx->pc == 0x48380Cu) {
        ctx->pc = 0x483810u;
        goto label_483810;
    }
    ctx->pc = 0x483808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x483810u: goto label_483810;
            case 0x483820u: goto label_483820;
            case 0x483848u: goto label_483848;
            case 0x48384Cu: goto label_48384c;
            case 0x483854u: goto label_483854;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x483808u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x483810u;
label_483810:
    // 0x483810: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x483810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_483814:
    // 0x483814: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x483814u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_483818:
    // 0x483818: 0x1000000f  b           . + 4 + (0xF << 2)
label_48381c:
    if (ctx->pc == 0x48381Cu) {
        ctx->pc = 0x48381Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x483818u;
        // 0x48381c: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x483820u;
        goto label_483820;
    }
    ctx->pc = 0x483818u;
    {
        const bool branch_taken_0x483818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48381Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x483818u;
        // 0x48381c: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x483818) {
            ctx->pc = 0x483858u;
            goto label_483858;
        }
    }
    ctx->pc = 0x483820u;
label_483820:
    // 0x483820: 0x2e300001  sltiu       $s0, $s1, 0x1
    ctx->pc = 0x483820u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_483824:
    // 0x483824: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
label_483828:
    if (ctx->pc == 0x483828u) {
        ctx->pc = 0x483828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x483824u;
        // 0x483828: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48382Cu;
        goto label_48382c;
    }
    ctx->pc = 0x483824u;
    {
        const bool branch_taken_0x483824 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x483828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x483824u;
        // 0x483828: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x483824) {
            ctx->pc = 0x483860u;
            goto label_483860;
        }
    }
    ctx->pc = 0x48382Cu;
label_48382c:
    // 0x48382c: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x48382cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
label_483830:
    // 0x483830: 0x8c62ade4  lw          $v0, -0x521C($v1)
    ctx->pc = 0x483830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946276)));
label_483834:
    // 0x483834: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x483834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_483838:
    // 0x483838: 0x40f809  jalr        $v0
label_48383c:
    if (ctx->pc == 0x48383Cu) {
        ctx->pc = 0x48383Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x483838u;
        // 0x48383c: 0x24a5f008  addiu       $a1, $a1, -0xFF8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x483840u;
        goto label_483840;
    }
    ctx->pc = 0x483838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x483840u);
        ctx->pc = 0x48383Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x483838u;
        // 0x48383c: 0x24a5f008  addiu       $a1, $a1, -0xFF8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x483838u, 0x483840u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x483840u;
label_483840:
    // 0x483840: 0x10000005  b           . + 4 + (0x5 << 2)
label_483844:
    if (ctx->pc == 0x483844u) {
        ctx->pc = 0x483848u;
        goto label_483848;
    }
    ctx->pc = 0x483840u;
    {
        const bool branch_taken_0x483840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x483840) {
            ctx->pc = 0x483858u;
            goto label_483858;
        }
    }
    ctx->pc = 0x483848u;
label_483848:
    // 0x483848: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x483848u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_48384c:
    // 0x48384c: 0x10000002  b           . + 4 + (0x2 << 2)
label_483850:
    if (ctx->pc == 0x483850u) {
        ctx->pc = 0x483850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48384Cu;
        // 0x483850: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x483854u;
        goto label_483854;
    }
    ctx->pc = 0x48384Cu;
    {
        const bool branch_taken_0x48384c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x483850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48384Cu;
        // 0x483850: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48384c) {
            ctx->pc = 0x483858u;
            goto label_483858;
        }
    }
    ctx->pc = 0x483854u;
label_483854:
    // 0x483854: 0x2e300001  sltiu       $s0, $s1, 0x1
    ctx->pc = 0x483854u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_483858:
    // 0x483858: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
label_48385c:
    if (ctx->pc == 0x48385Cu) {
        ctx->pc = 0x48385Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x483858u;
        // 0x48385c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x483860u;
        goto label_483860;
    }
    ctx->pc = 0x483858u;
    {
        const bool branch_taken_0x483858 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x48385Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x483858u;
        // 0x48385c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x483858) {
            ctx->pc = 0x483888u;
            goto label_483888;
        }
    }
    ctx->pc = 0x483860u;
label_483860:
    // 0x483860: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x483860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_483864:
    // 0x483864: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x483864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_483868:
    // 0x483868: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x483868u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_48386c:
    // 0x48386c: 0xc11eff2  jal         func_47BFC8
label_483870:
    if (ctx->pc == 0x483870u) {
        ctx->pc = 0x483870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48386Cu;
        // 0x483870: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x483874u;
        goto label_483874;
    }
    ctx->pc = 0x48386Cu;
    SET_GPR_U32(ctx, 31, 0x483874u);
    ctx->pc = 0x483870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48386Cu;
    // 0x483870: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x48386Cu, 0x483874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x483874u;
label_483874:
    // 0x483874: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x483874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_483878:
    // 0x483878: 0xc11f024  jal         func_47C090
label_48387c:
    if (ctx->pc == 0x48387Cu) {
        ctx->pc = 0x48387Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x483878u;
        // 0x48387c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x483880u;
        goto label_483880;
    }
    ctx->pc = 0x483878u;
    SET_GPR_U32(ctx, 31, 0x483880u);
    ctx->pc = 0x48387Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x483878u;
    // 0x48387c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x483878u, 0x483880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x483880u;
label_483880:
    // 0x483880: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x483880u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_483884:
    // 0x483884: 0x0  nop
    ctx->pc = 0x483884u;
    // NOP
label_483888:
    // 0x483888: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x483888u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_48388c:
    // 0x48388c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x48388cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_483890:
    // 0x483890: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x483890u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_483894:
    // 0x483894: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x483894u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_483898:
    // 0x483898: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x483898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_48389c:
    // 0x48389c: 0x3e00008  jr          $ra
label_4838a0:
    if (ctx->pc == 0x4838A0u) {
        ctx->pc = 0x4838A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48389Cu;
        // 0x4838a0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4838A4u;
        goto label_4838a4;
    }
    ctx->pc = 0x48389Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4838A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48389Cu;
        // 0x4838a0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48389Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4838A4u;
label_4838a4:
    // 0x4838a4: 0x0  nop
    ctx->pc = 0x4838a4u;
    // NOP
    ctx->pc = 0x4838a8u;
}
