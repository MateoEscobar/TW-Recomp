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

// Function: sub_0014DA38
// Address: 0x14da38 - 0x14daa8
void sub_0014DA38_0x14da38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014DA38_0x14da38");
#endif

    switch (ctx->pc) {
        case 0x14da68u: goto label_14da68;
        case 0x14da78u: goto label_14da78;
        case 0x14da84u: goto label_14da84;
        default: break;
    }

    ctx->pc = 0x14da38u;

    // 0x14da38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14da38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14da3c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x14da3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x14da40: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x14da40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x14da44: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x14da44u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x14da48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14da48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14da4c: 0x8e03c4fc  lw          $v1, -0x3B04($s0)
    ctx->pc = 0x14da4cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50C4FCu));
    // 0x14da50: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x14da50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14da54: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x14DA54u;
    {
        const bool branch_taken_0x14da54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14DA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DA54u;
        // 0x14da58: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14da54) {
            ctx->pc = 0x14DA8Cu;
            goto label_14da8c;
        }
    }
    ctx->pc = 0x14DA5Cu;
    // 0x14da5c: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x14da5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x14da60: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x14DA60u;
    SET_GPR_U32(ctx, 31, 0x14DA68u);
    ctx->pc = 0x14DA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DA60u;
    // 0x14da64: 0x2484b7c0  addiu       $a0, $a0, -0x4840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x14DA60u, 0x14DA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DA68u;
label_14da68:
    // 0x14da68: 0x8e05c4fc  lw          $a1, -0x3B04($s0)
    ctx->pc = 0x14da68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952188)));
    // 0x14da6c: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x14da6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x14da70: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x14DA70u;
    SET_GPR_U32(ctx, 31, 0x14DA78u);
    ctx->pc = 0x14DA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DA70u;
    // 0x14da74: 0x2484b7e8  addiu       $a0, $a0, -0x4818 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x14DA70u, 0x14DA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DA78u;
label_14da78:
    // 0x14da78: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x14da78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x14da7c: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x14DA7Cu;
    SET_GPR_U32(ctx, 31, 0x14DA84u);
    ctx->pc = 0x14DA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DA7Cu;
    // 0x14da80: 0x2484b810  addiu       $a0, $a0, -0x47F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x14DA7Cu, 0x14DA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DA84u;
label_14da84:
    // 0x14da84: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x14DA84u;
    {
        const bool branch_taken_0x14da84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DA84u;
        // 0x14da88: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14da84) {
            ctx->pc = 0x14DA9Cu;
            goto label_14da9c;
        }
    }
    ctx->pc = 0x14DA8Cu;
label_14da8c:
    // 0x14da8c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x14da8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x14da90: 0xae04c4fc  sw          $a0, -0x3B04($s0)
    ctx->pc = 0x14da90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952188), GPR_U32(ctx, 4));
    // 0x14da94: 0xac40c4f8  sw          $zero, -0x3B08($v0)
    ctx->pc = 0x14da94u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x50C4F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50C4F8u, _value); } while (0);
    // 0x14da98: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x14da98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_14da9c:
    // 0x14da9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14da9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14daa0: 0x3e00008  jr          $ra
    ctx->pc = 0x14DAA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14DAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DAA0u;
        // 0x14daa4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14DAA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14DAA8u;
}
