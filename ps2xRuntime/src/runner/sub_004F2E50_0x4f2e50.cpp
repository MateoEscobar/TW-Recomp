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

// Function: sub_004F2E50
// Address: 0x4f2e50 - 0x4f2eb0
void sub_004F2E50_0x4f2e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F2E50_0x4f2e50");
#endif

    switch (ctx->pc) {
        case 0x4f2e50u: goto label_4f2e50;
        case 0x4f2e54u: goto label_4f2e54;
        case 0x4f2e58u: goto label_4f2e58;
        case 0x4f2e5cu: goto label_4f2e5c;
        case 0x4f2e60u: goto label_4f2e60;
        case 0x4f2e64u: goto label_4f2e64;
        case 0x4f2e68u: goto label_4f2e68;
        case 0x4f2e6cu: goto label_4f2e6c;
        case 0x4f2e70u: goto label_4f2e70;
        case 0x4f2e74u: goto label_4f2e74;
        case 0x4f2e78u: goto label_4f2e78;
        case 0x4f2e7cu: goto label_4f2e7c;
        case 0x4f2e80u: goto label_4f2e80;
        case 0x4f2e84u: goto label_4f2e84;
        case 0x4f2e88u: goto label_4f2e88;
        case 0x4f2e8cu: goto label_4f2e8c;
        case 0x4f2e90u: goto label_4f2e90;
        case 0x4f2e94u: goto label_4f2e94;
        case 0x4f2e98u: goto label_4f2e98;
        case 0x4f2e9cu: goto label_4f2e9c;
        case 0x4f2ea0u: goto label_4f2ea0;
        case 0x4f2ea4u: goto label_4f2ea4;
        case 0x4f2ea8u: goto label_4f2ea8;
        case 0x4f2eacu: goto label_4f2eac;
        default: break;
    }

    ctx->pc = 0x4f2e50u;

label_4f2e50:
    // 0x4f2e50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4f2e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4f2e54:
    // 0x4f2e54: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4f2e54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4f2e58:
    // 0x4f2e58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f2e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4f2e5c:
    // 0x4f2e5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4f2e5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f2e60:
    // 0x4f2e60: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4f2e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4f2e64:
    // 0x4f2e64: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x4f2e64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_4f2e68:
    // 0x4f2e68: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x4f2e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_4f2e6c:
    // 0x4f2e6c: 0x40f809  jalr        $v0
label_4f2e70:
    if (ctx->pc == 0x4F2E70u) {
        ctx->pc = 0x4F2E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2E6Cu;
        // 0x4f2e70: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F2E74u;
        goto label_4f2e74;
    }
    ctx->pc = 0x4F2E6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4F2E74u);
        ctx->pc = 0x4F2E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2E6Cu;
        // 0x4f2e70: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F2E6Cu, 0x4F2E74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F2E74u;
label_4f2e74:
    // 0x4f2e74: 0x5c400003  bgtzl       $v0, . + 4 + (0x3 << 2)
label_4f2e78:
    if (ctx->pc == 0x4F2E78u) {
        ctx->pc = 0x4F2E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2E74u;
        // 0x4f2e78: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F2E7Cu;
        goto label_4f2e7c;
    }
    ctx->pc = 0x4F2E74u;
    {
        const bool branch_taken_0x4f2e74 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x4f2e74) {
            ctx->pc = 0x4F2E78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F2E74u;
            // 0x4f2e78: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F2E84u;
            goto label_4f2e84;
        }
    }
    ctx->pc = 0x4F2E7Cu;
label_4f2e7c:
    // 0x4f2e7c: 0x10000007  b           . + 4 + (0x7 << 2)
label_4f2e80:
    if (ctx->pc == 0x4F2E80u) {
        ctx->pc = 0x4F2E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2E7Cu;
        // 0x4f2e80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F2E84u;
        goto label_4f2e84;
    }
    ctx->pc = 0x4F2E7Cu;
    {
        const bool branch_taken_0x4f2e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F2E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2E7Cu;
        // 0x4f2e80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f2e7c) {
            ctx->pc = 0x4F2E9Cu;
            goto label_4f2e9c;
        }
    }
    ctx->pc = 0x4F2E84u;
label_4f2e84:
    // 0x4f2e84: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x4f2e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4f2e88:
    // 0x4f2e88: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x4f2e88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_4f2e8c:
    // 0x4f2e8c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4f2e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4f2e90:
    // 0x4f2e90: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4f2e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_4f2e94:
    // 0x4f2e94: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4f2e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4f2e98:
    // 0x4f2e98: 0xae040010  sw          $a0, 0x10($s0)
    ctx->pc = 0x4f2e98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
label_4f2e9c:
    // 0x4f2e9c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4f2e9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4f2ea0:
    // 0x4f2ea0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f2ea0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4f2ea4:
    // 0x4f2ea4: 0x3e00008  jr          $ra
label_4f2ea8:
    if (ctx->pc == 0x4F2EA8u) {
        ctx->pc = 0x4F2EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2EA4u;
        // 0x4f2ea8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F2EACu;
        goto label_4f2eac;
    }
    ctx->pc = 0x4F2EA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F2EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2EA4u;
        // 0x4f2ea8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F2EA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F2EACu;
label_4f2eac:
    // 0x4f2eac: 0x0  nop
    ctx->pc = 0x4f2eacu;
    // NOP
    ctx->pc = 0x4f2eb0u;
}
