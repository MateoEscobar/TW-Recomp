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

// Function: sub_001A08C8
// Address: 0x1a08c8 - 0x1a0918
void sub_001A08C8_0x1a08c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A08C8_0x1a08c8");
#endif

    switch (ctx->pc) {
        case 0x1a08c8u: goto label_1a08c8;
        case 0x1a08ccu: goto label_1a08cc;
        case 0x1a08d0u: goto label_1a08d0;
        case 0x1a08d4u: goto label_1a08d4;
        case 0x1a08d8u: goto label_1a08d8;
        case 0x1a08dcu: goto label_1a08dc;
        case 0x1a08e0u: goto label_1a08e0;
        case 0x1a08e4u: goto label_1a08e4;
        case 0x1a08e8u: goto label_1a08e8;
        case 0x1a08ecu: goto label_1a08ec;
        case 0x1a08f0u: goto label_1a08f0;
        case 0x1a08f4u: goto label_1a08f4;
        case 0x1a08f8u: goto label_1a08f8;
        case 0x1a08fcu: goto label_1a08fc;
        case 0x1a0900u: goto label_1a0900;
        case 0x1a0904u: goto label_1a0904;
        case 0x1a0908u: goto label_1a0908;
        case 0x1a090cu: goto label_1a090c;
        case 0x1a0910u: goto label_1a0910;
        case 0x1a0914u: goto label_1a0914;
        default: break;
    }

    ctx->pc = 0x1a08c8u;

label_1a08c8:
    // 0x1a08c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a08c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a08cc:
    // 0x1a08cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a08ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a08d0:
    // 0x1a08d0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a08d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1a08d4:
    // 0x1a08d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a08d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1a08d8:
    // 0x1a08d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a08d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a08dc:
    // 0x1a08dc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a08dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a08e0:
    // 0x1a08e0: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1a08e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1a08e4:
    // 0x1a08e4: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1a08e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1a08e8:
    // 0x1a08e8: 0x60f809  jalr        $v1
label_1a08ec:
    if (ctx->pc == 0x1A08ECu) {
        ctx->pc = 0x1A08ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A08E8u;
        // 0x1a08ec: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A08F0u;
        goto label_1a08f0;
    }
    ctx->pc = 0x1A08E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A08F0u);
        ctx->pc = 0x1A08ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A08E8u;
        // 0x1a08ec: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A08E8u, 0x1A08F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A08F0u;
label_1a08f0:
    // 0x1a08f0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a08f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a08f4:
    // 0x1a08f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a08f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a08f8:
    // 0x1a08f8: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1a08f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1a08fc:
    // 0x1a08fc: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1a08fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1a0900:
    // 0x1a0900: 0x60f809  jalr        $v1
label_1a0904:
    if (ctx->pc == 0x1A0904u) {
        ctx->pc = 0x1A0904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0900u;
        // 0x1a0904: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0908u;
        goto label_1a0908;
    }
    ctx->pc = 0x1A0900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A0908u);
        ctx->pc = 0x1A0904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0900u;
        // 0x1a0904: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0900u, 0x1A0908u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A0908u;
label_1a0908:
    // 0x1a0908: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a0908u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a090c:
    // 0x1a090c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a090cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a0910:
    // 0x1a0910: 0x3e00008  jr          $ra
label_1a0914:
    if (ctx->pc == 0x1A0914u) {
        ctx->pc = 0x1A0914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0910u;
        // 0x1a0914: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0918u;
        goto label_fallthrough_0x1a0910;
    }
    ctx->pc = 0x1A0910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0910u;
        // 0x1a0914: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a0910:
    ctx->pc = 0x1A0918u;
}
