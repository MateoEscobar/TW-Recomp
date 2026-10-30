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

// Function: sub_003A3588
// Address: 0x3a3588 - 0x3a36e0
void sub_003A3588_0x3a3588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A3588_0x3a3588");
#endif

    switch (ctx->pc) {
        case 0x3a3588u: goto label_3a3588;
        case 0x3a358cu: goto label_3a358c;
        case 0x3a3590u: goto label_3a3590;
        case 0x3a3594u: goto label_3a3594;
        case 0x3a3598u: goto label_3a3598;
        case 0x3a359cu: goto label_3a359c;
        case 0x3a35a0u: goto label_3a35a0;
        case 0x3a35a4u: goto label_3a35a4;
        case 0x3a35a8u: goto label_3a35a8;
        case 0x3a35acu: goto label_3a35ac;
        case 0x3a35b0u: goto label_3a35b0;
        case 0x3a35b4u: goto label_3a35b4;
        case 0x3a35b8u: goto label_3a35b8;
        case 0x3a35bcu: goto label_3a35bc;
        case 0x3a35c0u: goto label_3a35c0;
        case 0x3a35c4u: goto label_3a35c4;
        case 0x3a35c8u: goto label_3a35c8;
        case 0x3a35ccu: goto label_3a35cc;
        case 0x3a35d0u: goto label_3a35d0;
        case 0x3a35d4u: goto label_3a35d4;
        case 0x3a35d8u: goto label_3a35d8;
        case 0x3a35dcu: goto label_3a35dc;
        case 0x3a35e0u: goto label_3a35e0;
        case 0x3a35e4u: goto label_3a35e4;
        case 0x3a35e8u: goto label_3a35e8;
        case 0x3a35ecu: goto label_3a35ec;
        case 0x3a35f0u: goto label_3a35f0;
        case 0x3a35f4u: goto label_3a35f4;
        case 0x3a35f8u: goto label_3a35f8;
        case 0x3a35fcu: goto label_3a35fc;
        case 0x3a3600u: goto label_3a3600;
        case 0x3a3604u: goto label_3a3604;
        case 0x3a3608u: goto label_3a3608;
        case 0x3a360cu: goto label_3a360c;
        case 0x3a3610u: goto label_3a3610;
        case 0x3a3614u: goto label_3a3614;
        case 0x3a3618u: goto label_3a3618;
        case 0x3a361cu: goto label_3a361c;
        case 0x3a3620u: goto label_3a3620;
        case 0x3a3624u: goto label_3a3624;
        case 0x3a3628u: goto label_3a3628;
        case 0x3a362cu: goto label_3a362c;
        case 0x3a3630u: goto label_3a3630;
        case 0x3a3634u: goto label_3a3634;
        case 0x3a3638u: goto label_3a3638;
        case 0x3a363cu: goto label_3a363c;
        case 0x3a3640u: goto label_3a3640;
        case 0x3a3644u: goto label_3a3644;
        case 0x3a3648u: goto label_3a3648;
        case 0x3a364cu: goto label_3a364c;
        case 0x3a3650u: goto label_3a3650;
        case 0x3a3654u: goto label_3a3654;
        case 0x3a3658u: goto label_3a3658;
        case 0x3a365cu: goto label_3a365c;
        case 0x3a3660u: goto label_3a3660;
        case 0x3a3664u: goto label_3a3664;
        case 0x3a3668u: goto label_3a3668;
        case 0x3a366cu: goto label_3a366c;
        case 0x3a3670u: goto label_3a3670;
        case 0x3a3674u: goto label_3a3674;
        case 0x3a3678u: goto label_3a3678;
        case 0x3a367cu: goto label_3a367c;
        case 0x3a3680u: goto label_3a3680;
        case 0x3a3684u: goto label_3a3684;
        case 0x3a3688u: goto label_3a3688;
        case 0x3a368cu: goto label_3a368c;
        case 0x3a3690u: goto label_3a3690;
        case 0x3a3694u: goto label_3a3694;
        case 0x3a3698u: goto label_3a3698;
        case 0x3a369cu: goto label_3a369c;
        case 0x3a36a0u: goto label_3a36a0;
        case 0x3a36a4u: goto label_3a36a4;
        case 0x3a36a8u: goto label_3a36a8;
        case 0x3a36acu: goto label_3a36ac;
        case 0x3a36b0u: goto label_3a36b0;
        case 0x3a36b4u: goto label_3a36b4;
        case 0x3a36b8u: goto label_3a36b8;
        case 0x3a36bcu: goto label_3a36bc;
        case 0x3a36c0u: goto label_3a36c0;
        case 0x3a36c4u: goto label_3a36c4;
        case 0x3a36c8u: goto label_3a36c8;
        case 0x3a36ccu: goto label_3a36cc;
        case 0x3a36d0u: goto label_3a36d0;
        case 0x3a36d4u: goto label_3a36d4;
        case 0x3a36d8u: goto label_3a36d8;
        case 0x3a36dcu: goto label_3a36dc;
        default: break;
    }

    ctx->pc = 0x3a3588u;

label_3a3588:
    // 0x3a3588: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3a3588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3a358c:
    // 0x3a358c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3a358cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_3a3590:
    // 0x3a3590: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3a3590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_3a3594:
    // 0x3a3594: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3a3594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_3a3598:
    // 0x3a3598: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3a3598u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a359c:
    // 0x3a359c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3a359cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3a35a0:
    // 0x3a35a0: 0x26510008  addiu       $s1, $s2, 0x8
    ctx->pc = 0x3a35a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_3a35a4:
    // 0x3a35a4: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x3a35a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_3a35a8:
    // 0x3a35a8: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x3a35a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_3a35ac:
    // 0x3a35ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a35acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3a35b0:
    // 0x3a35b0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x3a35b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3a35b4:
    // 0x3a35b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3a35b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3a35b8:
    // 0x3a35b8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x3a35b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_3a35bc:
    // 0x3a35bc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3a35bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3a35c0:
    // 0x3a35c0: 0x10600033  beqz        $v1, . + 4 + (0x33 << 2)
label_3a35c4:
    if (ctx->pc == 0x3A35C4u) {
        ctx->pc = 0x3A35C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A35C0u;
        // 0x3a35c4: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A35C8u;
        goto label_3a35c8;
    }
    ctx->pc = 0x3A35C0u;
    {
        const bool branch_taken_0x3a35c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A35C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A35C0u;
        // 0x3a35c4: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a35c0) {
            ctx->pc = 0x3A3690u;
            goto label_3a3690;
        }
    }
    ctx->pc = 0x3A35C8u;
label_3a35c8:
    // 0x3a35c8: 0x24140100  addiu       $s4, $zero, 0x100
    ctx->pc = 0x3a35c8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_3a35cc:
    // 0x3a35cc: 0x34138001  ori         $s3, $zero, 0x8001
    ctx->pc = 0x3a35ccu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
label_3a35d0:
    // 0x3a35d0: 0x139b7c  dsll32      $s3, $s3, 13
    ctx->pc = 0x3a35d0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << (32 + 13));
label_3a35d4:
    // 0x3a35d4: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x3a35d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3a35d8:
    // 0x3a35d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3a35d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3a35dc:
    // 0x3a35dc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x3a35dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_3a35e0:
    // 0x3a35e0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x3a35e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3a35e4:
    // 0x3a35e4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3a35e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3a35e8:
    // 0x3a35e8: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x3a35e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_3a35ec:
    // 0x3a35ec: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x3a35ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_3a35f0:
    // 0x3a35f0: 0x40f809  jalr        $v0
label_3a35f4:
    if (ctx->pc == 0x3A35F4u) {
        ctx->pc = 0x3A35F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A35F0u;
        // 0x3a35f4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A35F8u;
        goto label_3a35f8;
    }
    ctx->pc = 0x3A35F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A35F8u);
        ctx->pc = 0x3A35F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A35F0u;
        // 0x3a35f4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A35F0u, 0x3A35F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A35F8u;
label_3a35f8:
    // 0x3a35f8: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x3a35f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3a35fc:
    // 0x3a35fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3a35fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3a3600:
    // 0x3a3600: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x3a3600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_3a3604:
    // 0x3a3604: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3a3604u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a3608:
    // 0x3a3608: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3a3608u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3a360c:
    // 0x3a360c: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x3a360cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_3a3610:
    // 0x3a3610: 0xc0e8d02  jal         func_3A3408
label_3a3614:
    if (ctx->pc == 0x3A3614u) {
        ctx->pc = 0x3A3614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3610u;
        // 0x3a3614: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A3618u;
        goto label_3a3618;
    }
    ctx->pc = 0x3A3610u;
    SET_GPR_U32(ctx, 31, 0x3A3618u);
    ctx->pc = 0x3A3614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3610u;
    // 0x3a3614: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3408u, 0x3A3610u, 0x3A3618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3618u;
label_3a3618:
    // 0x3a3618: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3a3618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3a361c:
    // 0x3a361c: 0x84640138  lh          $a0, 0x138($v1)
    ctx->pc = 0x3a361cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 312)));
label_3a3620:
    // 0x3a3620: 0x8c62013c  lw          $v0, 0x13C($v1)
    ctx->pc = 0x3a3620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 316)));
label_3a3624:
    // 0x3a3624: 0x40f809  jalr        $v0
label_3a3628:
    if (ctx->pc == 0x3A3628u) {
        ctx->pc = 0x3A3628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3624u;
        // 0x3a3628: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A362Cu;
        goto label_3a362c;
    }
    ctx->pc = 0x3A3624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A362Cu);
        ctx->pc = 0x3A3628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3624u;
        // 0x3a3628: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A3624u, 0x3A362Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A362Cu;
label_3a362c:
    // 0x3a362c: 0x54550012  bnel        $v0, $s5, . + 4 + (0x12 << 2)
label_3a3630:
    if (ctx->pc == 0x3A3630u) {
        ctx->pc = 0x3A3630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A362Cu;
        // 0x3a3630: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A3634u;
        goto label_3a3634;
    }
    ctx->pc = 0x3A362Cu;
    {
        const bool branch_taken_0x3a362c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x3a362c) {
            ctx->pc = 0x3A3630u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A362Cu;
            // 0x3a3630: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A3678u;
            goto label_3a3678;
        }
    }
    ctx->pc = 0x3A3634u;
label_3a3634:
    // 0x3a3634: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x3a3634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_3a3638:
    // 0x3a3638: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x3a3638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
label_3a363c:
    // 0x3a363c: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_3a3640:
    if (ctx->pc == 0x3A3640u) {
        ctx->pc = 0x3A3640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A363Cu;
        // 0x3a3640: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A3644u;
        goto label_3a3644;
    }
    ctx->pc = 0x3A363Cu;
    {
        const bool branch_taken_0x3a363c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a363c) {
            ctx->pc = 0x3A3640u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A363Cu;
            // 0x3a3640: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A3678u;
            goto label_3a3678;
        }
    }
    ctx->pc = 0x3A3644u;
label_3a3644:
    // 0x3a3644: 0x9602006e  lhu         $v0, 0x6E($s0)
    ctx->pc = 0x3a3644u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 110)));
label_3a3648:
    // 0x3a3648: 0x10540004  beq         $v0, $s4, . + 4 + (0x4 << 2)
label_3a364c:
    if (ctx->pc == 0x3A364Cu) {
        ctx->pc = 0x3A364Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3648u;
        // 0x3a364c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A3650u;
        goto label_3a3650;
    }
    ctx->pc = 0x3A3648u;
    {
        const bool branch_taken_0x3a3648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x3A364Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3648u;
        // 0x3a364c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3648) {
            ctx->pc = 0x3A365Cu;
            goto label_3a365c;
        }
    }
    ctx->pc = 0x3A3650u;
label_3a3650:
    // 0x3a3650: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3a3650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3a3654:
    // 0x3a3654: 0xc0e8d1e  jal         func_3A3478
label_3a3658:
    if (ctx->pc == 0x3A3658u) {
        ctx->pc = 0x3A3658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3654u;
        // 0x3a3658: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A365Cu;
        goto label_3a365c;
    }
    ctx->pc = 0x3A3654u;
    SET_GPR_U32(ctx, 31, 0x3A365Cu);
    ctx->pc = 0x3A3658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3654u;
    // 0x3a3658: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3478u, 0x3A3654u, 0x3A365Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A365Cu;
label_3a365c:
    // 0x3a365c: 0xde020050  ld          $v0, 0x50($s0)
    ctx->pc = 0x3a365cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 80)));
label_3a3660:
    // 0x3a3660: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x3a3660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
label_3a3664:
    // 0x3a3664: 0x54530004  bnel        $v0, $s3, . + 4 + (0x4 << 2)
label_3a3668:
    if (ctx->pc == 0x3A3668u) {
        ctx->pc = 0x3A3668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3664u;
        // 0x3a3668: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A366Cu;
        goto label_3a366c;
    }
    ctx->pc = 0x3A3664u;
    {
        const bool branch_taken_0x3a3664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x3a3664) {
            ctx->pc = 0x3A3668u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A3664u;
            // 0x3a3668: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A3678u;
            goto label_3a3678;
        }
    }
    ctx->pc = 0x3A366Cu;
label_3a366c:
    // 0x3a366c: 0xc0e87d0  jal         func_3A1F40
label_3a3670:
    if (ctx->pc == 0x3A3670u) {
        ctx->pc = 0x3A3670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A366Cu;
        // 0x3a3670: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A3674u;
        goto label_3a3674;
    }
    ctx->pc = 0x3A366Cu;
    SET_GPR_U32(ctx, 31, 0x3A3674u);
    ctx->pc = 0x3A3670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A366Cu;
    // 0x3a3670: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F40u, 0x3A366Cu, 0x3A3674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3674u;
label_3a3674:
    // 0x3a3674: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x3a3674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3a3678:
    // 0x3a3678: 0x26510008  addiu       $s1, $s2, 0x8
    ctx->pc = 0x3a3678u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_3a367c:
    // 0x3a367c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3a367cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3a3680:
    // 0x3a3680: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x3a3680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_3a3684:
    // 0x3a3684: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3a3684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3a3688:
    // 0x3a3688: 0x5460ffd3  bnel        $v1, $zero, . + 4 + (-0x2D << 2)
label_3a368c:
    if (ctx->pc == 0x3A368Cu) {
        ctx->pc = 0x3A368Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3688u;
        // 0x3a368c: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A3690u;
        goto label_3a3690;
    }
    ctx->pc = 0x3A3688u;
    {
        const bool branch_taken_0x3a3688 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a3688) {
            ctx->pc = 0x3A368Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A3688u;
            // 0x3a368c: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A35D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a35d8;
        }
    }
    ctx->pc = 0x3A3690u;
label_3a3690:
    // 0x3a3690: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x3a3690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3a3694:
    // 0x3a3694: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3a3694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3a3698:
    // 0x3a3698: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3a3698u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3a369c:
    // 0x3a369c: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x3a369cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3a36a0:
    // 0x3a36a0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3a36a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3a36a4:
    // 0x3a36a4: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x3a36a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_3a36a8:
    // 0x3a36a8: 0x24420100  addiu       $v0, $v0, 0x100
    ctx->pc = 0x3a36a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
label_3a36ac:
    // 0x3a36ac: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x3a36acu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_3a36b0:
    // 0x3a36b0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3a36b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3a36b4:
    // 0x3a36b4: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x3a36b4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
label_3a36b8:
    // 0x3a36b8: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x3a36b8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3a36bc:
    // 0x3a36bc: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3a36bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_3a36c0:
    // 0x3a36c0: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x3a36c0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3a36c4:
    // 0x3a36c4: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x3a36c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3a36c8:
    // 0x3a36c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a36c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a36cc:
    // 0x3a36cc: 0xae440004  sw          $a0, 0x4($s2)
    ctx->pc = 0x3a36ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 4));
label_3a36d0:
    // 0x3a36d0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3a36d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3a36d4:
    // 0x3a36d4: 0x3e00008  jr          $ra
label_3a36d8:
    if (ctx->pc == 0x3A36D8u) {
        ctx->pc = 0x3A36D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A36D4u;
        // 0x3a36d8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A36DCu;
        goto label_3a36dc;
    }
    ctx->pc = 0x3A36D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A36D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A36D4u;
        // 0x3a36d8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A36D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A36DCu;
label_3a36dc:
    // 0x3a36dc: 0x0  nop
    ctx->pc = 0x3a36dcu;
    // NOP
    ctx->pc = 0x3a36e0u;
}
