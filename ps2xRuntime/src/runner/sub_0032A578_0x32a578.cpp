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

// Function: sub_0032A578
// Address: 0x32a578 - 0x32a688
void sub_0032A578_0x32a578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032A578_0x32a578");
#endif

    switch (ctx->pc) {
        case 0x32a578u: goto label_32a578;
        case 0x32a57cu: goto label_32a57c;
        case 0x32a580u: goto label_32a580;
        case 0x32a584u: goto label_32a584;
        case 0x32a588u: goto label_32a588;
        case 0x32a58cu: goto label_32a58c;
        case 0x32a590u: goto label_32a590;
        case 0x32a594u: goto label_32a594;
        case 0x32a598u: goto label_32a598;
        case 0x32a59cu: goto label_32a59c;
        case 0x32a5a0u: goto label_32a5a0;
        case 0x32a5a4u: goto label_32a5a4;
        case 0x32a5a8u: goto label_32a5a8;
        case 0x32a5acu: goto label_32a5ac;
        case 0x32a5b0u: goto label_32a5b0;
        case 0x32a5b4u: goto label_32a5b4;
        case 0x32a5b8u: goto label_32a5b8;
        case 0x32a5bcu: goto label_32a5bc;
        case 0x32a5c0u: goto label_32a5c0;
        case 0x32a5c4u: goto label_32a5c4;
        case 0x32a5c8u: goto label_32a5c8;
        case 0x32a5ccu: goto label_32a5cc;
        case 0x32a5d0u: goto label_32a5d0;
        case 0x32a5d4u: goto label_32a5d4;
        case 0x32a5d8u: goto label_32a5d8;
        case 0x32a5dcu: goto label_32a5dc;
        case 0x32a5e0u: goto label_32a5e0;
        case 0x32a5e4u: goto label_32a5e4;
        case 0x32a5e8u: goto label_32a5e8;
        case 0x32a5ecu: goto label_32a5ec;
        case 0x32a5f0u: goto label_32a5f0;
        case 0x32a5f4u: goto label_32a5f4;
        case 0x32a5f8u: goto label_32a5f8;
        case 0x32a5fcu: goto label_32a5fc;
        case 0x32a600u: goto label_32a600;
        case 0x32a604u: goto label_32a604;
        case 0x32a608u: goto label_32a608;
        case 0x32a60cu: goto label_32a60c;
        case 0x32a610u: goto label_32a610;
        case 0x32a614u: goto label_32a614;
        case 0x32a618u: goto label_32a618;
        case 0x32a61cu: goto label_32a61c;
        case 0x32a620u: goto label_32a620;
        case 0x32a624u: goto label_32a624;
        case 0x32a628u: goto label_32a628;
        case 0x32a62cu: goto label_32a62c;
        case 0x32a630u: goto label_32a630;
        case 0x32a634u: goto label_32a634;
        case 0x32a638u: goto label_32a638;
        case 0x32a63cu: goto label_32a63c;
        case 0x32a640u: goto label_32a640;
        case 0x32a644u: goto label_32a644;
        case 0x32a648u: goto label_32a648;
        case 0x32a64cu: goto label_32a64c;
        case 0x32a650u: goto label_32a650;
        case 0x32a654u: goto label_32a654;
        case 0x32a658u: goto label_32a658;
        case 0x32a65cu: goto label_32a65c;
        case 0x32a660u: goto label_32a660;
        case 0x32a664u: goto label_32a664;
        case 0x32a668u: goto label_32a668;
        case 0x32a66cu: goto label_32a66c;
        case 0x32a670u: goto label_32a670;
        case 0x32a674u: goto label_32a674;
        case 0x32a678u: goto label_32a678;
        case 0x32a67cu: goto label_32a67c;
        case 0x32a680u: goto label_32a680;
        case 0x32a684u: goto label_32a684;
        default: break;
    }

    ctx->pc = 0x32a578u;

label_32a578:
    // 0x32a578: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x32a578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_32a57c:
    // 0x32a57c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x32a57cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_32a580:
    // 0x32a580: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x32a580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_32a584:
    // 0x32a584: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32a584u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_32a588:
    // 0x32a588: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x32a588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_32a58c:
    // 0x32a58c: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x32a58cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_32a590:
    // 0x32a590: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32a590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_32a594:
    // 0x32a594: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x32a594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_32a598:
    // 0x32a598: 0x8e11002c  lw          $s1, 0x2C($s0)
    ctx->pc = 0x32a598u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_32a59c:
    // 0x32a59c: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x32a59cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_32a5a0:
    // 0x32a5a0: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x32a5a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_32a5a4:
    // 0x32a5a4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_32a5a8:
    if (ctx->pc == 0x32A5A8u) {
        ctx->pc = 0x32A5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A5A4u;
        // 0x32a5a8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A5ACu;
        goto label_32a5ac;
    }
    ctx->pc = 0x32A5A4u;
    {
        const bool branch_taken_0x32a5a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A5A4u;
        // 0x32a5a8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a5a4) {
            ctx->pc = 0x32A5B8u;
            goto label_32a5b8;
        }
    }
    ctx->pc = 0x32A5ACu;
label_32a5ac:
    // 0x32a5ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32a5acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32a5b0:
    // 0x32a5b0: 0xc0cb244  jal         func_32C910
label_32a5b4:
    if (ctx->pc == 0x32A5B4u) {
        ctx->pc = 0x32A5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A5B0u;
        // 0x32a5b4: 0x2405008a  addiu       $a1, $zero, 0x8A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 138));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A5B8u;
        goto label_32a5b8;
    }
    ctx->pc = 0x32A5B0u;
    SET_GPR_U32(ctx, 31, 0x32A5B8u);
    ctx->pc = 0x32A5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A5B0u;
    // 0x32a5b4: 0x2405008a  addiu       $a1, $zero, 0x8A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 138));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C910u, 0x32A5B0u, 0x32A5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A5B8u;
label_32a5b8:
    // 0x32a5b8: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x32a5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_32a5bc:
    // 0x32a5bc: 0x2414005f  addiu       $s4, $zero, 0x5F
    ctx->pc = 0x32a5bcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
label_32a5c0:
    // 0x32a5c0: 0x2453c531  addiu       $s3, $v0, -0x3ACF
    ctx->pc = 0x32a5c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952241));
label_32a5c4:
    // 0x32a5c4: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x32a5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_32a5c8:
    // 0x32a5c8: 0x2643000a  addiu       $v1, $s2, 0xA
    ctx->pc = 0x32a5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 10));
label_32a5cc:
    // 0x32a5cc: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x32a5ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_32a5d0:
    // 0x32a5d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_32a5d4:
    if (ctx->pc == 0x32A5D4u) {
        ctx->pc = 0x32A5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A5D0u;
        // 0x32a5d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A5D8u;
        goto label_32a5d8;
    }
    ctx->pc = 0x32A5D0u;
    {
        const bool branch_taken_0x32a5d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A5D0u;
        // 0x32a5d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a5d0) {
            ctx->pc = 0x32A5E0u;
            goto label_32a5e0;
        }
    }
    ctx->pc = 0x32A5D8u;
label_32a5d8:
    // 0x32a5d8: 0xc0cb244  jal         func_32C910
label_32a5dc:
    if (ctx->pc == 0x32A5DCu) {
        ctx->pc = 0x32A5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A5D8u;
        // 0x32a5dc: 0x2645008a  addiu       $a1, $s2, 0x8A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 138));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A5E0u;
        goto label_32a5e0;
    }
    ctx->pc = 0x32A5D8u;
    SET_GPR_U32(ctx, 31, 0x32A5E0u);
    ctx->pc = 0x32A5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A5D8u;
    // 0x32a5dc: 0x2645008a  addiu       $a1, $s2, 0x8A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 138));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C910u, 0x32A5D8u, 0x32A5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A5E0u;
label_32a5e0:
    // 0x32a5e0: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x32a5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_32a5e4:
    // 0x32a5e4: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x32a5e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_32a5e8:
    // 0x32a5e8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x32a5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_32a5ec:
    // 0x32a5ec: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x32a5ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_32a5f0:
    // 0x32a5f0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x32a5f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_32a5f4:
    // 0x32a5f4: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x32a5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32a5f8:
    // 0x32a5f8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x32a5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_32a5fc:
    // 0x32a5fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x32a5fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32a600:
    // 0x32a600: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x32a600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_32a604:
    // 0x32a604: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_32a608:
    if (ctx->pc == 0x32A608u) {
        ctx->pc = 0x32A608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A604u;
        // 0x32a608: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A60Cu;
        goto label_32a60c;
    }
    ctx->pc = 0x32A604u;
    {
        const bool branch_taken_0x32a604 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A604u;
        // 0x32a608: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a604) {
            ctx->pc = 0x32A624u;
            goto label_32a624;
        }
    }
    ctx->pc = 0x32A60Cu;
label_32a60c:
    // 0x32a60c: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x32a60cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32a610:
    // 0x32a610: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x32a610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_32a614:
    // 0x32a614: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x32a614u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_32a618:
    // 0x32a618: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32a618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_32a61c:
    // 0x32a61c: 0x10000006  b           . + 4 + (0x6 << 2)
label_32a620:
    if (ctx->pc == 0x32A620u) {
        ctx->pc = 0x32A620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A61Cu;
        // 0x32a620: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A624u;
        goto label_32a624;
    }
    ctx->pc = 0x32A61Cu;
    {
        const bool branch_taken_0x32a61c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A61Cu;
        // 0x32a620: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a61c) {
            ctx->pc = 0x32A638u;
            goto label_32a638;
        }
    }
    ctx->pc = 0x32A624u;
label_32a624:
    // 0x32a624: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x32a624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32a628:
    // 0x32a628: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x32a628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_32a62c:
    // 0x32a62c: 0x40f809  jalr        $v0
label_32a630:
    if (ctx->pc == 0x32A630u) {
        ctx->pc = 0x32A634u;
        goto label_32a634;
    }
    ctx->pc = 0x32A62Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32A634u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A62Cu, 0x32A634u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32A634u;
label_32a634:
    // 0x32a634: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x32a634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32a638:
    // 0x32a638: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x32a638u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_32a63c:
    // 0x32a63c: 0x931821  addu        $v1, $a0, $s3
    ctx->pc = 0x32a63cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_32a640:
    // 0x32a640: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x32a640u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_32a644:
    // 0x32a644: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x32a644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_32a648:
    // 0x32a648: 0x5440ffdf  bnel        $v0, $zero, . + 4 + (-0x21 << 2)
label_32a64c:
    if (ctx->pc == 0x32A64Cu) {
        ctx->pc = 0x32A64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A648u;
        // 0x32a64c: 0x8e22001c  lw          $v0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A650u;
        goto label_32a650;
    }
    ctx->pc = 0x32A648u;
    {
        const bool branch_taken_0x32a648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32a648) {
            ctx->pc = 0x32A64Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32A648u;
            // 0x32a64c: 0x8e22001c  lw          $v0, 0x1C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32A5C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32a5c8;
        }
    }
    ctx->pc = 0x32A650u;
label_32a650:
    // 0x32a650: 0x5094ffdd  beql        $a0, $s4, . + 4 + (-0x23 << 2)
label_32a654:
    if (ctx->pc == 0x32A654u) {
        ctx->pc = 0x32A654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A650u;
        // 0x32a654: 0x8e22001c  lw          $v0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A658u;
        goto label_32a658;
    }
    ctx->pc = 0x32A650u;
    {
        const bool branch_taken_0x32a650 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 20));
        if (branch_taken_0x32a650) {
            ctx->pc = 0x32A654u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32A650u;
            // 0x32a654: 0x8e22001c  lw          $v0, 0x1C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32A5C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32a5c8;
        }
    }
    ctx->pc = 0x32A658u;
label_32a658:
    // 0x32a658: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x32a658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_32a65c:
    // 0x32a65c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x32a65cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_32a660:
    // 0x32a660: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x32a660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_32a664:
    // 0x32a664: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x32a664u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_32a668:
    // 0x32a668: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x32a668u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_32a66c:
    // 0x32a66c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x32a66cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_32a670:
    // 0x32a670: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x32a670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_32a674:
    // 0x32a674: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x32a674u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_32a678:
    // 0x32a678: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x32a678u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_32a67c:
    // 0x32a67c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32a67cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_32a680:
    // 0x32a680: 0x3e00008  jr          $ra
label_32a684:
    if (ctx->pc == 0x32A684u) {
        ctx->pc = 0x32A684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A680u;
        // 0x32a684: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A688u;
        goto label_fallthrough_0x32a680;
    }
    ctx->pc = 0x32A680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32A684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A680u;
        // 0x32a684: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A680u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x32a680:
    ctx->pc = 0x32A688u;
}
