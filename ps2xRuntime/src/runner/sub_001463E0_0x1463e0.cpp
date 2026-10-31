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

// Function: sub_001463E0
// Address: 0x1463e0 - 0x1467a8
void sub_001463E0_0x1463e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001463E0_0x1463e0");
#endif

    switch (ctx->pc) {
        case 0x146400u: goto label_146400;
        case 0x146408u: goto label_146408;
        case 0x14641cu: goto label_14641c;
        case 0x146430u: goto label_146430;
        case 0x146460u: goto label_146460;
        case 0x1464c0u: goto label_1464c0;
        case 0x146520u: goto label_146520;
        case 0x146580u: goto label_146580;
        case 0x1465e0u: goto label_1465e0;
        case 0x146640u: goto label_146640;
        case 0x1466a0u: goto label_1466a0;
        case 0x146700u: goto label_146700;
        case 0x146760u: goto label_146760;
        default: break;
    }

    ctx->pc = 0x1463e0u;

    // 0x1463e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1463e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1463e4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1463e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1463e8: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1463e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1463ec: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1463ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1463f0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1463f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1463f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1463f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1463f8: 0xc0e4060  jal         func_390180
    ctx->pc = 0x1463F8u;
    SET_GPR_U32(ctx, 31, 0x146400u);
    ctx->pc = 0x1463FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1463F8u;
    // 0x1463fc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x1463F8u, 0x146400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146400u;
label_146400:
    // 0x146400: 0xc08a61a  jal         func_229868
    ctx->pc = 0x146400u;
    SET_GPR_U32(ctx, 31, 0x146408u);
    ctx->pc = 0x146404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146400u;
    // 0x146404: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x146400u, 0x146408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146408u;
label_146408:
    // 0x146408: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x146408u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14640c: 0x520000e2  beql        $s0, $zero, . + 4 + (0xE2 << 2)
    ctx->pc = 0x14640Cu;
    {
        const bool branch_taken_0x14640c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x14640c) {
            ctx->pc = 0x146410u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14640Cu;
            // 0x146410: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x146798u;
            goto label_146798;
        }
    }
    ctx->pc = 0x146414u;
    // 0x146414: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x146414u;
    SET_GPR_U32(ctx, 31, 0x14641Cu);
    ctx->pc = 0x146418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146414u;
    // 0x146418: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x146414u, 0x14641Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14641Cu;
label_14641c:
    // 0x14641c: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x14641cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
    // 0x146420: 0x506000dd  beql        $v1, $zero, . + 4 + (0xDD << 2)
    ctx->pc = 0x146420u;
    {
        const bool branch_taken_0x146420 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x146420) {
            ctx->pc = 0x146424u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x146420u;
            // 0x146424: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x146798u;
            goto label_146798;
        }
    }
    ctx->pc = 0x146428u;
    // 0x146428: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x146428u;
    SET_GPR_U32(ctx, 31, 0x146430u);
    ctx->pc = 0x14642Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146428u;
    // 0x14642c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x146428u, 0x146430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146430u;
label_146430:
    // 0x146430: 0x80480019  lb          $t0, 0x19($v0)
    ctx->pc = 0x146430u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 25)));
    // 0x146434: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x146434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x146438: 0x8c46b740  lw          $a2, -0x48C0($v0)
    ctx->pc = 0x146438u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x50B740u));
    // 0x14643c: 0x10c00015  beqz        $a2, . + 4 + (0x15 << 2)
    ctx->pc = 0x14643Cu;
    {
        const bool branch_taken_0x14643c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x146440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14643Cu;
        // 0x146440: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14643c) {
            ctx->pc = 0x146494u;
            goto label_146494;
        }
    }
    ctx->pc = 0x146444u;
    // 0x146444: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x146444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x146448: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x146448u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x14644c: 0x1022804  sllv        $a1, $v0, $t0
    ctx->pc = 0x14644cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 8) & 0x1F));
    // 0x146450: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x146450u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146454: 0x53027  nor         $a2, $zero, $a1
    ctx->pc = 0x146454u;
    SET_GPR_U64(ctx, 6, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
    // 0x146458: 0x2463dd10  addiu       $v1, $v1, -0x22F0
    ctx->pc = 0x146458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958352));
    // 0x14645c: 0x0  nop
    ctx->pc = 0x14645cu;
    // NOP
label_146460:
    // 0x146460: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x146460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x146464: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x146464u;
    {
        const bool branch_taken_0x146464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x146464) {
            ctx->pc = 0x146468u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x146464u;
            // 0x146468: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x146488u;
            goto label_146488;
        }
    }
    ctx->pc = 0x14646Cu;
    // 0x14646c: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14646Cu;
    {
        const bool branch_taken_0x14646c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x146470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14646Cu;
        // 0x146470: 0x94620000  lhu         $v0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14646c) {
            ctx->pc = 0x14647Cu;
            goto label_14647c;
        }
    }
    ctx->pc = 0x146474u;
    // 0x146474: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x146474u;
    {
        const bool branch_taken_0x146474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146474u;
        // 0x146478: 0x451025  or          $v0, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146474) {
            ctx->pc = 0x146480u;
            goto label_146480;
        }
    }
    ctx->pc = 0x14647Cu;
label_14647c:
    // 0x14647c: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x14647cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_146480:
    // 0x146480: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x146480u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x146484: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x146484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_146488:
    // 0x146488: 0x87102b  sltu        $v0, $a0, $a3
    ctx->pc = 0x146488u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x14648c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x14648Cu;
    {
        const bool branch_taken_0x14648c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x146490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14648Cu;
        // 0x146490: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14648c) {
            ctx->pc = 0x146460u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_146460;
        }
    }
    ctx->pc = 0x146494u;
label_146494:
    // 0x146494: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x146494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x146498: 0x8c46b744  lw          $a2, -0x48BC($v0)
    ctx->pc = 0x146498u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x50B744u));
    // 0x14649c: 0x10c00015  beqz        $a2, . + 4 + (0x15 << 2)
    ctx->pc = 0x14649Cu;
    {
        const bool branch_taken_0x14649c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1464A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14649Cu;
        // 0x1464a0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14649c) {
            ctx->pc = 0x1464F4u;
            goto label_1464f4;
        }
    }
    ctx->pc = 0x1464A4u;
    // 0x1464a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1464a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1464a8: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x1464a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x1464ac: 0x1022804  sllv        $a1, $v0, $t0
    ctx->pc = 0x1464acu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 8) & 0x1F));
    // 0x1464b0: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1464b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1464b4: 0x53027  nor         $a2, $zero, $a1
    ctx->pc = 0x1464b4u;
    SET_GPR_U64(ctx, 6, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
    // 0x1464b8: 0x2463ddd0  addiu       $v1, $v1, -0x2230
    ctx->pc = 0x1464b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958544));
    // 0x1464bc: 0x0  nop
    ctx->pc = 0x1464bcu;
    // NOP
label_1464c0:
    // 0x1464c0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1464c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1464c4: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1464C4u;
    {
        const bool branch_taken_0x1464c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1464c4) {
            ctx->pc = 0x1464C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1464C4u;
            // 0x1464c8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1464E8u;
            goto label_1464e8;
        }
    }
    ctx->pc = 0x1464CCu;
    // 0x1464cc: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1464CCu;
    {
        const bool branch_taken_0x1464cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1464D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1464CCu;
        // 0x1464d0: 0x94620000  lhu         $v0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1464cc) {
            ctx->pc = 0x1464DCu;
            goto label_1464dc;
        }
    }
    ctx->pc = 0x1464D4u;
    // 0x1464d4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1464D4u;
    {
        const bool branch_taken_0x1464d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1464D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1464D4u;
        // 0x1464d8: 0x451025  or          $v0, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1464d4) {
            ctx->pc = 0x1464E0u;
            goto label_1464e0;
        }
    }
    ctx->pc = 0x1464DCu;
label_1464dc:
    // 0x1464dc: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x1464dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_1464e0:
    // 0x1464e0: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x1464e0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1464e4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1464e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1464e8:
    // 0x1464e8: 0x87102b  sltu        $v0, $a0, $a3
    ctx->pc = 0x1464e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1464ec: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1464ECu;
    {
        const bool branch_taken_0x1464ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1464F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1464ECu;
        // 0x1464f0: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1464ec) {
            ctx->pc = 0x1464C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1464c0;
        }
    }
    ctx->pc = 0x1464F4u;
label_1464f4:
    // 0x1464f4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1464f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1464f8: 0x8c46b748  lw          $a2, -0x48B8($v0)
    ctx->pc = 0x1464f8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x50B748u));
    // 0x1464fc: 0x10c00015  beqz        $a2, . + 4 + (0x15 << 2)
    ctx->pc = 0x1464FCu;
    {
        const bool branch_taken_0x1464fc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x146500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1464FCu;
        // 0x146500: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1464fc) {
            ctx->pc = 0x146554u;
            goto label_146554;
        }
    }
    ctx->pc = 0x146504u;
    // 0x146504: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x146504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x146508: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x146508u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x14650c: 0x1022804  sllv        $a1, $v0, $t0
    ctx->pc = 0x14650cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 8) & 0x1F));
    // 0x146510: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x146510u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146514: 0x53027  nor         $a2, $zero, $a1
    ctx->pc = 0x146514u;
    SET_GPR_U64(ctx, 6, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
    // 0x146518: 0x2463de90  addiu       $v1, $v1, -0x2170
    ctx->pc = 0x146518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958736));
    // 0x14651c: 0x0  nop
    ctx->pc = 0x14651cu;
    // NOP
label_146520:
    // 0x146520: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x146520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x146524: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x146524u;
    {
        const bool branch_taken_0x146524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x146524) {
            ctx->pc = 0x146528u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x146524u;
            // 0x146528: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x146548u;
            goto label_146548;
        }
    }
    ctx->pc = 0x14652Cu;
    // 0x14652c: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14652Cu;
    {
        const bool branch_taken_0x14652c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x146530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14652Cu;
        // 0x146530: 0x94620000  lhu         $v0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14652c) {
            ctx->pc = 0x14653Cu;
            goto label_14653c;
        }
    }
    ctx->pc = 0x146534u;
    // 0x146534: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x146534u;
    {
        const bool branch_taken_0x146534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146534u;
        // 0x146538: 0x451025  or          $v0, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146534) {
            ctx->pc = 0x146540u;
            goto label_146540;
        }
    }
    ctx->pc = 0x14653Cu;
label_14653c:
    // 0x14653c: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x14653cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_146540:
    // 0x146540: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x146540u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x146544: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x146544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_146548:
    // 0x146548: 0x87102b  sltu        $v0, $a0, $a3
    ctx->pc = 0x146548u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x14654c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x14654Cu;
    {
        const bool branch_taken_0x14654c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x146550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14654Cu;
        // 0x146550: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14654c) {
            ctx->pc = 0x146520u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_146520;
        }
    }
    ctx->pc = 0x146554u;
label_146554:
    // 0x146554: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x146554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x146558: 0x8c46b74c  lw          $a2, -0x48B4($v0)
    ctx->pc = 0x146558u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x50B74Cu));
    // 0x14655c: 0x10c00015  beqz        $a2, . + 4 + (0x15 << 2)
    ctx->pc = 0x14655Cu;
    {
        const bool branch_taken_0x14655c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x146560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14655Cu;
        // 0x146560: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14655c) {
            ctx->pc = 0x1465B4u;
            goto label_1465b4;
        }
    }
    ctx->pc = 0x146564u;
    // 0x146564: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x146564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x146568: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x146568u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x14656c: 0x1022804  sllv        $a1, $v0, $t0
    ctx->pc = 0x14656cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 8) & 0x1F));
    // 0x146570: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x146570u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146574: 0x53027  nor         $a2, $zero, $a1
    ctx->pc = 0x146574u;
    SET_GPR_U64(ctx, 6, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
    // 0x146578: 0x2463def0  addiu       $v1, $v1, -0x2110
    ctx->pc = 0x146578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958832));
    // 0x14657c: 0x0  nop
    ctx->pc = 0x14657cu;
    // NOP
label_146580:
    // 0x146580: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x146580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x146584: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x146584u;
    {
        const bool branch_taken_0x146584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x146584) {
            ctx->pc = 0x146588u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x146584u;
            // 0x146588: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1465A8u;
            goto label_1465a8;
        }
    }
    ctx->pc = 0x14658Cu;
    // 0x14658c: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14658Cu;
    {
        const bool branch_taken_0x14658c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x146590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14658Cu;
        // 0x146590: 0x94620000  lhu         $v0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14658c) {
            ctx->pc = 0x14659Cu;
            goto label_14659c;
        }
    }
    ctx->pc = 0x146594u;
    // 0x146594: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x146594u;
    {
        const bool branch_taken_0x146594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146594u;
        // 0x146598: 0x451025  or          $v0, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146594) {
            ctx->pc = 0x1465A0u;
            goto label_1465a0;
        }
    }
    ctx->pc = 0x14659Cu;
label_14659c:
    // 0x14659c: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x14659cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_1465a0:
    // 0x1465a0: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x1465a0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1465a4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1465a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1465a8:
    // 0x1465a8: 0x87102b  sltu        $v0, $a0, $a3
    ctx->pc = 0x1465a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1465ac: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1465ACu;
    {
        const bool branch_taken_0x1465ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1465B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1465ACu;
        // 0x1465b0: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1465ac) {
            ctx->pc = 0x146580u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_146580;
        }
    }
    ctx->pc = 0x1465B4u;
label_1465b4:
    // 0x1465b4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1465b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1465b8: 0x8c46b750  lw          $a2, -0x48B0($v0)
    ctx->pc = 0x1465b8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x50B750u));
    // 0x1465bc: 0x10c00015  beqz        $a2, . + 4 + (0x15 << 2)
    ctx->pc = 0x1465BCu;
    {
        const bool branch_taken_0x1465bc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1465C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1465BCu;
        // 0x1465c0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1465bc) {
            ctx->pc = 0x146614u;
            goto label_146614;
        }
    }
    ctx->pc = 0x1465C4u;
    // 0x1465c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1465c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1465c8: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x1465c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x1465cc: 0x1022804  sllv        $a1, $v0, $t0
    ctx->pc = 0x1465ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 8) & 0x1F));
    // 0x1465d0: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1465d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1465d4: 0x53027  nor         $a2, $zero, $a1
    ctx->pc = 0x1465d4u;
    SET_GPR_U64(ctx, 6, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
    // 0x1465d8: 0x2463df50  addiu       $v1, $v1, -0x20B0
    ctx->pc = 0x1465d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958928));
    // 0x1465dc: 0x0  nop
    ctx->pc = 0x1465dcu;
    // NOP
label_1465e0:
    // 0x1465e0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1465e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1465e4: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1465E4u;
    {
        const bool branch_taken_0x1465e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1465e4) {
            ctx->pc = 0x1465E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1465E4u;
            // 0x1465e8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x146608u;
            goto label_146608;
        }
    }
    ctx->pc = 0x1465ECu;
    // 0x1465ec: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1465ECu;
    {
        const bool branch_taken_0x1465ec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1465F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1465ECu;
        // 0x1465f0: 0x94620000  lhu         $v0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1465ec) {
            ctx->pc = 0x1465FCu;
            goto label_1465fc;
        }
    }
    ctx->pc = 0x1465F4u;
    // 0x1465f4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1465F4u;
    {
        const bool branch_taken_0x1465f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1465F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1465F4u;
        // 0x1465f8: 0x451025  or          $v0, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1465f4) {
            ctx->pc = 0x146600u;
            goto label_146600;
        }
    }
    ctx->pc = 0x1465FCu;
label_1465fc:
    // 0x1465fc: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x1465fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_146600:
    // 0x146600: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x146600u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x146604: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x146604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_146608:
    // 0x146608: 0x87102b  sltu        $v0, $a0, $a3
    ctx->pc = 0x146608u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x14660c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x14660Cu;
    {
        const bool branch_taken_0x14660c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x146610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14660Cu;
        // 0x146610: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14660c) {
            ctx->pc = 0x1465E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1465e0;
        }
    }
    ctx->pc = 0x146614u;
label_146614:
    // 0x146614: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x146614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x146618: 0x8c46b754  lw          $a2, -0x48AC($v0)
    ctx->pc = 0x146618u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x50B754u));
    // 0x14661c: 0x10c00015  beqz        $a2, . + 4 + (0x15 << 2)
    ctx->pc = 0x14661Cu;
    {
        const bool branch_taken_0x14661c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x146620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14661Cu;
        // 0x146620: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14661c) {
            ctx->pc = 0x146674u;
            goto label_146674;
        }
    }
    ctx->pc = 0x146624u;
    // 0x146624: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x146624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x146628: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x146628u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x14662c: 0x1022804  sllv        $a1, $v0, $t0
    ctx->pc = 0x14662cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 8) & 0x1F));
    // 0x146630: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x146630u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146634: 0x53027  nor         $a2, $zero, $a1
    ctx->pc = 0x146634u;
    SET_GPR_U64(ctx, 6, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
    // 0x146638: 0x2463dfb0  addiu       $v1, $v1, -0x2050
    ctx->pc = 0x146638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959024));
    // 0x14663c: 0x0  nop
    ctx->pc = 0x14663cu;
    // NOP
label_146640:
    // 0x146640: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x146640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x146644: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x146644u;
    {
        const bool branch_taken_0x146644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x146644) {
            ctx->pc = 0x146648u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x146644u;
            // 0x146648: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x146668u;
            goto label_146668;
        }
    }
    ctx->pc = 0x14664Cu;
    // 0x14664c: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14664Cu;
    {
        const bool branch_taken_0x14664c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x146650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14664Cu;
        // 0x146650: 0x94620000  lhu         $v0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14664c) {
            ctx->pc = 0x14665Cu;
            goto label_14665c;
        }
    }
    ctx->pc = 0x146654u;
    // 0x146654: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x146654u;
    {
        const bool branch_taken_0x146654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146654u;
        // 0x146658: 0x451025  or          $v0, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146654) {
            ctx->pc = 0x146660u;
            goto label_146660;
        }
    }
    ctx->pc = 0x14665Cu;
label_14665c:
    // 0x14665c: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x14665cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_146660:
    // 0x146660: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x146660u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x146664: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x146664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_146668:
    // 0x146668: 0x87102b  sltu        $v0, $a0, $a3
    ctx->pc = 0x146668u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x14666c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x14666Cu;
    {
        const bool branch_taken_0x14666c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x146670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14666Cu;
        // 0x146670: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14666c) {
            ctx->pc = 0x146640u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_146640;
        }
    }
    ctx->pc = 0x146674u;
label_146674:
    // 0x146674: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x146674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x146678: 0x8c46b758  lw          $a2, -0x48A8($v0)
    ctx->pc = 0x146678u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x50B758u));
    // 0x14667c: 0x10c00015  beqz        $a2, . + 4 + (0x15 << 2)
    ctx->pc = 0x14667Cu;
    {
        const bool branch_taken_0x14667c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x146680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14667Cu;
        // 0x146680: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14667c) {
            ctx->pc = 0x1466D4u;
            goto label_1466d4;
        }
    }
    ctx->pc = 0x146684u;
    // 0x146684: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x146684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x146688: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x146688u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x14668c: 0x1022804  sllv        $a1, $v0, $t0
    ctx->pc = 0x14668cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 8) & 0x1F));
    // 0x146690: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x146690u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146694: 0x53027  nor         $a2, $zero, $a1
    ctx->pc = 0x146694u;
    SET_GPR_U64(ctx, 6, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
    // 0x146698: 0x2463e010  addiu       $v1, $v1, -0x1FF0
    ctx->pc = 0x146698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959120));
    // 0x14669c: 0x0  nop
    ctx->pc = 0x14669cu;
    // NOP
label_1466a0:
    // 0x1466a0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1466a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1466a4: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1466A4u;
    {
        const bool branch_taken_0x1466a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1466a4) {
            ctx->pc = 0x1466A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1466A4u;
            // 0x1466a8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1466C8u;
            goto label_1466c8;
        }
    }
    ctx->pc = 0x1466ACu;
    // 0x1466ac: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1466ACu;
    {
        const bool branch_taken_0x1466ac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1466B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1466ACu;
        // 0x1466b0: 0x94620000  lhu         $v0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1466ac) {
            ctx->pc = 0x1466BCu;
            goto label_1466bc;
        }
    }
    ctx->pc = 0x1466B4u;
    // 0x1466b4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1466B4u;
    {
        const bool branch_taken_0x1466b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1466B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1466B4u;
        // 0x1466b8: 0x451025  or          $v0, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1466b4) {
            ctx->pc = 0x1466C0u;
            goto label_1466c0;
        }
    }
    ctx->pc = 0x1466BCu;
label_1466bc:
    // 0x1466bc: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x1466bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_1466c0:
    // 0x1466c0: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x1466c0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1466c4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1466c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1466c8:
    // 0x1466c8: 0x87102b  sltu        $v0, $a0, $a3
    ctx->pc = 0x1466c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1466cc: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1466CCu;
    {
        const bool branch_taken_0x1466cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1466D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1466CCu;
        // 0x1466d0: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1466cc) {
            ctx->pc = 0x1466A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1466a0;
        }
    }
    ctx->pc = 0x1466D4u;
label_1466d4:
    // 0x1466d4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1466d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1466d8: 0x8c46b75c  lw          $a2, -0x48A4($v0)
    ctx->pc = 0x1466d8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x50B75Cu));
    // 0x1466dc: 0x10c00015  beqz        $a2, . + 4 + (0x15 << 2)
    ctx->pc = 0x1466DCu;
    {
        const bool branch_taken_0x1466dc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1466E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1466DCu;
        // 0x1466e0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1466dc) {
            ctx->pc = 0x146734u;
            goto label_146734;
        }
    }
    ctx->pc = 0x1466E4u;
    // 0x1466e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1466e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1466e8: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x1466e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x1466ec: 0x1022804  sllv        $a1, $v0, $t0
    ctx->pc = 0x1466ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 8) & 0x1F));
    // 0x1466f0: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1466f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1466f4: 0x53027  nor         $a2, $zero, $a1
    ctx->pc = 0x1466f4u;
    SET_GPR_U64(ctx, 6, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
    // 0x1466f8: 0x2463e070  addiu       $v1, $v1, -0x1F90
    ctx->pc = 0x1466f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959216));
    // 0x1466fc: 0x0  nop
    ctx->pc = 0x1466fcu;
    // NOP
label_146700:
    // 0x146700: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x146700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x146704: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x146704u;
    {
        const bool branch_taken_0x146704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x146704) {
            ctx->pc = 0x146708u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x146704u;
            // 0x146708: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x146728u;
            goto label_146728;
        }
    }
    ctx->pc = 0x14670Cu;
    // 0x14670c: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14670Cu;
    {
        const bool branch_taken_0x14670c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x146710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14670Cu;
        // 0x146710: 0x94620000  lhu         $v0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14670c) {
            ctx->pc = 0x14671Cu;
            goto label_14671c;
        }
    }
    ctx->pc = 0x146714u;
    // 0x146714: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x146714u;
    {
        const bool branch_taken_0x146714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146714u;
        // 0x146718: 0x451025  or          $v0, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146714) {
            ctx->pc = 0x146720u;
            goto label_146720;
        }
    }
    ctx->pc = 0x14671Cu;
label_14671c:
    // 0x14671c: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x14671cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_146720:
    // 0x146720: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x146720u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x146724: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x146724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_146728:
    // 0x146728: 0x87102b  sltu        $v0, $a0, $a3
    ctx->pc = 0x146728u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x14672c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x14672Cu;
    {
        const bool branch_taken_0x14672c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x146730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14672Cu;
        // 0x146730: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14672c) {
            ctx->pc = 0x146700u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_146700;
        }
    }
    ctx->pc = 0x146734u;
label_146734:
    // 0x146734: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x146734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x146738: 0x8c46b760  lw          $a2, -0x48A0($v0)
    ctx->pc = 0x146738u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x50B760u));
    // 0x14673c: 0x10c00015  beqz        $a2, . + 4 + (0x15 << 2)
    ctx->pc = 0x14673Cu;
    {
        const bool branch_taken_0x14673c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x146740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14673Cu;
        // 0x146740: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14673c) {
            ctx->pc = 0x146794u;
            goto label_146794;
        }
    }
    ctx->pc = 0x146744u;
    // 0x146744: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x146744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x146748: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x146748u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x14674c: 0x1022804  sllv        $a1, $v0, $t0
    ctx->pc = 0x14674cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 8) & 0x1F));
    // 0x146750: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x146750u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146754: 0x53027  nor         $a2, $zero, $a1
    ctx->pc = 0x146754u;
    SET_GPR_U64(ctx, 6, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
    // 0x146758: 0x2463e130  addiu       $v1, $v1, -0x1ED0
    ctx->pc = 0x146758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959408));
    // 0x14675c: 0x0  nop
    ctx->pc = 0x14675cu;
    // NOP
label_146760:
    // 0x146760: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x146760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x146764: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x146764u;
    {
        const bool branch_taken_0x146764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x146764) {
            ctx->pc = 0x146768u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x146764u;
            // 0x146768: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x146788u;
            goto label_146788;
        }
    }
    ctx->pc = 0x14676Cu;
    // 0x14676c: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14676Cu;
    {
        const bool branch_taken_0x14676c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x146770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14676Cu;
        // 0x146770: 0x94620000  lhu         $v0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14676c) {
            ctx->pc = 0x14677Cu;
            goto label_14677c;
        }
    }
    ctx->pc = 0x146774u;
    // 0x146774: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x146774u;
    {
        const bool branch_taken_0x146774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146774u;
        // 0x146778: 0x451025  or          $v0, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146774) {
            ctx->pc = 0x146780u;
            goto label_146780;
        }
    }
    ctx->pc = 0x14677Cu;
label_14677c:
    // 0x14677c: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x14677cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_146780:
    // 0x146780: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x146780u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x146784: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x146784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_146788:
    // 0x146788: 0x87102b  sltu        $v0, $a0, $a3
    ctx->pc = 0x146788u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x14678c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x14678Cu;
    {
        const bool branch_taken_0x14678c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x146790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14678Cu;
        // 0x146790: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14678c) {
            ctx->pc = 0x146760u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_146760;
        }
    }
    ctx->pc = 0x146794u;
label_146794:
    // 0x146794: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x146794u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_146798:
    // 0x146798: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x146798u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14679c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14679cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1467a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1467A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1467A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1467A0u;
        // 0x1467a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1467A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1467A8u;
}
