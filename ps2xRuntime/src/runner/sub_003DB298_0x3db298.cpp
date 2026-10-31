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

// Function: sub_003DB298
// Address: 0x3db298 - 0x3db368
void sub_003DB298_0x3db298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DB298_0x3db298");
#endif

    switch (ctx->pc) {
        case 0x3db298u: goto label_3db298;
        case 0x3db29cu: goto label_3db29c;
        case 0x3db2a0u: goto label_3db2a0;
        case 0x3db2a4u: goto label_3db2a4;
        case 0x3db2a8u: goto label_3db2a8;
        case 0x3db2acu: goto label_3db2ac;
        case 0x3db2b0u: goto label_3db2b0;
        case 0x3db2b4u: goto label_3db2b4;
        case 0x3db2b8u: goto label_3db2b8;
        case 0x3db2bcu: goto label_3db2bc;
        case 0x3db2c0u: goto label_3db2c0;
        case 0x3db2c4u: goto label_3db2c4;
        case 0x3db2c8u: goto label_3db2c8;
        case 0x3db2ccu: goto label_3db2cc;
        case 0x3db2d0u: goto label_3db2d0;
        case 0x3db2d4u: goto label_3db2d4;
        case 0x3db2d8u: goto label_3db2d8;
        case 0x3db2dcu: goto label_3db2dc;
        case 0x3db2e0u: goto label_3db2e0;
        case 0x3db2e4u: goto label_3db2e4;
        case 0x3db2e8u: goto label_3db2e8;
        case 0x3db2ecu: goto label_3db2ec;
        case 0x3db2f0u: goto label_3db2f0;
        case 0x3db2f4u: goto label_3db2f4;
        case 0x3db2f8u: goto label_3db2f8;
        case 0x3db2fcu: goto label_3db2fc;
        case 0x3db300u: goto label_3db300;
        case 0x3db304u: goto label_3db304;
        case 0x3db308u: goto label_3db308;
        case 0x3db30cu: goto label_3db30c;
        case 0x3db310u: goto label_3db310;
        case 0x3db314u: goto label_3db314;
        case 0x3db318u: goto label_3db318;
        case 0x3db31cu: goto label_3db31c;
        case 0x3db320u: goto label_3db320;
        case 0x3db324u: goto label_3db324;
        case 0x3db328u: goto label_3db328;
        case 0x3db32cu: goto label_3db32c;
        case 0x3db330u: goto label_3db330;
        case 0x3db334u: goto label_3db334;
        case 0x3db338u: goto label_3db338;
        case 0x3db33cu: goto label_3db33c;
        case 0x3db340u: goto label_3db340;
        case 0x3db344u: goto label_3db344;
        case 0x3db348u: goto label_3db348;
        case 0x3db34cu: goto label_3db34c;
        case 0x3db350u: goto label_3db350;
        case 0x3db354u: goto label_3db354;
        case 0x3db358u: goto label_3db358;
        case 0x3db35cu: goto label_3db35c;
        case 0x3db360u: goto label_3db360;
        case 0x3db364u: goto label_3db364;
        default: break;
    }

    ctx->pc = 0x3db298u;

label_3db298:
    // 0x3db298: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3db298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3db29c:
    // 0x3db29c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3db29cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_3db2a0:
    // 0x3db2a0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3db2a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_3db2a4:
    // 0x3db2a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3db2a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3db2a8:
    // 0x3db2a8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3db2a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_3db2ac:
    // 0x3db2ac: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3db2acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3db2b0:
    // 0x3db2b0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3db2b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3db2b4:
    // 0x3db2b4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3db2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3db2b8:
    // 0x3db2b8: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3db2b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3db2bc:
    // 0x3db2bc: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3db2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3db2c0:
    // 0x3db2c0: 0x40f809  jalr        $v0
label_3db2c4:
    if (ctx->pc == 0x3DB2C4u) {
        ctx->pc = 0x3DB2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB2C0u;
        // 0x3db2c4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DB2C8u;
        goto label_3db2c8;
    }
    ctx->pc = 0x3DB2C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3DB2C8u);
        ctx->pc = 0x3DB2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB2C0u;
        // 0x3db2c4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DB2C0u, 0x3DB2C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DB2C8u;
label_3db2c8:
    // 0x3db2c8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3db2c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3db2cc:
    // 0x3db2cc: 0x240500f0  addiu       $a1, $zero, 0xF0
    ctx->pc = 0x3db2ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
label_3db2d0:
    // 0x3db2d0: 0xc0e858c  jal         func_3A1630
label_3db2d4:
    if (ctx->pc == 0x3DB2D4u) {
        ctx->pc = 0x3DB2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB2D0u;
        // 0x3db2d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DB2D8u;
        goto label_3db2d8;
    }
    ctx->pc = 0x3DB2D0u;
    SET_GPR_U32(ctx, 31, 0x3DB2D8u);
    ctx->pc = 0x3DB2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB2D0u;
    // 0x3db2d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3DB2D0u, 0x3DB2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB2D8u;
label_3db2d8:
    // 0x3db2d8: 0xae0000bc  sw          $zero, 0xBC($s0)
    ctx->pc = 0x3db2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 0));
label_3db2dc:
    // 0x3db2dc: 0xc0ea14c  jal         func_3A8530
label_3db2e0:
    if (ctx->pc == 0x3DB2E0u) {
        ctx->pc = 0x3DB2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB2DCu;
        // 0x3db2e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DB2E4u;
        goto label_3db2e4;
    }
    ctx->pc = 0x3DB2DCu;
    SET_GPR_U32(ctx, 31, 0x3DB2E4u);
    ctx->pc = 0x3DB2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB2DCu;
    // 0x3db2e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3DB2DCu, 0x3DB2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB2E4u;
label_3db2e4:
    // 0x3db2e4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3db2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3db2e8:
    // 0x3db2e8: 0xc0ea12a  jal         func_3A84A8
label_3db2ec:
    if (ctx->pc == 0x3DB2ECu) {
        ctx->pc = 0x3DB2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB2E8u;
        // 0x3db2ec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DB2F0u;
        goto label_3db2f0;
    }
    ctx->pc = 0x3DB2E8u;
    SET_GPR_U32(ctx, 31, 0x3DB2F0u);
    ctx->pc = 0x3DB2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB2E8u;
    // 0x3db2ec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3DB2E8u, 0x3DB2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB2F0u;
label_3db2f0:
    // 0x3db2f0: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3db2f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3db2f4:
    // 0x3db2f4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3db2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3db2f8:
    // 0x3db2f8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3db2f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3db2fc:
    // 0x3db2fc: 0xc0ea12a  jal         func_3A84A8
label_3db300:
    if (ctx->pc == 0x3DB300u) {
        ctx->pc = 0x3DB300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB2FCu;
        // 0x3db300: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DB304u;
        goto label_3db304;
    }
    ctx->pc = 0x3DB2FCu;
    SET_GPR_U32(ctx, 31, 0x3DB304u);
    ctx->pc = 0x3DB300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB2FCu;
    // 0x3db300: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3DB2FCu, 0x3DB304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB304u;
label_3db304:
    // 0x3db304: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3db304u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3db308:
    // 0x3db308: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3db308u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_3db30c:
    // 0x3db30c: 0x246316c0  addiu       $v1, $v1, 0x16C0
    ctx->pc = 0x3db30cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5824));
label_3db310:
    // 0x3db310: 0x8e070054  lw          $a3, 0x54($s0)
    ctx->pc = 0x3db310u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_3db314:
    // 0x3db314: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x3db314u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
label_3db318:
    // 0x3db318: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x3db318u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_3db31c:
    // 0x3db31c: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x3db31cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_3db320:
    // 0x3db320: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3db320u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3db324:
    // 0x3db324: 0x34840036  ori         $a0, $a0, 0x36
    ctx->pc = 0x3db324u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54);
label_3db328:
    // 0x3db328: 0x78680000  lq          $t0, 0x0($v1)
    ctx->pc = 0x3db328u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_3db32c:
    // 0x3db32c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3db32cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3db330:
    // 0x3db330: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3db330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3db334:
    // 0x3db334: 0x24060023  addiu       $a2, $zero, 0x23
    ctx->pc = 0x3db334u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_3db338:
    // 0x3db338: 0x7e080030  sq          $t0, 0x30($s0)
    ctx->pc = 0x3db338u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 8));
label_3db33c:
    // 0x3db33c: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x3db33cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_3db340:
    // 0x3db340: 0xc0e93a2  jal         func_3A4E88
label_3db344:
    if (ctx->pc == 0x3DB344u) {
        ctx->pc = 0x3DB344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB340u;
        // 0x3db344: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DB348u;
        goto label_3db348;
    }
    ctx->pc = 0x3DB340u;
    SET_GPR_U32(ctx, 31, 0x3DB348u);
    ctx->pc = 0x3DB344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB340u;
    // 0x3db344: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4E88u, 0x3DB340u, 0x3DB348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB348u;
label_3db348:
    // 0x3db348: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x3db348u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_3db34c:
    // 0x3db34c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3db34cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3db350:
    // 0x3db350: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3db350u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3db354:
    // 0x3db354: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3db354u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3db358:
    // 0x3db358: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3db358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3db35c:
    // 0x3db35c: 0x3e00008  jr          $ra
label_3db360:
    if (ctx->pc == 0x3DB360u) {
        ctx->pc = 0x3DB360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB35Cu;
        // 0x3db360: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DB364u;
        goto label_3db364;
    }
    ctx->pc = 0x3DB35Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DB360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB35Cu;
        // 0x3db360: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DB35Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DB364u;
label_3db364:
    // 0x3db364: 0x0  nop
    ctx->pc = 0x3db364u;
    // NOP
    ctx->pc = 0x3db368u;
}
