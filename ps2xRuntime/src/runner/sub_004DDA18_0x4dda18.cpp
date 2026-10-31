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

// Function: sub_004DDA18
// Address: 0x4dda18 - 0x4ddb58
void sub_004DDA18_0x4dda18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DDA18_0x4dda18");
#endif

    switch (ctx->pc) {
        case 0x4ddad0u: goto label_4ddad0;
        case 0x4ddb30u: goto label_4ddb30;
        case 0x4ddb44u: goto label_4ddb44;
        default: break;
    }

    ctx->pc = 0x4dda18u;

    // 0x4dda18: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x4dda18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x4dda1c: 0x240e0054  addiu       $t6, $zero, 0x54
    ctx->pc = 0x4dda1cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x4dda20: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x4dda20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x4dda24: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x4dda24u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4dda28: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x4dda28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x4dda2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4dda2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4dda30: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x4dda30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x4dda34: 0x2602000c  addiu       $v0, $s0, 0xC
    ctx->pc = 0x4dda34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x4dda38: 0x2603001c  addiu       $v1, $s0, 0x1C
    ctx->pc = 0x4dda38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x4dda3c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4dda3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4dda40: 0x8e0a000c  lw          $t2, 0xC($s0)
    ctx->pc = 0x4dda40u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x4dda44: 0x8e09001c  lw          $t1, 0x1C($s0)
    ctx->pc = 0x4dda44u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x4dda48: 0xafaa0000  sw          $t2, 0x0($sp)
    ctx->pc = 0x4dda48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 10));
    // 0x4dda4c: 0x120602d  daddu       $t4, $t1, $zero
    ctx->pc = 0x4dda4cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4dda50: 0x8c480004  lw          $t0, 0x4($v0)
    ctx->pc = 0x4dda50u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x4dda54: 0xafa80004  sw          $t0, 0x4($sp)
    ctx->pc = 0x4dda54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 8));
    // 0x4dda58: 0x8c470008  lw          $a3, 0x8($v0)
    ctx->pc = 0x4dda58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x4dda5c: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x4dda5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x4dda60: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x4dda60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x4dda64: 0xafa90010  sw          $t1, 0x10($sp)
    ctx->pc = 0x4dda64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 9));
    // 0x4dda68: 0xafa6000c  sw          $a2, 0xC($sp)
    ctx->pc = 0x4dda68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
    // 0x4dda6c: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x4dda6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x4dda70: 0xafa50014  sw          $a1, 0x14($sp)
    ctx->pc = 0x4dda70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 5));
    // 0x4dda74: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x4dda74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x4dda78: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x4dda78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x4dda7c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4dda7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x4dda80: 0xafaa0040  sw          $t2, 0x40($sp)
    ctx->pc = 0x4dda80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 10));
    // 0x4dda84: 0xafa80044  sw          $t0, 0x44($sp)
    ctx->pc = 0x4dda84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 8));
    // 0x4dda88: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x4dda88u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4dda8c: 0xafa70048  sw          $a3, 0x48($sp)
    ctx->pc = 0x4dda8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 7));
    // 0x4dda90: 0xafa6004c  sw          $a2, 0x4C($sp)
    ctx->pc = 0x4dda90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 6));
    // 0x4dda94: 0xafa50054  sw          $a1, 0x54($sp)
    ctx->pc = 0x4dda94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 5));
    // 0x4dda98: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x4dda98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x4dda9c: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x4dda9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x4ddaa0: 0xafaa0020  sw          $t2, 0x20($sp)
    ctx->pc = 0x4ddaa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 10));
    // 0x4ddaa4: 0xafa80024  sw          $t0, 0x24($sp)
    ctx->pc = 0x4ddaa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 8));
    // 0x4ddaa8: 0xafa70028  sw          $a3, 0x28($sp)
    ctx->pc = 0x4ddaa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 7));
    // 0x4ddaac: 0xafa6002c  sw          $a2, 0x2C($sp)
    ctx->pc = 0x4ddaacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 6));
    // 0x4ddab0: 0xafa90030  sw          $t1, 0x30($sp)
    ctx->pc = 0x4ddab0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 9));
    // 0x4ddab4: 0xafa50034  sw          $a1, 0x34($sp)
    ctx->pc = 0x4ddab4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 5));
    // 0x4ddab8: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x4ddab8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x4ddabc: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x4ddabcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    // 0x4ddac0: 0xafa90050  sw          $t1, 0x50($sp)
    ctx->pc = 0x4ddac0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 9));
    // 0x4ddac4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x4DDAC4u;
    {
        const bool branch_taken_0x4ddac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DDAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DDAC4u;
        // 0x4ddac8: 0xafa2005c  sw          $v0, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ddac4) {
            ctx->pc = 0x4DDB08u;
            goto label_4ddb08;
        }
    }
    ctx->pc = 0x4DDACCu;
    // 0x4ddacc: 0x0  nop
    ctx->pc = 0x4ddaccu;
    // NOP
label_4ddad0:
    // 0x4ddad0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x4ddad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4ddad4: 0x24420054  addiu       $v0, $v0, 0x54
    ctx->pc = 0x4ddad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x4ddad8: 0x1443000b  bne         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x4DDAD8u;
    {
        const bool branch_taken_0x4ddad8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x4DDADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DDAD8u;
        // 0x4ddadc: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ddad8) {
            ctx->pc = 0x4DDB08u;
            goto label_4ddb08;
        }
    }
    ctx->pc = 0x4DDAE0u;
    // 0x4ddae0: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x4ddae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x4ddae4: 0x24820004  addiu       $v0, $a0, 0x4
    ctx->pc = 0x4ddae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x4ddae8: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x4ddae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x4ddaec: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x4ddaecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4ddaf0: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x4ddaf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
    // 0x4ddaf4: 0x246201f8  addiu       $v0, $v1, 0x1F8
    ctx->pc = 0x4ddaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 504));
    // 0x4ddaf8: 0x51cd0001  beql        $t6, $t5, . + 4 + (0x1 << 2)
    ctx->pc = 0x4DDAF8u;
    {
        const bool branch_taken_0x4ddaf8 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 13));
        if (branch_taken_0x4ddaf8) {
            ctx->pc = 0x4DDAFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DDAF8u;
            // 0x4ddafc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DDB00u;
            goto label_4ddb00;
        }
    }
    ctx->pc = 0x4DDB00u;
label_4ddb00:
    // 0x4ddb00: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x4ddb00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x4ddb04: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x4ddb04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
label_4ddb08:
    // 0x4ddb08: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x4ddb08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x4ddb0c: 0x544b0003  bnel        $v0, $t3, . + 4 + (0x3 << 2)
    ctx->pc = 0x4DDB0Cu;
    {
        const bool branch_taken_0x4ddb0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 11));
        if (branch_taken_0x4ddb0c) {
            ctx->pc = 0x4DDB10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DDB0Cu;
            // 0x4ddb10: 0x4b102b  sltu        $v0, $v0, $t3 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DDB1Cu;
            goto label_4ddb1c;
        }
    }
    ctx->pc = 0x4DDB14u;
    // 0x4ddb14: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x4ddb14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4ddb18: 0x4c102b  sltu        $v0, $v0, $t4
    ctx->pc = 0x4ddb18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
label_4ddb1c:
    // 0x4ddb1c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x4DDB1Cu;
    {
        const bool branch_taken_0x4ddb1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4DDB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DDB1Cu;
        // 0x4ddb20: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ddb1c) {
            ctx->pc = 0x4DDAD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4ddad0;
        }
    }
    ctx->pc = 0x4DDB24u;
    // 0x4ddb24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ddb24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ddb28: 0xc1374f8  jal         func_4DD3E0
    ctx->pc = 0x4DDB28u;
    SET_GPR_U32(ctx, 31, 0x4DDB30u);
    ctx->pc = 0x4DDB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DDB28u;
    // 0x4ddb2c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DD3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DD3E0u, 0x4DDB28u, 0x4DDB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DDB30u;
label_4ddb30:
    // 0x4ddb30: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x4ddb30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x4ddb34: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4DDB34u;
    {
        const bool branch_taken_0x4ddb34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ddb34) {
            ctx->pc = 0x4DDB38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DDB34u;
            // 0x4ddb38: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DDB48u;
            goto label_4ddb48;
        }
    }
    ctx->pc = 0x4DDB3Cu;
    // 0x4ddb3c: 0xc10b208  jal         func_42C820
    ctx->pc = 0x4DDB3Cu;
    SET_GPR_U32(ctx, 31, 0x4DDB44u);
    ctx->pc = 0x4DDB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DDB3Cu;
    // 0x4ddb40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C820u, 0x4DDB3Cu, 0x4DDB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DDB44u;
label_4ddb44:
    // 0x4ddb44: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x4ddb44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4ddb48:
    // 0x4ddb48: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x4ddb48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4ddb4c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x4ddb4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4ddb50: 0x3e00008  jr          $ra
    ctx->pc = 0x4DDB50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DDB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DDB50u;
        // 0x4ddb54: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DDB50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DDB58u;
}
