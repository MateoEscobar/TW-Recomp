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

// Function: sub_00147430
// Address: 0x147430 - 0x147640
void sub_00147430_0x147430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00147430_0x147430");
#endif

    switch (ctx->pc) {
        case 0x14745cu: goto label_14745c;
        case 0x14746cu: goto label_14746c;
        default: break;
    }

    ctx->pc = 0x147430u;

    // 0x147430: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x147430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x147434: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x147434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x147438: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x147438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x14743c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14743cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147440: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x147440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x147444: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x147444u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147448: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x147448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x14744c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x14744cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147450: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x147450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x147454: 0xc051c86  jal         func_147218
    ctx->pc = 0x147454u;
    SET_GPR_U32(ctx, 31, 0x14745Cu);
    ctx->pc = 0x147458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147454u;
    // 0x147458: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147218u, 0x147454u, 0x14745Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14745Cu;
label_14745c:
    // 0x14745c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14745Cu;
    {
        const bool branch_taken_0x14745c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x147460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14745Cu;
        // 0x147460: 0x2602ffff  addiu       $v0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14745c) {
            ctx->pc = 0x147470u;
            goto label_147470;
        }
    }
    ctx->pc = 0x147464u;
    // 0x147464: 0xc051ae4  jal         func_146B90
    ctx->pc = 0x147464u;
    SET_GPR_U32(ctx, 31, 0x14746Cu);
    ctx->pc = 0x147468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147464u;
    // 0x147468: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146B90u, 0x147464u, 0x14746Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14746Cu;
label_14746c:
    // 0x14746c: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x14746cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_147470:
    // 0x147470: 0x2c420039  sltiu       $v0, $v0, 0x39
    ctx->pc = 0x147470u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)57) ? 1 : 0);
    // 0x147474: 0x5040006c  beql        $v0, $zero, . + 4 + (0x6C << 2)
    ctx->pc = 0x147474u;
    {
        const bool branch_taken_0x147474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x147474) {
            ctx->pc = 0x147478u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x147474u;
            // 0x147478: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x147628u;
            goto label_147628;
        }
    }
    ctx->pc = 0x14747Cu;
    // 0x14747c: 0x12200069  beqz        $s1, . + 4 + (0x69 << 2)
    ctx->pc = 0x14747Cu;
    {
        const bool branch_taken_0x14747c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x147480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14747Cu;
        // 0x147480: 0x2663ffff  addiu       $v1, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14747c) {
            ctx->pc = 0x147624u;
            goto label_147624;
        }
    }
    ctx->pc = 0x147484u;
    // 0x147484: 0x2c620009  sltiu       $v0, $v1, 0x9
    ctx->pc = 0x147484u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x147488: 0x10400066  beqz        $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x147488u;
    {
        const bool branch_taken_0x147488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14748Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147488u;
        // 0x14748c: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147488) {
            ctx->pc = 0x147624u;
            goto label_147624;
        }
    }
    ctx->pc = 0x147490u;
    // 0x147490: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x147490u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x147494: 0x24429e90  addiu       $v0, $v0, -0x6170
    ctx->pc = 0x147494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942352));
    // 0x147498: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x147498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14749c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x14749cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1474a0: 0x800008  jr          $a0
    ctx->pc = 0x1474A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1474A8u: goto label_1474a8;
            case 0x1474D0u: goto label_1474d0;
            case 0x1474F8u: goto label_1474f8;
            case 0x147520u: goto label_147520;
            case 0x147548u: goto label_147548;
            case 0x147570u: goto label_147570;
            case 0x147598u: goto label_147598;
            case 0x1475C0u: goto label_1475c0;
            case 0x1475E8u: goto label_1475e8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1474A0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1474A8u;
label_1474a8:
    // 0x1474a8: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1474a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x1474ac: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1474acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1474b0: 0x8cc2b740  lw          $v0, -0x48C0($a2)
    ctx->pc = 0x1474b0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x50B740u));
    // 0x1474b4: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x1474b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x1474b8: 0x2484dd10  addiu       $a0, $a0, -0x22F0
    ctx->pc = 0x1474b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958352));
    // 0x1474bc: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x1474bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1474c0: 0x452818  mult        $a1, $v0, $a1
    ctx->pc = 0x1474c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1474c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1474c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1474c8: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x1474C8u;
    {
        const bool branch_taken_0x1474c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1474CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1474C8u;
        // 0x1474cc: 0xacc2b740  sw          $v0, -0x48C0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4294948672), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1474c8) {
            ctx->pc = 0x14760Cu;
            goto label_14760c;
        }
    }
    ctx->pc = 0x1474D0u;
label_1474d0:
    // 0x1474d0: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1474d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x1474d4: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1474d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1474d8: 0x8cc2b744  lw          $v0, -0x48BC($a2)
    ctx->pc = 0x1474d8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x50B744u));
    // 0x1474dc: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x1474dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x1474e0: 0x2484ddd0  addiu       $a0, $a0, -0x2230
    ctx->pc = 0x1474e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958544));
    // 0x1474e4: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x1474e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1474e8: 0x452818  mult        $a1, $v0, $a1
    ctx->pc = 0x1474e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1474ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1474ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1474f0: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x1474F0u;
    {
        const bool branch_taken_0x1474f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1474F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1474F0u;
        // 0x1474f4: 0xacc2b744  sw          $v0, -0x48BC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4294948676), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1474f0) {
            ctx->pc = 0x14760Cu;
            goto label_14760c;
        }
    }
    ctx->pc = 0x1474F8u;
label_1474f8:
    // 0x1474f8: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1474f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x1474fc: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1474fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x147500: 0x8cc2b748  lw          $v0, -0x48B8($a2)
    ctx->pc = 0x147500u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x50B748u));
    // 0x147504: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x147504u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x147508: 0x2484de90  addiu       $a0, $a0, -0x2170
    ctx->pc = 0x147508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958736));
    // 0x14750c: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x14750cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x147510: 0x452818  mult        $a1, $v0, $a1
    ctx->pc = 0x147510u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x147514: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x147514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x147518: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x147518u;
    {
        const bool branch_taken_0x147518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14751Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147518u;
        // 0x14751c: 0xacc2b748  sw          $v0, -0x48B8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4294948680), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147518) {
            ctx->pc = 0x14760Cu;
            goto label_14760c;
        }
    }
    ctx->pc = 0x147520u;
label_147520:
    // 0x147520: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x147520u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x147524: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x147524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x147528: 0x8cc2b74c  lw          $v0, -0x48B4($a2)
    ctx->pc = 0x147528u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x50B74Cu));
    // 0x14752c: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x14752cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x147530: 0x2484def0  addiu       $a0, $a0, -0x2110
    ctx->pc = 0x147530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958832));
    // 0x147534: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x147534u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x147538: 0x452818  mult        $a1, $v0, $a1
    ctx->pc = 0x147538u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x14753c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14753cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x147540: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x147540u;
    {
        const bool branch_taken_0x147540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147540u;
        // 0x147544: 0xacc2b74c  sw          $v0, -0x48B4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4294948684), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147540) {
            ctx->pc = 0x14760Cu;
            goto label_14760c;
        }
    }
    ctx->pc = 0x147548u;
label_147548:
    // 0x147548: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x147548u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x14754c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x14754cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x147550: 0x8cc2b750  lw          $v0, -0x48B0($a2)
    ctx->pc = 0x147550u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x50B750u));
    // 0x147554: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x147554u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x147558: 0x2484df50  addiu       $a0, $a0, -0x20B0
    ctx->pc = 0x147558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958928));
    // 0x14755c: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x14755cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x147560: 0x452818  mult        $a1, $v0, $a1
    ctx->pc = 0x147560u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x147564: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x147564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x147568: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x147568u;
    {
        const bool branch_taken_0x147568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14756Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147568u;
        // 0x14756c: 0xacc2b750  sw          $v0, -0x48B0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4294948688), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147568) {
            ctx->pc = 0x14760Cu;
            goto label_14760c;
        }
    }
    ctx->pc = 0x147570u;
label_147570:
    // 0x147570: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x147570u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x147574: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x147574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x147578: 0x8cc2b754  lw          $v0, -0x48AC($a2)
    ctx->pc = 0x147578u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x50B754u));
    // 0x14757c: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x14757cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x147580: 0x2484dfb0  addiu       $a0, $a0, -0x2050
    ctx->pc = 0x147580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959024));
    // 0x147584: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x147584u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x147588: 0x452818  mult        $a1, $v0, $a1
    ctx->pc = 0x147588u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x14758c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14758cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x147590: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x147590u;
    {
        const bool branch_taken_0x147590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147590u;
        // 0x147594: 0xacc2b754  sw          $v0, -0x48AC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4294948692), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147590) {
            ctx->pc = 0x14760Cu;
            goto label_14760c;
        }
    }
    ctx->pc = 0x147598u;
label_147598:
    // 0x147598: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x147598u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x14759c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x14759cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1475a0: 0x8cc2b758  lw          $v0, -0x48A8($a2)
    ctx->pc = 0x1475a0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x50B758u));
    // 0x1475a4: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x1475a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x1475a8: 0x2484e010  addiu       $a0, $a0, -0x1FF0
    ctx->pc = 0x1475a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959120));
    // 0x1475ac: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x1475acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1475b0: 0x452818  mult        $a1, $v0, $a1
    ctx->pc = 0x1475b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1475b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1475b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1475b8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1475B8u;
    {
        const bool branch_taken_0x1475b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1475BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1475B8u;
        // 0x1475bc: 0xacc2b758  sw          $v0, -0x48A8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4294948696), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1475b8) {
            ctx->pc = 0x14760Cu;
            goto label_14760c;
        }
    }
    ctx->pc = 0x1475C0u;
label_1475c0:
    // 0x1475c0: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1475c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x1475c4: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1475c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1475c8: 0x8cc2b75c  lw          $v0, -0x48A4($a2)
    ctx->pc = 0x1475c8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x50B75Cu));
    // 0x1475cc: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x1475ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x1475d0: 0x2484e070  addiu       $a0, $a0, -0x1F90
    ctx->pc = 0x1475d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959216));
    // 0x1475d4: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x1475d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1475d8: 0x452818  mult        $a1, $v0, $a1
    ctx->pc = 0x1475d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1475dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1475dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1475e0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1475E0u;
    {
        const bool branch_taken_0x1475e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1475E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1475E0u;
        // 0x1475e4: 0xacc2b75c  sw          $v0, -0x48A4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4294948700), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1475e0) {
            ctx->pc = 0x14760Cu;
            goto label_14760c;
        }
    }
    ctx->pc = 0x1475E8u;
label_1475e8:
    // 0x1475e8: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1475e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x1475ec: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1475ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1475f0: 0x8cc2b760  lw          $v0, -0x48A0($a2)
    ctx->pc = 0x1475f0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x50B760u));
    // 0x1475f4: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x1475f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x1475f8: 0x2484e130  addiu       $a0, $a0, -0x1ED0
    ctx->pc = 0x1475f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959408));
    // 0x1475fc: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x1475fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x147600: 0x452818  mult        $a1, $v0, $a1
    ctx->pc = 0x147600u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x147604: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x147604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x147608: 0xacc2b760  sw          $v0, -0x48A0($a2)
    ctx->pc = 0x147608u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294948704), GPR_U32(ctx, 2));
label_14760c:
    // 0x14760c: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x14760cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x147610: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x147610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x147614: 0xa4670000  sh          $a3, 0x0($v1)
    ctx->pc = 0x147614u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x147618: 0xac900004  sw          $s0, 0x4($a0)
    ctx->pc = 0x147618u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 16));
    // 0x14761c: 0xa472000a  sh          $s2, 0xA($v1)
    ctx->pc = 0x14761cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 10), (uint16_t)GPR_U32(ctx, 18));
    // 0x147620: 0xa4710008  sh          $s1, 0x8($v1)
    ctx->pc = 0x147620u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 17));
label_147624:
    // 0x147624: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x147624u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_147628:
    // 0x147628: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x147628u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14762c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14762cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x147630: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x147630u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x147634: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x147634u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x147638: 0x3e00008  jr          $ra
    ctx->pc = 0x147638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14763Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147638u;
        // 0x14763c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x147638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x147640u;
}
