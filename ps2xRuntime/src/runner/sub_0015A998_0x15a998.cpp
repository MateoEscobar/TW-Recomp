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

// Function: sub_0015A998
// Address: 0x15a998 - 0x15a9f0
void sub_0015A998_0x15a998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015A998_0x15a998");
#endif

    switch (ctx->pc) {
        case 0x15a998u: goto label_15a998;
        case 0x15a99cu: goto label_15a99c;
        case 0x15a9a0u: goto label_15a9a0;
        case 0x15a9a4u: goto label_15a9a4;
        case 0x15a9a8u: goto label_15a9a8;
        case 0x15a9acu: goto label_15a9ac;
        case 0x15a9b0u: goto label_15a9b0;
        case 0x15a9b4u: goto label_15a9b4;
        case 0x15a9b8u: goto label_15a9b8;
        case 0x15a9bcu: goto label_15a9bc;
        case 0x15a9c0u: goto label_15a9c0;
        case 0x15a9c4u: goto label_15a9c4;
        case 0x15a9c8u: goto label_15a9c8;
        case 0x15a9ccu: goto label_15a9cc;
        case 0x15a9d0u: goto label_15a9d0;
        case 0x15a9d4u: goto label_15a9d4;
        case 0x15a9d8u: goto label_15a9d8;
        case 0x15a9dcu: goto label_15a9dc;
        case 0x15a9e0u: goto label_15a9e0;
        case 0x15a9e4u: goto label_15a9e4;
        case 0x15a9e8u: goto label_15a9e8;
        case 0x15a9ecu: goto label_15a9ec;
        default: break;
    }

    ctx->pc = 0x15a998u;

label_15a998:
    // 0x15a998: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15a998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15a99c:
    // 0x15a99c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x15a99cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_15a9a0:
    // 0x15a9a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15a9a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_15a9a4:
    // 0x15a9a4: 0x8c455024  lw          $a1, 0x5024($v0)
    ctx->pc = 0x15a9a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20516)));
label_15a9a8:
    // 0x15a9a8: 0x8ca30128  lw          $v1, 0x128($a1)
    ctx->pc = 0x15a9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 296)));
label_15a9ac:
    // 0x15a9ac: 0x84640128  lh          $a0, 0x128($v1)
    ctx->pc = 0x15a9acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 296)));
label_15a9b0:
    // 0x15a9b0: 0x8c62012c  lw          $v0, 0x12C($v1)
    ctx->pc = 0x15a9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 300)));
label_15a9b4:
    // 0x15a9b4: 0x40f809  jalr        $v0
label_15a9b8:
    if (ctx->pc == 0x15A9B8u) {
        ctx->pc = 0x15A9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A9B4u;
        // 0x15a9b8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A9BCu;
        goto label_15a9bc;
    }
    ctx->pc = 0x15A9B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15A9BCu);
        ctx->pc = 0x15A9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A9B4u;
        // 0x15a9b8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A9B4u, 0x15A9BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15A9BCu;
label_15a9bc:
    // 0x15a9bc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_15a9c0:
    if (ctx->pc == 0x15A9C0u) {
        ctx->pc = 0x15A9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A9BCu;
        // 0x15a9c0: 0x3c020016  lui         $v0, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A9C4u;
        goto label_15a9c4;
    }
    ctx->pc = 0x15A9BCu;
    {
        const bool branch_taken_0x15a9bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A9BCu;
        // 0x15a9c0: 0x3c020016  lui         $v0, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a9bc) {
            ctx->pc = 0x15A9D0u;
            goto label_15a9d0;
        }
    }
    ctx->pc = 0x15A9C4u;
label_15a9c4:
    // 0x15a9c4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x15a9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_15a9c8:
    // 0x15a9c8: 0x10000004  b           . + 4 + (0x4 << 2)
label_15a9cc:
    if (ctx->pc == 0x15A9CCu) {
        ctx->pc = 0x15A9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A9C8u;
        // 0x15a9cc: 0x2442aa80  addiu       $v0, $v0, -0x5580 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945408));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A9D0u;
        goto label_15a9d0;
    }
    ctx->pc = 0x15A9C8u;
    {
        const bool branch_taken_0x15a9c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A9C8u;
        // 0x15a9cc: 0x2442aa80  addiu       $v0, $v0, -0x5580 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945408));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a9c8) {
            ctx->pc = 0x15A9DCu;
            goto label_15a9dc;
        }
    }
    ctx->pc = 0x15A9D0u;
label_15a9d0:
    // 0x15a9d0: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x15a9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
label_15a9d4:
    // 0x15a9d4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x15a9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_15a9d8:
    // 0x15a9d8: 0x2442ab10  addiu       $v0, $v0, -0x54F0
    ctx->pc = 0x15a9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945552));
label_15a9dc:
    // 0x15a9dc: 0xac62c734  sw          $v0, -0x38CC($v1)
    ctx->pc = 0x15a9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294952756), GPR_U32(ctx, 2));
label_15a9e0:
    // 0x15a9e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15a9e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15a9e4:
    // 0x15a9e4: 0x3e00008  jr          $ra
label_15a9e8:
    if (ctx->pc == 0x15A9E8u) {
        ctx->pc = 0x15A9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A9E4u;
        // 0x15a9e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A9ECu;
        goto label_15a9ec;
    }
    ctx->pc = 0x15A9E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A9E4u;
        // 0x15a9e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A9E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15A9ECu;
label_15a9ec:
    // 0x15a9ec: 0x0  nop
    ctx->pc = 0x15a9ecu;
    // NOP
    ctx->pc = 0x15a9f0u;
}
