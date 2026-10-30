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

// Function: sub_001BB4A0
// Address: 0x1bb4a0 - 0x1bb5a8
void sub_001BB4A0_0x1bb4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BB4A0_0x1bb4a0");
#endif

    switch (ctx->pc) {
        case 0x1bb4d4u: goto label_1bb4d4;
        case 0x1bb4dcu: goto label_1bb4dc;
        case 0x1bb4ecu: goto label_1bb4ec;
        case 0x1bb4f8u: goto label_1bb4f8;
        case 0x1bb500u: goto label_1bb500;
        case 0x1bb510u: goto label_1bb510;
        case 0x1bb518u: goto label_1bb518;
        case 0x1bb534u: goto label_1bb534;
        case 0x1bb544u: goto label_1bb544;
        case 0x1bb550u: goto label_1bb550;
        case 0x1bb55cu: goto label_1bb55c;
        case 0x1bb564u: goto label_1bb564;
        case 0x1bb574u: goto label_1bb574;
        case 0x1bb584u: goto label_1bb584;
        default: break;
    }

    ctx->pc = 0x1bb4a0u;

    // 0x1bb4a0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1bb4a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1bb4a4: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x1bb4a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x1bb4a8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1bb4a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb4ac: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x1bb4acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x1bb4b0: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x1bb4b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x1bb4b4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1bb4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1bb4b8: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x1bb4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x1bb4bc: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x1bb4bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb4c0: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x1bb4c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x1bb4c4: 0x3c130055  lui         $s3, 0x55
    ctx->pc = 0x1bb4c4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)85 << 16));
    // 0x1bb4c8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1bb4c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1bb4cc: 0xc067bb8  jal         func_19EEE0
    ctx->pc = 0x1BB4CCu;
    SET_GPR_U32(ctx, 31, 0x1BB4D4u);
    ctx->pc = 0x1BB4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB4CCu;
    // 0x1bb4d0: 0x24140030  addiu       $s4, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EEE0u, 0x1BB4CCu, 0x1BB4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB4D4u;
label_1bb4d4:
    // 0x1bb4d4: 0xc10c3ac  jal         func_430EB0
    ctx->pc = 0x1BB4D4u;
    SET_GPR_U32(ctx, 31, 0x1BB4DCu);
    ctx->pc = 0x1BB4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB4D4u;
    // 0x1bb4d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x1BB4D4u, 0x1BB4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB4DCu;
label_1bb4dc:
    // 0x1bb4dc: 0x3a21021  addu        $v0, $sp, $v0
    ctx->pc = 0x1bb4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1bb4e0: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1bb4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1bb4e4: 0xc067bb8  jal         func_19EEE0
    ctx->pc = 0x1BB4E4u;
    SET_GPR_U32(ctx, 31, 0x1BB4ECu);
    ctx->pc = 0x1BB4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB4E4u;
    // 0x1bb4e8: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EEE0u, 0x1BB4E4u, 0x1BB4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB4ECu;
label_1bb4ec:
    // 0x1bb4ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1bb4ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb4f0: 0xc067bb8  jal         func_19EEE0
    ctx->pc = 0x1BB4F0u;
    SET_GPR_U32(ctx, 31, 0x1BB4F8u);
    ctx->pc = 0x1BB4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB4F0u;
    // 0x1bb4f4: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EEE0u, 0x1BB4F0u, 0x1BB4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB4F8u;
label_1bb4f8:
    // 0x1bb4f8: 0xc10c3ac  jal         func_430EB0
    ctx->pc = 0x1BB4F8u;
    SET_GPR_U32(ctx, 31, 0x1BB500u);
    ctx->pc = 0x1BB4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB4F8u;
    // 0x1bb4fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x1BB4F8u, 0x1BB500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB500u;
label_1bb500:
    // 0x1bb500: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1bb500u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb504: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1bb504u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb508: 0xc10c4de  jal         func_431378
    ctx->pc = 0x1BB508u;
    SET_GPR_U32(ctx, 31, 0x1BB510u);
    ctx->pc = 0x1BB50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB508u;
    // 0x1bb50c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x1BB508u, 0x1BB510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB510u;
label_1bb510:
    // 0x1bb510: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BB510u;
    {
        const bool branch_taken_0x1bb510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB510u;
        // 0x1bb514: 0x82220000  lb          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb510) {
            ctx->pc = 0x1BB51Cu;
            goto label_1bb51c;
        }
    }
    ctx->pc = 0x1BB518u;
label_1bb518:
    // 0x1bb518: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x1bb518u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_1bb51c:
    // 0x1bb51c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1BB51Cu;
    {
        const bool branch_taken_0x1bb51c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb51c) {
            ctx->pc = 0x1BB55Cu;
            goto label_1bb55c;
        }
    }
    ctx->pc = 0x1BB524u;
    // 0x1bb524: 0x14540005  bne         $v0, $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BB524u;
    {
        const bool branch_taken_0x1bb524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x1BB528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB524u;
        // 0x1bb528: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb524) {
            ctx->pc = 0x1BB53Cu;
            goto label_1bb53c;
        }
    }
    ctx->pc = 0x1BB52Cu;
    // 0x1bb52c: 0xc10c25f  jal         func_43097C
    ctx->pc = 0x1BB52Cu;
    SET_GPR_U32(ctx, 31, 0x1BB534u);
    ctx->pc = 0x1BB530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB52Cu;
    // 0x1bb530: 0x26654b00  addiu       $a1, $s3, 0x4B00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 19200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43097Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43097Cu, 0x1BB52Cu, 0x1BB534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB534u;
label_1bb534:
    // 0x1bb534: 0x1000fff8  b           . + 4 + (-0x8 << 2)
    ctx->pc = 0x1BB534u;
    {
        const bool branch_taken_0x1bb534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB534u;
        // 0x1bb538: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb534) {
            ctx->pc = 0x1BB518u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bb518;
        }
    }
    ctx->pc = 0x1BB53Cu;
label_1bb53c:
    // 0x1bb53c: 0xc067bb8  jal         func_19EEE0
    ctx->pc = 0x1BB53Cu;
    SET_GPR_U32(ctx, 31, 0x1BB544u);
    ctx->pc = 0x1BB540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB53Cu;
    // 0x1bb540: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EEE0u, 0x1BB53Cu, 0x1BB544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB544u;
label_1bb544:
    // 0x1bb544: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1bb544u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb548: 0xc10c25f  jal         func_43097C
    ctx->pc = 0x1BB548u;
    SET_GPR_U32(ctx, 31, 0x1BB550u);
    ctx->pc = 0x1BB54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB548u;
    // 0x1bb54c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43097Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43097Cu, 0x1BB548u, 0x1BB550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB550u;
label_1bb550:
    // 0x1bb550: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1bb550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb554: 0xc10c25f  jal         func_43097C
    ctx->pc = 0x1BB554u;
    SET_GPR_U32(ctx, 31, 0x1BB55Cu);
    ctx->pc = 0x1BB558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB554u;
    // 0x1bb558: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43097Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43097Cu, 0x1BB554u, 0x1BB55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB55Cu;
label_1bb55c:
    // 0x1bb55c: 0xc10c3ac  jal         func_430EB0
    ctx->pc = 0x1BB55Cu;
    SET_GPR_U32(ctx, 31, 0x1BB564u);
    ctx->pc = 0x1BB560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB55Cu;
    // 0x1bb560: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x1BB55Cu, 0x1BB564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB564u;
label_1bb564:
    // 0x1bb564: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1bb564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1bb568: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1bb568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb56c: 0xc10c3ac  jal         func_430EB0
    ctx->pc = 0x1BB56Cu;
    SET_GPR_U32(ctx, 31, 0x1BB574u);
    ctx->pc = 0x1BB570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB56Cu;
    // 0x1bb570: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x1BB56Cu, 0x1BB574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB574u;
label_1bb574:
    // 0x1bb574: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bb574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb578: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1bb578u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb57c: 0xc10c4de  jal         func_431378
    ctx->pc = 0x1BB57Cu;
    SET_GPR_U32(ctx, 31, 0x1BB584u);
    ctx->pc = 0x1BB580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB57Cu;
    // 0x1bb580: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x1BB57Cu, 0x1BB584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB584u;
label_1bb584:
    // 0x1bb584: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x1bb584u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1bb588: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x1bb588u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1bb58c: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x1bb58cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1bb590: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x1bb590u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1bb594: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x1bb594u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1bb598: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1bb598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1bb59c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB59Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB59Cu;
        // 0x1bb5a0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB59Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BB5A4u;
    // 0x1bb5a4: 0x0  nop
    ctx->pc = 0x1bb5a4u;
    // NOP
    ctx->pc = 0x1bb5a8u;
}
