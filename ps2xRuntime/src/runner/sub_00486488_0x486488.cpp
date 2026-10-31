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

// Function: sub_00486488
// Address: 0x486488 - 0x4864c0
void sub_00486488_0x486488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00486488_0x486488");
#endif

    switch (ctx->pc) {
        case 0x486488u: goto label_486488;
        case 0x48648cu: goto label_48648c;
        case 0x486490u: goto label_486490;
        case 0x486494u: goto label_486494;
        case 0x486498u: goto label_486498;
        case 0x48649cu: goto label_48649c;
        case 0x4864a0u: goto label_4864a0;
        case 0x4864a4u: goto label_4864a4;
        case 0x4864a8u: goto label_4864a8;
        case 0x4864acu: goto label_4864ac;
        case 0x4864b0u: goto label_4864b0;
        case 0x4864b4u: goto label_4864b4;
        case 0x4864b8u: goto label_4864b8;
        case 0x4864bcu: goto label_4864bc;
        default: break;
    }

    ctx->pc = 0x486488u;

label_486488:
    // 0x486488: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x486488u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_48648c:
    // 0x48648c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x48648cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_486490:
    // 0x486490: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x486490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_486494:
    // 0x486494: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x486494u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_486498:
    // 0x486498: 0x8c62adbc  lw          $v0, -0x5244($v1)
    ctx->pc = 0x486498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946236)));
label_48649c:
    // 0x48649c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x48649cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4864a0:
    // 0x4864a0: 0x40f809  jalr        $v0
label_4864a4:
    if (ctx->pc == 0x4864A4u) {
        ctx->pc = 0x4864A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4864A0u;
        // 0x4864a4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4864A8u;
        goto label_4864a8;
    }
    ctx->pc = 0x4864A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4864A8u);
        ctx->pc = 0x4864A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4864A0u;
        // 0x4864a4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4864A0u, 0x4864A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4864A8u;
label_4864a8:
    // 0x4864a8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_4864ac:
    if (ctx->pc == 0x4864ACu) {
        ctx->pc = 0x4864ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4864A8u;
        // 0x4864ac: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4864B0u;
        goto label_4864b0;
    }
    ctx->pc = 0x4864A8u;
    {
        const bool branch_taken_0x4864a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4864ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4864A8u;
        // 0x4864ac: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4864a8) {
            ctx->pc = 0x4864B4u;
            goto label_4864b4;
        }
    }
    ctx->pc = 0x4864B0u;
label_4864b0:
    // 0x4864b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4864b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4864b4:
    // 0x4864b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4864b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4864b8:
    // 0x4864b8: 0x3e00008  jr          $ra
label_4864bc:
    if (ctx->pc == 0x4864BCu) {
        ctx->pc = 0x4864BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4864B8u;
        // 0x4864bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4864C0u;
        goto label_fallthrough_0x4864b8;
    }
    ctx->pc = 0x4864B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4864BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4864B8u;
        // 0x4864bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4864B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4864b8:
    ctx->pc = 0x4864C0u;
}
