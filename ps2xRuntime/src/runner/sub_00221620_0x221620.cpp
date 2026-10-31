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

// Function: sub_00221620
// Address: 0x221620 - 0x221670
void sub_00221620_0x221620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00221620_0x221620");
#endif

    switch (ctx->pc) {
        case 0x221658u: goto label_221658;
        case 0x221660u: goto label_221660;
        default: break;
    }

    ctx->pc = 0x221620u;

    // 0x221620: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x221620u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x221624: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x221624u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x221628: 0x8c6201e0  lw          $v0, 0x1E0($v1)
    ctx->pc = 0x221628u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5101E0u));
    // 0x22162c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x22162Cu;
    {
        const bool branch_taken_0x22162c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x221630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22162Cu;
        // 0x221630: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22162c) {
            ctx->pc = 0x221650u;
            goto label_221650;
        }
    }
    ctx->pc = 0x221634u;
    // 0x221634: 0x8c8200d4  lw          $v0, 0xD4($a0)
    ctx->pc = 0x221634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x221638: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x221638u;
    {
        const bool branch_taken_0x221638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x221638) {
            ctx->pc = 0x221650u;
            goto label_221650;
        }
    }
    ctx->pc = 0x221640u;
    // 0x221640: 0xc48103a4  lwc1        $f1, 0x3A4($a0)
    ctx->pc = 0x221640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 932)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x221644: 0xc4400174  lwc1        $f0, 0x174($v0)
    ctx->pc = 0x221644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x221648: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x221648u;
    {
        const bool branch_taken_0x221648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22164Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221648u;
        // 0x22164c: 0x46000802  mul.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x221648) {
            ctx->pc = 0x221664u;
            goto label_221664;
        }
    }
    ctx->pc = 0x221650u;
label_221650:
    // 0x221650: 0xc08a200  jal         func_228800
    ctx->pc = 0x221650u;
    SET_GPR_U32(ctx, 31, 0x221658u);
    ctx->pc = 0x221654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221650u;
    // 0x221654: 0x8c8400cc  lw          $a0, 0xCC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 204)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228800u, 0x221650u, 0x221658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221658u;
label_221658:
    // 0x221658: 0xc08a206  jal         func_228818
    ctx->pc = 0x221658u;
    SET_GPR_U32(ctx, 31, 0x221660u);
    ctx->pc = 0x22165Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221658u;
    // 0x22165c: 0x9044011c  lbu         $a0, 0x11C($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 284)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228818u, 0x221658u, 0x221660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221660u;
label_221660:
    // 0x221660: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x221660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_221664:
    // 0x221664: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x221664u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x221668: 0x3e00008  jr          $ra
    ctx->pc = 0x221668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22166Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221668u;
        // 0x22166c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x221668u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x221670u;
}
