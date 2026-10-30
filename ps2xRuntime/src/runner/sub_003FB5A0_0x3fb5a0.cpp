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

// Function: sub_003FB5A0
// Address: 0x3fb5a0 - 0x3fb5f8
void sub_003FB5A0_0x3fb5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FB5A0_0x3fb5a0");
#endif

    switch (ctx->pc) {
        case 0x3fb5a0u: goto label_3fb5a0;
        case 0x3fb5a4u: goto label_3fb5a4;
        case 0x3fb5a8u: goto label_3fb5a8;
        case 0x3fb5acu: goto label_3fb5ac;
        case 0x3fb5b0u: goto label_3fb5b0;
        case 0x3fb5b4u: goto label_3fb5b4;
        case 0x3fb5b8u: goto label_3fb5b8;
        case 0x3fb5bcu: goto label_3fb5bc;
        case 0x3fb5c0u: goto label_3fb5c0;
        case 0x3fb5c4u: goto label_3fb5c4;
        case 0x3fb5c8u: goto label_3fb5c8;
        case 0x3fb5ccu: goto label_3fb5cc;
        case 0x3fb5d0u: goto label_3fb5d0;
        case 0x3fb5d4u: goto label_3fb5d4;
        case 0x3fb5d8u: goto label_3fb5d8;
        case 0x3fb5dcu: goto label_3fb5dc;
        case 0x3fb5e0u: goto label_3fb5e0;
        case 0x3fb5e4u: goto label_3fb5e4;
        case 0x3fb5e8u: goto label_3fb5e8;
        case 0x3fb5ecu: goto label_3fb5ec;
        case 0x3fb5f0u: goto label_3fb5f0;
        case 0x3fb5f4u: goto label_3fb5f4;
        default: break;
    }

    ctx->pc = 0x3fb5a0u;

label_3fb5a0:
    // 0x3fb5a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3fb5a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3fb5a4:
    // 0x3fb5a4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3fb5a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3fb5a8:
    // 0x3fb5a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3fb5a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3fb5ac:
    // 0x3fb5ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3fb5acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3fb5b0:
    // 0x3fb5b0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3fb5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3fb5b4:
    // 0x3fb5b4: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3fb5b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3fb5b8:
    // 0x3fb5b8: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3fb5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3fb5bc:
    // 0x3fb5bc: 0x40f809  jalr        $v0
label_3fb5c0:
    if (ctx->pc == 0x3FB5C0u) {
        ctx->pc = 0x3FB5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB5BCu;
        // 0x3fb5c0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB5C4u;
        goto label_3fb5c4;
    }
    ctx->pc = 0x3FB5BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3FB5C4u);
        ctx->pc = 0x3FB5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB5BCu;
        // 0x3fb5c0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FB5BCu, 0x3FB5C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3FB5C4u;
label_3fb5c4:
    // 0x3fb5c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3fb5c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3fb5c8:
    // 0x3fb5c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3fb5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3fb5cc:
    // 0x3fb5cc: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x3fb5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_3fb5d0:
    // 0x3fb5d0: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
label_3fb5d4:
    if (ctx->pc == 0x3FB5D4u) {
        ctx->pc = 0x3FB5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB5D0u;
        // 0x3fb5d4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB5D8u;
        goto label_3fb5d8;
    }
    ctx->pc = 0x3FB5D0u;
    {
        const bool branch_taken_0x3fb5d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3fb5d0) {
            ctx->pc = 0x3FB5D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FB5D0u;
            // 0x3fb5d4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FB5E8u;
            goto label_3fb5e8;
        }
    }
    ctx->pc = 0x3FB5D8u;
label_3fb5d8:
    // 0x3fb5d8: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x3fb5d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_3fb5dc:
    // 0x3fb5dc: 0x7e020040  sq          $v0, 0x40($s0)
    ctx->pc = 0x3fb5dcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), GPR_VEC(ctx, 2));
label_3fb5e0:
    // 0x3fb5e0: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x3fb5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
label_3fb5e4:
    // 0x3fb5e4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3fb5e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3fb5e8:
    // 0x3fb5e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3fb5e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3fb5ec:
    // 0x3fb5ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3fb5ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3fb5f0:
    // 0x3fb5f0: 0x3e00008  jr          $ra
label_3fb5f4:
    if (ctx->pc == 0x3FB5F4u) {
        ctx->pc = 0x3FB5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB5F0u;
        // 0x3fb5f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB5F8u;
        goto label_fallthrough_0x3fb5f0;
    }
    ctx->pc = 0x3FB5F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FB5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB5F0u;
        // 0x3fb5f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FB5F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3fb5f0:
    ctx->pc = 0x3FB5F8u;
}
