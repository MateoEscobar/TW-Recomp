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

// Function: sub_0016A260
// Address: 0x16a260 - 0x16a2a8
void sub_0016A260_0x16a260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016A260_0x16a260");
#endif

    switch (ctx->pc) {
        case 0x16a288u: goto label_16a288;
        case 0x16a294u: goto label_16a294;
        default: break;
    }

    ctx->pc = 0x16a260u;

    // 0x16a260: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16a260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16a264: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x16a264u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x16a268: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16a268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x16a26c: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x16a26cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x16a270: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16a270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16a274: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16a274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16a278: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16A278u;
    {
        const bool branch_taken_0x16a278 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x16A27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A278u;
        // 0x16a27c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a278) {
            ctx->pc = 0x16A294u;
            goto label_16a294;
        }
    }
    ctx->pc = 0x16A280u;
    // 0x16a280: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x16A280u;
    SET_GPR_U32(ctx, 31, 0x16A288u);
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x16A280u, 0x16A288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A288u;
label_16a288:
    // 0x16a288: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16a288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a28c: 0xc05a800  jal         func_16A000
    ctx->pc = 0x16A28Cu;
    SET_GPR_U32(ctx, 31, 0x16A294u);
    ctx->pc = 0x16A290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A28Cu;
    // 0x16a290: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A000u, 0x16A28Cu, 0x16A294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A294u;
label_16a294:
    // 0x16a294: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16a294u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16a298: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16a298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a29c: 0x3e00008  jr          $ra
    ctx->pc = 0x16A29Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A29Cu;
        // 0x16a2a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A29Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16A2A4u;
    // 0x16a2a4: 0x0  nop
    ctx->pc = 0x16a2a4u;
    // NOP
    ctx->pc = 0x16a2a8u;
}
