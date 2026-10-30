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

// Function: sub_004F4FC0
// Address: 0x4f4fc0 - 0x4f5040
void sub_004F4FC0_0x4f4fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F4FC0_0x4f4fc0");
#endif

    switch (ctx->pc) {
        case 0x4f4fd8u: goto label_4f4fd8;
        default: break;
    }

    ctx->pc = 0x4f4fc0u;

    // 0x4f4fc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4f4fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4f4fc4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4f4fc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f4fc8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4f4fc8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f4fcc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4F4FCCu;
    {
        const bool branch_taken_0x4f4fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F4FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4FCCu;
        // 0x4f4fd0: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f4fcc) {
            ctx->pc = 0x4F4FDCu;
            goto label_4f4fdc;
        }
    }
    ctx->pc = 0x4F4FD4u;
    // 0x4f4fd4: 0x0  nop
    ctx->pc = 0x4f4fd4u;
    // NOP
label_4f4fd8:
    // 0x4f4fd8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x4f4fd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_4f4fdc:
    // 0x4f4fdc: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x4f4fdcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4f4fe0: 0x2462ffbf  addiu       $v0, $v1, -0x41
    ctx->pc = 0x4f4fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967231));
    // 0x4f4fe4: 0x2c42001a  sltiu       $v0, $v0, 0x1A
    ctx->pc = 0x4f4fe4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x4f4fe8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4F4FE8u;
    {
        const bool branch_taken_0x4f4fe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F4FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4FE8u;
        // 0x4f4fec: 0xa3a80000  sb          $t0, 0x0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f4fe8) {
            ctx->pc = 0x4F4FFCu;
            goto label_4f4ffc;
        }
    }
    ctx->pc = 0x4F4FF0u;
    // 0x4f4ff0: 0x24620020  addiu       $v0, $v1, 0x20
    ctx->pc = 0x4f4ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x4f4ff4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4F4FF4u;
    {
        const bool branch_taken_0x4f4ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F4FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4FF4u;
        // 0x4f4ff8: 0x21600  sll         $v0, $v0, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f4ff4) {
            ctx->pc = 0x4F5000u;
            goto label_4f5000;
        }
    }
    ctx->pc = 0x4F4FFCu;
label_4f4ffc:
    // 0x4f4ffc: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x4f4ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_4f5000:
    // 0x4f5000: 0x22e03  sra         $a1, $v0, 24
    ctx->pc = 0x4f5000u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 24));
    // 0x4f5004: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x4f5004u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4f5008: 0x2462ffbf  addiu       $v0, $v1, -0x41
    ctx->pc = 0x4f5008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967231));
    // 0x4f500c: 0x2c42001a  sltiu       $v0, $v0, 0x1A
    ctx->pc = 0x4f500cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x4f5010: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4F5010u;
    {
        const bool branch_taken_0x4f5010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F5014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5010u;
        // 0x4f5014: 0x24620020  addiu       $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f5010) {
            ctx->pc = 0x4F5020u;
            goto label_4f5020;
        }
    }
    ctx->pc = 0x4F5018u;
    // 0x4f5018: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4F5018u;
    {
        const bool branch_taken_0x4f5018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F501Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5018u;
        // 0x4f501c: 0x21600  sll         $v0, $v0, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f5018) {
            ctx->pc = 0x4F5024u;
            goto label_4f5024;
        }
    }
    ctx->pc = 0x4F5020u;
label_4f5020:
    // 0x4f5020: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x4f5020u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_4f5024:
    // 0x4f5024: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x4f5024u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x4f5028: 0x54a2ffeb  bnel        $a1, $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x4F5028u;
    {
        const bool branch_taken_0x4f5028 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x4f5028) {
            ctx->pc = 0x4F502Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F5028u;
            // 0x4f502c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F4FD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4f4fd8;
        }
    }
    ctx->pc = 0x4F5030u;
    // 0x4f5030: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x4f5030u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f5034: 0x3e00008  jr          $ra
    ctx->pc = 0x4F5034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F5038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5034u;
        // 0x4f5038: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F5034u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F503Cu;
    // 0x4f503c: 0x0  nop
    ctx->pc = 0x4f503cu;
    // NOP
    ctx->pc = 0x4f5040u;
}
