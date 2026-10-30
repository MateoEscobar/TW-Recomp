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

// Function: sub_00444210
// Address: 0x444210 - 0x444290
void sub_00444210_0x444210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00444210_0x444210");
#endif

    switch (ctx->pc) {
        case 0x444228u: goto label_444228;
        case 0x444234u: goto label_444234;
        case 0x444244u: goto label_444244;
        default: break;
    }

    ctx->pc = 0x444210u;

    // 0x444210: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x444210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x444214: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x444214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x444218: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x444218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x44421c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x44421cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x444220: 0xc110cb0  jal         func_4432C0
    ctx->pc = 0x444220u;
    SET_GPR_U32(ctx, 31, 0x444228u);
    ctx->pc = 0x444224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x444220u;
    // 0x444224: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4432C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4432C0u, 0x444220u, 0x444228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x444228u;
label_444228:
    // 0x444228: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x444228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44422c: 0xc111058  jal         func_444160
    ctx->pc = 0x44422Cu;
    SET_GPR_U32(ctx, 31, 0x444234u);
    ctx->pc = 0x444230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44422Cu;
    // 0x444230: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x444160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x444160u, 0x44422Cu, 0x444234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x444234u;
label_444234:
    // 0x444234: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x444234u;
    {
        const bool branch_taken_0x444234 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x444238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444234u;
        // 0x444238: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x444234) {
            ctx->pc = 0x444244u;
            goto label_444244;
        }
    }
    ctx->pc = 0x44423Cu;
    // 0x44423c: 0xc110cc4  jal         func_443310
    ctx->pc = 0x44423Cu;
    SET_GPR_U32(ctx, 31, 0x444244u);
    ctx->pc = 0x443310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443310u, 0x44423Cu, 0x444244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x444244u;
label_444244:
    // 0x444244: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x444244u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x444248: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x444248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x44424c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x44424cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x444250: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x444250u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x444254: 0x3e00008  jr          $ra
    ctx->pc = 0x444254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x444258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444254u;
        // 0x444258: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x444254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44425Cu;
    // 0x44425c: 0x0  nop
    ctx->pc = 0x44425cu;
    // NOP
    // 0x444260: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x444260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x444264: 0x0  nop
    ctx->pc = 0x444264u;
    // NOP
    // 0x444268: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x444268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x44426c: 0x0  nop
    ctx->pc = 0x44426cu;
    // NOP
    // 0x444270: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x444270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x444274: 0x0  nop
    ctx->pc = 0x444274u;
    // NOP
    // 0x444278: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x444278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x44427c: 0x0  nop
    ctx->pc = 0x44427cu;
    // NOP
    // 0x444280: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x444280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x444284: 0x0  nop
    ctx->pc = 0x444284u;
    // NOP
    // 0x444288: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x444288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x44428c: 0x0  nop
    ctx->pc = 0x44428cu;
    // NOP
    ctx->pc = 0x444290u;
}
