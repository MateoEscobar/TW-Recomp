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

// Function: sub_00238288
// Address: 0x238288 - 0x2383a0
void sub_00238288_0x238288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00238288_0x238288");
#endif

    switch (ctx->pc) {
        case 0x238288u: goto label_238288;
        case 0x23828cu: goto label_23828c;
        case 0x238290u: goto label_238290;
        case 0x238294u: goto label_238294;
        case 0x238298u: goto label_238298;
        case 0x23829cu: goto label_23829c;
        case 0x2382a0u: goto label_2382a0;
        case 0x2382a4u: goto label_2382a4;
        case 0x2382a8u: goto label_2382a8;
        case 0x2382acu: goto label_2382ac;
        case 0x2382b0u: goto label_2382b0;
        case 0x2382b4u: goto label_2382b4;
        case 0x2382b8u: goto label_2382b8;
        case 0x2382bcu: goto label_2382bc;
        case 0x2382c0u: goto label_2382c0;
        case 0x2382c4u: goto label_2382c4;
        case 0x2382c8u: goto label_2382c8;
        case 0x2382ccu: goto label_2382cc;
        case 0x2382d0u: goto label_2382d0;
        case 0x2382d4u: goto label_2382d4;
        case 0x2382d8u: goto label_2382d8;
        case 0x2382dcu: goto label_2382dc;
        case 0x2382e0u: goto label_2382e0;
        case 0x2382e4u: goto label_2382e4;
        case 0x2382e8u: goto label_2382e8;
        case 0x2382ecu: goto label_2382ec;
        case 0x2382f0u: goto label_2382f0;
        case 0x2382f4u: goto label_2382f4;
        case 0x2382f8u: goto label_2382f8;
        case 0x2382fcu: goto label_2382fc;
        case 0x238300u: goto label_238300;
        case 0x238304u: goto label_238304;
        case 0x238308u: goto label_238308;
        case 0x23830cu: goto label_23830c;
        case 0x238310u: goto label_238310;
        case 0x238314u: goto label_238314;
        case 0x238318u: goto label_238318;
        case 0x23831cu: goto label_23831c;
        case 0x238320u: goto label_238320;
        case 0x238324u: goto label_238324;
        case 0x238328u: goto label_238328;
        case 0x23832cu: goto label_23832c;
        case 0x238330u: goto label_238330;
        case 0x238334u: goto label_238334;
        case 0x238338u: goto label_238338;
        case 0x23833cu: goto label_23833c;
        case 0x238340u: goto label_238340;
        case 0x238344u: goto label_238344;
        case 0x238348u: goto label_238348;
        case 0x23834cu: goto label_23834c;
        case 0x238350u: goto label_238350;
        case 0x238354u: goto label_238354;
        case 0x238358u: goto label_238358;
        case 0x23835cu: goto label_23835c;
        case 0x238360u: goto label_238360;
        case 0x238364u: goto label_238364;
        case 0x238368u: goto label_238368;
        case 0x23836cu: goto label_23836c;
        case 0x238370u: goto label_238370;
        case 0x238374u: goto label_238374;
        case 0x238378u: goto label_238378;
        case 0x23837cu: goto label_23837c;
        case 0x238380u: goto label_238380;
        case 0x238384u: goto label_238384;
        case 0x238388u: goto label_238388;
        case 0x23838cu: goto label_23838c;
        case 0x238390u: goto label_238390;
        case 0x238394u: goto label_238394;
        case 0x238398u: goto label_238398;
        case 0x23839cu: goto label_23839c;
        default: break;
    }

    ctx->pc = 0x238288u;

label_238288:
    // 0x238288: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x238288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_23828c:
    // 0x23828c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x23828cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_238290:
    // 0x238290: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x238290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_238294:
    // 0x238294: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x238294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_238298:
    // 0x238298: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x238298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_23829c:
    // 0x23829c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x23829cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_2382a0:
    // 0x2382a0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2382a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2382a4:
    // 0x2382a4: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x2382a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_2382a8:
    // 0x2382a8: 0xc0e4060  jal         func_390180
label_2382ac:
    if (ctx->pc == 0x2382ACu) {
        ctx->pc = 0x2382ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2382A8u;
        // 0x2382ac: 0xafa50024  sw          $a1, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2382B0u;
        goto label_2382b0;
    }
    ctx->pc = 0x2382A8u;
    SET_GPR_U32(ctx, 31, 0x2382B0u);
    ctx->pc = 0x2382ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2382A8u;
    // 0x2382ac: 0xafa50024  sw          $a1, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2382A8u, 0x2382B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2382B0u;
label_2382b0:
    // 0x2382b0: 0xc08a61a  jal         func_229868
label_2382b4:
    if (ctx->pc == 0x2382B4u) {
        ctx->pc = 0x2382B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2382B0u;
        // 0x2382b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2382B8u;
        goto label_2382b8;
    }
    ctx->pc = 0x2382B0u;
    SET_GPR_U32(ctx, 31, 0x2382B8u);
    ctx->pc = 0x2382B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2382B0u;
    // 0x2382b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2382B0u, 0x2382B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2382B8u;
label_2382b8:
    // 0x2382b8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2382b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2382bc:
    // 0x2382bc: 0x12200030  beqz        $s1, . + 4 + (0x30 << 2)
label_2382c0:
    if (ctx->pc == 0x2382C0u) {
        ctx->pc = 0x2382C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2382BCu;
        // 0x2382c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2382C4u;
        goto label_2382c4;
    }
    ctx->pc = 0x2382BCu;
    {
        const bool branch_taken_0x2382bc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2382C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2382BCu;
        // 0x2382c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2382bc) {
            ctx->pc = 0x238380u;
            goto label_238380;
        }
    }
    ctx->pc = 0x2382C4u;
label_2382c4:
    // 0x2382c4: 0xc0e4060  jal         func_390180
label_2382c8:
    if (ctx->pc == 0x2382C8u) {
        ctx->pc = 0x2382C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2382C4u;
        // 0x2382c8: 0x27a40024  addiu       $a0, $sp, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2382CCu;
        goto label_2382cc;
    }
    ctx->pc = 0x2382C4u;
    SET_GPR_U32(ctx, 31, 0x2382CCu);
    ctx->pc = 0x2382C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2382C4u;
    // 0x2382c8: 0x27a40024  addiu       $a0, $sp, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2382C4u, 0x2382CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2382CCu;
label_2382cc:
    // 0x2382cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2382ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2382d0:
    // 0x2382d0: 0x1200002b  beqz        $s0, . + 4 + (0x2B << 2)
label_2382d4:
    if (ctx->pc == 0x2382D4u) {
        ctx->pc = 0x2382D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2382D0u;
        // 0x2382d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2382D8u;
        goto label_2382d8;
    }
    ctx->pc = 0x2382D0u;
    {
        const bool branch_taken_0x2382d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2382D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2382D0u;
        // 0x2382d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2382d0) {
            ctx->pc = 0x238380u;
            goto label_238380;
        }
    }
    ctx->pc = 0x2382D8u;
label_2382d8:
    // 0x2382d8: 0xc08a61a  jal         func_229868
label_2382dc:
    if (ctx->pc == 0x2382DCu) {
        ctx->pc = 0x2382DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2382D8u;
        // 0x2382dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2382E0u;
        goto label_2382e0;
    }
    ctx->pc = 0x2382D8u;
    SET_GPR_U32(ctx, 31, 0x2382E0u);
    ctx->pc = 0x2382DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2382D8u;
    // 0x2382dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2382D8u, 0x2382E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2382E0u;
label_2382e0:
    // 0x2382e0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2382e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2382e4:
    // 0x2382e4: 0x16400016  bnez        $s2, . + 4 + (0x16 << 2)
label_2382e8:
    if (ctx->pc == 0x2382E8u) {
        ctx->pc = 0x2382E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2382E4u;
        // 0x2382e8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2382ECu;
        goto label_2382ec;
    }
    ctx->pc = 0x2382E4u;
    {
        const bool branch_taken_0x2382e4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2382E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2382E4u;
        // 0x2382e8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2382e4) {
            ctx->pc = 0x238340u;
            goto label_238340;
        }
    }
    ctx->pc = 0x2382ECu;
label_2382ec:
    // 0x2382ec: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2382ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2382f0:
    // 0x2382f0: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x2382f0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_2382f4:
    // 0x2382f4: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x2382f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_2382f8:
    // 0x2382f8: 0x60f809  jalr        $v1
label_2382fc:
    if (ctx->pc == 0x2382FCu) {
        ctx->pc = 0x2382FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2382F8u;
        // 0x2382fc: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238300u;
        goto label_238300;
    }
    ctx->pc = 0x2382F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x238300u);
        ctx->pc = 0x2382FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2382F8u;
        // 0x2382fc: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2382F8u, 0x238300u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x238300u;
label_238300:
    // 0x238300: 0xc087502  jal         func_21D408
label_238304:
    if (ctx->pc == 0x238304u) {
        ctx->pc = 0x238304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238300u;
        // 0x238304: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238308u;
        goto label_238308;
    }
    ctx->pc = 0x238300u;
    SET_GPR_U32(ctx, 31, 0x238308u);
    ctx->pc = 0x238304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238300u;
    // 0x238304: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x238300u, 0x238308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238308u;
label_238308:
    // 0x238308: 0xc454012c  lwc1        $f20, 0x12C($v0)
    ctx->pc = 0x238308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_23830c:
    // 0x23830c: 0xc087502  jal         func_21D408
label_238310:
    if (ctx->pc == 0x238310u) {
        ctx->pc = 0x238310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23830Cu;
        // 0x238310: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238314u;
        goto label_238314;
    }
    ctx->pc = 0x23830Cu;
    SET_GPR_U32(ctx, 31, 0x238314u);
    ctx->pc = 0x238310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23830Cu;
    // 0x238310: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x23830Cu, 0x238314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238314u;
label_238314:
    // 0x238314: 0xc0a2fc0  jal         func_28BF00
label_238318:
    if (ctx->pc == 0x238318u) {
        ctx->pc = 0x238318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238314u;
        // 0x238318: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23831Cu;
        goto label_23831c;
    }
    ctx->pc = 0x238314u;
    SET_GPR_U32(ctx, 31, 0x23831Cu);
    ctx->pc = 0x238318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238314u;
    // 0x238318: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28BF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28BF00u, 0x238314u, 0x23831Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23831Cu;
label_23831c:
    // 0x23831c: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x23831cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
label_238320:
    // 0x238320: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x238320u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_238324:
    // 0x238324: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x238324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_238328:
    // 0x238328: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x238328u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_23832c:
    // 0x23832c: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x23832cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_238330:
    // 0x238330: 0xc088942  jal         func_222508
label_238334:
    if (ctx->pc == 0x238334u) {
        ctx->pc = 0x238334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238330u;
        // 0x238334: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238338u;
        goto label_238338;
    }
    ctx->pc = 0x238330u;
    SET_GPR_U32(ctx, 31, 0x238338u);
    ctx->pc = 0x238334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238330u;
    // 0x238334: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222508u, 0x238330u, 0x238338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238338u;
label_238338:
    // 0x238338: 0x10000012  b           . + 4 + (0x12 << 2)
label_23833c:
    if (ctx->pc == 0x23833Cu) {
        ctx->pc = 0x23833Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238338u;
        // 0x23833c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238340u;
        goto label_238340;
    }
    ctx->pc = 0x238338u;
    {
        const bool branch_taken_0x238338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23833Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238338u;
        // 0x23833c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238338) {
            ctx->pc = 0x238384u;
            goto label_238384;
        }
    }
    ctx->pc = 0x238340u;
label_238340:
    // 0x238340: 0xc087502  jal         func_21D408
label_238344:
    if (ctx->pc == 0x238344u) {
        ctx->pc = 0x238344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238340u;
        // 0x238344: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238348u;
        goto label_238348;
    }
    ctx->pc = 0x238340u;
    SET_GPR_U32(ctx, 31, 0x238348u);
    ctx->pc = 0x238344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238340u;
    // 0x238344: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x238340u, 0x238348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238348u;
label_238348:
    // 0x238348: 0xc454012c  lwc1        $f20, 0x12C($v0)
    ctx->pc = 0x238348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_23834c:
    // 0x23834c: 0xc087502  jal         func_21D408
label_238350:
    if (ctx->pc == 0x238350u) {
        ctx->pc = 0x238350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23834Cu;
        // 0x238350: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238354u;
        goto label_238354;
    }
    ctx->pc = 0x23834Cu;
    SET_GPR_U32(ctx, 31, 0x238354u);
    ctx->pc = 0x238350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23834Cu;
    // 0x238350: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x23834Cu, 0x238354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238354u;
label_238354:
    // 0x238354: 0xc0a2fc0  jal         func_28BF00
label_238358:
    if (ctx->pc == 0x238358u) {
        ctx->pc = 0x238358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238354u;
        // 0x238358: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23835Cu;
        goto label_23835c;
    }
    ctx->pc = 0x238354u;
    SET_GPR_U32(ctx, 31, 0x23835Cu);
    ctx->pc = 0x238358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238354u;
    // 0x238358: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28BF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28BF00u, 0x238354u, 0x23835Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23835Cu;
label_23835c:
    // 0x23835c: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x23835cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
label_238360:
    // 0x238360: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x238360u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_238364:
    // 0x238364: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x238364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_238368:
    // 0x238368: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x238368u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_23836c:
    // 0x23836c: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x23836cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_238370:
    // 0x238370: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x238370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_238374:
    // 0x238374: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x238374u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_238378:
    // 0x238378: 0xc0888fa  jal         func_2223E8
label_23837c:
    if (ctx->pc == 0x23837Cu) {
        ctx->pc = 0x23837Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238378u;
        // 0x23837c: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x238380u;
        goto label_238380;
    }
    ctx->pc = 0x238378u;
    SET_GPR_U32(ctx, 31, 0x238380u);
    ctx->pc = 0x23837Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238378u;
    // 0x23837c: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2223E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2223E8u, 0x238378u, 0x238380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238380u;
label_238380:
    // 0x238380: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x238380u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_238384:
    // 0x238384: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x238384u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_238388:
    // 0x238388: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x238388u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_23838c:
    // 0x23838c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x23838cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_238390:
    // 0x238390: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x238390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_238394:
    // 0x238394: 0x3e00008  jr          $ra
label_238398:
    if (ctx->pc == 0x238398u) {
        ctx->pc = 0x238398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238394u;
        // 0x238398: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23839Cu;
        goto label_23839c;
    }
    ctx->pc = 0x238394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238394u;
        // 0x238398: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238394u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23839Cu;
label_23839c:
    // 0x23839c: 0x0  nop
    ctx->pc = 0x23839cu;
    // NOP
    ctx->pc = 0x2383a0u;
}
