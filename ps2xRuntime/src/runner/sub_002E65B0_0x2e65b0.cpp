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

// Function: sub_002E65B0
// Address: 0x2e65b0 - 0x2e6668
void sub_002E65B0_0x2e65b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E65B0_0x2e65b0");
#endif

    switch (ctx->pc) {
        case 0x2e65b0u: goto label_2e65b0;
        case 0x2e65b4u: goto label_2e65b4;
        case 0x2e65b8u: goto label_2e65b8;
        case 0x2e65bcu: goto label_2e65bc;
        case 0x2e65c0u: goto label_2e65c0;
        case 0x2e65c4u: goto label_2e65c4;
        case 0x2e65c8u: goto label_2e65c8;
        case 0x2e65ccu: goto label_2e65cc;
        case 0x2e65d0u: goto label_2e65d0;
        case 0x2e65d4u: goto label_2e65d4;
        case 0x2e65d8u: goto label_2e65d8;
        case 0x2e65dcu: goto label_2e65dc;
        case 0x2e65e0u: goto label_2e65e0;
        case 0x2e65e4u: goto label_2e65e4;
        case 0x2e65e8u: goto label_2e65e8;
        case 0x2e65ecu: goto label_2e65ec;
        case 0x2e65f0u: goto label_2e65f0;
        case 0x2e65f4u: goto label_2e65f4;
        case 0x2e65f8u: goto label_2e65f8;
        case 0x2e65fcu: goto label_2e65fc;
        case 0x2e6600u: goto label_2e6600;
        case 0x2e6604u: goto label_2e6604;
        case 0x2e6608u: goto label_2e6608;
        case 0x2e660cu: goto label_2e660c;
        case 0x2e6610u: goto label_2e6610;
        case 0x2e6614u: goto label_2e6614;
        case 0x2e6618u: goto label_2e6618;
        case 0x2e661cu: goto label_2e661c;
        case 0x2e6620u: goto label_2e6620;
        case 0x2e6624u: goto label_2e6624;
        case 0x2e6628u: goto label_2e6628;
        case 0x2e662cu: goto label_2e662c;
        case 0x2e6630u: goto label_2e6630;
        case 0x2e6634u: goto label_2e6634;
        case 0x2e6638u: goto label_2e6638;
        case 0x2e663cu: goto label_2e663c;
        case 0x2e6640u: goto label_2e6640;
        case 0x2e6644u: goto label_2e6644;
        case 0x2e6648u: goto label_2e6648;
        case 0x2e664cu: goto label_2e664c;
        case 0x2e6650u: goto label_2e6650;
        case 0x2e6654u: goto label_2e6654;
        case 0x2e6658u: goto label_2e6658;
        case 0x2e665cu: goto label_2e665c;
        case 0x2e6660u: goto label_2e6660;
        case 0x2e6664u: goto label_2e6664;
        default: break;
    }

    ctx->pc = 0x2e65b0u;

label_2e65b0:
    // 0x2e65b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e65b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2e65b4:
    // 0x2e65b4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2e65b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_2e65b8:
    // 0x2e65b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e65b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2e65bc:
    // 0x2e65bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e65bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e65c0:
    // 0x2e65c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e65c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2e65c4:
    // 0x2e65c4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2e65c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2e65c8:
    // 0x2e65c8: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x2e65c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_2e65cc:
    // 0x2e65cc: 0x3842000b  xori        $v0, $v0, 0xB
    ctx->pc = 0x2e65ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)11);
label_2e65d0:
    // 0x2e65d0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2e65d4:
    if (ctx->pc == 0x2E65D4u) {
        ctx->pc = 0x2E65D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E65D0u;
        // 0x2e65d4: 0x8c710000  lw          $s1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E65D8u;
        goto label_2e65d8;
    }
    ctx->pc = 0x2E65D0u;
    {
        const bool branch_taken_0x2e65d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E65D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E65D0u;
        // 0x2e65d4: 0x8c710000  lw          $s1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e65d0) {
            ctx->pc = 0x2E65DCu;
            goto label_2e65dc;
        }
    }
    ctx->pc = 0x2E65D8u;
label_2e65d8:
    // 0x2e65d8: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x2e65d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_2e65dc:
    // 0x2e65dc: 0xa2000054  sb          $zero, 0x54($s0)
    ctx->pc = 0x2e65dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 84), (uint8_t)GPR_U32(ctx, 0));
label_2e65e0:
    // 0x2e65e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e65e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e65e4:
    // 0x2e65e4: 0xa2000056  sb          $zero, 0x56($s0)
    ctx->pc = 0x2e65e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 86), (uint8_t)GPR_U32(ctx, 0));
label_2e65e8:
    // 0x2e65e8: 0xc088680  jal         func_221A00
label_2e65ec:
    if (ctx->pc == 0x2E65ECu) {
        ctx->pc = 0x2E65ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E65E8u;
        // 0x2e65ec: 0x24050152  addiu       $a1, $zero, 0x152 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 338));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E65F0u;
        goto label_2e65f0;
    }
    ctx->pc = 0x2E65E8u;
    SET_GPR_U32(ctx, 31, 0x2E65F0u);
    ctx->pc = 0x2E65ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E65E8u;
    // 0x2e65ec: 0x24050152  addiu       $a1, $zero, 0x152 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 338));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221A00u, 0x2E65E8u, 0x2E65F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E65F0u;
label_2e65f0:
    // 0x2e65f0: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_2e65f4:
    if (ctx->pc == 0x2E65F4u) {
        ctx->pc = 0x2E65F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E65F0u;
        // 0x2e65f4: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E65F8u;
        goto label_2e65f8;
    }
    ctx->pc = 0x2E65F0u;
    {
        const bool branch_taken_0x2e65f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e65f0) {
            ctx->pc = 0x2E65F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E65F0u;
            // 0x2e65f4: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E6610u;
            goto label_2e6610;
        }
    }
    ctx->pc = 0x2E65F8u;
label_2e65f8:
    // 0x2e65f8: 0x3c060056  lui         $a2, 0x56
    ctx->pc = 0x2e65f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)86 << 16));
label_2e65fc:
    // 0x2e65fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e65fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e6600:
    // 0x2e6600: 0x24c67270  addiu       $a2, $a2, 0x7270
    ctx->pc = 0x2e6600u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29296));
label_2e6604:
    // 0x2e6604: 0xc0886a8  jal         func_221AA0
label_2e6608:
    if (ctx->pc == 0x2E6608u) {
        ctx->pc = 0x2E6608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6604u;
        // 0x2e6608: 0x24050152  addiu       $a1, $zero, 0x152 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 338));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E660Cu;
        goto label_2e660c;
    }
    ctx->pc = 0x2E6604u;
    SET_GPR_U32(ctx, 31, 0x2E660Cu);
    ctx->pc = 0x2E6608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6604u;
    // 0x2e6608: 0x24050152  addiu       $a1, $zero, 0x152 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 338));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221AA0u, 0x2E6604u, 0x2E660Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E660Cu;
label_2e660c:
    // 0x2e660c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2e660cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2e6610:
    // 0x2e6610: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e6610u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e6614:
    // 0x2e6614: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e6614u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e6618:
    // 0x2e6618: 0xac40021c  sw          $zero, 0x21C($v0)
    ctx->pc = 0x2e6618u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 540), GPR_U32(ctx, 0));
label_2e661c:
    // 0x2e661c: 0xc0a33f8  jal         func_28CFE0
label_2e6620:
    if (ctx->pc == 0x2E6620u) {
        ctx->pc = 0x2E6620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E661Cu;
        // 0x2e6620: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6624u;
        goto label_2e6624;
    }
    ctx->pc = 0x2E661Cu;
    SET_GPR_U32(ctx, 31, 0x2E6624u);
    ctx->pc = 0x2E6620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E661Cu;
    // 0x2e6620: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE0u, 0x2E661Cu, 0x2E6624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6624u;
label_2e6624:
    // 0x2e6624: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x2e6624u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_2e6628:
    // 0x2e6628: 0xa22001b2  sb          $zero, 0x1B2($s1)
    ctx->pc = 0x2e6628u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 434), (uint8_t)GPR_U32(ctx, 0));
label_2e662c:
    // 0x2e662c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2e662cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e6630:
    // 0x2e6630: 0x84440128  lh          $a0, 0x128($v0)
    ctx->pc = 0x2e6630u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 296)));
label_2e6634:
    // 0x2e6634: 0x8c43012c  lw          $v1, 0x12C($v0)
    ctx->pc = 0x2e6634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 300)));
label_2e6638:
    // 0x2e6638: 0x60f809  jalr        $v1
label_2e663c:
    if (ctx->pc == 0x2E663Cu) {
        ctx->pc = 0x2E663Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6638u;
        // 0x2e663c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6640u;
        goto label_2e6640;
    }
    ctx->pc = 0x2E6638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2E6640u);
        ctx->pc = 0x2E663Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6638u;
        // 0x2e663c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E6638u, 0x2E6640u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E6640u;
label_2e6640:
    // 0x2e6640: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2e6640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2e6644:
    // 0x2e6644: 0xc0a33ae  jal         func_28CEB8
label_2e6648:
    if (ctx->pc == 0x2E6648u) {
        ctx->pc = 0x2E6648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6644u;
        // 0x2e6648: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E664Cu;
        goto label_2e664c;
    }
    ctx->pc = 0x2E6644u;
    SET_GPR_U32(ctx, 31, 0x2E664Cu);
    ctx->pc = 0x2E6648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6644u;
    // 0x2e6648: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CEB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CEB8u, 0x2E6644u, 0x2E664Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E664Cu;
label_2e664c:
    // 0x2e664c: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x2e664cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
label_2e6650:
    // 0x2e6650: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x2e6650u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
label_2e6654:
    // 0x2e6654: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2e6654u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2e6658:
    // 0x2e6658: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e6658u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2e665c:
    // 0x2e665c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e665cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e6660:
    // 0x2e6660: 0x3e00008  jr          $ra
label_2e6664:
    if (ctx->pc == 0x2E6664u) {
        ctx->pc = 0x2E6664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6660u;
        // 0x2e6664: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6668u;
        goto label_fallthrough_0x2e6660;
    }
    ctx->pc = 0x2E6660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E6664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6660u;
        // 0x2e6664: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E6660u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2e6660:
    ctx->pc = 0x2E6668u;
}
