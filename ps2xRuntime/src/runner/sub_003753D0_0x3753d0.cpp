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

// Function: sub_003753D0
// Address: 0x3753d0 - 0x3754d8
void sub_003753D0_0x3753d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003753D0_0x3753d0");
#endif

    switch (ctx->pc) {
        case 0x375404u: goto label_375404;
        case 0x37540cu: goto label_37540c;
        case 0x375420u: goto label_375420;
        case 0x375428u: goto label_375428;
        case 0x375440u: goto label_375440;
        case 0x375448u: goto label_375448;
        case 0x375460u: goto label_375460;
        case 0x375468u: goto label_375468;
        case 0x37547cu: goto label_37547c;
        case 0x375490u: goto label_375490;
        case 0x3754acu: goto label_3754ac;
        default: break;
    }

    ctx->pc = 0x3753d0u;

    // 0x3753d0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3753d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3753d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3753d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3753d8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3753d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x3753dc: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3753dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x3753e0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3753e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3753e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3753e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3753e8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3753e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x3753ec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3753ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3753f0: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x3753f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x3753f4: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x3753f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x3753f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3753f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3753fc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3753FCu;
    SET_GPR_U32(ctx, 31, 0x375404u);
    ctx->pc = 0x375400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3753FCu;
    // 0x375400: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3753FCu, 0x375404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375404u;
label_375404:
    // 0x375404: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x375404u;
    SET_GPR_U32(ctx, 31, 0x37540Cu);
    ctx->pc = 0x375408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375404u;
    // 0x375408: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x375404u, 0x37540Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37540Cu;
label_37540c:
    // 0x37540c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37540cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375410: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x375410u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375414: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x375414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x375418: 0xc102472  jal         func_4091C8
    ctx->pc = 0x375418u;
    SET_GPR_U32(ctx, 31, 0x375420u);
    ctx->pc = 0x37541Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375418u;
    // 0x37541c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x375418u, 0x375420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375420u;
label_375420:
    // 0x375420: 0xc10b108  jal         func_42C420
    ctx->pc = 0x375420u;
    SET_GPR_U32(ctx, 31, 0x375428u);
    ctx->pc = 0x375424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375420u;
    // 0x375424: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x375420u, 0x375428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375428u;
label_375428:
    // 0x375428: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x375428u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x37542c: 0x633fc  dsll32      $a2, $a2, 15
    ctx->pc = 0x37542cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 15));
    // 0x375430: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x375430u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375434: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x375434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x375438: 0xc102472  jal         func_4091C8
    ctx->pc = 0x375438u;
    SET_GPR_U32(ctx, 31, 0x375440u);
    ctx->pc = 0x37543Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375438u;
    // 0x37543c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x375438u, 0x375440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375440u;
label_375440:
    // 0x375440: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x375440u;
    SET_GPR_U32(ctx, 31, 0x375448u);
    ctx->pc = 0x375444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375440u;
    // 0x375444: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x375440u, 0x375448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375448u;
label_375448:
    // 0x375448: 0x3406bff0  ori         $a2, $zero, 0xBFF0
    ctx->pc = 0x375448u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49136);
    // 0x37544c: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x37544cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x375450: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x375450u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375454: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x375454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x375458: 0xc102472  jal         func_4091C8
    ctx->pc = 0x375458u;
    SET_GPR_U32(ctx, 31, 0x375460u);
    ctx->pc = 0x37545Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375458u;
    // 0x37545c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x375458u, 0x375460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375460u;
label_375460:
    // 0x375460: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x375460u;
    SET_GPR_U32(ctx, 31, 0x375468u);
    ctx->pc = 0x375464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375460u;
    // 0x375464: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x375460u, 0x375468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375468u;
label_375468:
    // 0x375468: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x375468u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37546c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37546cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375470: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x375470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x375474: 0xc102488  jal         func_409220
    ctx->pc = 0x375474u;
    SET_GPR_U32(ctx, 31, 0x37547Cu);
    ctx->pc = 0x375478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375474u;
    // 0x375478: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x375474u, 0x37547Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37547Cu;
label_37547c:
    // 0x37547c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x37547cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375480: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x375480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375484: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x375484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x375488: 0xc1024c6  jal         func_409318
    ctx->pc = 0x375488u;
    SET_GPR_U32(ctx, 31, 0x375490u);
    ctx->pc = 0x37548Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375488u;
    // 0x37548c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x375488u, 0x375490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375490u;
label_375490:
    // 0x375490: 0x2482b  sltu        $t1, $zero, $v0
    ctx->pc = 0x375490u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x375494: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x375494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375498: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x375498u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37549c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x37549cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3754a0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x3754a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3754a4: 0xc0c58a6  jal         func_316298
    ctx->pc = 0x3754A4u;
    SET_GPR_U32(ctx, 31, 0x3754ACu);
    ctx->pc = 0x3754A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3754A4u;
    // 0x3754a8: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x316298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x316298u, 0x3754A4u, 0x3754ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3754ACu;
label_3754ac:
    // 0x3754ac: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3754acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3754b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3754b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3754b4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3754b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3754b8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3754b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3754bc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3754bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3754c0: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x3754c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3754c4: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x3754c4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3754c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3754c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3754cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3754CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3754D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3754CCu;
        // 0x3754d0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3754CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3754D4u;
    // 0x3754d4: 0x0  nop
    ctx->pc = 0x3754d4u;
    // NOP
    ctx->pc = 0x3754d8u;
}
