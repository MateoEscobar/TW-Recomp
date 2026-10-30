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

// Function: sub_002CE5C8
// Address: 0x2ce5c8 - 0x2ce808
void sub_002CE5C8_0x2ce5c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CE5C8_0x2ce5c8");
#endif

    switch (ctx->pc) {
        case 0x2ce5c8u: goto label_2ce5c8;
        case 0x2ce5ccu: goto label_2ce5cc;
        case 0x2ce5d0u: goto label_2ce5d0;
        case 0x2ce5d4u: goto label_2ce5d4;
        case 0x2ce5d8u: goto label_2ce5d8;
        case 0x2ce5dcu: goto label_2ce5dc;
        case 0x2ce5e0u: goto label_2ce5e0;
        case 0x2ce5e4u: goto label_2ce5e4;
        case 0x2ce5e8u: goto label_2ce5e8;
        case 0x2ce5ecu: goto label_2ce5ec;
        case 0x2ce5f0u: goto label_2ce5f0;
        case 0x2ce5f4u: goto label_2ce5f4;
        case 0x2ce5f8u: goto label_2ce5f8;
        case 0x2ce5fcu: goto label_2ce5fc;
        case 0x2ce600u: goto label_2ce600;
        case 0x2ce604u: goto label_2ce604;
        case 0x2ce608u: goto label_2ce608;
        case 0x2ce60cu: goto label_2ce60c;
        case 0x2ce610u: goto label_2ce610;
        case 0x2ce614u: goto label_2ce614;
        case 0x2ce618u: goto label_2ce618;
        case 0x2ce61cu: goto label_2ce61c;
        case 0x2ce620u: goto label_2ce620;
        case 0x2ce624u: goto label_2ce624;
        case 0x2ce628u: goto label_2ce628;
        case 0x2ce62cu: goto label_2ce62c;
        case 0x2ce630u: goto label_2ce630;
        case 0x2ce634u: goto label_2ce634;
        case 0x2ce638u: goto label_2ce638;
        case 0x2ce63cu: goto label_2ce63c;
        case 0x2ce640u: goto label_2ce640;
        case 0x2ce644u: goto label_2ce644;
        case 0x2ce648u: goto label_2ce648;
        case 0x2ce64cu: goto label_2ce64c;
        case 0x2ce650u: goto label_2ce650;
        case 0x2ce654u: goto label_2ce654;
        case 0x2ce658u: goto label_2ce658;
        case 0x2ce65cu: goto label_2ce65c;
        case 0x2ce660u: goto label_2ce660;
        case 0x2ce664u: goto label_2ce664;
        case 0x2ce668u: goto label_2ce668;
        case 0x2ce66cu: goto label_2ce66c;
        case 0x2ce670u: goto label_2ce670;
        case 0x2ce674u: goto label_2ce674;
        case 0x2ce678u: goto label_2ce678;
        case 0x2ce67cu: goto label_2ce67c;
        case 0x2ce680u: goto label_2ce680;
        case 0x2ce684u: goto label_2ce684;
        case 0x2ce688u: goto label_2ce688;
        case 0x2ce68cu: goto label_2ce68c;
        case 0x2ce690u: goto label_2ce690;
        case 0x2ce694u: goto label_2ce694;
        case 0x2ce698u: goto label_2ce698;
        case 0x2ce69cu: goto label_2ce69c;
        case 0x2ce6a0u: goto label_2ce6a0;
        case 0x2ce6a4u: goto label_2ce6a4;
        case 0x2ce6a8u: goto label_2ce6a8;
        case 0x2ce6acu: goto label_2ce6ac;
        case 0x2ce6b0u: goto label_2ce6b0;
        case 0x2ce6b4u: goto label_2ce6b4;
        case 0x2ce6b8u: goto label_2ce6b8;
        case 0x2ce6bcu: goto label_2ce6bc;
        case 0x2ce6c0u: goto label_2ce6c0;
        case 0x2ce6c4u: goto label_2ce6c4;
        case 0x2ce6c8u: goto label_2ce6c8;
        case 0x2ce6ccu: goto label_2ce6cc;
        case 0x2ce6d0u: goto label_2ce6d0;
        case 0x2ce6d4u: goto label_2ce6d4;
        case 0x2ce6d8u: goto label_2ce6d8;
        case 0x2ce6dcu: goto label_2ce6dc;
        case 0x2ce6e0u: goto label_2ce6e0;
        case 0x2ce6e4u: goto label_2ce6e4;
        case 0x2ce6e8u: goto label_2ce6e8;
        case 0x2ce6ecu: goto label_2ce6ec;
        case 0x2ce6f0u: goto label_2ce6f0;
        case 0x2ce6f4u: goto label_2ce6f4;
        case 0x2ce6f8u: goto label_2ce6f8;
        case 0x2ce6fcu: goto label_2ce6fc;
        case 0x2ce700u: goto label_2ce700;
        case 0x2ce704u: goto label_2ce704;
        case 0x2ce708u: goto label_2ce708;
        case 0x2ce70cu: goto label_2ce70c;
        case 0x2ce710u: goto label_2ce710;
        case 0x2ce714u: goto label_2ce714;
        case 0x2ce718u: goto label_2ce718;
        case 0x2ce71cu: goto label_2ce71c;
        case 0x2ce720u: goto label_2ce720;
        case 0x2ce724u: goto label_2ce724;
        case 0x2ce728u: goto label_2ce728;
        case 0x2ce72cu: goto label_2ce72c;
        case 0x2ce730u: goto label_2ce730;
        case 0x2ce734u: goto label_2ce734;
        case 0x2ce738u: goto label_2ce738;
        case 0x2ce73cu: goto label_2ce73c;
        case 0x2ce740u: goto label_2ce740;
        case 0x2ce744u: goto label_2ce744;
        case 0x2ce748u: goto label_2ce748;
        case 0x2ce74cu: goto label_2ce74c;
        case 0x2ce750u: goto label_2ce750;
        case 0x2ce754u: goto label_2ce754;
        case 0x2ce758u: goto label_2ce758;
        case 0x2ce75cu: goto label_2ce75c;
        case 0x2ce760u: goto label_2ce760;
        case 0x2ce764u: goto label_2ce764;
        case 0x2ce768u: goto label_2ce768;
        case 0x2ce76cu: goto label_2ce76c;
        case 0x2ce770u: goto label_2ce770;
        case 0x2ce774u: goto label_2ce774;
        case 0x2ce778u: goto label_2ce778;
        case 0x2ce77cu: goto label_2ce77c;
        case 0x2ce780u: goto label_2ce780;
        case 0x2ce784u: goto label_2ce784;
        case 0x2ce788u: goto label_2ce788;
        case 0x2ce78cu: goto label_2ce78c;
        case 0x2ce790u: goto label_2ce790;
        case 0x2ce794u: goto label_2ce794;
        case 0x2ce798u: goto label_2ce798;
        case 0x2ce79cu: goto label_2ce79c;
        case 0x2ce7a0u: goto label_2ce7a0;
        case 0x2ce7a4u: goto label_2ce7a4;
        case 0x2ce7a8u: goto label_2ce7a8;
        case 0x2ce7acu: goto label_2ce7ac;
        case 0x2ce7b0u: goto label_2ce7b0;
        case 0x2ce7b4u: goto label_2ce7b4;
        case 0x2ce7b8u: goto label_2ce7b8;
        case 0x2ce7bcu: goto label_2ce7bc;
        case 0x2ce7c0u: goto label_2ce7c0;
        case 0x2ce7c4u: goto label_2ce7c4;
        case 0x2ce7c8u: goto label_2ce7c8;
        case 0x2ce7ccu: goto label_2ce7cc;
        case 0x2ce7d0u: goto label_2ce7d0;
        case 0x2ce7d4u: goto label_2ce7d4;
        case 0x2ce7d8u: goto label_2ce7d8;
        case 0x2ce7dcu: goto label_2ce7dc;
        case 0x2ce7e0u: goto label_2ce7e0;
        case 0x2ce7e4u: goto label_2ce7e4;
        case 0x2ce7e8u: goto label_2ce7e8;
        case 0x2ce7ecu: goto label_2ce7ec;
        case 0x2ce7f0u: goto label_2ce7f0;
        case 0x2ce7f4u: goto label_2ce7f4;
        case 0x2ce7f8u: goto label_2ce7f8;
        case 0x2ce7fcu: goto label_2ce7fc;
        case 0x2ce800u: goto label_2ce800;
        case 0x2ce804u: goto label_2ce804;
        default: break;
    }

    ctx->pc = 0x2ce5c8u;

label_2ce5c8:
    // 0x2ce5c8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2ce5c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_2ce5cc:
    // 0x2ce5cc: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2ce5ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_2ce5d0:
    // 0x2ce5d0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2ce5d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_2ce5d4:
    // 0x2ce5d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ce5d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ce5d8:
    // 0x2ce5d8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2ce5d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2ce5dc:
    // 0x2ce5dc: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2ce5dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_2ce5e0:
    // 0x2ce5e0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x2ce5e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_2ce5e4:
    // 0x2ce5e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ce5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2ce5e8:
    // 0x2ce5e8: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x2ce5e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_2ce5ec:
    // 0x2ce5ec: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2ce5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ce5f0:
    // 0x2ce5f0: 0x8062002e  lb          $v0, 0x2E($v1)
    ctx->pc = 0x2ce5f0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 46)));
label_2ce5f4:
    // 0x2ce5f4: 0x1c400079  bgtz        $v0, . + 4 + (0x79 << 2)
label_2ce5f8:
    if (ctx->pc == 0x2CE5F8u) {
        ctx->pc = 0x2CE5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE5F4u;
        // 0x2ce5f8: 0x8c730000  lw          $s3, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE5FCu;
        goto label_2ce5fc;
    }
    ctx->pc = 0x2CE5F4u;
    {
        const bool branch_taken_0x2ce5f4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2CE5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE5F4u;
        // 0x2ce5f8: 0x8c730000  lw          $s3, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce5f4) {
            ctx->pc = 0x2CE7DCu;
            goto label_2ce7dc;
        }
    }
    ctx->pc = 0x2CE5FCu;
label_2ce5fc:
    // 0x2ce5fc: 0x26140010  addiu       $s4, $s0, 0x10
    ctx->pc = 0x2ce5fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_2ce600:
    // 0x2ce600: 0xc0e4060  jal         func_390180
label_2ce604:
    if (ctx->pc == 0x2CE604u) {
        ctx->pc = 0x2CE604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE600u;
        // 0x2ce604: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE608u;
        goto label_2ce608;
    }
    ctx->pc = 0x2CE600u;
    SET_GPR_U32(ctx, 31, 0x2CE608u);
    ctx->pc = 0x2CE604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE600u;
    // 0x2ce604: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2CE600u, 0x2CE608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE608u;
label_2ce608:
    // 0x2ce608: 0xc0e57ce  jal         func_395F38
label_2ce60c:
    if (ctx->pc == 0x2CE60Cu) {
        ctx->pc = 0x2CE60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE608u;
        // 0x2ce60c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE610u;
        goto label_2ce610;
    }
    ctx->pc = 0x2CE608u;
    SET_GPR_U32(ctx, 31, 0x2CE610u);
    ctx->pc = 0x2CE60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE608u;
    // 0x2ce60c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x2CE608u, 0x2CE610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE610u;
label_2ce610:
    // 0x2ce610: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2ce610u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ce614:
    // 0x2ce614: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x2ce614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_2ce618:
    // 0x2ce618: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2ce618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2ce61c:
    // 0x2ce61c: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x2ce61cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_2ce620:
    // 0x2ce620: 0x8c910048  lw          $s1, 0x48($a0)
    ctx->pc = 0x2ce620u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_2ce624:
    // 0x2ce624: 0x71182b  sltu        $v1, $v1, $s1
    ctx->pc = 0x2ce624u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_2ce628:
    // 0x2ce628: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
label_2ce62c:
    if (ctx->pc == 0x2CE62Cu) {
        ctx->pc = 0x2CE62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE628u;
        // 0x2ce62c: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE630u;
        goto label_2ce630;
    }
    ctx->pc = 0x2CE628u;
    {
        const bool branch_taken_0x2ce628 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE628u;
        // 0x2ce62c: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce628) {
            ctx->pc = 0x2CE6B8u;
            goto label_2ce6b8;
        }
    }
    ctx->pc = 0x2CE630u;
label_2ce630:
    // 0x2ce630: 0x96050020  lhu         $a1, 0x20($s0)
    ctx->pc = 0x2ce630u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
label_2ce634:
    // 0x2ce634: 0x2484b8a0  addiu       $a0, $a0, -0x4760
    ctx->pc = 0x2ce634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949024));
label_2ce638:
    // 0x2ce638: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2ce638u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2ce63c:
    // 0x2ce63c: 0xc0cd4fc  jal         func_3353F0
label_2ce640:
    if (ctx->pc == 0x2CE640u) {
        ctx->pc = 0x2CE640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE63Cu;
        // 0x2ce640: 0x52842  srl         $a1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE644u;
        goto label_2ce644;
    }
    ctx->pc = 0x2CE63Cu;
    SET_GPR_U32(ctx, 31, 0x2CE644u);
    ctx->pc = 0x2CE640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE63Cu;
    // 0x2ce640: 0x52842  srl         $a1, $a1, 1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x2CE63Cu, 0x2CE644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE644u;
label_2ce644:
    // 0x2ce644: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2ce644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2ce648:
    // 0x2ce648: 0x16400009  bnez        $s2, . + 4 + (0x9 << 2)
label_2ce64c:
    if (ctx->pc == 0x2CE64Cu) {
        ctx->pc = 0x2CE64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE648u;
        // 0x2ce64c: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE650u;
        goto label_2ce650;
    }
    ctx->pc = 0x2CE648u;
    {
        const bool branch_taken_0x2ce648 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CE64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE648u;
        // 0x2ce64c: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce648) {
            ctx->pc = 0x2CE670u;
            goto label_2ce670;
        }
    }
    ctx->pc = 0x2CE650u;
label_2ce650:
    // 0x2ce650: 0xc0b384e  jal         func_2CE138
label_2ce654:
    if (ctx->pc == 0x2CE654u) {
        ctx->pc = 0x2CE654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE650u;
        // 0x2ce654: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE658u;
        goto label_2ce658;
    }
    ctx->pc = 0x2CE650u;
    SET_GPR_U32(ctx, 31, 0x2CE658u);
    ctx->pc = 0x2CE654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE650u;
    // 0x2ce654: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CE138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CE138u, 0x2CE650u, 0x2CE658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE658u;
label_2ce658:
    // 0x2ce658: 0xc0e4060  jal         func_390180
label_2ce65c:
    if (ctx->pc == 0x2CE65Cu) {
        ctx->pc = 0x2CE65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE658u;
        // 0x2ce65c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE660u;
        goto label_2ce660;
    }
    ctx->pc = 0x2CE658u;
    SET_GPR_U32(ctx, 31, 0x2CE660u);
    ctx->pc = 0x2CE65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE658u;
    // 0x2ce65c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2CE658u, 0x2CE660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE660u;
label_2ce660:
    // 0x2ce660: 0xc0e57ce  jal         func_395F38
label_2ce664:
    if (ctx->pc == 0x2CE664u) {
        ctx->pc = 0x2CE664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE660u;
        // 0x2ce664: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE668u;
        goto label_2ce668;
    }
    ctx->pc = 0x2CE660u;
    SET_GPR_U32(ctx, 31, 0x2CE668u);
    ctx->pc = 0x2CE664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE660u;
    // 0x2ce664: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x2CE660u, 0x2CE668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE668u;
label_2ce668:
    // 0x2ce668: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_2ce66c:
    if (ctx->pc == 0x2CE66Cu) {
        ctx->pc = 0x2CE670u;
        goto label_2ce670;
    }
    ctx->pc = 0x2CE668u;
    {
        const bool branch_taken_0x2ce668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce668) {
            ctx->pc = 0x2CE6B8u;
            goto label_2ce6b8;
        }
    }
    ctx->pc = 0x2CE670u;
label_2ce670:
    // 0x2ce670: 0xc0a4e54  jal         func_293950
label_2ce674:
    if (ctx->pc == 0x2CE674u) {
        ctx->pc = 0x2CE678u;
        goto label_2ce678;
    }
    ctx->pc = 0x2CE670u;
    SET_GPR_U32(ctx, 31, 0x2CE678u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2CE670u, 0x2CE678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE678u;
label_2ce678:
    // 0x2ce678: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2ce678u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ce67c:
    // 0x2ce67c: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
label_2ce680:
    if (ctx->pc == 0x2CE680u) {
        ctx->pc = 0x2CE680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE67Cu;
        // 0x2ce680: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE684u;
        goto label_2ce684;
    }
    ctx->pc = 0x2CE67Cu;
    {
        const bool branch_taken_0x2ce67c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE67Cu;
        // 0x2ce680: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce67c) {
            ctx->pc = 0x2CE69Cu;
            goto label_2ce69c;
        }
    }
    ctx->pc = 0x2CE684u;
label_2ce684:
    // 0x2ce684: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x2ce684u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
label_2ce688:
    // 0x2ce688: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2ce688u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ce68c:
    // 0x2ce68c: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x2ce68cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2ce690:
    // 0x2ce690: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2ce690u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2ce694:
    // 0x2ce694: 0xc0b71e8  jal         func_2DC7A0
label_2ce698:
    if (ctx->pc == 0x2CE698u) {
        ctx->pc = 0x2CE698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE694u;
        // 0x2ce698: 0x3508ffff  ori         $t0, $t0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE69Cu;
        goto label_2ce69c;
    }
    ctx->pc = 0x2CE694u;
    SET_GPR_U32(ctx, 31, 0x2CE69Cu);
    ctx->pc = 0x2CE698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE694u;
    // 0x2ce698: 0x3508ffff  ori         $t0, $t0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC7A0u, 0x2CE694u, 0x2CE69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE69Cu;
label_2ce69c:
    // 0x2ce69c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2ce69cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ce6a0:
    // 0x2ce6a0: 0xc0a35d6  jal         func_28D758
label_2ce6a4:
    if (ctx->pc == 0x2CE6A4u) {
        ctx->pc = 0x2CE6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE6A0u;
        // 0x2ce6a4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE6A8u;
        goto label_2ce6a8;
    }
    ctx->pc = 0x2CE6A0u;
    SET_GPR_U32(ctx, 31, 0x2CE6A8u);
    ctx->pc = 0x2CE6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE6A0u;
    // 0x2ce6a4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2CE6A0u, 0x2CE6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE6A8u;
label_2ce6a8:
    // 0x2ce6a8: 0xc0b38dc  jal         func_2CE370
label_2ce6ac:
    if (ctx->pc == 0x2CE6ACu) {
        ctx->pc = 0x2CE6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE6A8u;
        // 0x2ce6ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE6B0u;
        goto label_2ce6b0;
    }
    ctx->pc = 0x2CE6A8u;
    SET_GPR_U32(ctx, 31, 0x2CE6B0u);
    ctx->pc = 0x2CE6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE6A8u;
    // 0x2ce6ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CE370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CE370u, 0x2CE6A8u, 0x2CE6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE6B0u;
label_2ce6b0:
    // 0x2ce6b0: 0x1000004b  b           . + 4 + (0x4B << 2)
label_2ce6b4:
    if (ctx->pc == 0x2CE6B4u) {
        ctx->pc = 0x2CE6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE6B0u;
        // 0x2ce6b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE6B8u;
        goto label_2ce6b8;
    }
    ctx->pc = 0x2CE6B0u;
    {
        const bool branch_taken_0x2ce6b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE6B0u;
        // 0x2ce6b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce6b0) {
            ctx->pc = 0x2CE7E0u;
            goto label_2ce7e0;
        }
    }
    ctx->pc = 0x2CE6B8u;
label_2ce6b8:
    // 0x2ce6b8: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x2ce6b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_2ce6bc:
    // 0x2ce6bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ce6bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ce6c0:
    // 0x2ce6c0: 0xc0a7c8c  jal         func_29F230
label_2ce6c4:
    if (ctx->pc == 0x2CE6C4u) {
        ctx->pc = 0x2CE6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE6C0u;
        // 0x2ce6c4: 0x34a5fbff  ori         $a1, $a1, 0xFBFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64511);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE6C8u;
        goto label_2ce6c8;
    }
    ctx->pc = 0x2CE6C0u;
    SET_GPR_U32(ctx, 31, 0x2CE6C8u);
    ctx->pc = 0x2CE6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE6C0u;
    // 0x2ce6c4: 0x34a5fbff  ori         $a1, $a1, 0xFBFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64511);
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F230u, 0x2CE6C0u, 0x2CE6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE6C8u;
label_2ce6c8:
    // 0x2ce6c8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2ce6c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ce6cc:
    // 0x2ce6cc: 0x56200012  bnel        $s1, $zero, . + 4 + (0x12 << 2)
label_2ce6d0:
    if (ctx->pc == 0x2CE6D0u) {
        ctx->pc = 0x2CE6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE6CCu;
        // 0x2ce6d0: 0x86640092  lh          $a0, 0x92($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE6D4u;
        goto label_2ce6d4;
    }
    ctx->pc = 0x2CE6CCu;
    {
        const bool branch_taken_0x2ce6cc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ce6cc) {
            ctx->pc = 0x2CE6D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CE6CCu;
            // 0x2ce6d0: 0x86640092  lh          $a0, 0x92($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CE718u;
            goto label_2ce718;
        }
    }
    ctx->pc = 0x2CE6D4u;
label_2ce6d4:
    // 0x2ce6d4: 0xc08bfa0  jal         func_22FE80
label_2ce6d8:
    if (ctx->pc == 0x2CE6D8u) {
        ctx->pc = 0x2CE6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE6D4u;
        // 0x2ce6d8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE6DCu;
        goto label_2ce6dc;
    }
    ctx->pc = 0x2CE6D4u;
    SET_GPR_U32(ctx, 31, 0x2CE6DCu);
    ctx->pc = 0x2CE6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE6D4u;
    // 0x2ce6d8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FE80u, 0x2CE6D4u, 0x2CE6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE6DCu;
label_2ce6dc:
    // 0x2ce6dc: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x2ce6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_2ce6e0:
    // 0x2ce6e0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2ce6e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ce6e4:
    // 0x2ce6e4: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_2ce6e8:
    if (ctx->pc == 0x2CE6E8u) {
        ctx->pc = 0x2CE6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE6E4u;
        // 0x2ce6e8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE6ECu;
        goto label_2ce6ec;
    }
    ctx->pc = 0x2CE6E4u;
    {
        const bool branch_taken_0x2ce6e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce6e4) {
            ctx->pc = 0x2CE6E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CE6E4u;
            // 0x2ce6e8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CE6ECu;
            goto label_2ce6ec;
        }
    }
    ctx->pc = 0x2CE6ECu;
label_2ce6ec:
    // 0x2ce6ec: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x2ce6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_2ce6f0:
    // 0x2ce6f0: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2ce6f0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_2ce6f4:
    // 0x2ce6f4: 0x2010  mfhi        $a0
    ctx->pc = 0x2ce6f4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_2ce6f8:
    // 0x2ce6f8: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_2ce6fc:
    if (ctx->pc == 0x2CE6FCu) {
        ctx->pc = 0x2CE700u;
        goto label_2ce700;
    }
    ctx->pc = 0x2CE6F8u;
    {
        const bool branch_taken_0x2ce6f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ce6f8) {
            ctx->pc = 0x2CE708u;
            goto label_2ce708;
        }
    }
    ctx->pc = 0x2CE700u;
label_2ce700:
    // 0x2ce700: 0xc0b38dc  jal         func_2CE370
label_2ce704:
    if (ctx->pc == 0x2CE704u) {
        ctx->pc = 0x2CE704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE700u;
        // 0x2ce704: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE708u;
        goto label_2ce708;
    }
    ctx->pc = 0x2CE700u;
    SET_GPR_U32(ctx, 31, 0x2CE708u);
    ctx->pc = 0x2CE704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE700u;
    // 0x2ce704: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CE370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CE370u, 0x2CE700u, 0x2CE708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE708u;
label_2ce708:
    // 0x2ce708: 0xc0b38ee  jal         func_2CE3B8
label_2ce70c:
    if (ctx->pc == 0x2CE70Cu) {
        ctx->pc = 0x2CE70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE708u;
        // 0x2ce70c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE710u;
        goto label_2ce710;
    }
    ctx->pc = 0x2CE708u;
    SET_GPR_U32(ctx, 31, 0x2CE710u);
    ctx->pc = 0x2CE70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE708u;
    // 0x2ce70c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CE3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CE3B8u, 0x2CE708u, 0x2CE710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE710u;
label_2ce710:
    // 0x2ce710: 0x10000033  b           . + 4 + (0x33 << 2)
label_2ce714:
    if (ctx->pc == 0x2CE714u) {
        ctx->pc = 0x2CE714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE710u;
        // 0x2ce714: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE718u;
        goto label_2ce718;
    }
    ctx->pc = 0x2CE710u;
    {
        const bool branch_taken_0x2ce710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE710u;
        // 0x2ce714: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce710) {
            ctx->pc = 0x2CE7E0u;
            goto label_2ce7e0;
        }
    }
    ctx->pc = 0x2CE718u;
label_2ce718:
    // 0x2ce718: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2ce718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_2ce71c:
    // 0x2ce71c: 0x86250092  lh          $a1, 0x92($s1)
    ctx->pc = 0x2ce71cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
label_2ce720:
    // 0x2ce720: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x2ce720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2ce724:
    // 0x2ce724: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2ce724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ce728:
    // 0x2ce728: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2ce728u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2ce72c:
    // 0x2ce72c: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2ce72cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2ce730:
    // 0x2ce730: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2ce730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2ce734:
    // 0x2ce734: 0xc4740140  lwc1        $f20, 0x140($v1)
    ctx->pc = 0x2ce734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2ce738:
    // 0x2ce738: 0xc0cdb38  jal         func_336CE0
label_2ce73c:
    if (ctx->pc == 0x2CE73Cu) {
        ctx->pc = 0x2CE73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE738u;
        // 0x2ce73c: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE740u;
        goto label_2ce740;
    }
    ctx->pc = 0x2CE738u;
    SET_GPR_U32(ctx, 31, 0x2CE740u);
    ctx->pc = 0x2CE73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE738u;
    // 0x2ce73c: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2CE738u, 0x2CE740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE740u;
label_2ce740:
    // 0x2ce740: 0x4614a502  mul.s       $f20, $f20, $f20
    ctx->pc = 0x2ce740u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
label_2ce744:
    // 0x2ce744: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2ce744u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ce748:
    // 0x2ce748: 0x0  nop
    ctx->pc = 0x2ce748u;
    // NOP
label_2ce74c:
    // 0x2ce74c: 0x45000017  bc1f        . + 4 + (0x17 << 2)
label_2ce750:
    if (ctx->pc == 0x2CE750u) {
        ctx->pc = 0x2CE754u;
        goto label_2ce754;
    }
    ctx->pc = 0x2CE74Cu;
    {
        const bool branch_taken_0x2ce74c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ce74c) {
            ctx->pc = 0x2CE7ACu;
            goto label_2ce7ac;
        }
    }
    ctx->pc = 0x2CE754u;
label_2ce754:
    // 0x2ce754: 0xc08bfa0  jal         func_22FE80
label_2ce758:
    if (ctx->pc == 0x2CE758u) {
        ctx->pc = 0x2CE758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE754u;
        // 0x2ce758: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE75Cu;
        goto label_2ce75c;
    }
    ctx->pc = 0x2CE754u;
    SET_GPR_U32(ctx, 31, 0x2CE75Cu);
    ctx->pc = 0x2CE758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE754u;
    // 0x2ce758: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FE80u, 0x2CE754u, 0x2CE75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE75Cu;
label_2ce75c:
    // 0x2ce75c: 0xc0a367c  jal         func_28D9F0
label_2ce760:
    if (ctx->pc == 0x2CE760u) {
        ctx->pc = 0x2CE760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE75Cu;
        // 0x2ce760: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE764u;
        goto label_2ce764;
    }
    ctx->pc = 0x2CE75Cu;
    SET_GPR_U32(ctx, 31, 0x2CE764u);
    ctx->pc = 0x2CE760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE75Cu;
    // 0x2ce760: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2CE75Cu, 0x2CE764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE764u;
label_2ce764:
    // 0x2ce764: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2ce764u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ce768:
    // 0x2ce768: 0x1240000c  beqz        $s2, . + 4 + (0xC << 2)
label_2ce76c:
    if (ctx->pc == 0x2CE76Cu) {
        ctx->pc = 0x2CE770u;
        goto label_2ce770;
    }
    ctx->pc = 0x2CE768u;
    {
        const bool branch_taken_0x2ce768 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce768) {
            ctx->pc = 0x2CE79Cu;
            goto label_2ce79c;
        }
    }
    ctx->pc = 0x2CE770u;
label_2ce770:
    // 0x2ce770: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2ce770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ce774:
    // 0x2ce774: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2ce774u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2ce778:
    // 0x2ce778: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2ce778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2ce77c:
    // 0x2ce77c: 0x40f809  jalr        $v0
label_2ce780:
    if (ctx->pc == 0x2CE780u) {
        ctx->pc = 0x2CE780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE77Cu;
        // 0x2ce780: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE784u;
        goto label_2ce784;
    }
    ctx->pc = 0x2CE77Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2CE784u);
        ctx->pc = 0x2CE780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE77Cu;
        // 0x2ce780: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CE77Cu, 0x2CE784u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CE784u;
label_2ce784:
    // 0x2ce784: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2ce784u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ce788:
    // 0x2ce788: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ce788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ce78c:
    // 0x2ce78c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2ce78cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ce790:
    // 0x2ce790: 0x240707d0  addiu       $a3, $zero, 0x7D0
    ctx->pc = 0x2ce790u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
label_2ce794:
    // 0x2ce794: 0xc0bfabe  jal         func_2FEAF8
label_2ce798:
    if (ctx->pc == 0x2CE798u) {
        ctx->pc = 0x2CE798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE794u;
        // 0x2ce798: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE79Cu;
        goto label_2ce79c;
    }
    ctx->pc = 0x2CE794u;
    SET_GPR_U32(ctx, 31, 0x2CE79Cu);
    ctx->pc = 0x2CE798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE794u;
    // 0x2ce798: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FEAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FEAF8u, 0x2CE794u, 0x2CE79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE79Cu;
label_2ce79c:
    // 0x2ce79c: 0xc089bdc  jal         func_226F70
label_2ce7a0:
    if (ctx->pc == 0x2CE7A0u) {
        ctx->pc = 0x2CE7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE79Cu;
        // 0x2ce7a0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE7A4u;
        goto label_2ce7a4;
    }
    ctx->pc = 0x2CE79Cu;
    SET_GPR_U32(ctx, 31, 0x2CE7A4u);
    ctx->pc = 0x2CE7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE79Cu;
    // 0x2ce7a0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226F70u, 0x2CE79Cu, 0x2CE7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE7A4u;
label_2ce7a4:
    // 0x2ce7a4: 0x1000000e  b           . + 4 + (0xE << 2)
label_2ce7a8:
    if (ctx->pc == 0x2CE7A8u) {
        ctx->pc = 0x2CE7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE7A4u;
        // 0x2ce7a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE7ACu;
        goto label_2ce7ac;
    }
    ctx->pc = 0x2CE7A4u;
    {
        const bool branch_taken_0x2ce7a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE7A4u;
        // 0x2ce7a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce7a4) {
            ctx->pc = 0x2CE7E0u;
            goto label_2ce7e0;
        }
    }
    ctx->pc = 0x2CE7ACu;
label_2ce7ac:
    // 0x2ce7ac: 0xc0a4e54  jal         func_293950
label_2ce7b0:
    if (ctx->pc == 0x2CE7B0u) {
        ctx->pc = 0x2CE7B4u;
        goto label_2ce7b4;
    }
    ctx->pc = 0x2CE7ACu;
    SET_GPR_U32(ctx, 31, 0x2CE7B4u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2CE7ACu, 0x2CE7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE7B4u;
label_2ce7b4:
    // 0x2ce7b4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2ce7b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ce7b8:
    // 0x2ce7b8: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
label_2ce7bc:
    if (ctx->pc == 0x2CE7BCu) {
        ctx->pc = 0x2CE7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE7B8u;
        // 0x2ce7bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE7C0u;
        goto label_2ce7c0;
    }
    ctx->pc = 0x2CE7B8u;
    {
        const bool branch_taken_0x2ce7b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE7B8u;
        // 0x2ce7bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce7b8) {
            ctx->pc = 0x2CE7D0u;
            goto label_2ce7d0;
        }
    }
    ctx->pc = 0x2CE7C0u;
label_2ce7c0:
    // 0x2ce7c0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2ce7c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ce7c4:
    // 0x2ce7c4: 0x240607d0  addiu       $a2, $zero, 0x7D0
    ctx->pc = 0x2ce7c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
label_2ce7c8:
    // 0x2ce7c8: 0xc0acb08  jal         func_2B2C20
label_2ce7cc:
    if (ctx->pc == 0x2CE7CCu) {
        ctx->pc = 0x2CE7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE7C8u;
        // 0x2ce7cc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE7D0u;
        goto label_2ce7d0;
    }
    ctx->pc = 0x2CE7C8u;
    SET_GPR_U32(ctx, 31, 0x2CE7D0u);
    ctx->pc = 0x2CE7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE7C8u;
    // 0x2ce7cc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2C20u, 0x2CE7C8u, 0x2CE7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE7D0u;
label_2ce7d0:
    // 0x2ce7d0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2ce7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ce7d4:
    // 0x2ce7d4: 0xc0a35d6  jal         func_28D758
label_2ce7d8:
    if (ctx->pc == 0x2CE7D8u) {
        ctx->pc = 0x2CE7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE7D4u;
        // 0x2ce7d8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE7DCu;
        goto label_2ce7dc;
    }
    ctx->pc = 0x2CE7D4u;
    SET_GPR_U32(ctx, 31, 0x2CE7DCu);
    ctx->pc = 0x2CE7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE7D4u;
    // 0x2ce7d8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2CE7D4u, 0x2CE7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE7DCu;
label_2ce7dc:
    // 0x2ce7dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ce7dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ce7e0:
    // 0x2ce7e0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2ce7e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2ce7e4:
    // 0x2ce7e4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2ce7e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2ce7e8:
    // 0x2ce7e8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2ce7e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2ce7ec:
    // 0x2ce7ec: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2ce7ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2ce7f0:
    // 0x2ce7f0: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x2ce7f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2ce7f4:
    // 0x2ce7f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ce7f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ce7f8:
    // 0x2ce7f8: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x2ce7f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2ce7fc:
    // 0x2ce7fc: 0x3e00008  jr          $ra
label_2ce800:
    if (ctx->pc == 0x2CE800u) {
        ctx->pc = 0x2CE800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE7FCu;
        // 0x2ce800: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE804u;
        goto label_2ce804;
    }
    ctx->pc = 0x2CE7FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CE800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE7FCu;
        // 0x2ce800: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CE7FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CE804u;
label_2ce804:
    // 0x2ce804: 0x0  nop
    ctx->pc = 0x2ce804u;
    // NOP
    ctx->pc = 0x2ce808u;
}
