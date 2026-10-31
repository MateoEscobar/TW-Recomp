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

// Function: sub_003AF590
// Address: 0x3af590 - 0x3af720
void sub_003AF590_0x3af590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AF590_0x3af590");
#endif

    switch (ctx->pc) {
        case 0x3af590u: goto label_3af590;
        case 0x3af594u: goto label_3af594;
        case 0x3af598u: goto label_3af598;
        case 0x3af59cu: goto label_3af59c;
        case 0x3af5a0u: goto label_3af5a0;
        case 0x3af5a4u: goto label_3af5a4;
        case 0x3af5a8u: goto label_3af5a8;
        case 0x3af5acu: goto label_3af5ac;
        case 0x3af5b0u: goto label_3af5b0;
        case 0x3af5b4u: goto label_3af5b4;
        case 0x3af5b8u: goto label_3af5b8;
        case 0x3af5bcu: goto label_3af5bc;
        case 0x3af5c0u: goto label_3af5c0;
        case 0x3af5c4u: goto label_3af5c4;
        case 0x3af5c8u: goto label_3af5c8;
        case 0x3af5ccu: goto label_3af5cc;
        case 0x3af5d0u: goto label_3af5d0;
        case 0x3af5d4u: goto label_3af5d4;
        case 0x3af5d8u: goto label_3af5d8;
        case 0x3af5dcu: goto label_3af5dc;
        case 0x3af5e0u: goto label_3af5e0;
        case 0x3af5e4u: goto label_3af5e4;
        case 0x3af5e8u: goto label_3af5e8;
        case 0x3af5ecu: goto label_3af5ec;
        case 0x3af5f0u: goto label_3af5f0;
        case 0x3af5f4u: goto label_3af5f4;
        case 0x3af5f8u: goto label_3af5f8;
        case 0x3af5fcu: goto label_3af5fc;
        case 0x3af600u: goto label_3af600;
        case 0x3af604u: goto label_3af604;
        case 0x3af608u: goto label_3af608;
        case 0x3af60cu: goto label_3af60c;
        case 0x3af610u: goto label_3af610;
        case 0x3af614u: goto label_3af614;
        case 0x3af618u: goto label_3af618;
        case 0x3af61cu: goto label_3af61c;
        case 0x3af620u: goto label_3af620;
        case 0x3af624u: goto label_3af624;
        case 0x3af628u: goto label_3af628;
        case 0x3af62cu: goto label_3af62c;
        case 0x3af630u: goto label_3af630;
        case 0x3af634u: goto label_3af634;
        case 0x3af638u: goto label_3af638;
        case 0x3af63cu: goto label_3af63c;
        case 0x3af640u: goto label_3af640;
        case 0x3af644u: goto label_3af644;
        case 0x3af648u: goto label_3af648;
        case 0x3af64cu: goto label_3af64c;
        case 0x3af650u: goto label_3af650;
        case 0x3af654u: goto label_3af654;
        case 0x3af658u: goto label_3af658;
        case 0x3af65cu: goto label_3af65c;
        case 0x3af660u: goto label_3af660;
        case 0x3af664u: goto label_3af664;
        case 0x3af668u: goto label_3af668;
        case 0x3af66cu: goto label_3af66c;
        case 0x3af670u: goto label_3af670;
        case 0x3af674u: goto label_3af674;
        case 0x3af678u: goto label_3af678;
        case 0x3af67cu: goto label_3af67c;
        case 0x3af680u: goto label_3af680;
        case 0x3af684u: goto label_3af684;
        case 0x3af688u: goto label_3af688;
        case 0x3af68cu: goto label_3af68c;
        case 0x3af690u: goto label_3af690;
        case 0x3af694u: goto label_3af694;
        case 0x3af698u: goto label_3af698;
        case 0x3af69cu: goto label_3af69c;
        case 0x3af6a0u: goto label_3af6a0;
        case 0x3af6a4u: goto label_3af6a4;
        case 0x3af6a8u: goto label_3af6a8;
        case 0x3af6acu: goto label_3af6ac;
        case 0x3af6b0u: goto label_3af6b0;
        case 0x3af6b4u: goto label_3af6b4;
        case 0x3af6b8u: goto label_3af6b8;
        case 0x3af6bcu: goto label_3af6bc;
        case 0x3af6c0u: goto label_3af6c0;
        case 0x3af6c4u: goto label_3af6c4;
        case 0x3af6c8u: goto label_3af6c8;
        case 0x3af6ccu: goto label_3af6cc;
        case 0x3af6d0u: goto label_3af6d0;
        case 0x3af6d4u: goto label_3af6d4;
        case 0x3af6d8u: goto label_3af6d8;
        case 0x3af6dcu: goto label_3af6dc;
        case 0x3af6e0u: goto label_3af6e0;
        case 0x3af6e4u: goto label_3af6e4;
        case 0x3af6e8u: goto label_3af6e8;
        case 0x3af6ecu: goto label_3af6ec;
        case 0x3af6f0u: goto label_3af6f0;
        case 0x3af6f4u: goto label_3af6f4;
        case 0x3af6f8u: goto label_3af6f8;
        case 0x3af6fcu: goto label_3af6fc;
        case 0x3af700u: goto label_3af700;
        case 0x3af704u: goto label_3af704;
        case 0x3af708u: goto label_3af708;
        case 0x3af70cu: goto label_3af70c;
        case 0x3af710u: goto label_3af710;
        case 0x3af714u: goto label_3af714;
        case 0x3af718u: goto label_3af718;
        case 0x3af71cu: goto label_3af71c;
        default: break;
    }

    ctx->pc = 0x3af590u;

label_3af590:
    // 0x3af590: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x3af590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_3af594:
    // 0x3af594: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x3af594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_3af598:
    // 0x3af598: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x3af598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_3af59c:
    // 0x3af59c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3af59cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3af5a0:
    // 0x3af5a0: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x3af5a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_3af5a4:
    // 0x3af5a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3af5a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3af5a8:
    // 0x3af5a8: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x3af5a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_3af5ac:
    // 0x3af5ac: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x3af5acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_3af5b0:
    // 0x3af5b0: 0x3c139a16  lui         $s3, 0x9A16
    ctx->pc = 0x3af5b0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)39446 << 16));
label_3af5b4:
    // 0x3af5b4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3af5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3af5b8:
    // 0x3af5b8: 0x367316ff  ori         $s3, $s3, 0x16FF
    ctx->pc = 0x3af5b8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)5887);
label_3af5bc:
    // 0x3af5bc: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x3af5bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_3af5c0:
    // 0x3af5c0: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x3af5c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_3af5c4:
    // 0x3af5c4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3af5c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3af5c8:
    // 0x3af5c8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3af5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3af5cc:
    // 0x3af5cc: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3af5ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3af5d0:
    // 0x3af5d0: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3af5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3af5d4:
    // 0x3af5d4: 0x40f809  jalr        $v0
label_3af5d8:
    if (ctx->pc == 0x3AF5D8u) {
        ctx->pc = 0x3AF5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF5D4u;
        // 0x3af5d8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF5DCu;
        goto label_3af5dc;
    }
    ctx->pc = 0x3AF5D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AF5DCu);
        ctx->pc = 0x3AF5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF5D4u;
        // 0x3af5d8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AF5D4u, 0x3AF5DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AF5DCu;
label_3af5dc:
    // 0x3af5dc: 0x3c030480  lui         $v1, 0x480
    ctx->pc = 0x3af5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1152 << 16));
label_3af5e0:
    // 0x3af5e0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3af5e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3af5e4:
    // 0x3af5e4: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x3af5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
label_3af5e8:
    // 0x3af5e8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3af5e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3af5ec:
    // 0x3af5ec: 0xc0e858c  jal         func_3A1630
label_3af5f0:
    if (ctx->pc == 0x3AF5F0u) {
        ctx->pc = 0x3AF5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF5ECu;
        // 0x3af5f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF5F4u;
        goto label_3af5f4;
    }
    ctx->pc = 0x3AF5ECu;
    SET_GPR_U32(ctx, 31, 0x3AF5F4u);
    ctx->pc = 0x3AF5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF5ECu;
    // 0x3af5f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3AF5ECu, 0x3AF5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF5F4u;
label_3af5f4:
    // 0x3af5f4: 0xc0ea146  jal         func_3A8518
label_3af5f8:
    if (ctx->pc == 0x3AF5F8u) {
        ctx->pc = 0x3AF5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF5F4u;
        // 0x3af5f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF5FCu;
        goto label_3af5fc;
    }
    ctx->pc = 0x3AF5F4u;
    SET_GPR_U32(ctx, 31, 0x3AF5FCu);
    ctx->pc = 0x3AF5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF5F4u;
    // 0x3af5f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3AF5F4u, 0x3AF5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF5FCu;
label_3af5fc:
    // 0x3af5fc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3af5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3af600:
    // 0x3af600: 0xc0ea12a  jal         func_3A84A8
label_3af604:
    if (ctx->pc == 0x3AF604u) {
        ctx->pc = 0x3AF604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF600u;
        // 0x3af604: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF608u;
        goto label_3af608;
    }
    ctx->pc = 0x3AF600u;
    SET_GPR_U32(ctx, 31, 0x3AF608u);
    ctx->pc = 0x3AF604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF600u;
    // 0x3af604: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3AF600u, 0x3AF608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF608u;
label_3af608:
    // 0x3af608: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3af608u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3af60c:
    // 0x3af60c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3af60cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3af610:
    // 0x3af610: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3af610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3af614:
    // 0x3af614: 0xc0ea12a  jal         func_3A84A8
label_3af618:
    if (ctx->pc == 0x3AF618u) {
        ctx->pc = 0x3AF618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF614u;
        // 0x3af618: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF61Cu;
        goto label_3af61c;
    }
    ctx->pc = 0x3AF614u;
    SET_GPR_U32(ctx, 31, 0x3AF61Cu);
    ctx->pc = 0x3AF618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF614u;
    // 0x3af618: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3AF614u, 0x3AF61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF61Cu;
label_3af61c:
    // 0x3af61c: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x3af61cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3af620:
    // 0x3af620: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3af620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3af624:
    // 0x3af624: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x3af624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_3af628:
    // 0x3af628: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3af628u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3af62c:
    // 0x3af62c: 0xc1073cc  jal         func_41CF30
label_3af630:
    if (ctx->pc == 0x3AF630u) {
        ctx->pc = 0x3AF630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF62Cu;
        // 0x3af630: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF634u;
        goto label_3af634;
    }
    ctx->pc = 0x3AF62Cu;
    SET_GPR_U32(ctx, 31, 0x3AF634u);
    ctx->pc = 0x3AF630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF62Cu;
    // 0x3af630: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF30u, 0x3AF62Cu, 0x3AF634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF634u;
label_3af634:
    // 0x3af634: 0x7ba40000  lq          $a0, 0x0($sp)
    ctx->pc = 0x3af634u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3af638:
    // 0x3af638: 0x3c0355c9  lui         $v1, 0x55C9
    ctx->pc = 0x3af638u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21961 << 16));
label_3af63c:
    // 0x3af63c: 0x8e320000  lw          $s2, 0x0($s1)
    ctx->pc = 0x3af63cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3af640:
    // 0x3af640: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x3af640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_3af644:
    // 0x3af644: 0x7e240010  sq          $a0, 0x10($s1)
    ctx->pc = 0x3af644u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 4));
label_3af648:
    // 0x3af648: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3af648u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_3af64c:
    // 0x3af64c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3af64cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3af650:
    // 0x3af650: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3af650u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3af654:
    // 0x3af654: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3af654u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3af658:
    // 0x3af658: 0x86500070  lh          $s0, 0x70($s2)
    ctx->pc = 0x3af658u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 112)));
label_3af65c:
    // 0x3af65c: 0x62980b  movn        $s3, $v1, $v0
    ctx->pc = 0x3af65cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
label_3af660:
    // 0x3af660: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3af660u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_3af664:
    // 0x3af664: 0x26520070  addiu       $s2, $s2, 0x70
    ctx->pc = 0x3af664u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
label_3af668:
    // 0x3af668: 0x2308021  addu        $s0, $s1, $s0
    ctx->pc = 0x3af668u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_3af66c:
    // 0x3af66c: 0xc0cd518  jal         func_335460
label_3af670:
    if (ctx->pc == 0x3AF670u) {
        ctx->pc = 0x3AF670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF66Cu;
        // 0x3af670: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF674u;
        goto label_3af674;
    }
    ctx->pc = 0x3AF66Cu;
    SET_GPR_U32(ctx, 31, 0x3AF674u);
    ctx->pc = 0x3AF670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF66Cu;
    // 0x3af670: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3AF66Cu, 0x3AF674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF674u;
label_3af674:
    // 0x3af674: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3af674u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3af678:
    // 0x3af678: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3af678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3af67c:
    // 0x3af67c: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3af67cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3af680:
    // 0x3af680: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3af680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3af684:
    // 0x3af684: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3af684u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3af688:
    // 0x3af688: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3af688u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3af68c:
    // 0x3af68c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3af68cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3af690:
    // 0x3af690: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x3af690u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_3af694:
    // 0x3af694: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3af694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3af698:
    // 0x3af698: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3af698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_3af69c:
    // 0x3af69c: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3af69cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_3af6a0:
    // 0x3af6a0: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x3af6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3af6a4:
    // 0x3af6a4: 0x60f809  jalr        $v1
label_3af6a8:
    if (ctx->pc == 0x3AF6A8u) {
        ctx->pc = 0x3AF6ACu;
        goto label_3af6ac;
    }
    ctx->pc = 0x3AF6A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3AF6ACu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AF6A4u, 0x3AF6ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AF6ACu;
label_3af6ac:
    // 0x3af6ac: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3af6acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3af6b0:
    // 0x3af6b0: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x3af6b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_3af6b4:
    // 0x3af6b4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3af6b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3af6b8:
    // 0x3af6b8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3af6b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3af6bc:
    // 0x3af6bc: 0x3c013db8  lui         $at, 0x3DB8
    ctx->pc = 0x3af6bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15800 << 16));
label_3af6c0:
    // 0x3af6c0: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x3af6c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
label_3af6c4:
    // 0x3af6c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3af6c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3af6c8:
    // 0x3af6c8: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x3af6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_3af6cc:
    // 0x3af6cc: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x3af6ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
label_3af6d0:
    // 0x3af6d0: 0x34630034  ori         $v1, $v1, 0x34
    ctx->pc = 0x3af6d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52);
label_3af6d4:
    // 0x3af6d4: 0x2621024  and         $v0, $s3, $v0
    ctx->pc = 0x3af6d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
label_3af6d8:
    // 0x3af6d8: 0xe63400cc  swc1        $f20, 0xCC($s1)
    ctx->pc = 0x3af6d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 204), bits); }
label_3af6dc:
    // 0x3af6dc: 0xae3300b4  sw          $s3, 0xB4($s1)
    ctx->pc = 0x3af6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 19));
label_3af6e0:
    // 0x3af6e0: 0xae2200b0  sw          $v0, 0xB0($s1)
    ctx->pc = 0x3af6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
label_3af6e4:
    // 0x3af6e4: 0xe62000d0  swc1        $f0, 0xD0($s1)
    ctx->pc = 0x3af6e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 208), bits); }
label_3af6e8:
    // 0x3af6e8: 0xae2300c4  sw          $v1, 0xC4($s1)
    ctx->pc = 0x3af6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 3));
label_3af6ec:
    // 0x3af6ec: 0xe62100c0  swc1        $f1, 0xC0($s1)
    ctx->pc = 0x3af6ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 192), bits); }
label_3af6f0:
    // 0x3af6f0: 0xae2000bc  sw          $zero, 0xBC($s1)
    ctx->pc = 0x3af6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 0));
label_3af6f4:
    // 0x3af6f4: 0xae930004  sw          $s3, 0x4($s4)
    ctx->pc = 0x3af6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 19));
label_3af6f8:
    // 0x3af6f8: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x3af6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_3af6fc:
    // 0x3af6fc: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x3af6fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3af700:
    // 0x3af700: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x3af700u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3af704:
    // 0x3af704: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x3af704u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3af708:
    // 0x3af708: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x3af708u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3af70c:
    // 0x3af70c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x3af70cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3af710:
    // 0x3af710: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3af710u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3af714:
    // 0x3af714: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x3af714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3af718:
    // 0x3af718: 0x3e00008  jr          $ra
label_3af71c:
    if (ctx->pc == 0x3AF71Cu) {
        ctx->pc = 0x3AF71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF718u;
        // 0x3af71c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF720u;
        goto label_fallthrough_0x3af718;
    }
    ctx->pc = 0x3AF718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AF71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF718u;
        // 0x3af71c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AF718u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3af718:
    ctx->pc = 0x3AF720u;
}
