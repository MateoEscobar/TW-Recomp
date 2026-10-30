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

// Function: sub_003A8100
// Address: 0x3a8100 - 0x3a8210
void sub_003A8100_0x3a8100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A8100_0x3a8100");
#endif

    switch (ctx->pc) {
        case 0x3a8178u: goto label_3a8178;
        case 0x3a81a8u: goto label_3a81a8;
        case 0x3a81b4u: goto label_3a81b4;
        case 0x3a81c0u: goto label_3a81c0;
        case 0x3a81ccu: goto label_3a81cc;
        case 0x3a81d8u: goto label_3a81d8;
        case 0x3a81e4u: goto label_3a81e4;
        default: break;
    }

    ctx->pc = 0x3a8100u;

    // 0x3a8100: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x3a8100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x3a8104: 0x79230000  lq          $v1, 0x0($t1)
    ctx->pc = 0x3a8104u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3a8108: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x3a8108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x3a810c: 0x3a0602d  daddu       $t4, $sp, $zero
    ctx->pc = 0x3a810cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8110: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x3a8110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x3a8114: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a8114u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8118: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x3a8118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x3a811c: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x3a811cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3a8120: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x3a8120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x3a8124: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x3a8124u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3a8128: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x3a8128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x3a812c: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x3a812cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3a8130: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x3a8130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x3a8134: 0x27b40040  addiu       $s4, $sp, 0x40
    ctx->pc = 0x3a8134u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3a8138: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3a8138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x3a813c: 0x27b50050  addiu       $s5, $sp, 0x50
    ctx->pc = 0x3a813cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3a8140: 0x79420000  lq          $v0, 0x0($t2)
    ctx->pc = 0x3a8140u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x3a8144: 0x78c40000  lq          $a0, 0x0($a2)
    ctx->pc = 0x3a8144u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3a8148: 0x78ab0000  lq          $t3, 0x0($a1)
    ctx->pc = 0x3a8148u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a814c: 0x78e50000  lq          $a1, 0x0($a3)
    ctx->pc = 0x3a814cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3a8150: 0x79060000  lq          $a2, 0x0($t0)
    ctx->pc = 0x3a8150u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3a8154: 0x7fa40010  sq          $a0, 0x10($sp)
    ctx->pc = 0x3a8154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 4));
    // 0x3a8158: 0x7fa50020  sq          $a1, 0x20($sp)
    ctx->pc = 0x3a8158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 5));
    // 0x3a815c: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x3a815cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x3a8160: 0x7fab0000  sq          $t3, 0x0($sp)
    ctx->pc = 0x3a8160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 11));
    // 0x3a8164: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x3a8164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3a8168: 0x7fa60030  sq          $a2, 0x30($sp)
    ctx->pc = 0x3a8168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 6));
    // 0x3a816c: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x3a816cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x3a8170: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3a8170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x3a8174: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3a8174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_3a8178:
    // 0x3a8178: 0x0  nop
    ctx->pc = 0x3a8178u;
    // NOP
    // 0x3a817c: 0x0  nop
    ctx->pc = 0x3a817cu;
    // NOP
    // 0x3a8180: 0x0  nop
    ctx->pc = 0x3a8180u;
    // NOP
    // 0x3a8184: 0x0  nop
    ctx->pc = 0x3a8184u;
    // NOP
    // 0x3a8188: 0x1485fffb  bne         $a0, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3A8188u;
    {
        const bool branch_taken_0x3a8188 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x3A818Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8188u;
        // 0x3a818c: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8188) {
            ctx->pc = 0x3A8178u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a8178;
        }
    }
    ctx->pc = 0x3A8190u;
    // 0x3a8190: 0x2602fff0  addiu       $v0, $s0, -0x10
    ctx->pc = 0x3a8190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x3a8194: 0xae100404  sw          $s0, 0x404($s0)
    ctx->pc = 0x3a8194u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1028), GPR_U32(ctx, 16));
    // 0x3a8198: 0x180282d  daddu       $a1, $t4, $zero
    ctx->pc = 0x3a8198u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a819c: 0xae020400  sw          $v0, 0x400($s0)
    ctx->pc = 0x3a819cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1024), GPR_U32(ctx, 2));
    // 0x3a81a0: 0xc0ea152  jal         func_3A8548
    ctx->pc = 0x3A81A0u;
    SET_GPR_U32(ctx, 31, 0x3A81A8u);
    ctx->pc = 0x3A81A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A81A0u;
    // 0x3a81a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8548u, 0x3A81A0u, 0x3A81A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A81A8u;
label_3a81a8:
    // 0x3a81a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3a81a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a81ac: 0xc0ea152  jal         func_3A8548
    ctx->pc = 0x3A81ACu;
    SET_GPR_U32(ctx, 31, 0x3A81B4u);
    ctx->pc = 0x3A81B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A81ACu;
    // 0x3a81b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8548u, 0x3A81ACu, 0x3A81B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A81B4u;
label_3a81b4:
    // 0x3a81b4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3a81b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a81b8: 0xc0ea152  jal         func_3A8548
    ctx->pc = 0x3A81B8u;
    SET_GPR_U32(ctx, 31, 0x3A81C0u);
    ctx->pc = 0x3A81BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A81B8u;
    // 0x3a81bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8548u, 0x3A81B8u, 0x3A81C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A81C0u;
label_3a81c0:
    // 0x3a81c0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3a81c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a81c4: 0xc0ea152  jal         func_3A8548
    ctx->pc = 0x3A81C4u;
    SET_GPR_U32(ctx, 31, 0x3A81CCu);
    ctx->pc = 0x3A81C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A81C4u;
    // 0x3a81c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8548u, 0x3A81C4u, 0x3A81CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A81CCu;
label_3a81cc:
    // 0x3a81cc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3a81ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a81d0: 0xc0ea152  jal         func_3A8548
    ctx->pc = 0x3A81D0u;
    SET_GPR_U32(ctx, 31, 0x3A81D8u);
    ctx->pc = 0x3A81D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A81D0u;
    // 0x3a81d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8548u, 0x3A81D0u, 0x3A81D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A81D8u;
label_3a81d8:
    // 0x3a81d8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3a81d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a81dc: 0xc0ea152  jal         func_3A8548
    ctx->pc = 0x3A81DCu;
    SET_GPR_U32(ctx, 31, 0x3A81E4u);
    ctx->pc = 0x3A81E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A81DCu;
    // 0x3a81e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8548u, 0x3A81DCu, 0x3A81E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A81E4u;
label_3a81e4:
    // 0x3a81e4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3a81e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a81e8: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x3a81e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3a81ec: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x3a81ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x3a81f0: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x3a81f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3a81f4: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x3a81f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3a81f8: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x3a81f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3a81fc: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x3a81fcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3a8200: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3a8200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3a8204: 0x3e00008  jr          $ra
    ctx->pc = 0x3A8204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A8208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8204u;
        // 0x3a8208: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A8204u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A820Cu;
    // 0x3a820c: 0x0  nop
    ctx->pc = 0x3a820cu;
    // NOP
    ctx->pc = 0x3a8210u;
}
