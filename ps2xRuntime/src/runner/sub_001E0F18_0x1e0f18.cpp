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

// Function: sub_001E0F18
// Address: 0x1e0f18 - 0x1e0f98
void sub_001E0F18_0x1e0f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E0F18_0x1e0f18");
#endif

    switch (ctx->pc) {
        case 0x1e0f18u: goto label_1e0f18;
        case 0x1e0f1cu: goto label_1e0f1c;
        case 0x1e0f20u: goto label_1e0f20;
        case 0x1e0f24u: goto label_1e0f24;
        case 0x1e0f28u: goto label_1e0f28;
        case 0x1e0f2cu: goto label_1e0f2c;
        case 0x1e0f30u: goto label_1e0f30;
        case 0x1e0f34u: goto label_1e0f34;
        case 0x1e0f38u: goto label_1e0f38;
        case 0x1e0f3cu: goto label_1e0f3c;
        case 0x1e0f40u: goto label_1e0f40;
        case 0x1e0f44u: goto label_1e0f44;
        case 0x1e0f48u: goto label_1e0f48;
        case 0x1e0f4cu: goto label_1e0f4c;
        case 0x1e0f50u: goto label_1e0f50;
        case 0x1e0f54u: goto label_1e0f54;
        case 0x1e0f58u: goto label_1e0f58;
        case 0x1e0f5cu: goto label_1e0f5c;
        case 0x1e0f60u: goto label_1e0f60;
        case 0x1e0f64u: goto label_1e0f64;
        case 0x1e0f68u: goto label_1e0f68;
        case 0x1e0f6cu: goto label_1e0f6c;
        case 0x1e0f70u: goto label_1e0f70;
        case 0x1e0f74u: goto label_1e0f74;
        case 0x1e0f78u: goto label_1e0f78;
        case 0x1e0f7cu: goto label_1e0f7c;
        case 0x1e0f80u: goto label_1e0f80;
        case 0x1e0f84u: goto label_1e0f84;
        case 0x1e0f88u: goto label_1e0f88;
        case 0x1e0f8cu: goto label_1e0f8c;
        case 0x1e0f90u: goto label_1e0f90;
        case 0x1e0f94u: goto label_1e0f94;
        default: break;
    }

    ctx->pc = 0x1e0f18u;

label_1e0f18:
    // 0x1e0f18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e0f18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e0f1c:
    // 0x1e0f1c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e0f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1e0f20:
    // 0x1e0f20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e0f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e0f24:
    // 0x1e0f24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e0f24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e0f28:
    // 0x1e0f28: 0x8e050060  lw          $a1, 0x60($s0)
    ctx->pc = 0x1e0f28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_1e0f2c:
    // 0x1e0f2c: 0x10a00016  beqz        $a1, . + 4 + (0x16 << 2)
label_1e0f30:
    if (ctx->pc == 0x1E0F30u) {
        ctx->pc = 0x1E0F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0F2Cu;
        // 0x1e0f30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0F34u;
        goto label_1e0f34;
    }
    ctx->pc = 0x1E0F2Cu;
    {
        const bool branch_taken_0x1e0f2c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0F2Cu;
        // 0x1e0f30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0f2c) {
            ctx->pc = 0x1E0F88u;
            goto label_1e0f88;
        }
    }
    ctx->pc = 0x1E0F34u;
label_1e0f34:
    // 0x1e0f34: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1e0f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1e0f38:
    // 0x1e0f38: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_1e0f3c:
    if (ctx->pc == 0x1E0F3Cu) {
        ctx->pc = 0x1E0F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0F38u;
        // 0x1e0f3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0F40u;
        goto label_1e0f40;
    }
    ctx->pc = 0x1E0F38u;
    {
        const bool branch_taken_0x1e0f38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0F38u;
        // 0x1e0f3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0f38) {
            ctx->pc = 0x1E0F88u;
            goto label_1e0f88;
        }
    }
    ctx->pc = 0x1E0F40u;
label_1e0f40:
    // 0x1e0f40: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1e0f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1e0f44:
    // 0x1e0f44: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x1e0f44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_1e0f48:
    // 0x1e0f48: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x1e0f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_1e0f4c:
    // 0x1e0f4c: 0x40f809  jalr        $v0
label_1e0f50:
    if (ctx->pc == 0x1E0F50u) {
        ctx->pc = 0x1E0F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0F4Cu;
        // 0x1e0f50: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0F54u;
        goto label_1e0f54;
    }
    ctx->pc = 0x1E0F4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E0F54u);
        ctx->pc = 0x1E0F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0F4Cu;
        // 0x1e0f50: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0F4Cu, 0x1E0F54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E0F54u;
label_1e0f54:
    // 0x1e0f54: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1e0f58:
    if (ctx->pc == 0x1E0F58u) {
        ctx->pc = 0x1E0F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0F54u;
        // 0x1e0f58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0F5Cu;
        goto label_1e0f5c;
    }
    ctx->pc = 0x1E0F54u;
    {
        const bool branch_taken_0x1e0f54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0F54u;
        // 0x1e0f58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0f54) {
            ctx->pc = 0x1E0F88u;
            goto label_1e0f88;
        }
    }
    ctx->pc = 0x1E0F5Cu;
label_1e0f5c:
    // 0x1e0f5c: 0x8e050064  lw          $a1, 0x64($s0)
    ctx->pc = 0x1e0f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_1e0f60:
    // 0x1e0f60: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
label_1e0f64:
    if (ctx->pc == 0x1E0F64u) {
        ctx->pc = 0x1E0F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0F60u;
        // 0x1e0f64: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0F68u;
        goto label_1e0f68;
    }
    ctx->pc = 0x1E0F60u;
    {
        const bool branch_taken_0x1e0f60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0F60u;
        // 0x1e0f64: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0f60) {
            ctx->pc = 0x1E0F88u;
            goto label_1e0f88;
        }
    }
    ctx->pc = 0x1E0F68u;
label_1e0f68:
    // 0x1e0f68: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1e0f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1e0f6c:
    // 0x1e0f6c: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x1e0f6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_1e0f70:
    // 0x1e0f70: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x1e0f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_1e0f74:
    // 0x1e0f74: 0x40f809  jalr        $v0
label_1e0f78:
    if (ctx->pc == 0x1E0F78u) {
        ctx->pc = 0x1E0F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0F74u;
        // 0x1e0f78: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0F7Cu;
        goto label_1e0f7c;
    }
    ctx->pc = 0x1E0F74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E0F7Cu);
        ctx->pc = 0x1E0F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0F74u;
        // 0x1e0f78: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0F74u, 0x1E0F7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E0F7Cu;
label_1e0f7c:
    // 0x1e0f7c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_1e0f80:
    if (ctx->pc == 0x1E0F80u) {
        ctx->pc = 0x1E0F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0F7Cu;
        // 0x1e0f80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0F84u;
        goto label_1e0f84;
    }
    ctx->pc = 0x1E0F7Cu;
    {
        const bool branch_taken_0x1e0f7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E0F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0F7Cu;
        // 0x1e0f80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0f7c) {
            ctx->pc = 0x1E0F88u;
            goto label_1e0f88;
        }
    }
    ctx->pc = 0x1E0F84u;
label_1e0f84:
    // 0x1e0f84: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e0f84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e0f88:
    // 0x1e0f88: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e0f88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e0f8c:
    // 0x1e0f8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e0f8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e0f90:
    // 0x1e0f90: 0x3e00008  jr          $ra
label_1e0f94:
    if (ctx->pc == 0x1E0F94u) {
        ctx->pc = 0x1E0F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0F90u;
        // 0x1e0f94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0F98u;
        goto label_fallthrough_0x1e0f90;
    }
    ctx->pc = 0x1E0F90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0F90u;
        // 0x1e0f94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0F90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e0f90:
    ctx->pc = 0x1E0F98u;
}
