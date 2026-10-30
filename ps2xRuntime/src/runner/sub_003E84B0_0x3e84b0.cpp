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

// Function: sub_003E84B0
// Address: 0x3e84b0 - 0x3e8518
void sub_003E84B0_0x3e84b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E84B0_0x3e84b0");
#endif

    switch (ctx->pc) {
        case 0x3e84b0u: goto label_3e84b0;
        case 0x3e84b4u: goto label_3e84b4;
        case 0x3e84b8u: goto label_3e84b8;
        case 0x3e84bcu: goto label_3e84bc;
        case 0x3e84c0u: goto label_3e84c0;
        case 0x3e84c4u: goto label_3e84c4;
        case 0x3e84c8u: goto label_3e84c8;
        case 0x3e84ccu: goto label_3e84cc;
        case 0x3e84d0u: goto label_3e84d0;
        case 0x3e84d4u: goto label_3e84d4;
        case 0x3e84d8u: goto label_3e84d8;
        case 0x3e84dcu: goto label_3e84dc;
        case 0x3e84e0u: goto label_3e84e0;
        case 0x3e84e4u: goto label_3e84e4;
        case 0x3e84e8u: goto label_3e84e8;
        case 0x3e84ecu: goto label_3e84ec;
        case 0x3e84f0u: goto label_3e84f0;
        case 0x3e84f4u: goto label_3e84f4;
        case 0x3e84f8u: goto label_3e84f8;
        case 0x3e84fcu: goto label_3e84fc;
        case 0x3e8500u: goto label_3e8500;
        case 0x3e8504u: goto label_3e8504;
        case 0x3e8508u: goto label_3e8508;
        case 0x3e850cu: goto label_3e850c;
        case 0x3e8510u: goto label_3e8510;
        case 0x3e8514u: goto label_3e8514;
        default: break;
    }

    ctx->pc = 0x3e84b0u;

label_3e84b0:
    // 0x3e84b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e84b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3e84b4:
    // 0x3e84b4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3e84b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3e84b8:
    // 0x3e84b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e84b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3e84bc:
    // 0x3e84bc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3e84bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3e84c0:
    // 0x3e84c0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3e84c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3e84c4:
    // 0x3e84c4: 0x84650188  lh          $a1, 0x188($v1)
    ctx->pc = 0x3e84c4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3e84c8:
    // 0x3e84c8: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3e84c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3e84cc:
    // 0x3e84cc: 0x40f809  jalr        $v0
label_3e84d0:
    if (ctx->pc == 0x3E84D0u) {
        ctx->pc = 0x3E84D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E84CCu;
        // 0x3e84d0: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E84D4u;
        goto label_3e84d4;
    }
    ctx->pc = 0x3E84CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E84D4u);
        ctx->pc = 0x3E84D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E84CCu;
        // 0x3e84d0: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E84CCu, 0x3E84D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E84D4u;
label_3e84d4:
    // 0x3e84d4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3e84d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e84d8:
    // 0x3e84d8: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x3e84d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_3e84dc:
    // 0x3e84dc: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
label_3e84e0:
    if (ctx->pc == 0x3E84E0u) {
        ctx->pc = 0x3E84E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E84DCu;
        // 0x3e84e0: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E84E4u;
        goto label_3e84e4;
    }
    ctx->pc = 0x3E84DCu;
    {
        const bool branch_taken_0x3e84dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3E84E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E84DCu;
        // 0x3e84e0: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e84dc) {
            ctx->pc = 0x3E84F4u;
            goto label_3e84f4;
        }
    }
    ctx->pc = 0x3E84E4u;
label_3e84e4:
    // 0x3e84e4: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
label_3e84e8:
    if (ctx->pc == 0x3E84E8u) {
        ctx->pc = 0x3E84E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E84E4u;
        // 0x3e84e8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E84ECu;
        goto label_3e84ec;
    }
    ctx->pc = 0x3E84E4u;
    {
        const bool branch_taken_0x3e84e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3E84E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E84E4u;
        // 0x3e84e8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e84e4) {
            ctx->pc = 0x3E8500u;
            goto label_3e8500;
        }
    }
    ctx->pc = 0x3E84ECu;
label_3e84ec:
    // 0x3e84ec: 0x10000007  b           . + 4 + (0x7 << 2)
label_3e84f0:
    if (ctx->pc == 0x3E84F0u) {
        ctx->pc = 0x3E84F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E84ECu;
        // 0x3e84f0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E84F4u;
        goto label_3e84f4;
    }
    ctx->pc = 0x3E84ECu;
    {
        const bool branch_taken_0x3e84ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E84F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E84ECu;
        // 0x3e84f0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e84ec) {
            ctx->pc = 0x3E850Cu;
            goto label_3e850c;
        }
    }
    ctx->pc = 0x3E84F4u;
label_3e84f4:
    // 0x3e84f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3e84f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e84f8:
    // 0x3e84f8: 0x10000002  b           . + 4 + (0x2 << 2)
label_3e84fc:
    if (ctx->pc == 0x3E84FCu) {
        ctx->pc = 0x3E84FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E84F8u;
        // 0x3e84fc: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8500u;
        goto label_3e8500;
    }
    ctx->pc = 0x3E84F8u;
    {
        const bool branch_taken_0x3e84f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E84FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E84F8u;
        // 0x3e84fc: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e84f8) {
            ctx->pc = 0x3E8504u;
            goto label_3e8504;
        }
    }
    ctx->pc = 0x3E8500u;
label_3e8500:
    // 0x3e8500: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3e8500u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_3e8504:
    // 0x3e8504: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3e8504u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3e8508:
    // 0x3e8508: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e8508u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3e850c:
    // 0x3e850c: 0x3e00008  jr          $ra
label_3e8510:
    if (ctx->pc == 0x3E8510u) {
        ctx->pc = 0x3E8510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E850Cu;
        // 0x3e8510: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8514u;
        goto label_3e8514;
    }
    ctx->pc = 0x3E850Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E8510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E850Cu;
        // 0x3e8510: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E850Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E8514u;
label_3e8514:
    // 0x3e8514: 0x0  nop
    ctx->pc = 0x3e8514u;
    // NOP
    ctx->pc = 0x3e8518u;
}
