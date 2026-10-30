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

// Function: sub_00205768
// Address: 0x205768 - 0x205798
void sub_00205768_0x205768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00205768_0x205768");
#endif

    switch (ctx->pc) {
        case 0x205768u: goto label_205768;
        case 0x20576cu: goto label_20576c;
        case 0x205770u: goto label_205770;
        case 0x205774u: goto label_205774;
        case 0x205778u: goto label_205778;
        case 0x20577cu: goto label_20577c;
        case 0x205780u: goto label_205780;
        case 0x205784u: goto label_205784;
        case 0x205788u: goto label_205788;
        case 0x20578cu: goto label_20578c;
        case 0x205790u: goto label_205790;
        case 0x205794u: goto label_205794;
        default: break;
    }

    ctx->pc = 0x205768u;

label_205768:
    // 0x205768: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x205768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_20576c:
    // 0x20576c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20576cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_205770:
    // 0x205770: 0xac850070  sw          $a1, 0x70($a0)
    ctx->pc = 0x205770u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 5));
label_205774:
    // 0x205774: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x205774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_205778:
    // 0x205778: 0x844300a8  lh          $v1, 0xA8($v0)
    ctx->pc = 0x205778u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_20577c:
    // 0x20577c: 0x8c4500ac  lw          $a1, 0xAC($v0)
    ctx->pc = 0x20577cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_205780:
    // 0x205780: 0xa0f809  jalr        $a1
label_205784:
    if (ctx->pc == 0x205784u) {
        ctx->pc = 0x205784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205780u;
        // 0x205784: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205788u;
        goto label_205788;
    }
    ctx->pc = 0x205780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x205788u);
        ctx->pc = 0x205784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205780u;
        // 0x205784: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205780u, 0x205788u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x205788u;
label_205788:
    // 0x205788: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x205788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20578c:
    // 0x20578c: 0x3e00008  jr          $ra
label_205790:
    if (ctx->pc == 0x205790u) {
        ctx->pc = 0x205790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20578Cu;
        // 0x205790: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205794u;
        goto label_205794;
    }
    ctx->pc = 0x20578Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20578Cu;
        // 0x205790: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20578Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205794u;
label_205794:
    // 0x205794: 0x0  nop
    ctx->pc = 0x205794u;
    // NOP
    ctx->pc = 0x205798u;
}
