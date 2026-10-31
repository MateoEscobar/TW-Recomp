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

// Function: sub_0029E2E8
// Address: 0x29e2e8 - 0x29e350
void sub_0029E2E8_0x29e2e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029E2E8_0x29e2e8");
#endif

    switch (ctx->pc) {
        case 0x29e2fcu: goto label_29e2fc;
        case 0x29e318u: goto label_29e318;
        case 0x29e328u: goto label_29e328;
        default: break;
    }

    ctx->pc = 0x29e2e8u;

    // 0x29e2e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29e2e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29e2ec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x29e2ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x29e2f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29e2f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29e2f4: 0xc0a791c  jal         func_29E470
    ctx->pc = 0x29E2F4u;
    SET_GPR_U32(ctx, 31, 0x29E2FCu);
    ctx->pc = 0x29E2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E2F4u;
    // 0x29e2f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E470u, 0x29E2F4u, 0x29E2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E2FCu;
label_29e2fc:
    // 0x29e2fc: 0x84440092  lh          $a0, 0x92($v0)
    ctx->pc = 0x29e2fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 146)));
    // 0x29e300: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x29e300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x29e304: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x29e304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x29e308: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x29e308u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x29e30c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x29e30cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x29e310: 0xc0cd7d2  jal         func_335F48
    ctx->pc = 0x29E310u;
    SET_GPR_U32(ctx, 31, 0x29E318u);
    ctx->pc = 0x29E314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E310u;
    // 0x29e314: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335F48u, 0x29E310u, 0x29E318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E318u;
label_29e318:
    // 0x29e318: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x29e318u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x29e31c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29e31cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29e320: 0x2610003e  addiu       $s0, $s0, 0x3E
    ctx->pc = 0x29e320u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 62));
    // 0x29e324: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x29e324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_29e328:
    // 0x29e328: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x29e328u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x29e32c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x29e32cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x29e330: 0x0  nop
    ctx->pc = 0x29e330u;
    // NOP
    // 0x29e334: 0x0  nop
    ctx->pc = 0x29e334u;
    // NOP
    // 0x29e338: 0x441fffb  bgez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x29E338u;
    {
        const bool branch_taken_0x29e338 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x29E33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E338u;
        // 0x29e33c: 0x2610fff8  addiu       $s0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e338) {
            ctx->pc = 0x29E328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29e328;
        }
    }
    ctx->pc = 0x29E340u;
    // 0x29e340: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x29e340u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29e344: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29e344u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29e348: 0x3e00008  jr          $ra
    ctx->pc = 0x29E348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29E34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E348u;
        // 0x29e34c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E348u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29E350u;
}
