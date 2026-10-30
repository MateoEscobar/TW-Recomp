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

// Function: sub_001DF5E8
// Address: 0x1df5e8 - 0x1df6d0
void sub_001DF5E8_0x1df5e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DF5E8_0x1df5e8");
#endif

    switch (ctx->pc) {
        case 0x1df668u: goto label_1df668;
        case 0x1df684u: goto label_1df684;
        case 0x1df69cu: goto label_1df69c;
        case 0x1df6a8u: goto label_1df6a8;
        default: break;
    }

    ctx->pc = 0x1df5e8u;

    // 0x1df5e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1df5e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1df5ec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1df5ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1df5f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1df5f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1df5f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1df5f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df5f8: 0xae001ba0  sw          $zero, 0x1BA0($s0)
    ctx->pc = 0x1df5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7072), GPR_U32(ctx, 0));
    // 0x1df5fc: 0x8e021bb4  lw          $v0, 0x1BB4($s0)
    ctx->pc = 0x1df5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7092)));
    // 0x1df600: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1DF600u;
    {
        const bool branch_taken_0x1df600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF600u;
        // 0x1df604: 0xae001b8c  sw          $zero, 0x1B8C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 7052), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df600) {
            ctx->pc = 0x1DF670u;
            goto label_1df670;
        }
    }
    ctx->pc = 0x1DF608u;
    // 0x1df608: 0x8e021bb0  lw          $v0, 0x1BB0($s0)
    ctx->pc = 0x1df608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7088)));
    // 0x1df60c: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x1DF60Cu;
    {
        const bool branch_taken_0x1df60c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df60c) {
            ctx->pc = 0x1DF610u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DF60Cu;
            // 0x1df610: 0x8e021bb8  lw          $v0, 0x1BB8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7096)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DF674u;
            goto label_1df674;
        }
    }
    ctx->pc = 0x1DF614u;
    // 0x1df614: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1df614u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x1df618: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1df618u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df61c: 0x8c63489c  lw          $v1, 0x489C($v1)
    ctx->pc = 0x1df61cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x51489Cu));
    // 0x1df620: 0x8c6256e8  lw          $v0, 0x56E8($v1)
    ctx->pc = 0x1df620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22248)));
    // 0x1df624: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DF624u;
    {
        const bool branch_taken_0x1df624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF624u;
        // 0x1df628: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df624) {
            ctx->pc = 0x1DF644u;
            goto label_1df644;
        }
    }
    ctx->pc = 0x1DF62Cu;
    // 0x1df62c: 0x8c620158  lw          $v0, 0x158($v1)
    ctx->pc = 0x1df62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 344)));
    // 0x1df630: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DF630u;
    {
        const bool branch_taken_0x1df630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF630u;
        // 0x1df634: 0x38420003  xori        $v0, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df630) {
            ctx->pc = 0x1DF640u;
            goto label_1df640;
        }
    }
    ctx->pc = 0x1DF638u;
    // 0x1df638: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1DF638u;
    {
        const bool branch_taken_0x1df638 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df638) {
            ctx->pc = 0x1DF644u;
            goto label_1df644;
        }
    }
    ctx->pc = 0x1DF640u;
label_1df640:
    // 0x1df640: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1df640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1df644:
    // 0x1df644: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DF644u;
    {
        const bool branch_taken_0x1df644 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF644u;
        // 0x1df648: 0x8ca3489c  lw          $v1, 0x489C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df644) {
            ctx->pc = 0x1DF660u;
            goto label_1df660;
        }
    }
    ctx->pc = 0x1DF64Cu;
    // 0x1df64c: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x1df64cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x1df650: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x1df650u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1df654: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1df654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1df658: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DF658u;
    {
        const bool branch_taken_0x1df658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df658) {
            ctx->pc = 0x1DF65Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DF658u;
            // 0x1df65c: 0x8e021bb8  lw          $v0, 0x1BB8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7096)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DF674u;
            goto label_1df674;
        }
    }
    ctx->pc = 0x1DF660u;
label_1df660:
    // 0x1df660: 0xc107458  jal         func_41D160
    ctx->pc = 0x1DF660u;
    SET_GPR_U32(ctx, 31, 0x1DF668u);
    ctx->pc = 0x1DF664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF660u;
    // 0x1df664: 0x8ca4489c  lw          $a0, 0x489C($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D160u, 0x1DF660u, 0x1DF668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF668u;
label_1df668:
    // 0x1df668: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DF668u;
    {
        const bool branch_taken_0x1df668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df668) {
            ctx->pc = 0x1DF66Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DF668u;
            // 0x1df66c: 0xae001b88  sw          $zero, 0x1B88($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 7048), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DF690u;
            goto label_1df690;
        }
    }
    ctx->pc = 0x1DF670u;
label_1df670:
    // 0x1df670: 0x8e021bb8  lw          $v0, 0x1BB8($s0)
    ctx->pc = 0x1df670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7096)));
label_1df674:
    // 0x1df674: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1DF674u;
    {
        const bool branch_taken_0x1df674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF674u;
        // 0x1df678: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df674) {
            ctx->pc = 0x1DF6A8u;
            goto label_1df6a8;
        }
    }
    ctx->pc = 0x1DF67Cu;
    // 0x1df67c: 0xc107458  jal         func_41D160
    ctx->pc = 0x1DF67Cu;
    SET_GPR_U32(ctx, 31, 0x1DF684u);
    ctx->pc = 0x1DF680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF67Cu;
    // 0x1df680: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D160u, 0x1DF67Cu, 0x1DF684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF684u;
label_1df684:
    // 0x1df684: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DF684u;
    {
        const bool branch_taken_0x1df684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df684) {
            ctx->pc = 0x1DF688u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DF684u;
            // 0x1df688: 0xae001b70  sw          $zero, 0x1B70($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 7024), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DF6ACu;
            goto label_1df6ac;
        }
    }
    ctx->pc = 0x1DF68Cu;
    // 0x1df68c: 0xae001b88  sw          $zero, 0x1B88($s0)
    ctx->pc = 0x1df68cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7048), GPR_U32(ctx, 0));
label_1df690:
    // 0x1df690: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1df690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df694: 0xc077922  jal         func_1DE488
    ctx->pc = 0x1DF694u;
    SET_GPR_U32(ctx, 31, 0x1DF69Cu);
    ctx->pc = 0x1DF698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF694u;
    // 0x1df698: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE488u, 0x1DF694u, 0x1DF69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF69Cu;
label_1df69c:
    // 0x1df69c: 0x8e042af0  lw          $a0, 0x2AF0($s0)
    ctx->pc = 0x1df69cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10992)));
    // 0x1df6a0: 0xc079faa  jal         func_1E7EA8
    ctx->pc = 0x1DF6A0u;
    SET_GPR_U32(ctx, 31, 0x1DF6A8u);
    ctx->pc = 0x1DF6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF6A0u;
    // 0x1df6a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7EA8u, 0x1DF6A0u, 0x1DF6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF6A8u;
label_1df6a8:
    // 0x1df6a8: 0xae001b70  sw          $zero, 0x1B70($s0)
    ctx->pc = 0x1df6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7024), GPR_U32(ctx, 0));
label_1df6ac:
    // 0x1df6ac: 0xae001b74  sw          $zero, 0x1B74($s0)
    ctx->pc = 0x1df6acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7028), GPR_U32(ctx, 0));
    // 0x1df6b0: 0xae001b78  sw          $zero, 0x1B78($s0)
    ctx->pc = 0x1df6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7032), GPR_U32(ctx, 0));
    // 0x1df6b4: 0xae001b94  sw          $zero, 0x1B94($s0)
    ctx->pc = 0x1df6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7060), GPR_U32(ctx, 0));
    // 0x1df6b8: 0xae001b9c  sw          $zero, 0x1B9C($s0)
    ctx->pc = 0x1df6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7068), GPR_U32(ctx, 0));
    // 0x1df6bc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1df6bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1df6c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1df6c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1df6c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF6C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF6C4u;
        // 0x1df6c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF6C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DF6CCu;
    // 0x1df6cc: 0x0  nop
    ctx->pc = 0x1df6ccu;
    // NOP
    ctx->pc = 0x1df6d0u;
}
