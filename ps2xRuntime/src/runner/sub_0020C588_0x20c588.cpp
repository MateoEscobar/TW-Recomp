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

// Function: sub_0020C588
// Address: 0x20c588 - 0x20c6c8
void sub_0020C588_0x20c588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020C588_0x20c588");
#endif

    switch (ctx->pc) {
        case 0x20c588u: goto label_20c588;
        case 0x20c58cu: goto label_20c58c;
        case 0x20c590u: goto label_20c590;
        case 0x20c594u: goto label_20c594;
        case 0x20c598u: goto label_20c598;
        case 0x20c59cu: goto label_20c59c;
        case 0x20c5a0u: goto label_20c5a0;
        case 0x20c5a4u: goto label_20c5a4;
        case 0x20c5a8u: goto label_20c5a8;
        case 0x20c5acu: goto label_20c5ac;
        case 0x20c5b0u: goto label_20c5b0;
        case 0x20c5b4u: goto label_20c5b4;
        case 0x20c5b8u: goto label_20c5b8;
        case 0x20c5bcu: goto label_20c5bc;
        case 0x20c5c0u: goto label_20c5c0;
        case 0x20c5c4u: goto label_20c5c4;
        case 0x20c5c8u: goto label_20c5c8;
        case 0x20c5ccu: goto label_20c5cc;
        case 0x20c5d0u: goto label_20c5d0;
        case 0x20c5d4u: goto label_20c5d4;
        case 0x20c5d8u: goto label_20c5d8;
        case 0x20c5dcu: goto label_20c5dc;
        case 0x20c5e0u: goto label_20c5e0;
        case 0x20c5e4u: goto label_20c5e4;
        case 0x20c5e8u: goto label_20c5e8;
        case 0x20c5ecu: goto label_20c5ec;
        case 0x20c5f0u: goto label_20c5f0;
        case 0x20c5f4u: goto label_20c5f4;
        case 0x20c5f8u: goto label_20c5f8;
        case 0x20c5fcu: goto label_20c5fc;
        case 0x20c600u: goto label_20c600;
        case 0x20c604u: goto label_20c604;
        case 0x20c608u: goto label_20c608;
        case 0x20c60cu: goto label_20c60c;
        case 0x20c610u: goto label_20c610;
        case 0x20c614u: goto label_20c614;
        case 0x20c618u: goto label_20c618;
        case 0x20c61cu: goto label_20c61c;
        case 0x20c620u: goto label_20c620;
        case 0x20c624u: goto label_20c624;
        case 0x20c628u: goto label_20c628;
        case 0x20c62cu: goto label_20c62c;
        case 0x20c630u: goto label_20c630;
        case 0x20c634u: goto label_20c634;
        case 0x20c638u: goto label_20c638;
        case 0x20c63cu: goto label_20c63c;
        case 0x20c640u: goto label_20c640;
        case 0x20c644u: goto label_20c644;
        case 0x20c648u: goto label_20c648;
        case 0x20c64cu: goto label_20c64c;
        case 0x20c650u: goto label_20c650;
        case 0x20c654u: goto label_20c654;
        case 0x20c658u: goto label_20c658;
        case 0x20c65cu: goto label_20c65c;
        case 0x20c660u: goto label_20c660;
        case 0x20c664u: goto label_20c664;
        case 0x20c668u: goto label_20c668;
        case 0x20c66cu: goto label_20c66c;
        case 0x20c670u: goto label_20c670;
        case 0x20c674u: goto label_20c674;
        case 0x20c678u: goto label_20c678;
        case 0x20c67cu: goto label_20c67c;
        case 0x20c680u: goto label_20c680;
        case 0x20c684u: goto label_20c684;
        case 0x20c688u: goto label_20c688;
        case 0x20c68cu: goto label_20c68c;
        case 0x20c690u: goto label_20c690;
        case 0x20c694u: goto label_20c694;
        case 0x20c698u: goto label_20c698;
        case 0x20c69cu: goto label_20c69c;
        case 0x20c6a0u: goto label_20c6a0;
        case 0x20c6a4u: goto label_20c6a4;
        case 0x20c6a8u: goto label_20c6a8;
        case 0x20c6acu: goto label_20c6ac;
        case 0x20c6b0u: goto label_20c6b0;
        case 0x20c6b4u: goto label_20c6b4;
        case 0x20c6b8u: goto label_20c6b8;
        case 0x20c6bcu: goto label_20c6bc;
        case 0x20c6c0u: goto label_20c6c0;
        case 0x20c6c4u: goto label_20c6c4;
        default: break;
    }

    ctx->pc = 0x20c588u;

label_20c588:
    // 0x20c588: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x20c588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_20c58c:
    // 0x20c58c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x20c58cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_20c590:
    // 0x20c590: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20c590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_20c594:
    // 0x20c594: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x20c594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_20c598:
    // 0x20c598: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20c598u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20c59c:
    // 0x20c59c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20c59cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20c5a0:
    // 0x20c5a0: 0x8c43deb8  lw          $v1, -0x2148($v0)
    ctx->pc = 0x20c5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958776)));
label_20c5a4:
    // 0x20c5a4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x20c5a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20c5a8:
    // 0x20c5a8: 0xc46001d8  lwc1        $f0, 0x1D8($v1)
    ctx->pc = 0x20c5a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20c5ac:
    // 0x20c5ac: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x20c5acu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20c5b0:
    // 0x20c5b0: 0x0  nop
    ctx->pc = 0x20c5b0u;
    // NOP
label_20c5b4:
    // 0x20c5b4: 0x4500003e  bc1f        . + 4 + (0x3E << 2)
label_20c5b8:
    if (ctx->pc == 0x20C5B8u) {
        ctx->pc = 0x20C5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C5B4u;
        // 0x20c5b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C5BCu;
        goto label_20c5bc;
    }
    ctx->pc = 0x20C5B4u;
    {
        const bool branch_taken_0x20c5b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20C5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C5B4u;
        // 0x20c5b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c5b4) {
            ctx->pc = 0x20C6B0u;
            goto label_20c6b0;
        }
    }
    ctx->pc = 0x20C5BCu;
label_20c5bc:
    // 0x20c5bc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x20c5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_20c5c0:
    // 0x20c5c0: 0x54a2000a  bnel        $a1, $v0, . + 4 + (0xA << 2)
label_20c5c4:
    if (ctx->pc == 0x20C5C4u) {
        ctx->pc = 0x20C5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C5C0u;
        // 0x20c5c4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C5C8u;
        goto label_20c5c8;
    }
    ctx->pc = 0x20C5C0u;
    {
        const bool branch_taken_0x20c5c0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x20c5c0) {
            ctx->pc = 0x20C5C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20C5C0u;
            // 0x20c5c4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20C5ECu;
            goto label_20c5ec;
        }
    }
    ctx->pc = 0x20C5C8u;
label_20c5c8:
    // 0x20c5c8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x20c5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_20c5cc:
    // 0x20c5cc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x20c5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_20c5d0:
    // 0x20c5d0: 0x8c64aa84  lw          $a0, -0x557C($v1)
    ctx->pc = 0x20c5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945412)));
label_20c5d4:
    // 0x20c5d4: 0x3442ff01  ori         $v0, $v0, 0xFF01
    ctx->pc = 0x20c5d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65281);
label_20c5d8:
    // 0x20c5d8: 0xae220074  sw          $v0, 0x74($s1)
    ctx->pc = 0x20c5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 2));
label_20c5dc:
    // 0x20c5dc: 0xc043f0c  jal         func_10FC30
label_20c5e0:
    if (ctx->pc == 0x20C5E0u) {
        ctx->pc = 0x20C5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C5DCu;
        // 0x20c5e0: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C5E4u;
        goto label_20c5e4;
    }
    ctx->pc = 0x20C5DCu;
    SET_GPR_U32(ctx, 31, 0x20C5E4u);
    ctx->pc = 0x20C5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C5DCu;
    // 0x20c5e0: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC30u, 0x20C5DCu, 0x20C5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C5E4u;
label_20c5e4:
    // 0x20c5e4: 0x10000032  b           . + 4 + (0x32 << 2)
label_20c5e8:
    if (ctx->pc == 0x20C5E8u) {
        ctx->pc = 0x20C5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C5E4u;
        // 0x20c5e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C5ECu;
        goto label_20c5ec;
    }
    ctx->pc = 0x20C5E4u;
    {
        const bool branch_taken_0x20c5e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C5E4u;
        // 0x20c5e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c5e4) {
            ctx->pc = 0x20C6B0u;
            goto label_20c6b0;
        }
    }
    ctx->pc = 0x20C5ECu;
label_20c5ec:
    // 0x20c5ec: 0x14a20030  bne         $a1, $v0, . + 4 + (0x30 << 2)
label_20c5f0:
    if (ctx->pc == 0x20C5F0u) {
        ctx->pc = 0x20C5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C5ECu;
        // 0x20c5f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C5F4u;
        goto label_20c5f4;
    }
    ctx->pc = 0x20C5ECu;
    {
        const bool branch_taken_0x20c5ec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x20C5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C5ECu;
        // 0x20c5f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c5ec) {
            ctx->pc = 0x20C6B0u;
            goto label_20c6b0;
        }
    }
    ctx->pc = 0x20C5F4u;
label_20c5f4:
    // 0x20c5f4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x20c5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_20c5f8:
    // 0x20c5f8: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x20c5f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_20c5fc:
    // 0x20c5fc: 0xc043f0c  jal         func_10FC30
label_20c600:
    if (ctx->pc == 0x20C600u) {
        ctx->pc = 0x20C600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C5FCu;
        // 0x20c600: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C604u;
        goto label_20c604;
    }
    ctx->pc = 0x20C5FCu;
    SET_GPR_U32(ctx, 31, 0x20C604u);
    ctx->pc = 0x20C600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C5FCu;
    // 0x20c600: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC30u, 0x20C5FCu, 0x20C604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C604u;
label_20c604:
    // 0x20c604: 0xc0750fa  jal         func_1D43E8
label_20c608:
    if (ctx->pc == 0x20C608u) {
        ctx->pc = 0x20C608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C604u;
        // 0x20c608: 0x8e240090  lw          $a0, 0x90($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C60Cu;
        goto label_20c60c;
    }
    ctx->pc = 0x20C604u;
    SET_GPR_U32(ctx, 31, 0x20C60Cu);
    ctx->pc = 0x20C608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C604u;
    // 0x20c608: 0x8e240090  lw          $a0, 0x90($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D43E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D43E8u, 0x20C604u, 0x20C60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C60Cu;
label_20c60c:
    // 0x20c60c: 0x8e240090  lw          $a0, 0x90($s1)
    ctx->pc = 0x20c60cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_20c610:
    // 0x20c610: 0xc0750fc  jal         func_1D43F0
label_20c614:
    if (ctx->pc == 0x20C614u) {
        ctx->pc = 0x20C614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C610u;
        // 0x20c614: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C618u;
        goto label_20c618;
    }
    ctx->pc = 0x20C610u;
    SET_GPR_U32(ctx, 31, 0x20C618u);
    ctx->pc = 0x20C614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C610u;
    // 0x20c614: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D43F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D43F0u, 0x20C610u, 0x20C618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C618u;
label_20c618:
    // 0x20c618: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20c618u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20c61c:
    // 0x20c61c: 0xc081016  jal         func_204058
label_20c620:
    if (ctx->pc == 0x20C620u) {
        ctx->pc = 0x20C620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C61Cu;
        // 0x20c620: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C624u;
        goto label_20c624;
    }
    ctx->pc = 0x20C61Cu;
    SET_GPR_U32(ctx, 31, 0x20C624u);
    ctx->pc = 0x20C620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C61Cu;
    // 0x20c620: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204058u, 0x20C61Cu, 0x20C624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C624u;
label_20c624:
    // 0x20c624: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_20c628:
    if (ctx->pc == 0x20C628u) {
        ctx->pc = 0x20C628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C624u;
        // 0x20c628: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C62Cu;
        goto label_20c62c;
    }
    ctx->pc = 0x20C624u;
    {
        const bool branch_taken_0x20c624 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x20C628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C624u;
        // 0x20c628: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c624) {
            ctx->pc = 0x20C634u;
            goto label_20c634;
        }
    }
    ctx->pc = 0x20C62Cu;
label_20c62c:
    // 0x20c62c: 0x10000020  b           . + 4 + (0x20 << 2)
label_20c630:
    if (ctx->pc == 0x20C630u) {
        ctx->pc = 0x20C630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C62Cu;
        // 0x20c630: 0xae200074  sw          $zero, 0x74($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C634u;
        goto label_20c634;
    }
    ctx->pc = 0x20C62Cu;
    {
        const bool branch_taken_0x20c62c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C62Cu;
        // 0x20c630: 0xae200074  sw          $zero, 0x74($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c62c) {
            ctx->pc = 0x20C6B0u;
            goto label_20c6b0;
        }
    }
    ctx->pc = 0x20C634u;
label_20c634:
    // 0x20c634: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
label_20c638:
    if (ctx->pc == 0x20C638u) {
        ctx->pc = 0x20C638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C634u;
        // 0x20c638: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C63Cu;
        goto label_20c63c;
    }
    ctx->pc = 0x20C634u;
    {
        const bool branch_taken_0x20c634 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x20C638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C634u;
        // 0x20c638: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c634) {
            ctx->pc = 0x20C644u;
            goto label_20c644;
        }
    }
    ctx->pc = 0x20C63Cu;
label_20c63c:
    // 0x20c63c: 0x1000ffe9  b           . + 4 + (-0x17 << 2)
label_20c640:
    if (ctx->pc == 0x20C640u) {
        ctx->pc = 0x20C640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C63Cu;
        // 0x20c640: 0xae300074  sw          $s0, 0x74($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C644u;
        goto label_20c644;
    }
    ctx->pc = 0x20C63Cu;
    {
        const bool branch_taken_0x20c63c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C63Cu;
        // 0x20c640: 0xae300074  sw          $s0, 0x74($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c63c) {
            ctx->pc = 0x20C5E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20c5e4;
        }
    }
    ctx->pc = 0x20C644u;
label_20c644:
    // 0x20c644: 0x16020006  bne         $s0, $v0, . + 4 + (0x6 << 2)
label_20c648:
    if (ctx->pc == 0x20C648u) {
        ctx->pc = 0x20C648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C644u;
        // 0x20c648: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C64Cu;
        goto label_20c64c;
    }
    ctx->pc = 0x20C644u;
    {
        const bool branch_taken_0x20c644 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x20C648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C644u;
        // 0x20c648: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c644) {
            ctx->pc = 0x20C660u;
            goto label_20c660;
        }
    }
    ctx->pc = 0x20C64Cu;
label_20c64c:
    // 0x20c64c: 0xae300074  sw          $s0, 0x74($s1)
    ctx->pc = 0x20c64cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 16));
label_20c650:
    // 0x20c650: 0xc081016  jal         func_204058
label_20c654:
    if (ctx->pc == 0x20C654u) {
        ctx->pc = 0x20C654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C650u;
        // 0x20c654: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C658u;
        goto label_20c658;
    }
    ctx->pc = 0x20C650u;
    SET_GPR_U32(ctx, 31, 0x20C658u);
    ctx->pc = 0x20C654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C650u;
    // 0x20c654: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204058u, 0x20C650u, 0x20C658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C658u;
label_20c658:
    // 0x20c658: 0x10000015  b           . + 4 + (0x15 << 2)
label_20c65c:
    if (ctx->pc == 0x20C65Cu) {
        ctx->pc = 0x20C65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C658u;
        // 0x20c65c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C660u;
        goto label_20c660;
    }
    ctx->pc = 0x20C658u;
    {
        const bool branch_taken_0x20c658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C658u;
        // 0x20c65c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c658) {
            ctx->pc = 0x20C6B0u;
            goto label_20c6b0;
        }
    }
    ctx->pc = 0x20C660u;
label_20c660:
    // 0x20c660: 0x16020013  bne         $s0, $v0, . + 4 + (0x13 << 2)
label_20c664:
    if (ctx->pc == 0x20C664u) {
        ctx->pc = 0x20C664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C660u;
        // 0x20c664: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C668u;
        goto label_20c668;
    }
    ctx->pc = 0x20C660u;
    {
        const bool branch_taken_0x20c660 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x20C664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C660u;
        // 0x20c664: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c660) {
            ctx->pc = 0x20C6B0u;
            goto label_20c6b0;
        }
    }
    ctx->pc = 0x20C668u;
label_20c668:
    // 0x20c668: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x20c668u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_20c66c:
    // 0x20c66c: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x20c66cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_20c670:
    // 0x20c670: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x20c670u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_20c674:
    // 0x20c674: 0x24a59320  addiu       $a1, $a1, -0x6CE0
    ctx->pc = 0x20c674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939424));
label_20c678:
    // 0x20c678: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x20c678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_20c67c:
    // 0x20c67c: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x20c67cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_20c680:
    // 0x20c680: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x20c680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_20c684:
    // 0x20c684: 0x40f809  jalr        $v0
label_20c688:
    if (ctx->pc == 0x20C688u) {
        ctx->pc = 0x20C688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C684u;
        // 0x20c688: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C68Cu;
        goto label_20c68c;
    }
    ctx->pc = 0x20C684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20C68Cu);
        ctx->pc = 0x20C688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C684u;
        // 0x20c688: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20C684u, 0x20C68Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20C68Cu;
label_20c68c:
    // 0x20c68c: 0x8e072b04  lw          $a3, 0x2B04($s0)
    ctx->pc = 0x20c68cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_20c690:
    // 0x20c690: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20c690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20c694:
    // 0x20c694: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x20c694u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20c698:
    // 0x20c698: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x20c698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_20c69c:
    // 0x20c69c: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x20c69cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_20c6a0:
    // 0x20c6a0: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x20c6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_20c6a4:
    // 0x20c6a4: 0x60f809  jalr        $v1
label_20c6a8:
    if (ctx->pc == 0x20C6A8u) {
        ctx->pc = 0x20C6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C6A4u;
        // 0x20c6a8: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C6ACu;
        goto label_20c6ac;
    }
    ctx->pc = 0x20C6A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20C6ACu);
        ctx->pc = 0x20C6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C6A4u;
        // 0x20c6a8: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20C6A4u, 0x20C6ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20C6ACu;
label_20c6ac:
    // 0x20c6ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20c6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20c6b0:
    // 0x20c6b0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x20c6b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20c6b4:
    // 0x20c6b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20c6b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20c6b8:
    // 0x20c6b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20c6b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20c6bc:
    // 0x20c6bc: 0x3e00008  jr          $ra
label_20c6c0:
    if (ctx->pc == 0x20C6C0u) {
        ctx->pc = 0x20C6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C6BCu;
        // 0x20c6c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C6C4u;
        goto label_20c6c4;
    }
    ctx->pc = 0x20C6BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20C6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C6BCu;
        // 0x20c6c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20C6BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20C6C4u;
label_20c6c4:
    // 0x20c6c4: 0x0  nop
    ctx->pc = 0x20c6c4u;
    // NOP
    ctx->pc = 0x20c6c8u;
}
