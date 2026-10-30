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

// Function: sub_00238690
// Address: 0x238690 - 0x238748
void sub_00238690_0x238690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00238690_0x238690");
#endif

    switch (ctx->pc) {
        case 0x2386b8u: goto label_2386b8;
        case 0x2386c0u: goto label_2386c0;
        case 0x238708u: goto label_238708;
        case 0x23872cu: goto label_23872c;
        default: break;
    }

    ctx->pc = 0x238690u;

    // 0x238690: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x238690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x238694: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x238694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x238698: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x238698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x23869c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x23869cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2386a0: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2386a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2386a4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2386a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2386a8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2386a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2386ac: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2386acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2386b0: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2386B0u;
    SET_GPR_U32(ctx, 31, 0x2386B8u);
    ctx->pc = 0x2386B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2386B0u;
    // 0x2386b4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2386B0u, 0x2386B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2386B8u;
label_2386b8:
    // 0x2386b8: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2386B8u;
    SET_GPR_U32(ctx, 31, 0x2386C0u);
    ctx->pc = 0x2386BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2386B8u;
    // 0x2386bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2386B8u, 0x2386C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2386C0u;
label_2386c0:
    // 0x2386c0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2386c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2386c4: 0x12200019  beqz        $s1, . + 4 + (0x19 << 2)
    ctx->pc = 0x2386C4u;
    {
        const bool branch_taken_0x2386c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2386C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2386C4u;
        // 0x2386c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2386c4) {
            ctx->pc = 0x23872Cu;
            goto label_23872c;
        }
    }
    ctx->pc = 0x2386CCu;
    // 0x2386cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2386ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2386d0: 0x52020012  beql        $s0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2386D0u;
    {
        const bool branch_taken_0x2386d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2386d0) {
            ctx->pc = 0x2386D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2386D0u;
            // 0x2386d4: 0x24100198  addiu       $s0, $zero, 0x198 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 408));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23871Cu;
            goto label_23871c;
        }
    }
    ctx->pc = 0x2386D8u;
    // 0x2386d8: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2386D8u;
    {
        const bool branch_taken_0x2386d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2386DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2386D8u;
        // 0x2386dc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2386d8) {
            ctx->pc = 0x2386F8u;
            goto label_2386f8;
        }
    }
    ctx->pc = 0x2386E0u;
    // 0x2386e0: 0x1202000b  beq         $s0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2386E0u;
    {
        const bool branch_taken_0x2386e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2386E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2386E0u;
        // 0x2386e4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2386e0) {
            ctx->pc = 0x238710u;
            goto label_238710;
        }
    }
    ctx->pc = 0x2386E8u;
    // 0x2386e8: 0x1202000b  beq         $s0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2386E8u;
    {
        const bool branch_taken_0x2386e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2386ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2386E8u;
        // 0x2386ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2386e8) {
            ctx->pc = 0x238718u;
            goto label_238718;
        }
    }
    ctx->pc = 0x2386F0u;
    // 0x2386f0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2386F0u;
    {
        const bool branch_taken_0x2386f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2386F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2386F0u;
        // 0x2386f4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2386f0) {
            ctx->pc = 0x238730u;
            goto label_238730;
        }
    }
    ctx->pc = 0x2386F8u;
label_2386f8:
    // 0x2386f8: 0x24100184  addiu       $s0, $zero, 0x184
    ctx->pc = 0x2386f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 388));
    // 0x2386fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2386fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238700: 0xc087612  jal         func_21D848
    ctx->pc = 0x238700u;
    SET_GPR_U32(ctx, 31, 0x238708u);
    ctx->pc = 0x238704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238700u;
    // 0x238704: 0x2e450001  sltiu       $a1, $s2, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D848u, 0x238700u, 0x238708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238708u;
label_238708:
    // 0x238708: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x238708u;
    {
        const bool branch_taken_0x238708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23870Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238708u;
        // 0x23870c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238708) {
            ctx->pc = 0x238720u;
            goto label_238720;
        }
    }
    ctx->pc = 0x238710u;
label_238710:
    // 0x238710: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x238710u;
    {
        const bool branch_taken_0x238710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238710u;
        // 0x238714: 0x2410019a  addiu       $s0, $zero, 0x19A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 410));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238710) {
            ctx->pc = 0x23871Cu;
            goto label_23871c;
        }
    }
    ctx->pc = 0x238718u;
label_238718:
    // 0x238718: 0x2410029c  addiu       $s0, $zero, 0x29C
    ctx->pc = 0x238718u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
label_23871c:
    // 0x23871c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23871cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_238720:
    // 0x238720: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x238720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238724: 0xc0886a8  jal         func_221AA0
    ctx->pc = 0x238724u;
    SET_GPR_U32(ctx, 31, 0x23872Cu);
    ctx->pc = 0x238728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238724u;
    // 0x238728: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221AA0u, 0x238724u, 0x23872Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23872Cu;
label_23872c:
    // 0x23872c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x23872cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_238730:
    // 0x238730: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x238730u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x238734: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x238734u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x238738: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x238738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23873c: 0x3e00008  jr          $ra
    ctx->pc = 0x23873Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23873Cu;
        // 0x238740: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23873Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x238744u;
    // 0x238744: 0x0  nop
    ctx->pc = 0x238744u;
    // NOP
    ctx->pc = 0x238748u;
}
