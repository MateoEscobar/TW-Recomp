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

// Function: sub_003619A8
// Address: 0x3619a8 - 0x361a50
void sub_003619A8_0x3619a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003619A8_0x3619a8");
#endif

    switch (ctx->pc) {
        case 0x3619d4u: goto label_3619d4;
        case 0x3619dcu: goto label_3619dc;
        case 0x3619f0u: goto label_3619f0;
        case 0x3619f8u: goto label_3619f8;
        case 0x361a10u: goto label_361a10;
        case 0x361a18u: goto label_361a18;
        case 0x361a2cu: goto label_361a2c;
        default: break;
    }

    ctx->pc = 0x3619a8u;

    // 0x3619a8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3619a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3619ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3619acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3619b0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3619b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3619b4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3619b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3619b8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3619b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3619bc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3619bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3619c0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3619c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x3619c4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3619c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x3619c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3619c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3619cc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3619CCu;
    SET_GPR_U32(ctx, 31, 0x3619D4u);
    ctx->pc = 0x3619D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3619CCu;
    // 0x3619d0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3619CCu, 0x3619D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3619D4u;
label_3619d4:
    // 0x3619d4: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3619D4u;
    SET_GPR_U32(ctx, 31, 0x3619DCu);
    ctx->pc = 0x3619D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3619D4u;
    // 0x3619d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3619D4u, 0x3619DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3619DCu;
label_3619dc:
    // 0x3619dc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3619dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3619e0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3619e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3619e4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3619e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3619e8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3619E8u;
    SET_GPR_U32(ctx, 31, 0x3619F0u);
    ctx->pc = 0x3619ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3619E8u;
    // 0x3619ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3619E8u, 0x3619F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3619F0u;
label_3619f0:
    // 0x3619f0: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x3619F0u;
    SET_GPR_U32(ctx, 31, 0x3619F8u);
    ctx->pc = 0x3619F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3619F0u;
    // 0x3619f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x3619F0u, 0x3619F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3619F8u;
label_3619f8:
    // 0x3619f8: 0x28400  sll         $s0, $v0, 16
    ctx->pc = 0x3619f8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x3619fc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3619fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361a00: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x361a00u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x361a04: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x361a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361a08: 0xc102472  jal         func_4091C8
    ctx->pc = 0x361A08u;
    SET_GPR_U32(ctx, 31, 0x361A10u);
    ctx->pc = 0x361A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361A08u;
    // 0x361a0c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x361A08u, 0x361A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361A10u;
label_361a10:
    // 0x361a10: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x361A10u;
    SET_GPR_U32(ctx, 31, 0x361A18u);
    ctx->pc = 0x361A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361A10u;
    // 0x361a14: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x361A10u, 0x361A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361A18u;
label_361a18:
    // 0x361a18: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x361a18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x361a1c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x361a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361a20: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x361a20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361a24: 0xc0b0308  jal         func_2C0C20
    ctx->pc = 0x361A24u;
    SET_GPR_U32(ctx, 31, 0x361A2Cu);
    ctx->pc = 0x361A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361A24u;
    // 0x361a28: 0x23403  sra         $a2, $v0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0C20u, 0x361A24u, 0x361A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361A2Cu;
label_361a2c:
    // 0x361a2c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x361a2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x361a30: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x361a30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361a34: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x361a34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x361a38: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x361a38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x361a3c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x361a3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x361a40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x361a40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x361a44: 0x3e00008  jr          $ra
    ctx->pc = 0x361A44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x361A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361A44u;
        // 0x361a48: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x361A44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x361A4Cu;
    // 0x361a4c: 0x0  nop
    ctx->pc = 0x361a4cu;
    // NOP
    ctx->pc = 0x361a50u;
}
