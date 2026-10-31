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

// Function: sub_001AB6C8
// Address: 0x1ab6c8 - 0x1ab718
void sub_001AB6C8_0x1ab6c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AB6C8_0x1ab6c8");
#endif

    switch (ctx->pc) {
        case 0x1ab6c8u: goto label_1ab6c8;
        case 0x1ab6ccu: goto label_1ab6cc;
        case 0x1ab6d0u: goto label_1ab6d0;
        case 0x1ab6d4u: goto label_1ab6d4;
        case 0x1ab6d8u: goto label_1ab6d8;
        case 0x1ab6dcu: goto label_1ab6dc;
        case 0x1ab6e0u: goto label_1ab6e0;
        case 0x1ab6e4u: goto label_1ab6e4;
        case 0x1ab6e8u: goto label_1ab6e8;
        case 0x1ab6ecu: goto label_1ab6ec;
        case 0x1ab6f0u: goto label_1ab6f0;
        case 0x1ab6f4u: goto label_1ab6f4;
        case 0x1ab6f8u: goto label_1ab6f8;
        case 0x1ab6fcu: goto label_1ab6fc;
        case 0x1ab700u: goto label_1ab700;
        case 0x1ab704u: goto label_1ab704;
        case 0x1ab708u: goto label_1ab708;
        case 0x1ab70cu: goto label_1ab70c;
        case 0x1ab710u: goto label_1ab710;
        case 0x1ab714u: goto label_1ab714;
        default: break;
    }

    ctx->pc = 0x1ab6c8u;

label_1ab6c8:
    // 0x1ab6c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ab6c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1ab6cc:
    // 0x1ab6cc: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1ab6ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ab6d0:
    // 0x1ab6d0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1ab6d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1ab6d4:
    // 0x1ab6d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ab6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1ab6d8:
    // 0x1ab6d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ab6d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ab6dc:
    // 0x1ab6dc: 0xae060064  sw          $a2, 0x64($s0)
    ctx->pc = 0x1ab6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 6));
label_1ab6e0:
    // 0x1ab6e0: 0x10e00009  beqz        $a3, . + 4 + (0x9 << 2)
label_1ab6e4:
    if (ctx->pc == 0x1AB6E4u) {
        ctx->pc = 0x1AB6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB6E0u;
        // 0x1ab6e4: 0xae070060  sw          $a3, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB6E8u;
        goto label_1ab6e8;
    }
    ctx->pc = 0x1AB6E0u;
    {
        const bool branch_taken_0x1ab6e0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB6E0u;
        // 0x1ab6e4: 0xae070060  sw          $a3, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab6e0) {
            ctx->pc = 0x1AB708u;
            goto label_1ab708;
        }
    }
    ctx->pc = 0x1AB6E8u;
label_1ab6e8:
    // 0x1ab6e8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1ab6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1ab6ec:
    // 0x1ab6ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ab6ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1ab6f0:
    // 0x1ab6f0: 0x84450070  lh          $a1, 0x70($v0)
    ctx->pc = 0x1ab6f0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_1ab6f4:
    // 0x1ab6f4: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x1ab6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1ab6f8:
    // 0x1ab6f8: 0x60f809  jalr        $v1
label_1ab6fc:
    if (ctx->pc == 0x1AB6FCu) {
        ctx->pc = 0x1AB6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB6F8u;
        // 0x1ab6fc: 0xe52821  addu        $a1, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB700u;
        goto label_1ab700;
    }
    ctx->pc = 0x1AB6F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1AB700u);
        ctx->pc = 0x1AB6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB6F8u;
        // 0x1ab6fc: 0xe52821  addu        $a1, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB6F8u, 0x1AB700u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AB700u;
label_1ab700:
    // 0x1ab700: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x1ab700u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ab704:
    // 0x1ab704: 0x7e020030  sq          $v0, 0x30($s0)
    ctx->pc = 0x1ab704u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 2));
label_1ab708:
    // 0x1ab708: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1ab708u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ab70c:
    // 0x1ab70c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ab70cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ab710:
    // 0x1ab710: 0x3e00008  jr          $ra
label_1ab714:
    if (ctx->pc == 0x1AB714u) {
        ctx->pc = 0x1AB714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB710u;
        // 0x1ab714: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB718u;
        goto label_fallthrough_0x1ab710;
    }
    ctx->pc = 0x1AB710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB710u;
        // 0x1ab714: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB710u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ab710:
    ctx->pc = 0x1AB718u;
}
