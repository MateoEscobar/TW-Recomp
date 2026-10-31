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

// Function: sub_003DA4F0
// Address: 0x3da4f0 - 0x3da5c0
void sub_003DA4F0_0x3da4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DA4F0_0x3da4f0");
#endif

    switch (ctx->pc) {
        case 0x3da4f0u: goto label_3da4f0;
        case 0x3da4f4u: goto label_3da4f4;
        case 0x3da4f8u: goto label_3da4f8;
        case 0x3da4fcu: goto label_3da4fc;
        case 0x3da500u: goto label_3da500;
        case 0x3da504u: goto label_3da504;
        case 0x3da508u: goto label_3da508;
        case 0x3da50cu: goto label_3da50c;
        case 0x3da510u: goto label_3da510;
        case 0x3da514u: goto label_3da514;
        case 0x3da518u: goto label_3da518;
        case 0x3da51cu: goto label_3da51c;
        case 0x3da520u: goto label_3da520;
        case 0x3da524u: goto label_3da524;
        case 0x3da528u: goto label_3da528;
        case 0x3da52cu: goto label_3da52c;
        case 0x3da530u: goto label_3da530;
        case 0x3da534u: goto label_3da534;
        case 0x3da538u: goto label_3da538;
        case 0x3da53cu: goto label_3da53c;
        case 0x3da540u: goto label_3da540;
        case 0x3da544u: goto label_3da544;
        case 0x3da548u: goto label_3da548;
        case 0x3da54cu: goto label_3da54c;
        case 0x3da550u: goto label_3da550;
        case 0x3da554u: goto label_3da554;
        case 0x3da558u: goto label_3da558;
        case 0x3da55cu: goto label_3da55c;
        case 0x3da560u: goto label_3da560;
        case 0x3da564u: goto label_3da564;
        case 0x3da568u: goto label_3da568;
        case 0x3da56cu: goto label_3da56c;
        case 0x3da570u: goto label_3da570;
        case 0x3da574u: goto label_3da574;
        case 0x3da578u: goto label_3da578;
        case 0x3da57cu: goto label_3da57c;
        case 0x3da580u: goto label_3da580;
        case 0x3da584u: goto label_3da584;
        case 0x3da588u: goto label_3da588;
        case 0x3da58cu: goto label_3da58c;
        case 0x3da590u: goto label_3da590;
        case 0x3da594u: goto label_3da594;
        case 0x3da598u: goto label_3da598;
        case 0x3da59cu: goto label_3da59c;
        case 0x3da5a0u: goto label_3da5a0;
        case 0x3da5a4u: goto label_3da5a4;
        case 0x3da5a8u: goto label_3da5a8;
        case 0x3da5acu: goto label_3da5ac;
        case 0x3da5b0u: goto label_3da5b0;
        case 0x3da5b4u: goto label_3da5b4;
        case 0x3da5b8u: goto label_3da5b8;
        case 0x3da5bcu: goto label_3da5bc;
        default: break;
    }

    ctx->pc = 0x3da4f0u;

label_3da4f0:
    // 0x3da4f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3da4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3da4f4:
    // 0x3da4f4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3da4f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_3da4f8:
    // 0x3da4f8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3da4f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_3da4fc:
    // 0x3da4fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3da4fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3da500:
    // 0x3da500: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3da500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3da504:
    // 0x3da504: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3da504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_3da508:
    // 0x3da508: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3da508u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3da50c:
    // 0x3da50c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3da50cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3da510:
    // 0x3da510: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3da510u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3da514:
    // 0x3da514: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3da514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3da518:
    // 0x3da518: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3da518u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3da51c:
    // 0x3da51c: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3da51cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3da520:
    // 0x3da520: 0x40f809  jalr        $v0
label_3da524:
    if (ctx->pc == 0x3DA524u) {
        ctx->pc = 0x3DA524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA520u;
        // 0x3da524: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DA528u;
        goto label_3da528;
    }
    ctx->pc = 0x3DA520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3DA528u);
        ctx->pc = 0x3DA524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA520u;
        // 0x3da524: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DA520u, 0x3DA528u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DA528u;
label_3da528:
    // 0x3da528: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3da528u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3da52c:
    // 0x3da52c: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x3da52cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_3da530:
    // 0x3da530: 0x12420005  beq         $s2, $v0, . + 4 + (0x5 << 2)
label_3da534:
    if (ctx->pc == 0x3DA534u) {
        ctx->pc = 0x3DA534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA530u;
        // 0x3da534: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DA538u;
        goto label_3da538;
    }
    ctx->pc = 0x3DA530u;
    {
        const bool branch_taken_0x3da530 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x3DA534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA530u;
        // 0x3da534: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da530) {
            ctx->pc = 0x3DA548u;
            goto label_3da548;
        }
    }
    ctx->pc = 0x3DA538u;
label_3da538:
    // 0x3da538: 0x12420011  beq         $s2, $v0, . + 4 + (0x11 << 2)
label_3da53c:
    if (ctx->pc == 0x3DA53Cu) {
        ctx->pc = 0x3DA53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA538u;
        // 0x3da53c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DA540u;
        goto label_3da540;
    }
    ctx->pc = 0x3DA538u;
    {
        const bool branch_taken_0x3da538 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x3DA53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA538u;
        // 0x3da53c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da538) {
            ctx->pc = 0x3DA580u;
            goto label_3da580;
        }
    }
    ctx->pc = 0x3DA540u;
label_3da540:
    // 0x3da540: 0x1000001a  b           . + 4 + (0x1A << 2)
label_3da544:
    if (ctx->pc == 0x3DA544u) {
        ctx->pc = 0x3DA544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA540u;
        // 0x3da544: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DA548u;
        goto label_3da548;
    }
    ctx->pc = 0x3DA540u;
    {
        const bool branch_taken_0x3da540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA540u;
        // 0x3da544: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da540) {
            ctx->pc = 0x3DA5ACu;
            goto label_3da5ac;
        }
    }
    ctx->pc = 0x3DA548u;
label_3da548:
    // 0x3da548: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3da548u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3da54c:
    // 0x3da54c: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x3da54cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_3da550:
    // 0x3da550: 0x24632ea0  addiu       $v1, $v1, 0x2EA0
    ctx->pc = 0x3da550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11936));
label_3da554:
    // 0x3da554: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3da554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3da558:
    // 0x3da558: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x3da558u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_3da55c:
    // 0x3da55c: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x3da55cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
label_3da560:
    // 0x3da560: 0xc0e858c  jal         func_3A1630
label_3da564:
    if (ctx->pc == 0x3DA564u) {
        ctx->pc = 0x3DA564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA560u;
        // 0x3da564: 0x8cc545b0  lw          $a1, 0x45B0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 17840)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DA568u;
        goto label_3da568;
    }
    ctx->pc = 0x3DA560u;
    SET_GPR_U32(ctx, 31, 0x3DA568u);
    ctx->pc = 0x3DA564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DA560u;
    // 0x3da564: 0x8cc545b0  lw          $a1, 0x45B0($a2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 17840)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3DA560u, 0x3DA568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA568u;
label_3da568:
    // 0x3da568: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3da568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3da56c:
    // 0x3da56c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3da56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3da570:
    // 0x3da570: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x3da570u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_3da574:
    // 0x3da574: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3da574u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_3da578:
    // 0x3da578: 0x1000000a  b           . + 4 + (0xA << 2)
label_3da57c:
    if (ctx->pc == 0x3DA57Cu) {
        ctx->pc = 0x3DA57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA578u;
        // 0x3da57c: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DA580u;
        goto label_3da580;
    }
    ctx->pc = 0x3DA578u;
    {
        const bool branch_taken_0x3da578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA578u;
        // 0x3da57c: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da578) {
            ctx->pc = 0x3DA5A4u;
            goto label_3da5a4;
        }
    }
    ctx->pc = 0x3DA580u;
label_3da580:
    // 0x3da580: 0x8e27000c  lw          $a3, 0xC($s1)
    ctx->pc = 0x3da580u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_3da584:
    // 0x3da584: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3da584u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3da588:
    // 0x3da588: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x3da588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_3da58c:
    // 0x3da58c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3da58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3da590:
    // 0x3da590: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3da590u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3da594:
    // 0x3da594: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3da594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3da598:
    // 0x3da598: 0x60f809  jalr        $v1
label_3da59c:
    if (ctx->pc == 0x3DA59Cu) {
        ctx->pc = 0x3DA59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA598u;
        // 0x3da59c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DA5A0u;
        goto label_3da5a0;
    }
    ctx->pc = 0x3DA598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3DA5A0u);
        ctx->pc = 0x3DA59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA598u;
        // 0x3da59c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DA598u, 0x3DA5A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DA5A0u;
label_3da5a0:
    // 0x3da5a0: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x3da5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_3da5a4:
    // 0x3da5a4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3da5a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3da5a8:
    // 0x3da5a8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3da5a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3da5ac:
    // 0x3da5ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3da5acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3da5b0:
    // 0x3da5b0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3da5b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3da5b4:
    // 0x3da5b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3da5b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3da5b8:
    // 0x3da5b8: 0x3e00008  jr          $ra
label_3da5bc:
    if (ctx->pc == 0x3DA5BCu) {
        ctx->pc = 0x3DA5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA5B8u;
        // 0x3da5bc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DA5C0u;
        goto label_fallthrough_0x3da5b8;
    }
    ctx->pc = 0x3DA5B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DA5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA5B8u;
        // 0x3da5bc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DA5B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3da5b8:
    ctx->pc = 0x3DA5C0u;
}
