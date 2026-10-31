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

// Function: sub_0015B490
// Address: 0x15b490 - 0x15b528
void sub_0015B490_0x15b490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015B490_0x15b490");
#endif

    switch (ctx->pc) {
        case 0x15b490u: goto label_15b490;
        case 0x15b494u: goto label_15b494;
        case 0x15b498u: goto label_15b498;
        case 0x15b49cu: goto label_15b49c;
        case 0x15b4a0u: goto label_15b4a0;
        case 0x15b4a4u: goto label_15b4a4;
        case 0x15b4a8u: goto label_15b4a8;
        case 0x15b4acu: goto label_15b4ac;
        case 0x15b4b0u: goto label_15b4b0;
        case 0x15b4b4u: goto label_15b4b4;
        case 0x15b4b8u: goto label_15b4b8;
        case 0x15b4bcu: goto label_15b4bc;
        case 0x15b4c0u: goto label_15b4c0;
        case 0x15b4c4u: goto label_15b4c4;
        case 0x15b4c8u: goto label_15b4c8;
        case 0x15b4ccu: goto label_15b4cc;
        case 0x15b4d0u: goto label_15b4d0;
        case 0x15b4d4u: goto label_15b4d4;
        case 0x15b4d8u: goto label_15b4d8;
        case 0x15b4dcu: goto label_15b4dc;
        case 0x15b4e0u: goto label_15b4e0;
        case 0x15b4e4u: goto label_15b4e4;
        case 0x15b4e8u: goto label_15b4e8;
        case 0x15b4ecu: goto label_15b4ec;
        case 0x15b4f0u: goto label_15b4f0;
        case 0x15b4f4u: goto label_15b4f4;
        case 0x15b4f8u: goto label_15b4f8;
        case 0x15b4fcu: goto label_15b4fc;
        case 0x15b500u: goto label_15b500;
        case 0x15b504u: goto label_15b504;
        case 0x15b508u: goto label_15b508;
        case 0x15b50cu: goto label_15b50c;
        case 0x15b510u: goto label_15b510;
        case 0x15b514u: goto label_15b514;
        case 0x15b518u: goto label_15b518;
        case 0x15b51cu: goto label_15b51c;
        case 0x15b520u: goto label_15b520;
        case 0x15b524u: goto label_15b524;
        default: break;
    }

    ctx->pc = 0x15b490u;

label_15b490:
    // 0x15b490: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x15b490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_15b494:
    // 0x15b494: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15b494u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_15b498:
    // 0x15b498: 0x8c435d80  lw          $v1, 0x5D80($v0)
    ctx->pc = 0x15b498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23936)));
label_15b49c:
    // 0x15b49c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x15b49cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_15b4a0:
    // 0x15b4a0: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
label_15b4a4:
    if (ctx->pc == 0x15B4A4u) {
        ctx->pc = 0x15B4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B4A0u;
        // 0x15b4a4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B4A8u;
        goto label_15b4a8;
    }
    ctx->pc = 0x15B4A0u;
    {
        const bool branch_taken_0x15b4a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B4A0u;
        // 0x15b4a4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b4a0) {
            ctx->pc = 0x15B4F8u;
            goto label_15b4f8;
        }
    }
    ctx->pc = 0x15B4A8u;
label_15b4a8:
    // 0x15b4a8: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x15b4a8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_15b4ac:
    // 0x15b4ac: 0x8e02c728  lw          $v0, -0x38D8($s0)
    ctx->pc = 0x15b4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952744)));
label_15b4b0:
    // 0x15b4b0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_15b4b4:
    if (ctx->pc == 0x15B4B4u) {
        ctx->pc = 0x15B4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B4B0u;
        // 0x15b4b4: 0x3c020016  lui         $v0, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B4B8u;
        goto label_15b4b8;
    }
    ctx->pc = 0x15B4B0u;
    {
        const bool branch_taken_0x15b4b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B4B0u;
        // 0x15b4b4: 0x3c020016  lui         $v0, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b4b0) {
            ctx->pc = 0x15B4ECu;
            goto label_15b4ec;
        }
    }
    ctx->pc = 0x15B4B8u;
label_15b4b8:
    // 0x15b4b8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15b4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15b4bc:
    // 0x15b4bc: 0x8c455024  lw          $a1, 0x5024($v0)
    ctx->pc = 0x15b4bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20516)));
label_15b4c0:
    // 0x15b4c0: 0x8ca30128  lw          $v1, 0x128($a1)
    ctx->pc = 0x15b4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 296)));
label_15b4c4:
    // 0x15b4c4: 0x84640180  lh          $a0, 0x180($v1)
    ctx->pc = 0x15b4c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 384)));
label_15b4c8:
    // 0x15b4c8: 0x8c620184  lw          $v0, 0x184($v1)
    ctx->pc = 0x15b4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 388)));
label_15b4cc:
    // 0x15b4cc: 0x40f809  jalr        $v0
label_15b4d0:
    if (ctx->pc == 0x15B4D0u) {
        ctx->pc = 0x15B4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B4CCu;
        // 0x15b4d0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B4D4u;
        goto label_15b4d4;
    }
    ctx->pc = 0x15B4CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15B4D4u);
        ctx->pc = 0x15B4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B4CCu;
        // 0x15b4d0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B4CCu, 0x15B4D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15B4D4u;
label_15b4d4:
    // 0x15b4d4: 0x3c030016  lui         $v1, 0x16
    ctx->pc = 0x15b4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
label_15b4d8:
    // 0x15b4d8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15b4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15b4dc:
    // 0x15b4dc: 0x2463b528  addiu       $v1, $v1, -0x4AD8
    ctx->pc = 0x15b4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948136));
label_15b4e0:
    // 0x15b4e0: 0xae00c728  sw          $zero, -0x38D8($s0)
    ctx->pc = 0x15b4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952744), GPR_U32(ctx, 0));
label_15b4e4:
    // 0x15b4e4: 0x1000000b  b           . + 4 + (0xB << 2)
label_15b4e8:
    if (ctx->pc == 0x15B4E8u) {
        ctx->pc = 0x15B4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B4E4u;
        // 0x15b4e8: 0xac43c734  sw          $v1, -0x38CC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294952756), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B4ECu;
        goto label_15b4ec;
    }
    ctx->pc = 0x15B4E4u;
    {
        const bool branch_taken_0x15b4e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B4E4u;
        // 0x15b4e8: 0xac43c734  sw          $v1, -0x38CC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294952756), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b4e4) {
            ctx->pc = 0x15B514u;
            goto label_15b514;
        }
    }
    ctx->pc = 0x15B4ECu;
label_15b4ec:
    // 0x15b4ec: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x15b4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_15b4f0:
    // 0x15b4f0: 0x10000007  b           . + 4 + (0x7 << 2)
label_15b4f4:
    if (ctx->pc == 0x15B4F4u) {
        ctx->pc = 0x15B4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B4F0u;
        // 0x15b4f4: 0x2442b598  addiu       $v0, $v0, -0x4A68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B4F8u;
        goto label_15b4f8;
    }
    ctx->pc = 0x15B4F0u;
    {
        const bool branch_taken_0x15b4f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B4F0u;
        // 0x15b4f4: 0x2442b598  addiu       $v0, $v0, -0x4A68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b4f0) {
            ctx->pc = 0x15B510u;
            goto label_15b510;
        }
    }
    ctx->pc = 0x15B4F8u;
label_15b4f8:
    // 0x15b4f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15b4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15b4fc:
    // 0x15b4fc: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_15b500:
    if (ctx->pc == 0x15B500u) {
        ctx->pc = 0x15B500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B4FCu;
        // 0x15b500: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B504u;
        goto label_15b504;
    }
    ctx->pc = 0x15B4FCu;
    {
        const bool branch_taken_0x15b4fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x15B500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B4FCu;
        // 0x15b500: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b4fc) {
            ctx->pc = 0x15B518u;
            goto label_15b518;
        }
    }
    ctx->pc = 0x15B504u;
label_15b504:
    // 0x15b504: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x15b504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
label_15b508:
    // 0x15b508: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x15b508u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_15b50c:
    // 0x15b50c: 0x2442b650  addiu       $v0, $v0, -0x49B0
    ctx->pc = 0x15b50cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948432));
label_15b510:
    // 0x15b510: 0xac62c734  sw          $v0, -0x38CC($v1)
    ctx->pc = 0x15b510u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294952756), GPR_U32(ctx, 2));
label_15b514:
    // 0x15b514: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x15b514u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15b518:
    // 0x15b518: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15b518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15b51c:
    // 0x15b51c: 0x3e00008  jr          $ra
label_15b520:
    if (ctx->pc == 0x15B520u) {
        ctx->pc = 0x15B520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B51Cu;
        // 0x15b520: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B524u;
        goto label_15b524;
    }
    ctx->pc = 0x15B51Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15B520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B51Cu;
        // 0x15b520: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B51Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15B524u;
label_15b524:
    // 0x15b524: 0x0  nop
    ctx->pc = 0x15b524u;
    // NOP
    ctx->pc = 0x15b528u;
}
