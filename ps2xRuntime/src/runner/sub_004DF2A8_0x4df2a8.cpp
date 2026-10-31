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

// Function: sub_004DF2A8
// Address: 0x4df2a8 - 0x4df328
void sub_004DF2A8_0x4df2a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DF2A8_0x4df2a8");
#endif

    switch (ctx->pc) {
        case 0x4df2a8u: goto label_4df2a8;
        case 0x4df2acu: goto label_4df2ac;
        case 0x4df2b0u: goto label_4df2b0;
        case 0x4df2b4u: goto label_4df2b4;
        case 0x4df2b8u: goto label_4df2b8;
        case 0x4df2bcu: goto label_4df2bc;
        case 0x4df2c0u: goto label_4df2c0;
        case 0x4df2c4u: goto label_4df2c4;
        case 0x4df2c8u: goto label_4df2c8;
        case 0x4df2ccu: goto label_4df2cc;
        case 0x4df2d0u: goto label_4df2d0;
        case 0x4df2d4u: goto label_4df2d4;
        case 0x4df2d8u: goto label_4df2d8;
        case 0x4df2dcu: goto label_4df2dc;
        case 0x4df2e0u: goto label_4df2e0;
        case 0x4df2e4u: goto label_4df2e4;
        case 0x4df2e8u: goto label_4df2e8;
        case 0x4df2ecu: goto label_4df2ec;
        case 0x4df2f0u: goto label_4df2f0;
        case 0x4df2f4u: goto label_4df2f4;
        case 0x4df2f8u: goto label_4df2f8;
        case 0x4df2fcu: goto label_4df2fc;
        case 0x4df300u: goto label_4df300;
        case 0x4df304u: goto label_4df304;
        case 0x4df308u: goto label_4df308;
        case 0x4df30cu: goto label_4df30c;
        case 0x4df310u: goto label_4df310;
        case 0x4df314u: goto label_4df314;
        case 0x4df318u: goto label_4df318;
        case 0x4df31cu: goto label_4df31c;
        case 0x4df320u: goto label_4df320;
        case 0x4df324u: goto label_4df324;
        default: break;
    }

    ctx->pc = 0x4df2a8u;

label_4df2a8:
    // 0x4df2a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4df2a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4df2ac:
    // 0x4df2ac: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4df2acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4df2b0:
    // 0x4df2b0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4df2b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4df2b4:
    // 0x4df2b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4df2b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4df2b8:
    // 0x4df2b8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4df2b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4df2bc:
    // 0x4df2bc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4df2bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4df2c0:
    // 0x4df2c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4df2c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4df2c4:
    // 0x4df2c4: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_4df2c8:
    if (ctx->pc == 0x4DF2C8u) {
        ctx->pc = 0x4DF2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF2C4u;
        // 0x4df2c8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DF2CCu;
        goto label_4df2cc;
    }
    ctx->pc = 0x4DF2C4u;
    {
        const bool branch_taken_0x4df2c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DF2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF2C4u;
        // 0x4df2c8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4df2c4) {
            ctx->pc = 0x4DF30Cu;
            goto label_4df30c;
        }
    }
    ctx->pc = 0x4DF2CCu;
label_4df2cc:
    // 0x4df2cc: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x4df2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4df2d0:
    // 0x4df2d0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4df2d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4df2d4:
    // 0x4df2d4: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x4df2d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_4df2d8:
    // 0x4df2d8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x4df2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_4df2dc:
    // 0x4df2dc: 0x60f809  jalr        $v1
label_4df2e0:
    if (ctx->pc == 0x4DF2E0u) {
        ctx->pc = 0x4DF2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF2DCu;
        // 0x4df2e0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DF2E4u;
        goto label_4df2e4;
    }
    ctx->pc = 0x4DF2DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4DF2E4u);
        ctx->pc = 0x4DF2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF2DCu;
        // 0x4df2e0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DF2DCu, 0x4DF2E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4DF2E4u;
label_4df2e4:
    // 0x4df2e4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4df2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4df2e8:
    // 0x4df2e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4df2e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4df2ec:
    // 0x4df2ec: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4df2ecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4df2f0:
    // 0x4df2f0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4df2f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4df2f4:
    // 0x4df2f4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4df2f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4df2f8:
    // 0x4df2f8: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4df2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4df2fc:
    // 0x4df2fc: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4df2fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4df300:
    // 0x4df300: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4df300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4df304:
    // 0x4df304: 0x60f809  jalr        $v1
label_4df308:
    if (ctx->pc == 0x4DF308u) {
        ctx->pc = 0x4DF308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF304u;
        // 0x4df308: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DF30Cu;
        goto label_4df30c;
    }
    ctx->pc = 0x4DF304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4DF30Cu);
        ctx->pc = 0x4DF308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF304u;
        // 0x4df308: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DF304u, 0x4DF30Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4DF30Cu;
label_4df30c:
    // 0x4df30c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4df30cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4df310:
    // 0x4df310: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4df310u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4df314:
    // 0x4df314: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4df314u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4df318:
    // 0x4df318: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4df318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4df31c:
    // 0x4df31c: 0x3e00008  jr          $ra
label_4df320:
    if (ctx->pc == 0x4DF320u) {
        ctx->pc = 0x4DF320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF31Cu;
        // 0x4df320: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DF324u;
        goto label_4df324;
    }
    ctx->pc = 0x4DF31Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DF320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF31Cu;
        // 0x4df320: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DF31Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DF324u;
label_4df324:
    // 0x4df324: 0x0  nop
    ctx->pc = 0x4df324u;
    // NOP
    ctx->pc = 0x4df328u;
}
