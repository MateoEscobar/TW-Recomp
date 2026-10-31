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

// Function: sub_001A54E8
// Address: 0x1a54e8 - 0x1a55c8
void sub_001A54E8_0x1a54e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A54E8_0x1a54e8");
#endif

    switch (ctx->pc) {
        case 0x1a5518u: goto label_1a5518;
        default: break;
    }

    ctx->pc = 0x1a54e8u;

    // 0x1a54e8: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x1a54e8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a54ec: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a54ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a54f0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1a54f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a54f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a54f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a54f8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1a54f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a54fc: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x1A54FCu;
    {
        const bool branch_taken_0x1a54fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A54FCu;
        // 0x1a5500: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a54fc) {
            ctx->pc = 0x1A55B4u;
            goto label_1a55b4;
        }
    }
    ctx->pc = 0x1A5504u;
    // 0x1a5504: 0x240e003c  addiu       $t6, $zero, 0x3C
    ctx->pc = 0x1a5504u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1a5508: 0x240d003e  addiu       $t5, $zero, 0x3E
    ctx->pc = 0x1a5508u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x1a550c: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x1a550cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a5510: 0x240b0043  addiu       $t3, $zero, 0x43
    ctx->pc = 0x1a5510u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1a5514: 0x240a0052  addiu       $t2, $zero, 0x52
    ctx->pc = 0x1a5514u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
label_1a5518:
    // 0x1a5518: 0x146e0003  bne         $v1, $t6, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A5518u;
    {
        const bool branch_taken_0x1a5518 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 14));
        if (branch_taken_0x1a5518) {
            ctx->pc = 0x1A5528u;
            goto label_1a5528;
        }
    }
    ctx->pc = 0x1A5520u;
    // 0x1a5520: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1A5520u;
    {
        const bool branch_taken_0x1a5520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5520u;
        // 0x1a5524: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5520) {
            ctx->pc = 0x1A55A4u;
            goto label_1a55a4;
        }
    }
    ctx->pc = 0x1A5528u;
label_1a5528:
    // 0x1a5528: 0x146d0004  bne         $v1, $t5, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A5528u;
    {
        const bool branch_taken_0x1a5528 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 13));
        if (branch_taken_0x1a5528) {
            ctx->pc = 0x1A553Cu;
            goto label_1a553c;
        }
    }
    ctx->pc = 0x1A5530u;
    // 0x1a5530: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1a5530u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1a5534: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1A5534u;
    {
        const bool branch_taken_0x1a5534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5534u;
        // 0x1a5538: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5534) {
            ctx->pc = 0x1A55A4u;
            goto label_1a55a4;
        }
    }
    ctx->pc = 0x1A553Cu;
label_1a553c:
    // 0x1a553c: 0x14cc0018  bne         $a2, $t4, . + 4 + (0x18 << 2)
    ctx->pc = 0x1A553Cu;
    {
        const bool branch_taken_0x1a553c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 12));
        ctx->pc = 0x1A5540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A553Cu;
        // 0x1a5540: 0x25020001  addiu       $v0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a553c) {
            ctx->pc = 0x1A55A0u;
            goto label_1a55a0;
        }
    }
    ctx->pc = 0x1A5544u;
    // 0x1a5544: 0x29220002  slti        $v0, $t1, 0x2
    ctx->pc = 0x1a5544u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1a5548: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1A5548u;
    {
        const bool branch_taken_0x1a5548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A554Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5548u;
        // 0x1a554c: 0x3a91021  addu        $v0, $sp, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5548) {
            ctx->pc = 0x1A559Cu;
            goto label_1a559c;
        }
    }
    ctx->pc = 0x1A5550u;
    // 0x1a5550: 0x15260010  bne         $t1, $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x1A5550u;
    {
        const bool branch_taken_0x1a5550 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 6));
        ctx->pc = 0x1A5554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5550u;
        // 0x1a5554: 0xa0430000  sb          $v1, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5550) {
            ctx->pc = 0x1A5594u;
            goto label_1a5594;
        }
    }
    ctx->pc = 0x1A5558u;
    // 0x1a5558: 0x83a20000  lb          $v0, 0x0($sp)
    ctx->pc = 0x1a5558u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a555c: 0x544b0011  bnel        $v0, $t3, . + 4 + (0x11 << 2)
    ctx->pc = 0x1A555Cu;
    {
        const bool branch_taken_0x1a555c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 11));
        if (branch_taken_0x1a555c) {
            ctx->pc = 0x1A5560u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A555Cu;
            // 0x1a5560: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A55A4u;
            goto label_1a55a4;
        }
    }
    ctx->pc = 0x1A5564u;
    // 0x1a5564: 0x93a20001  lbu         $v0, 0x1($sp)
    ctx->pc = 0x1a5564u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x1a5568: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x1a5568u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1a556c: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x1a556cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x1a5570: 0x544a000c  bnel        $v0, $t2, . + 4 + (0xC << 2)
    ctx->pc = 0x1A5570u;
    {
        const bool branch_taken_0x1a5570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 10));
        if (branch_taken_0x1a5570) {
            ctx->pc = 0x1A5574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A5570u;
            // 0x1a5574: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A55A4u;
            goto label_1a55a4;
        }
    }
    ctx->pc = 0x1A5578u;
    // 0x1a5578: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1a5578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a557c: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x1a557cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1a5580: 0x102380b  movn        $a3, $t0, $v0
    ctx->pc = 0x1a5580u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 8));
    // 0x1a5584: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a5584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a5588: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1a5588u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a558c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1A558Cu;
    {
        const bool branch_taken_0x1a558c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A558Cu;
        // 0x1a5590: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a558c) {
            ctx->pc = 0x1A55A4u;
            goto label_1a55a4;
        }
    }
    ctx->pc = 0x1A5594u;
label_1a5594:
    // 0x1a5594: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A5594u;
    {
        const bool branch_taken_0x1a5594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5594u;
        // 0x1a5598: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5594) {
            ctx->pc = 0x1A55A4u;
            goto label_1a55a4;
        }
    }
    ctx->pc = 0x1A559Cu;
label_1a559c:
    // 0x1a559c: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x1a559cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1a55a0:
    // 0x1a55a0: 0x46400a  movz        $t0, $v0, $a2
    ctx->pc = 0x1a55a0u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 2));
label_1a55a4:
    // 0x1a55a4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1a55a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1a55a8: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x1a55a8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a55ac: 0x1460ffda  bnez        $v1, . + 4 + (-0x26 << 2)
    ctx->pc = 0x1A55ACu;
    {
        const bool branch_taken_0x1a55ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a55ac) {
            ctx->pc = 0x1A5518u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a5518;
        }
    }
    ctx->pc = 0x1A55B4u;
label_1a55b4:
    // 0x1a55b4: 0xe8182a  slt         $v1, $a3, $t0
    ctx->pc = 0x1a55b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1a55b8: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x1a55b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a55bc: 0xe3100a  movz        $v0, $a3, $v1
    ctx->pc = 0x1a55bcu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 7));
    // 0x1a55c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A55C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A55C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A55C0u;
        // 0x1a55c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A55C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A55C8u;
}
