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

// Function: sub_00355798
// Address: 0x355798 - 0x355ab8
void sub_00355798_0x355798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00355798_0x355798");
#endif

    switch (ctx->pc) {
        case 0x3557e0u: goto label_3557e0;
        case 0x355848u: goto label_355848;
        case 0x355878u: goto label_355878;
        case 0x355890u: goto label_355890;
        case 0x3558a0u: goto label_3558a0;
        case 0x3558a8u: goto label_3558a8;
        case 0x3558e0u: goto label_3558e0;
        case 0x355938u: goto label_355938;
        case 0x355958u: goto label_355958;
        case 0x355974u: goto label_355974;
        case 0x3559b8u: goto label_3559b8;
        case 0x3559c4u: goto label_3559c4;
        case 0x3559d4u: goto label_3559d4;
        case 0x3559dcu: goto label_3559dc;
        case 0x3559ecu: goto label_3559ec;
        case 0x3559f4u: goto label_3559f4;
        case 0x355a2cu: goto label_355a2c;
        default: break;
    }

    ctx->pc = 0x355798u;

    // 0x355798: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x355798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x35579c: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x35579cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x3557a0: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x3557a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x3557a4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3557a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3557a8: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x3557a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x3557ac: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x3557acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x3557b0: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x3557b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x3557b4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3557b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3557b8: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x3557b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x3557bc: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x3557bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x3557c0: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x3557c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x3557c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3557c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3557c8: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x3557c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x3557cc: 0x96620038  lhu         $v0, 0x38($s3)
    ctx->pc = 0x3557ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x3557d0: 0x9663003a  lhu         $v1, 0x3A($s3)
    ctx->pc = 0x3557d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 58)));
    // 0x3557d4: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x3557d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3557d8: 0x104000aa  beqz        $v0, . + 4 + (0xAA << 2)
    ctx->pc = 0x3557D8u;
    {
        const bool branch_taken_0x3557d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3557DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3557D8u;
        // 0x3557dc: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3557d8) {
            ctx->pc = 0x355A84u;
            goto label_355a84;
        }
    }
    ctx->pc = 0x3557E0u;
label_3557e0:
    // 0x3557e0: 0x8e740034  lw          $s4, 0x34($s3)
    ctx->pc = 0x3557e0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x3557e4: 0x96820002  lhu         $v0, 0x2($s4)
    ctx->pc = 0x3557e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x3557e8: 0x2444ffe8  addiu       $a0, $v0, -0x18
    ctx->pc = 0x3557e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967272));
    // 0x3557ec: 0x2c830035  sltiu       $v1, $a0, 0x35
    ctx->pc = 0x3557ecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)53) ? 1 : 0);
    // 0x3557f0: 0x10600099  beqz        $v1, . + 4 + (0x99 << 2)
    ctx->pc = 0x3557F0u;
    {
        const bool branch_taken_0x3557f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3557F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3557F0u;
        // 0x3557f4: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3557f0) {
            ctx->pc = 0x355A58u;
            goto label_355a58;
        }
    }
    ctx->pc = 0x3557F8u;
    // 0x3557f8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3557f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3557fc: 0x24428db0  addiu       $v0, $v0, -0x7250
    ctx->pc = 0x3557fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938032));
    // 0x355800: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x355800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x355804: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x355804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x355808: 0x800008  jr          $a0
    ctx->pc = 0x355808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x355810u: goto label_355810;
            case 0x355884u: goto label_355884;
            case 0x3558B0u: goto label_3558b0;
            case 0x3558C4u: goto label_3558c4;
            case 0x3558E8u: goto label_3558e8;
            case 0x355940u: goto label_355940;
            case 0x35597Cu: goto label_35597c;
            case 0x355A58u: goto label_355a58;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x355808u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x355810u;
label_355810:
    // 0x355810: 0x9662003a  lhu         $v0, 0x3A($s3)
    ctx->pc = 0x355810u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 58)));
    // 0x355814: 0x26850018  addiu       $a1, $s4, 0x18
    ctx->pc = 0x355814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
    // 0x355818: 0x96630038  lhu         $v1, 0x38($s3)
    ctx->pc = 0x355818u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x35581c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x35581cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355820: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x355820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x355824: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x355824u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x355828: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x355828u;
    {
        const bool branch_taken_0x355828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35582Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355828u;
        // 0x35582c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355828) {
            ctx->pc = 0x355864u;
            goto label_355864;
        }
    }
    ctx->pc = 0x355830u;
    // 0x355830: 0x94a20002  lhu         $v0, 0x2($a1)
    ctx->pc = 0x355830u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x355834: 0x24030019  addiu       $v1, $zero, 0x19
    ctx->pc = 0x355834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x355838: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x355838u;
    {
        const bool branch_taken_0x355838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x35583Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355838u;
        // 0x35583c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355838) {
            ctx->pc = 0x355860u;
            goto label_355860;
        }
    }
    ctx->pc = 0x355840u;
    // 0x355840: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x355840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x355844: 0x0  nop
    ctx->pc = 0x355844u;
    // NOP
label_355848:
    // 0x355848: 0x86102b  sltu        $v0, $a0, $a2
    ctx->pc = 0x355848u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x35584c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x35584Cu;
    {
        const bool branch_taken_0x35584c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x355850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35584Cu;
        // 0x355850: 0x24020019  addiu       $v0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35584c) {
            ctx->pc = 0x355864u;
            goto label_355864;
        }
    }
    ctx->pc = 0x355854u;
    // 0x355854: 0x0  nop
    ctx->pc = 0x355854u;
    // NOP
    // 0x355858: 0x54a2fffb  bnel        $a1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x355858u;
    {
        const bool branch_taken_0x355858 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x355858) {
            ctx->pc = 0x35585Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x355858u;
            // 0x35585c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x355848u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_355848;
        }
    }
    ctx->pc = 0x355860u;
label_355860:
    // 0x355860: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x355860u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_355864:
    // 0x355864: 0x54e0007d  bnel        $a3, $zero, . + 4 + (0x7D << 2)
    ctx->pc = 0x355864u;
    {
        const bool branch_taken_0x355864 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x355864) {
            ctx->pc = 0x355868u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x355864u;
            // 0x355868: 0x96640038  lhu         $a0, 0x38($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x355A5Cu;
            goto label_355a5c;
        }
    }
    ctx->pc = 0x35586Cu;
    // 0x35586c: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x35586cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x355870: 0xc0e8b48  jal         func_3A2D20
    ctx->pc = 0x355870u;
    SET_GPR_U32(ctx, 31, 0x355878u);
    ctx->pc = 0x355874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355870u;
    // 0x355874: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x355870u, 0x355878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355878u;
label_355878:
    // 0x355878: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x355878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x35587c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x35587Cu;
    {
        const bool branch_taken_0x35587c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x355880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35587Cu;
        // 0x355880: 0x24060012  addiu       $a2, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35587c) {
            ctx->pc = 0x355898u;
            goto label_355898;
        }
    }
    ctx->pc = 0x355884u;
label_355884:
    // 0x355884: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x355884u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x355888: 0xc0e8b48  jal         func_3A2D20
    ctx->pc = 0x355888u;
    SET_GPR_U32(ctx, 31, 0x355890u);
    ctx->pc = 0x35588Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355888u;
    // 0x35588c: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x355888u, 0x355890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355890u;
label_355890:
    // 0x355890: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x355890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x355894: 0x24060013  addiu       $a2, $zero, 0x13
    ctx->pc = 0x355894u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_355898:
    // 0x355898: 0xc0e8b80  jal         func_3A2E00
    ctx->pc = 0x355898u;
    SET_GPR_U32(ctx, 31, 0x3558A0u);
    ctx->pc = 0x35589Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355898u;
    // 0x35589c: 0x8e650008  lw          $a1, 0x8($s3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x355898u, 0x3558A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3558A0u;
label_3558a0:
    // 0x3558a0: 0xc0e8b50  jal         func_3A2D40
    ctx->pc = 0x3558A0u;
    SET_GPR_U32(ctx, 31, 0x3558A8u);
    ctx->pc = 0x3558A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3558A0u;
    // 0x3558a4: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x3558A0u, 0x3558A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3558A8u;
label_3558a8:
    // 0x3558a8: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x3558A8u;
    {
        const bool branch_taken_0x3558a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3558ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3558A8u;
        // 0x3558ac: 0x96640038  lhu         $a0, 0x38($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3558a8) {
            ctx->pc = 0x355A5Cu;
            goto label_355a5c;
        }
    }
    ctx->pc = 0x3558B0u;
label_3558b0:
    // 0x3558b0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x3558b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x3558b4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3558b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3558b8: 0x8c44deb8  lw          $a0, -0x2148($v0)
    ctx->pc = 0x3558b8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5FDEB8u));
    // 0x3558bc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3558BCu;
    {
        const bool branch_taken_0x3558bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3558C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3558BCu;
        // 0x3558c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3558bc) {
            ctx->pc = 0x3558D4u;
            goto label_3558d4;
        }
    }
    ctx->pc = 0x3558C4u;
label_3558c4:
    // 0x3558c4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x3558c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x3558c8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3558c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3558cc: 0x8c44deb8  lw          $a0, -0x2148($v0)
    ctx->pc = 0x3558ccu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5FDEB8u));
    // 0x3558d0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3558d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3558d4:
    // 0x3558d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3558d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3558d8: 0xc063514  jal         func_18D450
    ctx->pc = 0x3558D8u;
    SET_GPR_U32(ctx, 31, 0x3558E0u);
    ctx->pc = 0x3558DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3558D8u;
    // 0x3558dc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D450u, 0x3558D8u, 0x3558E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3558E0u;
label_3558e0:
    // 0x3558e0: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x3558E0u;
    {
        const bool branch_taken_0x3558e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3558E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3558E0u;
        // 0x3558e4: 0x96640038  lhu         $a0, 0x38($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3558e0) {
            ctx->pc = 0x355A5Cu;
            goto label_355a5c;
        }
    }
    ctx->pc = 0x3558E8u;
label_3558e8:
    // 0x3558e8: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x3558e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x3558ec: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x3558ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x3558f0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3558f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3558f4: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x3558f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3558f8: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x3558f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x3558fc: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x3558fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x355900: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x355900u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x355904: 0xa3a40002  sb          $a0, 0x2($sp)
    ctx->pc = 0x355904u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x355908: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x355908u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x35590c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x35590cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x355910: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x355910u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x355914: 0x52fc2  srl         $a1, $a1, 31
    ctx->pc = 0x355914u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x355918: 0xa3a30001  sb          $v1, 0x1($sp)
    ctx->pc = 0x355918u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x35591c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x35591cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x355920: 0xa3a60003  sb          $a2, 0x3($sp)
    ctx->pc = 0x355920u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 6));
    // 0x355924: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x355924u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355928: 0x8c44deb8  lw          $a0, -0x2148($v0)
    ctx->pc = 0x355928u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5FDEB8u));
    // 0x35592c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x35592cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x355930: 0xc063514  jal         func_18D450
    ctx->pc = 0x355930u;
    SET_GPR_U32(ctx, 31, 0x355938u);
    ctx->pc = 0x355934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355930u;
    // 0x355934: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D450u, 0x355930u, 0x355938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355938u;
label_355938:
    // 0x355938: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x355938u;
    {
        const bool branch_taken_0x355938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35593Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355938u;
        // 0x35593c: 0x96640038  lhu         $a0, 0x38($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355938) {
            ctx->pc = 0x355A5Cu;
            goto label_355a5c;
        }
    }
    ctx->pc = 0x355940u;
label_355940:
    // 0x355940: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x355940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x355944: 0x8c432c7c  lw          $v1, 0x2C7C($v0)
    ctx->pc = 0x355944u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x512C7Cu));
    // 0x355948: 0x8c640850  lw          $a0, 0x850($v1)
    ctx->pc = 0x355948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2128)));
    // 0x35594c: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x35594cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x355950: 0xc0d4ca6  jal         func_353298
    ctx->pc = 0x355950u;
    SET_GPR_U32(ctx, 31, 0x355958u);
    ctx->pc = 0x355954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355950u;
    // 0x355954: 0x8c4401e4  lw          $a0, 0x1E4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 484)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353298u, 0x355950u, 0x355958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355958u;
label_355958:
    // 0x355958: 0x50400040  beql        $v0, $zero, . + 4 + (0x40 << 2)
    ctx->pc = 0x355958u;
    {
        const bool branch_taken_0x355958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x355958) {
            ctx->pc = 0x35595Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x355958u;
            // 0x35595c: 0x96640038  lhu         $a0, 0x38($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x355A5Cu;
            goto label_355a5c;
        }
    }
    ctx->pc = 0x355960u;
    // 0x355960: 0x8c440024  lw          $a0, 0x24($v0)
    ctx->pc = 0x355960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x355964: 0x5080003d  beql        $a0, $zero, . + 4 + (0x3D << 2)
    ctx->pc = 0x355964u;
    {
        const bool branch_taken_0x355964 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x355964) {
            ctx->pc = 0x355968u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x355964u;
            // 0x355968: 0x96640038  lhu         $a0, 0x38($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x355A5Cu;
            goto label_355a5c;
        }
    }
    ctx->pc = 0x35596Cu;
    // 0x35596c: 0xc0e836a  jal         func_3A0DA8
    ctx->pc = 0x35596Cu;
    SET_GPR_U32(ctx, 31, 0x355974u);
    ctx->pc = 0x3A0DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0DA8u, 0x35596Cu, 0x355974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355974u;
label_355974:
    // 0x355974: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x355974u;
    {
        const bool branch_taken_0x355974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x355978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355974u;
        // 0x355978: 0x96640038  lhu         $a0, 0x38($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355974) {
            ctx->pc = 0x355A5Cu;
            goto label_355a5c;
        }
    }
    ctx->pc = 0x35597Cu;
label_35597c:
    // 0x35597c: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x35597cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x355980: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x355980u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355984: 0x8c83489c  lw          $v1, 0x489C($a0)
    ctx->pc = 0x355984u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x51489Cu));
    // 0x355988: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x355988u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x35598c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x35598cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x355990: 0x18400031  blez        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x355990u;
    {
        const bool branch_taken_0x355990 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x355994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355990u;
        // 0x355994: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355990) {
            ctx->pc = 0x355A58u;
            goto label_355a58;
        }
    }
    ctx->pc = 0x355998u;
    // 0x355998: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x355998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x35599c: 0x3c0141cc  lui         $at, 0x41CC
    ctx->pc = 0x35599cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16844 << 16));
    // 0x3559a0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3559a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x3559a4: 0x245ed810  addiu       $fp, $v0, -0x27F0
    ctx->pc = 0x3559a4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957072));
    // 0x3559a8: 0x24170050  addiu       $s7, $zero, 0x50
    ctx->pc = 0x3559a8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x3559ac: 0x241600ff  addiu       $s6, $zero, 0xFF
    ctx->pc = 0x3559acu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3559b0: 0x24110228  addiu       $s1, $zero, 0x228
    ctx->pc = 0x3559b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 552));
    // 0x3559b4: 0x0  nop
    ctx->pc = 0x3559b4u;
    // NOP
label_3559b8:
    // 0x3559b8: 0x8ea4489c  lw          $a0, 0x489C($s5)
    ctx->pc = 0x3559b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18588)));
    // 0x3559bc: 0xc0e409a  jal         func_390268
    ctx->pc = 0x3559BCu;
    SET_GPR_U32(ctx, 31, 0x3559C4u);
    ctx->pc = 0x3559C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3559BCu;
    // 0x3559c0: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x3559BCu, 0x3559C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3559C4u;
label_3559c4:
    // 0x3559c4: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x3559C4u;
    {
        const bool branch_taken_0x3559c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3559C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3559C4u;
        // 0x3559c8: 0x8ea4489c  lw          $a0, 0x489C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3559c4) {
            ctx->pc = 0x355A3Cu;
            goto label_355a3c;
        }
    }
    ctx->pc = 0x3559CCu;
    // 0x3559cc: 0xc0e409a  jal         func_390268
    ctx->pc = 0x3559CCu;
    SET_GPR_U32(ctx, 31, 0x3559D4u);
    ctx->pc = 0x3559D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3559CCu;
    // 0x3559d0: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x3559CCu, 0x3559D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3559D4u;
label_3559d4:
    // 0x3559d4: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x3559D4u;
    SET_GPR_U32(ctx, 31, 0x3559DCu);
    ctx->pc = 0x3559D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3559D4u;
    // 0x3559d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x3559D4u, 0x3559DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3559DCu;
label_3559dc:
    // 0x3559dc: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x3559DCu;
    {
        const bool branch_taken_0x3559dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3559E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3559DCu;
        // 0x3559e0: 0x8ea4489c  lw          $a0, 0x489C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3559dc) {
            ctx->pc = 0x355A3Cu;
            goto label_355a3c;
        }
    }
    ctx->pc = 0x3559E4u;
    // 0x3559e4: 0xc0e409a  jal         func_390268
    ctx->pc = 0x3559E4u;
    SET_GPR_U32(ctx, 31, 0x3559ECu);
    ctx->pc = 0x3559E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3559E4u;
    // 0x3559e8: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x3559E4u, 0x3559ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3559ECu;
label_3559ec:
    // 0x3559ec: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x3559ECu;
    SET_GPR_U32(ctx, 31, 0x3559F4u);
    ctx->pc = 0x3559F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3559ECu;
    // 0x3559f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x3559ECu, 0x3559F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3559F4u;
label_3559f4:
    // 0x3559f4: 0x80430019  lb          $v1, 0x19($v0)
    ctx->pc = 0x3559f4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 25)));
    // 0x3559f8: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x3559f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x3559fc: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3559FCu;
    {
        const bool branch_taken_0x3559fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x355A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3559FCu;
        // 0x355a00: 0x771018  mult        $v0, $v1, $s7 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3559fc) {
            ctx->pc = 0x355A3Cu;
            goto label_355a3c;
        }
    }
    ctx->pc = 0x355A04u;
    // 0x355a04: 0x5e8021  addu        $s0, $v0, $fp
    ctx->pc = 0x355a04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x355a08: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x355a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x355a0c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x355A0Cu;
    {
        const bool branch_taken_0x355a0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x355A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355A0Cu;
        // 0x355a10: 0x8ea3489c  lw          $v1, 0x489C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355a0c) {
            ctx->pc = 0x355A40u;
            goto label_355a40;
        }
    }
    ctx->pc = 0x355A14u;
    // 0x355a14: 0x86820006  lh          $v0, 0x6($s4)
    ctx->pc = 0x355a14u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 6)));
    // 0x355a18: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x355a18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x355a1c: 0x0  nop
    ctx->pc = 0x355a1cu;
    // NOP
    // 0x355a20: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x355a20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x355a24: 0xc10b1c6  jal         func_42C718
    ctx->pc = 0x355A24u;
    SET_GPR_U32(ctx, 31, 0x355A2Cu);
    ctx->pc = 0x355A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355A24u;
    // 0x355a28: 0x46146302  mul.s       $f12, $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x355A24u, 0x355A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355A2Cu;
label_355a2c:
    // 0x355a2c: 0x2c440100  sltiu       $a0, $v0, 0x100
    ctx->pc = 0x355a2cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x355a30: 0x2c0182d  daddu       $v1, $s6, $zero
    ctx->pc = 0x355a30u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355a34: 0x44180b  movn        $v1, $v0, $a0
    ctx->pc = 0x355a34u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x355a38: 0xa2030041  sb          $v1, 0x41($s0)
    ctx->pc = 0x355a38u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 65), (uint8_t)GPR_U32(ctx, 3));
label_355a3c:
    // 0x355a3c: 0x8ea3489c  lw          $v1, 0x489C($s5)
    ctx->pc = 0x355a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18588)));
label_355a40:
    // 0x355a40: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x355a40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x355a44: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x355a44u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x355a48: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x355a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x355a4c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x355a4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x355a50: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x355A50u;
    {
        const bool branch_taken_0x355a50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x355A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355A50u;
        // 0x355a54: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355a50) {
            ctx->pc = 0x3559B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3559b8;
        }
    }
    ctx->pc = 0x355A58u;
label_355a58:
    // 0x355a58: 0x96640038  lhu         $a0, 0x38($s3)
    ctx->pc = 0x355a58u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 56)));
label_355a5c:
    // 0x355a5c: 0x8e630034  lw          $v1, 0x34($s3)
    ctx->pc = 0x355a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x355a60: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x355a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x355a64: 0x9665003a  lhu         $a1, 0x3A($s3)
    ctx->pc = 0x355a64u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 58)));
    // 0x355a68: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x355a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x355a6c: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x355a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x355a70: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x355a70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x355a74: 0xae630034  sw          $v1, 0x34($s3)
    ctx->pc = 0x355a74u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 3));
    // 0x355a78: 0x1440ff59  bnez        $v0, . + 4 + (-0xA7 << 2)
    ctx->pc = 0x355A78u;
    {
        const bool branch_taken_0x355a78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x355A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355A78u;
        // 0x355a7c: 0xa6640038  sh          $a0, 0x38($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 56), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355a78) {
            ctx->pc = 0x3557E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3557e0;
        }
    }
    ctx->pc = 0x355A80u;
    // 0x355a80: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x355a80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_355a84:
    // 0x355a84: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x355a84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x355a88: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x355a88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x355a8c: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x355a8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x355a90: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x355a90u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x355a94: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x355a94u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x355a98: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x355a98u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x355a9c: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x355a9cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x355aa0: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x355aa0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x355aa4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x355aa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x355aa8: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x355aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x355aac: 0x3e00008  jr          $ra
    ctx->pc = 0x355AACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x355AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355AACu;
        // 0x355ab0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x355AACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x355AB4u;
    // 0x355ab4: 0x0  nop
    ctx->pc = 0x355ab4u;
    // NOP
    ctx->pc = 0x355ab8u;
}
