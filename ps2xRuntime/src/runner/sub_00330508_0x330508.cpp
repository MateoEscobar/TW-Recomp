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

// Function: sub_00330508
// Address: 0x330508 - 0x33060c
void sub_00330508_0x330508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00330508_0x330508");
#endif

    ctx->pc = 0x330508u;

    // 0x330508: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x330508u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x33050c: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x33050cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330510: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x330510u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330514: 0x25050020  addiu       $a1, $t0, 0x20
    ctx->pc = 0x330514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x330518: 0x2463c531  addiu       $v1, $v1, -0x3ACF
    ctx->pc = 0x330518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952241));
    // 0x33051c: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x33051cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x330520: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x330520u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x330524: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x330524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x330528: 0x102280a  movz        $a1, $t0, $v0
    ctx->pc = 0x330528u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 8));
    // 0x33052c: 0x24a3ff9f  addiu       $v1, $a1, -0x61
    ctx->pc = 0x33052cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967199));
    // 0x330530: 0x2c62001a  sltiu       $v0, $v1, 0x1A
    ctx->pc = 0x330530u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x330534: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x330534u;
    {
        const bool branch_taken_0x330534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x330538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330534u;
        // 0x330538: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330534) {
            ctx->pc = 0x330614u;
            return;
        }
    }
    ctx->pc = 0x33053Cu;
    // 0x33053c: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x33053cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x330540: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x330540u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x330544: 0x24425fa0  addiu       $v0, $v0, 0x5FA0
    ctx->pc = 0x330544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24480));
    // 0x330548: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x330548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x33054c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x33054cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x330550: 0x800008  jr          $a0
    ctx->pc = 0x330550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x330558u: goto label_330558;
            case 0x33056Cu: goto label_33056c;
            case 0x330580u: goto label_330580;
            case 0x330594u: goto label_330594;
            case 0x3305A8u: goto label_3305a8;
            case 0x3305BCu: goto label_3305bc;
            case 0x3305D0u: goto label_3305d0;
            case 0x3305E4u: goto label_3305e4;
            case 0x3305F8u: goto label_3305f8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x330550u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x330558u;
label_330558:
    // 0x330558: 0x24e2c531  addiu       $v0, $a3, -0x3ACF
    ctx->pc = 0x330558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294952241));
    // 0x33055c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x33055cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x330560: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x330560u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x330564: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x330564u;
    {
        const bool branch_taken_0x330564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x330568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330564u;
        // 0x330568: 0x30660003  andi        $a2, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x330564) {
            ctx->pc = 0x330620u;
            return;
        }
    }
    ctx->pc = 0x33056Cu;
label_33056c:
    // 0x33056c: 0x24e2c531  addiu       $v0, $a3, -0x3ACF
    ctx->pc = 0x33056cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294952241));
    // 0x330570: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x330570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x330574: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x330574u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x330578: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x330578u;
    {
        const bool branch_taken_0x330578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33057Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330578u;
        // 0x33057c: 0x30660020  andi        $a2, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x330578) {
            ctx->pc = 0x330620u;
            return;
        }
    }
    ctx->pc = 0x330580u;
label_330580:
    // 0x330580: 0x24e2c531  addiu       $v0, $a3, -0x3ACF
    ctx->pc = 0x330580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294952241));
    // 0x330584: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x330584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x330588: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x330588u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33058c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x33058Cu;
    {
        const bool branch_taken_0x33058c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x330590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33058Cu;
        // 0x330590: 0x30660004  andi        $a2, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33058c) {
            ctx->pc = 0x330620u;
            return;
        }
    }
    ctx->pc = 0x330594u;
label_330594:
    // 0x330594: 0x24e2c531  addiu       $v0, $a3, -0x3ACF
    ctx->pc = 0x330594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294952241));
    // 0x330598: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x330598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x33059c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x33059cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3305a0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x3305A0u;
    {
        const bool branch_taken_0x3305a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3305A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3305A0u;
        // 0x3305a4: 0x30660002  andi        $a2, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3305a0) {
            ctx->pc = 0x330620u;
            return;
        }
    }
    ctx->pc = 0x3305A8u;
label_3305a8:
    // 0x3305a8: 0x24e2c531  addiu       $v0, $a3, -0x3ACF
    ctx->pc = 0x3305a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294952241));
    // 0x3305ac: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x3305acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x3305b0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3305b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3305b4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x3305B4u;
    {
        const bool branch_taken_0x3305b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3305B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3305B4u;
        // 0x3305b8: 0x30660010  andi        $a2, $v1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3305b4) {
            ctx->pc = 0x330620u;
            return;
        }
    }
    ctx->pc = 0x3305BCu;
label_3305bc:
    // 0x3305bc: 0x24e2c531  addiu       $v0, $a3, -0x3ACF
    ctx->pc = 0x3305bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294952241));
    // 0x3305c0: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x3305c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x3305c4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3305c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3305c8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x3305C8u;
    {
        const bool branch_taken_0x3305c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3305CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3305C8u;
        // 0x3305cc: 0x30660008  andi        $a2, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3305c8) {
            ctx->pc = 0x330620u;
            return;
        }
    }
    ctx->pc = 0x3305D0u;
label_3305d0:
    // 0x3305d0: 0x24e2c531  addiu       $v0, $a3, -0x3ACF
    ctx->pc = 0x3305d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294952241));
    // 0x3305d4: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x3305d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x3305d8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3305d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3305dc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3305DCu;
    {
        const bool branch_taken_0x3305dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3305E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3305DCu;
        // 0x3305e0: 0x30660001  andi        $a2, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3305dc) {
            ctx->pc = 0x330620u;
            return;
        }
    }
    ctx->pc = 0x3305E4u;
label_3305e4:
    // 0x3305e4: 0x24e2c531  addiu       $v0, $a3, -0x3ACF
    ctx->pc = 0x3305e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294952241));
    // 0x3305e8: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x3305e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x3305ec: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3305ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3305f0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3305F0u;
    {
        const bool branch_taken_0x3305f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3305F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3305F0u;
        // 0x3305f4: 0x30660007  andi        $a2, $v1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3305f0) {
            ctx->pc = 0x330620u;
            return;
        }
    }
    ctx->pc = 0x3305F8u;
label_3305f8:
    // 0x3305f8: 0x24e2c531  addiu       $v0, $a3, -0x3ACF
    ctx->pc = 0x3305f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294952241));
    // 0x3305fc: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x3305fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x330600: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x330600u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x330604: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x330604u;
    {
        const bool branch_taken_0x330604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x330608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330604u;
        // 0x330608: 0x30660044  andi        $a2, $v1, 0x44 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)68);
        ctx->in_delay_slot = false;
        if (branch_taken_0x330604) {
            ctx->pc = 0x330620u;
            return;
        }
    }
    ctx->pc = 0x33060Cu;
}
