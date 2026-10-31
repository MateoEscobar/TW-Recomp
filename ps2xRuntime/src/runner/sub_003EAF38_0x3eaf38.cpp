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

// Function: sub_003EAF38
// Address: 0x3eaf38 - 0x3eaf98
void sub_003EAF38_0x3eaf38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EAF38_0x3eaf38");
#endif

    switch (ctx->pc) {
        case 0x3eaf38u: goto label_3eaf38;
        case 0x3eaf3cu: goto label_3eaf3c;
        case 0x3eaf40u: goto label_3eaf40;
        case 0x3eaf44u: goto label_3eaf44;
        case 0x3eaf48u: goto label_3eaf48;
        case 0x3eaf4cu: goto label_3eaf4c;
        case 0x3eaf50u: goto label_3eaf50;
        case 0x3eaf54u: goto label_3eaf54;
        case 0x3eaf58u: goto label_3eaf58;
        case 0x3eaf5cu: goto label_3eaf5c;
        case 0x3eaf60u: goto label_3eaf60;
        case 0x3eaf64u: goto label_3eaf64;
        case 0x3eaf68u: goto label_3eaf68;
        case 0x3eaf6cu: goto label_3eaf6c;
        case 0x3eaf70u: goto label_3eaf70;
        case 0x3eaf74u: goto label_3eaf74;
        case 0x3eaf78u: goto label_3eaf78;
        case 0x3eaf7cu: goto label_3eaf7c;
        case 0x3eaf80u: goto label_3eaf80;
        case 0x3eaf84u: goto label_3eaf84;
        case 0x3eaf88u: goto label_3eaf88;
        case 0x3eaf8cu: goto label_3eaf8c;
        case 0x3eaf90u: goto label_3eaf90;
        case 0x3eaf94u: goto label_3eaf94;
        default: break;
    }

    ctx->pc = 0x3eaf38u;

label_3eaf38:
    // 0x3eaf38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3eaf38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3eaf3c:
    // 0x3eaf3c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3eaf3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_3eaf40:
    // 0x3eaf40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3eaf40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3eaf44:
    // 0x3eaf44: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3eaf44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3eaf48:
    // 0x3eaf48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3eaf48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3eaf4c:
    // 0x3eaf4c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3eaf4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3eaf50:
    // 0x3eaf50: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x3eaf50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3eaf54:
    // 0x3eaf54: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_3eaf58:
    if (ctx->pc == 0x3EAF58u) {
        ctx->pc = 0x3EAF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAF54u;
        // 0x3eaf58: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EAF5Cu;
        goto label_3eaf5c;
    }
    ctx->pc = 0x3EAF54u;
    {
        const bool branch_taken_0x3eaf54 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EAF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAF54u;
        // 0x3eaf58: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eaf54) {
            ctx->pc = 0x3EAF74u;
            goto label_3eaf74;
        }
    }
    ctx->pc = 0x3EAF5Cu;
label_3eaf5c:
    // 0x3eaf5c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3eaf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3eaf60:
    // 0x3eaf60: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x3eaf60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
label_3eaf64:
    // 0x3eaf64: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x3eaf64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_3eaf68:
    // 0x3eaf68: 0x60f809  jalr        $v1
label_3eaf6c:
    if (ctx->pc == 0x3EAF6Cu) {
        ctx->pc = 0x3EAF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAF68u;
        // 0x3eaf6c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EAF70u;
        goto label_3eaf70;
    }
    ctx->pc = 0x3EAF68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3EAF70u);
        ctx->pc = 0x3EAF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAF68u;
        // 0x3eaf6c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EAF68u, 0x3EAF70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EAF70u;
label_3eaf70:
    // 0x3eaf70: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x3eaf70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_3eaf74:
    // 0x3eaf74: 0x2e220003  sltiu       $v0, $s1, 0x3
    ctx->pc = 0x3eaf74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_3eaf78:
    // 0x3eaf78: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_3eaf7c:
    if (ctx->pc == 0x3EAF7Cu) {
        ctx->pc = 0x3EAF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAF78u;
        // 0x3eaf7c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EAF80u;
        goto label_3eaf80;
    }
    ctx->pc = 0x3EAF78u;
    {
        const bool branch_taken_0x3eaf78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EAF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAF78u;
        // 0x3eaf7c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eaf78) {
            ctx->pc = 0x3EAF50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3eaf50;
        }
    }
    ctx->pc = 0x3EAF80u;
label_3eaf80:
    // 0x3eaf80: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3eaf80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3eaf84:
    // 0x3eaf84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3eaf84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3eaf88:
    // 0x3eaf88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3eaf88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3eaf8c:
    // 0x3eaf8c: 0x3e00008  jr          $ra
label_3eaf90:
    if (ctx->pc == 0x3EAF90u) {
        ctx->pc = 0x3EAF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAF8Cu;
        // 0x3eaf90: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EAF94u;
        goto label_3eaf94;
    }
    ctx->pc = 0x3EAF8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EAF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAF8Cu;
        // 0x3eaf90: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EAF8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EAF94u;
label_3eaf94:
    // 0x3eaf94: 0x0  nop
    ctx->pc = 0x3eaf94u;
    // NOP
    ctx->pc = 0x3eaf98u;
}
