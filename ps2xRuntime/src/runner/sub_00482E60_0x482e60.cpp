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

// Function: sub_00482E60
// Address: 0x482e60 - 0x482eb8
void sub_00482E60_0x482e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00482E60_0x482e60");
#endif

    switch (ctx->pc) {
        case 0x482e60u: goto label_482e60;
        case 0x482e64u: goto label_482e64;
        case 0x482e68u: goto label_482e68;
        case 0x482e6cu: goto label_482e6c;
        case 0x482e70u: goto label_482e70;
        case 0x482e74u: goto label_482e74;
        case 0x482e78u: goto label_482e78;
        case 0x482e7cu: goto label_482e7c;
        case 0x482e80u: goto label_482e80;
        case 0x482e84u: goto label_482e84;
        case 0x482e88u: goto label_482e88;
        case 0x482e8cu: goto label_482e8c;
        case 0x482e90u: goto label_482e90;
        case 0x482e94u: goto label_482e94;
        case 0x482e98u: goto label_482e98;
        case 0x482e9cu: goto label_482e9c;
        case 0x482ea0u: goto label_482ea0;
        case 0x482ea4u: goto label_482ea4;
        case 0x482ea8u: goto label_482ea8;
        case 0x482eacu: goto label_482eac;
        case 0x482eb0u: goto label_482eb0;
        case 0x482eb4u: goto label_482eb4;
        default: break;
    }

    ctx->pc = 0x482e60u;

label_482e60:
    // 0x482e60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x482e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_482e64:
    // 0x482e64: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x482e64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_482e68:
    // 0x482e68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x482e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_482e6c:
    // 0x482e6c: 0x3c110071  lui         $s1, 0x71
    ctx->pc = 0x482e6cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)113 << 16));
label_482e70:
    // 0x482e70: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x482e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_482e74:
    // 0x482e74: 0x2623ad18  addiu       $v1, $s1, -0x52E8
    ctx->pc = 0x482e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294946072));
label_482e78:
    // 0x482e78: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x482e78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_482e7c:
    // 0x482e7c: 0x8c620070  lw          $v0, 0x70($v1)
    ctx->pc = 0x482e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
label_482e80:
    // 0x482e80: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x482e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_482e84:
    // 0x482e84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x482e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_482e88:
    // 0x482e88: 0x40f809  jalr        $v0
label_482e8c:
    if (ctx->pc == 0x482E8Cu) {
        ctx->pc = 0x482E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x482E88u;
        // 0x482e8c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x482E90u;
        goto label_482e90;
    }
    ctx->pc = 0x482E88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x482E90u);
        ctx->pc = 0x482E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x482E88u;
        // 0x482e8c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x482E88u, 0x482E90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x482E90u;
label_482e90:
    // 0x482e90: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_482e94:
    if (ctx->pc == 0x482E94u) {
        ctx->pc = 0x482E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x482E90u;
        // 0x482e94: 0xae20ad18  sw          $zero, -0x52E8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294946072), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x482E98u;
        goto label_482e98;
    }
    ctx->pc = 0x482E90u;
    {
        const bool branch_taken_0x482e90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x482e90) {
            ctx->pc = 0x482E94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x482E90u;
            // 0x482e94: 0xae20ad18  sw          $zero, -0x52E8($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4294946072), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x482EA0u;
            goto label_482ea0;
        }
    }
    ctx->pc = 0x482E98u;
label_482e98:
    // 0x482e98: 0x10000002  b           . + 4 + (0x2 << 2)
label_482e9c:
    if (ctx->pc == 0x482E9Cu) {
        ctx->pc = 0x482E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x482E98u;
        // 0x482e9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x482EA0u;
        goto label_482ea0;
    }
    ctx->pc = 0x482E98u;
    {
        const bool branch_taken_0x482e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x482E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x482E98u;
        // 0x482e9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x482e98) {
            ctx->pc = 0x482EA4u;
            goto label_482ea4;
        }
    }
    ctx->pc = 0x482EA0u;
label_482ea0:
    // 0x482ea0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x482ea0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_482ea4:
    // 0x482ea4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x482ea4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_482ea8:
    // 0x482ea8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x482ea8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_482eac:
    // 0x482eac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x482eacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_482eb0:
    // 0x482eb0: 0x3e00008  jr          $ra
label_482eb4:
    if (ctx->pc == 0x482EB4u) {
        ctx->pc = 0x482EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x482EB0u;
        // 0x482eb4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x482EB8u;
        goto label_fallthrough_0x482eb0;
    }
    ctx->pc = 0x482EB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x482EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x482EB0u;
        // 0x482eb4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x482EB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x482eb0:
    ctx->pc = 0x482EB8u;
}
