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

// Function: sub_004F58B8
// Address: 0x4f58b8 - 0x4f5900
void sub_004F58B8_0x4f58b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F58B8_0x4f58b8");
#endif

    switch (ctx->pc) {
        case 0x4f58b8u: goto label_4f58b8;
        case 0x4f58bcu: goto label_4f58bc;
        case 0x4f58c0u: goto label_4f58c0;
        case 0x4f58c4u: goto label_4f58c4;
        case 0x4f58c8u: goto label_4f58c8;
        case 0x4f58ccu: goto label_4f58cc;
        case 0x4f58d0u: goto label_4f58d0;
        case 0x4f58d4u: goto label_4f58d4;
        case 0x4f58d8u: goto label_4f58d8;
        case 0x4f58dcu: goto label_4f58dc;
        case 0x4f58e0u: goto label_4f58e0;
        case 0x4f58e4u: goto label_4f58e4;
        case 0x4f58e8u: goto label_4f58e8;
        case 0x4f58ecu: goto label_4f58ec;
        case 0x4f58f0u: goto label_4f58f0;
        case 0x4f58f4u: goto label_4f58f4;
        case 0x4f58f8u: goto label_4f58f8;
        case 0x4f58fcu: goto label_4f58fc;
        default: break;
    }

    ctx->pc = 0x4f58b8u;

label_4f58b8:
    // 0x4f58b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4f58b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4f58bc:
    // 0x4f58bc: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x4f58bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4f58c0:
    // 0x4f58c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f58c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4f58c4:
    // 0x4f58c4: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_4f58c8:
    if (ctx->pc == 0x4F58C8u) {
        ctx->pc = 0x4F58C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F58C4u;
        // 0x4f58c8: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F58CCu;
        goto label_4f58cc;
    }
    ctx->pc = 0x4F58C4u;
    {
        const bool branch_taken_0x4f58c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F58C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F58C4u;
        // 0x4f58c8: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f58c4) {
            ctx->pc = 0x4F58F0u;
            goto label_4f58f0;
        }
    }
    ctx->pc = 0x4F58CCu;
label_4f58cc:
    // 0x4f58cc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4f58ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4f58d0:
    // 0x4f58d0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4f58d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f58d4:
    // 0x4f58d4: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4f58d4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4f58d8:
    // 0x4f58d8: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x4f58d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_4f58dc:
    // 0x4f58dc: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4f58dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4f58e0:
    // 0x4f58e0: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4f58e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4f58e4:
    // 0x4f58e4: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4f58e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4f58e8:
    // 0x4f58e8: 0x60f809  jalr        $v1
label_4f58ec:
    if (ctx->pc == 0x4F58ECu) {
        ctx->pc = 0x4F58ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F58E8u;
        // 0x4f58ec: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F58F0u;
        goto label_4f58f0;
    }
    ctx->pc = 0x4F58E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4F58F0u);
        ctx->pc = 0x4F58ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F58E8u;
        // 0x4f58ec: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F58E8u, 0x4F58F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F58F0u;
label_4f58f0:
    // 0x4f58f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f58f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4f58f4:
    // 0x4f58f4: 0x3e00008  jr          $ra
label_4f58f8:
    if (ctx->pc == 0x4F58F8u) {
        ctx->pc = 0x4F58F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F58F4u;
        // 0x4f58f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F58FCu;
        goto label_4f58fc;
    }
    ctx->pc = 0x4F58F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F58F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F58F4u;
        // 0x4f58f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F58F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F58FCu;
label_4f58fc:
    // 0x4f58fc: 0x0  nop
    ctx->pc = 0x4f58fcu;
    // NOP
    ctx->pc = 0x4f5900u;
}
