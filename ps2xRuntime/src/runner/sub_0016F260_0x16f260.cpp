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

// Function: sub_0016F260
// Address: 0x16f260 - 0x16f368
void sub_0016F260_0x16f260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016F260_0x16f260");
#endif

    switch (ctx->pc) {
        case 0x16f260u: goto label_16f260;
        case 0x16f264u: goto label_16f264;
        case 0x16f268u: goto label_16f268;
        case 0x16f26cu: goto label_16f26c;
        case 0x16f270u: goto label_16f270;
        case 0x16f274u: goto label_16f274;
        case 0x16f278u: goto label_16f278;
        case 0x16f27cu: goto label_16f27c;
        case 0x16f280u: goto label_16f280;
        case 0x16f284u: goto label_16f284;
        case 0x16f288u: goto label_16f288;
        case 0x16f28cu: goto label_16f28c;
        case 0x16f290u: goto label_16f290;
        case 0x16f294u: goto label_16f294;
        case 0x16f298u: goto label_16f298;
        case 0x16f29cu: goto label_16f29c;
        case 0x16f2a0u: goto label_16f2a0;
        case 0x16f2a4u: goto label_16f2a4;
        case 0x16f2a8u: goto label_16f2a8;
        case 0x16f2acu: goto label_16f2ac;
        case 0x16f2b0u: goto label_16f2b0;
        case 0x16f2b4u: goto label_16f2b4;
        case 0x16f2b8u: goto label_16f2b8;
        case 0x16f2bcu: goto label_16f2bc;
        case 0x16f2c0u: goto label_16f2c0;
        case 0x16f2c4u: goto label_16f2c4;
        case 0x16f2c8u: goto label_16f2c8;
        case 0x16f2ccu: goto label_16f2cc;
        case 0x16f2d0u: goto label_16f2d0;
        case 0x16f2d4u: goto label_16f2d4;
        case 0x16f2d8u: goto label_16f2d8;
        case 0x16f2dcu: goto label_16f2dc;
        case 0x16f2e0u: goto label_16f2e0;
        case 0x16f2e4u: goto label_16f2e4;
        case 0x16f2e8u: goto label_16f2e8;
        case 0x16f2ecu: goto label_16f2ec;
        case 0x16f2f0u: goto label_16f2f0;
        case 0x16f2f4u: goto label_16f2f4;
        case 0x16f2f8u: goto label_16f2f8;
        case 0x16f2fcu: goto label_16f2fc;
        case 0x16f300u: goto label_16f300;
        case 0x16f304u: goto label_16f304;
        case 0x16f308u: goto label_16f308;
        case 0x16f30cu: goto label_16f30c;
        case 0x16f310u: goto label_16f310;
        case 0x16f314u: goto label_16f314;
        case 0x16f318u: goto label_16f318;
        case 0x16f31cu: goto label_16f31c;
        case 0x16f320u: goto label_16f320;
        case 0x16f324u: goto label_16f324;
        case 0x16f328u: goto label_16f328;
        case 0x16f32cu: goto label_16f32c;
        case 0x16f330u: goto label_16f330;
        case 0x16f334u: goto label_16f334;
        case 0x16f338u: goto label_16f338;
        case 0x16f33cu: goto label_16f33c;
        case 0x16f340u: goto label_16f340;
        case 0x16f344u: goto label_16f344;
        case 0x16f348u: goto label_16f348;
        case 0x16f34cu: goto label_16f34c;
        case 0x16f350u: goto label_16f350;
        case 0x16f354u: goto label_16f354;
        case 0x16f358u: goto label_16f358;
        case 0x16f35cu: goto label_16f35c;
        case 0x16f360u: goto label_16f360;
        case 0x16f364u: goto label_16f364;
        default: break;
    }

    ctx->pc = 0x16f260u;

label_16f260:
    // 0x16f260: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x16f260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
label_16f264:
    // 0x16f264: 0x7fb10170  sq          $s1, 0x170($sp)
    ctx->pc = 0x16f264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 17));
label_16f268:
    // 0x16f268: 0x7fb20160  sq          $s2, 0x160($sp)
    ctx->pc = 0x16f268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 18));
label_16f26c:
    // 0x16f26c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16f26cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16f270:
    // 0x16f270: 0x7fb30150  sq          $s3, 0x150($sp)
    ctx->pc = 0x16f270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 19));
label_16f274:
    // 0x16f274: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x16f274u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_16f278:
    // 0x16f278: 0x7fb40140  sq          $s4, 0x140($sp)
    ctx->pc = 0x16f278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 20));
label_16f27c:
    // 0x16f27c: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x16f27cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_16f280:
    // 0x16f280: 0x7fb00180  sq          $s0, 0x180($sp)
    ctx->pc = 0x16f280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 16));
label_16f284:
    // 0x16f284: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x16f284u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_16f288:
    // 0x16f288: 0xffbf0130  sd          $ra, 0x130($sp)
    ctx->pc = 0x16f288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 31));
label_16f28c:
    // 0x16f28c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x16f28cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_16f290:
    // 0x16f290: 0xc050fda  jal         func_143F68
label_16f294:
    if (ctx->pc == 0x16F294u) {
        ctx->pc = 0x16F294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F290u;
        // 0x16f294: 0x248491e0  addiu       $a0, $a0, -0x6E20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F298u;
        goto label_16f298;
    }
    ctx->pc = 0x16F290u;
    SET_GPR_U32(ctx, 31, 0x16F298u);
    ctx->pc = 0x16F294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F290u;
    // 0x16f294: 0x248491e0  addiu       $a0, $a0, -0x6E20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x16F290u, 0x16F298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F298u;
label_16f298:
    // 0x16f298: 0x26300050  addiu       $s0, $s1, 0x50
    ctx->pc = 0x16f298u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_16f29c:
    // 0x16f29c: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x16f29cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
label_16f2a0:
    // 0x16f2a0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x16f2a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_16f2a4:
    // 0x16f2a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16f2a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16f2a8:
    // 0x16f2a8: 0xc137950  jal         func_4DE540
label_16f2ac:
    if (ctx->pc == 0x16F2ACu) {
        ctx->pc = 0x16F2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F2A8u;
        // 0x16f2ac: 0x27a60120  addiu       $a2, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F2B0u;
        goto label_16f2b0;
    }
    ctx->pc = 0x16F2A8u;
    SET_GPR_U32(ctx, 31, 0x16F2B0u);
    ctx->pc = 0x16F2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F2A8u;
    // 0x16f2ac: 0x27a60120  addiu       $a2, $sp, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE540u, 0x16F2A8u, 0x16F2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F2B0u;
label_16f2b0:
    // 0x16f2b0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x16f2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_16f2b4:
    // 0x16f2b4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x16f2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_16f2b8:
    // 0x16f2b8: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
label_16f2bc:
    if (ctx->pc == 0x16F2BCu) {
        ctx->pc = 0x16F2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F2B8u;
        // 0x16f2bc: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F2C0u;
        goto label_16f2c0;
    }
    ctx->pc = 0x16F2B8u;
    {
        const bool branch_taken_0x16f2b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x16F2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F2B8u;
        // 0x16f2bc: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f2b8) {
            ctx->pc = 0x16F2E8u;
            goto label_16f2e8;
        }
    }
    ctx->pc = 0x16F2C0u;
label_16f2c0:
    // 0x16f2c0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x16f2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_16f2c4:
    // 0x16f2c4: 0x8c700014  lw          $s0, 0x14($v1)
    ctx->pc = 0x16f2c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_16f2c8:
    // 0x16f2c8: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x16f2c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_16f2cc:
    // 0x16f2cc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x16f2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_16f2d0:
    // 0x16f2d0: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x16f2d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_16f2d4:
    // 0x16f2d4: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x16f2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_16f2d8:
    // 0x16f2d8: 0x40f809  jalr        $v0
label_16f2dc:
    if (ctx->pc == 0x16F2DCu) {
        ctx->pc = 0x16F2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F2D8u;
        // 0x16f2dc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F2E0u;
        goto label_16f2e0;
    }
    ctx->pc = 0x16F2D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16F2E0u);
        ctx->pc = 0x16F2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F2D8u;
        // 0x16f2dc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F2D8u, 0x16F2E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16F2E0u;
label_16f2e0:
    // 0x16f2e0: 0x10000017  b           . + 4 + (0x17 << 2)
label_16f2e4:
    if (ctx->pc == 0x16F2E4u) {
        ctx->pc = 0x16F2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F2E0u;
        // 0x16f2e4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F2E8u;
        goto label_16f2e8;
    }
    ctx->pc = 0x16F2E0u;
    {
        const bool branch_taken_0x16f2e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F2E0u;
        // 0x16f2e4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f2e0) {
            ctx->pc = 0x16F340u;
            goto label_16f340;
        }
    }
    ctx->pc = 0x16F2E8u;
label_16f2e8:
    // 0x16f2e8: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x16f2e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_16f2ec:
    // 0x16f2ec: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x16f2ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_16f2f0:
    // 0x16f2f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16f2f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16f2f4:
    // 0x16f2f4: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x16f2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_16f2f8:
    // 0x16f2f8: 0x24c61960  addiu       $a2, $a2, 0x1960
    ctx->pc = 0x16f2f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6496));
label_16f2fc:
    // 0x16f2fc: 0xc10ca04  jal         func_432810
label_16f300:
    if (ctx->pc == 0x16F300u) {
        ctx->pc = 0x16F300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F2FCu;
        // 0x16f300: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F304u;
        goto label_16f304;
    }
    ctx->pc = 0x16F2FCu;
    SET_GPR_U32(ctx, 31, 0x16F304u);
    ctx->pc = 0x16F300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F2FCu;
    // 0x16f300: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x16F2FCu, 0x16F304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F304u;
label_16f304:
    // 0x16f304: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16f304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16f308:
    // 0x16f308: 0xc061668  jal         func_1859A0
label_16f30c:
    if (ctx->pc == 0x16F30Cu) {
        ctx->pc = 0x16F30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F308u;
        // 0x16f30c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F310u;
        goto label_16f310;
    }
    ctx->pc = 0x16F308u;
    SET_GPR_U32(ctx, 31, 0x16F310u);
    ctx->pc = 0x16F30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F308u;
    // 0x16f30c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1859A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1859A0u, 0x16F308u, 0x16F310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F310u;
label_16f310:
    // 0x16f310: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_16f314:
    if (ctx->pc == 0x16F314u) {
        ctx->pc = 0x16F314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F310u;
        // 0x16f314: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F318u;
        goto label_16f318;
    }
    ctx->pc = 0x16F310u;
    {
        const bool branch_taken_0x16f310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16F314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F310u;
        // 0x16f314: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f310) {
            ctx->pc = 0x16F334u;
            goto label_16f334;
        }
    }
    ctx->pc = 0x16F318u;
label_16f318:
    // 0x16f318: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16f318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16f31c:
    // 0x16f31c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x16f31cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16f320:
    // 0x16f320: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x16f320u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_16f324:
    // 0x16f324: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x16f324u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_16f328:
    // 0x16f328: 0xc061eaa  jal         func_187AA8
label_16f32c:
    if (ctx->pc == 0x16F32Cu) {
        ctx->pc = 0x16F32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F328u;
        // 0x16f32c: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F330u;
        goto label_16f330;
    }
    ctx->pc = 0x16F328u;
    SET_GPR_U32(ctx, 31, 0x16F330u);
    ctx->pc = 0x16F32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F328u;
    // 0x16f32c: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187AA8u, 0x16F328u, 0x16F330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F330u;
label_16f330:
    // 0x16f330: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x16f330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_16f334:
    // 0x16f334: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16f334u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16f338:
    // 0x16f338: 0xc0552b8  jal         func_154AE0
label_16f33c:
    if (ctx->pc == 0x16F33Cu) {
        ctx->pc = 0x16F33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F338u;
        // 0x16f33c: 0x8c445340  lw          $a0, 0x5340($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F340u;
        goto label_16f340;
    }
    ctx->pc = 0x16F338u;
    SET_GPR_U32(ctx, 31, 0x16F340u);
    ctx->pc = 0x16F33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F338u;
    // 0x16f33c: 0x8c445340  lw          $a0, 0x5340($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21312)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154AE0u, 0x16F338u, 0x16F340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F340u;
label_16f340:
    // 0x16f340: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16f340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16f344:
    // 0x16f344: 0x7bb00180  lq          $s0, 0x180($sp)
    ctx->pc = 0x16f344u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_16f348:
    // 0x16f348: 0x7bb10170  lq          $s1, 0x170($sp)
    ctx->pc = 0x16f348u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_16f34c:
    // 0x16f34c: 0x7bb20160  lq          $s2, 0x160($sp)
    ctx->pc = 0x16f34cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_16f350:
    // 0x16f350: 0x7bb30150  lq          $s3, 0x150($sp)
    ctx->pc = 0x16f350u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_16f354:
    // 0x16f354: 0x7bb40140  lq          $s4, 0x140($sp)
    ctx->pc = 0x16f354u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_16f358:
    // 0x16f358: 0xdfbf0130  ld          $ra, 0x130($sp)
    ctx->pc = 0x16f358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
label_16f35c:
    // 0x16f35c: 0x3e00008  jr          $ra
label_16f360:
    if (ctx->pc == 0x16F360u) {
        ctx->pc = 0x16F360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F35Cu;
        // 0x16f360: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F364u;
        goto label_16f364;
    }
    ctx->pc = 0x16F35Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F35Cu;
        // 0x16f360: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F35Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16F364u;
label_16f364:
    // 0x16f364: 0x0  nop
    ctx->pc = 0x16f364u;
    // NOP
    ctx->pc = 0x16f368u;
}
