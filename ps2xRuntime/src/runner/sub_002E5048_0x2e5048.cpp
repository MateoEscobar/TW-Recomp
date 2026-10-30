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

// Function: sub_002E5048
// Address: 0x2e5048 - 0x2e5128
void sub_002E5048_0x2e5048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E5048_0x2e5048");
#endif

    switch (ctx->pc) {
        case 0x2e5084u: goto label_2e5084;
        case 0x2e508cu: goto label_2e508c;
        case 0x2e509cu: goto label_2e509c;
        case 0x2e50a4u: goto label_2e50a4;
        case 0x2e50c4u: goto label_2e50c4;
        case 0x2e50d0u: goto label_2e50d0;
        case 0x2e5100u: goto label_2e5100;
        default: break;
    }

    ctx->pc = 0x2e5048u;

    // 0x2e5048: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2e5048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2e504c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2e504cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2e5050: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2e5050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x2e5054: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2e5054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5058: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2e5058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2e505c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2e505cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5060: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x2e5060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x2e5064: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2e5064u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5068: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x2e5068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x2e506c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2e506cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5070: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2e5070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x2e5074: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2e5074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x2e5078: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e5078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e507c: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2E507Cu;
    SET_GPR_U32(ctx, 31, 0x2E5084u);
    ctx->pc = 0x2E5080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E507Cu;
    // 0x2e5080: 0x100a82d  daddu       $s5, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2E507Cu, 0x2E5084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5084u;
label_2e5084:
    // 0x2e5084: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2E5084u;
    SET_GPR_U32(ctx, 31, 0x2E508Cu);
    ctx->pc = 0x2E5088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5084u;
    // 0x2e5088: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2E5084u, 0x2E508Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E508Cu;
label_2e508c:
    // 0x2e508c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2E508Cu;
    {
        const bool branch_taken_0x2e508c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E508Cu;
        // 0x2e5090: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e508c) {
            ctx->pc = 0x2E5104u;
            goto label_2e5104;
        }
    }
    ctx->pc = 0x2E5094u;
    // 0x2e5094: 0xc087502  jal         func_21D408
    ctx->pc = 0x2E5094u;
    SET_GPR_U32(ctx, 31, 0x2E509Cu);
    ctx->pc = 0x2E5098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5094u;
    // 0x2e5098: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2E5094u, 0x2E509Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E509Cu;
label_2e509c:
    // 0x2e509c: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2E509Cu;
    SET_GPR_U32(ctx, 31, 0x2E50A4u);
    ctx->pc = 0x2E50A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E509Cu;
    // 0x2e50a0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2E509Cu, 0x2E50A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E50A4u;
label_2e50a4:
    // 0x2e50a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e50a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e50a8: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E50A8u;
    {
        const bool branch_taken_0x2e50a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E50ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E50A8u;
        // 0x2e50ac: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e50a8) {
            ctx->pc = 0x2E50C4u;
            goto label_2e50c4;
        }
    }
    ctx->pc = 0x2E50B0u;
    // 0x2e50b0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2e50b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e50b4: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x2e50b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e50b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e50b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e50bc: 0xc0b944a  jal         func_2E5128
    ctx->pc = 0x2E50BCu;
    SET_GPR_U32(ctx, 31, 0x2E50C4u);
    ctx->pc = 0x2E50C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E50BCu;
    // 0x2e50c0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5128u, 0x2E50BCu, 0x2E50C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E50C4u;
label_2e50c4:
    // 0x2e50c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e50c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e50c8: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x2E50C8u;
    SET_GPR_U32(ctx, 31, 0x2E50D0u);
    ctx->pc = 0x2E50CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E50C8u;
    // 0x2e50cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2E50C8u, 0x2E50D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E50D0u;
label_2e50d0:
    // 0x2e50d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e50d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e50d4: 0x16a3000b  bne         $s5, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2E50D4u;
    {
        const bool branch_taken_0x2e50d4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 3));
        ctx->pc = 0x2E50D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E50D4u;
        // 0x2e50d8: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e50d4) {
            ctx->pc = 0x2E5104u;
            goto label_2e5104;
        }
    }
    ctx->pc = 0x2E50DCu;
    // 0x2e50dc: 0x8222002c  lb          $v0, 0x2C($s1)
    ctx->pc = 0x2e50dcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x2e50e0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E50E0u;
    {
        const bool branch_taken_0x2e50e0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2E50E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E50E0u;
        // 0x2e50e4: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e50e0) {
            ctx->pc = 0x2E50F4u;
            goto label_2e50f4;
        }
    }
    ctx->pc = 0x2E50E8u;
    // 0x2e50e8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2e50e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2e50ec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E50ECu;
    {
        const bool branch_taken_0x2e50ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E50F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E50ECu;
        // 0x2e50f0: 0x8c440040  lw          $a0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e50ec) {
            ctx->pc = 0x2E50F8u;
            goto label_2e50f8;
        }
    }
    ctx->pc = 0x2E50F4u;
label_2e50f4:
    // 0x2e50f4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e50f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e50f8:
    // 0x2e50f8: 0xc0a7bb6  jal         func_29EED8
    ctx->pc = 0x2E50F8u;
    SET_GPR_U32(ctx, 31, 0x2E5100u);
    ctx->pc = 0x29EED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29EED8u, 0x2E50F8u, 0x2E5100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5100u;
label_2e5100:
    // 0x2e5100: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x2e5100u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2e5104:
    // 0x2e5104: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2e5104u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e5108: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2e5108u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e510c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2e510cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e5110: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x2e5110u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e5114: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x2e5114u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e5118: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e5118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e511c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E511Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E5120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E511Cu;
        // 0x2e5120: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E511Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E5124u;
    // 0x2e5124: 0x0  nop
    ctx->pc = 0x2e5124u;
    // NOP
    ctx->pc = 0x2e5128u;
}
