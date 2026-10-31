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

// Function: sub_0025E250
// Address: 0x25e250 - 0x25e2d8
void sub_0025E250_0x25e250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025E250_0x25e250");
#endif

    switch (ctx->pc) {
        case 0x25e270u: goto label_25e270;
        case 0x25e280u: goto label_25e280;
        case 0x25e290u: goto label_25e290;
        case 0x25e2a0u: goto label_25e2a0;
        case 0x25e2b0u: goto label_25e2b0;
        case 0x25e2c0u: goto label_25e2c0;
        case 0x25e2c8u: goto label_25e2c8;
        default: break;
    }

    ctx->pc = 0x25e250u;

    // 0x25e250: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25e250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25e254: 0x3c050004  lui         $a1, 0x4
    ctx->pc = 0x25e254u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
    // 0x25e258: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x25e258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x25e25c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25e25cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25e260: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25e260u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e264: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x25e264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x25e268: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x25E268u;
    SET_GPR_U32(ctx, 31, 0x25E270u);
    ctx->pc = 0x25E26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E268u;
    // 0x25e26c: 0xa44000be  sh          $zero, 0xBE($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 190), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x25E268u, 0x25E270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E270u;
label_25e270:
    // 0x25e270: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25E270u;
    {
        const bool branch_taken_0x25e270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E270u;
        // 0x25e274: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e270) {
            ctx->pc = 0x25E288u;
            goto label_25e288;
        }
    }
    ctx->pc = 0x25E278u;
    // 0x25e278: 0xc08c166  jal         func_230598
    ctx->pc = 0x25E278u;
    SET_GPR_U32(ctx, 31, 0x25E280u);
    ctx->pc = 0x25E27Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E278u;
    // 0x25e27c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230598u, 0x25E278u, 0x25E280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E280u;
label_25e280:
    // 0x25e280: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x25E280u;
    {
        const bool branch_taken_0x25e280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e280) {
            ctx->pc = 0x25E2C0u;
            goto label_25e2c0;
        }
    }
    ctx->pc = 0x25E288u;
label_25e288:
    // 0x25e288: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x25E288u;
    SET_GPR_U32(ctx, 31, 0x25E290u);
    ctx->pc = 0x25E28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E288u;
    // 0x25e28c: 0x3c050002  lui         $a1, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x25E288u, 0x25E290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E290u;
label_25e290:
    // 0x25e290: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25E290u;
    {
        const bool branch_taken_0x25e290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E290u;
        // 0x25e294: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e290) {
            ctx->pc = 0x25E2A8u;
            goto label_25e2a8;
        }
    }
    ctx->pc = 0x25E298u;
    // 0x25e298: 0xc08bbd6  jal         func_22EF58
    ctx->pc = 0x25E298u;
    SET_GPR_U32(ctx, 31, 0x25E2A0u);
    ctx->pc = 0x25E29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E298u;
    // 0x25e29c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EF58u, 0x25E298u, 0x25E2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E2A0u;
label_25e2a0:
    // 0x25e2a0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x25E2A0u;
    {
        const bool branch_taken_0x25e2a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e2a0) {
            ctx->pc = 0x25E2C0u;
            goto label_25e2c0;
        }
    }
    ctx->pc = 0x25E2A8u;
label_25e2a8:
    // 0x25e2a8: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x25E2A8u;
    SET_GPR_U32(ctx, 31, 0x25E2B0u);
    ctx->pc = 0x25E2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E2A8u;
    // 0x25e2ac: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x25E2A8u, 0x25E2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E2B0u;
label_25e2b0:
    // 0x25e2b0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25E2B0u;
    {
        const bool branch_taken_0x25e2b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e2b0) {
            ctx->pc = 0x25E2C0u;
            goto label_25e2c0;
        }
    }
    ctx->pc = 0x25E2B8u;
    // 0x25e2b8: 0xc08bcf2  jal         func_22F3C8
    ctx->pc = 0x25E2B8u;
    SET_GPR_U32(ctx, 31, 0x25E2C0u);
    ctx->pc = 0x25E2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E2B8u;
    // 0x25e2bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F3C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F3C8u, 0x25E2B8u, 0x25E2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E2C0u;
label_25e2c0:
    // 0x25e2c0: 0xc08bf92  jal         func_22FE48
    ctx->pc = 0x25E2C0u;
    SET_GPR_U32(ctx, 31, 0x25E2C8u);
    ctx->pc = 0x25E2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E2C0u;
    // 0x25e2c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FE48u, 0x25E2C0u, 0x25E2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E2C8u;
label_25e2c8:
    // 0x25e2c8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x25e2c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25e2cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25e2ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25e2d0: 0x3e00008  jr          $ra
    ctx->pc = 0x25E2D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25E2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E2D0u;
        // 0x25e2d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E2D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25E2D8u;
}
