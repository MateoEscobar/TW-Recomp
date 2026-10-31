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

// Function: sub_00448700
// Address: 0x448700 - 0x448950
void sub_00448700_0x448700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00448700_0x448700");
#endif

    switch (ctx->pc) {
        case 0x448780u: goto label_448780;
        case 0x4487d4u: goto label_4487d4;
        case 0x4487ecu: goto label_4487ec;
        case 0x448808u: goto label_448808;
        case 0x44882cu: goto label_44882c;
        default: break;
    }

    ctx->pc = 0x448700u;

    // 0x448700: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x448700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x448704: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x448704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x448708: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x448708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x44870c: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x44870cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x448710: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x448710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x448714: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x448714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x448718: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x448718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x44871c: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x44871cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x448720: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x448720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x448724: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x448724u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x448728: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x448728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x44872c: 0x32a30001  andi        $v1, $s5, 0x1
    ctx->pc = 0x44872cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
    // 0x448730: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x448730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x448734: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x448734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x448738: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x448738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x44873c: 0x8e02013c  lw          $v0, 0x13C($s0)
    ctx->pc = 0x44873cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
    // 0x448740: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x448740u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x448744: 0xa2001a  div         $zero, $a1, $v0
    ctx->pc = 0x448744u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x448748: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x448748u;
    {
        const bool branch_taken_0x448748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x448748) {
            ctx->pc = 0x44874Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x448748u;
            // 0x44874c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x448750u;
            goto label_448750;
        }
    }
    ctx->pc = 0x448750u;
label_448750:
    // 0x448750: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x448750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x448754: 0x1810  mfhi        $v1
    ctx->pc = 0x448754u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x448758: 0xb812  mflo        $s7
    ctx->pc = 0x448758u;
    SET_GPR_U64(ctx, 23, ctx->lo);
    // 0x44875c: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x44875cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x448760: 0x173100  sll         $a2, $s7, 4
    ctx->pc = 0x448760u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x448764: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x448764u;
    {
        const bool branch_taken_0x448764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x448768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448764u;
        // 0x448768: 0x162900  sll         $a1, $s6, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448764) {
            ctx->pc = 0x4487B0u;
            goto label_4487b0;
        }
    }
    ctx->pc = 0x44876Cu;
    // 0x44876c: 0x8e040820  lw          $a0, 0x820($s0)
    ctx->pc = 0x44876cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x448770: 0x261106d8  addiu       $s1, $s0, 0x6D8
    ctx->pc = 0x448770u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1752));
    // 0x448774: 0x261206d4  addiu       $s2, $s0, 0x6D4
    ctx->pc = 0x448774u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1748));
    // 0x448778: 0x261306d0  addiu       $s3, $s0, 0x6D0
    ctx->pc = 0x448778u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 1744));
    // 0x44877c: 0x261406c8  addiu       $s4, $s0, 0x6C8
    ctx->pc = 0x44877cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 1736));
label_448780:
    // 0x448780: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x448780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x448784: 0x3442d400  ori         $v0, $v0, 0xD400
    ctx->pc = 0x448784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54272);
    // 0x448788: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x448788u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D400u)); // MMIO: 0x10000000
    // 0x44878c: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x44878cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x448790: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x448790u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x448794: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x448794u;
    {
        const bool branch_taken_0x448794 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x448794) {
            ctx->pc = 0x448780u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_448780;
        }
    }
    ctx->pc = 0x44879Cu;
    // 0x44879c: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x44879cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x4487a0: 0x821818  mult        $v1, $a0, $v0
    ctx->pc = 0x4487a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4487a4: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x4487a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x4487a8: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x4487A8u;
    {
        const bool branch_taken_0x4487a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4487ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4487A8u;
        // 0x4487ac: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4487a8) {
            ctx->pc = 0x448844u;
            goto label_448844;
        }
    }
    ctx->pc = 0x4487B0u;
label_4487b0:
    // 0x4487b0: 0x2502ffff  addiu       $v0, $t0, -0x1
    ctx->pc = 0x4487b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x4487b4: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x4487b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x4487b8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4487B8u;
    {
        const bool branch_taken_0x4487b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4487BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4487B8u;
        // 0x4487bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4487b8) {
            ctx->pc = 0x4487E4u;
            goto label_4487e4;
        }
    }
    ctx->pc = 0x4487C0u;
    // 0x4487c0: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x4487c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x4487c4: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x4487c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4487c8: 0x24a5e210  addiu       $a1, $a1, -0x1DF0
    ctx->pc = 0x4487c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959632));
    // 0x4487cc: 0xc111f8c  jal         func_447E30
    ctx->pc = 0x4487CCu;
    SET_GPR_U32(ctx, 31, 0x4487D4u);
    ctx->pc = 0x4487D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4487CCu;
    // 0x4487d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x447E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x447E30u, 0x4487CCu, 0x4487D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4487D4u;
label_4487d4:
    // 0x4487d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4487d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4487d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4487d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4487dc: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x4487DCu;
    {
        const bool branch_taken_0x4487dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4487E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4487DCu;
        // 0x4487e0: 0xae03012c  sw          $v1, 0x12C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4487dc) {
            ctx->pc = 0x448920u;
            goto label_448920;
        }
    }
    ctx->pc = 0x4487E4u;
label_4487e4:
    // 0x4487e4: 0xc111ffe  jal         func_447FF8
    ctx->pc = 0x4487E4u;
    SET_GPR_U32(ctx, 31, 0x4487ECu);
    ctx->pc = 0x4487E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4487E4u;
    // 0x4487e8: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x447FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x447FF8u, 0x4487E4u, 0x4487ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4487ECu;
label_4487ec:
    // 0x4487ec: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x4487ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x4487f0: 0x261106d8  addiu       $s1, $s0, 0x6D8
    ctx->pc = 0x4487f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1752));
    // 0x4487f4: 0x261206d4  addiu       $s2, $s0, 0x6D4
    ctx->pc = 0x4487f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1748));
    // 0x4487f8: 0x261306d0  addiu       $s3, $s0, 0x6D0
    ctx->pc = 0x4487f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 1744));
    // 0x4487fc: 0x261406c8  addiu       $s4, $s0, 0x6C8
    ctx->pc = 0x4487fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 1736));
    // 0x448800: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x448800u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x448804: 0x0  nop
    ctx->pc = 0x448804u;
    // NOP
label_448808:
    // 0x448808: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x448808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x44880c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x44880cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x448810: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x448810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x448814: 0x0  nop
    ctx->pc = 0x448814u;
    // NOP
    // 0x448818: 0x0  nop
    ctx->pc = 0x448818u;
    // NOP
    // 0x44881c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x44881Cu;
    {
        const bool branch_taken_0x44881c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x44881c) {
            ctx->pc = 0x448808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_448808;
        }
    }
    ctx->pc = 0x448824u;
    // 0x448824: 0xc112a6a  jal         func_44A9A8
    ctx->pc = 0x448824u;
    SET_GPR_U32(ctx, 31, 0x44882Cu);
    ctx->pc = 0x448828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x448824u;
    // 0x448828: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A9A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A9A8u, 0x448824u, 0x44882Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44882Cu;
label_44882c:
    // 0x44882c: 0x8e020820  lw          $v0, 0x820($s0)
    ctx->pc = 0x44882cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x448830: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x448830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x448834: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x448834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x448838: 0x432818  mult        $a1, $v0, $v1
    ctx->pc = 0x448838u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x44883c: 0xb11021  addu        $v0, $a1, $s1
    ctx->pc = 0x44883cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x448840: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x448840u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_448844:
    // 0x448844: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x448844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x448848: 0x57c2000a  bnel        $fp, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x448848u;
    {
        const bool branch_taken_0x448848 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        if (branch_taken_0x448848) {
            ctx->pc = 0x44884Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x448848u;
            // 0x44884c: 0x8e020820  lw          $v0, 0x820($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x448874u;
            goto label_448874;
        }
    }
    ctx->pc = 0x448850u;
    // 0x448850: 0x32a20002  andi        $v0, $s5, 0x2
    ctx->pc = 0x448850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)2);
    // 0x448854: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x448854u;
    {
        const bool branch_taken_0x448854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x448858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448854u;
        // 0x448858: 0x24030140  addiu       $v1, $zero, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448854) {
            ctx->pc = 0x448870u;
            goto label_448870;
        }
    }
    ctx->pc = 0x44885Cu;
    // 0x44885c: 0x8e020820  lw          $v0, 0x820($s0)
    ctx->pc = 0x44885cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x448860: 0x432018  mult        $a0, $v0, $v1
    ctx->pc = 0x448860u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x448864: 0x921021  addu        $v0, $a0, $s2
    ctx->pc = 0x448864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x448868: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x448868u;
    {
        const bool branch_taken_0x448868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44886Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448868u;
        // 0x44886c: 0xac5e0000  sw          $fp, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448868) {
            ctx->pc = 0x448884u;
            goto label_448884;
        }
    }
    ctx->pc = 0x448870u;
label_448870:
    // 0x448870: 0x8e020820  lw          $v0, 0x820($s0)
    ctx->pc = 0x448870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
label_448874:
    // 0x448874: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x448874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x448878: 0x432018  mult        $a0, $v0, $v1
    ctx->pc = 0x448878u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x44887c: 0x921021  addu        $v0, $a0, $s2
    ctx->pc = 0x44887cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x448880: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x448880u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_448884:
    // 0x448884: 0x8e020820  lw          $v0, 0x820($s0)
    ctx->pc = 0x448884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x448888: 0x24070140  addiu       $a3, $zero, 0x140
    ctx->pc = 0x448888u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x44888c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x44888cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x448890: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x448890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x448894: 0x472018  mult        $a0, $v0, $a3
    ctx->pc = 0x448894u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x448898: 0x931021  addu        $v0, $a0, $s3
    ctx->pc = 0x448898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x44889c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x44889cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x4488a0: 0x8e040184  lw          $a0, 0x184($s0)
    ctx->pc = 0x4488a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x4488a4: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x4488A4u;
    {
        const bool branch_taken_0x4488a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x4488A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4488A4u;
        // 0x4488a8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4488a4) {
            ctx->pc = 0x4488E0u;
            goto label_4488e0;
        }
    }
    ctx->pc = 0x4488ACu;
    // 0x4488ac: 0x8e040820  lw          $a0, 0x820($s0)
    ctx->pc = 0x4488acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x4488b0: 0x24060180  addiu       $a2, $zero, 0x180
    ctx->pc = 0x4488b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x4488b4: 0x8e0501d0  lw          $a1, 0x1D0($s0)
    ctx->pc = 0x4488b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 464)));
    // 0x4488b8: 0x871818  mult        $v1, $a0, $a3
    ctx->pc = 0x4488b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4488bc: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x4488bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x4488c0: 0x742021  addu        $a0, $v1, $s4
    ctx->pc = 0x4488c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x4488c4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4488c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4488c8: 0x2c22818  mult        $a1, $s6, $v0
    ctx->pc = 0x4488c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x4488cc: 0xb71021  addu        $v0, $a1, $s7
    ctx->pc = 0x4488ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 23)));
    // 0x4488d0: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x4488d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4488d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4488d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4488d8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x4488D8u;
    {
        const bool branch_taken_0x4488d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4488DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4488D8u;
        // 0x4488dc: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4488d8) {
            ctx->pc = 0x44891Cu;
            goto label_44891c;
        }
    }
    ctx->pc = 0x4488E0u;
label_4488e0:
    // 0x4488e0: 0x54820002  bnel        $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x4488E0u;
    {
        const bool branch_taken_0x4488e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x4488e0) {
            ctx->pc = 0x4488E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4488E0u;
            // 0x4488e4: 0x8e0201e0  lw          $v0, 0x1E0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 480)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4488ECu;
            goto label_4488ec;
        }
    }
    ctx->pc = 0x4488E8u;
    // 0x4488e8: 0x8e0201f0  lw          $v0, 0x1F0($s0)
    ctx->pc = 0x4488e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 496)));
label_4488ec:
    // 0x4488ec: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x4488ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x4488f0: 0x24060180  addiu       $a2, $zero, 0x180
    ctx->pc = 0x4488f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x4488f4: 0x8e040820  lw          $a0, 0x820($s0)
    ctx->pc = 0x4488f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x4488f8: 0x24050140  addiu       $a1, $zero, 0x140
    ctx->pc = 0x4488f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x4488fc: 0x2c33818  mult        $a3, $s6, $v1
    ctx->pc = 0x4488fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x448900: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x448900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x448904: 0xf71821  addu        $v1, $a3, $s7
    ctx->pc = 0x448904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 23)));
    // 0x448908: 0x853818  mult        $a3, $a0, $a1
    ctx->pc = 0x448908u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x44890c: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x44890cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x448910: 0xf42021  addu        $a0, $a3, $s4
    ctx->pc = 0x448910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 20)));
    // 0x448914: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x448914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x448918: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x448918u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_44891c:
    // 0x44891c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x44891cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_448920:
    // 0x448920: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x448920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x448924: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x448924u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x448928: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x448928u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x44892c: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x44892cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x448930: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x448930u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x448934: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x448934u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x448938: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x448938u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x44893c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x44893cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x448940: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x448940u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x448944: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x448944u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x448948: 0x3e00008  jr          $ra
    ctx->pc = 0x448948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44894Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448948u;
        // 0x44894c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x448948u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x448950u;
}
