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

// Function: sub_00178BC8
// Address: 0x178bc8 - 0x178c48
void sub_00178BC8_0x178bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178BC8_0x178bc8");
#endif

    switch (ctx->pc) {
        case 0x178be0u: goto label_178be0;
        default: break;
    }

    ctx->pc = 0x178bc8u;

    // 0x178bc8: 0x8c8200a8  lw          $v0, 0xA8($a0)
    ctx->pc = 0x178bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 168)));
    // 0x178bcc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x178bccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178bd0: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x178BD0u;
    {
        const bool branch_taken_0x178bd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x178BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178BD0u;
        // 0x178bd4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178bd0) {
            ctx->pc = 0x178C38u;
            goto label_178c38;
        }
    }
    ctx->pc = 0x178BD8u;
    // 0x178bd8: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x178bd8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x178bdc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x178bdcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_178be0:
    // 0x178be0: 0x8c8200ac  lw          $v0, 0xAC($a0)
    ctx->pc = 0x178be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 172)));
    // 0x178be4: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x178be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x178be8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x178be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x178bec: 0x54650005  bnel        $v1, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x178BECu;
    {
        const bool branch_taken_0x178bec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x178bec) {
            ctx->pc = 0x178BF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x178BECu;
            // 0x178bf0: 0x8c8200ac  lw          $v0, 0xAC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 172)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x178C04u;
            goto label_178c04;
        }
    }
    ctx->pc = 0x178BF4u;
    // 0x178bf4: 0x34e70001  ori         $a3, $a3, 0x1
    ctx->pc = 0x178bf4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)1);
    // 0x178bf8: 0xa4460008  sh          $a2, 0x8($v0)
    ctx->pc = 0x178bf8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 6));
    // 0x178bfc: 0x7382b  sltu        $a3, $zero, $a3
    ctx->pc = 0x178bfcu;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x178c00: 0x8c8200ac  lw          $v0, 0xAC($a0)
    ctx->pc = 0x178c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 172)));
label_178c04:
    // 0x178c04: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x178c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x178c08: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x178c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x178c0c: 0x54650006  bnel        $v1, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x178C0Cu;
    {
        const bool branch_taken_0x178c0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x178c0c) {
            ctx->pc = 0x178C10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x178C0Cu;
            // 0x178c10: 0x8c8200a8  lw          $v0, 0xA8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x178C28u;
            goto label_178c28;
        }
    }
    ctx->pc = 0x178C14u;
    // 0x178c14: 0xa446000a  sh          $a2, 0xA($v0)
    ctx->pc = 0x178c14u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 6));
    // 0x178c18: 0x34e70001  ori         $a3, $a3, 0x1
    ctx->pc = 0x178c18u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)1);
    // 0x178c1c: 0xac8a00b0  sw          $t2, 0xB0($a0)
    ctx->pc = 0x178c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 10));
    // 0x178c20: 0x7382b  sltu        $a3, $zero, $a3
    ctx->pc = 0x178c20u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x178c24: 0x8c8200a8  lw          $v0, 0xA8($a0)
    ctx->pc = 0x178c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 168)));
label_178c28:
    // 0x178c28: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x178c28u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x178c2c: 0x122102b  sltu        $v0, $t1, $v0
    ctx->pc = 0x178c2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x178c30: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x178C30u;
    {
        const bool branch_taken_0x178c30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x178C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178C30u;
        // 0x178c34: 0x2508000c  addiu       $t0, $t0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178c30) {
            ctx->pc = 0x178BE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_178be0;
        }
    }
    ctx->pc = 0x178C38u;
label_178c38:
    // 0x178c38: 0x3e00008  jr          $ra
    ctx->pc = 0x178C38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178C38u;
        // 0x178c3c: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178C38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178C40u;
    // 0x178c40: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x178c40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178c44: 0x0  nop
    ctx->pc = 0x178c44u;
    // NOP
    ctx->pc = 0x178c48u;
}
