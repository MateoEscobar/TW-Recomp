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

// Function: sub_0030E5B0
// Address: 0x30e5b0 - 0x30e650
void sub_0030E5B0_0x30e5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030E5B0_0x30e5b0");
#endif

    switch (ctx->pc) {
        case 0x30e5b0u: goto label_30e5b0;
        case 0x30e5b4u: goto label_30e5b4;
        case 0x30e5b8u: goto label_30e5b8;
        case 0x30e5bcu: goto label_30e5bc;
        case 0x30e5c0u: goto label_30e5c0;
        case 0x30e5c4u: goto label_30e5c4;
        case 0x30e5c8u: goto label_30e5c8;
        case 0x30e5ccu: goto label_30e5cc;
        case 0x30e5d0u: goto label_30e5d0;
        case 0x30e5d4u: goto label_30e5d4;
        case 0x30e5d8u: goto label_30e5d8;
        case 0x30e5dcu: goto label_30e5dc;
        case 0x30e5e0u: goto label_30e5e0;
        case 0x30e5e4u: goto label_30e5e4;
        case 0x30e5e8u: goto label_30e5e8;
        case 0x30e5ecu: goto label_30e5ec;
        case 0x30e5f0u: goto label_30e5f0;
        case 0x30e5f4u: goto label_30e5f4;
        case 0x30e5f8u: goto label_30e5f8;
        case 0x30e5fcu: goto label_30e5fc;
        case 0x30e600u: goto label_30e600;
        case 0x30e604u: goto label_30e604;
        case 0x30e608u: goto label_30e608;
        case 0x30e60cu: goto label_30e60c;
        case 0x30e610u: goto label_30e610;
        case 0x30e614u: goto label_30e614;
        case 0x30e618u: goto label_30e618;
        case 0x30e61cu: goto label_30e61c;
        case 0x30e620u: goto label_30e620;
        case 0x30e624u: goto label_30e624;
        case 0x30e628u: goto label_30e628;
        case 0x30e62cu: goto label_30e62c;
        case 0x30e630u: goto label_30e630;
        case 0x30e634u: goto label_30e634;
        case 0x30e638u: goto label_30e638;
        case 0x30e63cu: goto label_30e63c;
        case 0x30e640u: goto label_30e640;
        case 0x30e644u: goto label_30e644;
        case 0x30e648u: goto label_30e648;
        case 0x30e64cu: goto label_30e64c;
        default: break;
    }

    ctx->pc = 0x30e5b0u;

label_30e5b0:
    // 0x30e5b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x30e5b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_30e5b4:
    // 0x30e5b4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x30e5b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_30e5b8:
    // 0x30e5b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30e5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_30e5bc:
    // 0x30e5bc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x30e5bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_30e5c0:
    // 0x30e5c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30e5c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_30e5c4:
    // 0x30e5c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x30e5c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_30e5c8:
    // 0x30e5c8: 0xc08a61a  jal         func_229868
label_30e5cc:
    if (ctx->pc == 0x30E5CCu) {
        ctx->pc = 0x30E5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E5C8u;
        // 0x30e5cc: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30E5D0u;
        goto label_30e5d0;
    }
    ctx->pc = 0x30E5C8u;
    SET_GPR_U32(ctx, 31, 0x30E5D0u);
    ctx->pc = 0x30E5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30E5C8u;
    // 0x30e5cc: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x30E5C8u, 0x30E5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E5D0u;
label_30e5d0:
    // 0x30e5d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x30e5d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30e5d4:
    // 0x30e5d4: 0x10a00021  beqz        $a1, . + 4 + (0x21 << 2)
label_30e5d8:
    if (ctx->pc == 0x30E5D8u) {
        ctx->pc = 0x30E5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E5D4u;
        // 0x30e5d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30E5DCu;
        goto label_30e5dc;
    }
    ctx->pc = 0x30E5D4u;
    {
        const bool branch_taken_0x30e5d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E5D4u;
        // 0x30e5d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e5d4) {
            ctx->pc = 0x30E65Cu;
            return;
        }
    }
    ctx->pc = 0x30E5DCu;
label_30e5dc:
    // 0x30e5dc: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x30e5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_30e5e0:
    // 0x30e5e0: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x30e5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_30e5e4:
    // 0x30e5e4: 0x2c830016  sltiu       $v1, $a0, 0x16
    ctx->pc = 0x30e5e4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)22) ? 1 : 0);
label_30e5e8:
    // 0x30e5e8: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
label_30e5ec:
    if (ctx->pc == 0x30E5ECu) {
        ctx->pc = 0x30E5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E5E8u;
        // 0x30e5ec: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30E5F0u;
        goto label_30e5f0;
    }
    ctx->pc = 0x30E5E8u;
    {
        const bool branch_taken_0x30e5e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E5E8u;
        // 0x30e5ec: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e5e8) {
            ctx->pc = 0x30E658u;
            return;
        }
    }
    ctx->pc = 0x30E5F0u;
label_30e5f0:
    // 0x30e5f0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x30e5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_30e5f4:
    // 0x30e5f4: 0x2442d3b0  addiu       $v0, $v0, -0x2C50
    ctx->pc = 0x30e5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955952));
label_30e5f8:
    // 0x30e5f8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x30e5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_30e5fc:
    // 0x30e5fc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x30e5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_30e600:
    // 0x30e600: 0x800008  jr          $a0
label_30e604:
    if (ctx->pc == 0x30E604u) {
        ctx->pc = 0x30E608u;
        goto label_30e608;
    }
    ctx->pc = 0x30E600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x30E608u: goto label_30e608;
            case 0x30E618u: goto label_30e618;
            case 0x30E630u: goto label_30e630;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30E600u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x30E608u;
label_30e608:
    // 0x30e608: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x30e608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_30e60c:
    // 0x30e60c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30e60cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30e610:
    // 0x30e610: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_30e614:
    if (ctx->pc == 0x30E614u) {
        ctx->pc = 0x30E614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E610u;
        // 0x30e614: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30E618u;
        goto label_30e618;
    }
    ctx->pc = 0x30E610u;
    {
        const bool branch_taken_0x30e610 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x30e610) {
            ctx->pc = 0x30E614u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30E610u;
            // 0x30e614: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30E628u;
            goto label_30e628;
        }
    }
    ctx->pc = 0x30E618u;
label_30e618:
    // 0x30e618: 0xc0c3876  jal         func_30E1D8
label_30e61c:
    if (ctx->pc == 0x30E61Cu) {
        ctx->pc = 0x30E61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E618u;
        // 0x30e61c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30E620u;
        goto label_30e620;
    }
    ctx->pc = 0x30E618u;
    SET_GPR_U32(ctx, 31, 0x30E620u);
    ctx->pc = 0x30E61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30E618u;
    // 0x30e61c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E1D8u, 0x30E618u, 0x30E620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E620u;
label_30e620:
    // 0x30e620: 0x1000000e  b           . + 4 + (0xE << 2)
label_30e624:
    if (ctx->pc == 0x30E624u) {
        ctx->pc = 0x30E624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E620u;
        // 0x30e624: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30E628u;
        goto label_30e628;
    }
    ctx->pc = 0x30E620u;
    {
        const bool branch_taken_0x30e620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E620u;
        // 0x30e624: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e620) {
            ctx->pc = 0x30E65Cu;
            return;
        }
    }
    ctx->pc = 0x30E628u;
label_30e628:
    // 0x30e628: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_30e62c:
    if (ctx->pc == 0x30E62Cu) {
        ctx->pc = 0x30E62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E628u;
        // 0x30e62c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30E630u;
        goto label_30e630;
    }
    ctx->pc = 0x30E628u;
    {
        const bool branch_taken_0x30e628 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30E62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E628u;
        // 0x30e62c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e628) {
            ctx->pc = 0x30E65Cu;
            return;
        }
    }
    ctx->pc = 0x30E630u;
label_30e630:
    // 0x30e630: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x30e630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_30e634:
    // 0x30e634: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x30e634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30e638:
    // 0x30e638: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x30e638u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_30e63c:
    // 0x30e63c: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x30e63cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_30e640:
    // 0x30e640: 0x60f809  jalr        $v1
label_30e644:
    if (ctx->pc == 0x30E644u) {
        ctx->pc = 0x30E644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E640u;
        // 0x30e644: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30E648u;
        goto label_30e648;
    }
    ctx->pc = 0x30E640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x30E648u);
        ctx->pc = 0x30E644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E640u;
        // 0x30e644: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30E640u, 0x30E648u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30E648u;
label_30e648:
    // 0x30e648: 0x10000004  b           . + 4 + (0x4 << 2)
label_30e64c:
    if (ctx->pc == 0x30E64Cu) {
        ctx->pc = 0x30E64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E648u;
        // 0x30e64c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30E650u;
        goto label_fallthrough_0x30e648;
    }
    ctx->pc = 0x30E648u;
    {
        const bool branch_taken_0x30e648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E648u;
        // 0x30e64c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e648) {
            ctx->pc = 0x30E65Cu;
            return;
        }
    }
label_fallthrough_0x30e648:
    ctx->pc = 0x30E650u;
}
