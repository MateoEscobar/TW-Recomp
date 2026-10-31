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

// Function: sub_00333168
// Address: 0x333168 - 0x333268
void sub_00333168_0x333168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00333168_0x333168");
#endif

    switch (ctx->pc) {
        case 0x333190u: goto label_333190;
        case 0x3331a4u: goto label_3331a4;
        case 0x3331b8u: goto label_3331b8;
        case 0x3331ccu: goto label_3331cc;
        case 0x3331dcu: goto label_3331dc;
        case 0x3331f0u: goto label_3331f0;
        case 0x333208u: goto label_333208;
        case 0x33321cu: goto label_33321c;
        case 0x333230u: goto label_333230;
        case 0x333244u: goto label_333244;
        default: break;
    }

    ctx->pc = 0x333168u;

    // 0x333168: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x333168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x33316c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x33316cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x333170: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x333170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x333174: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x333174u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333178: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x333178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x33317c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x33317cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333180: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x333180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x333184: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x333184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x333188: 0xc0ca4d4  jal         func_329350
    ctx->pc = 0x333188u;
    SET_GPR_U32(ctx, 31, 0x333190u);
    ctx->pc = 0x33318Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333188u;
    // 0x33318c: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329350u, 0x333188u, 0x333190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333190u;
label_333190:
    // 0x333190: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x333190u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333194: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x333194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333198: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x333198u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33319c: 0xc0ccb4a  jal         func_332D28
    ctx->pc = 0x33319Cu;
    SET_GPR_U32(ctx, 31, 0x3331A4u);
    ctx->pc = 0x3331A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33319Cu;
    // 0x3331a0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332D28u, 0x33319Cu, 0x3331A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3331A4u;
label_3331a4:
    // 0x3331a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3331a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3331a8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3331a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3331ac: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3331acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3331b0: 0xc0ccb26  jal         func_332C98
    ctx->pc = 0x3331B0u;
    SET_GPR_U32(ctx, 31, 0x3331B8u);
    ctx->pc = 0x3331B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3331B0u;
    // 0x3331b4: 0xae22003c  sw          $v0, 0x3C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332C98u, 0x3331B0u, 0x3331B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3331B8u;
label_3331b8:
    // 0x3331b8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3331b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3331bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3331bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3331c0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3331c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3331c4: 0xc0ccb26  jal         func_332C98
    ctx->pc = 0x3331C4u;
    SET_GPR_U32(ctx, 31, 0x3331CCu);
    ctx->pc = 0x3331C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3331C4u;
    // 0x3331c8: 0xae220038  sw          $v0, 0x38($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332C98u, 0x3331C4u, 0x3331CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3331CCu;
label_3331cc:
    // 0x3331cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3331ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3331d0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3331d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3331d4: 0xc0cca8e  jal         func_332A38
    ctx->pc = 0x3331D4u;
    SET_GPR_U32(ctx, 31, 0x3331DCu);
    ctx->pc = 0x3331D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3331D4u;
    // 0x3331d8: 0xa6220020  sh          $v0, 0x20($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 32), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332A38u, 0x3331D4u, 0x3331DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3331DCu;
label_3331dc:
    // 0x3331dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3331dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3331e0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3331e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3331e4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3331e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3331e8: 0xc0ccb26  jal         func_332C98
    ctx->pc = 0x3331E8u;
    SET_GPR_U32(ctx, 31, 0x3331F0u);
    ctx->pc = 0x3331ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3331E8u;
    // 0x3331ec: 0xa6220022  sh          $v0, 0x22($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 34), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332C98u, 0x3331E8u, 0x3331F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3331F0u;
label_3331f0:
    // 0x3331f0: 0xa6220024  sh          $v0, 0x24($s1)
    ctx->pc = 0x3331f0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 36), (uint16_t)GPR_U32(ctx, 2));
    // 0x3331f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3331f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3331f8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3331f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3331fc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3331fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333200: 0xc0ccba2  jal         func_332E88
    ctx->pc = 0x333200u;
    SET_GPR_U32(ctx, 31, 0x333208u);
    ctx->pc = 0x333204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333200u;
    // 0x333204: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332E88u, 0x333200u, 0x333208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333208u;
label_333208:
    // 0x333208: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x333208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33320c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x33320cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333210: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x333210u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333214: 0xc0ccbe0  jal         func_332F80
    ctx->pc = 0x333214u;
    SET_GPR_U32(ctx, 31, 0x33321Cu);
    ctx->pc = 0x333218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333214u;
    // 0x333218: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332F80u, 0x333214u, 0x33321Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33321Cu;
label_33321c:
    // 0x33321c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33321cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333220: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x333220u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333224: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x333224u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333228: 0xc0ccc04  jal         func_333010
    ctx->pc = 0x333228u;
    SET_GPR_U32(ctx, 31, 0x333230u);
    ctx->pc = 0x33322Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333228u;
    // 0x33322c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x333010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333010u, 0x333228u, 0x333230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333230u;
label_333230:
    // 0x333230: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x333230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333234: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x333234u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333238: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x333238u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33323c: 0xc0ccb6c  jal         func_332DB0
    ctx->pc = 0x33323Cu;
    SET_GPR_U32(ctx, 31, 0x333244u);
    ctx->pc = 0x333240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33323Cu;
    // 0x333240: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332DB0u, 0x33323Cu, 0x333244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333244u;
label_333244:
    // 0x333244: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x333244u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333248: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x333248u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x33324c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x33324cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x333250: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x333250u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x333254: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x333254u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x333258: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x333258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33325c: 0x3e00008  jr          $ra
    ctx->pc = 0x33325Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x333260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33325Cu;
        // 0x333260: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33325Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x333264u;
    // 0x333264: 0x0  nop
    ctx->pc = 0x333264u;
    // NOP
    ctx->pc = 0x333268u;
}
