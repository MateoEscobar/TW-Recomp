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

// Function: sub_0033D718
// Address: 0x33d718 - 0x33d7b8
void sub_0033D718_0x33d718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033D718_0x33d718");
#endif

    switch (ctx->pc) {
        case 0x33d738u: goto label_33d738;
        case 0x33d768u: goto label_33d768;
        default: break;
    }

    ctx->pc = 0x33d718u;

    // 0x33d718: 0xaca90040  sw          $t1, 0x40($a1)
    ctx->pc = 0x33d718u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 9));
    // 0x33d71c: 0xaca80000  sw          $t0, 0x0($a1)
    ctx->pc = 0x33d71cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 8));
    // 0x33d720: 0xacaa0004  sw          $t2, 0x4($a1)
    ctx->pc = 0x33d720u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 10));
    // 0x33d724: 0xacab0044  sw          $t3, 0x44($a1)
    ctx->pc = 0x33d724u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 68), GPR_U32(ctx, 11));
    // 0x33d728: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x33d728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x33d72c: 0x1860001b  blez        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x33D72Cu;
    {
        const bool branch_taken_0x33d72c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x33D730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D72Cu;
        // 0x33d730: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d72c) {
            ctx->pc = 0x33D79Cu;
            goto label_33d79c;
        }
    }
    ctx->pc = 0x33D734u;
    // 0x33d734: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x33d734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_33d738:
    // 0x33d738: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x33d738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33d73c: 0xc4a10080  lwc1        $f1, 0x80($a1)
    ctx->pc = 0x33d73cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33d740: 0xc4400080  lwc1        $f0, 0x80($v0)
    ctx->pc = 0x33d740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33d744: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x33d744u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33d748: 0x0  nop
    ctx->pc = 0x33d748u;
    // NOP
    // 0x33d74c: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x33D74Cu;
    {
        const bool branch_taken_0x33d74c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x33D750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D74Cu;
        // 0x33d750: 0x123102a  slt         $v0, $t1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d74c) {
            ctx->pc = 0x33D788u;
            goto label_33d788;
        }
    }
    ctx->pc = 0x33D754u;
    // 0x33d754: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x33D754u;
    {
        const bool branch_taken_0x33d754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D754u;
        // 0x33d758: 0x60402d  daddu       $t0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d754) {
            ctx->pc = 0x33D79Cu;
            goto label_33d79c;
        }
    }
    ctx->pc = 0x33D75Cu;
    // 0x33d75c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x33d75cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33d760: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x33d760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x33d764: 0x0  nop
    ctx->pc = 0x33d764u;
    // NOP
label_33d768:
    // 0x33d768: 0x8c82fffc  lw          $v0, -0x4($a0)
    ctx->pc = 0x33d768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967292)));
    // 0x33d76c: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x33d76cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x33d770: 0x128182a  slt         $v1, $t1, $t0
    ctx->pc = 0x33d770u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x33d774: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x33d774u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x33d778: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x33D778u;
    {
        const bool branch_taken_0x33d778 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x33D77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D778u;
        // 0x33d77c: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d778) {
            ctx->pc = 0x33D768u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33d768;
        }
    }
    ctx->pc = 0x33D780u;
    // 0x33d780: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x33D780u;
    {
        const bool branch_taken_0x33d780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D780u;
        // 0x33d784: 0x91080  sll         $v0, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d780) {
            ctx->pc = 0x33D7A0u;
            goto label_33d7a0;
        }
    }
    ctx->pc = 0x33D788u;
label_33d788:
    // 0x33d788: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x33d788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x33d78c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x33d78cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x33d790: 0x123102a  slt         $v0, $t1, $v1
    ctx->pc = 0x33d790u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x33d794: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x33D794u;
    {
        const bool branch_taken_0x33d794 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33D798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D794u;
        // 0x33d798: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d794) {
            ctx->pc = 0x33D738u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33d738;
        }
    }
    ctx->pc = 0x33D79Cu;
label_33d79c:
    // 0x33d79c: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x33d79cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_33d7a0:
    // 0x33d7a0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x33d7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x33d7a4: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x33d7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x33d7a8: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x33d7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x33d7ac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x33d7acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x33d7b0: 0x3e00008  jr          $ra
    ctx->pc = 0x33D7B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33D7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D7B0u;
        // 0x33d7b4: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33D7B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33D7B8u;
}
