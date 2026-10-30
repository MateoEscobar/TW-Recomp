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

// Function: sub_001EA9E8
// Address: 0x1ea9e8 - 0x1eaa30
void sub_001EA9E8_0x1ea9e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EA9E8_0x1ea9e8");
#endif

    switch (ctx->pc) {
        case 0x1ea9e8u: goto label_1ea9e8;
        case 0x1ea9ecu: goto label_1ea9ec;
        case 0x1ea9f0u: goto label_1ea9f0;
        case 0x1ea9f4u: goto label_1ea9f4;
        case 0x1ea9f8u: goto label_1ea9f8;
        case 0x1ea9fcu: goto label_1ea9fc;
        case 0x1eaa00u: goto label_1eaa00;
        case 0x1eaa04u: goto label_1eaa04;
        case 0x1eaa08u: goto label_1eaa08;
        case 0x1eaa0cu: goto label_1eaa0c;
        case 0x1eaa10u: goto label_1eaa10;
        case 0x1eaa14u: goto label_1eaa14;
        case 0x1eaa18u: goto label_1eaa18;
        case 0x1eaa1cu: goto label_1eaa1c;
        case 0x1eaa20u: goto label_1eaa20;
        case 0x1eaa24u: goto label_1eaa24;
        case 0x1eaa28u: goto label_1eaa28;
        case 0x1eaa2cu: goto label_1eaa2c;
        default: break;
    }

    ctx->pc = 0x1ea9e8u;

label_1ea9e8:
    // 0x1ea9e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ea9e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1ea9ec:
    // 0x1ea9ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ea9ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ea9f0:
    // 0x1ea9f0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ea9f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1ea9f4:
    // 0x1ea9f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ea9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ea9f8:
    // 0x1ea9f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ea9f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ea9fc:
    // 0x1ea9fc: 0x8e060070  lw          $a2, 0x70($s0)
    ctx->pc = 0x1ea9fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_1eaa00:
    // 0x1eaa00: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1eaa00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1eaa04:
    // 0x1eaa04: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x1eaa04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_1eaa08:
    // 0x1eaa08: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x1eaa08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_1eaa0c:
    // 0x1eaa0c: 0x40f809  jalr        $v0
label_1eaa10:
    if (ctx->pc == 0x1EAA10u) {
        ctx->pc = 0x1EAA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAA0Cu;
        // 0x1eaa10: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAA14u;
        goto label_1eaa14;
    }
    ctx->pc = 0x1EAA0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EAA14u);
        ctx->pc = 0x1EAA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAA0Cu;
        // 0x1eaa10: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EAA0Cu, 0x1EAA14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EAA14u;
label_1eaa14:
    // 0x1eaa14: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1eaa14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1eaa18:
    // 0x1eaa18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1eaa18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1eaa1c:
    // 0x1eaa1c: 0xae030090  sw          $v1, 0x90($s0)
    ctx->pc = 0x1eaa1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 3));
label_1eaa20:
    // 0x1eaa20: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1eaa20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1eaa24:
    // 0x1eaa24: 0x3e00008  jr          $ra
label_1eaa28:
    if (ctx->pc == 0x1EAA28u) {
        ctx->pc = 0x1EAA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAA24u;
        // 0x1eaa28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAA2Cu;
        goto label_1eaa2c;
    }
    ctx->pc = 0x1EAA24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EAA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAA24u;
        // 0x1eaa28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EAA24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EAA2Cu;
label_1eaa2c:
    // 0x1eaa2c: 0x0  nop
    ctx->pc = 0x1eaa2cu;
    // NOP
    ctx->pc = 0x1eaa30u;
}
