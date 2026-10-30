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

// Function: sub_003C0EC0
// Address: 0x3c0ec0 - 0x3c0ef0
void sub_003C0EC0_0x3c0ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C0EC0_0x3c0ec0");
#endif

    switch (ctx->pc) {
        case 0x3c0ec0u: goto label_3c0ec0;
        case 0x3c0ec4u: goto label_3c0ec4;
        case 0x3c0ec8u: goto label_3c0ec8;
        case 0x3c0eccu: goto label_3c0ecc;
        case 0x3c0ed0u: goto label_3c0ed0;
        case 0x3c0ed4u: goto label_3c0ed4;
        case 0x3c0ed8u: goto label_3c0ed8;
        case 0x3c0edcu: goto label_3c0edc;
        case 0x3c0ee0u: goto label_3c0ee0;
        case 0x3c0ee4u: goto label_3c0ee4;
        case 0x3c0ee8u: goto label_3c0ee8;
        case 0x3c0eecu: goto label_3c0eec;
        default: break;
    }

    ctx->pc = 0x3c0ec0u;

label_3c0ec0:
    // 0x3c0ec0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3c0ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3c0ec4:
    // 0x3c0ec4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c0ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3c0ec8:
    // 0x3c0ec8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3c0ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3c0ecc:
    // 0x3c0ecc: 0x84650188  lh          $a1, 0x188($v1)
    ctx->pc = 0x3c0eccu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3c0ed0:
    // 0x3c0ed0: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3c0ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3c0ed4:
    // 0x3c0ed4: 0x40f809  jalr        $v0
label_3c0ed8:
    if (ctx->pc == 0x3C0ED8u) {
        ctx->pc = 0x3C0ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0ED4u;
        // 0x3c0ed8: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0EDCu;
        goto label_3c0edc;
    }
    ctx->pc = 0x3C0ED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C0EDCu);
        ctx->pc = 0x3C0ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0ED4u;
        // 0x3c0ed8: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C0ED4u, 0x3C0EDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C0EDCu;
label_3c0edc:
    // 0x3c0edc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c0edcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3c0ee0:
    // 0x3c0ee0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3c0ee0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c0ee4:
    // 0x3c0ee4: 0x3e00008  jr          $ra
label_3c0ee8:
    if (ctx->pc == 0x3C0EE8u) {
        ctx->pc = 0x3C0EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0EE4u;
        // 0x3c0ee8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0EECu;
        goto label_3c0eec;
    }
    ctx->pc = 0x3C0EE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C0EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0EE4u;
        // 0x3c0ee8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C0EE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C0EECu;
label_3c0eec:
    // 0x3c0eec: 0x0  nop
    ctx->pc = 0x3c0eecu;
    // NOP
    ctx->pc = 0x3c0ef0u;
}
