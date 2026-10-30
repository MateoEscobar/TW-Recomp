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

// Function: sub_0036E228
// Address: 0x36e228 - 0x36e2d8
void sub_0036E228_0x36e228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036E228_0x36e228");
#endif

    switch (ctx->pc) {
        case 0x36e248u: goto label_36e248;
        case 0x36e260u: goto label_36e260;
        case 0x36e268u: goto label_36e268;
        case 0x36e280u: goto label_36e280;
        case 0x36e288u: goto label_36e288;
        case 0x36e298u: goto label_36e298;
        case 0x36e2acu: goto label_36e2ac;
        default: break;
    }

    ctx->pc = 0x36e228u;

    // 0x36e228: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x36e228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x36e22c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x36e22cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x36e230: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x36e230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x36e234: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x36e234u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e238: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x36e238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x36e23c: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x36e23cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e240: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x36e240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x36e244: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x36e244u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_36e248:
    // 0x36e248: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36e248u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36e24c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36e24cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e250: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36e250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36e254: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36e254u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e258: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x36E258u;
    SET_GPR_U32(ctx, 31, 0x36E260u);
    ctx->pc = 0x36E25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E258u;
    // 0x36e25c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x36E258u, 0x36E260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E260u;
label_36e260:
    // 0x36e260: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x36E260u;
    SET_GPR_U32(ctx, 31, 0x36E268u);
    ctx->pc = 0x36E264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E260u;
    // 0x36e264: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x36E260u, 0x36E268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E268u;
label_36e268:
    // 0x36e268: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x36e268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x36e26c: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x36e26cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x36e270: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x36E270u;
    {
        const bool branch_taken_0x36e270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36E274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E270u;
        // 0x36e274: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e270) {
            ctx->pc = 0x36E248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36e248;
        }
    }
    ctx->pc = 0x36E278u;
    // 0x36e278: 0xc09436c  jal         func_250DB0
    ctx->pc = 0x36E278u;
    SET_GPR_U32(ctx, 31, 0x36E280u);
    ctx->pc = 0x36E27Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E278u;
    // 0x36e27c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250DB0u, 0x36E278u, 0x36E280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E280u;
label_36e280:
    // 0x36e280: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x36e280u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e284: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x36e284u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_36e288:
    // 0x36e288: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x36e288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x36e28c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36e28cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36e290: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x36E290u;
    SET_GPR_U32(ctx, 31, 0x36E298u);
    ctx->pc = 0x36E294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E290u;
    // 0x36e294: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x36E290u, 0x36E298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E298u;
label_36e298:
    // 0x36e298: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x36e298u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e29c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36e29cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e2a0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36e2a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36e2a4: 0xc102576  jal         func_4095D8
    ctx->pc = 0x36E2A4u;
    SET_GPR_U32(ctx, 31, 0x36E2ACu);
    ctx->pc = 0x36E2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E2A4u;
    // 0x36e2a8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x36E2A4u, 0x36E2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E2ACu;
label_36e2ac:
    // 0x36e2ac: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x36e2acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x36e2b0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x36E2B0u;
    {
        const bool branch_taken_0x36e2b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36E2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E2B0u;
        // 0x36e2b4: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e2b0) {
            ctx->pc = 0x36E288u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36e288;
        }
    }
    ctx->pc = 0x36E2B8u;
    // 0x36e2b8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x36e2b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x36e2bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36e2bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e2c0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x36e2c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36e2c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x36e2c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36e2c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36e2c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36e2cc: 0x3e00008  jr          $ra
    ctx->pc = 0x36E2CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36E2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E2CCu;
        // 0x36e2d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E2CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36E2D4u;
    // 0x36e2d4: 0x0  nop
    ctx->pc = 0x36e2d4u;
    // NOP
    ctx->pc = 0x36e2d8u;
}
