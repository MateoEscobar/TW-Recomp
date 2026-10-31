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

// Function: sub_001C2998
// Address: 0x1c2998 - 0x1c29f8
void sub_001C2998_0x1c2998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C2998_0x1c2998");
#endif

    switch (ctx->pc) {
        case 0x1c2998u: goto label_1c2998;
        case 0x1c299cu: goto label_1c299c;
        case 0x1c29a0u: goto label_1c29a0;
        case 0x1c29a4u: goto label_1c29a4;
        case 0x1c29a8u: goto label_1c29a8;
        case 0x1c29acu: goto label_1c29ac;
        case 0x1c29b0u: goto label_1c29b0;
        case 0x1c29b4u: goto label_1c29b4;
        case 0x1c29b8u: goto label_1c29b8;
        case 0x1c29bcu: goto label_1c29bc;
        case 0x1c29c0u: goto label_1c29c0;
        case 0x1c29c4u: goto label_1c29c4;
        case 0x1c29c8u: goto label_1c29c8;
        case 0x1c29ccu: goto label_1c29cc;
        case 0x1c29d0u: goto label_1c29d0;
        case 0x1c29d4u: goto label_1c29d4;
        case 0x1c29d8u: goto label_1c29d8;
        case 0x1c29dcu: goto label_1c29dc;
        case 0x1c29e0u: goto label_1c29e0;
        case 0x1c29e4u: goto label_1c29e4;
        case 0x1c29e8u: goto label_1c29e8;
        case 0x1c29ecu: goto label_1c29ec;
        case 0x1c29f0u: goto label_1c29f0;
        case 0x1c29f4u: goto label_1c29f4;
        default: break;
    }

    ctx->pc = 0x1c2998u;

label_1c2998:
    // 0x1c2998: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c2998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1c299c:
    // 0x1c299c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1c299cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1c29a0:
    // 0x1c29a0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1c29a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1c29a4:
    // 0x1c29a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c29a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1c29a8:
    // 0x1c29a8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1c29a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1c29ac:
    // 0x1c29ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c29acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1c29b0:
    // 0x1c29b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c29b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c29b4:
    // 0x1c29b4: 0x8c46b8b8  lw          $a2, -0x4748($v0)
    ctx->pc = 0x1c29b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_1c29b8:
    // 0x1c29b8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1c29b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1c29bc:
    // 0x1c29bc: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1c29bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1c29c0:
    // 0x1c29c0: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1c29c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1c29c4:
    // 0x1c29c4: 0x40f809  jalr        $v0
label_1c29c8:
    if (ctx->pc == 0x1C29C8u) {
        ctx->pc = 0x1C29C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C29C4u;
        // 0x1c29c8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C29CCu;
        goto label_1c29cc;
    }
    ctx->pc = 0x1C29C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C29CCu);
        ctx->pc = 0x1C29C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C29C4u;
        // 0x1c29c8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C29C4u, 0x1C29CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C29CCu;
label_1c29cc:
    // 0x1c29cc: 0xae2203f4  sw          $v0, 0x3F4($s1)
    ctx->pc = 0x1c29ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1012), GPR_U32(ctx, 2));
label_1c29d0:
    // 0x1c29d0: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_1c29d4:
    if (ctx->pc == 0x1C29D4u) {
        ctx->pc = 0x1C29D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C29D0u;
        // 0x1c29d4: 0xae3003f8  sw          $s0, 0x3F8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1016), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C29D8u;
        goto label_1c29d8;
    }
    ctx->pc = 0x1C29D0u;
    {
        const bool branch_taken_0x1c29d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C29D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C29D0u;
        // 0x1c29d4: 0xae3003f8  sw          $s0, 0x3F8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1016), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c29d0) {
            ctx->pc = 0x1C29E0u;
            goto label_1c29e0;
        }
    }
    ctx->pc = 0x1C29D8u;
label_1c29d8:
    // 0x1c29d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c29d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c29dc:
    // 0x1c29dc: 0xae2203f0  sw          $v0, 0x3F0($s1)
    ctx->pc = 0x1c29dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1008), GPR_U32(ctx, 2));
label_1c29e0:
    // 0x1c29e0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1c29e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c29e4:
    // 0x1c29e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c29e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c29e8:
    // 0x1c29e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c29e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c29ec:
    // 0x1c29ec: 0x3e00008  jr          $ra
label_1c29f0:
    if (ctx->pc == 0x1C29F0u) {
        ctx->pc = 0x1C29F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C29ECu;
        // 0x1c29f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C29F4u;
        goto label_1c29f4;
    }
    ctx->pc = 0x1C29ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C29F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C29ECu;
        // 0x1c29f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C29ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C29F4u;
label_1c29f4:
    // 0x1c29f4: 0x0  nop
    ctx->pc = 0x1c29f4u;
    // NOP
    ctx->pc = 0x1c29f8u;
}
