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

// Function: sub_00416530
// Address: 0x416530 - 0x416690
void sub_00416530_0x416530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00416530_0x416530");
#endif

    switch (ctx->pc) {
        case 0x416530u: goto label_416530;
        case 0x416534u: goto label_416534;
        case 0x416538u: goto label_416538;
        case 0x41653cu: goto label_41653c;
        case 0x416540u: goto label_416540;
        case 0x416544u: goto label_416544;
        case 0x416548u: goto label_416548;
        case 0x41654cu: goto label_41654c;
        case 0x416550u: goto label_416550;
        case 0x416554u: goto label_416554;
        case 0x416558u: goto label_416558;
        case 0x41655cu: goto label_41655c;
        case 0x416560u: goto label_416560;
        case 0x416564u: goto label_416564;
        case 0x416568u: goto label_416568;
        case 0x41656cu: goto label_41656c;
        case 0x416570u: goto label_416570;
        case 0x416574u: goto label_416574;
        case 0x416578u: goto label_416578;
        case 0x41657cu: goto label_41657c;
        case 0x416580u: goto label_416580;
        case 0x416584u: goto label_416584;
        case 0x416588u: goto label_416588;
        case 0x41658cu: goto label_41658c;
        case 0x416590u: goto label_416590;
        case 0x416594u: goto label_416594;
        case 0x416598u: goto label_416598;
        case 0x41659cu: goto label_41659c;
        case 0x4165a0u: goto label_4165a0;
        case 0x4165a4u: goto label_4165a4;
        case 0x4165a8u: goto label_4165a8;
        case 0x4165acu: goto label_4165ac;
        case 0x4165b0u: goto label_4165b0;
        case 0x4165b4u: goto label_4165b4;
        case 0x4165b8u: goto label_4165b8;
        case 0x4165bcu: goto label_4165bc;
        case 0x4165c0u: goto label_4165c0;
        case 0x4165c4u: goto label_4165c4;
        case 0x4165c8u: goto label_4165c8;
        case 0x4165ccu: goto label_4165cc;
        case 0x4165d0u: goto label_4165d0;
        case 0x4165d4u: goto label_4165d4;
        case 0x4165d8u: goto label_4165d8;
        case 0x4165dcu: goto label_4165dc;
        case 0x4165e0u: goto label_4165e0;
        case 0x4165e4u: goto label_4165e4;
        case 0x4165e8u: goto label_4165e8;
        case 0x4165ecu: goto label_4165ec;
        case 0x4165f0u: goto label_4165f0;
        case 0x4165f4u: goto label_4165f4;
        case 0x4165f8u: goto label_4165f8;
        case 0x4165fcu: goto label_4165fc;
        case 0x416600u: goto label_416600;
        case 0x416604u: goto label_416604;
        case 0x416608u: goto label_416608;
        case 0x41660cu: goto label_41660c;
        case 0x416610u: goto label_416610;
        case 0x416614u: goto label_416614;
        case 0x416618u: goto label_416618;
        case 0x41661cu: goto label_41661c;
        case 0x416620u: goto label_416620;
        case 0x416624u: goto label_416624;
        case 0x416628u: goto label_416628;
        case 0x41662cu: goto label_41662c;
        case 0x416630u: goto label_416630;
        case 0x416634u: goto label_416634;
        case 0x416638u: goto label_416638;
        case 0x41663cu: goto label_41663c;
        case 0x416640u: goto label_416640;
        case 0x416644u: goto label_416644;
        case 0x416648u: goto label_416648;
        case 0x41664cu: goto label_41664c;
        case 0x416650u: goto label_416650;
        case 0x416654u: goto label_416654;
        case 0x416658u: goto label_416658;
        case 0x41665cu: goto label_41665c;
        case 0x416660u: goto label_416660;
        case 0x416664u: goto label_416664;
        case 0x416668u: goto label_416668;
        case 0x41666cu: goto label_41666c;
        case 0x416670u: goto label_416670;
        case 0x416674u: goto label_416674;
        case 0x416678u: goto label_416678;
        case 0x41667cu: goto label_41667c;
        case 0x416680u: goto label_416680;
        case 0x416684u: goto label_416684;
        case 0x416688u: goto label_416688;
        case 0x41668cu: goto label_41668c;
        default: break;
    }

    ctx->pc = 0x416530u;

label_416530:
    // 0x416530: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x416530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_416534:
    // 0x416534: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x416534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_416538:
    // 0x416538: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x416538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_41653c:
    // 0x41653c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x41653cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_416540:
    // 0x416540: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x416540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_416544:
    // 0x416544: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x416544u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_416548:
    // 0x416548: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x416548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_41654c:
    // 0x41654c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x41654cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_416550:
    // 0x416550: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x416550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_416554:
    // 0x416554: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x416554u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_416558:
    // 0x416558: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x416558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_41655c:
    // 0x41655c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x41655cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_416560:
    // 0x416560: 0x8e020178  lw          $v0, 0x178($s0)
    ctx->pc = 0x416560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 376)));
label_416564:
    // 0x416564: 0xc043d5e  jal         func_10F578
label_416568:
    if (ctx->pc == 0x416568u) {
        ctx->pc = 0x416568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416564u;
        // 0x416568: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41656Cu;
        goto label_41656c;
    }
    ctx->pc = 0x416564u;
    SET_GPR_U32(ctx, 31, 0x41656Cu);
    ctx->pc = 0x416568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x416564u;
    // 0x416568: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x416564u, 0x41656Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41656Cu;
label_41656c:
    // 0x41656c: 0x54400040  bnel        $v0, $zero, . + 4 + (0x40 << 2)
label_416570:
    if (ctx->pc == 0x416570u) {
        ctx->pc = 0x416570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41656Cu;
        // 0x416570: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x416574u;
        goto label_416574;
    }
    ctx->pc = 0x41656Cu;
    {
        const bool branch_taken_0x41656c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x41656c) {
            ctx->pc = 0x416570u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41656Cu;
            // 0x416570: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x416670u;
            goto label_416670;
        }
    }
    ctx->pc = 0x416574u;
label_416574:
    // 0x416574: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x416574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_416578:
    // 0x416578: 0xc1059c6  jal         func_416718
label_41657c:
    if (ctx->pc == 0x41657Cu) {
        ctx->pc = 0x41657Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416578u;
        // 0x41657c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x416580u;
        goto label_416580;
    }
    ctx->pc = 0x416578u;
    SET_GPR_U32(ctx, 31, 0x416580u);
    ctx->pc = 0x41657Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x416578u;
    // 0x41657c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x416718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x416718u, 0x416578u, 0x416580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x416580u;
label_416580:
    // 0x416580: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
label_416584:
    if (ctx->pc == 0x416584u) {
        ctx->pc = 0x416584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416580u;
        // 0x416584: 0x3c140070  lui         $s4, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x416588u;
        goto label_416588;
    }
    ctx->pc = 0x416580u;
    {
        const bool branch_taken_0x416580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x416584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416580u;
        // 0x416584: 0x3c140070  lui         $s4, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416580) {
            ctx->pc = 0x41666Cu;
            goto label_41666c;
        }
    }
    ctx->pc = 0x416588u;
label_416588:
    // 0x416588: 0xc0e409a  jal         func_390268
label_41658c:
    if (ctx->pc == 0x41658Cu) {
        ctx->pc = 0x41658Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416588u;
        // 0x41658c: 0x2684d8f0  addiu       $a0, $s4, -0x2710 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294957296));
        ctx->in_delay_slot = false;
        ctx->pc = 0x416590u;
        goto label_416590;
    }
    ctx->pc = 0x416588u;
    SET_GPR_U32(ctx, 31, 0x416590u);
    ctx->pc = 0x41658Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x416588u;
    // 0x41658c: 0x2684d8f0  addiu       $a0, $s4, -0x2710 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294957296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x416588u, 0x416590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x416590u;
label_416590:
    // 0x416590: 0x1450000d  bne         $v0, $s0, . + 4 + (0xD << 2)
label_416594:
    if (ctx->pc == 0x416594u) {
        ctx->pc = 0x416594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416590u;
        // 0x416594: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x416598u;
        goto label_416598;
    }
    ctx->pc = 0x416590u;
    {
        const bool branch_taken_0x416590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x416594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416590u;
        // 0x416594: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416590) {
            ctx->pc = 0x4165C8u;
            goto label_4165c8;
        }
    }
    ctx->pc = 0x416598u;
label_416598:
    // 0x416598: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x416598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_41659c:
    // 0x41659c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x41659cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_4165a0:
    // 0x4165a0: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x4165a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_4165a4:
    // 0x4165a4: 0x8c65484c  lw          $a1, 0x484C($v1)
    ctx->pc = 0x4165a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18508)));
label_4165a8:
    // 0x4165a8: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x4165a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_4165ac:
    // 0x4165ac: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x4165acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_4165b0:
    // 0x4165b0: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
label_4165b4:
    if (ctx->pc == 0x4165B4u) {
        ctx->pc = 0x4165B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4165B0u;
        // 0x4165b4: 0x21023  negu        $v0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4165B8u;
        goto label_4165b8;
    }
    ctx->pc = 0x4165B0u;
    {
        const bool branch_taken_0x4165b0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4165b0) {
            ctx->pc = 0x4165B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4165B0u;
            // 0x4165b4: 0x21023  negu        $v0, $v0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4165B8u;
            goto label_4165b8;
        }
    }
    ctx->pc = 0x4165B8u;
label_4165b8:
    // 0x4165b8: 0x28422710  slti        $v0, $v0, 0x2710
    ctx->pc = 0x4165b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10000) ? 1 : 0);
label_4165bc:
    // 0x4165bc: 0x5440002c  bnel        $v0, $zero, . + 4 + (0x2C << 2)
label_4165c0:
    if (ctx->pc == 0x4165C0u) {
        ctx->pc = 0x4165C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4165BCu;
        // 0x4165c0: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4165C4u;
        goto label_4165c4;
    }
    ctx->pc = 0x4165BCu;
    {
        const bool branch_taken_0x4165bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4165bc) {
            ctx->pc = 0x4165C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4165BCu;
            // 0x4165c0: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x416670u;
            goto label_416670;
        }
    }
    ctx->pc = 0x4165C4u;
label_4165c4:
    // 0x4165c4: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x4165c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_4165c8:
    // 0x4165c8: 0xc0cd4e4  jal         func_335390
label_4165cc:
    if (ctx->pc == 0x4165CCu) {
        ctx->pc = 0x4165CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4165C8u;
        // 0x4165cc: 0x2484b8b0  addiu       $a0, $a0, -0x4750 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4165D0u;
        goto label_4165d0;
    }
    ctx->pc = 0x4165C8u;
    SET_GPR_U32(ctx, 31, 0x4165D0u);
    ctx->pc = 0x4165CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4165C8u;
    // 0x4165cc: 0x2484b8b0  addiu       $a0, $a0, -0x4750 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335390u, 0x4165C8u, 0x4165D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4165D0u;
label_4165d0:
    // 0x4165d0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4165d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4165d4:
    // 0x4165d4: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x4165d4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_4165d8:
    // 0x4165d8: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_4165dc:
    if (ctx->pc == 0x4165DCu) {
        ctx->pc = 0x4165DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4165D8u;
        // 0x4165dc: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4165E0u;
        goto label_4165e0;
    }
    ctx->pc = 0x4165D8u;
    {
        const bool branch_taken_0x4165d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4165d8) {
            ctx->pc = 0x4165DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4165D8u;
            // 0x4165dc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4165E0u;
            goto label_4165e0;
        }
    }
    ctx->pc = 0x4165E0u;
label_4165e0:
    // 0x4165e0: 0x2010  mfhi        $a0
    ctx->pc = 0x4165e0u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_4165e4:
    // 0x4165e4: 0x10910003  beq         $a0, $s1, . + 4 + (0x3 << 2)
label_4165e8:
    if (ctx->pc == 0x4165E8u) {
        ctx->pc = 0x4165ECu;
        goto label_4165ec;
    }
    ctx->pc = 0x4165E4u;
    {
        const bool branch_taken_0x4165e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 17));
        if (branch_taken_0x4165e4) {
            ctx->pc = 0x4165F4u;
            goto label_4165f4;
        }
    }
    ctx->pc = 0x4165ECu;
label_4165ec:
    // 0x4165ec: 0x56710020  bnel        $s3, $s1, . + 4 + (0x20 << 2)
label_4165f0:
    if (ctx->pc == 0x4165F0u) {
        ctx->pc = 0x4165F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4165ECu;
        // 0x4165f0: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4165F4u;
        goto label_4165f4;
    }
    ctx->pc = 0x4165ECu;
    {
        const bool branch_taken_0x4165ec = (GPR_U64(ctx, 19) != GPR_U64(ctx, 17));
        if (branch_taken_0x4165ec) {
            ctx->pc = 0x4165F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4165ECu;
            // 0x4165f0: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x416670u;
            goto label_416670;
        }
    }
    ctx->pc = 0x4165F4u;
label_4165f4:
    // 0x4165f4: 0xc0a47b4  jal         func_291ED0
label_4165f8:
    if (ctx->pc == 0x4165F8u) {
        ctx->pc = 0x4165F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4165F4u;
        // 0x4165f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4165FCu;
        goto label_4165fc;
    }
    ctx->pc = 0x4165F4u;
    SET_GPR_U32(ctx, 31, 0x4165FCu);
    ctx->pc = 0x4165F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4165F4u;
    // 0x4165f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291ED0u, 0x4165F4u, 0x4165FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4165FCu;
label_4165fc:
    // 0x4165fc: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_416600:
    if (ctx->pc == 0x416600u) {
        ctx->pc = 0x416600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4165FCu;
        // 0x416600: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x416604u;
        goto label_416604;
    }
    ctx->pc = 0x4165FCu;
    {
        const bool branch_taken_0x4165fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x416600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4165FCu;
        // 0x416600: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4165fc) {
            ctx->pc = 0x41666Cu;
            goto label_41666c;
        }
    }
    ctx->pc = 0x416604u;
label_416604:
    // 0x416604: 0x964300d0  lhu         $v1, 0xD0($s2)
    ctx->pc = 0x416604u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 208)));
label_416608:
    // 0x416608: 0x2442a310  addiu       $v0, $v0, -0x5CF0
    ctx->pc = 0x416608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943504));
label_41660c:
    // 0x41660c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x41660cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_416610:
    // 0x416610: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x416610u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_416614:
    // 0x416614: 0x8c89bd30  lw          $t1, -0x42D0($a0)
    ctx->pc = 0x416614u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294950192)));
label_416618:
    // 0x416618: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x416618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_41661c:
    // 0x41661c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x41661cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_416620:
    // 0x416620: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x416620u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_416624:
    // 0x416624: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x416624u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_416628:
    // 0x416628: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x416628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41662c:
    // 0x41662c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x41662cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_416630:
    // 0x416630: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x416630u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_416634:
    // 0x416634: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x416634u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_416638:
    // 0x416638: 0xc088178  jal         func_2205E0
label_41663c:
    if (ctx->pc == 0x41663Cu) {
        ctx->pc = 0x41663Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416638u;
        // 0x41663c: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x416640u;
        goto label_416640;
    }
    ctx->pc = 0x416638u;
    SET_GPR_U32(ctx, 31, 0x416640u);
    ctx->pc = 0x41663Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x416638u;
    // 0x41663c: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x416638u, 0x416640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x416640u;
label_416640:
    // 0x416640: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x416640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_416644:
    // 0x416644: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x416644u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_416648:
    // 0x416648: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x416648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_41664c:
    // 0x41664c: 0x40f809  jalr        $v0
label_416650:
    if (ctx->pc == 0x416650u) {
        ctx->pc = 0x416650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41664Cu;
        // 0x416650: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x416654u;
        goto label_416654;
    }
    ctx->pc = 0x41664Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x416654u);
        ctx->pc = 0x416650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41664Cu;
        // 0x416650: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41664Cu, 0x416654u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x416654u;
label_416654:
    // 0x416654: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x416654u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_416658:
    // 0x416658: 0xae82d8f0  sw          $v0, -0x2710($s4)
    ctx->pc = 0x416658u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294957296), GPR_U32(ctx, 2));
label_41665c:
    // 0x41665c: 0x8c64b734  lw          $a0, -0x48CC($v1)
    ctx->pc = 0x41665cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948660)));
label_416660:
    // 0x416660: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x416660u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_416664:
    // 0x416664: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x416664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_416668:
    // 0x416668: 0xaca2484c  sw          $v0, 0x484C($a1)
    ctx->pc = 0x416668u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 18508), GPR_U32(ctx, 2));
label_41666c:
    // 0x41666c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x41666cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_416670:
    // 0x416670: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x416670u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_416674:
    // 0x416674: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x416674u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_416678:
    // 0x416678: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x416678u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_41667c:
    // 0x41667c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x41667cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_416680:
    // 0x416680: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x416680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_416684:
    // 0x416684: 0x3e00008  jr          $ra
label_416688:
    if (ctx->pc == 0x416688u) {
        ctx->pc = 0x416688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416684u;
        // 0x416688: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41668Cu;
        goto label_41668c;
    }
    ctx->pc = 0x416684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x416688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416684u;
        // 0x416688: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x416684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41668Cu;
label_41668c:
    // 0x41668c: 0x0  nop
    ctx->pc = 0x41668cu;
    // NOP
    ctx->pc = 0x416690u;
}
