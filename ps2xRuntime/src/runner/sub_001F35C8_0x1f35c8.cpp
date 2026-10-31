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

// Function: sub_001F35C8
// Address: 0x1f35c8 - 0x1f3610
void sub_001F35C8_0x1f35c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F35C8_0x1f35c8");
#endif

    switch (ctx->pc) {
        case 0x1f35c8u: goto label_1f35c8;
        case 0x1f35ccu: goto label_1f35cc;
        case 0x1f35d0u: goto label_1f35d0;
        case 0x1f35d4u: goto label_1f35d4;
        case 0x1f35d8u: goto label_1f35d8;
        case 0x1f35dcu: goto label_1f35dc;
        case 0x1f35e0u: goto label_1f35e0;
        case 0x1f35e4u: goto label_1f35e4;
        case 0x1f35e8u: goto label_1f35e8;
        case 0x1f35ecu: goto label_1f35ec;
        case 0x1f35f0u: goto label_1f35f0;
        case 0x1f35f4u: goto label_1f35f4;
        case 0x1f35f8u: goto label_1f35f8;
        case 0x1f35fcu: goto label_1f35fc;
        case 0x1f3600u: goto label_1f3600;
        case 0x1f3604u: goto label_1f3604;
        case 0x1f3608u: goto label_1f3608;
        case 0x1f360cu: goto label_1f360c;
        default: break;
    }

    ctx->pc = 0x1f35c8u;

label_1f35c8:
    // 0x1f35c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f35c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1f35cc:
    // 0x1f35cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f35ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f35d0:
    // 0x1f35d0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1f35d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1f35d4:
    // 0x1f35d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f35d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1f35d8:
    // 0x1f35d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f35d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f35dc:
    // 0x1f35dc: 0x8e060070  lw          $a2, 0x70($s0)
    ctx->pc = 0x1f35dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_1f35e0:
    // 0x1f35e0: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1f35e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1f35e4:
    // 0x1f35e4: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x1f35e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_1f35e8:
    // 0x1f35e8: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x1f35e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_1f35ec:
    // 0x1f35ec: 0x40f809  jalr        $v0
label_1f35f0:
    if (ctx->pc == 0x1F35F0u) {
        ctx->pc = 0x1F35F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F35ECu;
        // 0x1f35f0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F35F4u;
        goto label_1f35f4;
    }
    ctx->pc = 0x1F35ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F35F4u);
        ctx->pc = 0x1F35F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F35ECu;
        // 0x1f35f0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F35ECu, 0x1F35F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F35F4u;
label_1f35f4:
    // 0x1f35f4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1f35f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f35f8:
    // 0x1f35f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f35f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f35fc:
    // 0x1f35fc: 0xae03008c  sw          $v1, 0x8C($s0)
    ctx->pc = 0x1f35fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 3));
label_1f3600:
    // 0x1f3600: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1f3600u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f3604:
    // 0x1f3604: 0x3e00008  jr          $ra
label_1f3608:
    if (ctx->pc == 0x1F3608u) {
        ctx->pc = 0x1F3608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3604u;
        // 0x1f3608: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F360Cu;
        goto label_1f360c;
    }
    ctx->pc = 0x1F3604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F3608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3604u;
        // 0x1f3608: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F3604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F360Cu;
label_1f360c:
    // 0x1f360c: 0x0  nop
    ctx->pc = 0x1f360cu;
    // NOP
    ctx->pc = 0x1f3610u;
}
