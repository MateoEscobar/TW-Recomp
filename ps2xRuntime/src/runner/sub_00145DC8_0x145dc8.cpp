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

// Function: sub_00145DC8
// Address: 0x145dc8 - 0x145ea8
void sub_00145DC8_0x145dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00145DC8_0x145dc8");
#endif

    switch (ctx->pc) {
        case 0x145e00u: goto label_145e00;
        case 0x145e0cu: goto label_145e0c;
        case 0x145e40u: goto label_145e40;
        case 0x145e4cu: goto label_145e4c;
        case 0x145e54u: goto label_145e54;
        case 0x145e78u: goto label_145e78;
        default: break;
    }

    ctx->pc = 0x145dc8u;

    // 0x145dc8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x145dc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x145dcc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x145dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x145dd0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x145dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x145dd4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x145dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x145dd8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x145dd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145ddc: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x145ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x145de0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x145de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x145de4: 0x8e22005c  lw          $v0, 0x5C($s1)
    ctx->pc = 0x145de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x145de8: 0x1443000c  bne         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x145DE8u;
    {
        const bool branch_taken_0x145de8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x145DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145DE8u;
        // 0x145dec: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145de8) {
            ctx->pc = 0x145E1Cu;
            goto label_145e1c;
        }
    }
    ctx->pc = 0x145DF0u;
    // 0x145df0: 0x26300008  addiu       $s0, $s1, 0x8
    ctx->pc = 0x145df0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x145df4: 0xae20005c  sw          $zero, 0x5C($s1)
    ctx->pc = 0x145df4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 0));
    // 0x145df8: 0xc0523f6  jal         func_148FD8
    ctx->pc = 0x145DF8u;
    SET_GPR_U32(ctx, 31, 0x145E00u);
    ctx->pc = 0x145DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145DF8u;
    // 0x145dfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148FD8u, 0x145DF8u, 0x145E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145E00u;
label_145e00:
    // 0x145e00: 0xfe220020  sd          $v0, 0x20($s1)
    ctx->pc = 0x145e00u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 2));
    // 0x145e04: 0xc0523f6  jal         func_148FD8
    ctx->pc = 0x145E04u;
    SET_GPR_U32(ctx, 31, 0x145E0Cu);
    ctx->pc = 0x145E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145E04u;
    // 0x145e08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148FD8u, 0x145E04u, 0x145E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145E0Cu;
label_145e0c:
    // 0x145e0c: 0xfe220028  sd          $v0, 0x28($s1)
    ctx->pc = 0x145e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 40), GPR_U64(ctx, 2));
    // 0x145e10: 0xae200064  sw          $zero, 0x64($s1)
    ctx->pc = 0x145e10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 0));
    // 0x145e14: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x145E14u;
    {
        const bool branch_taken_0x145e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145E14u;
        // 0x145e18: 0xae200060  sw          $zero, 0x60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145e14) {
            ctx->pc = 0x145E90u;
            goto label_145e90;
        }
    }
    ctx->pc = 0x145E1Cu;
label_145e1c:
    // 0x145e1c: 0xae23005c  sw          $v1, 0x5C($s1)
    ctx->pc = 0x145e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 3));
    // 0x145e20: 0xae200064  sw          $zero, 0x64($s1)
    ctx->pc = 0x145e20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 0));
    // 0x145e24: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x145e24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145e28: 0xae200060  sw          $zero, 0x60($s1)
    ctx->pc = 0x145e28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 0));
    // 0x145e2c: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x145e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    // 0x145e30: 0x84640224  lh          $a0, 0x224($v1)
    ctx->pc = 0x145e30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x145e34: 0x18800016  blez        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x145E34u;
    {
        const bool branch_taken_0x145e34 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x145E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145E34u;
        // 0x145e38: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145e34) {
            ctx->pc = 0x145E90u;
            goto label_145e90;
        }
    }
    ctx->pc = 0x145E3Cu;
    // 0x145e3c: 0x24110228  addiu       $s1, $zero, 0x228
    ctx->pc = 0x145e3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 552));
label_145e40:
    // 0x145e40: 0x8e44489c  lw          $a0, 0x489C($s2)
    ctx->pc = 0x145e40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18588)));
    // 0x145e44: 0xc0e409a  jal         func_390268
    ctx->pc = 0x145E44u;
    SET_GPR_U32(ctx, 31, 0x145E4Cu);
    ctx->pc = 0x145E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145E44u;
    // 0x145e48: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x145E44u, 0x145E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145E4Cu;
label_145e4c:
    // 0x145e4c: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x145E4Cu;
    SET_GPR_U32(ctx, 31, 0x145E54u);
    ctx->pc = 0x145E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145E4Cu;
    // 0x145e50: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x145E4Cu, 0x145E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145E54u;
label_145e54:
    // 0x145e54: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x145e54u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145e58: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x145E58u;
    {
        const bool branch_taken_0x145e58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x145e58) {
            ctx->pc = 0x145E5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x145E58u;
            // 0x145e5c: 0x8e43489c  lw          $v1, 0x489C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18588)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x145E7Cu;
            goto label_145e7c;
        }
    }
    ctx->pc = 0x145E60u;
    // 0x145e60: 0x9062001b  lbu         $v0, 0x1B($v1)
    ctx->pc = 0x145e60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 27)));
    // 0x145e64: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x145E64u;
    {
        const bool branch_taken_0x145e64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x145E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145E64u;
        // 0x145e68: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145e64) {
            ctx->pc = 0x145E78u;
            goto label_145e78;
        }
    }
    ctx->pc = 0x145E6Cu;
    // 0x145e6c: 0xa060001c  sb          $zero, 0x1C($v1)
    ctx->pc = 0x145e6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x145e70: 0xc05181e  jal         func_146078
    ctx->pc = 0x145E70u;
    SET_GPR_U32(ctx, 31, 0x145E78u);
    ctx->pc = 0x145E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145E70u;
    // 0x145e74: 0xa060001d  sb          $zero, 0x1D($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 29), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146078u, 0x145E70u, 0x145E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145E78u;
label_145e78:
    // 0x145e78: 0x8e43489c  lw          $v1, 0x489C($s2)
    ctx->pc = 0x145e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18588)));
label_145e7c:
    // 0x145e7c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x145e7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x145e80: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x145e80u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x145e84: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x145e84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x145e88: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x145E88u;
    {
        const bool branch_taken_0x145e88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x145E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145E88u;
        // 0x145e8c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145e88) {
            ctx->pc = 0x145E40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_145e40;
        }
    }
    ctx->pc = 0x145E90u;
label_145e90:
    // 0x145e90: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x145e90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x145e94: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x145e94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x145e98: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x145e98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x145e9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x145e9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x145ea0: 0x3e00008  jr          $ra
    ctx->pc = 0x145EA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x145EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145EA0u;
        // 0x145ea4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145EA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x145EA8u;
}
