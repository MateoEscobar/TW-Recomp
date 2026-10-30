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

// Function: sub_0035EF48
// Address: 0x35ef48 - 0x35efc0
void sub_0035EF48_0x35ef48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035EF48_0x35ef48");
#endif

    switch (ctx->pc) {
        case 0x35ef70u: goto label_35ef70;
        case 0x35ef78u: goto label_35ef78;
        case 0x35ef8cu: goto label_35ef8c;
        case 0x35ef94u: goto label_35ef94;
        case 0x35efa4u: goto label_35efa4;
        default: break;
    }

    ctx->pc = 0x35ef48u;

    // 0x35ef48: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x35ef48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x35ef4c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35ef4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35ef50: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x35ef50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x35ef54: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x35ef54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x35ef58: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x35ef58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ef5c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x35ef5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ef60: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x35ef60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x35ef64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35ef64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35ef68: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35EF68u;
    SET_GPR_U32(ctx, 31, 0x35EF70u);
    ctx->pc = 0x35EF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EF68u;
    // 0x35ef6c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35EF68u, 0x35EF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EF70u;
label_35ef70:
    // 0x35ef70: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35EF70u;
    SET_GPR_U32(ctx, 31, 0x35EF78u);
    ctx->pc = 0x35EF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EF70u;
    // 0x35ef74: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35EF70u, 0x35EF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EF78u;
label_35ef78:
    // 0x35ef78: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x35ef78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ef7c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x35ef7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ef80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35ef80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ef84: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35EF84u;
    SET_GPR_U32(ctx, 31, 0x35EF8Cu);
    ctx->pc = 0x35EF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EF84u;
    // 0x35ef88: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35EF84u, 0x35EF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EF8Cu;
label_35ef8c:
    // 0x35ef8c: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x35EF8Cu;
    SET_GPR_U32(ctx, 31, 0x35EF94u);
    ctx->pc = 0x35EF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EF8Cu;
    // 0x35ef90: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x35EF8Cu, 0x35EF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EF94u;
label_35ef94:
    // 0x35ef94: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x35ef94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x35ef98: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x35ef98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ef9c: 0xc0a49c2  jal         func_292708
    ctx->pc = 0x35EF9Cu;
    SET_GPR_U32(ctx, 31, 0x35EFA4u);
    ctx->pc = 0x35EFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EF9Cu;
    // 0x35efa0: 0x22c03  sra         $a1, $v0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292708u, 0x35EF9Cu, 0x35EFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EFA4u;
label_35efa4:
    // 0x35efa4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x35efa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35efa8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35efa8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35efac: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x35efacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35efb0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x35efb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35efb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35efb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35efb8: 0x3e00008  jr          $ra
    ctx->pc = 0x35EFB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35EFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EFB8u;
        // 0x35efbc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35EFB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35EFC0u;
}
