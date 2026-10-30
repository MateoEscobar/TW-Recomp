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

// Function: sub_002D6F98
// Address: 0x2d6f98 - 0x2d7000
void sub_002D6F98_0x2d6f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D6F98_0x2d6f98");
#endif

    switch (ctx->pc) {
        case 0x2d6f98u: goto label_2d6f98;
        case 0x2d6f9cu: goto label_2d6f9c;
        case 0x2d6fa0u: goto label_2d6fa0;
        case 0x2d6fa4u: goto label_2d6fa4;
        case 0x2d6fa8u: goto label_2d6fa8;
        case 0x2d6facu: goto label_2d6fac;
        case 0x2d6fb0u: goto label_2d6fb0;
        case 0x2d6fb4u: goto label_2d6fb4;
        case 0x2d6fb8u: goto label_2d6fb8;
        case 0x2d6fbcu: goto label_2d6fbc;
        case 0x2d6fc0u: goto label_2d6fc0;
        case 0x2d6fc4u: goto label_2d6fc4;
        case 0x2d6fc8u: goto label_2d6fc8;
        case 0x2d6fccu: goto label_2d6fcc;
        case 0x2d6fd0u: goto label_2d6fd0;
        case 0x2d6fd4u: goto label_2d6fd4;
        case 0x2d6fd8u: goto label_2d6fd8;
        case 0x2d6fdcu: goto label_2d6fdc;
        case 0x2d6fe0u: goto label_2d6fe0;
        case 0x2d6fe4u: goto label_2d6fe4;
        case 0x2d6fe8u: goto label_2d6fe8;
        case 0x2d6fecu: goto label_2d6fec;
        case 0x2d6ff0u: goto label_2d6ff0;
        case 0x2d6ff4u: goto label_2d6ff4;
        case 0x2d6ff8u: goto label_2d6ff8;
        case 0x2d6ffcu: goto label_2d6ffc;
        default: break;
    }

    ctx->pc = 0x2d6f98u;

label_2d6f98:
    // 0x2d6f98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d6f98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2d6f9c:
    // 0x2d6f9c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2d6f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2d6fa0:
    // 0x2d6fa0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d6fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2d6fa4:
    // 0x2d6fa4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d6fa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d6fa8:
    // 0x2d6fa8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2d6fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2d6fac:
    // 0x2d6fac: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x2d6facu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_2d6fb0:
    // 0x2d6fb0: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x2d6fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_2d6fb4:
    // 0x2d6fb4: 0x60f809  jalr        $v1
label_2d6fb8:
    if (ctx->pc == 0x2D6FB8u) {
        ctx->pc = 0x2D6FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6FB4u;
        // 0x2d6fb8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6FBCu;
        goto label_2d6fbc;
    }
    ctx->pc = 0x2D6FB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2D6FBCu);
        ctx->pc = 0x2D6FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6FB4u;
        // 0x2d6fb8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6FB4u, 0x2D6FBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D6FBCu;
label_2d6fbc:
    // 0x2d6fbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d6fbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d6fc0:
    // 0x2d6fc0: 0xc0b5c00  jal         func_2D7000
label_2d6fc4:
    if (ctx->pc == 0x2D6FC4u) {
        ctx->pc = 0x2D6FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6FC0u;
        // 0x2d6fc4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6FC8u;
        goto label_2d6fc8;
    }
    ctx->pc = 0x2D6FC0u;
    SET_GPR_U32(ctx, 31, 0x2D6FC8u);
    ctx->pc = 0x2D6FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6FC0u;
    // 0x2d6fc4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7000u, 0x2D6FC0u, 0x2D6FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6FC8u;
label_2d6fc8:
    // 0x2d6fc8: 0x92030045  lbu         $v1, 0x45($s0)
    ctx->pc = 0x2d6fc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 69)));
label_2d6fcc:
    // 0x2d6fcc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d6fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d6fd0:
    // 0x2d6fd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d6fd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d6fd4:
    // 0x2d6fd4: 0xa0430265  sb          $v1, 0x265($v0)
    ctx->pc = 0x2d6fd4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 613), (uint8_t)GPR_U32(ctx, 3));
label_2d6fd8:
    // 0x2d6fd8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2d6fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d6fdc:
    // 0x2d6fdc: 0x96040040  lhu         $a0, 0x40($s0)
    ctx->pc = 0x2d6fdcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 64)));
label_2d6fe0:
    // 0x2d6fe0: 0xac640144  sw          $a0, 0x144($v1)
    ctx->pc = 0x2d6fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 324), GPR_U32(ctx, 4));
label_2d6fe4:
    // 0x2d6fe4: 0x92020049  lbu         $v0, 0x49($s0)
    ctx->pc = 0x2d6fe4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 73)));
label_2d6fe8:
    // 0x2d6fe8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2d6fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d6fec:
    // 0x2d6fec: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2d6fecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2d6ff0:
    // 0x2d6ff0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2d6ff0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2d6ff4:
    // 0x2d6ff4: 0xa062028d  sb          $v0, 0x28D($v1)
    ctx->pc = 0x2d6ff4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 653), (uint8_t)GPR_U32(ctx, 2));
label_2d6ff8:
    // 0x2d6ff8: 0x3e00008  jr          $ra
label_2d6ffc:
    if (ctx->pc == 0x2D6FFCu) {
        ctx->pc = 0x2D6FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6FF8u;
        // 0x2d6ffc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7000u;
        goto label_fallthrough_0x2d6ff8;
    }
    ctx->pc = 0x2D6FF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D6FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6FF8u;
        // 0x2d6ffc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6FF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2d6ff8:
    ctx->pc = 0x2D7000u;
}
