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

// Function: sub_00373528
// Address: 0x373528 - 0x3735d0
void sub_00373528_0x373528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00373528_0x373528");
#endif

    switch (ctx->pc) {
        case 0x373554u: goto label_373554;
        case 0x37355cu: goto label_37355c;
        case 0x373574u: goto label_373574;
        case 0x37357cu: goto label_37357c;
        case 0x373594u: goto label_373594;
        case 0x37359cu: goto label_37359c;
        case 0x3735acu: goto label_3735ac;
        default: break;
    }

    ctx->pc = 0x373528u;

    // 0x373528: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x373528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x37352c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37352cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x373530: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x373530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x373534: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x373534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x373538: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x373538u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37353c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x37353cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373540: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x373540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x373544: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x373544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x373548: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x373548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37354c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37354Cu;
    SET_GPR_U32(ctx, 31, 0x373554u);
    ctx->pc = 0x373550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37354Cu;
    // 0x373550: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37354Cu, 0x373554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373554u;
label_373554:
    // 0x373554: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x373554u;
    SET_GPR_U32(ctx, 31, 0x37355Cu);
    ctx->pc = 0x373558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373554u;
    // 0x373558: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x373554u, 0x37355Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37355Cu;
label_37355c:
    // 0x37355c: 0x29400  sll         $s2, $v0, 16
    ctx->pc = 0x37355cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x373560: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x373560u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373564: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x373564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x373568: 0x129403  sra         $s2, $s2, 16
    ctx->pc = 0x373568u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 18), 16));
    // 0x37356c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37356Cu;
    SET_GPR_U32(ctx, 31, 0x373574u);
    ctx->pc = 0x373570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37356Cu;
    // 0x373570: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37356Cu, 0x373574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373574u;
label_373574:
    // 0x373574: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x373574u;
    SET_GPR_U32(ctx, 31, 0x37357Cu);
    ctx->pc = 0x373578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373574u;
    // 0x373578: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x373574u, 0x37357Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37357Cu;
label_37357c:
    // 0x37357c: 0x28400  sll         $s0, $v0, 16
    ctx->pc = 0x37357cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x373580: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x373580u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373584: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x373584u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x373588: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x373588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37358c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37358Cu;
    SET_GPR_U32(ctx, 31, 0x373594u);
    ctx->pc = 0x373590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37358Cu;
    // 0x373590: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37358Cu, 0x373594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373594u;
label_373594:
    // 0x373594: 0xc10b108  jal         func_42C420
    ctx->pc = 0x373594u;
    SET_GPR_U32(ctx, 31, 0x37359Cu);
    ctx->pc = 0x373598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373594u;
    // 0x373598: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x373594u, 0x37359Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37359Cu;
label_37359c:
    // 0x37359c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x37359cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3735a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3735a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3735a4: 0xc05a8fe  jal         func_16A3F8
    ctx->pc = 0x3735A4u;
    SET_GPR_U32(ctx, 31, 0x3735ACu);
    ctx->pc = 0x3735A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3735A4u;
    // 0x3735a8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A3F8u, 0x3735A4u, 0x3735ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3735ACu;
label_3735ac:
    // 0x3735ac: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3735acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3735b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3735b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3735b4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3735b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3735b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3735b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3735bc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3735bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3735c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3735c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3735c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3735C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3735C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3735C4u;
        // 0x3735c8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3735C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3735CCu;
    // 0x3735cc: 0x0  nop
    ctx->pc = 0x3735ccu;
    // NOP
    ctx->pc = 0x3735d0u;
}
