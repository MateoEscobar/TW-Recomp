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

// Function: sub_004300F8
// Address: 0x4300f8 - 0x430148
void sub_004300F8_0x4300f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004300F8_0x4300f8");
#endif

    switch (ctx->pc) {
        case 0x43011cu: goto label_43011c;
        case 0x430134u: goto label_430134;
        default: break;
    }

    ctx->pc = 0x4300f8u;

    // 0x4300f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4300f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4300fc: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x4300fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x430100: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x430100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x430104: 0x8c625a40  lw          $v0, 0x5A40($v1)
    ctx->pc = 0x430104u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x715A40u));
    // 0x430108: 0x24705a40  addiu       $s0, $v1, 0x5A40
    ctx->pc = 0x430108u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 23104));
    // 0x43010c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x43010Cu;
    {
        const bool branch_taken_0x43010c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x430110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43010Cu;
        // 0x430110: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43010c) {
            ctx->pc = 0x430134u;
            goto label_430134;
        }
    }
    ctx->pc = 0x430114u;
    // 0x430114: 0xc10bd76  jal         func_42F5D8
    ctx->pc = 0x430114u;
    SET_GPR_U32(ctx, 31, 0x43011Cu);
    ctx->pc = 0x42F5D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42F5D8u, 0x430114u, 0x43011Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43011Cu;
label_43011c:
    // 0x43011c: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x43011cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x430120: 0x3c060059  lui         $a2, 0x59
    ctx->pc = 0x430120u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
    // 0x430124: 0x24a5c4a0  addiu       $a1, $a1, -0x3B60
    ctx->pc = 0x430124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952096));
    // 0x430128: 0x24c671d0  addiu       $a2, $a2, 0x71D0
    ctx->pc = 0x430128u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29136));
    // 0x43012c: 0xc10bbf8  jal         func_42EFE0
    ctx->pc = 0x43012Cu;
    SET_GPR_U32(ctx, 31, 0x430134u);
    ctx->pc = 0x430130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43012Cu;
    // 0x430130: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42EFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42EFE0u, 0x43012Cu, 0x430134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x430134u;
label_430134:
    // 0x430134: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x430134u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x430138: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x430138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x43013c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x43013cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x430140: 0x3e00008  jr          $ra
    ctx->pc = 0x430140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x430144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430140u;
        // 0x430144: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x430140u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x430148u;
}
