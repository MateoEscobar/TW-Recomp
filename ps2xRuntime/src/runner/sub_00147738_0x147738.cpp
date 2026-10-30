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

// Function: sub_00147738
// Address: 0x147738 - 0x147940
void sub_00147738_0x147738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00147738_0x147738");
#endif

    switch (ctx->pc) {
        case 0x147758u: goto label_147758;
        case 0x147764u: goto label_147764;
        case 0x1477a0u: goto label_1477a0;
        case 0x1477d8u: goto label_1477d8;
        case 0x147810u: goto label_147810;
        case 0x147840u: goto label_147840;
        case 0x147878u: goto label_147878;
        case 0x1478b0u: goto label_1478b0;
        case 0x1478e8u: goto label_1478e8;
        case 0x147920u: goto label_147920;
        default: break;
    }

    ctx->pc = 0x147738u;

    // 0x147738: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x147738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x14773c: 0x8c43b740  lw          $v1, -0x48C0($v0)
    ctx->pc = 0x14773cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50B740u));
    // 0x147740: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x147740u;
    {
        const bool branch_taken_0x147740 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x147744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147740u;
        // 0x147744: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147740) {
            ctx->pc = 0x147784u;
            goto label_147784;
        }
    }
    ctx->pc = 0x147748u;
    // 0x147748: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x147748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x14774c: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x14774cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147750: 0x2443dd10  addiu       $v1, $v0, -0x22F0
    ctx->pc = 0x147750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958352));
    // 0x147754: 0x0  nop
    ctx->pc = 0x147754u;
    // NOP
label_147758:
    // 0x147758: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x147758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x14775c: 0x14450006  bne         $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x14775Cu;
    {
        const bool branch_taken_0x14775c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x147760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14775Cu;
        // 0x147760: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14775c) {
            ctx->pc = 0x147778u;
            goto label_147778;
        }
    }
    ctx->pc = 0x147764u;
label_147764:
    // 0x147764: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x147764u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x147768: 0x80830019  lb          $v1, 0x19($a0)
    ctx->pc = 0x147768u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 25)));
    // 0x14776c: 0x621007  srav        $v0, $v0, $v1
    ctx->pc = 0x14776cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x147770: 0x3e00008  jr          $ra
    ctx->pc = 0x147770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x147774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147770u;
        // 0x147774: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x147770u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x147778u;
label_147778:
    // 0x147778: 0xc7102b  sltu        $v0, $a2, $a3
    ctx->pc = 0x147778u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x14777c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x14777Cu;
    {
        const bool branch_taken_0x14777c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x147780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14777Cu;
        // 0x147780: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14777c) {
            ctx->pc = 0x147758u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_147758;
        }
    }
    ctx->pc = 0x147784u;
label_147784:
    // 0x147784: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x147784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x147788: 0x8c43b744  lw          $v1, -0x48BC($v0)
    ctx->pc = 0x147788u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50B744u));
    // 0x14778c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x14778Cu;
    {
        const bool branch_taken_0x14778c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x147790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14778Cu;
        // 0x147790: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14778c) {
            ctx->pc = 0x1477B8u;
            goto label_1477b8;
        }
    }
    ctx->pc = 0x147794u;
    // 0x147794: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x147794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x147798: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x147798u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14779c: 0x2443ddd0  addiu       $v1, $v0, -0x2230
    ctx->pc = 0x14779cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958544));
label_1477a0:
    // 0x1477a0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1477a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1477a4: 0x1045ffef  beq         $v0, $a1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1477A4u;
    {
        const bool branch_taken_0x1477a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1477A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1477A4u;
        // 0x1477a8: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1477a4) {
            ctx->pc = 0x147764u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_147764;
        }
    }
    ctx->pc = 0x1477ACu;
    // 0x1477ac: 0xc7102b  sltu        $v0, $a2, $a3
    ctx->pc = 0x1477acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1477b0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1477B0u;
    {
        const bool branch_taken_0x1477b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1477B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1477B0u;
        // 0x1477b4: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1477b0) {
            ctx->pc = 0x1477A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1477a0;
        }
    }
    ctx->pc = 0x1477B8u;
label_1477b8:
    // 0x1477b8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1477b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1477bc: 0x8c43b748  lw          $v1, -0x48B8($v0)
    ctx->pc = 0x1477bcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50B748u));
    // 0x1477c0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1477C0u;
    {
        const bool branch_taken_0x1477c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1477C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1477C0u;
        // 0x1477c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1477c0) {
            ctx->pc = 0x1477F0u;
            goto label_1477f0;
        }
    }
    ctx->pc = 0x1477C8u;
    // 0x1477c8: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x1477c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x1477cc: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x1477ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1477d0: 0x2443de90  addiu       $v1, $v0, -0x2170
    ctx->pc = 0x1477d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958736));
    // 0x1477d4: 0x0  nop
    ctx->pc = 0x1477d4u;
    // NOP
label_1477d8:
    // 0x1477d8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1477d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1477dc: 0x1045ffe1  beq         $v0, $a1, . + 4 + (-0x1F << 2)
    ctx->pc = 0x1477DCu;
    {
        const bool branch_taken_0x1477dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1477E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1477DCu;
        // 0x1477e0: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1477dc) {
            ctx->pc = 0x147764u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_147764;
        }
    }
    ctx->pc = 0x1477E4u;
    // 0x1477e4: 0xc7102b  sltu        $v0, $a2, $a3
    ctx->pc = 0x1477e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1477e8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1477E8u;
    {
        const bool branch_taken_0x1477e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1477ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1477E8u;
        // 0x1477ec: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1477e8) {
            ctx->pc = 0x1477D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1477d8;
        }
    }
    ctx->pc = 0x1477F0u;
label_1477f0:
    // 0x1477f0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1477f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1477f4: 0x8c43b74c  lw          $v1, -0x48B4($v0)
    ctx->pc = 0x1477f4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50B74Cu));
    // 0x1477f8: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1477F8u;
    {
        const bool branch_taken_0x1477f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1477FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1477F8u;
        // 0x1477fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1477f8) {
            ctx->pc = 0x147828u;
            goto label_147828;
        }
    }
    ctx->pc = 0x147800u;
    // 0x147800: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x147800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x147804: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x147804u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147808: 0x2443def0  addiu       $v1, $v0, -0x2110
    ctx->pc = 0x147808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958832));
    // 0x14780c: 0x0  nop
    ctx->pc = 0x14780cu;
    // NOP
label_147810:
    // 0x147810: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x147810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x147814: 0x1045ffd3  beq         $v0, $a1, . + 4 + (-0x2D << 2)
    ctx->pc = 0x147814u;
    {
        const bool branch_taken_0x147814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x147818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147814u;
        // 0x147818: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147814) {
            ctx->pc = 0x147764u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_147764;
        }
    }
    ctx->pc = 0x14781Cu;
    // 0x14781c: 0xc7102b  sltu        $v0, $a2, $a3
    ctx->pc = 0x14781cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x147820: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x147820u;
    {
        const bool branch_taken_0x147820 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x147824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147820u;
        // 0x147824: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147820) {
            ctx->pc = 0x147810u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_147810;
        }
    }
    ctx->pc = 0x147828u;
label_147828:
    // 0x147828: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x147828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x14782c: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x14782cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x147830: 0x8c47b750  lw          $a3, -0x48B0($v0)
    ctx->pc = 0x147830u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x50B750u));
    // 0x147834: 0x2463df50  addiu       $v1, $v1, -0x20B0
    ctx->pc = 0x147834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958928));
    // 0x147838: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x147838u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14783c: 0x0  nop
    ctx->pc = 0x14783cu;
    // NOP
label_147840:
    // 0x147840: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x147840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x147844: 0x1045ffc7  beq         $v0, $a1, . + 4 + (-0x39 << 2)
    ctx->pc = 0x147844u;
    {
        const bool branch_taken_0x147844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x147848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147844u;
        // 0x147848: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147844) {
            ctx->pc = 0x147764u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_147764;
        }
    }
    ctx->pc = 0x14784Cu;
    // 0x14784c: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x14784cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x147850: 0x1040fffb  beqz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x147850u;
    {
        const bool branch_taken_0x147850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x147854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147850u;
        // 0x147854: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147850) {
            ctx->pc = 0x147840u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_147840;
        }
    }
    ctx->pc = 0x147858u;
    // 0x147858: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x147858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x14785c: 0x8c43b754  lw          $v1, -0x48AC($v0)
    ctx->pc = 0x14785cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50B754u));
    // 0x147860: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x147860u;
    {
        const bool branch_taken_0x147860 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x147864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147860u;
        // 0x147864: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147860) {
            ctx->pc = 0x147890u;
            goto label_147890;
        }
    }
    ctx->pc = 0x147868u;
    // 0x147868: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x147868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x14786c: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x14786cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147870: 0x2443dfb0  addiu       $v1, $v0, -0x2050
    ctx->pc = 0x147870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959024));
    // 0x147874: 0x0  nop
    ctx->pc = 0x147874u;
    // NOP
label_147878:
    // 0x147878: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x147878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x14787c: 0x1045ffb9  beq         $v0, $a1, . + 4 + (-0x47 << 2)
    ctx->pc = 0x14787Cu;
    {
        const bool branch_taken_0x14787c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x147880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14787Cu;
        // 0x147880: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14787c) {
            ctx->pc = 0x147764u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_147764;
        }
    }
    ctx->pc = 0x147884u;
    // 0x147884: 0xc7102b  sltu        $v0, $a2, $a3
    ctx->pc = 0x147884u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x147888: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x147888u;
    {
        const bool branch_taken_0x147888 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14788Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147888u;
        // 0x14788c: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147888) {
            ctx->pc = 0x147878u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_147878;
        }
    }
    ctx->pc = 0x147890u;
label_147890:
    // 0x147890: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x147890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x147894: 0x8c43b758  lw          $v1, -0x48A8($v0)
    ctx->pc = 0x147894u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50B758u));
    // 0x147898: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x147898u;
    {
        const bool branch_taken_0x147898 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14789Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147898u;
        // 0x14789c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147898) {
            ctx->pc = 0x1478C8u;
            goto label_1478c8;
        }
    }
    ctx->pc = 0x1478A0u;
    // 0x1478a0: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x1478a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x1478a4: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x1478a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1478a8: 0x2443e010  addiu       $v1, $v0, -0x1FF0
    ctx->pc = 0x1478a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959120));
    // 0x1478ac: 0x0  nop
    ctx->pc = 0x1478acu;
    // NOP
label_1478b0:
    // 0x1478b0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1478b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1478b4: 0x1045ffab  beq         $v0, $a1, . + 4 + (-0x55 << 2)
    ctx->pc = 0x1478B4u;
    {
        const bool branch_taken_0x1478b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1478B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1478B4u;
        // 0x1478b8: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1478b4) {
            ctx->pc = 0x147764u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_147764;
        }
    }
    ctx->pc = 0x1478BCu;
    // 0x1478bc: 0xc7102b  sltu        $v0, $a2, $a3
    ctx->pc = 0x1478bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1478c0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1478C0u;
    {
        const bool branch_taken_0x1478c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1478C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1478C0u;
        // 0x1478c4: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1478c0) {
            ctx->pc = 0x1478B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1478b0;
        }
    }
    ctx->pc = 0x1478C8u;
label_1478c8:
    // 0x1478c8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1478c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1478cc: 0x8c43b75c  lw          $v1, -0x48A4($v0)
    ctx->pc = 0x1478ccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50B75Cu));
    // 0x1478d0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1478D0u;
    {
        const bool branch_taken_0x1478d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1478D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1478D0u;
        // 0x1478d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1478d0) {
            ctx->pc = 0x147900u;
            goto label_147900;
        }
    }
    ctx->pc = 0x1478D8u;
    // 0x1478d8: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x1478d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x1478dc: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x1478dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1478e0: 0x2443e070  addiu       $v1, $v0, -0x1F90
    ctx->pc = 0x1478e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959216));
    // 0x1478e4: 0x0  nop
    ctx->pc = 0x1478e4u;
    // NOP
label_1478e8:
    // 0x1478e8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1478e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1478ec: 0x1045ff9d  beq         $v0, $a1, . + 4 + (-0x63 << 2)
    ctx->pc = 0x1478ECu;
    {
        const bool branch_taken_0x1478ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1478F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1478ECu;
        // 0x1478f0: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1478ec) {
            ctx->pc = 0x147764u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_147764;
        }
    }
    ctx->pc = 0x1478F4u;
    // 0x1478f4: 0xc7102b  sltu        $v0, $a2, $a3
    ctx->pc = 0x1478f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1478f8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1478F8u;
    {
        const bool branch_taken_0x1478f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1478FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1478F8u;
        // 0x1478fc: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1478f8) {
            ctx->pc = 0x1478E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1478e8;
        }
    }
    ctx->pc = 0x147900u;
label_147900:
    // 0x147900: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x147900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x147904: 0x8c43b760  lw          $v1, -0x48A0($v0)
    ctx->pc = 0x147904u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50B760u));
    // 0x147908: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x147908u;
    {
        const bool branch_taken_0x147908 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14790Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147908u;
        // 0x14790c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147908) {
            ctx->pc = 0x147938u;
            goto label_147938;
        }
    }
    ctx->pc = 0x147910u;
    // 0x147910: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x147910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x147914: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x147914u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147918: 0x2443e130  addiu       $v1, $v0, -0x1ED0
    ctx->pc = 0x147918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959408));
    // 0x14791c: 0x0  nop
    ctx->pc = 0x14791cu;
    // NOP
label_147920:
    // 0x147920: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x147920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x147924: 0x1045ff8f  beq         $v0, $a1, . + 4 + (-0x71 << 2)
    ctx->pc = 0x147924u;
    {
        const bool branch_taken_0x147924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x147928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147924u;
        // 0x147928: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147924) {
            ctx->pc = 0x147764u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_147764;
        }
    }
    ctx->pc = 0x14792Cu;
    // 0x14792c: 0xc7102b  sltu        $v0, $a2, $a3
    ctx->pc = 0x14792cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x147930: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x147930u;
    {
        const bool branch_taken_0x147930 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x147934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147930u;
        // 0x147934: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147930) {
            ctx->pc = 0x147920u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_147920;
        }
    }
    ctx->pc = 0x147938u;
label_147938:
    // 0x147938: 0x3e00008  jr          $ra
    ctx->pc = 0x147938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14793Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147938u;
        // 0x14793c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x147938u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x147940u;
}
