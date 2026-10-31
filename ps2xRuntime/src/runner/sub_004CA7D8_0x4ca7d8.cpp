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

// Function: sub_004CA7D8
// Address: 0x4ca7d8 - 0x4ca910
void sub_004CA7D8_0x4ca7d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CA7D8_0x4ca7d8");
#endif

    switch (ctx->pc) {
        case 0x4ca828u: goto label_4ca828;
        default: break;
    }

    ctx->pc = 0x4ca7d8u;

    // 0x4ca7d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4ca7d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4ca7dc: 0x80c02d  daddu       $t8, $a0, $zero
    ctx->pc = 0x4ca7dcu;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ca7e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ca7e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4ca7e4: 0x24afffff  addiu       $t7, $a1, -0x1
    ctx->pc = 0x4ca7e4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x4ca7e8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4ca7e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4ca7ec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4ca7ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4ca7f0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4ca7f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4ca7f4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4ca7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4ca7f8: 0x10a0003c  beqz        $a1, . + 4 + (0x3C << 2)
    ctx->pc = 0x4CA7F8u;
    {
        const bool branch_taken_0x4ca7f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CA7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CA7F8u;
        // 0x4ca7fc: 0xffb50028  sd          $s5, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ca7f8) {
            ctx->pc = 0x4CA8ECu;
            goto label_4ca8ec;
        }
    }
    ctx->pc = 0x4CA800u;
    // 0x4ca800: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4ca800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x4ca804: 0x3c100053  lui         $s0, 0x53
    ctx->pc = 0x4ca804u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)83 << 16));
    // 0x4ca808: 0x245928a0  addiu       $t9, $v0, 0x28A0
    ctx->pc = 0x4ca808u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
    // 0x4ca80c: 0x260c2860  addiu       $t4, $s0, 0x2860
    ctx->pc = 0x4ca80cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 16), 10336));
    // 0x4ca810: 0x27350800  addiu       $s5, $t9, 0x800
    ctx->pc = 0x4ca810u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 25), 2048));
    // 0x4ca814: 0x27340400  addiu       $s4, $t9, 0x400
    ctx->pc = 0x4ca814u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 25), 1024));
    // 0x4ca818: 0x27330c00  addiu       $s3, $t9, 0xC00
    ctx->pc = 0x4ca818u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 25), 3072));
    // 0x4ca81c: 0x3c120053  lui         $s2, 0x53
    ctx->pc = 0x4ca81cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)83 << 16));
    // 0x4ca820: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x4ca820u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4ca824: 0x8d8e0010  lw          $t6, 0x10($t4)
    ctx->pc = 0x4ca824u;
    SET_GPR_S32(ctx, 14, (int32_t)FAST_READ32(0x532870u));
label_4ca828:
    // 0x4ca828: 0x27180001  addiu       $t8, $t8, 0x1
    ctx->pc = 0x4ca828u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 1));
    // 0x4ca82c: 0x8d8d0014  lw          $t5, 0x14($t4)
    ctx->pc = 0x4ca82cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 20)));
    // 0x4ca830: 0x330b0001  andi        $t3, $t8, 0x1
    ctx->pc = 0x4ca830u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)1);
    // 0x4ca834: 0x91c70000  lbu         $a3, 0x0($t6)
    ctx->pc = 0x4ca834u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4ca838: 0x91a40000  lbu         $a0, 0x0($t5)
    ctx->pc = 0x4ca838u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4ca83c: 0x8d890008  lw          $t1, 0x8($t4)
    ctx->pc = 0x4ca83cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 8)));
    // 0x4ca840: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x4ca840u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x4ca844: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x4ca844u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x4ca848: 0xf52821  addu        $a1, $a3, $s5
    ctx->pc = 0x4ca848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 21)));
    // 0x4ca84c: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x4ca84cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4ca850: 0x944021  addu        $t0, $a0, $s4
    ctx->pc = 0x4ca850u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x4ca854: 0x8d060000  lw          $a2, 0x0($t0)
    ctx->pc = 0x4ca854u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4ca858: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x4ca858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x4ca85c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4ca85cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4ca860: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4ca860u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4ca864: 0x8e4a2850  lw          $t2, 0x2850($s2)
    ctx->pc = 0x4ca864u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10320)));
    // 0x4ca868: 0xf93821  addu        $a3, $a3, $t9
    ctx->pc = 0x4ca868u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 25)));
    // 0x4ca86c: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x4ca86cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4ca870: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x4ca870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x4ca874: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x4ca874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x4ca878: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x4ca878u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4ca87c: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x4ca87cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4ca880: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x4ca880u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x4ca884: 0xad890008  sw          $t1, 0x8($t4)
    ctx->pc = 0x4ca884u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 9));
    // 0x4ca888: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x4ca888u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x4ca88c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4ca88cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4ca890: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x4ca890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x4ca894: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x4ca894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x4ca898: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4ca898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4ca89c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4ca89cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4ca8a0: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x4ca8a0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x4ca8a4: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x4ca8a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x4ca8a8: 0x8e052860  lw          $a1, 0x2860($s0)
    ctx->pc = 0x4ca8a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10336)));
    // 0x4ca8ac: 0x8cc70000  lw          $a3, 0x0($a2)
    ctx->pc = 0x4ca8acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4ca8b0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4ca8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4ca8b4: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x4ca8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x4ca8b8: 0x24a30004  addiu       $v1, $a1, 0x4
    ctx->pc = 0x4ca8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x4ca8bc: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x4ca8bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x4ca8c0: 0xae032860  sw          $v1, 0x2860($s0)
    ctx->pc = 0x4ca8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10336), GPR_U32(ctx, 3));
    // 0x4ca8c4: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4ca8c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4ca8c8: 0x15600005  bnez        $t3, . + 4 + (0x5 << 2)
    ctx->pc = 0x4CA8C8u;
    {
        const bool branch_taken_0x4ca8c8 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CA8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CA8C8u;
        // 0x4ca8cc: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ca8c8) {
            ctx->pc = 0x4CA8E0u;
            goto label_4ca8e0;
        }
    }
    ctx->pc = 0x4CA8D0u;
    // 0x4ca8d0: 0x25c20001  addiu       $v0, $t6, 0x1
    ctx->pc = 0x4ca8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x4ca8d4: 0x25a30001  addiu       $v1, $t5, 0x1
    ctx->pc = 0x4ca8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x4ca8d8: 0xad820010  sw          $v0, 0x10($t4)
    ctx->pc = 0x4ca8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 16), GPR_U32(ctx, 2));
    // 0x4ca8dc: 0xad830014  sw          $v1, 0x14($t4)
    ctx->pc = 0x4ca8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 20), GPR_U32(ctx, 3));
label_4ca8e0:
    // 0x4ca8e0: 0x25efffff  addiu       $t7, $t7, -0x1
    ctx->pc = 0x4ca8e0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
    // 0x4ca8e4: 0x55f1ffd0  bnel        $t7, $s1, . + 4 + (-0x30 << 2)
    ctx->pc = 0x4CA8E4u;
    {
        const bool branch_taken_0x4ca8e4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 17));
        if (branch_taken_0x4ca8e4) {
            ctx->pc = 0x4CA8E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4CA8E4u;
            // 0x4ca8e8: 0x8d8e0010  lw          $t6, 0x10($t4) (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4CA828u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4ca828;
        }
    }
    ctx->pc = 0x4CA8ECu;
label_4ca8ec:
    // 0x4ca8ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ca8ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ca8f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4ca8f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ca8f4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4ca8f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ca8f8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4ca8f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4ca8fc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4ca8fcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ca900: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4ca900u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4ca904: 0x3e00008  jr          $ra
    ctx->pc = 0x4CA904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CA908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CA904u;
        // 0x4ca908: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CA904u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4CA90Cu;
    // 0x4ca90c: 0x0  nop
    ctx->pc = 0x4ca90cu;
    // NOP
    ctx->pc = 0x4ca910u;
}
