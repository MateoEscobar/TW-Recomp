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

// Function: sub_0029ECD8
// Address: 0x29ecd8 - 0x29ed38
void sub_0029ECD8_0x29ecd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029ECD8_0x29ecd8");
#endif

    switch (ctx->pc) {
        case 0x29ed08u: goto label_29ed08;
        case 0x29ed14u: goto label_29ed14;
        default: break;
    }

    ctx->pc = 0x29ecd8u;

    // 0x29ecd8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x29ecd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x29ecdc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x29ecdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x29ece0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x29ece0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x29ece4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x29ece4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x29ece8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x29ece8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x29ecec: 0x14a2000c  bne         $a1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x29ECECu;
    {
        const bool branch_taken_0x29ecec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x29ECF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ECECu;
        // 0x29ecf0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ecec) {
            ctx->pc = 0x29ED20u;
            goto label_29ed20;
        }
    }
    ctx->pc = 0x29ECF4u;
    // 0x29ecf4: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x29ECF4u;
    {
        const bool branch_taken_0x29ecf4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x29ECF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ECF4u;
        // 0x29ecf8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ecf4) {
            ctx->pc = 0x29ED20u;
            goto label_29ed20;
        }
    }
    ctx->pc = 0x29ECFCu;
    // 0x29ecfc: 0x2411003b  addiu       $s1, $zero, 0x3B
    ctx->pc = 0x29ecfcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x29ed00: 0x24508318  addiu       $s0, $v0, -0x7CE8
    ctx->pc = 0x29ed00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935320));
    // 0x29ed04: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x29ed04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_29ed08:
    // 0x29ed08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29ed08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ed0c: 0xc0a7894  jal         func_29E250
    ctx->pc = 0x29ED0Cu;
    SET_GPR_U32(ctx, 31, 0x29ED14u);
    ctx->pc = 0x29ED10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29ED0Cu;
    // 0x29ed10: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E250u, 0x29ED0Cu, 0x29ED14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29ED14u;
label_29ed14:
    // 0x29ed14: 0x0  nop
    ctx->pc = 0x29ed14u;
    // NOP
    // 0x29ed18: 0x1632fffb  bne         $s1, $s2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x29ED18u;
    {
        const bool branch_taken_0x29ed18 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x29ED1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ED18u;
        // 0x29ed1c: 0x26100048  addiu       $s0, $s0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ed18) {
            ctx->pc = 0x29ED08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29ed08;
        }
    }
    ctx->pc = 0x29ED20u;
label_29ed20:
    // 0x29ed20: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x29ed20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29ed24: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x29ed24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29ed28: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x29ed28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29ed2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29ed2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29ed30: 0x3e00008  jr          $ra
    ctx->pc = 0x29ED30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29ED34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ED30u;
        // 0x29ed34: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29ED30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29ED38u;
}
