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

// Function: sub_001E9368
// Address: 0x1e9368 - 0x1e93c0
void sub_001E9368_0x1e9368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E9368_0x1e9368");
#endif

    switch (ctx->pc) {
        case 0x1e9368u: goto label_1e9368;
        case 0x1e936cu: goto label_1e936c;
        case 0x1e9370u: goto label_1e9370;
        case 0x1e9374u: goto label_1e9374;
        case 0x1e9378u: goto label_1e9378;
        case 0x1e937cu: goto label_1e937c;
        case 0x1e9380u: goto label_1e9380;
        case 0x1e9384u: goto label_1e9384;
        case 0x1e9388u: goto label_1e9388;
        case 0x1e938cu: goto label_1e938c;
        case 0x1e9390u: goto label_1e9390;
        case 0x1e9394u: goto label_1e9394;
        case 0x1e9398u: goto label_1e9398;
        case 0x1e939cu: goto label_1e939c;
        case 0x1e93a0u: goto label_1e93a0;
        case 0x1e93a4u: goto label_1e93a4;
        case 0x1e93a8u: goto label_1e93a8;
        case 0x1e93acu: goto label_1e93ac;
        case 0x1e93b0u: goto label_1e93b0;
        case 0x1e93b4u: goto label_1e93b4;
        case 0x1e93b8u: goto label_1e93b8;
        case 0x1e93bcu: goto label_1e93bc;
        default: break;
    }

    ctx->pc = 0x1e9368u;

label_1e9368:
    // 0x1e9368: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e9368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e936c:
    // 0x1e936c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e936cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1e9370:
    // 0x1e9370: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e9370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e9374:
    // 0x1e9374: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e9374u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e9378:
    // 0x1e9378: 0x8e070050  lw          $a3, 0x50($s0)
    ctx->pc = 0x1e9378u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_1e937c:
    // 0x1e937c: 0x10e0000c  beqz        $a3, . + 4 + (0xC << 2)
label_1e9380:
    if (ctx->pc == 0x1E9380u) {
        ctx->pc = 0x1E9380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E937Cu;
        // 0x1e9380: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9384u;
        goto label_1e9384;
    }
    ctx->pc = 0x1E937Cu;
    {
        const bool branch_taken_0x1e937c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E937Cu;
        // 0x1e9380: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e937c) {
            ctx->pc = 0x1E93B0u;
            goto label_1e93b0;
        }
    }
    ctx->pc = 0x1E9384u;
label_1e9384:
    // 0x1e9384: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1e9384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1e9388:
    // 0x1e9388: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x1e9388u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_1e938c:
    // 0x1e938c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1e938cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1e9390:
    // 0x1e9390: 0x40f809  jalr        $v0
label_1e9394:
    if (ctx->pc == 0x1E9394u) {
        ctx->pc = 0x1E9394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9390u;
        // 0x1e9394: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9398u;
        goto label_1e9398;
    }
    ctx->pc = 0x1E9390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E9398u);
        ctx->pc = 0x1E9394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9390u;
        // 0x1e9394: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9390u, 0x1E9398u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E9398u;
label_1e9398:
    // 0x1e9398: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x1e9398u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_1e939c:
    // 0x1e939c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1e939cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1e93a0:
    // 0x1e93a0: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1e93a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1e93a4:
    // 0x1e93a4: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1e93a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1e93a8:
    // 0x1e93a8: 0x60f809  jalr        $v1
label_1e93ac:
    if (ctx->pc == 0x1E93ACu) {
        ctx->pc = 0x1E93ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E93A8u;
        // 0x1e93ac: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E93B0u;
        goto label_1e93b0;
    }
    ctx->pc = 0x1E93A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E93B0u);
        ctx->pc = 0x1E93ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E93A8u;
        // 0x1e93ac: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E93A8u, 0x1E93B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E93B0u;
label_1e93b0:
    // 0x1e93b0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e93b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e93b4:
    // 0x1e93b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e93b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e93b8:
    // 0x1e93b8: 0x3e00008  jr          $ra
label_1e93bc:
    if (ctx->pc == 0x1E93BCu) {
        ctx->pc = 0x1E93BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E93B8u;
        // 0x1e93bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E93C0u;
        goto label_fallthrough_0x1e93b8;
    }
    ctx->pc = 0x1E93B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E93BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E93B8u;
        // 0x1e93bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E93B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e93b8:
    ctx->pc = 0x1E93C0u;
}
