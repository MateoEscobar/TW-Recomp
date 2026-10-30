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

// Function: sub_001467A8
// Address: 0x1467a8 - 0x146b90
void sub_001467A8_0x1467a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001467A8_0x1467a8");
#endif

    switch (ctx->pc) {
        case 0x1467d0u: goto label_1467d0;
        case 0x1467d8u: goto label_1467d8;
        case 0x1467ecu: goto label_1467ec;
        case 0x146810u: goto label_146810;
        case 0x146840u: goto label_146840;
        case 0x1468a0u: goto label_1468a0;
        case 0x146900u: goto label_146900;
        case 0x146960u: goto label_146960;
        case 0x1469c0u: goto label_1469c0;
        case 0x146a20u: goto label_146a20;
        case 0x146a80u: goto label_146a80;
        case 0x146ae0u: goto label_146ae0;
        case 0x146b40u: goto label_146b40;
        default: break;
    }

    ctx->pc = 0x1467a8u;

    // 0x1467a8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1467a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1467ac: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1467acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1467b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1467b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1467b4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1467b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1467b8: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1467b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1467bc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1467bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1467c0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1467c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1467c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1467c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1467c8: 0xc0e4060  jal         func_390180
    ctx->pc = 0x1467C8u;
    SET_GPR_U32(ctx, 31, 0x1467D0u);
    ctx->pc = 0x1467CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1467C8u;
    // 0x1467cc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x1467C8u, 0x1467D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1467D0u;
label_1467d0:
    // 0x1467d0: 0xc08a61a  jal         func_229868
    ctx->pc = 0x1467D0u;
    SET_GPR_U32(ctx, 31, 0x1467D8u);
    ctx->pc = 0x1467D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1467D0u;
    // 0x1467d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x1467D0u, 0x1467D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1467D8u;
label_1467d8:
    // 0x1467d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1467d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1467dc: 0x520000e6  beql        $s0, $zero, . + 4 + (0xE6 << 2)
    ctx->pc = 0x1467DCu;
    {
        const bool branch_taken_0x1467dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1467dc) {
            ctx->pc = 0x1467E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1467DCu;
            // 0x1467e0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x146B78u;
            goto label_146b78;
        }
    }
    ctx->pc = 0x1467E4u;
    // 0x1467e4: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x1467E4u;
    SET_GPR_U32(ctx, 31, 0x1467ECu);
    ctx->pc = 0x1467E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1467E4u;
    // 0x1467e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x1467E4u, 0x1467ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1467ECu;
label_1467ec:
    // 0x1467ec: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x1467ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
    // 0x1467f0: 0x506000e1  beql        $v1, $zero, . + 4 + (0xE1 << 2)
    ctx->pc = 0x1467F0u;
    {
        const bool branch_taken_0x1467f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1467f0) {
            ctx->pc = 0x1467F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1467F0u;
            // 0x1467f4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x146B78u;
            goto label_146b78;
        }
    }
    ctx->pc = 0x1467F8u;
    // 0x1467f8: 0x1a2000de  blez        $s1, . + 4 + (0xDE << 2)
    ctx->pc = 0x1467F8u;
    {
        const bool branch_taken_0x1467f8 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x1467FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1467F8u;
        // 0x1467fc: 0x2a22003a  slti        $v0, $s1, 0x3A (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)58) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1467f8) {
            ctx->pc = 0x146B74u;
            goto label_146b74;
        }
    }
    ctx->pc = 0x146800u;
    // 0x146800: 0x504000dd  beql        $v0, $zero, . + 4 + (0xDD << 2)
    ctx->pc = 0x146800u;
    {
        const bool branch_taken_0x146800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x146800) {
            ctx->pc = 0x146804u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x146800u;
            // 0x146804: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x146B78u;
            goto label_146b78;
        }
    }
    ctx->pc = 0x146808u;
    // 0x146808: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x146808u;
    SET_GPR_U32(ctx, 31, 0x146810u);
    ctx->pc = 0x14680Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146808u;
    // 0x14680c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x146808u, 0x146810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146810u;
label_146810:
    // 0x146810: 0x80480019  lb          $t0, 0x19($v0)
    ctx->pc = 0x146810u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 25)));
    // 0x146814: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x146814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x146818: 0x8c46b740  lw          $a2, -0x48C0($v0)
    ctx->pc = 0x146818u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x50B740u));
    // 0x14681c: 0x10c00015  beqz        $a2, . + 4 + (0x15 << 2)
    ctx->pc = 0x14681Cu;
    {
        const bool branch_taken_0x14681c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x146820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14681Cu;
        // 0x146820: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14681c) {
            ctx->pc = 0x146874u;
            goto label_146874;
        }
    }
    ctx->pc = 0x146824u;
    // 0x146824: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x146824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x146828: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x146828u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x14682c: 0x1022804  sllv        $a1, $v0, $t0
    ctx->pc = 0x14682cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 8) & 0x1F));
    // 0x146830: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x146830u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146834: 0x53027  nor         $a2, $zero, $a1
    ctx->pc = 0x146834u;
    SET_GPR_U64(ctx, 6, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
    // 0x146838: 0x2463dd10  addiu       $v1, $v1, -0x22F0
    ctx->pc = 0x146838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958352));
    // 0x14683c: 0x0  nop
    ctx->pc = 0x14683cu;
    // NOP
label_146840:
    // 0x146840: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x146840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x146844: 0x54510008  bnel        $v0, $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x146844u;
    {
        const bool branch_taken_0x146844 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x146844) {
            ctx->pc = 0x146848u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x146844u;
            // 0x146848: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x146868u;
            goto label_146868;
        }
    }
    ctx->pc = 0x14684Cu;
    // 0x14684c: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x14684Cu;
    {
        const bool branch_taken_0x14684c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x146850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14684Cu;
        // 0x146850: 0x94620000  lhu         $v0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14684c) {
            ctx->pc = 0x14685Cu;
            goto label_14685c;
        }
    }
    ctx->pc = 0x146854u;
    // 0x146854: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x146854u;
    {
        const bool branch_taken_0x146854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146854u;
        // 0x146858: 0x451025  or          $v0, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146854) {
            ctx->pc = 0x146860u;
            goto label_146860;
        }
    }
    ctx->pc = 0x14685Cu;
label_14685c:
    // 0x14685c: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x14685cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_146860:
    // 0x146860: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x146860u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x146864: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x146864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_146868:
    // 0x146868: 0x87102b  sltu        $v0, $a0, $a3
    ctx->pc = 0x146868u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x14686c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x14686Cu;
    {
        const bool branch_taken_0x14686c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x146870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14686Cu;
        // 0x146870: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14686c) {
            ctx->pc = 0x146840u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_146840;
        }
    }
    ctx->pc = 0x146874u;
label_146874:
    // 0x146874: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x146874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x146878: 0x8c46b744  lw          $a2, -0x48BC($v0)
    ctx->pc = 0x146878u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x50B744u));
    // 0x14687c: 0x10c00015  beqz        $a2, . + 4 + (0x15 << 2)
    ctx->pc = 0x14687Cu;
    {
        const bool branch_taken_0x14687c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x146880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14687Cu;
        // 0x146880: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14687c) {
            ctx->pc = 0x1468D4u;
            goto label_1468d4;
        }
    }
    ctx->pc = 0x146884u;
    // 0x146884: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x146884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x146888: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x146888u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x14688c: 0x1022804  sllv        $a1, $v0, $t0
    ctx->pc = 0x14688cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 8) & 0x1F));
    // 0x146890: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x146890u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146894: 0x53027  nor         $a2, $zero, $a1
    ctx->pc = 0x146894u;
    SET_GPR_U64(ctx, 6, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
    // 0x146898: 0x2463ddd0  addiu       $v1, $v1, -0x2230
    ctx->pc = 0x146898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958544));
    // 0x14689c: 0x0  nop
    ctx->pc = 0x14689cu;
    // NOP
label_1468a0:
    // 0x1468a0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1468a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1468a4: 0x54510008  bnel        $v0, $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1468A4u;
    {
        const bool branch_taken_0x1468a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x1468a4) {
            ctx->pc = 0x1468A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1468A4u;
            // 0x1468a8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1468C8u;
            goto label_1468c8;
        }
    }
    ctx->pc = 0x1468ACu;
    // 0x1468ac: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1468ACu;
    {
        const bool branch_taken_0x1468ac = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1468B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1468ACu;
        // 0x1468b0: 0x94620000  lhu         $v0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1468ac) {
            ctx->pc = 0x1468BCu;
            goto label_1468bc;
        }
    }
    ctx->pc = 0x1468B4u;
    // 0x1468b4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1468B4u;
    {
        const bool branch_taken_0x1468b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1468B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1468B4u;
        // 0x1468b8: 0x451025  or          $v0, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1468b4) {
            ctx->pc = 0x1468C0u;
            goto label_1468c0;
        }
    }
    ctx->pc = 0x1468BCu;
label_1468bc:
    // 0x1468bc: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x1468bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_1468c0:
    // 0x1468c0: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x1468c0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1468c4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1468c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1468c8:
    // 0x1468c8: 0x87102b  sltu        $v0, $a0, $a3
    ctx->pc = 0x1468c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1468cc: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1468CCu;
    {
        const bool branch_taken_0x1468cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1468D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1468CCu;
        // 0x1468d0: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1468cc) {
            ctx->pc = 0x1468A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1468a0;
        }
    }
    ctx->pc = 0x1468D4u;
label_1468d4:
    // 0x1468d4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1468d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1468d8: 0x8c46b748  lw          $a2, -0x48B8($v0)
    ctx->pc = 0x1468d8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x50B748u));
    // 0x1468dc: 0x10c00015  beqz        $a2, . + 4 + (0x15 << 2)
    ctx->pc = 0x1468DCu;
    {
        const bool branch_taken_0x1468dc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1468E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1468DCu;
        // 0x1468e0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1468dc) {
            ctx->pc = 0x146934u;
            goto label_146934;
        }
    }
    ctx->pc = 0x1468E4u;
    // 0x1468e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1468e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1468e8: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x1468e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x1468ec: 0x1022804  sllv        $a1, $v0, $t0
    ctx->pc = 0x1468ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 8) & 0x1F));
    // 0x1468f0: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1468f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1468f4: 0x53027  nor         $a2, $zero, $a1
    ctx->pc = 0x1468f4u;
    SET_GPR_U64(ctx, 6, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
    // 0x1468f8: 0x2463de90  addiu       $v1, $v1, -0x2170
    ctx->pc = 0x1468f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958736));
    // 0x1468fc: 0x0  nop
    ctx->pc = 0x1468fcu;
    // NOP
label_146900:
    // 0x146900: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x146900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x146904: 0x54510008  bnel        $v0, $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x146904u;
    {
        const bool branch_taken_0x146904 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x146904) {
            ctx->pc = 0x146908u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x146904u;
            // 0x146908: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x146928u;
            goto label_146928;
        }
    }
    ctx->pc = 0x14690Cu;
    // 0x14690c: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x14690Cu;
    {
        const bool branch_taken_0x14690c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x146910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14690Cu;
        // 0x146910: 0x94620000  lhu         $v0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14690c) {
            ctx->pc = 0x14691Cu;
            goto label_14691c;
        }
    }
    ctx->pc = 0x146914u;
    // 0x146914: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x146914u;
    {
        const bool branch_taken_0x146914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146914u;
        // 0x146918: 0x451025  or          $v0, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146914) {
            ctx->pc = 0x146920u;
            goto label_146920;
        }
    }
    ctx->pc = 0x14691Cu;
label_14691c:
    // 0x14691c: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x14691cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_146920:
    // 0x146920: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x146920u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x146924: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x146924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_146928:
    // 0x146928: 0x87102b  sltu        $v0, $a0, $a3
    ctx->pc = 0x146928u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x14692c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x14692Cu;
    {
        const bool branch_taken_0x14692c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x146930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14692Cu;
        // 0x146930: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14692c) {
            ctx->pc = 0x146900u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_146900;
        }
    }
    ctx->pc = 0x146934u;
label_146934:
    // 0x146934: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x146934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x146938: 0x8c46b74c  lw          $a2, -0x48B4($v0)
    ctx->pc = 0x146938u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x50B74Cu));
    // 0x14693c: 0x10c00015  beqz        $a2, . + 4 + (0x15 << 2)
    ctx->pc = 0x14693Cu;
    {
        const bool branch_taken_0x14693c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x146940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14693Cu;
        // 0x146940: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14693c) {
            ctx->pc = 0x146994u;
            goto label_146994;
        }
    }
    ctx->pc = 0x146944u;
    // 0x146944: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x146944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x146948: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x146948u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x14694c: 0x1022804  sllv        $a1, $v0, $t0
    ctx->pc = 0x14694cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 8) & 0x1F));
    // 0x146950: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x146950u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146954: 0x53027  nor         $a2, $zero, $a1
    ctx->pc = 0x146954u;
    SET_GPR_U64(ctx, 6, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
    // 0x146958: 0x2463def0  addiu       $v1, $v1, -0x2110
    ctx->pc = 0x146958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958832));
    // 0x14695c: 0x0  nop
    ctx->pc = 0x14695cu;
    // NOP
label_146960:
    // 0x146960: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x146960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x146964: 0x54510008  bnel        $v0, $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x146964u;
    {
        const bool branch_taken_0x146964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x146964) {
            ctx->pc = 0x146968u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x146964u;
            // 0x146968: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x146988u;
            goto label_146988;
        }
    }
    ctx->pc = 0x14696Cu;
    // 0x14696c: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x14696Cu;
    {
        const bool branch_taken_0x14696c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x146970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14696Cu;
        // 0x146970: 0x94620000  lhu         $v0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14696c) {
            ctx->pc = 0x14697Cu;
            goto label_14697c;
        }
    }
    ctx->pc = 0x146974u;
    // 0x146974: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x146974u;
    {
        const bool branch_taken_0x146974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146974u;
        // 0x146978: 0x451025  or          $v0, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146974) {
            ctx->pc = 0x146980u;
            goto label_146980;
        }
    }
    ctx->pc = 0x14697Cu;
label_14697c:
    // 0x14697c: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x14697cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_146980:
    // 0x146980: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x146980u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x146984: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x146984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_146988:
    // 0x146988: 0x87102b  sltu        $v0, $a0, $a3
    ctx->pc = 0x146988u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x14698c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x14698Cu;
    {
        const bool branch_taken_0x14698c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x146990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14698Cu;
        // 0x146990: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14698c) {
            ctx->pc = 0x146960u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_146960;
        }
    }
    ctx->pc = 0x146994u;
label_146994:
    // 0x146994: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x146994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x146998: 0x8c46b750  lw          $a2, -0x48B0($v0)
    ctx->pc = 0x146998u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x50B750u));
    // 0x14699c: 0x10c00015  beqz        $a2, . + 4 + (0x15 << 2)
    ctx->pc = 0x14699Cu;
    {
        const bool branch_taken_0x14699c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1469A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14699Cu;
        // 0x1469a0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14699c) {
            ctx->pc = 0x1469F4u;
            goto label_1469f4;
        }
    }
    ctx->pc = 0x1469A4u;
    // 0x1469a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1469a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1469a8: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x1469a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x1469ac: 0x1022804  sllv        $a1, $v0, $t0
    ctx->pc = 0x1469acu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 8) & 0x1F));
    // 0x1469b0: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1469b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1469b4: 0x53027  nor         $a2, $zero, $a1
    ctx->pc = 0x1469b4u;
    SET_GPR_U64(ctx, 6, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
    // 0x1469b8: 0x2463df50  addiu       $v1, $v1, -0x20B0
    ctx->pc = 0x1469b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958928));
    // 0x1469bc: 0x0  nop
    ctx->pc = 0x1469bcu;
    // NOP
label_1469c0:
    // 0x1469c0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1469c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1469c4: 0x54510008  bnel        $v0, $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1469C4u;
    {
        const bool branch_taken_0x1469c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x1469c4) {
            ctx->pc = 0x1469C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1469C4u;
            // 0x1469c8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1469E8u;
            goto label_1469e8;
        }
    }
    ctx->pc = 0x1469CCu;
    // 0x1469cc: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1469CCu;
    {
        const bool branch_taken_0x1469cc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1469D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1469CCu;
        // 0x1469d0: 0x94620000  lhu         $v0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1469cc) {
            ctx->pc = 0x1469DCu;
            goto label_1469dc;
        }
    }
    ctx->pc = 0x1469D4u;
    // 0x1469d4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1469D4u;
    {
        const bool branch_taken_0x1469d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1469D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1469D4u;
        // 0x1469d8: 0x451025  or          $v0, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1469d4) {
            ctx->pc = 0x1469E0u;
            goto label_1469e0;
        }
    }
    ctx->pc = 0x1469DCu;
label_1469dc:
    // 0x1469dc: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x1469dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_1469e0:
    // 0x1469e0: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x1469e0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1469e4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1469e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1469e8:
    // 0x1469e8: 0x87102b  sltu        $v0, $a0, $a3
    ctx->pc = 0x1469e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1469ec: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1469ECu;
    {
        const bool branch_taken_0x1469ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1469F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1469ECu;
        // 0x1469f0: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1469ec) {
            ctx->pc = 0x1469C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1469c0;
        }
    }
    ctx->pc = 0x1469F4u;
label_1469f4:
    // 0x1469f4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1469f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1469f8: 0x8c46b754  lw          $a2, -0x48AC($v0)
    ctx->pc = 0x1469f8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x50B754u));
    // 0x1469fc: 0x10c00015  beqz        $a2, . + 4 + (0x15 << 2)
    ctx->pc = 0x1469FCu;
    {
        const bool branch_taken_0x1469fc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x146A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1469FCu;
        // 0x146a00: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1469fc) {
            ctx->pc = 0x146A54u;
            goto label_146a54;
        }
    }
    ctx->pc = 0x146A04u;
    // 0x146a04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x146a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x146a08: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x146a08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x146a0c: 0x1022804  sllv        $a1, $v0, $t0
    ctx->pc = 0x146a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 8) & 0x1F));
    // 0x146a10: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x146a10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146a14: 0x53027  nor         $a2, $zero, $a1
    ctx->pc = 0x146a14u;
    SET_GPR_U64(ctx, 6, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
    // 0x146a18: 0x2463dfb0  addiu       $v1, $v1, -0x2050
    ctx->pc = 0x146a18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959024));
    // 0x146a1c: 0x0  nop
    ctx->pc = 0x146a1cu;
    // NOP
label_146a20:
    // 0x146a20: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x146a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x146a24: 0x54510008  bnel        $v0, $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x146A24u;
    {
        const bool branch_taken_0x146a24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x146a24) {
            ctx->pc = 0x146A28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x146A24u;
            // 0x146a28: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x146A48u;
            goto label_146a48;
        }
    }
    ctx->pc = 0x146A2Cu;
    // 0x146a2c: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x146A2Cu;
    {
        const bool branch_taken_0x146a2c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x146A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146A2Cu;
        // 0x146a30: 0x94620000  lhu         $v0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146a2c) {
            ctx->pc = 0x146A3Cu;
            goto label_146a3c;
        }
    }
    ctx->pc = 0x146A34u;
    // 0x146a34: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x146A34u;
    {
        const bool branch_taken_0x146a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146A34u;
        // 0x146a38: 0x451025  or          $v0, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146a34) {
            ctx->pc = 0x146A40u;
            goto label_146a40;
        }
    }
    ctx->pc = 0x146A3Cu;
label_146a3c:
    // 0x146a3c: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x146a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_146a40:
    // 0x146a40: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x146a40u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x146a44: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x146a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_146a48:
    // 0x146a48: 0x87102b  sltu        $v0, $a0, $a3
    ctx->pc = 0x146a48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x146a4c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x146A4Cu;
    {
        const bool branch_taken_0x146a4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x146A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146A4Cu;
        // 0x146a50: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146a4c) {
            ctx->pc = 0x146A20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_146a20;
        }
    }
    ctx->pc = 0x146A54u;
label_146a54:
    // 0x146a54: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x146a54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x146a58: 0x8c46b758  lw          $a2, -0x48A8($v0)
    ctx->pc = 0x146a58u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x50B758u));
    // 0x146a5c: 0x10c00015  beqz        $a2, . + 4 + (0x15 << 2)
    ctx->pc = 0x146A5Cu;
    {
        const bool branch_taken_0x146a5c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x146A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146A5Cu;
        // 0x146a60: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146a5c) {
            ctx->pc = 0x146AB4u;
            goto label_146ab4;
        }
    }
    ctx->pc = 0x146A64u;
    // 0x146a64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x146a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x146a68: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x146a68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x146a6c: 0x1022804  sllv        $a1, $v0, $t0
    ctx->pc = 0x146a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 8) & 0x1F));
    // 0x146a70: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x146a70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146a74: 0x53027  nor         $a2, $zero, $a1
    ctx->pc = 0x146a74u;
    SET_GPR_U64(ctx, 6, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
    // 0x146a78: 0x2463e010  addiu       $v1, $v1, -0x1FF0
    ctx->pc = 0x146a78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959120));
    // 0x146a7c: 0x0  nop
    ctx->pc = 0x146a7cu;
    // NOP
label_146a80:
    // 0x146a80: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x146a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x146a84: 0x54510008  bnel        $v0, $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x146A84u;
    {
        const bool branch_taken_0x146a84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x146a84) {
            ctx->pc = 0x146A88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x146A84u;
            // 0x146a88: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x146AA8u;
            goto label_146aa8;
        }
    }
    ctx->pc = 0x146A8Cu;
    // 0x146a8c: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x146A8Cu;
    {
        const bool branch_taken_0x146a8c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x146A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146A8Cu;
        // 0x146a90: 0x94620000  lhu         $v0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146a8c) {
            ctx->pc = 0x146A9Cu;
            goto label_146a9c;
        }
    }
    ctx->pc = 0x146A94u;
    // 0x146a94: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x146A94u;
    {
        const bool branch_taken_0x146a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146A94u;
        // 0x146a98: 0x451025  or          $v0, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146a94) {
            ctx->pc = 0x146AA0u;
            goto label_146aa0;
        }
    }
    ctx->pc = 0x146A9Cu;
label_146a9c:
    // 0x146a9c: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x146a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_146aa0:
    // 0x146aa0: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x146aa0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x146aa4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x146aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_146aa8:
    // 0x146aa8: 0x87102b  sltu        $v0, $a0, $a3
    ctx->pc = 0x146aa8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x146aac: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x146AACu;
    {
        const bool branch_taken_0x146aac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x146AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146AACu;
        // 0x146ab0: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146aac) {
            ctx->pc = 0x146A80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_146a80;
        }
    }
    ctx->pc = 0x146AB4u;
label_146ab4:
    // 0x146ab4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x146ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x146ab8: 0x8c46b75c  lw          $a2, -0x48A4($v0)
    ctx->pc = 0x146ab8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x50B75Cu));
    // 0x146abc: 0x10c00015  beqz        $a2, . + 4 + (0x15 << 2)
    ctx->pc = 0x146ABCu;
    {
        const bool branch_taken_0x146abc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x146AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146ABCu;
        // 0x146ac0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146abc) {
            ctx->pc = 0x146B14u;
            goto label_146b14;
        }
    }
    ctx->pc = 0x146AC4u;
    // 0x146ac4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x146ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x146ac8: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x146ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x146acc: 0x1022804  sllv        $a1, $v0, $t0
    ctx->pc = 0x146accu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 8) & 0x1F));
    // 0x146ad0: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x146ad0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146ad4: 0x53027  nor         $a2, $zero, $a1
    ctx->pc = 0x146ad4u;
    SET_GPR_U64(ctx, 6, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
    // 0x146ad8: 0x2463e070  addiu       $v1, $v1, -0x1F90
    ctx->pc = 0x146ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959216));
    // 0x146adc: 0x0  nop
    ctx->pc = 0x146adcu;
    // NOP
label_146ae0:
    // 0x146ae0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x146ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x146ae4: 0x54510008  bnel        $v0, $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x146AE4u;
    {
        const bool branch_taken_0x146ae4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x146ae4) {
            ctx->pc = 0x146AE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x146AE4u;
            // 0x146ae8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x146B08u;
            goto label_146b08;
        }
    }
    ctx->pc = 0x146AECu;
    // 0x146aec: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x146AECu;
    {
        const bool branch_taken_0x146aec = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x146AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146AECu;
        // 0x146af0: 0x94620000  lhu         $v0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146aec) {
            ctx->pc = 0x146AFCu;
            goto label_146afc;
        }
    }
    ctx->pc = 0x146AF4u;
    // 0x146af4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x146AF4u;
    {
        const bool branch_taken_0x146af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146AF4u;
        // 0x146af8: 0x451025  or          $v0, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146af4) {
            ctx->pc = 0x146B00u;
            goto label_146b00;
        }
    }
    ctx->pc = 0x146AFCu;
label_146afc:
    // 0x146afc: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x146afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_146b00:
    // 0x146b00: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x146b00u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x146b04: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x146b04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_146b08:
    // 0x146b08: 0x87102b  sltu        $v0, $a0, $a3
    ctx->pc = 0x146b08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x146b0c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x146B0Cu;
    {
        const bool branch_taken_0x146b0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x146B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146B0Cu;
        // 0x146b10: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146b0c) {
            ctx->pc = 0x146AE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_146ae0;
        }
    }
    ctx->pc = 0x146B14u;
label_146b14:
    // 0x146b14: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x146b14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x146b18: 0x8c46b760  lw          $a2, -0x48A0($v0)
    ctx->pc = 0x146b18u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x50B760u));
    // 0x146b1c: 0x10c00015  beqz        $a2, . + 4 + (0x15 << 2)
    ctx->pc = 0x146B1Cu;
    {
        const bool branch_taken_0x146b1c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x146B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146B1Cu;
        // 0x146b20: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146b1c) {
            ctx->pc = 0x146B74u;
            goto label_146b74;
        }
    }
    ctx->pc = 0x146B24u;
    // 0x146b24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x146b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x146b28: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x146b28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x146b2c: 0x1022804  sllv        $a1, $v0, $t0
    ctx->pc = 0x146b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 8) & 0x1F));
    // 0x146b30: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x146b30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146b34: 0x53027  nor         $a2, $zero, $a1
    ctx->pc = 0x146b34u;
    SET_GPR_U64(ctx, 6, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
    // 0x146b38: 0x2463e130  addiu       $v1, $v1, -0x1ED0
    ctx->pc = 0x146b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959408));
    // 0x146b3c: 0x0  nop
    ctx->pc = 0x146b3cu;
    // NOP
label_146b40:
    // 0x146b40: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x146b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x146b44: 0x54510008  bnel        $v0, $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x146B44u;
    {
        const bool branch_taken_0x146b44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x146b44) {
            ctx->pc = 0x146B48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x146B44u;
            // 0x146b48: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x146B68u;
            goto label_146b68;
        }
    }
    ctx->pc = 0x146B4Cu;
    // 0x146b4c: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x146B4Cu;
    {
        const bool branch_taken_0x146b4c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x146B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146B4Cu;
        // 0x146b50: 0x94620000  lhu         $v0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146b4c) {
            ctx->pc = 0x146B5Cu;
            goto label_146b5c;
        }
    }
    ctx->pc = 0x146B54u;
    // 0x146b54: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x146B54u;
    {
        const bool branch_taken_0x146b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146B54u;
        // 0x146b58: 0x451025  or          $v0, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146b54) {
            ctx->pc = 0x146B60u;
            goto label_146b60;
        }
    }
    ctx->pc = 0x146B5Cu;
label_146b5c:
    // 0x146b5c: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x146b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_146b60:
    // 0x146b60: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x146b60u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x146b64: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x146b64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_146b68:
    // 0x146b68: 0x87102b  sltu        $v0, $a0, $a3
    ctx->pc = 0x146b68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x146b6c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x146B6Cu;
    {
        const bool branch_taken_0x146b6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x146B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146B6Cu;
        // 0x146b70: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146b6c) {
            ctx->pc = 0x146B40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_146b40;
        }
    }
    ctx->pc = 0x146B74u;
label_146b74:
    // 0x146b74: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x146b74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_146b78:
    // 0x146b78: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x146b78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x146b7c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x146b7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x146b80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x146b80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x146b84: 0x3e00008  jr          $ra
    ctx->pc = 0x146B84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x146B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146B84u;
        // 0x146b88: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x146B84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x146B8Cu;
    // 0x146b8c: 0x0  nop
    ctx->pc = 0x146b8cu;
    // NOP
    ctx->pc = 0x146b90u;
}
