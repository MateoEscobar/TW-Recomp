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

// Function: sub_003AE2B0
// Address: 0x3ae2b0 - 0x3ae328
void sub_003AE2B0_0x3ae2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AE2B0_0x3ae2b0");
#endif

    switch (ctx->pc) {
        case 0x3ae2b0u: goto label_3ae2b0;
        case 0x3ae2b4u: goto label_3ae2b4;
        case 0x3ae2b8u: goto label_3ae2b8;
        case 0x3ae2bcu: goto label_3ae2bc;
        case 0x3ae2c0u: goto label_3ae2c0;
        case 0x3ae2c4u: goto label_3ae2c4;
        case 0x3ae2c8u: goto label_3ae2c8;
        case 0x3ae2ccu: goto label_3ae2cc;
        case 0x3ae2d0u: goto label_3ae2d0;
        case 0x3ae2d4u: goto label_3ae2d4;
        case 0x3ae2d8u: goto label_3ae2d8;
        case 0x3ae2dcu: goto label_3ae2dc;
        case 0x3ae2e0u: goto label_3ae2e0;
        case 0x3ae2e4u: goto label_3ae2e4;
        case 0x3ae2e8u: goto label_3ae2e8;
        case 0x3ae2ecu: goto label_3ae2ec;
        case 0x3ae2f0u: goto label_3ae2f0;
        case 0x3ae2f4u: goto label_3ae2f4;
        case 0x3ae2f8u: goto label_3ae2f8;
        case 0x3ae2fcu: goto label_3ae2fc;
        case 0x3ae300u: goto label_3ae300;
        case 0x3ae304u: goto label_3ae304;
        case 0x3ae308u: goto label_3ae308;
        case 0x3ae30cu: goto label_3ae30c;
        case 0x3ae310u: goto label_3ae310;
        case 0x3ae314u: goto label_3ae314;
        case 0x3ae318u: goto label_3ae318;
        case 0x3ae31cu: goto label_3ae31c;
        case 0x3ae320u: goto label_3ae320;
        case 0x3ae324u: goto label_3ae324;
        default: break;
    }

    ctx->pc = 0x3ae2b0u;

label_3ae2b0:
    // 0x3ae2b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3ae2b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3ae2b4:
    // 0x3ae2b4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3ae2b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_3ae2b8:
    // 0x3ae2b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3ae2b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3ae2bc:
    // 0x3ae2bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ae2bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3ae2c0:
    // 0x3ae2c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3ae2c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ae2c4:
    // 0x3ae2c4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3ae2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ae2c8:
    // 0x3ae2c8: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3ae2c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3ae2cc:
    // 0x3ae2cc: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3ae2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3ae2d0:
    // 0x3ae2d0: 0x40f809  jalr        $v0
label_3ae2d4:
    if (ctx->pc == 0x3AE2D4u) {
        ctx->pc = 0x3AE2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE2D0u;
        // 0x3ae2d4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE2D8u;
        goto label_3ae2d8;
    }
    ctx->pc = 0x3AE2D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AE2D8u);
        ctx->pc = 0x3AE2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE2D0u;
        // 0x3ae2d4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AE2D0u, 0x3AE2D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AE2D8u;
label_3ae2d8:
    // 0x3ae2d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3ae2d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ae2dc:
    // 0x3ae2dc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3ae2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3ae2e0:
    // 0x3ae2e0: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x3ae2e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_3ae2e4:
    // 0x3ae2e4: 0x1043000a  beq         $v0, $v1, . + 4 + (0xA << 2)
label_3ae2e8:
    if (ctx->pc == 0x3AE2E8u) {
        ctx->pc = 0x3AE2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE2E4u;
        // 0x3ae2e8: 0x3c050001  lui         $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE2ECu;
        goto label_3ae2ec;
    }
    ctx->pc = 0x3AE2E4u;
    {
        const bool branch_taken_0x3ae2e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3AE2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE2E4u;
        // 0x3ae2e8: 0x3c050001  lui         $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae2e4) {
            ctx->pc = 0x3AE310u;
            goto label_3ae310;
        }
    }
    ctx->pc = 0x3AE2ECu;
label_3ae2ec:
    // 0x3ae2ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ae2ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ae2f0:
    // 0x3ae2f0: 0x34a5002e  ori         $a1, $a1, 0x2E
    ctx->pc = 0x3ae2f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)46);
label_3ae2f4:
    // 0x3ae2f4: 0xc0e6ec6  jal         func_39BB18
label_3ae2f8:
    if (ctx->pc == 0x3AE2F8u) {
        ctx->pc = 0x3AE2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE2F4u;
        // 0x3ae2f8: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE2FCu;
        goto label_3ae2fc;
    }
    ctx->pc = 0x3AE2F4u;
    SET_GPR_U32(ctx, 31, 0x3AE2FCu);
    ctx->pc = 0x3AE2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE2F4u;
    // 0x3ae2f8: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39BB18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BB18u, 0x3AE2F4u, 0x3AE2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE2FCu;
label_3ae2fc:
    // 0x3ae2fc: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x3ae2fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_3ae300:
    // 0x3ae300: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3ae300u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ae304:
    // 0x3ae304: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3ae304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3ae308:
    // 0x3ae308: 0x10000002  b           . + 4 + (0x2 << 2)
label_3ae30c:
    if (ctx->pc == 0x3AE30Cu) {
        ctx->pc = 0x3AE30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE308u;
        // 0x3ae30c: 0xa2030000  sb          $v1, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE310u;
        goto label_3ae310;
    }
    ctx->pc = 0x3AE308u;
    {
        const bool branch_taken_0x3ae308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AE30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE308u;
        // 0x3ae30c: 0xa2030000  sb          $v1, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae308) {
            ctx->pc = 0x3AE314u;
            goto label_3ae314;
        }
    }
    ctx->pc = 0x3AE310u;
label_3ae310:
    // 0x3ae310: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3ae310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ae314:
    // 0x3ae314: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3ae314u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ae318:
    // 0x3ae318: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3ae318u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3ae31c:
    // 0x3ae31c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ae31cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3ae320:
    // 0x3ae320: 0x3e00008  jr          $ra
label_3ae324:
    if (ctx->pc == 0x3AE324u) {
        ctx->pc = 0x3AE324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE320u;
        // 0x3ae324: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE328u;
        goto label_fallthrough_0x3ae320;
    }
    ctx->pc = 0x3AE320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AE324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE320u;
        // 0x3ae324: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AE320u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3ae320:
    ctx->pc = 0x3AE328u;
}
