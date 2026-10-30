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

// Function: sub_001FC568
// Address: 0x1fc568 - 0x1fc5b0
void sub_001FC568_0x1fc568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FC568_0x1fc568");
#endif

    switch (ctx->pc) {
        case 0x1fc568u: goto label_1fc568;
        case 0x1fc56cu: goto label_1fc56c;
        case 0x1fc570u: goto label_1fc570;
        case 0x1fc574u: goto label_1fc574;
        case 0x1fc578u: goto label_1fc578;
        case 0x1fc57cu: goto label_1fc57c;
        case 0x1fc580u: goto label_1fc580;
        case 0x1fc584u: goto label_1fc584;
        case 0x1fc588u: goto label_1fc588;
        case 0x1fc58cu: goto label_1fc58c;
        case 0x1fc590u: goto label_1fc590;
        case 0x1fc594u: goto label_1fc594;
        case 0x1fc598u: goto label_1fc598;
        case 0x1fc59cu: goto label_1fc59c;
        case 0x1fc5a0u: goto label_1fc5a0;
        case 0x1fc5a4u: goto label_1fc5a4;
        case 0x1fc5a8u: goto label_1fc5a8;
        case 0x1fc5acu: goto label_1fc5ac;
        default: break;
    }

    ctx->pc = 0x1fc568u;

label_1fc568:
    // 0x1fc568: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fc568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1fc56c:
    // 0x1fc56c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fc56cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fc570:
    // 0x1fc570: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1fc570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1fc574:
    // 0x1fc574: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fc574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1fc578:
    // 0x1fc578: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fc578u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fc57c:
    // 0x1fc57c: 0x8e060070  lw          $a2, 0x70($s0)
    ctx->pc = 0x1fc57cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_1fc580:
    // 0x1fc580: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1fc580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1fc584:
    // 0x1fc584: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x1fc584u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_1fc588:
    // 0x1fc588: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x1fc588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_1fc58c:
    // 0x1fc58c: 0x40f809  jalr        $v0
label_1fc590:
    if (ctx->pc == 0x1FC590u) {
        ctx->pc = 0x1FC590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC58Cu;
        // 0x1fc590: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC594u;
        goto label_1fc594;
    }
    ctx->pc = 0x1FC58Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FC594u);
        ctx->pc = 0x1FC590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC58Cu;
        // 0x1fc590: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC58Cu, 0x1FC594u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FC594u;
label_1fc594:
    // 0x1fc594: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1fc594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1fc598:
    // 0x1fc598: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fc598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fc59c:
    // 0x1fc59c: 0xae0300a4  sw          $v1, 0xA4($s0)
    ctx->pc = 0x1fc59cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 3));
label_1fc5a0:
    // 0x1fc5a0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1fc5a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1fc5a4:
    // 0x1fc5a4: 0x3e00008  jr          $ra
label_1fc5a8:
    if (ctx->pc == 0x1FC5A8u) {
        ctx->pc = 0x1FC5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC5A4u;
        // 0x1fc5a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC5ACu;
        goto label_1fc5ac;
    }
    ctx->pc = 0x1FC5A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC5A4u;
        // 0x1fc5a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC5A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC5ACu;
label_1fc5ac:
    // 0x1fc5ac: 0x0  nop
    ctx->pc = 0x1fc5acu;
    // NOP
    ctx->pc = 0x1fc5b0u;
}
