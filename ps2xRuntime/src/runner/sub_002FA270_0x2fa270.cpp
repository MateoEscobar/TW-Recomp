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

// Function: sub_002FA270
// Address: 0x2fa270 - 0x2fa300
void sub_002FA270_0x2fa270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FA270_0x2fa270");
#endif

    switch (ctx->pc) {
        case 0x2fa290u: goto label_2fa290;
        default: break;
    }

    ctx->pc = 0x2fa270u;

    // 0x2fa270: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fa270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fa274: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fa274u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa278: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2fa278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2fa27c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fa27cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa280: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fa280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fa284: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x2fa284u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x2fa288: 0xc051282  jal         func_144A08
    ctx->pc = 0x2FA288u;
    SET_GPR_U32(ctx, 31, 0x2FA290u);
    ctx->pc = 0x2FA28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA288u;
    // 0x2fa28c: 0x2484d810  addiu       $a0, $a0, -0x27F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144A08u, 0x2FA288u, 0x2FA290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA290u;
label_2fa290:
    // 0x2fa290: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x2fa290u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2fa294: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2FA294u;
    {
        const bool branch_taken_0x2fa294 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA294u;
        // 0x2fa298: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa294) {
            ctx->pc = 0x2FA2BCu;
            goto label_2fa2bc;
        }
    }
    ctx->pc = 0x2FA29Cu;
    // 0x2fa29c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2fa29cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2fa2a0: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x2fa2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50B734u));
    // 0x2fa2a4: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x2fa2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x2fa2a8: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x2fa2a8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2fa2ac: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FA2ACu;
    {
        const bool branch_taken_0x2fa2ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA2ACu;
        // 0x2fa2b0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa2ac) {
            ctx->pc = 0x2FA2BCu;
            goto label_2fa2bc;
        }
    }
    ctx->pc = 0x2FA2B4u;
    // 0x2fa2b4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2FA2B4u;
    {
        const bool branch_taken_0x2fa2b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA2B4u;
        // 0x2fa2b8: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa2b4) {
            ctx->pc = 0x2FA2D4u;
            goto label_2fa2d4;
        }
    }
    ctx->pc = 0x2FA2BCu;
label_2fa2bc:
    // 0x2fa2bc: 0x30c20010  andi        $v0, $a2, 0x10
    ctx->pc = 0x2fa2bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16);
    // 0x2fa2c0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FA2C0u;
    {
        const bool branch_taken_0x2fa2c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FA2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA2C0u;
        // 0x2fa2c4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa2c0) {
            ctx->pc = 0x2FA2D0u;
            goto label_2fa2d0;
        }
    }
    ctx->pc = 0x2FA2C8u;
    // 0x2fa2c8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2FA2C8u;
    {
        const bool branch_taken_0x2fa2c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA2C8u;
        // 0x2fa2cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa2c8) {
            ctx->pc = 0x2FA2E0u;
            goto label_2fa2e0;
        }
    }
    ctx->pc = 0x2FA2D0u;
label_2fa2d0:
    // 0x2fa2d0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2fa2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fa2d4:
    // 0x2fa2d4: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x2fa2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    // 0x2fa2d8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2fa2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2fa2dc: 0xa4640412  sh          $a0, 0x412($v1)
    ctx->pc = 0x2fa2dcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1042), (uint16_t)GPR_U32(ctx, 4));
label_2fa2e0:
    // 0x2fa2e0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2fa2e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fa2e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fa2e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fa2e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2FA2E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FA2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA2E8u;
        // 0x2fa2ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FA2E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FA2F0u;
    // 0x2fa2f0: 0xa0800006  sb          $zero, 0x6($a0)
    ctx->pc = 0x2fa2f0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x2fa2f4: 0x0  nop
    ctx->pc = 0x2fa2f4u;
    // NOP
    // 0x2fa2f8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2fa2f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2fa2fc: 0x0  nop
    ctx->pc = 0x2fa2fcu;
    // NOP
    ctx->pc = 0x2fa300u;
}
