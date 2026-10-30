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

// Function: sub_0030BBB8
// Address: 0x30bbb8 - 0x30bc60
void sub_0030BBB8_0x30bbb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030BBB8_0x30bbb8");
#endif

    switch (ctx->pc) {
        case 0x30bbf0u: goto label_30bbf0;
        case 0x30bbf8u: goto label_30bbf8;
        case 0x30bc00u: goto label_30bc00;
        case 0x30bc14u: goto label_30bc14;
        default: break;
    }

    ctx->pc = 0x30bbb8u;

    // 0x30bbb8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x30bbb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x30bbbc: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x30bbbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x30bbc0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x30bbc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x30bbc4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x30bbc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bbc8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x30bbc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x30bbcc: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x30bbccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x30bbd0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x30bbd0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bbd4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x30bbd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x30bbd8: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x30bbd8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30bbdc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30bbdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30bbe0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x30bbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30bbe4: 0x24520048  addiu       $s2, $v0, 0x48
    ctx->pc = 0x30bbe4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x30bbe8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30bbe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bbec: 0x0  nop
    ctx->pc = 0x30bbecu;
    // NOP
label_30bbf0:
    // 0x30bbf0: 0xc137826  jal         func_4DE098
    ctx->pc = 0x30BBF0u;
    SET_GPR_U32(ctx, 31, 0x30BBF8u);
    ctx->pc = 0x30BBF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BBF0u;
    // 0x30bbf4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x30BBF0u, 0x30BBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BBF8u;
label_30bbf8:
    // 0x30bbf8: 0xc0e409a  jal         func_390268
    ctx->pc = 0x30BBF8u;
    SET_GPR_U32(ctx, 31, 0x30BC00u);
    ctx->pc = 0x30BBFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BBF8u;
    // 0x30bbfc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x30BBF8u, 0x30BC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BC00u;
label_30bc00:
    // 0x30bc00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30bc00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bc04: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x30BC04u;
    {
        const bool branch_taken_0x30bc04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x30bc04) {
            ctx->pc = 0x30BC08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30BC04u;
            // 0x30bc08: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30BC30u;
            goto label_30bc30;
        }
    }
    ctx->pc = 0x30BC0Cu;
    // 0x30bc0c: 0xc089f98  jal         func_227E60
    ctx->pc = 0x30BC0Cu;
    SET_GPR_U32(ctx, 31, 0x30BC14u);
    ctx->pc = 0x30BC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BC0Cu;
    // 0x30bc10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x30BC0Cu, 0x30BC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BC14u;
label_30bc14:
    // 0x30bc14: 0x10540006  beq         $v0, $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x30BC14u;
    {
        const bool branch_taken_0x30bc14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x30BC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BC14u;
        // 0x30bc18: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bc14) {
            ctx->pc = 0x30BC30u;
            goto label_30bc30;
        }
    }
    ctx->pc = 0x30BC1Cu;
    // 0x30bc1c: 0x8e0200cc  lw          $v0, 0xCC($s0)
    ctx->pc = 0x30bc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
    // 0x30bc20: 0x14530004  bne         $v0, $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x30BC20u;
    {
        const bool branch_taken_0x30bc20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x30BC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BC20u;
        // 0x30bc24: 0x2e220010  sltiu       $v0, $s1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bc20) {
            ctx->pc = 0x30BC34u;
            goto label_30bc34;
        }
    }
    ctx->pc = 0x30BC28u;
    // 0x30bc28: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x30BC28u;
    {
        const bool branch_taken_0x30bc28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BC28u;
        // 0x30bc2c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bc28) {
            ctx->pc = 0x30BC40u;
            goto label_30bc40;
        }
    }
    ctx->pc = 0x30BC30u;
label_30bc30:
    // 0x30bc30: 0x2e220010  sltiu       $v0, $s1, 0x10
    ctx->pc = 0x30bc30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_30bc34:
    // 0x30bc34: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x30BC34u;
    {
        const bool branch_taken_0x30bc34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30BC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BC34u;
        // 0x30bc38: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bc34) {
            ctx->pc = 0x30BBF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30bbf0;
        }
    }
    ctx->pc = 0x30BC3Cu;
    // 0x30bc3c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x30bc3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30bc40:
    // 0x30bc40: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x30bc40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30bc44: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x30bc44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30bc48: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x30bc48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30bc4c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x30bc4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30bc50: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x30bc50u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30bc54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30bc54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30bc58: 0x3e00008  jr          $ra
    ctx->pc = 0x30BC58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30BC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BC58u;
        // 0x30bc5c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30BC58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30BC60u;
}
