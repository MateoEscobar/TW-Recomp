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

// Function: sub_0016A5E8
// Address: 0x16a5e8 - 0x16a670
void sub_0016A5E8_0x16a5e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016A5E8_0x16a5e8");
#endif

    switch (ctx->pc) {
        case 0x16a618u: goto label_16a618;
        case 0x16a620u: goto label_16a620;
        case 0x16a628u: goto label_16a628;
        case 0x16a630u: goto label_16a630;
        case 0x16a640u: goto label_16a640;
        default: break;
    }

    ctx->pc = 0x16a5e8u;

    // 0x16a5e8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16a5e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16a5ec: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x16a5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x16a5f0: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x16a5f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x16a5f4: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x16a5f4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x16a5f8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x16a5f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x16a5fc: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x16a5fcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x16a600: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16a600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16a604: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16a604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16a608: 0x10820012  beq         $a0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x16A608u;
    {
        const bool branch_taken_0x16a608 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x16A60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A608u;
        // 0x16a60c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a608) {
            ctx->pc = 0x16A654u;
            goto label_16a654;
        }
    }
    ctx->pc = 0x16A610u;
    // 0x16a610: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x16A610u;
    SET_GPR_U32(ctx, 31, 0x16A618u);
    ctx->pc = 0x16A614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A610u;
    // 0x16a614: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x16A610u, 0x16A618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A618u;
label_16a618:
    // 0x16a618: 0x24510048  addiu       $s1, $v0, 0x48
    ctx->pc = 0x16a618u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x16a61c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16a61cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16a620:
    // 0x16a620: 0xc137866  jal         func_4DE198
    ctx->pc = 0x16A620u;
    SET_GPR_U32(ctx, 31, 0x16A628u);
    ctx->pc = 0x16A624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A620u;
    // 0x16a624: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE198u, 0x16A620u, 0x16A628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A628u;
label_16a628:
    // 0x16a628: 0xc0e409a  jal         func_390268
    ctx->pc = 0x16A628u;
    SET_GPR_U32(ctx, 31, 0x16A630u);
    ctx->pc = 0x16A62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A628u;
    // 0x16a62c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x16A628u, 0x16A630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A630u;
label_16a630:
    // 0x16a630: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x16A630u;
    {
        const bool branch_taken_0x16a630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a630) {
            ctx->pc = 0x16A634u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16A630u;
            // 0x16a634: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16A648u;
            goto label_16a648;
        }
    }
    ctx->pc = 0x16A638u;
    // 0x16a638: 0xc087502  jal         func_21D408
    ctx->pc = 0x16A638u;
    SET_GPR_U32(ctx, 31, 0x16A640u);
    ctx->pc = 0x16A63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A638u;
    // 0x16a63c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x16A638u, 0x16A640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A640u;
label_16a640:
    // 0x16a640: 0xe4540130  swc1        $f20, 0x130($v0)
    ctx->pc = 0x16a640u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 304), bits); }
    // 0x16a644: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x16a644u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_16a648:
    // 0x16a648: 0x2e020010  sltiu       $v0, $s0, 0x10
    ctx->pc = 0x16a648u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x16a64c: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x16A64Cu;
    {
        const bool branch_taken_0x16a64c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16a64c) {
            ctx->pc = 0x16A650u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16A64Cu;
            // 0x16a650: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16A620u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16a620;
        }
    }
    ctx->pc = 0x16A654u;
label_16a654:
    // 0x16a654: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x16a654u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16a658: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16a658u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16a65c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16a65cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a660: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x16a660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x16a664: 0x3e00008  jr          $ra
    ctx->pc = 0x16A664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A664u;
        // 0x16a668: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A664u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16A66Cu;
    // 0x16a66c: 0x0  nop
    ctx->pc = 0x16a66cu;
    // NOP
    ctx->pc = 0x16a670u;
}
