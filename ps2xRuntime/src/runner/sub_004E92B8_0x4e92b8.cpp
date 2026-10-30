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

// Function: sub_004E92B8
// Address: 0x4e92b8 - 0x4e9338
void sub_004E92B8_0x4e92b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E92B8_0x4e92b8");
#endif

    switch (ctx->pc) {
        case 0x4e92b8u: goto label_4e92b8;
        case 0x4e92bcu: goto label_4e92bc;
        case 0x4e92c0u: goto label_4e92c0;
        case 0x4e92c4u: goto label_4e92c4;
        case 0x4e92c8u: goto label_4e92c8;
        case 0x4e92ccu: goto label_4e92cc;
        case 0x4e92d0u: goto label_4e92d0;
        case 0x4e92d4u: goto label_4e92d4;
        case 0x4e92d8u: goto label_4e92d8;
        case 0x4e92dcu: goto label_4e92dc;
        case 0x4e92e0u: goto label_4e92e0;
        case 0x4e92e4u: goto label_4e92e4;
        case 0x4e92e8u: goto label_4e92e8;
        case 0x4e92ecu: goto label_4e92ec;
        case 0x4e92f0u: goto label_4e92f0;
        case 0x4e92f4u: goto label_4e92f4;
        case 0x4e92f8u: goto label_4e92f8;
        case 0x4e92fcu: goto label_4e92fc;
        case 0x4e9300u: goto label_4e9300;
        case 0x4e9304u: goto label_4e9304;
        case 0x4e9308u: goto label_4e9308;
        case 0x4e930cu: goto label_4e930c;
        case 0x4e9310u: goto label_4e9310;
        case 0x4e9314u: goto label_4e9314;
        case 0x4e9318u: goto label_4e9318;
        case 0x4e931cu: goto label_4e931c;
        case 0x4e9320u: goto label_4e9320;
        case 0x4e9324u: goto label_4e9324;
        case 0x4e9328u: goto label_4e9328;
        case 0x4e932cu: goto label_4e932c;
        case 0x4e9330u: goto label_4e9330;
        case 0x4e9334u: goto label_4e9334;
        default: break;
    }

    ctx->pc = 0x4e92b8u;

label_4e92b8:
    // 0x4e92b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4e92b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4e92bc:
    // 0x4e92bc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4e92bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4e92c0:
    // 0x4e92c0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4e92c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4e92c4:
    // 0x4e92c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4e92c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e92c8:
    // 0x4e92c8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4e92c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4e92cc:
    // 0x4e92cc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4e92ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4e92d0:
    // 0x4e92d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e92d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4e92d4:
    // 0x4e92d4: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_4e92d8:
    if (ctx->pc == 0x4E92D8u) {
        ctx->pc = 0x4E92D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E92D4u;
        // 0x4e92d8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E92DCu;
        goto label_4e92dc;
    }
    ctx->pc = 0x4E92D4u;
    {
        const bool branch_taken_0x4e92d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E92D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E92D4u;
        // 0x4e92d8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e92d4) {
            ctx->pc = 0x4E931Cu;
            goto label_4e931c;
        }
    }
    ctx->pc = 0x4E92DCu;
label_4e92dc:
    // 0x4e92dc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4e92dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4e92e0:
    // 0x4e92e0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4e92e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4e92e4:
    // 0x4e92e4: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x4e92e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_4e92e8:
    // 0x4e92e8: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x4e92e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_4e92ec:
    // 0x4e92ec: 0x60f809  jalr        $v1
label_4e92f0:
    if (ctx->pc == 0x4E92F0u) {
        ctx->pc = 0x4E92F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E92ECu;
        // 0x4e92f0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E92F4u;
        goto label_4e92f4;
    }
    ctx->pc = 0x4E92ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E92F4u);
        ctx->pc = 0x4E92F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E92ECu;
        // 0x4e92f0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E92ECu, 0x4E92F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E92F4u;
label_4e92f4:
    // 0x4e92f4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4e92f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4e92f8:
    // 0x4e92f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4e92f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e92fc:
    // 0x4e92fc: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4e92fcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4e9300:
    // 0x4e9300: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4e9300u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4e9304:
    // 0x4e9304: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4e9304u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4e9308:
    // 0x4e9308: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4e9308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4e930c:
    // 0x4e930c: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4e930cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4e9310:
    // 0x4e9310: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4e9310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4e9314:
    // 0x4e9314: 0x60f809  jalr        $v1
label_4e9318:
    if (ctx->pc == 0x4E9318u) {
        ctx->pc = 0x4E9318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9314u;
        // 0x4e9318: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E931Cu;
        goto label_4e931c;
    }
    ctx->pc = 0x4E9314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E931Cu);
        ctx->pc = 0x4E9318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9314u;
        // 0x4e9318: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E9314u, 0x4E931Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E931Cu;
label_4e931c:
    // 0x4e931c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4e931cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e9320:
    // 0x4e9320: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4e9320u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e9324:
    // 0x4e9324: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4e9324u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e9328:
    // 0x4e9328: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e9328u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4e932c:
    // 0x4e932c: 0x3e00008  jr          $ra
label_4e9330:
    if (ctx->pc == 0x4E9330u) {
        ctx->pc = 0x4E9330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E932Cu;
        // 0x4e9330: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E9334u;
        goto label_4e9334;
    }
    ctx->pc = 0x4E932Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E9330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E932Cu;
        // 0x4e9330: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E932Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E9334u;
label_4e9334:
    // 0x4e9334: 0x0  nop
    ctx->pc = 0x4e9334u;
    // NOP
    ctx->pc = 0x4e9338u;
}
