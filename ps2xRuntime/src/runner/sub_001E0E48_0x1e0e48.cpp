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

// Function: sub_001E0E48
// Address: 0x1e0e48 - 0x1e0eb0
void sub_001E0E48_0x1e0e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E0E48_0x1e0e48");
#endif

    switch (ctx->pc) {
        case 0x1e0e48u: goto label_1e0e48;
        case 0x1e0e4cu: goto label_1e0e4c;
        case 0x1e0e50u: goto label_1e0e50;
        case 0x1e0e54u: goto label_1e0e54;
        case 0x1e0e58u: goto label_1e0e58;
        case 0x1e0e5cu: goto label_1e0e5c;
        case 0x1e0e60u: goto label_1e0e60;
        case 0x1e0e64u: goto label_1e0e64;
        case 0x1e0e68u: goto label_1e0e68;
        case 0x1e0e6cu: goto label_1e0e6c;
        case 0x1e0e70u: goto label_1e0e70;
        case 0x1e0e74u: goto label_1e0e74;
        case 0x1e0e78u: goto label_1e0e78;
        case 0x1e0e7cu: goto label_1e0e7c;
        case 0x1e0e80u: goto label_1e0e80;
        case 0x1e0e84u: goto label_1e0e84;
        case 0x1e0e88u: goto label_1e0e88;
        case 0x1e0e8cu: goto label_1e0e8c;
        case 0x1e0e90u: goto label_1e0e90;
        case 0x1e0e94u: goto label_1e0e94;
        case 0x1e0e98u: goto label_1e0e98;
        case 0x1e0e9cu: goto label_1e0e9c;
        case 0x1e0ea0u: goto label_1e0ea0;
        case 0x1e0ea4u: goto label_1e0ea4;
        case 0x1e0ea8u: goto label_1e0ea8;
        case 0x1e0eacu: goto label_1e0eac;
        default: break;
    }

    ctx->pc = 0x1e0e48u;

label_1e0e48:
    // 0x1e0e48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e0e48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e0e4c:
    // 0x1e0e4c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e0e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1e0e50:
    // 0x1e0e50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e0e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e0e54:
    // 0x1e0e54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e0e54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e0e58:
    // 0x1e0e58: 0x8e050060  lw          $a1, 0x60($s0)
    ctx->pc = 0x1e0e58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_1e0e5c:
    // 0x1e0e5c: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_1e0e60:
    if (ctx->pc == 0x1E0E60u) {
        ctx->pc = 0x1E0E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0E5Cu;
        // 0x1e0e60: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0E64u;
        goto label_1e0e64;
    }
    ctx->pc = 0x1E0E5Cu;
    {
        const bool branch_taken_0x1e0e5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0E5Cu;
        // 0x1e0e60: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0e5c) {
            ctx->pc = 0x1E0E7Cu;
            goto label_1e0e7c;
        }
    }
    ctx->pc = 0x1E0E64u;
label_1e0e64:
    // 0x1e0e64: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1e0e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1e0e68:
    // 0x1e0e68: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x1e0e68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
label_1e0e6c:
    // 0x1e0e6c: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x1e0e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_1e0e70:
    // 0x1e0e70: 0x60f809  jalr        $v1
label_1e0e74:
    if (ctx->pc == 0x1E0E74u) {
        ctx->pc = 0x1E0E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0E70u;
        // 0x1e0e74: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0E78u;
        goto label_1e0e78;
    }
    ctx->pc = 0x1E0E70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E0E78u);
        ctx->pc = 0x1E0E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0E70u;
        // 0x1e0e74: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0E70u, 0x1E0E78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E0E78u;
label_1e0e78:
    // 0x1e0e78: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1e0e78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1e0e7c:
    // 0x1e0e7c: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x1e0e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_1e0e80:
    // 0x1e0e80: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1e0e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1e0e84:
    // 0x1e0e84: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1e0e84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1e0e88:
    // 0x1e0e88: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1e0e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1e0e8c:
    // 0x1e0e8c: 0x40f809  jalr        $v0
label_1e0e90:
    if (ctx->pc == 0x1E0E90u) {
        ctx->pc = 0x1E0E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0E8Cu;
        // 0x1e0e90: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0E94u;
        goto label_1e0e94;
    }
    ctx->pc = 0x1E0E8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E0E94u);
        ctx->pc = 0x1E0E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0E8Cu;
        // 0x1e0e90: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0E8Cu, 0x1E0E94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E0E94u;
label_1e0e94:
    // 0x1e0e94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e0e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e0e98:
    // 0x1e0e98: 0xae020074  sw          $v0, 0x74($s0)
    ctx->pc = 0x1e0e98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
label_1e0e9c:
    // 0x1e0e9c: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x1e0e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
label_1e0ea0:
    // 0x1e0ea0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e0ea0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e0ea4:
    // 0x1e0ea4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e0ea4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e0ea8:
    // 0x1e0ea8: 0x3e00008  jr          $ra
label_1e0eac:
    if (ctx->pc == 0x1E0EACu) {
        ctx->pc = 0x1E0EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0EA8u;
        // 0x1e0eac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0EB0u;
        goto label_fallthrough_0x1e0ea8;
    }
    ctx->pc = 0x1E0EA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0EA8u;
        // 0x1e0eac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0EA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e0ea8:
    ctx->pc = 0x1E0EB0u;
}
