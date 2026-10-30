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

// Function: sub_00461278
// Address: 0x461278 - 0x461340
void sub_00461278_0x461278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00461278_0x461278");
#endif

    switch (ctx->pc) {
        case 0x461278u: goto label_461278;
        case 0x46127cu: goto label_46127c;
        case 0x461280u: goto label_461280;
        case 0x461284u: goto label_461284;
        case 0x461288u: goto label_461288;
        case 0x46128cu: goto label_46128c;
        case 0x461290u: goto label_461290;
        case 0x461294u: goto label_461294;
        case 0x461298u: goto label_461298;
        case 0x46129cu: goto label_46129c;
        case 0x4612a0u: goto label_4612a0;
        case 0x4612a4u: goto label_4612a4;
        case 0x4612a8u: goto label_4612a8;
        case 0x4612acu: goto label_4612ac;
        case 0x4612b0u: goto label_4612b0;
        case 0x4612b4u: goto label_4612b4;
        case 0x4612b8u: goto label_4612b8;
        case 0x4612bcu: goto label_4612bc;
        case 0x4612c0u: goto label_4612c0;
        case 0x4612c4u: goto label_4612c4;
        case 0x4612c8u: goto label_4612c8;
        case 0x4612ccu: goto label_4612cc;
        case 0x4612d0u: goto label_4612d0;
        case 0x4612d4u: goto label_4612d4;
        case 0x4612d8u: goto label_4612d8;
        case 0x4612dcu: goto label_4612dc;
        case 0x4612e0u: goto label_4612e0;
        case 0x4612e4u: goto label_4612e4;
        case 0x4612e8u: goto label_4612e8;
        case 0x4612ecu: goto label_4612ec;
        case 0x4612f0u: goto label_4612f0;
        case 0x4612f4u: goto label_4612f4;
        case 0x4612f8u: goto label_4612f8;
        case 0x4612fcu: goto label_4612fc;
        case 0x461300u: goto label_461300;
        case 0x461304u: goto label_461304;
        case 0x461308u: goto label_461308;
        case 0x46130cu: goto label_46130c;
        case 0x461310u: goto label_461310;
        case 0x461314u: goto label_461314;
        case 0x461318u: goto label_461318;
        case 0x46131cu: goto label_46131c;
        case 0x461320u: goto label_461320;
        case 0x461324u: goto label_461324;
        case 0x461328u: goto label_461328;
        case 0x46132cu: goto label_46132c;
        case 0x461330u: goto label_461330;
        case 0x461334u: goto label_461334;
        case 0x461338u: goto label_461338;
        case 0x46133cu: goto label_46133c;
        default: break;
    }

    ctx->pc = 0x461278u;

label_461278:
    // 0x461278: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x461278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_46127c:
    // 0x46127c: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x46127cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_461280:
    // 0x461280: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x461280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_461284:
    // 0x461284: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x461284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_461288:
    // 0x461288: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x461288u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_46128c:
    // 0x46128c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x46128cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_461290:
    // 0x461290: 0x2451ad18  addiu       $s1, $v0, -0x52E8
    ctx->pc = 0x461290u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
label_461294:
    // 0x461294: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x461294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_461298:
    // 0x461298: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x461298u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_46129c:
    // 0x46129c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x46129cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4612a0:
    // 0x4612a0: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x4612a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_4612a4:
    // 0x4612a4: 0x40f809  jalr        $v0
label_4612a8:
    if (ctx->pc == 0x4612A8u) {
        ctx->pc = 0x4612A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4612A4u;
        // 0x4612a8: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4612ACu;
        goto label_4612ac;
    }
    ctx->pc = 0x4612A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4612ACu);
        ctx->pc = 0x4612A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4612A4u;
        // 0x4612a8: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4612A4u, 0x4612ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4612ACu;
label_4612ac:
    // 0x4612ac: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x4612acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_4612b0:
    // 0x4612b0: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x4612b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_4612b4:
    // 0x4612b4: 0x40f809  jalr        $v0
label_4612b8:
    if (ctx->pc == 0x4612B8u) {
        ctx->pc = 0x4612B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4612B4u;
        // 0x4612b8: 0x37a50004  ori         $a1, $sp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4612BCu;
        goto label_4612bc;
    }
    ctx->pc = 0x4612B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4612BCu);
        ctx->pc = 0x4612B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4612B4u;
        // 0x4612b8: 0x37a50004  ori         $a1, $sp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4612B4u, 0x4612BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4612BCu;
label_4612bc:
    // 0x4612bc: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x4612bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_4612c0:
    // 0x4612c0: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
label_4612c4:
    if (ctx->pc == 0x4612C4u) {
        ctx->pc = 0x4612C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4612C0u;
        // 0x4612c4: 0x8e050060  lw          $a1, 0x60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4612C8u;
        goto label_4612c8;
    }
    ctx->pc = 0x4612C0u;
    {
        const bool branch_taken_0x4612c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4612c0) {
            ctx->pc = 0x4612C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4612C0u;
            // 0x4612c4: 0x8e050060  lw          $a1, 0x60($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4612D0u;
            goto label_4612d0;
        }
    }
    ctx->pc = 0x4612C8u;
label_4612c8:
    // 0x4612c8: 0x10000017  b           . + 4 + (0x17 << 2)
label_4612cc:
    if (ctx->pc == 0x4612CCu) {
        ctx->pc = 0x4612CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4612C8u;
        // 0x4612cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4612D0u;
        goto label_4612d0;
    }
    ctx->pc = 0x4612C8u;
    {
        const bool branch_taken_0x4612c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4612CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4612C8u;
        // 0x4612cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4612c8) {
            ctx->pc = 0x461328u;
            goto label_461328;
        }
    }
    ctx->pc = 0x4612D0u;
label_4612d0:
    // 0x4612d0: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x4612d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_4612d4:
    // 0x4612d4: 0x40f809  jalr        $v0
label_4612d8:
    if (ctx->pc == 0x4612D8u) {
        ctx->pc = 0x4612D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4612D4u;
        // 0x4612d8: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4612DCu;
        goto label_4612dc;
    }
    ctx->pc = 0x4612D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4612DCu);
        ctx->pc = 0x4612D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4612D4u;
        // 0x4612d8: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4612D4u, 0x4612DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4612DCu;
label_4612dc:
    // 0x4612dc: 0x8e05005c  lw          $a1, 0x5C($s0)
    ctx->pc = 0x4612dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_4612e0:
    // 0x4612e0: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x4612e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_4612e4:
    // 0x4612e4: 0x40f809  jalr        $v0
label_4612e8:
    if (ctx->pc == 0x4612E8u) {
        ctx->pc = 0x4612E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4612E4u;
        // 0x4612e8: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4612ECu;
        goto label_4612ec;
    }
    ctx->pc = 0x4612E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4612ECu);
        ctx->pc = 0x4612E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4612E4u;
        // 0x4612e8: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4612E4u, 0x4612ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4612ECu;
label_4612ec:
    // 0x4612ec: 0x8f838418  lw          $v1, -0x7BE8($gp)
    ctx->pc = 0x4612ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935576)));
label_4612f0:
    // 0x4612f0: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x4612f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_4612f4:
    // 0x4612f4: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x4612f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4612f8:
    // 0x4612f8: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x4612f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_4612fc:
    // 0x4612fc: 0x40f809  jalr        $v0
label_461300:
    if (ctx->pc == 0x461300u) {
        ctx->pc = 0x461300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4612FCu;
        // 0x461300: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x461304u;
        goto label_461304;
    }
    ctx->pc = 0x4612FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x461304u);
        ctx->pc = 0x461300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4612FCu;
        // 0x461300: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4612FCu, 0x461304u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x461304u;
label_461304:
    // 0x461304: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x461304u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_461308:
    // 0x461308: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x461308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_46130c:
    // 0x46130c: 0x40f809  jalr        $v0
label_461310:
    if (ctx->pc == 0x461310u) {
        ctx->pc = 0x461310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46130Cu;
        // 0x461310: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x461314u;
        goto label_461314;
    }
    ctx->pc = 0x46130Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x461314u);
        ctx->pc = 0x461310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46130Cu;
        // 0x461310: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46130Cu, 0x461314u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x461314u;
label_461314:
    // 0x461314: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x461314u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_461318:
    // 0x461318: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x461318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_46131c:
    // 0x46131c: 0x40f809  jalr        $v0
label_461320:
    if (ctx->pc == 0x461320u) {
        ctx->pc = 0x461320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46131Cu;
        // 0x461320: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x461324u;
        goto label_461324;
    }
    ctx->pc = 0x46131Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x461324u);
        ctx->pc = 0x461320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46131Cu;
        // 0x461320: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46131Cu, 0x461324u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x461324u;
label_461324:
    // 0x461324: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x461324u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_461328:
    // 0x461328: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x461328u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_46132c:
    // 0x46132c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x46132cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_461330:
    // 0x461330: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x461330u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_461334:
    // 0x461334: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x461334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_461338:
    // 0x461338: 0x3e00008  jr          $ra
label_46133c:
    if (ctx->pc == 0x46133Cu) {
        ctx->pc = 0x46133Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x461338u;
        // 0x46133c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x461340u;
        goto label_fallthrough_0x461338;
    }
    ctx->pc = 0x461338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46133Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x461338u;
        // 0x46133c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x461338u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x461338:
    ctx->pc = 0x461340u;
}
