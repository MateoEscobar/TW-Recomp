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

// Function: sub_00248110
// Address: 0x248110 - 0x248170
void sub_00248110_0x248110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00248110_0x248110");
#endif

    switch (ctx->pc) {
        case 0x248110u: goto label_248110;
        case 0x248114u: goto label_248114;
        case 0x248118u: goto label_248118;
        case 0x24811cu: goto label_24811c;
        case 0x248120u: goto label_248120;
        case 0x248124u: goto label_248124;
        case 0x248128u: goto label_248128;
        case 0x24812cu: goto label_24812c;
        case 0x248130u: goto label_248130;
        case 0x248134u: goto label_248134;
        case 0x248138u: goto label_248138;
        case 0x24813cu: goto label_24813c;
        case 0x248140u: goto label_248140;
        case 0x248144u: goto label_248144;
        case 0x248148u: goto label_248148;
        case 0x24814cu: goto label_24814c;
        case 0x248150u: goto label_248150;
        case 0x248154u: goto label_248154;
        case 0x248158u: goto label_248158;
        case 0x24815cu: goto label_24815c;
        case 0x248160u: goto label_248160;
        case 0x248164u: goto label_248164;
        case 0x248168u: goto label_248168;
        case 0x24816cu: goto label_24816c;
        default: break;
    }

    ctx->pc = 0x248110u;

label_248110:
    // 0x248110: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x248110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_248114:
    // 0x248114: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x248114u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_248118:
    // 0x248118: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x248118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_24811c:
    // 0x24811c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24811cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_248120:
    // 0x248120: 0xc08700c  jal         func_21C030
label_248124:
    if (ctx->pc == 0x248124u) {
        ctx->pc = 0x248124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248120u;
        // 0x248124: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248128u;
        goto label_248128;
    }
    ctx->pc = 0x248120u;
    SET_GPR_U32(ctx, 31, 0x248128u);
    ctx->pc = 0x248124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248120u;
    // 0x248124: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C030u, 0x248120u, 0x248128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248128u;
label_248128:
    // 0x248128: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x248128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_24812c:
    // 0x24812c: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x24812cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_248130:
    // 0x248130: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x248130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_248134:
    // 0x248134: 0x40f809  jalr        $v0
label_248138:
    if (ctx->pc == 0x248138u) {
        ctx->pc = 0x248138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248134u;
        // 0x248138: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24813Cu;
        goto label_24813c;
    }
    ctx->pc = 0x248134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24813Cu);
        ctx->pc = 0x248138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248134u;
        // 0x248138: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248134u, 0x24813Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24813Cu;
label_24813c:
    // 0x24813c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_248140:
    if (ctx->pc == 0x248140u) {
        ctx->pc = 0x248140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24813Cu;
        // 0x248140: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248144u;
        goto label_248144;
    }
    ctx->pc = 0x24813Cu;
    {
        const bool branch_taken_0x24813c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24813c) {
            ctx->pc = 0x248140u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24813Cu;
            // 0x248140: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x248164u;
            goto label_248164;
        }
    }
    ctx->pc = 0x248144u;
label_248144:
    // 0x248144: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x248144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_248148:
    // 0x248148: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x248148u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_24814c:
    // 0x24814c: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x24814cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_248150:
    // 0x248150: 0x40f809  jalr        $v0
label_248154:
    if (ctx->pc == 0x248154u) {
        ctx->pc = 0x248154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248150u;
        // 0x248154: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248158u;
        goto label_248158;
    }
    ctx->pc = 0x248150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x248158u);
        ctx->pc = 0x248154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248150u;
        // 0x248154: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248150u, 0x248158u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x248158u;
label_248158:
    // 0x248158: 0xc0d085a  jal         func_342168
label_24815c:
    if (ctx->pc == 0x24815Cu) {
        ctx->pc = 0x24815Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248158u;
        // 0x24815c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248160u;
        goto label_248160;
    }
    ctx->pc = 0x248158u;
    SET_GPR_U32(ctx, 31, 0x248160u);
    ctx->pc = 0x24815Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248158u;
    // 0x24815c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342168u, 0x248158u, 0x248160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248160u;
label_248160:
    // 0x248160: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x248160u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_248164:
    // 0x248164: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x248164u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_248168:
    // 0x248168: 0x3e00008  jr          $ra
label_24816c:
    if (ctx->pc == 0x24816Cu) {
        ctx->pc = 0x24816Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248168u;
        // 0x24816c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248170u;
        goto label_fallthrough_0x248168;
    }
    ctx->pc = 0x248168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24816Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248168u;
        // 0x24816c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248168u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x248168:
    ctx->pc = 0x248170u;
}
