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

// Function: sub_0011B298
// Address: 0x11b298 - 0x11b2f0
void sub_0011B298_0x11b298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011B298_0x11b298");
#endif

    switch (ctx->pc) {
        case 0x11b298u: goto label_11b298;
        case 0x11b29cu: goto label_11b29c;
        case 0x11b2a0u: goto label_11b2a0;
        case 0x11b2a4u: goto label_11b2a4;
        case 0x11b2a8u: goto label_11b2a8;
        case 0x11b2acu: goto label_11b2ac;
        case 0x11b2b0u: goto label_11b2b0;
        case 0x11b2b4u: goto label_11b2b4;
        case 0x11b2b8u: goto label_11b2b8;
        case 0x11b2bcu: goto label_11b2bc;
        case 0x11b2c0u: goto label_11b2c0;
        case 0x11b2c4u: goto label_11b2c4;
        case 0x11b2c8u: goto label_11b2c8;
        case 0x11b2ccu: goto label_11b2cc;
        case 0x11b2d0u: goto label_11b2d0;
        case 0x11b2d4u: goto label_11b2d4;
        case 0x11b2d8u: goto label_11b2d8;
        case 0x11b2dcu: goto label_11b2dc;
        case 0x11b2e0u: goto label_11b2e0;
        case 0x11b2e4u: goto label_11b2e4;
        case 0x11b2e8u: goto label_11b2e8;
        case 0x11b2ecu: goto label_11b2ec;
        default: break;
    }

    ctx->pc = 0x11b298u;

label_11b298:
    // 0x11b298: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11b298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_11b29c:
    // 0x11b29c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x11b29cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_11b2a0:
    // 0x11b2a0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x11b2a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_11b2a4:
    // 0x11b2a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11b2a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11b2a8:
    // 0x11b2a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11b2a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_11b2ac:
    // 0x11b2ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11b2acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_11b2b0:
    // 0x11b2b0: 0x8c47bce4  lw          $a3, -0x431C($v0)
    ctx->pc = 0x11b2b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950116)));
label_11b2b4:
    // 0x11b2b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11b2b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11b2b8:
    // 0x11b2b8: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x11b2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_11b2bc:
    // 0x11b2bc: 0x84640078  lh          $a0, 0x78($v1)
    ctx->pc = 0x11b2bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 120)));
label_11b2c0:
    // 0x11b2c0: 0x8c62007c  lw          $v0, 0x7C($v1)
    ctx->pc = 0x11b2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_11b2c4:
    // 0x11b2c4: 0x40f809  jalr        $v0
label_11b2c8:
    if (ctx->pc == 0x11B2C8u) {
        ctx->pc = 0x11B2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B2C4u;
        // 0x11b2c8: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B2CCu;
        goto label_11b2cc;
    }
    ctx->pc = 0x11B2C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11B2CCu);
        ctx->pc = 0x11B2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B2C4u;
        // 0x11b2c8: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B2C4u, 0x11B2CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11B2CCu;
label_11b2cc:
    // 0x11b2cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11b2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11b2d0:
    // 0x11b2d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11b2d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11b2d4:
    // 0x11b2d4: 0xae03009c  sw          $v1, 0x9C($s0)
    ctx->pc = 0x11b2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 3));
label_11b2d8:
    // 0x11b2d8: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x11b2d8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_11b2dc:
    // 0x11b2dc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x11b2dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_11b2e0:
    // 0x11b2e0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x11b2e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_11b2e4:
    // 0x11b2e4: 0x3e00008  jr          $ra
label_11b2e8:
    if (ctx->pc == 0x11B2E8u) {
        ctx->pc = 0x11B2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B2E4u;
        // 0x11b2e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B2ECu;
        goto label_11b2ec;
    }
    ctx->pc = 0x11B2E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B2E4u;
        // 0x11b2e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B2E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B2ECu;
label_11b2ec:
    // 0x11b2ec: 0x0  nop
    ctx->pc = 0x11b2ecu;
    // NOP
    ctx->pc = 0x11b2f0u;
}
