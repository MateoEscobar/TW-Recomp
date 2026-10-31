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

// Function: sub_0032E820
// Address: 0x32e820 - 0x32e900
void sub_0032E820_0x32e820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032E820_0x32e820");
#endif

    switch (ctx->pc) {
        case 0x32e850u: goto label_32e850;
        case 0x32e864u: goto label_32e864;
        case 0x32e86cu: goto label_32e86c;
        case 0x32e878u: goto label_32e878;
        case 0x32e884u: goto label_32e884;
        case 0x32e88cu: goto label_32e88c;
        case 0x32e894u: goto label_32e894;
        case 0x32e8a4u: goto label_32e8a4;
        case 0x32e8acu: goto label_32e8ac;
        case 0x32e8bcu: goto label_32e8bc;
        case 0x32e8d0u: goto label_32e8d0;
        case 0x32e8dcu: goto label_32e8dc;
        default: break;
    }

    ctx->pc = 0x32e820u;

    // 0x32e820: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x32e820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x32e824: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x32e824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x32e828: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x32e828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x32e82c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x32e82cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e830: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x32e830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x32e834: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x32e834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x32e838: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x32e838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x32e83c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x32e83cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e840: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x32e840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x32e844: 0x8e300028  lw          $s0, 0x28($s1)
    ctx->pc = 0x32e844u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x32e848: 0xc0c99d0  jal         func_326740
    ctx->pc = 0x32E848u;
    SET_GPR_U32(ctx, 31, 0x32E850u);
    ctx->pc = 0x32E84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E848u;
    // 0x32e84c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326740u, 0x32E848u, 0x32E850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E850u;
label_32e850:
    // 0x32e850: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x32e850u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x32e854: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x32e854u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e858: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x32e858u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e85c: 0xc0cb542  jal         func_32D508
    ctx->pc = 0x32E85Cu;
    SET_GPR_U32(ctx, 31, 0x32E864u);
    ctx->pc = 0x32E860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E85Cu;
    // 0x32e860: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D508u, 0x32E85Cu, 0x32E864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E864u;
label_32e864:
    // 0x32e864: 0xc0cb2fa  jal         func_32CBE8
    ctx->pc = 0x32E864u;
    SET_GPR_U32(ctx, 31, 0x32E86Cu);
    ctx->pc = 0x32E868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E864u;
    // 0x32e868: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CBE8u, 0x32E864u, 0x32E86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E86Cu;
label_32e86c:
    // 0x32e86c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x32e86cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e870: 0xc0cb9f8  jal         func_32E7E0
    ctx->pc = 0x32E870u;
    SET_GPR_U32(ctx, 31, 0x32E878u);
    ctx->pc = 0x32E874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E870u;
    // 0x32e874: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E7E0u, 0x32E870u, 0x32E878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E878u;
label_32e878:
    // 0x32e878: 0x24050103  addiu       $a1, $zero, 0x103
    ctx->pc = 0x32e878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 259));
    // 0x32e87c: 0xc0cb334  jal         func_32CCD0
    ctx->pc = 0x32E87Cu;
    SET_GPR_U32(ctx, 31, 0x32E884u);
    ctx->pc = 0x32E880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E87Cu;
    // 0x32e880: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CCD0u, 0x32E87Cu, 0x32E884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E884u;
label_32e884:
    // 0x32e884: 0xc0cb99c  jal         func_32E670
    ctx->pc = 0x32E884u;
    SET_GPR_U32(ctx, 31, 0x32E88Cu);
    ctx->pc = 0x32E888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E884u;
    // 0x32e888: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E670u, 0x32E884u, 0x32E88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E88Cu;
label_32e88c:
    // 0x32e88c: 0xc0c997c  jal         func_3265F0
    ctx->pc = 0x32E88Cu;
    SET_GPR_U32(ctx, 31, 0x32E894u);
    ctx->pc = 0x32E890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E88Cu;
    // 0x32e890: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3265F0u, 0x32E88Cu, 0x32E894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E894u;
label_32e894:
    // 0x32e894: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x32e894u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e898: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32e898u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e89c: 0xc0c9b72  jal         func_326DC8
    ctx->pc = 0x32E89Cu;
    SET_GPR_U32(ctx, 31, 0x32E8A4u);
    ctx->pc = 0x32E8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E89Cu;
    // 0x32e8a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326DC8u, 0x32E89Cu, 0x32E8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E8A4u;
label_32e8a4:
    // 0x32e8a4: 0xc0c99d0  jal         func_326740
    ctx->pc = 0x32E8A4u;
    SET_GPR_U32(ctx, 31, 0x32E8ACu);
    ctx->pc = 0x32E8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E8A4u;
    // 0x32e8a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326740u, 0x32E8A4u, 0x32E8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E8ACu;
label_32e8ac:
    // 0x32e8ac: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x32e8acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32e8b0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x32e8b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e8b4: 0xc0c9b72  jal         func_326DC8
    ctx->pc = 0x32E8B4u;
    SET_GPR_U32(ctx, 31, 0x32E8BCu);
    ctx->pc = 0x32E8B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E8B4u;
    // 0x32e8b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326DC8u, 0x32E8B4u, 0x32E8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E8BCu;
label_32e8bc:
    // 0x32e8bc: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x32e8bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e8c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32e8c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e8c4: 0x24050106  addiu       $a1, $zero, 0x106
    ctx->pc = 0x32e8c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 262));
    // 0x32e8c8: 0xc0cb358  jal         func_32CD60
    ctx->pc = 0x32E8C8u;
    SET_GPR_U32(ctx, 31, 0x32E8D0u);
    ctx->pc = 0x32E8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E8C8u;
    // 0x32e8cc: 0x24060112  addiu       $a2, $zero, 0x112 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 274));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CD60u, 0x32E8C8u, 0x32E8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E8D0u;
label_32e8d0:
    // 0x32e8d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32e8d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e8d4: 0xc0cb54a  jal         func_32D528
    ctx->pc = 0x32E8D4u;
    SET_GPR_U32(ctx, 31, 0x32E8DCu);
    ctx->pc = 0x32E8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E8D4u;
    // 0x32e8d8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D528u, 0x32E8D4u, 0x32E8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E8DCu;
label_32e8dc:
    // 0x32e8dc: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x32e8dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x32e8e0: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x32e8e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x32e8e4: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x32e8e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x32e8e8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x32e8e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x32e8ec: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x32e8ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32e8f0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x32e8f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32e8f4: 0x3e00008  jr          $ra
    ctx->pc = 0x32E8F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32E8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E8F4u;
        // 0x32e8f8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32E8F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32E8FCu;
    // 0x32e8fc: 0x0  nop
    ctx->pc = 0x32e8fcu;
    // NOP
    ctx->pc = 0x32e900u;
}
