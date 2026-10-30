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

// Function: sub_0025D348
// Address: 0x25d348 - 0x25d390
void sub_0025D348_0x25d348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025D348_0x25d348");
#endif

    switch (ctx->pc) {
        case 0x25d35cu: goto label_25d35c;
        case 0x25d37cu: goto label_25d37c;
        default: break;
    }

    ctx->pc = 0x25d348u;

    // 0x25d348: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25d348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25d34c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x25d34cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x25d350: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25d350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25d354: 0xc089fe4  jal         func_227F90
    ctx->pc = 0x25D354u;
    SET_GPR_U32(ctx, 31, 0x25D35Cu);
    ctx->pc = 0x25D358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D354u;
    // 0x25d358: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227F90u, 0x25D354u, 0x25D35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D35Cu;
label_25d35c:
    // 0x25d35c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25D35Cu;
    {
        const bool branch_taken_0x25d35c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25D360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D35Cu;
        // 0x25d360: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d35c) {
            ctx->pc = 0x25D36Cu;
            goto label_25d36c;
        }
    }
    ctx->pc = 0x25D364u;
    // 0x25d364: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x25d364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x25d368: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x25d368u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
label_25d36c:
    // 0x25d36c: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x25d36cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x25d370: 0x52db8  dsll        $a1, $a1, 22
    ctx->pc = 0x25d370u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 22);
    // 0x25d374: 0xc089988  jal         func_226620
    ctx->pc = 0x25D374u;
    SET_GPR_U32(ctx, 31, 0x25D37Cu);
    ctx->pc = 0x25D378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D374u;
    // 0x25d378: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x25D374u, 0x25D37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D37Cu;
label_25d37c:
    // 0x25d37c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x25d37cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25d380: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25d380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25d384: 0x3e00008  jr          $ra
    ctx->pc = 0x25D384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25D388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D384u;
        // 0x25d388: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D384u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25D38Cu;
    // 0x25d38c: 0x0  nop
    ctx->pc = 0x25d38cu;
    // NOP
    ctx->pc = 0x25d390u;
}
