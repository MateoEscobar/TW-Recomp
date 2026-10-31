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

// Function: sub_004CB840
// Address: 0x4cb840 - 0x4cb958
void sub_004CB840_0x4cb840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CB840_0x4cb840");
#endif

    switch (ctx->pc) {
        case 0x4cb840u: goto label_4cb840;
        case 0x4cb844u: goto label_4cb844;
        case 0x4cb848u: goto label_4cb848;
        case 0x4cb84cu: goto label_4cb84c;
        case 0x4cb850u: goto label_4cb850;
        case 0x4cb854u: goto label_4cb854;
        case 0x4cb858u: goto label_4cb858;
        case 0x4cb85cu: goto label_4cb85c;
        case 0x4cb860u: goto label_4cb860;
        case 0x4cb864u: goto label_4cb864;
        case 0x4cb868u: goto label_4cb868;
        case 0x4cb86cu: goto label_4cb86c;
        case 0x4cb870u: goto label_4cb870;
        case 0x4cb874u: goto label_4cb874;
        case 0x4cb878u: goto label_4cb878;
        case 0x4cb87cu: goto label_4cb87c;
        case 0x4cb880u: goto label_4cb880;
        case 0x4cb884u: goto label_4cb884;
        case 0x4cb888u: goto label_4cb888;
        case 0x4cb88cu: goto label_4cb88c;
        case 0x4cb890u: goto label_4cb890;
        case 0x4cb894u: goto label_4cb894;
        case 0x4cb898u: goto label_4cb898;
        case 0x4cb89cu: goto label_4cb89c;
        case 0x4cb8a0u: goto label_4cb8a0;
        case 0x4cb8a4u: goto label_4cb8a4;
        case 0x4cb8a8u: goto label_4cb8a8;
        case 0x4cb8acu: goto label_4cb8ac;
        case 0x4cb8b0u: goto label_4cb8b0;
        case 0x4cb8b4u: goto label_4cb8b4;
        case 0x4cb8b8u: goto label_4cb8b8;
        case 0x4cb8bcu: goto label_4cb8bc;
        case 0x4cb8c0u: goto label_4cb8c0;
        case 0x4cb8c4u: goto label_4cb8c4;
        case 0x4cb8c8u: goto label_4cb8c8;
        case 0x4cb8ccu: goto label_4cb8cc;
        case 0x4cb8d0u: goto label_4cb8d0;
        case 0x4cb8d4u: goto label_4cb8d4;
        case 0x4cb8d8u: goto label_4cb8d8;
        case 0x4cb8dcu: goto label_4cb8dc;
        case 0x4cb8e0u: goto label_4cb8e0;
        case 0x4cb8e4u: goto label_4cb8e4;
        case 0x4cb8e8u: goto label_4cb8e8;
        case 0x4cb8ecu: goto label_4cb8ec;
        case 0x4cb8f0u: goto label_4cb8f0;
        case 0x4cb8f4u: goto label_4cb8f4;
        case 0x4cb8f8u: goto label_4cb8f8;
        case 0x4cb8fcu: goto label_4cb8fc;
        case 0x4cb900u: goto label_4cb900;
        case 0x4cb904u: goto label_4cb904;
        case 0x4cb908u: goto label_4cb908;
        case 0x4cb90cu: goto label_4cb90c;
        case 0x4cb910u: goto label_4cb910;
        case 0x4cb914u: goto label_4cb914;
        case 0x4cb918u: goto label_4cb918;
        case 0x4cb91cu: goto label_4cb91c;
        case 0x4cb920u: goto label_4cb920;
        case 0x4cb924u: goto label_4cb924;
        case 0x4cb928u: goto label_4cb928;
        case 0x4cb92cu: goto label_4cb92c;
        case 0x4cb930u: goto label_4cb930;
        case 0x4cb934u: goto label_4cb934;
        case 0x4cb938u: goto label_4cb938;
        case 0x4cb93cu: goto label_4cb93c;
        case 0x4cb940u: goto label_4cb940;
        case 0x4cb944u: goto label_4cb944;
        case 0x4cb948u: goto label_4cb948;
        case 0x4cb94cu: goto label_4cb94c;
        case 0x4cb950u: goto label_4cb950;
        case 0x4cb954u: goto label_4cb954;
        default: break;
    }

    ctx->pc = 0x4cb840u;

label_4cb840:
    // 0x4cb840: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4cb840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4cb844:
    // 0x4cb844: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x4cb844u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_4cb848:
    // 0x4cb848: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4cb848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_4cb84c:
    // 0x4cb84c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4cb84cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4cb850:
    // 0x4cb850: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4cb850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_4cb854:
    // 0x4cb854: 0x3c110071  lui         $s1, 0x71
    ctx->pc = 0x4cb854u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)113 << 16));
label_4cb858:
    // 0x4cb858: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4cb858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_4cb85c:
    // 0x4cb85c: 0x3c120071  lui         $s2, 0x71
    ctx->pc = 0x4cb85cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)113 << 16));
label_4cb860:
    // 0x4cb860: 0x8c6246ac  lw          $v0, 0x46AC($v1)
    ctx->pc = 0x4cb860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18092)));
label_4cb864:
    // 0x4cb864: 0x3c130071  lui         $s3, 0x71
    ctx->pc = 0x4cb864u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)113 << 16));
label_4cb868:
    // 0x4cb868: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4cb868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4cb86c:
    // 0x4cb86c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_4cb870:
    if (ctx->pc == 0x4CB870u) {
        ctx->pc = 0x4CB870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CB86Cu;
        // 0x4cb870: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CB874u;
        goto label_4cb874;
    }
    ctx->pc = 0x4CB86Cu;
    {
        const bool branch_taken_0x4cb86c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CB870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CB86Cu;
        // 0x4cb870: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cb86c) {
            ctx->pc = 0x4CB894u;
            goto label_4cb894;
        }
    }
    ctx->pc = 0x4CB874u;
label_4cb874:
    // 0x4cb874: 0x0  nop
    ctx->pc = 0x4cb874u;
    // NOP
label_4cb878:
    // 0x4cb878: 0x8c6246ac  lw          $v0, 0x46AC($v1)
    ctx->pc = 0x4cb878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18092)));
label_4cb87c:
    // 0x4cb87c: 0x0  nop
    ctx->pc = 0x4cb87cu;
    // NOP
label_4cb880:
    // 0x4cb880: 0x0  nop
    ctx->pc = 0x4cb880u;
    // NOP
label_4cb884:
    // 0x4cb884: 0x0  nop
    ctx->pc = 0x4cb884u;
    // NOP
label_4cb888:
    // 0x4cb888: 0x0  nop
    ctx->pc = 0x4cb888u;
    // NOP
label_4cb88c:
    // 0x4cb88c: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
label_4cb890:
    if (ctx->pc == 0x4CB890u) {
        ctx->pc = 0x4CB894u;
        goto label_4cb894;
    }
    ctx->pc = 0x4CB88Cu;
    {
        const bool branch_taken_0x4cb88c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cb88c) {
            ctx->pc = 0x4CB878u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4cb878;
        }
    }
    ctx->pc = 0x4CB894u;
label_4cb894:
    // 0x4cb894: 0x8e434a80  lw          $v1, 0x4A80($s2)
    ctx->pc = 0x4cb894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 19072)));
label_4cb898:
    // 0x4cb898: 0x26624900  addiu       $v0, $s3, 0x4900
    ctx->pc = 0x4cb898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 18688));
label_4cb89c:
    // 0x4cb89c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4cb89cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4cb8a0:
    // 0x4cb8a0: 0x26264980  addiu       $a2, $s1, 0x4980
    ctx->pc = 0x4cb8a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 18816));
label_4cb8a4:
    // 0x4cb8a4: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x4cb8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
label_4cb8a8:
    // 0x4cb8a8: 0xac44000c  sw          $a0, 0xC($v0)
    ctx->pc = 0x4cb8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
label_4cb8ac:
    // 0x4cb8ac: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x4cb8acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4cb8b0:
    // 0x4cb8b0: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x4cb8b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_4cb8b4:
    // 0x4cb8b4: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x4cb8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_4cb8b8:
    // 0x4cb8b8: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_4cb8bc:
    if (ctx->pc == 0x4CB8BCu) {
        ctx->pc = 0x4CB8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CB8B8u;
        // 0x4cb8bc: 0xa2224980  sb          $v0, 0x4980($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 18816), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CB8C0u;
        goto label_4cb8c0;
    }
    ctx->pc = 0x4CB8B8u;
    {
        const bool branch_taken_0x4cb8b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CB8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CB8B8u;
        // 0x4cb8bc: 0xa2224980  sb          $v0, 0x4980($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 18816), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cb8b8) {
            ctx->pc = 0x4CB8DCu;
            goto label_4cb8dc;
        }
    }
    ctx->pc = 0x4CB8C0u;
label_4cb8c0:
    // 0x4cb8c0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4cb8c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_4cb8c4:
    // 0x4cb8c4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4cb8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_4cb8c8:
    // 0x4cb8c8: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x4cb8c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_4cb8cc:
    // 0x4cb8cc: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x4cb8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_4cb8d0:
    // 0x4cb8d0: 0x0  nop
    ctx->pc = 0x4cb8d0u;
    // NOP
label_4cb8d4:
    // 0x4cb8d4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_4cb8d8:
    if (ctx->pc == 0x4CB8D8u) {
        ctx->pc = 0x4CB8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CB8D4u;
        // 0x4cb8d8: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CB8DCu;
        goto label_4cb8dc;
    }
    ctx->pc = 0x4CB8D4u;
    {
        const bool branch_taken_0x4cb8d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CB8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CB8D4u;
        // 0x4cb8d8: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cb8d4) {
            ctx->pc = 0x4CB8C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4cb8c0;
        }
    }
    ctx->pc = 0x4CB8DCu;
label_4cb8dc:
    // 0x4cb8dc: 0x861023  subu        $v0, $a0, $a2
    ctx->pc = 0x4cb8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_4cb8e0:
    // 0x4cb8e0: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x4cb8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_4cb8e4:
    // 0x4cb8e4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x4cb8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_4cb8e8:
    // 0x4cb8e8: 0x26244980  addiu       $a0, $s1, 0x4980
    ctx->pc = 0x4cb8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 18816));
label_4cb8ec:
    // 0x4cb8ec: 0x438024  and         $s0, $v0, $v1
    ctx->pc = 0x4cb8ecu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_4cb8f0:
    // 0x4cb8f0: 0x2485ffff  addiu       $a1, $a0, -0x1
    ctx->pc = 0x4cb8f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_4cb8f4:
    // 0x4cb8f4: 0xc10f644  jal         func_43D910
label_4cb8f8:
    if (ctx->pc == 0x4CB8F8u) {
        ctx->pc = 0x4CB8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CB8F4u;
        // 0x4cb8f8: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CB8FCu;
        goto label_4cb8fc;
    }
    ctx->pc = 0x4CB8F4u;
    SET_GPR_U32(ctx, 31, 0x4CB8FCu);
    ctx->pc = 0x4CB8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CB8F4u;
    // 0x4cb8f8: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D910u, 0x4CB8F4u, 0x4CB8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CB8FCu;
label_4cb8fc:
    // 0x4cb8fc: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4cb8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
label_4cb900:
    // 0x4cb900: 0x8c433968  lw          $v1, 0x3968($v0)
    ctx->pc = 0x4cb900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14696)));
label_4cb904:
    // 0x4cb904: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_4cb908:
    if (ctx->pc == 0x4CB908u) {
        ctx->pc = 0x4CB908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CB904u;
        // 0x4cb908: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CB90Cu;
        goto label_4cb90c;
    }
    ctx->pc = 0x4CB904u;
    {
        const bool branch_taken_0x4cb904 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CB908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CB904u;
        // 0x4cb908: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cb904) {
            ctx->pc = 0x4CB914u;
            goto label_4cb914;
        }
    }
    ctx->pc = 0x4CB90Cu;
label_4cb90c:
    // 0x4cb90c: 0x10000003  b           . + 4 + (0x3 << 2)
label_4cb910:
    if (ctx->pc == 0x4CB910u) {
        ctx->pc = 0x4CB910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CB90Cu;
        // 0x4cb910: 0x2443fed8  addiu       $v1, $v0, -0x128 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CB914u;
        goto label_4cb914;
    }
    ctx->pc = 0x4CB90Cu;
    {
        const bool branch_taken_0x4cb90c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CB910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CB90Cu;
        // 0x4cb910: 0x2443fed8  addiu       $v1, $v0, -0x128 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cb90c) {
            ctx->pc = 0x4CB91Cu;
            goto label_4cb91c;
        }
    }
    ctx->pc = 0x4CB914u;
label_4cb914:
    // 0x4cb914: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x4cb914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
label_4cb918:
    // 0x4cb918: 0x2443fe98  addiu       $v1, $v0, -0x168
    ctx->pc = 0x4cb918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966936));
label_4cb91c:
    // 0x4cb91c: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x4cb91cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_4cb920:
    // 0x4cb920: 0x8e484a80  lw          $t0, 0x4A80($s2)
    ctx->pc = 0x4cb920u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 19072)));
label_4cb924:
    // 0x4cb924: 0x8c4446a0  lw          $a0, 0x46A0($v0)
    ctx->pc = 0x4cb924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18080)));
label_4cb928:
    // 0x4cb928: 0x26654900  addiu       $a1, $s3, 0x4900
    ctx->pc = 0x4cb928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 18688));
label_4cb92c:
    // 0x4cb92c: 0x26274980  addiu       $a3, $s1, 0x4980
    ctx->pc = 0x4cb92cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 18816));
label_4cb930:
    // 0x4cb930: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x4cb930u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4cb934:
    // 0x4cb934: 0x60f809  jalr        $v1
label_4cb938:
    if (ctx->pc == 0x4CB938u) {
        ctx->pc = 0x4CB938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CB934u;
        // 0x4cb938: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CB93Cu;
        goto label_4cb93c;
    }
    ctx->pc = 0x4CB934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4CB93Cu);
        ctx->pc = 0x4CB938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CB934u;
        // 0x4cb938: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CB934u, 0x4CB93Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4CB93Cu;
label_4cb93c:
    // 0x4cb93c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4cb93cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4cb940:
    // 0x4cb940: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4cb940u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_4cb944:
    // 0x4cb944: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4cb944u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4cb948:
    // 0x4cb948: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4cb948u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_4cb94c:
    // 0x4cb94c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4cb94cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4cb950:
    // 0x4cb950: 0x3e00008  jr          $ra
label_4cb954:
    if (ctx->pc == 0x4CB954u) {
        ctx->pc = 0x4CB954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CB950u;
        // 0x4cb954: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CB958u;
        goto label_fallthrough_0x4cb950;
    }
    ctx->pc = 0x4CB950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CB954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CB950u;
        // 0x4cb954: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CB950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4cb950:
    ctx->pc = 0x4CB958u;
}
