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

// Function: sub_003604B0
// Address: 0x3604b0 - 0x360550
void sub_003604B0_0x3604b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003604B0_0x3604b0");
#endif

    switch (ctx->pc) {
        case 0x3604dcu: goto label_3604dc;
        case 0x3604e4u: goto label_3604e4;
        case 0x3604f8u: goto label_3604f8;
        case 0x360500u: goto label_360500;
        case 0x360514u: goto label_360514;
        case 0x36051cu: goto label_36051c;
        case 0x36052cu: goto label_36052c;
        default: break;
    }

    ctx->pc = 0x3604b0u;

    // 0x3604b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3604b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3604b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3604b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3604b8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3604b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x3604bc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3604bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3604c0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3604c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3604c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3604c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3604c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3604c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3604cc: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3604ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x3604d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3604d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3604d4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3604D4u;
    SET_GPR_U32(ctx, 31, 0x3604DCu);
    ctx->pc = 0x3604D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3604D4u;
    // 0x3604d8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3604D4u, 0x3604DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3604DCu;
label_3604dc:
    // 0x3604dc: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3604DCu;
    SET_GPR_U32(ctx, 31, 0x3604E4u);
    ctx->pc = 0x3604E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3604DCu;
    // 0x3604e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3604DCu, 0x3604E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3604E4u;
label_3604e4:
    // 0x3604e4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3604e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3604e8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3604e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3604ec: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3604ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3604f0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3604F0u;
    SET_GPR_U32(ctx, 31, 0x3604F8u);
    ctx->pc = 0x3604F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3604F0u;
    // 0x3604f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3604F0u, 0x3604F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3604F8u;
label_3604f8:
    // 0x3604f8: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x3604F8u;
    SET_GPR_U32(ctx, 31, 0x360500u);
    ctx->pc = 0x3604FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3604F8u;
    // 0x3604fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x3604F8u, 0x360500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360500u;
label_360500:
    // 0x360500: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x360500u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360504: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x360504u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360508: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x360508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36050c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36050Cu;
    SET_GPR_U32(ctx, 31, 0x360514u);
    ctx->pc = 0x360510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36050Cu;
    // 0x360510: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36050Cu, 0x360514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360514u;
label_360514:
    // 0x360514: 0xc10b108  jal         func_42C420
    ctx->pc = 0x360514u;
    SET_GPR_U32(ctx, 31, 0x36051Cu);
    ctx->pc = 0x360518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360514u;
    // 0x360518: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x360514u, 0x36051Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36051Cu;
label_36051c:
    // 0x36051c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x36051cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360520: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x360520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360524: 0xc0b71c2  jal         func_2DC708
    ctx->pc = 0x360524u;
    SET_GPR_U32(ctx, 31, 0x36052Cu);
    ctx->pc = 0x360528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360524u;
    // 0x360528: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC708u, 0x360524u, 0x36052Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36052Cu;
label_36052c:
    // 0x36052c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x36052cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x360530: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x360530u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360534: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x360534u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x360538: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x360538u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36053c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x36053cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x360540: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x360540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x360544: 0x3e00008  jr          $ra
    ctx->pc = 0x360544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x360548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360544u;
        // 0x360548: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x360544u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36054Cu;
    // 0x36054c: 0x0  nop
    ctx->pc = 0x36054cu;
    // NOP
    ctx->pc = 0x360550u;
}
