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

// Function: sub_00195928
// Address: 0x195928 - 0x195980
void sub_00195928_0x195928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00195928_0x195928");
#endif

    switch (ctx->pc) {
        case 0x195928u: goto label_195928;
        case 0x19592cu: goto label_19592c;
        case 0x195930u: goto label_195930;
        case 0x195934u: goto label_195934;
        case 0x195938u: goto label_195938;
        case 0x19593cu: goto label_19593c;
        case 0x195940u: goto label_195940;
        case 0x195944u: goto label_195944;
        case 0x195948u: goto label_195948;
        case 0x19594cu: goto label_19594c;
        case 0x195950u: goto label_195950;
        case 0x195954u: goto label_195954;
        case 0x195958u: goto label_195958;
        case 0x19595cu: goto label_19595c;
        case 0x195960u: goto label_195960;
        case 0x195964u: goto label_195964;
        case 0x195968u: goto label_195968;
        case 0x19596cu: goto label_19596c;
        case 0x195970u: goto label_195970;
        case 0x195974u: goto label_195974;
        case 0x195978u: goto label_195978;
        case 0x19597cu: goto label_19597c;
        default: break;
    }

    ctx->pc = 0x195928u;

label_195928:
    // 0x195928: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x195928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_19592c:
    // 0x19592c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x19592cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_195930:
    // 0x195930: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x195930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_195934:
    // 0x195934: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x195934u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_195938:
    // 0x195938: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x195938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_19593c:
    // 0x19593c: 0x84650060  lh          $a1, 0x60($v1)
    ctx->pc = 0x19593cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
label_195940:
    // 0x195940: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x195940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_195944:
    // 0x195944: 0x40f809  jalr        $v0
label_195948:
    if (ctx->pc == 0x195948u) {
        ctx->pc = 0x195948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195944u;
        // 0x195948: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19594Cu;
        goto label_19594c;
    }
    ctx->pc = 0x195944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19594Cu);
        ctx->pc = 0x195948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195944u;
        // 0x195948: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195944u, 0x19594Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19594Cu;
label_19594c:
    // 0x19594c: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x19594cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_195950:
    // 0x195950: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x195950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_195954:
    // 0x195954: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x195954u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_195958:
    // 0x195958: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x195958u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19595c:
    // 0x19595c: 0x85040070  lh          $a0, 0x70($t0)
    ctx->pc = 0x19595cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 112)));
label_195960:
    // 0x195960: 0x8d030074  lw          $v1, 0x74($t0)
    ctx->pc = 0x195960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 116)));
label_195964:
    // 0x195964: 0x60f809  jalr        $v1
label_195968:
    if (ctx->pc == 0x195968u) {
        ctx->pc = 0x195968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195964u;
        // 0x195968: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19596Cu;
        goto label_19596c;
    }
    ctx->pc = 0x195964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x19596Cu);
        ctx->pc = 0x195968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195964u;
        // 0x195968: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195964u, 0x19596Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19596Cu;
label_19596c:
    // 0x19596c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19596cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_195970:
    // 0x195970: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x195970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_195974:
    // 0x195974: 0x3e00008  jr          $ra
label_195978:
    if (ctx->pc == 0x195978u) {
        ctx->pc = 0x195978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195974u;
        // 0x195978: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19597Cu;
        goto label_19597c;
    }
    ctx->pc = 0x195974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195974u;
        // 0x195978: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19597Cu;
label_19597c:
    // 0x19597c: 0x0  nop
    ctx->pc = 0x19597cu;
    // NOP
    ctx->pc = 0x195980u;
}
