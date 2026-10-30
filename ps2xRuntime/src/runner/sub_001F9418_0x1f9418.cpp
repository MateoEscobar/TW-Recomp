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

// Function: sub_001F9418
// Address: 0x1f9418 - 0x1f9520
void sub_001F9418_0x1f9418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F9418_0x1f9418");
#endif

    switch (ctx->pc) {
        case 0x1f9418u: goto label_1f9418;
        case 0x1f941cu: goto label_1f941c;
        case 0x1f9420u: goto label_1f9420;
        case 0x1f9424u: goto label_1f9424;
        case 0x1f9428u: goto label_1f9428;
        case 0x1f942cu: goto label_1f942c;
        case 0x1f9430u: goto label_1f9430;
        case 0x1f9434u: goto label_1f9434;
        case 0x1f9438u: goto label_1f9438;
        case 0x1f943cu: goto label_1f943c;
        case 0x1f9440u: goto label_1f9440;
        case 0x1f9444u: goto label_1f9444;
        case 0x1f9448u: goto label_1f9448;
        case 0x1f944cu: goto label_1f944c;
        case 0x1f9450u: goto label_1f9450;
        case 0x1f9454u: goto label_1f9454;
        case 0x1f9458u: goto label_1f9458;
        case 0x1f945cu: goto label_1f945c;
        case 0x1f9460u: goto label_1f9460;
        case 0x1f9464u: goto label_1f9464;
        case 0x1f9468u: goto label_1f9468;
        case 0x1f946cu: goto label_1f946c;
        case 0x1f9470u: goto label_1f9470;
        case 0x1f9474u: goto label_1f9474;
        case 0x1f9478u: goto label_1f9478;
        case 0x1f947cu: goto label_1f947c;
        case 0x1f9480u: goto label_1f9480;
        case 0x1f9484u: goto label_1f9484;
        case 0x1f9488u: goto label_1f9488;
        case 0x1f948cu: goto label_1f948c;
        case 0x1f9490u: goto label_1f9490;
        case 0x1f9494u: goto label_1f9494;
        case 0x1f9498u: goto label_1f9498;
        case 0x1f949cu: goto label_1f949c;
        case 0x1f94a0u: goto label_1f94a0;
        case 0x1f94a4u: goto label_1f94a4;
        case 0x1f94a8u: goto label_1f94a8;
        case 0x1f94acu: goto label_1f94ac;
        case 0x1f94b0u: goto label_1f94b0;
        case 0x1f94b4u: goto label_1f94b4;
        case 0x1f94b8u: goto label_1f94b8;
        case 0x1f94bcu: goto label_1f94bc;
        case 0x1f94c0u: goto label_1f94c0;
        case 0x1f94c4u: goto label_1f94c4;
        case 0x1f94c8u: goto label_1f94c8;
        case 0x1f94ccu: goto label_1f94cc;
        case 0x1f94d0u: goto label_1f94d0;
        case 0x1f94d4u: goto label_1f94d4;
        case 0x1f94d8u: goto label_1f94d8;
        case 0x1f94dcu: goto label_1f94dc;
        case 0x1f94e0u: goto label_1f94e0;
        case 0x1f94e4u: goto label_1f94e4;
        case 0x1f94e8u: goto label_1f94e8;
        case 0x1f94ecu: goto label_1f94ec;
        case 0x1f94f0u: goto label_1f94f0;
        case 0x1f94f4u: goto label_1f94f4;
        case 0x1f94f8u: goto label_1f94f8;
        case 0x1f94fcu: goto label_1f94fc;
        case 0x1f9500u: goto label_1f9500;
        case 0x1f9504u: goto label_1f9504;
        case 0x1f9508u: goto label_1f9508;
        case 0x1f950cu: goto label_1f950c;
        case 0x1f9510u: goto label_1f9510;
        case 0x1f9514u: goto label_1f9514;
        case 0x1f9518u: goto label_1f9518;
        case 0x1f951cu: goto label_1f951c;
        default: break;
    }

    ctx->pc = 0x1f9418u;

label_1f9418:
    // 0x1f9418: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1f9418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1f941c:
    // 0x1f941c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1f941cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_1f9420:
    // 0x1f9420: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1f9420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1f9424:
    // 0x1f9424: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1f9424u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f9428:
    // 0x1f9428: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1f9428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_1f942c:
    // 0x1f942c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1f942cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f9430:
    // 0x1f9430: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1f9430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_1f9434:
    // 0x1f9434: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1f9434u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1f9438:
    // 0x1f9438: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1f9438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_1f943c:
    // 0x1f943c: 0x12200019  beqz        $s1, . + 4 + (0x19 << 2)
label_1f9440:
    if (ctx->pc == 0x1F9440u) {
        ctx->pc = 0x1F9440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F943Cu;
        // 0x1f9440: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9444u;
        goto label_1f9444;
    }
    ctx->pc = 0x1F943Cu;
    {
        const bool branch_taken_0x1f943c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F943Cu;
        // 0x1f9440: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f943c) {
            ctx->pc = 0x1F94A4u;
            goto label_1f94a4;
        }
    }
    ctx->pc = 0x1F9444u;
label_1f9444:
    // 0x1f9444: 0xc10c3ac  jal         func_430EB0
label_1f9448:
    if (ctx->pc == 0x1F9448u) {
        ctx->pc = 0x1F9448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9444u;
        // 0x1f9448: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F944Cu;
        goto label_1f944c;
    }
    ctx->pc = 0x1F9444u;
    SET_GPR_U32(ctx, 31, 0x1F944Cu);
    ctx->pc = 0x1F9448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9444u;
    // 0x1f9448: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x1F9444u, 0x1F944Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F944Cu;
label_1f944c:
    // 0x1f944c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1f944cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1f9450:
    // 0x1f9450: 0x24500001  addiu       $s0, $v0, 0x1
    ctx->pc = 0x1f9450u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1f9454:
    // 0x1f9454: 0x8c6c27e4  lw          $t4, 0x27E4($v1)
    ctx->pc = 0x1f9454u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10212)));
label_1f9458:
    // 0x1f9458: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1f9458u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1f945c:
    // 0x1f945c: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x1f945cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_1f9460:
    // 0x1f9460: 0x24a57a70  addiu       $a1, $a1, 0x7A70
    ctx->pc = 0x1f9460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31344));
label_1f9464:
    // 0x1f9464: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1f9464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1f9468:
    // 0x1f9468: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1f9468u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f946c:
    // 0x1f946c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1f946cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1f9470:
    // 0x1f9470: 0x24090030  addiu       $t1, $zero, 0x30
    ctx->pc = 0x1f9470u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1f9474:
    // 0x1f9474: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1f9474u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1f9478:
    // 0x1f9478: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1f9478u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f947c:
    // 0x1f947c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1f947cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1f9480:
    // 0x1f9480: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1f9480u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f9484:
    // 0x1f9484: 0x1842021  addu        $a0, $t4, $a0
    ctx->pc = 0x1f9484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
label_1f9488:
    // 0x1f9488: 0x40f809  jalr        $v0
label_1f948c:
    if (ctx->pc == 0x1F948Cu) {
        ctx->pc = 0x1F948Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9488u;
        // 0x1f948c: 0x25087a78  addiu       $t0, $t0, 0x7A78 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 31352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9490u;
        goto label_1f9490;
    }
    ctx->pc = 0x1F9488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F9490u);
        ctx->pc = 0x1F948Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9488u;
        // 0x1f948c: 0x25087a78  addiu       $t0, $t0, 0x7A78 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 31352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9488u, 0x1F9490u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F9490u;
label_1f9490:
    // 0x1f9490: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f9490u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f9494:
    // 0x1f9494: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f9494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f9498:
    // 0x1f9498: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1f9498u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f949c:
    // 0x1f949c: 0xc10c4de  jal         func_431378
label_1f94a0:
    if (ctx->pc == 0x1F94A0u) {
        ctx->pc = 0x1F94A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F949Cu;
        // 0x1f94a0: 0xae420064  sw          $v0, 0x64($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F94A4u;
        goto label_1f94a4;
    }
    ctx->pc = 0x1F949Cu;
    SET_GPR_U32(ctx, 31, 0x1F94A4u);
    ctx->pc = 0x1F94A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F949Cu;
    // 0x1f94a0: 0xae420064  sw          $v0, 0x64($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x1F949Cu, 0x1F94A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F94A4u;
label_1f94a4:
    // 0x1f94a4: 0x26530068  addiu       $s3, $s2, 0x68
    ctx->pc = 0x1f94a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 104));
label_1f94a8:
    // 0x1f94a8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1f94a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f94ac:
    // 0x1f94ac: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x1f94acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_1f94b0:
    // 0x1f94b0: 0x548021  addu        $s0, $v0, $s4
    ctx->pc = 0x1f94b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_1f94b4:
    // 0x1f94b4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f94b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f94b8:
    // 0x1f94b8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1f94b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1f94bc:
    // 0x1f94bc: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_1f94c0:
    if (ctx->pc == 0x1F94C0u) {
        ctx->pc = 0x1F94C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F94BCu;
        // 0x1f94c0: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F94C4u;
        goto label_1f94c4;
    }
    ctx->pc = 0x1F94BCu;
    {
        const bool branch_taken_0x1f94bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F94C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F94BCu;
        // 0x1f94c0: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f94bc) {
            ctx->pc = 0x1F94E0u;
            goto label_1f94e0;
        }
    }
    ctx->pc = 0x1F94C4u;
label_1f94c4:
    // 0x1f94c4: 0xc10c3ac  jal         func_430EB0
label_1f94c8:
    if (ctx->pc == 0x1F94C8u) {
        ctx->pc = 0x1F94CCu;
        goto label_1f94cc;
    }
    ctx->pc = 0x1F94C4u;
    SET_GPR_U32(ctx, 31, 0x1F94CCu);
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x1F94C4u, 0x1F94CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F94CCu;
label_1f94cc:
    // 0x1f94cc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1f94d0:
    if (ctx->pc == 0x1F94D0u) {
        ctx->pc = 0x1F94D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F94CCu;
        // 0x1f94d0: 0x2711021  addu        $v0, $s3, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F94D4u;
        goto label_1f94d4;
    }
    ctx->pc = 0x1F94CCu;
    {
        const bool branch_taken_0x1f94cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F94D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F94CCu;
        // 0x1f94d0: 0x2711021  addu        $v0, $s3, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f94cc) {
            ctx->pc = 0x1F94E0u;
            goto label_1f94e0;
        }
    }
    ctx->pc = 0x1F94D4u;
label_1f94d4:
    // 0x1f94d4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1f94d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1f94d8:
    // 0x1f94d8: 0x10000003  b           . + 4 + (0x3 << 2)
label_1f94dc:
    if (ctx->pc == 0x1F94DCu) {
        ctx->pc = 0x1F94DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F94D8u;
        // 0x1f94dc: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F94E0u;
        goto label_1f94e0;
    }
    ctx->pc = 0x1F94D8u;
    {
        const bool branch_taken_0x1f94d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F94DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F94D8u;
        // 0x1f94dc: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f94d8) {
            ctx->pc = 0x1F94E8u;
            goto label_1f94e8;
        }
    }
    ctx->pc = 0x1F94E0u;
label_1f94e0:
    // 0x1f94e0: 0x2711021  addu        $v0, $s3, $s1
    ctx->pc = 0x1f94e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
label_1f94e4:
    // 0x1f94e4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1f94e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1f94e8:
    // 0x1f94e8: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x1f94e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1f94ec:
    // 0x1f94ec: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x1f94ecu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1f94f0:
    // 0x1f94f0: 0x2e43000a  sltiu       $v1, $s2, 0xA
    ctx->pc = 0x1f94f0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_1f94f4:
    // 0x1f94f4: 0x5460ffee  bnel        $v1, $zero, . + 4 + (-0x12 << 2)
label_1f94f8:
    if (ctx->pc == 0x1F94F8u) {
        ctx->pc = 0x1F94F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F94F4u;
        // 0x1f94f8: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F94FCu;
        goto label_1f94fc;
    }
    ctx->pc = 0x1F94F4u;
    {
        const bool branch_taken_0x1f94f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f94f4) {
            ctx->pc = 0x1F94F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F94F4u;
            // 0x1f94f8: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F94B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f94b0;
        }
    }
    ctx->pc = 0x1F94FCu;
label_1f94fc:
    // 0x1f94fc: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1f94fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1f9500:
    // 0x1f9500: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1f9500u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1f9504:
    // 0x1f9504: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1f9504u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f9508:
    // 0x1f9508: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1f9508u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f950c:
    // 0x1f950c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1f950cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f9510:
    // 0x1f9510: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f9510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f9514:
    // 0x1f9514: 0x3e00008  jr          $ra
label_1f9518:
    if (ctx->pc == 0x1F9518u) {
        ctx->pc = 0x1F9518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9514u;
        // 0x1f9518: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F951Cu;
        goto label_1f951c;
    }
    ctx->pc = 0x1F9514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9514u;
        // 0x1f9518: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F951Cu;
label_1f951c:
    // 0x1f951c: 0x0  nop
    ctx->pc = 0x1f951cu;
    // NOP
    ctx->pc = 0x1f9520u;
}
