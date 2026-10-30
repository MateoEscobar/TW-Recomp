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

// Function: sub_002DDB40
// Address: 0x2ddb40 - 0x2ddbd0
void sub_002DDB40_0x2ddb40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DDB40_0x2ddb40");
#endif

    switch (ctx->pc) {
        case 0x2ddb6cu: goto label_2ddb6c;
        case 0x2ddb74u: goto label_2ddb74;
        case 0x2ddb84u: goto label_2ddb84;
        case 0x2ddb8cu: goto label_2ddb8c;
        case 0x2ddba8u: goto label_2ddba8;
        case 0x2ddbb4u: goto label_2ddbb4;
        default: break;
    }

    ctx->pc = 0x2ddb40u;

    // 0x2ddb40: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2ddb40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2ddb44: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2ddb44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2ddb48: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ddb48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2ddb4c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2ddb4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddb50: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x2ddb50u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2ddb54: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2ddb54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddb58: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2ddb58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2ddb5c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2ddb5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2ddb60: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ddb60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ddb64: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2DDB64u;
    SET_GPR_U32(ctx, 31, 0x2DDB6Cu);
    ctx->pc = 0x2DDB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDB64u;
    // 0x2ddb68: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2DDB64u, 0x2DDB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDB6Cu;
label_2ddb6c:
    // 0x2ddb6c: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2DDB6Cu;
    SET_GPR_U32(ctx, 31, 0x2DDB74u);
    ctx->pc = 0x2DDB70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDB6Cu;
    // 0x2ddb70: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2DDB6Cu, 0x2DDB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDB74u;
label_2ddb74:
    // 0x2ddb74: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2DDB74u;
    {
        const bool branch_taken_0x2ddb74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DDB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDB74u;
        // 0x2ddb78: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddb74) {
            ctx->pc = 0x2DDBB8u;
            goto label_2ddbb8;
        }
    }
    ctx->pc = 0x2DDB7Cu;
    // 0x2ddb7c: 0xc087502  jal         func_21D408
    ctx->pc = 0x2DDB7Cu;
    SET_GPR_U32(ctx, 31, 0x2DDB84u);
    ctx->pc = 0x2DDB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDB7Cu;
    // 0x2ddb80: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2DDB7Cu, 0x2DDB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDB84u;
label_2ddb84:
    // 0x2ddb84: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2DDB84u;
    SET_GPR_U32(ctx, 31, 0x2DDB8Cu);
    ctx->pc = 0x2DDB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDB84u;
    // 0x2ddb88: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2DDB84u, 0x2DDB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDB8Cu;
label_2ddb8c:
    // 0x2ddb8c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ddb8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddb90: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DDB90u;
    {
        const bool branch_taken_0x2ddb90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DDB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDB90u;
        // 0x2ddb94: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddb90) {
            ctx->pc = 0x2DDBA8u;
            goto label_2ddba8;
        }
    }
    ctx->pc = 0x2DDB98u;
    // 0x2ddb98: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2ddb98u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2ddb9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ddb9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddba0: 0xc0b76f4  jal         func_2DDBD0
    ctx->pc = 0x2DDBA0u;
    SET_GPR_U32(ctx, 31, 0x2DDBA8u);
    ctx->pc = 0x2DDBA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDBA0u;
    // 0x2ddba4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDBD0u, 0x2DDBA0u, 0x2DDBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDBA8u;
label_2ddba8:
    // 0x2ddba8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ddba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddbac: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x2DDBACu;
    SET_GPR_U32(ctx, 31, 0x2DDBB4u);
    ctx->pc = 0x2DDBB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDBACu;
    // 0x2ddbb0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2DDBACu, 0x2DDBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDBB4u;
label_2ddbb4:
    // 0x2ddbb4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2ddbb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2ddbb8:
    // 0x2ddbb8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2ddbb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ddbbc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ddbbcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ddbc0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ddbc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ddbc4: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x2ddbc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2ddbc8: 0x3e00008  jr          $ra
    ctx->pc = 0x2DDBC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DDBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDBC8u;
        // 0x2ddbcc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DDBC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DDBD0u;
}
