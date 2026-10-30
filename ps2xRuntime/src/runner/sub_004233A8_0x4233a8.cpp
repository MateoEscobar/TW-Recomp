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

// Function: sub_004233A8
// Address: 0x4233a8 - 0x4233f8
void sub_004233A8_0x4233a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004233A8_0x4233a8");
#endif

    switch (ctx->pc) {
        case 0x4233a8u: goto label_4233a8;
        case 0x4233acu: goto label_4233ac;
        case 0x4233b0u: goto label_4233b0;
        case 0x4233b4u: goto label_4233b4;
        case 0x4233b8u: goto label_4233b8;
        case 0x4233bcu: goto label_4233bc;
        case 0x4233c0u: goto label_4233c0;
        case 0x4233c4u: goto label_4233c4;
        case 0x4233c8u: goto label_4233c8;
        case 0x4233ccu: goto label_4233cc;
        case 0x4233d0u: goto label_4233d0;
        case 0x4233d4u: goto label_4233d4;
        case 0x4233d8u: goto label_4233d8;
        case 0x4233dcu: goto label_4233dc;
        case 0x4233e0u: goto label_4233e0;
        case 0x4233e4u: goto label_4233e4;
        case 0x4233e8u: goto label_4233e8;
        case 0x4233ecu: goto label_4233ec;
        case 0x4233f0u: goto label_4233f0;
        case 0x4233f4u: goto label_4233f4;
        default: break;
    }

    ctx->pc = 0x4233a8u;

label_4233a8:
    // 0x4233a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4233a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4233ac:
    // 0x4233ac: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4233acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4233b0:
    // 0x4233b0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4233b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4233b4:
    // 0x4233b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4233b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4233b8:
    // 0x4233b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4233b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4233bc:
    // 0x4233bc: 0xae050014  sw          $a1, 0x14($s0)
    ctx->pc = 0x4233bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 5));
label_4233c0:
    // 0x4233c0: 0x8c45b734  lw          $a1, -0x48CC($v0)
    ctx->pc = 0x4233c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_4233c4:
    // 0x4233c4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4233c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4233c8:
    // 0x4233c8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x4233c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_4233cc:
    // 0x4233cc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x4233ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_4233d0:
    // 0x4233d0: 0x40f809  jalr        $v0
label_4233d4:
    if (ctx->pc == 0x4233D4u) {
        ctx->pc = 0x4233D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4233D0u;
        // 0x4233d4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4233D8u;
        goto label_4233d8;
    }
    ctx->pc = 0x4233D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4233D8u);
        ctx->pc = 0x4233D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4233D0u;
        // 0x4233d4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4233D0u, 0x4233D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4233D8u;
label_4233d8:
    // 0x4233d8: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x4233d8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
label_4233dc:
    // 0x4233dc: 0x3c02005a  lui         $v0, 0x5A
    ctx->pc = 0x4233dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
label_4233e0:
    // 0x4233e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4233e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4233e4:
    // 0x4233e4: 0x8c438690  lw          $v1, -0x7970($v0)
    ctx->pc = 0x4233e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936208)));
label_4233e8:
    // 0x4233e8: 0xae030044  sw          $v1, 0x44($s0)
    ctx->pc = 0x4233e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 3));
label_4233ec:
    // 0x4233ec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4233ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4233f0:
    // 0x4233f0: 0x3e00008  jr          $ra
label_4233f4:
    if (ctx->pc == 0x4233F4u) {
        ctx->pc = 0x4233F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4233F0u;
        // 0x4233f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4233F8u;
        goto label_fallthrough_0x4233f0;
    }
    ctx->pc = 0x4233F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4233F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4233F0u;
        // 0x4233f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4233F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4233f0:
    ctx->pc = 0x4233F8u;
}
