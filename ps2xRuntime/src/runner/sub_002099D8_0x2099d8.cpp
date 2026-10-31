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

// Function: sub_002099D8
// Address: 0x2099d8 - 0x209a08
void sub_002099D8_0x2099d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002099D8_0x2099d8");
#endif

    switch (ctx->pc) {
        case 0x2099d8u: goto label_2099d8;
        case 0x2099dcu: goto label_2099dc;
        case 0x2099e0u: goto label_2099e0;
        case 0x2099e4u: goto label_2099e4;
        case 0x2099e8u: goto label_2099e8;
        case 0x2099ecu: goto label_2099ec;
        case 0x2099f0u: goto label_2099f0;
        case 0x2099f4u: goto label_2099f4;
        case 0x2099f8u: goto label_2099f8;
        case 0x2099fcu: goto label_2099fc;
        case 0x209a00u: goto label_209a00;
        case 0x209a04u: goto label_209a04;
        default: break;
    }

    ctx->pc = 0x2099d8u;

label_2099d8:
    // 0x2099d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2099d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2099dc:
    // 0x2099dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2099dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2099e0:
    // 0x2099e0: 0xac850070  sw          $a1, 0x70($a0)
    ctx->pc = 0x2099e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 5));
label_2099e4:
    // 0x2099e4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2099e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2099e8:
    // 0x2099e8: 0x844300a8  lh          $v1, 0xA8($v0)
    ctx->pc = 0x2099e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_2099ec:
    // 0x2099ec: 0x8c4500ac  lw          $a1, 0xAC($v0)
    ctx->pc = 0x2099ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_2099f0:
    // 0x2099f0: 0xa0f809  jalr        $a1
label_2099f4:
    if (ctx->pc == 0x2099F4u) {
        ctx->pc = 0x2099F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2099F0u;
        // 0x2099f4: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2099F8u;
        goto label_2099f8;
    }
    ctx->pc = 0x2099F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2099F8u);
        ctx->pc = 0x2099F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2099F0u;
        // 0x2099f4: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2099F0u, 0x2099F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2099F8u;
label_2099f8:
    // 0x2099f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2099f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2099fc:
    // 0x2099fc: 0x3e00008  jr          $ra
label_209a00:
    if (ctx->pc == 0x209A00u) {
        ctx->pc = 0x209A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2099FCu;
        // 0x209a00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209A04u;
        goto label_209a04;
    }
    ctx->pc = 0x2099FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2099FCu;
        // 0x209a00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2099FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209A04u;
label_209a04:
    // 0x209a04: 0x0  nop
    ctx->pc = 0x209a04u;
    // NOP
    ctx->pc = 0x209a08u;
}
