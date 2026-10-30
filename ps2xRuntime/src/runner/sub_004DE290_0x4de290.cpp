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

// Function: sub_004DE290
// Address: 0x4de290 - 0x4de310
void sub_004DE290_0x4de290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DE290_0x4de290");
#endif

    switch (ctx->pc) {
        case 0x4de290u: goto label_4de290;
        case 0x4de294u: goto label_4de294;
        case 0x4de298u: goto label_4de298;
        case 0x4de29cu: goto label_4de29c;
        case 0x4de2a0u: goto label_4de2a0;
        case 0x4de2a4u: goto label_4de2a4;
        case 0x4de2a8u: goto label_4de2a8;
        case 0x4de2acu: goto label_4de2ac;
        case 0x4de2b0u: goto label_4de2b0;
        case 0x4de2b4u: goto label_4de2b4;
        case 0x4de2b8u: goto label_4de2b8;
        case 0x4de2bcu: goto label_4de2bc;
        case 0x4de2c0u: goto label_4de2c0;
        case 0x4de2c4u: goto label_4de2c4;
        case 0x4de2c8u: goto label_4de2c8;
        case 0x4de2ccu: goto label_4de2cc;
        case 0x4de2d0u: goto label_4de2d0;
        case 0x4de2d4u: goto label_4de2d4;
        case 0x4de2d8u: goto label_4de2d8;
        case 0x4de2dcu: goto label_4de2dc;
        case 0x4de2e0u: goto label_4de2e0;
        case 0x4de2e4u: goto label_4de2e4;
        case 0x4de2e8u: goto label_4de2e8;
        case 0x4de2ecu: goto label_4de2ec;
        case 0x4de2f0u: goto label_4de2f0;
        case 0x4de2f4u: goto label_4de2f4;
        case 0x4de2f8u: goto label_4de2f8;
        case 0x4de2fcu: goto label_4de2fc;
        case 0x4de300u: goto label_4de300;
        case 0x4de304u: goto label_4de304;
        case 0x4de308u: goto label_4de308;
        case 0x4de30cu: goto label_4de30c;
        default: break;
    }

    ctx->pc = 0x4de290u;

label_4de290:
    // 0x4de290: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4de290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4de294:
    // 0x4de294: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4de294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4de298:
    // 0x4de298: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4de298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4de29c:
    // 0x4de29c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4de29cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4de2a0:
    // 0x4de2a0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4de2a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4de2a4:
    // 0x4de2a4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4de2a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4de2a8:
    // 0x4de2a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4de2a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4de2ac:
    // 0x4de2ac: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_4de2b0:
    if (ctx->pc == 0x4DE2B0u) {
        ctx->pc = 0x4DE2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE2ACu;
        // 0x4de2b0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DE2B4u;
        goto label_4de2b4;
    }
    ctx->pc = 0x4DE2ACu;
    {
        const bool branch_taken_0x4de2ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DE2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE2ACu;
        // 0x4de2b0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4de2ac) {
            ctx->pc = 0x4DE2F4u;
            goto label_4de2f4;
        }
    }
    ctx->pc = 0x4DE2B4u;
label_4de2b4:
    // 0x4de2b4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4de2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4de2b8:
    // 0x4de2b8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4de2b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4de2bc:
    // 0x4de2bc: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x4de2bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_4de2c0:
    // 0x4de2c0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x4de2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_4de2c4:
    // 0x4de2c4: 0x60f809  jalr        $v1
label_4de2c8:
    if (ctx->pc == 0x4DE2C8u) {
        ctx->pc = 0x4DE2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE2C4u;
        // 0x4de2c8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DE2CCu;
        goto label_4de2cc;
    }
    ctx->pc = 0x4DE2C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4DE2CCu);
        ctx->pc = 0x4DE2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE2C4u;
        // 0x4de2c8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DE2C4u, 0x4DE2CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4DE2CCu;
label_4de2cc:
    // 0x4de2cc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4de2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4de2d0:
    // 0x4de2d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4de2d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4de2d4:
    // 0x4de2d4: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4de2d4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4de2d8:
    // 0x4de2d8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4de2d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4de2dc:
    // 0x4de2dc: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4de2dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4de2e0:
    // 0x4de2e0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4de2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4de2e4:
    // 0x4de2e4: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4de2e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4de2e8:
    // 0x4de2e8: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4de2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4de2ec:
    // 0x4de2ec: 0x60f809  jalr        $v1
label_4de2f0:
    if (ctx->pc == 0x4DE2F0u) {
        ctx->pc = 0x4DE2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE2ECu;
        // 0x4de2f0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DE2F4u;
        goto label_4de2f4;
    }
    ctx->pc = 0x4DE2ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4DE2F4u);
        ctx->pc = 0x4DE2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE2ECu;
        // 0x4de2f0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DE2ECu, 0x4DE2F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4DE2F4u;
label_4de2f4:
    // 0x4de2f4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4de2f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4de2f8:
    // 0x4de2f8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4de2f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4de2fc:
    // 0x4de2fc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4de2fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4de300:
    // 0x4de300: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4de300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4de304:
    // 0x4de304: 0x3e00008  jr          $ra
label_4de308:
    if (ctx->pc == 0x4DE308u) {
        ctx->pc = 0x4DE308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE304u;
        // 0x4de308: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DE30Cu;
        goto label_4de30c;
    }
    ctx->pc = 0x4DE304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DE308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE304u;
        // 0x4de308: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DE304u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DE30Cu;
label_4de30c:
    // 0x4de30c: 0x0  nop
    ctx->pc = 0x4de30cu;
    // NOP
    ctx->pc = 0x4de310u;
}
