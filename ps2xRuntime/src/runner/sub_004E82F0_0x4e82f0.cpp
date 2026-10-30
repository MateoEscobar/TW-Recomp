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

// Function: sub_004E82F0
// Address: 0x4e82f0 - 0x4e8370
void sub_004E82F0_0x4e82f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E82F0_0x4e82f0");
#endif

    switch (ctx->pc) {
        case 0x4e82f0u: goto label_4e82f0;
        case 0x4e82f4u: goto label_4e82f4;
        case 0x4e82f8u: goto label_4e82f8;
        case 0x4e82fcu: goto label_4e82fc;
        case 0x4e8300u: goto label_4e8300;
        case 0x4e8304u: goto label_4e8304;
        case 0x4e8308u: goto label_4e8308;
        case 0x4e830cu: goto label_4e830c;
        case 0x4e8310u: goto label_4e8310;
        case 0x4e8314u: goto label_4e8314;
        case 0x4e8318u: goto label_4e8318;
        case 0x4e831cu: goto label_4e831c;
        case 0x4e8320u: goto label_4e8320;
        case 0x4e8324u: goto label_4e8324;
        case 0x4e8328u: goto label_4e8328;
        case 0x4e832cu: goto label_4e832c;
        case 0x4e8330u: goto label_4e8330;
        case 0x4e8334u: goto label_4e8334;
        case 0x4e8338u: goto label_4e8338;
        case 0x4e833cu: goto label_4e833c;
        case 0x4e8340u: goto label_4e8340;
        case 0x4e8344u: goto label_4e8344;
        case 0x4e8348u: goto label_4e8348;
        case 0x4e834cu: goto label_4e834c;
        case 0x4e8350u: goto label_4e8350;
        case 0x4e8354u: goto label_4e8354;
        case 0x4e8358u: goto label_4e8358;
        case 0x4e835cu: goto label_4e835c;
        case 0x4e8360u: goto label_4e8360;
        case 0x4e8364u: goto label_4e8364;
        case 0x4e8368u: goto label_4e8368;
        case 0x4e836cu: goto label_4e836c;
        default: break;
    }

    ctx->pc = 0x4e82f0u;

label_4e82f0:
    // 0x4e82f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4e82f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4e82f4:
    // 0x4e82f4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4e82f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4e82f8:
    // 0x4e82f8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4e82f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4e82fc:
    // 0x4e82fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4e82fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e8300:
    // 0x4e8300: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4e8300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4e8304:
    // 0x4e8304: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4e8304u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4e8308:
    // 0x4e8308: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e8308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4e830c:
    // 0x4e830c: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_4e8310:
    if (ctx->pc == 0x4E8310u) {
        ctx->pc = 0x4E8310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E830Cu;
        // 0x4e8310: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E8314u;
        goto label_4e8314;
    }
    ctx->pc = 0x4E830Cu;
    {
        const bool branch_taken_0x4e830c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E8310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E830Cu;
        // 0x4e8310: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e830c) {
            ctx->pc = 0x4E8354u;
            goto label_4e8354;
        }
    }
    ctx->pc = 0x4E8314u;
label_4e8314:
    // 0x4e8314: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4e8314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4e8318:
    // 0x4e8318: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4e8318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4e831c:
    // 0x4e831c: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x4e831cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_4e8320:
    // 0x4e8320: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x4e8320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_4e8324:
    // 0x4e8324: 0x60f809  jalr        $v1
label_4e8328:
    if (ctx->pc == 0x4E8328u) {
        ctx->pc = 0x4E8328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8324u;
        // 0x4e8328: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E832Cu;
        goto label_4e832c;
    }
    ctx->pc = 0x4E8324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E832Cu);
        ctx->pc = 0x4E8328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8324u;
        // 0x4e8328: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E8324u, 0x4E832Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E832Cu;
label_4e832c:
    // 0x4e832c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4e832cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4e8330:
    // 0x4e8330: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4e8330u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e8334:
    // 0x4e8334: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4e8334u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4e8338:
    // 0x4e8338: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4e8338u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4e833c:
    // 0x4e833c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4e833cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4e8340:
    // 0x4e8340: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4e8340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4e8344:
    // 0x4e8344: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4e8344u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4e8348:
    // 0x4e8348: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4e8348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4e834c:
    // 0x4e834c: 0x60f809  jalr        $v1
label_4e8350:
    if (ctx->pc == 0x4E8350u) {
        ctx->pc = 0x4E8350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E834Cu;
        // 0x4e8350: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E8354u;
        goto label_4e8354;
    }
    ctx->pc = 0x4E834Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E8354u);
        ctx->pc = 0x4E8350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E834Cu;
        // 0x4e8350: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E834Cu, 0x4E8354u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E8354u;
label_4e8354:
    // 0x4e8354: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4e8354u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e8358:
    // 0x4e8358: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4e8358u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e835c:
    // 0x4e835c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4e835cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e8360:
    // 0x4e8360: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e8360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4e8364:
    // 0x4e8364: 0x3e00008  jr          $ra
label_4e8368:
    if (ctx->pc == 0x4E8368u) {
        ctx->pc = 0x4E8368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8364u;
        // 0x4e8368: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E836Cu;
        goto label_4e836c;
    }
    ctx->pc = 0x4E8364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E8368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8364u;
        // 0x4e8368: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E8364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E836Cu;
label_4e836c:
    // 0x4e836c: 0x0  nop
    ctx->pc = 0x4e836cu;
    // NOP
    ctx->pc = 0x4e8370u;
}
