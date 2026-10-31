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

// Function: sub_0029E250
// Address: 0x29e250 - 0x29e2b0
void sub_0029E250_0x29e250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029E250_0x29e250");
#endif

    switch (ctx->pc) {
        case 0x29e278u: goto label_29e278;
        case 0x29e298u: goto label_29e298;
        default: break;
    }

    ctx->pc = 0x29e250u;

    // 0x29e250: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29e250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29e254: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x29e254u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x29e258: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x29e258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x29e25c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x29e25cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x29e260: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29e260u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e264: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29e264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29e268: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x29e268u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e26c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x29e26cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x29e270: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x29e270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29e274: 0x0  nop
    ctx->pc = 0x29e274u;
    // NOP
label_29e278:
    // 0x29e278: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x29e278u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x29e27c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x29e27cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x29e280: 0x0  nop
    ctx->pc = 0x29e280u;
    // NOP
    // 0x29e284: 0x0  nop
    ctx->pc = 0x29e284u;
    // NOP
    // 0x29e288: 0x1485fffb  bne         $a0, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x29E288u;
    {
        const bool branch_taken_0x29e288 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x29E28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E288u;
        // 0x29e28c: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e288) {
            ctx->pc = 0x29E278u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29e278;
        }
    }
    ctx->pc = 0x29E290u;
    // 0x29e290: 0xc0a78ac  jal         func_29E2B0
    ctx->pc = 0x29E290u;
    SET_GPR_U32(ctx, 31, 0x29E298u);
    ctx->pc = 0x29E294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E290u;
    // 0x29e294: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E2B0u, 0x29E290u, 0x29E298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E298u;
label_29e298:
    // 0x29e298: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x29e298u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e29c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29e29cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29e2a0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x29e2a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29e2a4: 0x3e00008  jr          $ra
    ctx->pc = 0x29E2A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29E2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E2A4u;
        // 0x29e2a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E2A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29E2ACu;
    // 0x29e2ac: 0x0  nop
    ctx->pc = 0x29e2acu;
    // NOP
    ctx->pc = 0x29e2b0u;
}
