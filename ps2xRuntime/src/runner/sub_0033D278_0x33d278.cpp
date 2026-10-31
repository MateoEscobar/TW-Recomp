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

// Function: sub_0033D278
// Address: 0x33d278 - 0x33d2c8
void sub_0033D278_0x33d278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033D278_0x33d278");
#endif

    switch (ctx->pc) {
        case 0x33d290u: goto label_33d290;
        default: break;
    }

    ctx->pc = 0x33d278u;

    // 0x33d278: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x33d278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x33d27c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x33d27cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x33d280: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x33d280u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33d284: 0x3442db60  ori         $v0, $v0, 0xDB60
    ctx->pc = 0x33d284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)56160);
    // 0x33d288: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33d288u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d28c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x33d28cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_33d290:
    // 0x33d290: 0x94830032  lhu         $v1, 0x32($a0)
    ctx->pc = 0x33d290u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 50)));
    // 0x33d294: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x33d294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x33d298: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x33D298u;
    {
        const bool branch_taken_0x33d298 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33D29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D298u;
        // 0x33d29c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d298) {
            ctx->pc = 0x33D2B4u;
            goto label_33d2b4;
        }
    }
    ctx->pc = 0x33D2A0u;
    // 0x33d2a0: 0x3462000b  ori         $v0, $v1, 0xB
    ctx->pc = 0x33d2a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)11);
    // 0x33d2a4: 0xe4800040  swc1        $f0, 0x40($a0)
    ctx->pc = 0x33d2a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
    // 0x33d2a8: 0xa4820032  sh          $v0, 0x32($a0)
    ctx->pc = 0x33d2a8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 50), (uint16_t)GPR_U32(ctx, 2));
    // 0x33d2ac: 0x3e00008  jr          $ra
    ctx->pc = 0x33D2ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33D2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D2ACu;
        // 0x33d2b0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33D2ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33D2B4u;
label_33d2b4:
    // 0x33d2b4: 0x28a2001e  slti        $v0, $a1, 0x1E
    ctx->pc = 0x33d2b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x33d2b8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x33D2B8u;
    {
        const bool branch_taken_0x33d2b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33D2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D2B8u;
        // 0x33d2bc: 0x24840060  addiu       $a0, $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d2b8) {
            ctx->pc = 0x33D290u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33d290;
        }
    }
    ctx->pc = 0x33D2C0u;
    // 0x33d2c0: 0x3e00008  jr          $ra
    ctx->pc = 0x33D2C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33D2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D2C0u;
        // 0x33d2c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33D2C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33D2C8u;
}
