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

// Function: sub_004AF4A8
// Address: 0x4af4a8 - 0x4af610
void sub_004AF4A8_0x4af4a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AF4A8_0x4af4a8");
#endif

    switch (ctx->pc) {
        case 0x4af508u: goto label_4af508;
        case 0x4af52cu: goto label_4af52c;
        case 0x4af548u: goto label_4af548;
        case 0x4af5b0u: goto label_4af5b0;
        case 0x4af5d4u: goto label_4af5d4;
        case 0x4af5f0u: goto label_4af5f0;
        default: break;
    }

    ctx->pc = 0x4af4a8u;

    // 0x4af4a8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x4af4a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x4af4ac: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x4af4acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x4af4b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4af4b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4af4b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4af4b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4af4b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4af4b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af4bc: 0xffa60070  sd          $a2, 0x70($sp)
    ctx->pc = 0x4af4bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 6));
    // 0x4af4c0: 0xffa70078  sd          $a3, 0x78($sp)
    ctx->pc = 0x4af4c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 7));
    // 0x4af4c4: 0xffa80080  sd          $t0, 0x80($sp)
    ctx->pc = 0x4af4c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 8));
    // 0x4af4c8: 0xffa90088  sd          $t1, 0x88($sp)
    ctx->pc = 0x4af4c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 9));
    // 0x4af4cc: 0xffaa0090  sd          $t2, 0x90($sp)
    ctx->pc = 0x4af4ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 10));
    // 0x4af4d0: 0xffab0098  sd          $t3, 0x98($sp)
    ctx->pc = 0x4af4d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 11));
    // 0x4af4d4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4af4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4af4d8: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x4af4d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x4af4dc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4AF4DCu;
    {
        const bool branch_taken_0x4af4dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AF4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF4DCu;
        // 0x4af4e0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af4dc) {
            ctx->pc = 0x4AF4F4u;
            goto label_4af4f4;
        }
    }
    ctx->pc = 0x4AF4E4u;
    // 0x4af4e4: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x4af4e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x4af4e8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4af4e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af4ec: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x4AF4ECu;
    {
        const bool branch_taken_0x4af4ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AF4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF4ECu;
        // 0x4af4f0: 0xa062001a  sb          $v0, 0x1A($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af4ec) {
            ctx->pc = 0x4AF530u;
            goto label_4af530;
        }
    }
    ctx->pc = 0x4AF4F4u;
label_4af4f4:
    // 0x4af4f4: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x4af4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x4af4f8: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4AF4F8u;
    {
        const bool branch_taken_0x4af4f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4af4f8) {
            ctx->pc = 0x4AF4FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AF4F8u;
            // 0x4af4fc: 0xdc620010  ld          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AF510u;
            goto label_4af510;
        }
    }
    ctx->pc = 0x4AF500u;
    // 0x4af500: 0xc12b652  jal         func_4AD948
    ctx->pc = 0x4AF500u;
    SET_GPR_U32(ctx, 31, 0x4AF508u);
    ctx->pc = 0x4AD948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD948u, 0x4AF500u, 0x4AF508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AF508u;
label_4af508:
    // 0x4af508: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4af508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4af50c: 0xdc620010  ld          $v0, 0x10($v1)
    ctx->pc = 0x4af50cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
label_4af510:
    // 0x4af510: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4af510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4af514: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4af514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4af518: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4af518u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x4af51c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4AF51Cu;
    {
        const bool branch_taken_0x4af51c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AF520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF51Cu;
        // 0x4af520: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af51c) {
            ctx->pc = 0x4AF530u;
            goto label_4af530;
        }
    }
    ctx->pc = 0x4AF524u;
    // 0x4af524: 0xc12b69e  jal         func_4ADA78
    ctx->pc = 0x4AF524u;
    SET_GPR_U32(ctx, 31, 0x4AF52Cu);
    ctx->pc = 0x4AF528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AF524u;
    // 0x4af528: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADA78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADA78u, 0x4AF524u, 0x4AF52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AF52Cu;
label_4af52c:
    // 0x4af52c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4af52cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4af530:
    // 0x4af530: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4AF530u;
    {
        const bool branch_taken_0x4af530 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AF534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF530u;
        // 0x4af534: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af530) {
            ctx->pc = 0x4AF548u;
            goto label_4af548;
        }
    }
    ctx->pc = 0x4AF538u;
    // 0x4af538: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x4af538u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4af53c: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x4af53cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x4af540: 0xc12bd84  jal         func_4AF610
    ctx->pc = 0x4AF540u;
    SET_GPR_U32(ctx, 31, 0x4AF548u);
    ctx->pc = 0x4AF544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AF540u;
    // 0x4af544: 0x8ce40000  lw          $a0, 0x0($a3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AF610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AF610u, 0x4AF540u, 0x4AF548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AF548u;
label_4af548:
    // 0x4af548: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4af548u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af54c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4af54cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4af550: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x4af550u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4af554: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4af554u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4af558: 0x3e00008  jr          $ra
    ctx->pc = 0x4AF558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AF55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF558u;
        // 0x4af55c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AF558u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AF560u;
    // 0x4af560: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4af560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4af564: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4af564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x4af568: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x4af568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x4af56c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4af56cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af570: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4af570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4af574: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4af574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4af578: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4af578u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af57c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4af57cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4af580: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x4af580u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x4af584: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4AF584u;
    {
        const bool branch_taken_0x4af584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AF588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF584u;
        // 0x4af588: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af584) {
            ctx->pc = 0x4AF59Cu;
            goto label_4af59c;
        }
    }
    ctx->pc = 0x4AF58Cu;
    // 0x4af58c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x4af58cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x4af590: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4af590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af594: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x4AF594u;
    {
        const bool branch_taken_0x4af594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AF598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF594u;
        // 0x4af598: 0xa062001a  sb          $v0, 0x1A($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af594) {
            ctx->pc = 0x4AF5D8u;
            goto label_4af5d8;
        }
    }
    ctx->pc = 0x4AF59Cu;
label_4af59c:
    // 0x4af59c: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x4af59cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x4af5a0: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4AF5A0u;
    {
        const bool branch_taken_0x4af5a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4af5a0) {
            ctx->pc = 0x4AF5A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AF5A0u;
            // 0x4af5a4: 0xdc620010  ld          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AF5B8u;
            goto label_4af5b8;
        }
    }
    ctx->pc = 0x4AF5A8u;
    // 0x4af5a8: 0xc12b652  jal         func_4AD948
    ctx->pc = 0x4AF5A8u;
    SET_GPR_U32(ctx, 31, 0x4AF5B0u);
    ctx->pc = 0x4AD948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD948u, 0x4AF5A8u, 0x4AF5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AF5B0u;
label_4af5b0:
    // 0x4af5b0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4af5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4af5b4: 0xdc620010  ld          $v0, 0x10($v1)
    ctx->pc = 0x4af5b4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
label_4af5b8:
    // 0x4af5b8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4af5b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4af5bc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4af5bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4af5c0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4af5c0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x4af5c4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4AF5C4u;
    {
        const bool branch_taken_0x4af5c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AF5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF5C4u;
        // 0x4af5c8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af5c4) {
            ctx->pc = 0x4AF5D8u;
            goto label_4af5d8;
        }
    }
    ctx->pc = 0x4AF5CCu;
    // 0x4af5cc: 0xc12b69e  jal         func_4ADA78
    ctx->pc = 0x4AF5CCu;
    SET_GPR_U32(ctx, 31, 0x4AF5D4u);
    ctx->pc = 0x4AF5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AF5CCu;
    // 0x4af5d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADA78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADA78u, 0x4AF5CCu, 0x4AF5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AF5D4u;
label_4af5d4:
    // 0x4af5d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4af5d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4af5d8:
    // 0x4af5d8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4AF5D8u;
    {
        const bool branch_taken_0x4af5d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AF5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF5D8u;
        // 0x4af5dc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af5d8) {
            ctx->pc = 0x4AF5F0u;
            goto label_4af5f0;
        }
    }
    ctx->pc = 0x4AF5E0u;
    // 0x4af5e0: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x4af5e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4af5e4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4af5e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af5e8: 0xc12bd84  jal         func_4AF610
    ctx->pc = 0x4AF5E8u;
    SET_GPR_U32(ctx, 31, 0x4AF5F0u);
    ctx->pc = 0x4AF5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AF5E8u;
    // 0x4af5ec: 0x8ce40000  lw          $a0, 0x0($a3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AF610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AF610u, 0x4AF5E8u, 0x4AF5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AF5F0u;
label_4af5f0:
    // 0x4af5f0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4af5f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af5f4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4af5f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4af5f8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4af5f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4af5fc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x4af5fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4af600: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4af600u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4af604: 0x3e00008  jr          $ra
    ctx->pc = 0x4AF604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AF608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF604u;
        // 0x4af608: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AF604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AF60Cu;
    // 0x4af60c: 0x0  nop
    ctx->pc = 0x4af60cu;
    // NOP
    ctx->pc = 0x4af610u;
}
