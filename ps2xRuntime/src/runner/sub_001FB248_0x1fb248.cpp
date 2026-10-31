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

// Function: sub_001FB248
// Address: 0x1fb248 - 0x1fb290
void sub_001FB248_0x1fb248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FB248_0x1fb248");
#endif

    switch (ctx->pc) {
        case 0x1fb248u: goto label_1fb248;
        case 0x1fb24cu: goto label_1fb24c;
        case 0x1fb250u: goto label_1fb250;
        case 0x1fb254u: goto label_1fb254;
        case 0x1fb258u: goto label_1fb258;
        case 0x1fb25cu: goto label_1fb25c;
        case 0x1fb260u: goto label_1fb260;
        case 0x1fb264u: goto label_1fb264;
        case 0x1fb268u: goto label_1fb268;
        case 0x1fb26cu: goto label_1fb26c;
        case 0x1fb270u: goto label_1fb270;
        case 0x1fb274u: goto label_1fb274;
        case 0x1fb278u: goto label_1fb278;
        case 0x1fb27cu: goto label_1fb27c;
        case 0x1fb280u: goto label_1fb280;
        case 0x1fb284u: goto label_1fb284;
        case 0x1fb288u: goto label_1fb288;
        case 0x1fb28cu: goto label_1fb28c;
        default: break;
    }

    ctx->pc = 0x1fb248u;

label_1fb248:
    // 0x1fb248: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fb248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1fb24c:
    // 0x1fb24c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fb24cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fb250:
    // 0x1fb250: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1fb250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1fb254:
    // 0x1fb254: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fb254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1fb258:
    // 0x1fb258: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fb258u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fb25c:
    // 0x1fb25c: 0x8e060070  lw          $a2, 0x70($s0)
    ctx->pc = 0x1fb25cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_1fb260:
    // 0x1fb260: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1fb260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1fb264:
    // 0x1fb264: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x1fb264u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_1fb268:
    // 0x1fb268: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x1fb268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_1fb26c:
    // 0x1fb26c: 0x40f809  jalr        $v0
label_1fb270:
    if (ctx->pc == 0x1FB270u) {
        ctx->pc = 0x1FB270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB26Cu;
        // 0x1fb270: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB274u;
        goto label_1fb274;
    }
    ctx->pc = 0x1FB26Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FB274u);
        ctx->pc = 0x1FB270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB26Cu;
        // 0x1fb270: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB26Cu, 0x1FB274u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FB274u;
label_1fb274:
    // 0x1fb274: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1fb274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1fb278:
    // 0x1fb278: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fb278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fb27c:
    // 0x1fb27c: 0xae03008c  sw          $v1, 0x8C($s0)
    ctx->pc = 0x1fb27cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 3));
label_1fb280:
    // 0x1fb280: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1fb280u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1fb284:
    // 0x1fb284: 0x3e00008  jr          $ra
label_1fb288:
    if (ctx->pc == 0x1FB288u) {
        ctx->pc = 0x1FB288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB284u;
        // 0x1fb288: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB28Cu;
        goto label_1fb28c;
    }
    ctx->pc = 0x1FB284u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB284u;
        // 0x1fb288: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB284u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB28Cu;
label_1fb28c:
    // 0x1fb28c: 0x0  nop
    ctx->pc = 0x1fb28cu;
    // NOP
    ctx->pc = 0x1fb290u;
}
