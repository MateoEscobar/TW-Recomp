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

// Function: sub_00444108
// Address: 0x444108 - 0x444160
void sub_00444108_0x444108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00444108_0x444108");
#endif

    switch (ctx->pc) {
        case 0x444120u: goto label_444120;
        case 0x444128u: goto label_444128;
        case 0x444138u: goto label_444138;
        default: break;
    }

    ctx->pc = 0x444108u;

    // 0x444108: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x444108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x44410c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x44410cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x444110: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x444110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x444114: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x444114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x444118: 0xc110cb0  jal         func_4432C0
    ctx->pc = 0x444118u;
    SET_GPR_U32(ctx, 31, 0x444120u);
    ctx->pc = 0x4432C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4432C0u, 0x444118u, 0x444120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x444120u;
label_444120:
    // 0x444120: 0xc111026  jal         func_444098
    ctx->pc = 0x444120u;
    SET_GPR_U32(ctx, 31, 0x444128u);
    ctx->pc = 0x444124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x444120u;
    // 0x444124: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x444098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x444098u, 0x444120u, 0x444128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x444128u;
label_444128:
    // 0x444128: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x444128u;
    {
        const bool branch_taken_0x444128 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x44412Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444128u;
        // 0x44412c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x444128) {
            ctx->pc = 0x444138u;
            goto label_444138;
        }
    }
    ctx->pc = 0x444130u;
    // 0x444130: 0xc110cc4  jal         func_443310
    ctx->pc = 0x444130u;
    SET_GPR_U32(ctx, 31, 0x444138u);
    ctx->pc = 0x443310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443310u, 0x444130u, 0x444138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x444138u;
label_444138:
    // 0x444138: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x444138u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44413c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x44413cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x444140: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x444140u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x444144: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x444144u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x444148: 0x3e00008  jr          $ra
    ctx->pc = 0x444148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44414Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444148u;
        // 0x44414c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x444148u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x444150u;
    // 0x444150: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x444150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x444154: 0x0  nop
    ctx->pc = 0x444154u;
    // NOP
    // 0x444158: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x444158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x44415c: 0x0  nop
    ctx->pc = 0x44415cu;
    // NOP
    ctx->pc = 0x444160u;
}
