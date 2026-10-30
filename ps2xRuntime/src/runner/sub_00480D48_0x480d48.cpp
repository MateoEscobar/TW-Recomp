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

// Function: sub_00480D48
// Address: 0x480d48 - 0x480d90
void sub_00480D48_0x480d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00480D48_0x480d48");
#endif

    switch (ctx->pc) {
        case 0x480d48u: goto label_480d48;
        case 0x480d4cu: goto label_480d4c;
        case 0x480d50u: goto label_480d50;
        case 0x480d54u: goto label_480d54;
        case 0x480d58u: goto label_480d58;
        case 0x480d5cu: goto label_480d5c;
        case 0x480d60u: goto label_480d60;
        case 0x480d64u: goto label_480d64;
        case 0x480d68u: goto label_480d68;
        case 0x480d6cu: goto label_480d6c;
        case 0x480d70u: goto label_480d70;
        case 0x480d74u: goto label_480d74;
        case 0x480d78u: goto label_480d78;
        case 0x480d7cu: goto label_480d7c;
        case 0x480d80u: goto label_480d80;
        case 0x480d84u: goto label_480d84;
        case 0x480d88u: goto label_480d88;
        case 0x480d8cu: goto label_480d8c;
        default: break;
    }

    ctx->pc = 0x480d48u;

label_480d48:
    // 0x480d48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x480d48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_480d4c:
    // 0x480d4c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x480d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_480d50:
    // 0x480d50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x480d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_480d54:
    // 0x480d54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x480d54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_480d58:
    // 0x480d58: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x480d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_480d5c:
    // 0x480d5c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_480d60:
    if (ctx->pc == 0x480D60u) {
        ctx->pc = 0x480D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480D5Cu;
        // 0x480d60: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x480D64u;
        goto label_480d64;
    }
    ctx->pc = 0x480D5Cu;
    {
        const bool branch_taken_0x480d5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x480D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480D5Cu;
        // 0x480d60: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x480d5c) {
            ctx->pc = 0x480D70u;
            goto label_480d70;
        }
    }
    ctx->pc = 0x480D64u;
label_480d64:
    // 0x480d64: 0x8c62ae24  lw          $v0, -0x51DC($v1)
    ctx->pc = 0x480d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946340)));
label_480d68:
    // 0x480d68: 0x40f809  jalr        $v0
label_480d6c:
    if (ctx->pc == 0x480D6Cu) {
        ctx->pc = 0x480D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480D68u;
        // 0x480d6c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x480D70u;
        goto label_480d70;
    }
    ctx->pc = 0x480D68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x480D70u);
        ctx->pc = 0x480D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480D68u;
        // 0x480d6c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x480D68u, 0x480D70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x480D70u;
label_480d70:
    // 0x480d70: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x480d70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_480d74:
    // 0x480d74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x480d74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_480d78:
    // 0x480d78: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x480d78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_480d7c:
    // 0x480d7c: 0x3e00008  jr          $ra
label_480d80:
    if (ctx->pc == 0x480D80u) {
        ctx->pc = 0x480D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480D7Cu;
        // 0x480d80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x480D84u;
        goto label_480d84;
    }
    ctx->pc = 0x480D7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x480D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480D7Cu;
        // 0x480d80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x480D7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x480D84u;
label_480d84:
    // 0x480d84: 0x0  nop
    ctx->pc = 0x480d84u;
    // NOP
label_480d88:
    // 0x480d88: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x480d88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_480d8c:
    // 0x480d8c: 0x0  nop
    ctx->pc = 0x480d8cu;
    // NOP
    ctx->pc = 0x480d90u;
}
