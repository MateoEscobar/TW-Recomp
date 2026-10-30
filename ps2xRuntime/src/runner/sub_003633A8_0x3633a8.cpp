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

// Function: sub_003633A8
// Address: 0x3633a8 - 0x3634c8
void sub_003633A8_0x3633a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003633A8_0x3633a8");
#endif

    switch (ctx->pc) {
        case 0x3633e0u: goto label_3633e0;
        case 0x3633e8u: goto label_3633e8;
        case 0x3633fcu: goto label_3633fc;
        case 0x363404u: goto label_363404;
        case 0x363418u: goto label_363418;
        case 0x36342cu: goto label_36342c;
        case 0x363434u: goto label_363434;
        case 0x36344cu: goto label_36344c;
        case 0x363454u: goto label_363454;
        case 0x363468u: goto label_363468;
        case 0x36347cu: goto label_36347c;
        case 0x36349cu: goto label_36349c;
        default: break;
    }

    ctx->pc = 0x3633a8u;

    // 0x3633a8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3633a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3633ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3633acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3633b0: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3633b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x3633b4: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3633b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x3633b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3633b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3633bc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3633bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3633c0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3633c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x3633c4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3633c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3633c8: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x3633c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x3633cc: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x3633ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x3633d0: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x3633d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x3633d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3633d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3633d8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3633D8u;
    SET_GPR_U32(ctx, 31, 0x3633E0u);
    ctx->pc = 0x3633DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3633D8u;
    // 0x3633dc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3633D8u, 0x3633E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3633E0u;
label_3633e0:
    // 0x3633e0: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3633E0u;
    SET_GPR_U32(ctx, 31, 0x3633E8u);
    ctx->pc = 0x3633E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3633E0u;
    // 0x3633e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3633E0u, 0x3633E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3633E8u;
label_3633e8:
    // 0x3633e8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3633e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3633ec: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x3633ecu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3633f0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3633f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3633f4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3633F4u;
    SET_GPR_U32(ctx, 31, 0x3633FCu);
    ctx->pc = 0x3633F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3633F4u;
    // 0x3633f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3633F4u, 0x3633FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3633FCu;
label_3633fc:
    // 0x3633fc: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3633FCu;
    SET_GPR_U32(ctx, 31, 0x363404u);
    ctx->pc = 0x363400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3633FCu;
    // 0x363400: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3633FCu, 0x363404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363404u;
label_363404:
    // 0x363404: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x363404u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363408: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x363408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36340c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x36340cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x363410: 0xc1024c6  jal         func_409318
    ctx->pc = 0x363410u;
    SET_GPR_U32(ctx, 31, 0x363418u);
    ctx->pc = 0x363414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363410u;
    // 0x363414: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x363410u, 0x363418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363418u;
label_363418:
    // 0x363418: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x363418u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36341c: 0x2a02b  sltu        $s4, $zero, $v0
    ctx->pc = 0x36341cu;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x363420: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x363420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x363424: 0xc102472  jal         func_4091C8
    ctx->pc = 0x363424u;
    SET_GPR_U32(ctx, 31, 0x36342Cu);
    ctx->pc = 0x363428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363424u;
    // 0x363428: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x363424u, 0x36342Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36342Cu;
label_36342c:
    // 0x36342c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36342Cu;
    SET_GPR_U32(ctx, 31, 0x363434u);
    ctx->pc = 0x363430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36342Cu;
    // 0x363430: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36342Cu, 0x363434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363434u;
label_363434:
    // 0x363434: 0x34068010  ori         $a2, $zero, 0x8010
    ctx->pc = 0x363434u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32784);
    // 0x363438: 0x633fc  dsll32      $a2, $a2, 15
    ctx->pc = 0x363438u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 15));
    // 0x36343c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x36343cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363440: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x363440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x363444: 0xc102472  jal         func_4091C8
    ctx->pc = 0x363444u;
    SET_GPR_U32(ctx, 31, 0x36344Cu);
    ctx->pc = 0x363448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363444u;
    // 0x363448: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x363444u, 0x36344Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36344Cu;
label_36344c:
    // 0x36344c: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x36344Cu;
    SET_GPR_U32(ctx, 31, 0x363454u);
    ctx->pc = 0x363450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36344Cu;
    // 0x363450: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x36344Cu, 0x363454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363454u;
label_363454:
    // 0x363454: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x363454u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363458: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x363458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36345c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x36345cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x363460: 0xc102488  jal         func_409220
    ctx->pc = 0x363460u;
    SET_GPR_U32(ctx, 31, 0x363468u);
    ctx->pc = 0x363464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363460u;
    // 0x363464: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x363460u, 0x363468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363468u;
label_363468:
    // 0x363468: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x363468u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36346c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36346cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363470: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x363470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x363474: 0xc1024c6  jal         func_409318
    ctx->pc = 0x363474u;
    SET_GPR_U32(ctx, 31, 0x36347Cu);
    ctx->pc = 0x363478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363474u;
    // 0x363478: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x363474u, 0x36347Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36347Cu;
label_36347c:
    // 0x36347c: 0x2502b  sltu        $t2, $zero, $v0
    ctx->pc = 0x36347cu;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x363480: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x363480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363484: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x363484u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363488: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x363488u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36348c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x36348cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363490: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x363490u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363494: 0xc0aaf4e  jal         func_2ABD38
    ctx->pc = 0x363494u;
    SET_GPR_U32(ctx, 31, 0x36349Cu);
    ctx->pc = 0x363498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363494u;
    // 0x363498: 0x220482d  daddu       $t1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABD38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABD38u, 0x363494u, 0x36349Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36349Cu;
label_36349c:
    // 0x36349c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x36349cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3634a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3634a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3634a4: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x3634a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3634a8: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x3634a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3634ac: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3634acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3634b0: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x3634b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3634b4: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x3634b4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3634b8: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x3634b8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3634bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3634bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3634c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3634C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3634C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3634C0u;
        // 0x3634c4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3634C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3634C8u;
}
