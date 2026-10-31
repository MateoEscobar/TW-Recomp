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

// Function: sub_00156100
// Address: 0x156100 - 0x156148
void sub_00156100_0x156100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00156100_0x156100");
#endif

    switch (ctx->pc) {
        case 0x156100u: goto label_156100;
        case 0x156104u: goto label_156104;
        case 0x156108u: goto label_156108;
        case 0x15610cu: goto label_15610c;
        case 0x156110u: goto label_156110;
        case 0x156114u: goto label_156114;
        case 0x156118u: goto label_156118;
        case 0x15611cu: goto label_15611c;
        case 0x156120u: goto label_156120;
        case 0x156124u: goto label_156124;
        case 0x156128u: goto label_156128;
        case 0x15612cu: goto label_15612c;
        case 0x156130u: goto label_156130;
        case 0x156134u: goto label_156134;
        case 0x156138u: goto label_156138;
        case 0x15613cu: goto label_15613c;
        case 0x156140u: goto label_156140;
        case 0x156144u: goto label_156144;
        default: break;
    }

    ctx->pc = 0x156100u;

label_156100:
    // 0x156100: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x156100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_156104:
    // 0x156104: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x156104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_156108:
    // 0x156108: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x156108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_15610c:
    // 0x15610c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15610cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_156110:
    // 0x156110: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x156110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_156114:
    // 0x156114: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_156118:
    if (ctx->pc == 0x156118u) {
        ctx->pc = 0x156118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156114u;
        // 0x156118: 0x8e030018  lw          $v1, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15611Cu;
        goto label_15611c;
    }
    ctx->pc = 0x156114u;
    {
        const bool branch_taken_0x156114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x156114) {
            ctx->pc = 0x156118u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x156114u;
            // 0x156118: 0x8e030018  lw          $v1, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x156128u;
            goto label_156128;
        }
    }
    ctx->pc = 0x15611Cu;
label_15611c:
    // 0x15611c: 0xc0557de  jal         func_155F78
label_156120:
    if (ctx->pc == 0x156120u) {
        ctx->pc = 0x156124u;
        goto label_156124;
    }
    ctx->pc = 0x15611Cu;
    SET_GPR_U32(ctx, 31, 0x156124u);
    ctx->pc = 0x155F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155F78u, 0x15611Cu, 0x156124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156124u;
label_156124:
    // 0x156124: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x156124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_156128:
    // 0x156128: 0x84640038  lh          $a0, 0x38($v1)
    ctx->pc = 0x156128u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
label_15612c:
    // 0x15612c: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x15612cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_156130:
    // 0x156130: 0x40f809  jalr        $v0
label_156134:
    if (ctx->pc == 0x156134u) {
        ctx->pc = 0x156134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156130u;
        // 0x156134: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156138u;
        goto label_156138;
    }
    ctx->pc = 0x156130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x156138u);
        ctx->pc = 0x156134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156130u;
        // 0x156134: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156130u, 0x156138u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x156138u;
label_156138:
    // 0x156138: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x156138u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15613c:
    // 0x15613c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15613cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_156140:
    // 0x156140: 0x3e00008  jr          $ra
label_156144:
    if (ctx->pc == 0x156144u) {
        ctx->pc = 0x156144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156140u;
        // 0x156144: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156148u;
        goto label_fallthrough_0x156140;
    }
    ctx->pc = 0x156140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x156144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156140u;
        // 0x156144: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156140u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x156140:
    ctx->pc = 0x156148u;
}
