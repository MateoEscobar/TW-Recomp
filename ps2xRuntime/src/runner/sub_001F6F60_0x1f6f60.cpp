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

// Function: sub_001F6F60
// Address: 0x1f6f60 - 0x1f6fe8
void sub_001F6F60_0x1f6f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F6F60_0x1f6f60");
#endif

    switch (ctx->pc) {
        case 0x1f6f60u: goto label_1f6f60;
        case 0x1f6f64u: goto label_1f6f64;
        case 0x1f6f68u: goto label_1f6f68;
        case 0x1f6f6cu: goto label_1f6f6c;
        case 0x1f6f70u: goto label_1f6f70;
        case 0x1f6f74u: goto label_1f6f74;
        case 0x1f6f78u: goto label_1f6f78;
        case 0x1f6f7cu: goto label_1f6f7c;
        case 0x1f6f80u: goto label_1f6f80;
        case 0x1f6f84u: goto label_1f6f84;
        case 0x1f6f88u: goto label_1f6f88;
        case 0x1f6f8cu: goto label_1f6f8c;
        case 0x1f6f90u: goto label_1f6f90;
        case 0x1f6f94u: goto label_1f6f94;
        case 0x1f6f98u: goto label_1f6f98;
        case 0x1f6f9cu: goto label_1f6f9c;
        case 0x1f6fa0u: goto label_1f6fa0;
        case 0x1f6fa4u: goto label_1f6fa4;
        case 0x1f6fa8u: goto label_1f6fa8;
        case 0x1f6facu: goto label_1f6fac;
        case 0x1f6fb0u: goto label_1f6fb0;
        case 0x1f6fb4u: goto label_1f6fb4;
        case 0x1f6fb8u: goto label_1f6fb8;
        case 0x1f6fbcu: goto label_1f6fbc;
        case 0x1f6fc0u: goto label_1f6fc0;
        case 0x1f6fc4u: goto label_1f6fc4;
        case 0x1f6fc8u: goto label_1f6fc8;
        case 0x1f6fccu: goto label_1f6fcc;
        case 0x1f6fd0u: goto label_1f6fd0;
        case 0x1f6fd4u: goto label_1f6fd4;
        case 0x1f6fd8u: goto label_1f6fd8;
        case 0x1f6fdcu: goto label_1f6fdc;
        case 0x1f6fe0u: goto label_1f6fe0;
        case 0x1f6fe4u: goto label_1f6fe4;
        default: break;
    }

    ctx->pc = 0x1f6f60u;

label_1f6f60:
    // 0x1f6f60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f6f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1f6f64:
    // 0x1f6f64: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1f6f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1f6f68:
    // 0x1f6f68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f6f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1f6f6c:
    // 0x1f6f6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f6f6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f6f70:
    // 0x1f6f70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f6f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1f6f74:
    // 0x1f6f74: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1f6f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1f6f78:
    // 0x1f6f78: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_1f6f7c:
    if (ctx->pc == 0x1F6F7Cu) {
        ctx->pc = 0x1F6F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6F78u;
        // 0x1f6f7c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6F80u;
        goto label_1f6f80;
    }
    ctx->pc = 0x1F6F78u;
    {
        const bool branch_taken_0x1f6f78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6F78u;
        // 0x1f6f7c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6f78) {
            ctx->pc = 0x1F6FD0u;
            goto label_1f6fd0;
        }
    }
    ctx->pc = 0x1F6F80u;
label_1f6f80:
    // 0x1f6f80: 0xc06a3aa  jal         func_1A8EA8
label_1f6f84:
    if (ctx->pc == 0x1F6F84u) {
        ctx->pc = 0x1F6F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6F80u;
        // 0x1f6f84: 0x8e05008c  lw          $a1, 0x8C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6F88u;
        goto label_1f6f88;
    }
    ctx->pc = 0x1F6F80u;
    SET_GPR_U32(ctx, 31, 0x1F6F88u);
    ctx->pc = 0x1F6F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6F80u;
    // 0x1f6f84: 0x8e05008c  lw          $a1, 0x8C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8EA8u, 0x1F6F80u, 0x1F6F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6F88u;
label_1f6f88:
    // 0x1f6f88: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_1f6f8c:
    if (ctx->pc == 0x1F6F8Cu) {
        ctx->pc = 0x1F6F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6F88u;
        // 0x1f6f8c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6F90u;
        goto label_1f6f90;
    }
    ctx->pc = 0x1F6F88u;
    {
        const bool branch_taken_0x1f6f88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6F88u;
        // 0x1f6f8c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6f88) {
            ctx->pc = 0x1F6FD4u;
            goto label_1f6fd4;
        }
    }
    ctx->pc = 0x1F6F90u;
label_1f6f90:
    // 0x1f6f90: 0x8e0500b0  lw          $a1, 0xB0($s0)
    ctx->pc = 0x1f6f90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_1f6f94:
    // 0x1f6f94: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1f6f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f6f98:
    // 0x1f6f98: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x1f6f98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_1f6f9c:
    // 0x1f6f9c: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x1f6f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_1f6fa0:
    // 0x1f6fa0: 0x40f809  jalr        $v0
label_1f6fa4:
    if (ctx->pc == 0x1F6FA4u) {
        ctx->pc = 0x1F6FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6FA0u;
        // 0x1f6fa4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6FA8u;
        goto label_1f6fa8;
    }
    ctx->pc = 0x1F6FA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F6FA8u);
        ctx->pc = 0x1F6FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6FA0u;
        // 0x1f6fa4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6FA0u, 0x1F6FA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F6FA8u;
label_1f6fa8:
    // 0x1f6fa8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1f6fac:
    if (ctx->pc == 0x1F6FACu) {
        ctx->pc = 0x1F6FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6FA8u;
        // 0x1f6fac: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6FB0u;
        goto label_1f6fb0;
    }
    ctx->pc = 0x1F6FA8u;
    {
        const bool branch_taken_0x1f6fa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6FA8u;
        // 0x1f6fac: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6fa8) {
            ctx->pc = 0x1F6FD4u;
            goto label_1f6fd4;
        }
    }
    ctx->pc = 0x1F6FB0u;
label_1f6fb0:
    // 0x1f6fb0: 0x8e040094  lw          $a0, 0x94($s0)
    ctx->pc = 0x1f6fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_1f6fb4:
    // 0x1f6fb4: 0x8c8300d0  lw          $v1, 0xD0($a0)
    ctx->pc = 0x1f6fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
label_1f6fb8:
    // 0x1f6fb8: 0x248400d0  addiu       $a0, $a0, 0xD0
    ctx->pc = 0x1f6fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 208));
label_1f6fbc:
    // 0x1f6fbc: 0x84650088  lh          $a1, 0x88($v1)
    ctx->pc = 0x1f6fbcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_1f6fc0:
    // 0x1f6fc0: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x1f6fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_1f6fc4:
    // 0x1f6fc4: 0x40f809  jalr        $v0
label_1f6fc8:
    if (ctx->pc == 0x1F6FC8u) {
        ctx->pc = 0x1F6FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6FC4u;
        // 0x1f6fc8: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6FCCu;
        goto label_1f6fcc;
    }
    ctx->pc = 0x1F6FC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F6FCCu);
        ctx->pc = 0x1F6FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6FC4u;
        // 0x1f6fc8: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6FC4u, 0x1F6FCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F6FCCu;
label_1f6fcc:
    // 0x1f6fcc: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x1f6fccu;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1f6fd0:
    // 0x1f6fd0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1f6fd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f6fd4:
    // 0x1f6fd4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1f6fd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f6fd8:
    // 0x1f6fd8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f6fd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f6fdc:
    // 0x1f6fdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f6fdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f6fe0:
    // 0x1f6fe0: 0x3e00008  jr          $ra
label_1f6fe4:
    if (ctx->pc == 0x1F6FE4u) {
        ctx->pc = 0x1F6FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6FE0u;
        // 0x1f6fe4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6FE8u;
        goto label_fallthrough_0x1f6fe0;
    }
    ctx->pc = 0x1F6FE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F6FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6FE0u;
        // 0x1f6fe4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6FE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1f6fe0:
    ctx->pc = 0x1F6FE8u;
}
