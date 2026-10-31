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

// Function: sub_0039BA30
// Address: 0x39ba30 - 0x39ba68
void sub_0039BA30_0x39ba30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039BA30_0x39ba30");
#endif

    switch (ctx->pc) {
        case 0x39ba30u: goto label_39ba30;
        case 0x39ba34u: goto label_39ba34;
        case 0x39ba38u: goto label_39ba38;
        case 0x39ba3cu: goto label_39ba3c;
        case 0x39ba40u: goto label_39ba40;
        case 0x39ba44u: goto label_39ba44;
        case 0x39ba48u: goto label_39ba48;
        case 0x39ba4cu: goto label_39ba4c;
        case 0x39ba50u: goto label_39ba50;
        case 0x39ba54u: goto label_39ba54;
        case 0x39ba58u: goto label_39ba58;
        case 0x39ba5cu: goto label_39ba5c;
        case 0x39ba60u: goto label_39ba60;
        case 0x39ba64u: goto label_39ba64;
        default: break;
    }

    ctx->pc = 0x39ba30u;

label_39ba30:
    // 0x39ba30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x39ba30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_39ba34:
    // 0x39ba34: 0x2ca20080  sltiu       $v0, $a1, 0x80
    ctx->pc = 0x39ba34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
label_39ba38:
    // 0x39ba38: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_39ba3c:
    if (ctx->pc == 0x39BA3Cu) {
        ctx->pc = 0x39BA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BA38u;
        // 0x39ba3c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39BA40u;
        goto label_39ba40;
    }
    ctx->pc = 0x39BA38u;
    {
        const bool branch_taken_0x39ba38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39BA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BA38u;
        // 0x39ba3c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ba38) {
            ctx->pc = 0x39BA58u;
            goto label_39ba58;
        }
    }
    ctx->pc = 0x39BA40u;
label_39ba40:
    // 0x39ba40: 0x8c8200e0  lw          $v0, 0xE0($a0)
    ctx->pc = 0x39ba40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 224)));
label_39ba44:
    // 0x39ba44: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_39ba48:
    if (ctx->pc == 0x39BA48u) {
        ctx->pc = 0x39BA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BA44u;
        // 0x39ba48: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39BA4Cu;
        goto label_39ba4c;
    }
    ctx->pc = 0x39BA44u;
    {
        const bool branch_taken_0x39ba44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39BA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BA44u;
        // 0x39ba48: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ba44) {
            ctx->pc = 0x39BA5Cu;
            goto label_39ba5c;
        }
    }
    ctx->pc = 0x39BA4Cu;
label_39ba4c:
    // 0x39ba4c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x39ba4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_39ba50:
    // 0x39ba50: 0x40f809  jalr        $v0
label_39ba54:
    if (ctx->pc == 0x39BA54u) {
        ctx->pc = 0x39BA58u;
        goto label_39ba58;
    }
    ctx->pc = 0x39BA50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39BA58u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39BA50u, 0x39BA58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39BA58u;
label_39ba58:
    // 0x39ba58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39ba58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_39ba5c:
    // 0x39ba5c: 0x3e00008  jr          $ra
label_39ba60:
    if (ctx->pc == 0x39BA60u) {
        ctx->pc = 0x39BA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BA5Cu;
        // 0x39ba60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39BA64u;
        goto label_39ba64;
    }
    ctx->pc = 0x39BA5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39BA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BA5Cu;
        // 0x39ba60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39BA5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39BA64u;
label_39ba64:
    // 0x39ba64: 0x0  nop
    ctx->pc = 0x39ba64u;
    // NOP
    ctx->pc = 0x39ba68u;
}
