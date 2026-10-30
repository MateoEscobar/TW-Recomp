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

// Function: sub_002CD0C0
// Address: 0x2cd0c0 - 0x2cd0f8
void sub_002CD0C0_0x2cd0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CD0C0_0x2cd0c0");
#endif

    switch (ctx->pc) {
        case 0x2cd0c0u: goto label_2cd0c0;
        case 0x2cd0c4u: goto label_2cd0c4;
        case 0x2cd0c8u: goto label_2cd0c8;
        case 0x2cd0ccu: goto label_2cd0cc;
        case 0x2cd0d0u: goto label_2cd0d0;
        case 0x2cd0d4u: goto label_2cd0d4;
        case 0x2cd0d8u: goto label_2cd0d8;
        case 0x2cd0dcu: goto label_2cd0dc;
        case 0x2cd0e0u: goto label_2cd0e0;
        case 0x2cd0e4u: goto label_2cd0e4;
        case 0x2cd0e8u: goto label_2cd0e8;
        case 0x2cd0ecu: goto label_2cd0ec;
        case 0x2cd0f0u: goto label_2cd0f0;
        case 0x2cd0f4u: goto label_2cd0f4;
        default: break;
    }

    ctx->pc = 0x2cd0c0u;

label_2cd0c0:
    // 0x2cd0c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cd0c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2cd0c4:
    // 0x2cd0c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cd0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2cd0c8:
    // 0x2cd0c8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2cd0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2cd0cc:
    // 0x2cd0cc: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x2cd0ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2cd0d0:
    // 0x2cd0d0: 0x90620265  lbu         $v0, 0x265($v1)
    ctx->pc = 0x2cd0d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 613)));
label_2cd0d4:
    // 0x2cd0d4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2cd0d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2cd0d8:
    // 0x2cd0d8: 0xac820020  sw          $v0, 0x20($a0)
    ctx->pc = 0x2cd0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 2));
label_2cd0dc:
    // 0x2cd0dc: 0x84a30030  lh          $v1, 0x30($a1)
    ctx->pc = 0x2cd0dcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 48)));
label_2cd0e0:
    // 0x2cd0e0: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x2cd0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_2cd0e4:
    // 0x2cd0e4: 0x40f809  jalr        $v0
label_2cd0e8:
    if (ctx->pc == 0x2CD0E8u) {
        ctx->pc = 0x2CD0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD0E4u;
        // 0x2cd0e8: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD0ECu;
        goto label_2cd0ec;
    }
    ctx->pc = 0x2CD0E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2CD0ECu);
        ctx->pc = 0x2CD0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD0E4u;
        // 0x2cd0e8: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CD0E4u, 0x2CD0ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CD0ECu;
label_2cd0ec:
    // 0x2cd0ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cd0ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2cd0f0:
    // 0x2cd0f0: 0x3e00008  jr          $ra
label_2cd0f4:
    if (ctx->pc == 0x2CD0F4u) {
        ctx->pc = 0x2CD0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD0F0u;
        // 0x2cd0f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD0F8u;
        goto label_fallthrough_0x2cd0f0;
    }
    ctx->pc = 0x2CD0F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CD0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD0F0u;
        // 0x2cd0f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CD0F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2cd0f0:
    ctx->pc = 0x2CD0F8u;
}
