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

// Function: sub_0042C548
// Address: 0x42c548 - 0x42c658
void sub_0042C548_0x42c548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042C548_0x42c548");
#endif

    ctx->pc = 0x42c548u;

    // 0x42c548: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x42c548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x42c54c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x42c54cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42c550: 0x8c880004  lw          $t0, 0x4($a0)
    ctx->pc = 0x42c550u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x42c554: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x42c554u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x42c558: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x42C558u;
    {
        const bool branch_taken_0x42c558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42C55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C558u;
        // 0x42c55c: 0x8c85000c  lw          $a1, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c558) {
            ctx->pc = 0x42C570u;
            goto label_42c570;
        }
    }
    ctx->pc = 0x42C560u;
    // 0x42c560: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x42c560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x42c564: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x42c564u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x42c568: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x42C568u;
    {
        const bool branch_taken_0x42c568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42C56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C568u;
        // 0x42c56c: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c568) {
            ctx->pc = 0x42C604u;
            goto label_42c604;
        }
    }
    ctx->pc = 0x42C570u;
label_42c570:
    // 0x42c570: 0x38620004  xori        $v0, $v1, 0x4
    ctx->pc = 0x42c570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
    // 0x42c574: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x42C574u;
    {
        const bool branch_taken_0x42c574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42C578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C574u;
        // 0x42c578: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c574) {
            ctx->pc = 0x42C5C8u;
            goto label_42c5c8;
        }
    }
    ctx->pc = 0x42C57Cu;
    // 0x42c57c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x42C57Cu;
    {
        const bool branch_taken_0x42c57c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x42c57c) {
            ctx->pc = 0x42C58Cu;
            goto label_42c58c;
        }
    }
    ctx->pc = 0x42C584u;
    // 0x42c584: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x42C584u;
    {
        const bool branch_taken_0x42c584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42C588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C584u;
        // 0x42c588: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c584) {
            ctx->pc = 0x42C604u;
            goto label_42c604;
        }
    }
    ctx->pc = 0x42C58Cu;
label_42c58c:
    // 0x42c58c: 0x10a0001e  beqz        $a1, . + 4 + (0x1E << 2)
    ctx->pc = 0x42C58Cu;
    {
        const bool branch_taken_0x42c58c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x42C590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C58Cu;
        // 0x42c590: 0x3c03ff80  lui         $v1, 0xFF80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65408 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c58c) {
            ctx->pc = 0x42C608u;
            goto label_42c608;
        }
    }
    ctx->pc = 0x42C594u;
    // 0x42c594: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x42c594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x42c598: 0x2862ff82  slti        $v0, $v1, -0x7E
    ctx->pc = 0x42c598u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967170) ? 1 : 0);
    // 0x42c59c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x42C59Cu;
    {
        const bool branch_taken_0x42c59c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42C5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C59Cu;
        // 0x42c5a0: 0x2402ff82  addiu       $v0, $zero, -0x7E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967170));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c59c) {
            ctx->pc = 0x42C5BCu;
            goto label_42c5bc;
        }
    }
    ctx->pc = 0x42C5A4u;
    // 0x42c5a4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x42c5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x42c5a8: 0x2843001a  slti        $v1, $v0, 0x1A
    ctx->pc = 0x42c5a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)26) ? 1 : 0);
    // 0x42c5ac: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x42C5ACu;
    {
        const bool branch_taken_0x42c5ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x42C5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C5ACu;
        // 0x42c5b0: 0x452806  srlv        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 2) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c5ac) {
            ctx->pc = 0x42C600u;
            goto label_42c600;
        }
    }
    ctx->pc = 0x42C5B4u;
    // 0x42c5b4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x42C5B4u;
    {
        const bool branch_taken_0x42c5b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42C5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C5B4u;
        // 0x42c5b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c5b4) {
            ctx->pc = 0x42C600u;
            goto label_42c600;
        }
    }
    ctx->pc = 0x42C5BCu;
label_42c5bc:
    // 0x42c5bc: 0x28620080  slti        $v0, $v1, 0x80
    ctx->pc = 0x42c5bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x42c5c0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x42C5C0u;
    {
        const bool branch_taken_0x42c5c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42C5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C5C0u;
        // 0x42c5c4: 0x2467007f  addiu       $a3, $v1, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c5c0) {
            ctx->pc = 0x42C5D4u;
            goto label_42c5d4;
        }
    }
    ctx->pc = 0x42C5C8u;
label_42c5c8:
    // 0x42c5c8: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x42c5c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x42c5cc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x42C5CCu;
    {
        const bool branch_taken_0x42c5cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42C5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C5CCu;
        // 0x42c5d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c5cc) {
            ctx->pc = 0x42C604u;
            goto label_42c604;
        }
    }
    ctx->pc = 0x42C5D4u;
label_42c5d4:
    // 0x42c5d4: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x42c5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x42c5d8: 0x30a3007f  andi        $v1, $a1, 0x7F
    ctx->pc = 0x42c5d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)127);
    // 0x42c5dc: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x42C5DCu;
    {
        const bool branch_taken_0x42c5dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x42c5dc) {
            ctx->pc = 0x42C5E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42C5DCu;
            // 0x42c5e0: 0x24a5003f  addiu       $a1, $a1, 0x3F (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 63));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42C5F0u;
            goto label_42c5f0;
        }
    }
    ctx->pc = 0x42C5E4u;
    // 0x42c5e4: 0x30a30080  andi        $v1, $a1, 0x80
    ctx->pc = 0x42c5e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
    // 0x42c5e8: 0x24a20040  addiu       $v0, $a1, 0x40
    ctx->pc = 0x42c5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x42c5ec: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x42c5ecu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
label_42c5f0:
    // 0x42c5f0: 0x4a30004  bgezl       $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x42C5F0u;
    {
        const bool branch_taken_0x42c5f0 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x42c5f0) {
            ctx->pc = 0x42C5F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42C5F0u;
            // 0x42c5f4: 0x529c2  srl         $a1, $a1, 7 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42C604u;
            goto label_42c604;
        }
    }
    ctx->pc = 0x42C5F8u;
    // 0x42c5f8: 0x52842  srl         $a1, $a1, 1
    ctx->pc = 0x42c5f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x42c5fc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x42c5fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_42c600:
    // 0x42c600: 0x529c2  srl         $a1, $a1, 7
    ctx->pc = 0x42c600u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 7));
label_42c604:
    // 0x42c604: 0x3c03ff80  lui         $v1, 0xFF80
    ctx->pc = 0x42c604u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65408 << 16));
label_42c608:
    // 0x42c608: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x42c608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x42c60c: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x42c60cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x42c610: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x42c610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x42c614: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x42c614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x42c618: 0x3c03807f  lui         $v1, 0x807F
    ctx->pc = 0x42c618u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32895 << 16));
    // 0x42c61c: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x42c61cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x42c620: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x42c620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x42c624: 0x30e400ff  andi        $a0, $a3, 0xFF
    ctx->pc = 0x42c624u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x42c628: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x42c628u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x42c62c: 0x425c0  sll         $a0, $a0, 23
    ctx->pc = 0x42c62cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 23));
    // 0x42c630: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x42c630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x42c634: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x42c634u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x42c638: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x42c638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x42c63c: 0x81fc0  sll         $v1, $t0, 31
    ctx->pc = 0x42c63cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 31));
    // 0x42c640: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x42c640u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x42c644: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x42c644u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x42c648: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x42c648u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x42c64c: 0x3e00008  jr          $ra
    ctx->pc = 0x42C64Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42C64Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42C654u;
    // 0x42c654: 0x0  nop
    ctx->pc = 0x42c654u;
    // NOP
    ctx->pc = 0x42c658u;
}
