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

// Function: sub_003E65B0
// Address: 0x3e65b0 - 0x3e66c8
void sub_003E65B0_0x3e65b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E65B0_0x3e65b0");
#endif

    switch (ctx->pc) {
        case 0x3e65b0u: goto label_3e65b0;
        case 0x3e65b4u: goto label_3e65b4;
        case 0x3e65b8u: goto label_3e65b8;
        case 0x3e65bcu: goto label_3e65bc;
        case 0x3e65c0u: goto label_3e65c0;
        case 0x3e65c4u: goto label_3e65c4;
        case 0x3e65c8u: goto label_3e65c8;
        case 0x3e65ccu: goto label_3e65cc;
        case 0x3e65d0u: goto label_3e65d0;
        case 0x3e65d4u: goto label_3e65d4;
        case 0x3e65d8u: goto label_3e65d8;
        case 0x3e65dcu: goto label_3e65dc;
        case 0x3e65e0u: goto label_3e65e0;
        case 0x3e65e4u: goto label_3e65e4;
        case 0x3e65e8u: goto label_3e65e8;
        case 0x3e65ecu: goto label_3e65ec;
        case 0x3e65f0u: goto label_3e65f0;
        case 0x3e65f4u: goto label_3e65f4;
        case 0x3e65f8u: goto label_3e65f8;
        case 0x3e65fcu: goto label_3e65fc;
        case 0x3e6600u: goto label_3e6600;
        case 0x3e6604u: goto label_3e6604;
        case 0x3e6608u: goto label_3e6608;
        case 0x3e660cu: goto label_3e660c;
        case 0x3e6610u: goto label_3e6610;
        case 0x3e6614u: goto label_3e6614;
        case 0x3e6618u: goto label_3e6618;
        case 0x3e661cu: goto label_3e661c;
        case 0x3e6620u: goto label_3e6620;
        case 0x3e6624u: goto label_3e6624;
        case 0x3e6628u: goto label_3e6628;
        case 0x3e662cu: goto label_3e662c;
        case 0x3e6630u: goto label_3e6630;
        case 0x3e6634u: goto label_3e6634;
        case 0x3e6638u: goto label_3e6638;
        case 0x3e663cu: goto label_3e663c;
        case 0x3e6640u: goto label_3e6640;
        case 0x3e6644u: goto label_3e6644;
        case 0x3e6648u: goto label_3e6648;
        case 0x3e664cu: goto label_3e664c;
        case 0x3e6650u: goto label_3e6650;
        case 0x3e6654u: goto label_3e6654;
        case 0x3e6658u: goto label_3e6658;
        case 0x3e665cu: goto label_3e665c;
        case 0x3e6660u: goto label_3e6660;
        case 0x3e6664u: goto label_3e6664;
        case 0x3e6668u: goto label_3e6668;
        case 0x3e666cu: goto label_3e666c;
        case 0x3e6670u: goto label_3e6670;
        case 0x3e6674u: goto label_3e6674;
        case 0x3e6678u: goto label_3e6678;
        case 0x3e667cu: goto label_3e667c;
        case 0x3e6680u: goto label_3e6680;
        case 0x3e6684u: goto label_3e6684;
        case 0x3e6688u: goto label_3e6688;
        case 0x3e668cu: goto label_3e668c;
        case 0x3e6690u: goto label_3e6690;
        case 0x3e6694u: goto label_3e6694;
        case 0x3e6698u: goto label_3e6698;
        case 0x3e669cu: goto label_3e669c;
        case 0x3e66a0u: goto label_3e66a0;
        case 0x3e66a4u: goto label_3e66a4;
        case 0x3e66a8u: goto label_3e66a8;
        case 0x3e66acu: goto label_3e66ac;
        case 0x3e66b0u: goto label_3e66b0;
        case 0x3e66b4u: goto label_3e66b4;
        case 0x3e66b8u: goto label_3e66b8;
        case 0x3e66bcu: goto label_3e66bc;
        case 0x3e66c0u: goto label_3e66c0;
        case 0x3e66c4u: goto label_3e66c4;
        default: break;
    }

    ctx->pc = 0x3e65b0u;

label_3e65b0:
    // 0x3e65b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3e65b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3e65b4:
    // 0x3e65b4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3e65b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_3e65b8:
    // 0x3e65b8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3e65b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3e65bc:
    // 0x3e65bc: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3e65bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_3e65c0:
    // 0x3e65c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e65c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e65c4:
    // 0x3e65c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e65c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3e65c8:
    // 0x3e65c8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3e65c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3e65cc:
    // 0x3e65cc: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3e65ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3e65d0:
    // 0x3e65d0: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3e65d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3e65d4:
    // 0x3e65d4: 0x40f809  jalr        $v0
label_3e65d8:
    if (ctx->pc == 0x3E65D8u) {
        ctx->pc = 0x3E65D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E65D4u;
        // 0x3e65d8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E65DCu;
        goto label_3e65dc;
    }
    ctx->pc = 0x3E65D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E65DCu);
        ctx->pc = 0x3E65D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E65D4u;
        // 0x3e65d8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E65D4u, 0x3E65DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E65DCu;
label_3e65dc:
    // 0x3e65dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3e65dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e65e0:
    // 0x3e65e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e65e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e65e4:
    // 0x3e65e4: 0xc0e858c  jal         func_3A1630
label_3e65e8:
    if (ctx->pc == 0x3E65E8u) {
        ctx->pc = 0x3E65E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E65E4u;
        // 0x3e65e8: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E65ECu;
        goto label_3e65ec;
    }
    ctx->pc = 0x3E65E4u;
    SET_GPR_U32(ctx, 31, 0x3E65ECu);
    ctx->pc = 0x3E65E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E65E4u;
    // 0x3e65e8: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3E65E4u, 0x3E65ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E65ECu;
label_3e65ec:
    // 0x3e65ec: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3e65ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3e65f0:
    // 0x3e65f0: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_3e65f4:
    if (ctx->pc == 0x3E65F4u) {
        ctx->pc = 0x3E65F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E65F0u;
        // 0x3e65f4: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E65F8u;
        goto label_3e65f8;
    }
    ctx->pc = 0x3E65F0u;
    {
        const bool branch_taken_0x3e65f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e65f0) {
            ctx->pc = 0x3E65F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E65F0u;
            // 0x3e65f4: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E6610u;
            goto label_3e6610;
        }
    }
    ctx->pc = 0x3E65F8u;
label_3e65f8:
    // 0x3e65f8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3e65f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3e65fc:
    // 0x3e65fc: 0xae2300b4  sw          $v1, 0xB4($s1)
    ctx->pc = 0x3e65fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 3));
label_3e6600:
    // 0x3e6600: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3e6600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3e6604:
    // 0x3e6604: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3e6604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3e6608:
    // 0x3e6608: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x3e6608u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_3e660c:
    // 0x3e660c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x3e660cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3e6610:
    // 0x3e6610: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3e6610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e6614:
    // 0x3e6614: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
label_3e6618:
    if (ctx->pc == 0x3E6618u) {
        ctx->pc = 0x3E6618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6614u;
        // 0x3e6618: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E661Cu;
        goto label_3e661c;
    }
    ctx->pc = 0x3E6614u;
    {
        const bool branch_taken_0x3e6614 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3e6614) {
            ctx->pc = 0x3E6618u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E6614u;
            // 0x3e6618: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E6638u;
            goto label_3e6638;
        }
    }
    ctx->pc = 0x3E661Cu;
label_3e661c:
    // 0x3e661c: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x3e661cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3e6620:
    // 0x3e6620: 0xc0e858c  jal         func_3A1630
label_3e6624:
    if (ctx->pc == 0x3E6624u) {
        ctx->pc = 0x3E6624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6620u;
        // 0x3e6624: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6628u;
        goto label_3e6628;
    }
    ctx->pc = 0x3E6620u;
    SET_GPR_U32(ctx, 31, 0x3E6628u);
    ctx->pc = 0x3E6624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6620u;
    // 0x3e6624: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3E6620u, 0x3E6628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6628u;
label_3e6628:
    // 0x3e6628: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3e6628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3e662c:
    // 0x3e662c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3e662cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3e6630:
    // 0x3e6630: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x3e6630u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_3e6634:
    // 0x3e6634: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3e6634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3e6638:
    // 0x3e6638: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x3e6638u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3e663c:
    // 0x3e663c: 0x5452000c  bnel        $v0, $s2, . + 4 + (0xC << 2)
label_3e6640:
    if (ctx->pc == 0x3E6640u) {
        ctx->pc = 0x3E6640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E663Cu;
        // 0x3e6640: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6644u;
        goto label_3e6644;
    }
    ctx->pc = 0x3E663Cu;
    {
        const bool branch_taken_0x3e663c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x3e663c) {
            ctx->pc = 0x3E6640u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E663Cu;
            // 0x3e6640: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E6670u;
            goto label_3e6670;
        }
    }
    ctx->pc = 0x3E6644u;
label_3e6644:
    // 0x3e6644: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x3e6644u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3e6648:
    // 0x3e6648: 0xc0e858c  jal         func_3A1630
label_3e664c:
    if (ctx->pc == 0x3E664Cu) {
        ctx->pc = 0x3E664Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6648u;
        // 0x3e664c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6650u;
        goto label_3e6650;
    }
    ctx->pc = 0x3E6648u;
    SET_GPR_U32(ctx, 31, 0x3E6650u);
    ctx->pc = 0x3E664Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6648u;
    // 0x3e664c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3E6648u, 0x3E6650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6650u;
label_3e6650:
    // 0x3e6650: 0x7a020010  lq          $v0, 0x10($s0)
    ctx->pc = 0x3e6650u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
label_3e6654:
    // 0x3e6654: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x3e6654u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
label_3e6658:
    // 0x3e6658: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x3e6658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3e665c:
    // 0x3e665c: 0xe62000c0  swc1        $f0, 0xC0($s1)
    ctx->pc = 0x3e665cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 192), bits); }
label_3e6660:
    // 0x3e6660: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3e6660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3e6664:
    // 0x3e6664: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3e6664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3e6668:
    // 0x3e6668: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x3e6668u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_3e666c:
    // 0x3e666c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x3e666cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3e6670:
    // 0x3e6670: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3e6670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3e6674:
    // 0x3e6674: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
label_3e6678:
    if (ctx->pc == 0x3E6678u) {
        ctx->pc = 0x3E6678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6674u;
        // 0x3e6678: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E667Cu;
        goto label_3e667c;
    }
    ctx->pc = 0x3E6674u;
    {
        const bool branch_taken_0x3e6674 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3e6674) {
            ctx->pc = 0x3E6678u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E6674u;
            // 0x3e6678: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E6698u;
            goto label_3e6698;
        }
    }
    ctx->pc = 0x3E667Cu;
label_3e667c:
    // 0x3e667c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e667cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e6680:
    // 0x3e6680: 0xc0e858c  jal         func_3A1630
label_3e6684:
    if (ctx->pc == 0x3E6684u) {
        ctx->pc = 0x3E6684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6680u;
        // 0x3e6684: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6688u;
        goto label_3e6688;
    }
    ctx->pc = 0x3E6680u;
    SET_GPR_U32(ctx, 31, 0x3E6688u);
    ctx->pc = 0x3E6684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6680u;
    // 0x3e6684: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3E6680u, 0x3E6688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6688u;
label_3e6688:
    // 0x3e6688: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3e6688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3e668c:
    // 0x3e668c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3e668cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3e6690:
    // 0x3e6690: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x3e6690u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_3e6694:
    // 0x3e6694: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x3e6694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3e6698:
    // 0x3e6698: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x3e6698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3e669c:
    // 0x3e669c: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
label_3e66a0:
    if (ctx->pc == 0x3E66A0u) {
        ctx->pc = 0x3E66A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E669Cu;
        // 0x3e66a0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E66A4u;
        goto label_3e66a4;
    }
    ctx->pc = 0x3E669Cu;
    {
        const bool branch_taken_0x3e669c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3e669c) {
            ctx->pc = 0x3E66A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E669Cu;
            // 0x3e66a0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E66B0u;
            goto label_3e66b0;
        }
    }
    ctx->pc = 0x3E66A4u;
label_3e66a4:
    // 0x3e66a4: 0xae2000b4  sw          $zero, 0xB4($s1)
    ctx->pc = 0x3e66a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 0));
label_3e66a8:
    // 0x3e66a8: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x3e66a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
label_3e66ac:
    // 0x3e66ac: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3e66acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3e66b0:
    // 0x3e66b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3e66b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e66b4:
    // 0x3e66b4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3e66b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3e66b8:
    // 0x3e66b8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3e66b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3e66bc:
    // 0x3e66bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e66bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3e66c0:
    // 0x3e66c0: 0x3e00008  jr          $ra
label_3e66c4:
    if (ctx->pc == 0x3E66C4u) {
        ctx->pc = 0x3E66C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E66C0u;
        // 0x3e66c4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E66C8u;
        goto label_fallthrough_0x3e66c0;
    }
    ctx->pc = 0x3E66C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E66C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E66C0u;
        // 0x3e66c4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E66C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3e66c0:
    ctx->pc = 0x3E66C8u;
}
