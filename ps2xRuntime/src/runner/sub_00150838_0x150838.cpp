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

// Function: sub_00150838
// Address: 0x150838 - 0x150b48
void sub_00150838_0x150838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00150838_0x150838");
#endif

    switch (ctx->pc) {
        case 0x1508e0u: goto label_1508e0;
        case 0x1508f0u: goto label_1508f0;
        case 0x1508fcu: goto label_1508fc;
        case 0x150908u: goto label_150908;
        case 0x150914u: goto label_150914;
        default: break;
    }

    ctx->pc = 0x150838u;

    // 0x150838: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x150838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x15083c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15083cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x150840: 0x8c43c204  lw          $v1, -0x3DFC($v0)
    ctx->pc = 0x150840u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50C204u));
    // 0x150844: 0xa0782d  daddu       $t7, $a1, $zero
    ctx->pc = 0x150844u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150848: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x150848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x15084c: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x15084cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x150850: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x150850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x150854: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x150854u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x150858: 0xade30000  sw          $v1, 0x0($t7)
    ctx->pc = 0x150858u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 3));
    // 0x15085c: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x15085cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
    // 0x150860: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x150860u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
    // 0x150864: 0x3c090051  lui         $t1, 0x51
    ctx->pc = 0x150864u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)81 << 16));
    // 0x150868: 0x90a2bd70  lbu         $v0, -0x4290($a1)
    ctx->pc = 0x150868u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x50BD70u));
    // 0x15086c: 0x3c0b0051  lui         $t3, 0x51
    ctx->pc = 0x15086cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)81 << 16));
    // 0x150870: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x150870u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150874: 0x3c0c0051  lui         $t4, 0x51
    ctx->pc = 0x150874u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)81 << 16));
    // 0x150878: 0xa1e20009  sb          $v0, 0x9($t7)
    ctx->pc = 0x150878u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 9), (uint8_t)GPR_U32(ctx, 2));
    // 0x15087c: 0x3c0d0051  lui         $t5, 0x51
    ctx->pc = 0x15087cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)81 << 16));
    // 0x150880: 0x3c0e0051  lui         $t6, 0x51
    ctx->pc = 0x150880u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)81 << 16));
    // 0x150884: 0x3c0a0051  lui         $t2, 0x51
    ctx->pc = 0x150884u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)81 << 16));
    // 0x150888: 0x90c2bd6c  lbu         $v0, -0x4294($a2)
    ctx->pc = 0x150888u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x50BD6Cu));
    // 0x15088c: 0xa1e20007  sb          $v0, 0x7($t7)
    ctx->pc = 0x15088cu;
    WRITE8(ADD32(GPR_U32(ctx, 15), 7), (uint8_t)GPR_U32(ctx, 2));
    // 0x150890: 0x90e3bd5c  lbu         $v1, -0x42A4($a3)
    ctx->pc = 0x150890u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x50BD5Cu));
    // 0x150894: 0xa1e30008  sb          $v1, 0x8($t7)
    ctx->pc = 0x150894u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x150898: 0x9102c1e8  lbu         $v0, -0x3E18($t0)
    ctx->pc = 0x150898u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x50C1E8u));
    // 0x15089c: 0xa1e20004  sb          $v0, 0x4($t7)
    ctx->pc = 0x15089cu;
    WRITE8(ADD32(GPR_U32(ctx, 15), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x1508a0: 0x9123c1ea  lbu         $v1, -0x3E16($t1)
    ctx->pc = 0x1508a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x50C1EAu));
    // 0x1508a4: 0xa1e30005  sb          $v1, 0x5($t7)
    ctx->pc = 0x1508a4u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x1508a8: 0x9162c1e9  lbu         $v0, -0x3E17($t3)
    ctx->pc = 0x1508a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x50C1E9u));
    // 0x1508ac: 0xa1e20006  sb          $v0, 0x6($t7)
    ctx->pc = 0x1508acu;
    WRITE8(ADD32(GPR_U32(ctx, 15), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x1508b0: 0x8d42c20c  lw          $v0, -0x3DF4($t2)
    ctx->pc = 0x1508b0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x50C20Cu));
    // 0x1508b4: 0x8d83c214  lw          $v1, -0x3DEC($t4)
    ctx->pc = 0x1508b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50C214u));
    // 0x1508b8: 0x8da4c218  lw          $a0, -0x3DE8($t5)
    ctx->pc = 0x1508b8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50C218u));
    // 0x1508bc: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1508bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1508c0: 0x8dc5c230  lw          $a1, -0x3DD0($t6)
    ctx->pc = 0x1508c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4294951472)));
    // 0x1508c4: 0xade3002c  sw          $v1, 0x2C($t7)
    ctx->pc = 0x1508c4u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 44), GPR_U32(ctx, 3));
    // 0x1508c8: 0xade40030  sw          $a0, 0x30($t7)
    ctx->pc = 0x1508c8u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 48), GPR_U32(ctx, 4));
    // 0x1508cc: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1508CCu;
    {
        const bool branch_taken_0x1508cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1508D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1508CCu;
        // 0x1508d0: 0xade5003c  sw          $a1, 0x3C($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 60), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1508cc) {
            ctx->pc = 0x15091Cu;
            goto label_15091c;
        }
    }
    ctx->pc = 0x1508D4u;
    // 0x1508d4: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x1508d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x1508d8: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x1508D8u;
    SET_GPR_U32(ctx, 31, 0x1508E0u);
    ctx->pc = 0x1508DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1508D8u;
    // 0x1508dc: 0x2484c468  addiu       $a0, $a0, -0x3B98 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x1508D8u, 0x1508E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1508E0u;
label_1508e0:
    // 0x1508e0: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x1508e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x1508e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1508e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1508e8: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x1508E8u;
    SET_GPR_U32(ctx, 31, 0x1508F0u);
    ctx->pc = 0x1508ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1508E8u;
    // 0x1508ec: 0x2484ba38  addiu       $a0, $a0, -0x45C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x1508E8u, 0x1508F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1508F0u;
label_1508f0:
    // 0x1508f0: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x1508f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x1508f4: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x1508F4u;
    SET_GPR_U32(ctx, 31, 0x1508FCu);
    ctx->pc = 0x1508F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1508F4u;
    // 0x1508f8: 0x2484ba58  addiu       $a0, $a0, -0x45A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x1508F4u, 0x1508FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1508FCu;
label_1508fc:
    // 0x1508fc: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x1508fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x150900: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x150900u;
    SET_GPR_U32(ctx, 31, 0x150908u);
    ctx->pc = 0x150904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150900u;
    // 0x150904: 0x2484c490  addiu       $a0, $a0, -0x3B70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x150900u, 0x150908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150908u;
label_150908:
    // 0x150908: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x150908u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x15090c: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x15090Cu;
    SET_GPR_U32(ctx, 31, 0x150914u);
    ctx->pc = 0x150910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15090Cu;
    // 0x150910: 0x2484c4b8  addiu       $a0, $a0, -0x3B48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x15090Cu, 0x150914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150914u;
label_150914:
    // 0x150914: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x150914u;
    {
        const bool branch_taken_0x150914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150914u;
        // 0x150918: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150914) {
            ctx->pc = 0x150B24u;
            goto label_150b24;
        }
    }
    ctx->pc = 0x15091Cu;
label_15091c:
    // 0x15091c: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x15091cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x150920: 0x24423ac8  addiu       $v0, $v0, 0x3AC8
    ctx->pc = 0x150920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15048));
    // 0x150924: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x150924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x150928: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x150928u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15092c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15092Cu;
    {
        const bool branch_taken_0x15092c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x150930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15092Cu;
        // 0x150930: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15092c) {
            ctx->pc = 0x15093Cu;
            goto label_15093c;
        }
    }
    ctx->pc = 0x150934u;
    // 0x150934: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x150934u;
    {
        const bool branch_taken_0x150934 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x150938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150934u;
        // 0x150938: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150934) {
            ctx->pc = 0x150954u;
            goto label_150954;
        }
    }
    ctx->pc = 0x15093Cu;
label_15093c:
    // 0x15093c: 0xa1e00011  sb          $zero, 0x11($t7)
    ctx->pc = 0x15093cu;
    WRITE8(ADD32(GPR_U32(ctx, 15), 17), (uint8_t)GPR_U32(ctx, 0));
    // 0x150940: 0x106040  sll         $t4, $s0, 1
    ctx->pc = 0x150940u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x150944: 0xade00020  sw          $zero, 0x20($t7)
    ctx->pc = 0x150944u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 32), GPR_U32(ctx, 0));
    // 0x150948: 0x107080  sll         $t6, $s0, 2
    ctx->pc = 0x150948u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x15094c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x15094Cu;
    {
        const bool branch_taken_0x15094c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15094Cu;
        // 0x150950: 0xa1e00042  sb          $zero, 0x42($t7) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 15), 66), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15094c) {
            ctx->pc = 0x15097Cu;
            goto label_15097c;
        }
    }
    ctx->pc = 0x150954u;
label_150954:
    // 0x150954: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x150954u;
    {
        const bool branch_taken_0x150954 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x150958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150954u;
        // 0x150958: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150954) {
            ctx->pc = 0x150964u;
            goto label_150964;
        }
    }
    ctx->pc = 0x15095Cu;
    // 0x15095c: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x15095Cu;
    {
        const bool branch_taken_0x15095c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x150960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15095Cu;
        // 0x150960: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15095c) {
            ctx->pc = 0x15098Cu;
            goto label_15098c;
        }
    }
    ctx->pc = 0x150964u;
label_150964:
    // 0x150964: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x150964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x150968: 0xade00020  sw          $zero, 0x20($t7)
    ctx->pc = 0x150968u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 32), GPR_U32(ctx, 0));
    // 0x15096c: 0xa1e20011  sb          $v0, 0x11($t7)
    ctx->pc = 0x15096cu;
    WRITE8(ADD32(GPR_U32(ctx, 15), 17), (uint8_t)GPR_U32(ctx, 2));
    // 0x150970: 0x106040  sll         $t4, $s0, 1
    ctx->pc = 0x150970u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x150974: 0xa1e00042  sb          $zero, 0x42($t7)
    ctx->pc = 0x150974u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 66), (uint8_t)GPR_U32(ctx, 0));
    // 0x150978: 0x107080  sll         $t6, $s0, 2
    ctx->pc = 0x150978u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_15097c:
    // 0x15097c: 0xa1e00043  sb          $zero, 0x43($t7)
    ctx->pc = 0x15097cu;
    WRITE8(ADD32(GPR_U32(ctx, 15), 67), (uint8_t)GPR_U32(ctx, 0));
    // 0x150980: 0xa1e00044  sb          $zero, 0x44($t7)
    ctx->pc = 0x150980u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x150984: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x150984u;
    {
        const bool branch_taken_0x150984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150984u;
        // 0x150988: 0xade00048  sw          $zero, 0x48($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150984) {
            ctx->pc = 0x150A24u;
            goto label_150a24;
        }
    }
    ctx->pc = 0x15098Cu;
label_15098c:
    // 0x15098c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15098cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x150990: 0xa1e30011  sb          $v1, 0x11($t7)
    ctx->pc = 0x150990u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 17), (uint8_t)GPR_U32(ctx, 3));
    // 0x150994: 0x2442bda8  addiu       $v0, $v0, -0x4258
    ctx->pc = 0x150994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950312));
    // 0x150998: 0x106040  sll         $t4, $s0, 1
    ctx->pc = 0x150998u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x15099c: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x15099cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x1509a0: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x1509a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x1509a4: 0x104080  sll         $t0, $s0, 2
    ctx->pc = 0x1509a4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1509a8: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x1509a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1509ac: 0x24843a08  addiu       $a0, $a0, 0x3A08
    ctx->pc = 0x1509acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14856));
    // 0x1509b0: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x1509b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1509b4: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x1509b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x1509b8: 0xade30020  sw          $v1, 0x20($t7)
    ctx->pc = 0x1509b8u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 32), GPR_U32(ctx, 3));
    // 0x1509bc: 0x24060e10  addiu       $a2, $zero, 0xE10
    ctx->pc = 0x1509bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3600));
    // 0x1509c0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1509C0u;
    {
        const bool branch_taken_0x1509c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1509c0) {
            ctx->pc = 0x1509C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1509C0u;
            // 0x1509c4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1509C8u;
            goto label_1509c8;
        }
    }
    ctx->pc = 0x1509C8u;
label_1509c8:
    // 0x1509c8: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x1509c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x1509cc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1509ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1509d0: 0x100702d  daddu       $t6, $t0, $zero
    ctx->pc = 0x1509d0u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1509d4: 0x34a54bc0  ori         $a1, $a1, 0x4BC0
    ctx->pc = 0x1509d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)19392);
    // 0x1509d8: 0x2409003c  addiu       $t1, $zero, 0x3C
    ctx->pc = 0x1509d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1509dc: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x1509dcu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x1509e0: 0x240a003c  addiu       $t2, $zero, 0x3C
    ctx->pc = 0x1509e0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1509e4: 0x240b003c  addiu       $t3, $zero, 0x3C
    ctx->pc = 0x1509e4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1509e8: 0x2012  mflo        $a0
    ctx->pc = 0x1509e8u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x1509ec: 0x3810  mfhi        $a3
    ctx->pc = 0x1509ecu;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x1509f0: 0xa1e70042  sb          $a3, 0x42($t7)
    ctx->pc = 0x1509f0u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 66), (uint8_t)GPR_U32(ctx, 7));
    // 0x1509f4: 0x66001b  divu        $zero, $v1, $a2
    ctx->pc = 0x1509f4u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x1509f8: 0x6812  mflo        $t5
    ctx->pc = 0x1509f8u;
    SET_GPR_U64(ctx, 13, ctx->lo);
    // 0x1509fc: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x1509fcu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x150a00: 0x2010  mfhi        $a0
    ctx->pc = 0x150a00u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x150a04: 0x1a2001b  divu        $zero, $t5, $v0
    ctx->pc = 0x150a04u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 13) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 13) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,13); } }
    // 0x150a08: 0xa1e40043  sb          $a0, 0x43($t7)
    ctx->pc = 0x150a08u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 67), (uint8_t)GPR_U32(ctx, 4));
    // 0x150a0c: 0x4010  mfhi        $t0
    ctx->pc = 0x150a0cu;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x150a10: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x150a10u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x150a14: 0xa1e80044  sb          $t0, 0x44($t7)
    ctx->pc = 0x150a14u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 68), (uint8_t)GPR_U32(ctx, 8));
    // 0x150a18: 0x1812  mflo        $v1
    ctx->pc = 0x150a18u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x150a1c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x150a1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x150a20: 0xade30048  sw          $v1, 0x48($t7)
    ctx->pc = 0x150a20u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 72), GPR_U32(ctx, 3));
label_150a24:
    // 0x150a24: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x150a24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x150a28: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x150a28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x150a2c: 0x2442be08  addiu       $v0, $v0, -0x41F8
    ctx->pc = 0x150a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950408));
    // 0x150a30: 0x24843db0  addiu       $a0, $a0, 0x3DB0
    ctx->pc = 0x150a30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15792));
    // 0x150a34: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x150a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x150a38: 0x1c42021  addu        $a0, $t6, $a0
    ctx->pc = 0x150a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 4)));
    // 0x150a3c: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x150a3cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x150a40: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x150a40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
    // 0x150a44: 0x24a53e80  addiu       $a1, $a1, 0x3E80
    ctx->pc = 0x150a44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16000));
    // 0x150a48: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x150a48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x150a4c: 0x30637fff  andi        $v1, $v1, 0x7FFF
    ctx->pc = 0x150a4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x150a50: 0x1c52821  addu        $a1, $t6, $a1
    ctx->pc = 0x150a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
    // 0x150a54: 0xa5e30040  sh          $v1, 0x40($t7)
    ctx->pc = 0x150a54u;
    WRITE16(ADD32(GPR_U32(ctx, 15), 64), (uint16_t)GPR_U32(ctx, 3));
    // 0x150a58: 0x24423b28  addiu       $v0, $v0, 0x3B28
    ctx->pc = 0x150a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15144));
    // 0x150a5c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x150a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x150a60: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x150a60u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
    // 0x150a64: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x150a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x150a68: 0x25293b88  addiu       $t1, $t1, 0x3B88
    ctx->pc = 0x150a68u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 15240));
    // 0x150a6c: 0x2094821  addu        $t1, $s0, $t1
    ctx->pc = 0x150a6cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 9)));
    // 0x150a70: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x150a70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x150a74: 0xade30038  sw          $v1, 0x38($t7)
    ctx->pc = 0x150a74u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 56), GPR_U32(ctx, 3));
    // 0x150a78: 0x24843b58  addiu       $a0, $a0, 0x3B58
    ctx->pc = 0x150a78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15192));
    // 0x150a7c: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x150a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x150a80: 0x3c0b005e  lui         $t3, 0x5E
    ctx->pc = 0x150a80u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)94 << 16));
    // 0x150a84: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x150a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x150a88: 0x256b3948  addiu       $t3, $t3, 0x3948
    ctx->pc = 0x150a88u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 14664));
    // 0x150a8c: 0x1cb5821  addu        $t3, $t6, $t3
    ctx->pc = 0x150a8cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 11)));
    // 0x150a90: 0x3c08005e  lui         $t0, 0x5E
    ctx->pc = 0x150a90u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)94 << 16));
    // 0x150a94: 0xade3000c  sw          $v1, 0xC($t7)
    ctx->pc = 0x150a94u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 12), GPR_U32(ctx, 3));
    // 0x150a98: 0x25083c48  addiu       $t0, $t0, 0x3C48
    ctx->pc = 0x150a98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 15432));
    // 0x150a9c: 0x1c84021  addu        $t0, $t6, $t0
    ctx->pc = 0x150a9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
    // 0x150aa0: 0x3c0a005e  lui         $t2, 0x5E
    ctx->pc = 0x150aa0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)94 << 16));
    // 0x150aa4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x150aa4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x150aa8: 0x254a3bb8  addiu       $t2, $t2, 0x3BB8
    ctx->pc = 0x150aa8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 15288));
    // 0x150aac: 0x20a5021  addu        $t2, $s0, $t2
    ctx->pc = 0x150aacu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 10)));
    // 0x150ab0: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x150ab0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
    // 0x150ab4: 0xa1e30010  sb          $v1, 0x10($t7)
    ctx->pc = 0x150ab4u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x150ab8: 0x24e73be8  addiu       $a3, $a3, 0x3BE8
    ctx->pc = 0x150ab8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15336));
    // 0x150abc: 0x1873821  addu        $a3, $t4, $a3
    ctx->pc = 0x150abcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 7)));
    // 0x150ac0: 0x3c06005e  lui         $a2, 0x5E
    ctx->pc = 0x150ac0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)94 << 16));
    // 0x150ac4: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x150ac4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x150ac8: 0x24c63f40  addiu       $a2, $a2, 0x3F40
    ctx->pc = 0x150ac8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16192));
    // 0x150acc: 0x1c63021  addu        $a2, $t6, $a2
    ctx->pc = 0x150accu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 6)));
    // 0x150ad0: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x150ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
    // 0x150ad4: 0xa1e20012  sb          $v0, 0x12($t7)
    ctx->pc = 0x150ad4u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 18), (uint8_t)GPR_U32(ctx, 2));
    // 0x150ad8: 0x24a54000  addiu       $a1, $a1, 0x4000
    ctx->pc = 0x150ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16384));
    // 0x150adc: 0x1c52821  addu        $a1, $t6, $a1
    ctx->pc = 0x150adcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
    // 0x150ae0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x150ae0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150ae4: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x150ae4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x150ae8: 0xa1e30013  sb          $v1, 0x13($t7)
    ctx->pc = 0x150ae8u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 19), (uint8_t)GPR_U32(ctx, 3));
    // 0x150aec: 0x8d640000  lw          $a0, 0x0($t3)
    ctx->pc = 0x150aecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x150af0: 0xade40018  sw          $a0, 0x18($t7)
    ctx->pc = 0x150af0u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 24), GPR_U32(ctx, 4));
    // 0x150af4: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x150af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x150af8: 0xade3001c  sw          $v1, 0x1C($t7)
    ctx->pc = 0x150af8u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 28), GPR_U32(ctx, 3));
    // 0x150afc: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x150afcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x150b00: 0xade40024  sw          $a0, 0x24($t7)
    ctx->pc = 0x150b00u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 36), GPR_U32(ctx, 4));
    // 0x150b04: 0x91430000  lbu         $v1, 0x0($t2)
    ctx->pc = 0x150b04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x150b08: 0xa1e30014  sb          $v1, 0x14($t7)
    ctx->pc = 0x150b08u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 20), (uint8_t)GPR_U32(ctx, 3));
    // 0x150b0c: 0x94e40000  lhu         $a0, 0x0($a3)
    ctx->pc = 0x150b0cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x150b10: 0xa5e40016  sh          $a0, 0x16($t7)
    ctx->pc = 0x150b10u;
    WRITE16(ADD32(GPR_U32(ctx, 15), 22), (uint16_t)GPR_U32(ctx, 4));
    // 0x150b14: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x150b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x150b18: 0xade30034  sw          $v1, 0x34($t7)
    ctx->pc = 0x150b18u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 52), GPR_U32(ctx, 3));
    // 0x150b1c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x150b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x150b20: 0xade40028  sw          $a0, 0x28($t7)
    ctx->pc = 0x150b20u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 40), GPR_U32(ctx, 4));
label_150b24:
    // 0x150b24: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x150b24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x150b28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x150b28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x150b2c: 0x3e00008  jr          $ra
    ctx->pc = 0x150B2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150B2Cu;
        // 0x150b30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150B2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150B34u;
    // 0x150b34: 0x0  nop
    ctx->pc = 0x150b34u;
    // NOP
    // 0x150b38: 0x0  nop
    ctx->pc = 0x150b38u;
    // NOP
    // 0x150b3c: 0x0  nop
    ctx->pc = 0x150b3cu;
    // NOP
    // 0x150b40: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x150b40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x150b44: 0x0  nop
    ctx->pc = 0x150b44u;
    // NOP
    ctx->pc = 0x150b48u;
}
