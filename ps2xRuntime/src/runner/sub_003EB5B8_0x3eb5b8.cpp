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

// Function: sub_003EB5B8
// Address: 0x3eb5b8 - 0x3eb620
void sub_003EB5B8_0x3eb5b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EB5B8_0x3eb5b8");
#endif

    switch (ctx->pc) {
        case 0x3eb5b8u: goto label_3eb5b8;
        case 0x3eb5bcu: goto label_3eb5bc;
        case 0x3eb5c0u: goto label_3eb5c0;
        case 0x3eb5c4u: goto label_3eb5c4;
        case 0x3eb5c8u: goto label_3eb5c8;
        case 0x3eb5ccu: goto label_3eb5cc;
        case 0x3eb5d0u: goto label_3eb5d0;
        case 0x3eb5d4u: goto label_3eb5d4;
        case 0x3eb5d8u: goto label_3eb5d8;
        case 0x3eb5dcu: goto label_3eb5dc;
        case 0x3eb5e0u: goto label_3eb5e0;
        case 0x3eb5e4u: goto label_3eb5e4;
        case 0x3eb5e8u: goto label_3eb5e8;
        case 0x3eb5ecu: goto label_3eb5ec;
        case 0x3eb5f0u: goto label_3eb5f0;
        case 0x3eb5f4u: goto label_3eb5f4;
        case 0x3eb5f8u: goto label_3eb5f8;
        case 0x3eb5fcu: goto label_3eb5fc;
        case 0x3eb600u: goto label_3eb600;
        case 0x3eb604u: goto label_3eb604;
        case 0x3eb608u: goto label_3eb608;
        case 0x3eb60cu: goto label_3eb60c;
        case 0x3eb610u: goto label_3eb610;
        case 0x3eb614u: goto label_3eb614;
        case 0x3eb618u: goto label_3eb618;
        case 0x3eb61cu: goto label_3eb61c;
        default: break;
    }

    ctx->pc = 0x3eb5b8u;

label_3eb5b8:
    // 0x3eb5b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3eb5b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3eb5bc:
    // 0x3eb5bc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3eb5bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3eb5c0:
    // 0x3eb5c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3eb5c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3eb5c4:
    // 0x3eb5c4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3eb5c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3eb5c8:
    // 0x3eb5c8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3eb5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3eb5cc:
    // 0x3eb5cc: 0x84650188  lh          $a1, 0x188($v1)
    ctx->pc = 0x3eb5ccu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3eb5d0:
    // 0x3eb5d0: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3eb5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3eb5d4:
    // 0x3eb5d4: 0x40f809  jalr        $v0
label_3eb5d8:
    if (ctx->pc == 0x3EB5D8u) {
        ctx->pc = 0x3EB5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB5D4u;
        // 0x3eb5d8: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB5DCu;
        goto label_3eb5dc;
    }
    ctx->pc = 0x3EB5D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EB5DCu);
        ctx->pc = 0x3EB5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB5D4u;
        // 0x3eb5d8: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EB5D4u, 0x3EB5DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EB5DCu;
label_3eb5dc:
    // 0x3eb5dc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3eb5dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3eb5e0:
    // 0x3eb5e0: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x3eb5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_3eb5e4:
    // 0x3eb5e4: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
label_3eb5e8:
    if (ctx->pc == 0x3EB5E8u) {
        ctx->pc = 0x3EB5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB5E4u;
        // 0x3eb5e8: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB5ECu;
        goto label_3eb5ec;
    }
    ctx->pc = 0x3EB5E4u;
    {
        const bool branch_taken_0x3eb5e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3EB5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB5E4u;
        // 0x3eb5e8: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb5e4) {
            ctx->pc = 0x3EB5FCu;
            goto label_3eb5fc;
        }
    }
    ctx->pc = 0x3EB5ECu;
label_3eb5ec:
    // 0x3eb5ec: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
label_3eb5f0:
    if (ctx->pc == 0x3EB5F0u) {
        ctx->pc = 0x3EB5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB5ECu;
        // 0x3eb5f0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB5F4u;
        goto label_3eb5f4;
    }
    ctx->pc = 0x3EB5ECu;
    {
        const bool branch_taken_0x3eb5ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3EB5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB5ECu;
        // 0x3eb5f0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb5ec) {
            ctx->pc = 0x3EB608u;
            goto label_3eb608;
        }
    }
    ctx->pc = 0x3EB5F4u;
label_3eb5f4:
    // 0x3eb5f4: 0x10000007  b           . + 4 + (0x7 << 2)
label_3eb5f8:
    if (ctx->pc == 0x3EB5F8u) {
        ctx->pc = 0x3EB5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB5F4u;
        // 0x3eb5f8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB5FCu;
        goto label_3eb5fc;
    }
    ctx->pc = 0x3EB5F4u;
    {
        const bool branch_taken_0x3eb5f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB5F4u;
        // 0x3eb5f8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb5f4) {
            ctx->pc = 0x3EB614u;
            goto label_3eb614;
        }
    }
    ctx->pc = 0x3EB5FCu;
label_3eb5fc:
    // 0x3eb5fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3eb5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3eb600:
    // 0x3eb600: 0x10000002  b           . + 4 + (0x2 << 2)
label_3eb604:
    if (ctx->pc == 0x3EB604u) {
        ctx->pc = 0x3EB604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB600u;
        // 0x3eb604: 0xa062000c  sb          $v0, 0xC($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 12), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB608u;
        goto label_3eb608;
    }
    ctx->pc = 0x3EB600u;
    {
        const bool branch_taken_0x3eb600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB600u;
        // 0x3eb604: 0xa062000c  sb          $v0, 0xC($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 12), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb600) {
            ctx->pc = 0x3EB60Cu;
            goto label_3eb60c;
        }
    }
    ctx->pc = 0x3EB608u;
label_3eb608:
    // 0x3eb608: 0xa060000c  sb          $zero, 0xC($v1)
    ctx->pc = 0x3eb608u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 12), (uint8_t)GPR_U32(ctx, 0));
label_3eb60c:
    // 0x3eb60c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3eb60cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3eb610:
    // 0x3eb610: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3eb610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3eb614:
    // 0x3eb614: 0x3e00008  jr          $ra
label_3eb618:
    if (ctx->pc == 0x3EB618u) {
        ctx->pc = 0x3EB618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB614u;
        // 0x3eb618: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB61Cu;
        goto label_3eb61c;
    }
    ctx->pc = 0x3EB614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EB618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB614u;
        // 0x3eb618: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EB614u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EB61Cu;
label_3eb61c:
    // 0x3eb61c: 0x0  nop
    ctx->pc = 0x3eb61cu;
    // NOP
    ctx->pc = 0x3eb620u;
}
